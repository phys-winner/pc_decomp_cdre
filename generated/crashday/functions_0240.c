#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_007B6500(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6500u);

L_007B6500:
    eax = MEM32(0x9281A0); /* 0x007B6500: mov eax, dword ptr [0x9281a0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    eax = eax & 0xFFFFFFFEu; /* 0x007B6505: and eax, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x9281A0) = eax; /* 0x007B6508: mov dword ptr [0x9281a0], eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007B650D: ret  */
    RECOMP_REGS_OUT();
}

void sub_007B650E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B650Eu);

    goto L_007B650E;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B650E:
    edx = MEM32(esp + 0x8); /* 0x007B650E: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B6512: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x007B6515: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B6518: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B651A: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00840138u; /* 0x007B651F: mov eax, 0x840138 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B6524: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B6530(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6530u);

L_007B6530:
    ecx = ebp + (-0x2C); /* 0x007B6530: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x007B6533: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B6538(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6538u);

L_007B6538:
    eax = MEM32(0x928188); /* 0x007B6538: mov eax, dword ptr [0x928188] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    eax = eax & 0xFFFFFFFEu; /* 0x007B653D: and eax, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x928188) = eax; /* 0x007B6540: mov dword ptr [0x928188], eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007B6545: ret  */
    RECOMP_REGS_OUT();
}

void sub_007B6546(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6546u);

L_007B6546:
    ecx = ebp + (-0x5C); /* 0x007B6546: lea ecx, [ebp - 0x5c] */
    goto L_0040A000; /* 0x007B6549: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B654E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B654Eu);

L_007B654E:
    ecx = ebp + (-0x44); /* 0x007B654E: lea ecx, [ebp - 0x44] */
    goto L_0040A000; /* 0x007B6551: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B6556(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6556u);

L_007B6556:
    ecx = ebp + (-0x44); /* 0x007B6556: lea ecx, [ebp - 0x44] */
    goto L_0040A000; /* 0x007B6559: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B655E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B655Eu);

L_007B655E:
    goto L_00409980; /* 0x007B655E: jmp 0x409980 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00409980: RECOMP_ITAIL(0x00409980u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B6563(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6563u);

L_007B6563:
    eax = MEM32(ebp + (-0x78)); /* 0x007B6563: mov eax, dword ptr [ebp - 0x78] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x007B6566: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007B657E; /* 0x007B6569: je 0x7b657e */
L_007B656F:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x78))); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(ebp + (-0x78)) = MEM32(ebp + (-0x78)) & 0xFFFFFFFEu; /* 0x007B656F: and dword ptr [ebp - 0x78], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x84)); /* 0x007B6573: mov ecx, dword ptr [ebp - 0x84] */
    goto L_0040A000; /* 0x007B6579: jmp 0x40a000 */
L_007B657E:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007B657E: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B657F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B657Fu);

    goto L_007B657F;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B657F:
    edx = MEM32(esp + 0x8); /* 0x007B657F: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B6583: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x88)); /* 0x007B6586: mov ecx, dword ptr [edx - 0x88] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B658C: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B658E: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x8)); /* 0x007B6593: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B6596: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B6598: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00840168u; /* 0x007B659D: mov eax, 0x840168 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B65A2: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B65B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B65B0u);

L_007B65B0:
    eax = MEM32(ebp + (-0x50)); /* 0x007B65B0: mov eax, dword ptr [ebp - 0x50] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x007B65B3: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007B65C8; /* 0x007B65B6: je 0x7b65c8 */
L_007B65BC:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x50))); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(ebp + (-0x50)) = MEM32(ebp + (-0x50)) & 0xFFFFFFFEu; /* 0x007B65BC: and dword ptr [ebp - 0x50], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x64)); /* 0x007B65C0: mov ecx, dword ptr [ebp - 0x64] */
    goto L_0040A000; /* 0x007B65C3: jmp 0x40a000 */
L_007B65C8:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007B65C8: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B65C9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B65C9u);

L_007B65C9:
    eax = MEM32(0x92819C); /* 0x007B65C9: mov eax, dword ptr [0x92819c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    eax = eax & 0xFFFFFFFEu; /* 0x007B65CE: and eax, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x92819C) = eax; /* 0x007B65D1: mov dword ptr [0x92819c], eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007B65D6: ret  */
    RECOMP_REGS_OUT();
}

void sub_007B65D7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B65D7u);

L_007B65D7:
    ecx = MEM32(ebp + (-0x48)); /* 0x007B65D7: mov ecx, dword ptr [ebp - 0x48] */
    goto L_0040A000; /* 0x007B65DA: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B65DF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B65DFu);

L_007B65DF:
    ecx = MEM32(ebp + (-0x60)); /* 0x007B65DF: mov ecx, dword ptr [ebp - 0x60] */
    goto L_0040A000; /* 0x007B65E2: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B65E7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B65E7u);

L_007B65E7:
    ecx = ebp + (-0x2C); /* 0x007B65E7: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x007B65EA: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B65EF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B65EFu);

L_007B65EF:
    ecx = ebp + (-0x44); /* 0x007B65EF: lea ecx, [ebp - 0x44] */
    goto L_0040A000; /* 0x007B65F2: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B65F7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B65F7u);

L_007B65F7:
    goto L_00409980; /* 0x007B65F7: jmp 0x409980 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00409980: RECOMP_ITAIL(0x00409980u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B65FC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B65FCu);

    goto L_007B65FC;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B65FC:
    edx = MEM32(esp + 0x8); /* 0x007B65FC: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B6600: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x68)); /* 0x007B6603: mov ecx, dword ptr [edx - 0x68] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B6606: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B6608: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x8)); /* 0x007B660D: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B6610: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B6612: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008401D8u; /* 0x007B6617: mov eax, 0x8401d8 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B661C: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B6630(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6630u);

    goto L_007B6630;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B6630:
    edx = MEM32(esp + 0x8); /* 0x007B6630: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B6634: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x20)); /* 0x007B6637: mov ecx, dword ptr [edx - 0x20] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B663A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B663C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00840234u; /* 0x007B6641: mov eax, 0x840234 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B6646: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B6650(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6650u);

    goto L_007B6650;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B6650:
    edx = MEM32(esp + 0x8); /* 0x007B6650: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B6654: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x007B6657: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B665A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B665C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0084028Cu; /* 0x007B6661: mov eax, 0x84028c */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B6666: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B6670(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6670u);

    goto L_007B6670;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B6670:
    edx = MEM32(esp + 0x8); /* 0x007B6670: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B6674: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x24)); /* 0x007B6677: mov ecx, dword ptr [edx - 0x24] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B667A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B667C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008402E4u; /* 0x007B6681: mov eax, 0x8402e4 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B6686: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B6690(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6690u);

L_007B6690:
    goto L_00409980; /* 0x007B6690: jmp 0x409980 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00409980: RECOMP_ITAIL(0x00409980u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B6695(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6695u);

    goto L_007B6695;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B6695:
    edx = MEM32(esp + 0x8); /* 0x007B6695: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B6699: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x007B669C: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B669F: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B66A1: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0084033Cu; /* 0x007B66A6: mov eax, 0x84033c */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B66AB: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B66B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B66B0u);

    goto L_007B66B0;
L_006DF5F0:
    PUSH32(esp, ebp); /* 0x006DF5F0: push ebp */
    ebp = esp; /* 0x006DF5F1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x006DF5F3: push -1 */
    PUSH32(esp, 0x007C6C98u); /* 0x006DF5F5: push 0x7c6c98 */
    eax = MEM32(FS_BASE + (0)); /* 0x006DF5FA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x006DF600: push eax */
    PUSH32(esp, ecx); /* 0x006DF601: push ecx */
    PUSH32(esp, esi); /* 0x006DF602: push esi */
    eax = MEM32(0x855000); /* 0x006DF603: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006DF608: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x006DF60A: push eax */
    eax = ebp + (-0xC); /* 0x006DF60B: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x006DF60E: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x006DF614: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x006DF616: mov dword ptr [ebp - 0x10], esi */
    MEM32(esi) = 0x00803E30u; /* 0x006DF619: mov dword ptr [esi], 0x803e30 */
    MEM32(ebp + (-0x4)) = 0; /* 0x006DF61F: mov dword ptr [ebp - 4], 0 */
    ecx = MEM32(esi + 0x4C); /* 0x006DF626: mov ecx, dword ptr [esi + 0x4c] */
    /* test ecx, ecx */ /* 0x006DF629: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DF633; /* 0x006DF62B: je 0x6df633 */
L_006DF62D:
    PUSH32(esp, esi); /* 0x006DF62D: push esi */
    RECOMP_CALL(sub_006E0330); /* 0x006DF62E: call 0x6e0330 */
    RECOMP_FLAGS_IN();
L_006DF633:
    PUSH32(esp, MEM32(esi + 0x60)); /* 0x006DF633: push dword ptr [esi + 0x60] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x006DF636: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x64); /* 0x006DF63C: mov ecx, dword ptr [esi + 0x64] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006DF63F: add esp, 4 */
    _flag_k = FK_ADD;
    /* test ecx, ecx */ /* 0x006DF642: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DF64C; /* 0x006DF644: je 0x6df64c */
L_006DF646:
    eax = MEM32(ecx); /* 0x006DF646: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x006DF648: push 1 */
    RECOMP_ICALL(MEM32(eax)); /* 0x006DF64A: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_006DF64C:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x006DF64C: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = MEM32(esi + 0x4C); /* 0x006DF653: mov ecx, dword ptr [esi + 0x4c] */
    MEM32(esi) = 0x007F8DACu; /* 0x006DF656: mov dword ptr [esi], 0x7f8dac */
    /* test ecx, ecx */ /* 0x006DF65C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DF666; /* 0x006DF65E: je 0x6df666 */
L_006DF660:
    PUSH32(esp, esi); /* 0x006DF660: push esi */
    RECOMP_CALL(sub_006E0330); /* 0x006DF661: call 0x6e0330 */
    RECOMP_FLAGS_IN();
L_006DF666:
    ecx = MEM32(ebp + (-0xC)); /* 0x006DF666: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x006DF669: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x006DF670: pop ecx */
    esi = POP32_VAL(esp); /* 0x006DF671: pop esi */
    esp = ebp; /* 0x006DF672: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006DF674: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006DF675: ret  */
L_007B66B0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B66B0: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_BACKEDGE();
    goto L_006DF5F0; /* 0x007B66B3: jmp 0x6df5f0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_007B66B8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B66B8u);

L_007B66B8:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B66B8: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x7Cu; /* 0x007B66BB: add ecx, 0x7c */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x007B66BE: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B66C3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B66C3u);

L_007B66C3:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B66C3: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x007B66C6: add ecx, 8 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x007B66C9: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B66CE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B66CEu);

L_007B66CE:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B66CE: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x9Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x9Cu; /* 0x007B66D1: add ecx, 0x9c */
    _flag_k = FK_ADD;
    goto L_004D0820; /* 0x007B66D7: jmp 0x4d0820 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_004D0820: RECOMP_ITAIL(0x004D0820u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B66DC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B66DCu);

    goto L_007B66DC;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B66DC:
    edx = MEM32(esp + 0x8); /* 0x007B66DC: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B66E0: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xC)); /* 0x007B66E3: mov ecx, dword ptr [edx - 0xc] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B66E6: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B66E8: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0084039Cu; /* 0x007B66ED: mov eax, 0x84039c */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B66F2: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B6700(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6700u);

    goto L_007B6700;
L_006DF5F0:
    PUSH32(esp, ebp); /* 0x006DF5F0: push ebp */
    ebp = esp; /* 0x006DF5F1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x006DF5F3: push -1 */
    PUSH32(esp, 0x007C6C98u); /* 0x006DF5F5: push 0x7c6c98 */
    eax = MEM32(FS_BASE + (0)); /* 0x006DF5FA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x006DF600: push eax */
    PUSH32(esp, ecx); /* 0x006DF601: push ecx */
    PUSH32(esp, esi); /* 0x006DF602: push esi */
    eax = MEM32(0x855000); /* 0x006DF603: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006DF608: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x006DF60A: push eax */
    eax = ebp + (-0xC); /* 0x006DF60B: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x006DF60E: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x006DF614: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x006DF616: mov dword ptr [ebp - 0x10], esi */
    MEM32(esi) = 0x00803E30u; /* 0x006DF619: mov dword ptr [esi], 0x803e30 */
    MEM32(ebp + (-0x4)) = 0; /* 0x006DF61F: mov dword ptr [ebp - 4], 0 */
    ecx = MEM32(esi + 0x4C); /* 0x006DF626: mov ecx, dword ptr [esi + 0x4c] */
    /* test ecx, ecx */ /* 0x006DF629: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DF633; /* 0x006DF62B: je 0x6df633 */
L_006DF62D:
    PUSH32(esp, esi); /* 0x006DF62D: push esi */
    RECOMP_CALL(sub_006E0330); /* 0x006DF62E: call 0x6e0330 */
    RECOMP_FLAGS_IN();
L_006DF633:
    PUSH32(esp, MEM32(esi + 0x60)); /* 0x006DF633: push dword ptr [esi + 0x60] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x006DF636: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x64); /* 0x006DF63C: mov ecx, dword ptr [esi + 0x64] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006DF63F: add esp, 4 */
    _flag_k = FK_ADD;
    /* test ecx, ecx */ /* 0x006DF642: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DF64C; /* 0x006DF644: je 0x6df64c */
L_006DF646:
    eax = MEM32(ecx); /* 0x006DF646: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x006DF648: push 1 */
    RECOMP_ICALL(MEM32(eax)); /* 0x006DF64A: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_006DF64C:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x006DF64C: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = MEM32(esi + 0x4C); /* 0x006DF653: mov ecx, dword ptr [esi + 0x4c] */
    MEM32(esi) = 0x007F8DACu; /* 0x006DF656: mov dword ptr [esi], 0x7f8dac */
    /* test ecx, ecx */ /* 0x006DF65C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DF666; /* 0x006DF65E: je 0x6df666 */
L_006DF660:
    PUSH32(esp, esi); /* 0x006DF660: push esi */
    RECOMP_CALL(sub_006E0330); /* 0x006DF661: call 0x6e0330 */
    RECOMP_FLAGS_IN();
L_006DF666:
    ecx = MEM32(ebp + (-0xC)); /* 0x006DF666: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x006DF669: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x006DF670: pop ecx */
    esi = POP32_VAL(esp); /* 0x006DF671: pop esi */
    esp = ebp; /* 0x006DF672: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006DF674: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006DF675: ret  */
L_007B6700:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B6700: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_BACKEDGE();
    goto L_006DF5F0; /* 0x007B6703: jmp 0x6df5f0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_007B6708(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6708u);

L_007B6708:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B6708: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x7Cu; /* 0x007B670B: add ecx, 0x7c */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x007B670E: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B6713(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6713u);

L_007B6713:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B6713: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x9Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x9Cu; /* 0x007B6716: add ecx, 0x9c */
    _flag_k = FK_ADD;
    goto L_004D0820; /* 0x007B671C: jmp 0x4d0820 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_004D0820: RECOMP_ITAIL(0x004D0820u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B6721(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6721u);

L_007B6721:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B6721: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x007B6724: add ecx, 8 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x007B6727: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B672C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B672Cu);

    goto L_007B672C;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B672C:
    edx = MEM32(esp + 0x8); /* 0x007B672C: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B6730: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x007B6733: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B6736: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B6738: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008403E0u; /* 0x007B673D: mov eax, 0x8403e0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B6742: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B6750(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6750u);

L_007B6750:
    eax = MEM32(ebp + (-0x18)); /* 0x007B6750: mov eax, dword ptr [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x007B6753: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007B6754: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007B675A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007B675B: ret  */
    RECOMP_REGS_OUT();
}

void sub_007B675C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B675Cu);

    goto L_007B675C;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B675C:
    edx = MEM32(esp + 0x8); /* 0x007B675C: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x1C); /* 0x007B6760: lea eax, [edx - 0x1c] */
    ecx = MEM32(edx + (-0x20)); /* 0x007B6763: mov ecx, dword ptr [edx - 0x20] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B6766: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B6768: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00840424u; /* 0x007B676D: mov eax, 0x840424 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B6772: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B6780(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6780u);

L_007B6780:
    eax = MEM32(ebp + (-0x10)); /* 0x007B6780: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007B6783: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007B6784: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007B678A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007B678B: ret  */
    RECOMP_REGS_OUT();
}

void sub_007B678C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B678Cu);

    goto L_007B678C;
L_006DEF90:
    PUSH32(esp, ebp); /* 0x006DEF90: push ebp */
    ebp = esp; /* 0x006DEF91: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x006DEF93: push -1 */
    PUSH32(esp, 0x007C6C68u); /* 0x006DEF95: push 0x7c6c68 */
    eax = MEM32(FS_BASE + (0)); /* 0x006DEF9A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x006DEFA0: push eax */
    PUSH32(esp, ecx); /* 0x006DEFA1: push ecx */
    PUSH32(esp, esi); /* 0x006DEFA2: push esi */
    PUSH32(esp, edi); /* 0x006DEFA3: push edi */
    eax = MEM32(0x855000); /* 0x006DEFA4: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006DEFA9: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x006DEFAB: push eax */
    eax = ebp + (-0xC); /* 0x006DEFAC: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x006DEFAF: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x006DEFB5: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x006DEFB7: mov dword ptr [ebp - 0x10], esi */
    MEM32(esi) = 0x00803E14u; /* 0x006DEFBA: mov dword ptr [esi], 0x803e14 */
    MEM32(ebp + (-0x4)) = 0; /* 0x006DEFC0: mov dword ptr [ebp - 4], 0 */
    edi = MEM32(esi + 0x1AC); /* 0x006DEFC7: mov edi, dword ptr [esi + 0x1ac] */
    /* test edi, edi */ /* 0x006DEFCD: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DEFE8; /* 0x006DEFCF: je 0x6defe8 */
L_006DEFD1:
    ecx = edi; /* 0x006DEFD1: mov ecx, edi */
    RECOMP_CALL(sub_006E9080); /* 0x006DEFD3: call 0x6e9080 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(edi + 0x50), 0 */ /* 0x006DEFD8: cmp dword ptr [edi + 0x50], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x50)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006DEFE8; /* 0x006DEFDC: jne 0x6defe8 */
L_006DEFDE:
    PUSH32(esp, edi); /* 0x006DEFDE: push edi */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x006DEFDF: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006DEFE5: add esp, 4 */
    _flag_k = FK_ADD;
L_006DEFE8:
    eax = MEM32(esi + 0x1A0); /* 0x006DEFE8: mov eax, dword ptr [esi + 0x1a0] */
    ecx = MEM32(esi + 0x1A8); /* 0x006DEFEE: mov ecx, dword ptr [esi + 0x1a8] */
    /* cmp ecx, MEM32(eax + 0x68) */ /* 0x006DEFF4: cmp ecx, dword ptr [eax + 0x68] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x68));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006DF003; /* 0x006DEFF7: je 0x6df003 */
L_006DEFF9:
    /* test ecx, ecx */ /* 0x006DEFF9: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DF003; /* 0x006DEFFB: je 0x6df003 */
L_006DEFFD:
    eax = MEM32(ecx); /* 0x006DEFFD: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x006DEFFF: push 1 */
    RECOMP_ICALL(MEM32(eax)); /* 0x006DF001: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_006DF003:
    ecx = esi; /* 0x006DF003: mov ecx, esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x006DF005: mov dword ptr [ebp - 4], 0xffffffff */
    RECOMP_CALL(sub_006DEAD0); /* 0x006DF00C: call 0x6dead0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC)); /* 0x006DF011: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x006DF014: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x006DF01B: pop ecx */
    edi = POP32_VAL(esp); /* 0x006DF01C: pop edi */
    esi = POP32_VAL(esp); /* 0x006DF01D: pop esi */
    esp = ebp; /* 0x006DF01E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006DF020: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006DF021: ret  */
L_007B678C:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B678C: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_BACKEDGE();
    goto L_006DEF90; /* 0x007B678F: jmp 0x6def90 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_007B6794(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6794u);

    goto L_007B6794;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B6794:
    edx = MEM32(esp + 0x8); /* 0x007B6794: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B6798: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x007B679B: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B679E: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B67A0: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00840450u; /* 0x007B67A5: mov eax, 0x840450 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B67AA: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B67B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B67B0u);

    goto L_007B67B0;
L_006DEF90:
    PUSH32(esp, ebp); /* 0x006DEF90: push ebp */
    ebp = esp; /* 0x006DEF91: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x006DEF93: push -1 */
    PUSH32(esp, 0x007C6C68u); /* 0x006DEF95: push 0x7c6c68 */
    eax = MEM32(FS_BASE + (0)); /* 0x006DEF9A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x006DEFA0: push eax */
    PUSH32(esp, ecx); /* 0x006DEFA1: push ecx */
    PUSH32(esp, esi); /* 0x006DEFA2: push esi */
    PUSH32(esp, edi); /* 0x006DEFA3: push edi */
    eax = MEM32(0x855000); /* 0x006DEFA4: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006DEFA9: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x006DEFAB: push eax */
    eax = ebp + (-0xC); /* 0x006DEFAC: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x006DEFAF: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x006DEFB5: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x006DEFB7: mov dword ptr [ebp - 0x10], esi */
    MEM32(esi) = 0x00803E14u; /* 0x006DEFBA: mov dword ptr [esi], 0x803e14 */
    MEM32(ebp + (-0x4)) = 0; /* 0x006DEFC0: mov dword ptr [ebp - 4], 0 */
    edi = MEM32(esi + 0x1AC); /* 0x006DEFC7: mov edi, dword ptr [esi + 0x1ac] */
    /* test edi, edi */ /* 0x006DEFCD: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DEFE8; /* 0x006DEFCF: je 0x6defe8 */
L_006DEFD1:
    ecx = edi; /* 0x006DEFD1: mov ecx, edi */
    RECOMP_CALL(sub_006E9080); /* 0x006DEFD3: call 0x6e9080 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(edi + 0x50), 0 */ /* 0x006DEFD8: cmp dword ptr [edi + 0x50], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x50)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006DEFE8; /* 0x006DEFDC: jne 0x6defe8 */
L_006DEFDE:
    PUSH32(esp, edi); /* 0x006DEFDE: push edi */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x006DEFDF: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006DEFE5: add esp, 4 */
    _flag_k = FK_ADD;
L_006DEFE8:
    eax = MEM32(esi + 0x1A0); /* 0x006DEFE8: mov eax, dword ptr [esi + 0x1a0] */
    ecx = MEM32(esi + 0x1A8); /* 0x006DEFEE: mov ecx, dword ptr [esi + 0x1a8] */
    /* cmp ecx, MEM32(eax + 0x68) */ /* 0x006DEFF4: cmp ecx, dword ptr [eax + 0x68] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x68));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006DF003; /* 0x006DEFF7: je 0x6df003 */
L_006DEFF9:
    /* test ecx, ecx */ /* 0x006DEFF9: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DF003; /* 0x006DEFFB: je 0x6df003 */
L_006DEFFD:
    eax = MEM32(ecx); /* 0x006DEFFD: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x006DEFFF: push 1 */
    RECOMP_ICALL(MEM32(eax)); /* 0x006DF001: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_006DF003:
    ecx = esi; /* 0x006DF003: mov ecx, esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x006DF005: mov dword ptr [ebp - 4], 0xffffffff */
    RECOMP_CALL(sub_006DEAD0); /* 0x006DF00C: call 0x6dead0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC)); /* 0x006DF011: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x006DF014: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x006DF01B: pop ecx */
    edi = POP32_VAL(esp); /* 0x006DF01C: pop edi */
    esi = POP32_VAL(esp); /* 0x006DF01D: pop esi */
    esp = ebp; /* 0x006DF01E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006DF020: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006DF021: ret  */
L_007B67B0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B67B0: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_BACKEDGE();
    goto L_006DEF90; /* 0x007B67B3: jmp 0x6def90 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_007B67B8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B67B8u);

    goto L_007B67B8;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B67B8:
    edx = MEM32(esp + 0x8); /* 0x007B67B8: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B67BC: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xC)); /* 0x007B67BF: mov ecx, dword ptr [edx - 0xc] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B67C2: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B67C4: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00840484u; /* 0x007B67C9: mov eax, 0x840484 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B67CE: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B67E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B67E0u);

    goto L_007B67E0;
L_006DEAD0:
    PUSH32(esp, ebx); /* 0x006DEAD0: push ebx */
    ebx = ecx; /* 0x006DEAD1: mov ebx, ecx */
    PUSH32(esp, esi); /* 0x006DEAD3: push esi */
    PUSH32(esp, edi); /* 0x006DEAD4: push edi */
    edi = 8; /* 0x006DEAD5: mov edi, 8 */
    MEM32(ebx) = 0x00803DF8u; /* 0x006DEADA: mov dword ptr [ebx], 0x803df8 */
    esi = ebx + 0x16C; /* 0x006DEAE0: lea esi, [ebx + 0x16c] */
L_006DEAE6:
    ecx = MEM32(esi); /* 0x006DEAE6: mov ecx, dword ptr [esi] */
    /* test ecx, ecx */ /* 0x006DEAE8: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DEAF3; /* 0x006DEAEA: je 0x6deaf3 */
L_006DEAEC:
    eax = MEM32(ecx); /* 0x006DEAEC: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x006DEAEE: push 1 */
    RECOMP_ICALL(MEM32(eax + 0x20)); /* 0x006DEAF0: call dword ptr [eax + 0x20] */
    RECOMP_FLAGS_IN();
L_006DEAF3:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x006DEAF3: add esi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x006DEAF6: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_006DEAE6; /* 0x006DEAF7: jne 0x6deae6 */
L_006DEAF9:
    edi = MEM32(ebx + 0x18C); /* 0x006DEAF9: mov edi, dword ptr [ebx + 0x18c] */
    esi = MEM32(0x7CC694); /* 0x006DEAFF: mov esi, dword ptr [0x7cc694] */
    /* test edi, edi */ /* 0x006DEB05: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DEB13; /* 0x006DEB07: je 0x6deb13 */
L_006DEB09:
    PUSH32(esp, MEM32(edi)); /* 0x006DEB09: push dword ptr [edi] */
    RECOMP_ICALL(esi); /* 0x006DEB0B: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x006DEB0D: push edi */
    RECOMP_ICALL(esi); /* 0x006DEB0E: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006DEB10: add esp, 8 */
    _flag_k = FK_ADD;
L_006DEB13:
    edi = MEM32(ebx + 0x190); /* 0x006DEB13: mov edi, dword ptr [ebx + 0x190] */
    /* test edi, edi */ /* 0x006DEB19: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DEB27; /* 0x006DEB1B: je 0x6deb27 */
L_006DEB1D:
    PUSH32(esp, MEM32(edi)); /* 0x006DEB1D: push dword ptr [edi] */
    RECOMP_ICALL(esi); /* 0x006DEB1F: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x006DEB21: push edi */
    RECOMP_ICALL(esi); /* 0x006DEB22: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006DEB24: add esp, 8 */
    _flag_k = FK_ADD;
L_006DEB27:
    edi = POP32_VAL(esp); /* 0x006DEB27: pop edi */
    esi = POP32_VAL(esp); /* 0x006DEB28: pop esi */
    ebx = POP32_VAL(esp); /* 0x006DEB29: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006DEB2A: ret  */
L_007B67E0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B67E0: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_BACKEDGE();
    goto L_006DEAD0; /* 0x007B67E3: jmp 0x6dead0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_007B67E8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B67E8u);

L_007B67E8:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B67E8: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1A8u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x1A8u; /* 0x007B67EB: add ecx, 0x1a8 */
    _flag_k = FK_ADD;
    goto L_00419790; /* 0x007B67F1: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B67F6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B67F6u);

    goto L_007B67F6;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B67F6:
    edx = MEM32(esp + 0x8); /* 0x007B67F6: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B67FA: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xC)); /* 0x007B67FD: mov ecx, dword ptr [edx - 0xc] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B6800: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B6802: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008404B0u; /* 0x007B6807: mov eax, 0x8404b0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B680C: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B6820(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6820u);

    goto L_007B6820;
L_006DECF0:
    eax = MEM32(ecx + 0x4C); /* 0x006DECF0: mov eax, dword ptr [ecx + 0x4c] */
    MEM32(ecx) = 0x007F8DACu; /* 0x006DECF3: mov dword ptr [ecx], 0x7f8dac */
    /* test eax, eax */ /* 0x006DECF9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DED05; /* 0x006DECFB: je 0x6ded05 */
L_006DECFD:
    PUSH32(esp, ecx); /* 0x006DECFD: push ecx */
    ecx = eax; /* 0x006DECFE: mov ecx, eax */
    RECOMP_CALL(sub_006E0330); /* 0x006DED00: call 0x6e0330 */
    RECOMP_FLAGS_IN();
L_006DED05:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006DED05: ret  */
L_007B6820:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B6820: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_BACKEDGE();
    goto L_006DECF0; /* 0x007B6823: jmp 0x6decf0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_007B6828(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6828u);

    goto L_007B6828;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B6828:
    edx = MEM32(esp + 0x8); /* 0x007B6828: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B682C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xC)); /* 0x007B682F: mov ecx, dword ptr [edx - 0xc] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B6832: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B6834: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008404E4u; /* 0x007B6839: mov eax, 0x8404e4 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B683E: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B6850(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6850u);

    goto L_007B6850;
L_006DECF0:
    eax = MEM32(ecx + 0x4C); /* 0x006DECF0: mov eax, dword ptr [ecx + 0x4c] */
    MEM32(ecx) = 0x007F8DACu; /* 0x006DECF3: mov dword ptr [ecx], 0x7f8dac */
    /* test eax, eax */ /* 0x006DECF9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DED05; /* 0x006DECFB: je 0x6ded05 */
L_006DECFD:
    PUSH32(esp, ecx); /* 0x006DECFD: push ecx */
    ecx = eax; /* 0x006DECFE: mov ecx, eax */
    RECOMP_CALL(sub_006E0330); /* 0x006DED00: call 0x6e0330 */
    RECOMP_FLAGS_IN();
L_006DED05:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006DED05: ret  */
L_007B6850:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B6850: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_BACKEDGE();
    goto L_006DECF0; /* 0x007B6853: jmp 0x6decf0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_007B6858(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6858u);

    goto L_007B6858;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B6858:
    edx = MEM32(esp + 0x8); /* 0x007B6858: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B685C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x8)); /* 0x007B685F: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B6862: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B6864: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00840510u; /* 0x007B6869: mov eax, 0x840510 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B686E: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B6880(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6880u);

L_007B6880:
    goto L_0061D4F0; /* 0x007B6880: jmp 0x61d4f0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0061D4F0: RECOMP_ITAIL(0x0061D4F0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B6885(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6885u);

L_007B6885:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B6885: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x007B6888: add ecx, 8 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x007B688B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B6890(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6890u);

L_007B6890:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B6890: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x20u; /* 0x007B6893: add ecx, 0x20 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x007B6896: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B689B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B689Bu);

L_007B689B:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B689B: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x48u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x48u; /* 0x007B689E: add ecx, 0x48 */
    _flag_k = FK_ADD;
    goto L_0061BB00; /* 0x007B68A1: jmp 0x61bb00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0061BB00: RECOMP_ITAIL(0x0061BB00u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B68A6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B68A6u);

L_007B68A6:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B68A6: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x108u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x108u; /* 0x007B68A9: add ecx, 0x108 */
    _flag_k = FK_ADD;
    goto L_0061BB00; /* 0x007B68AF: jmp 0x61bb00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0061BB00: RECOMP_ITAIL(0x0061BB00u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B68B4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B68B4u);

    goto L_007B68B4;
L_006E0720:
    PUSH32(esp, ebp); /* 0x006E0720: push ebp */
    ebp = esp; /* 0x006E0721: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x006E0723: push -1 */
    PUSH32(esp, 0x007C6D46u); /* 0x006E0725: push 0x7c6d46 */
    eax = MEM32(FS_BASE + (0)); /* 0x006E072A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x006E0730: push eax */
    PUSH32(esp, ecx); /* 0x006E0731: push ecx */
    PUSH32(esp, ebx); /* 0x006E0732: push ebx */
    PUSH32(esp, esi); /* 0x006E0733: push esi */
    PUSH32(esp, edi); /* 0x006E0734: push edi */
    eax = MEM32(0x855000); /* 0x006E0735: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006E073A: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x006E073C: push eax */
    eax = ebp + (-0xC); /* 0x006E073D: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x006E0740: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x006E0746: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x006E0748: mov dword ptr [ebp - 0x10], esi */
    MEM32(ebp + (-0x4)) = 1; /* 0x006E074B: mov dword ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_006E03B0); /* 0x006E0752: call 0x6e03b0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x8); /* 0x006E0757: mov eax, dword ptr [esi + 8] */
    /* test eax, eax */ /* 0x006E075A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006E0764; /* 0x006E075C: je 0x6e0764 */
L_006E075E:
    PUSH32(esp, esi); /* 0x006E075E: push esi */
    RECOMP_ICALL(eax); /* 0x006E075F: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006E0761: add esp, 4 */
    _flag_k = FK_ADD;
L_006E0764:
    edi = MEM32(esi + 0x4); /* 0x006E0764: mov edi, dword ptr [esi + 4] */
    MEM32(esi + 0x8) = 0; /* 0x006E0767: mov dword ptr [esi + 8], 0 */
    /* test edi, edi */ /* 0x006E076E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006E0783; /* 0x006E0770: je 0x6e0783 */
L_006E0772:
    PUSH32(esp, edi); /* 0x006E0772: push edi */
    RECOMP_ICALL(MEM32(0x7CC15C)); /* 0x006E0773: call dword ptr [0x7cc15c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x006E0779: push edi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x006E077A: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006E0780: add esp, 4 */
    _flag_k = FK_ADD;
L_006E0783:
    MEM32(esi + 0x4) = 0; /* 0x006E0783: mov dword ptr [esi + 4], 0 */
    edi = esi + 0x10B8; /* 0x006E078A: lea edi, [esi + 0x10b8] */
    ebx = 8; /* 0x006E0790: mov ebx, 8 */
L_006E0795:
    ecx = MEM32(edi); /* 0x006E0795: mov ecx, dword ptr [edi] */
    /* test ecx, ecx */ /* 0x006E0797: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006E07A2; /* 0x006E0799: je 0x6e07a2 */
L_006E079B:
    eax = MEM32(ecx); /* 0x006E079B: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x006E079D: push 1 */
    RECOMP_ICALL(MEM32(eax + 0x20)); /* 0x006E079F: call dword ptr [eax + 0x20] */
    RECOMP_FLAGS_IN();
L_006E07A2:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x006E07A2: add edi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x006E07A5: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_006E0795; /* 0x006E07A6: jne 0x6e0795 */
L_006E07A8:
    ebx = MEM32(0x7CC694); /* 0x006E07A8: mov ebx, dword ptr [0x7cc694] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x006E07AE: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x19D58), edi */ /* 0x006E07B0: cmp dword ptr [esi + 0x19d58], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x19D58)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_006E07D7; /* 0x006E07B6: jbe 0x6e07d7 */
L_006E07B8:
    goto L_006E07C0; /* 0x006E07B8: jmp 0x6e07c0 */
L_006E07C0:
    eax = MEM32(esi + 0x19D54); /* 0x006E07C0: mov eax, dword ptr [esi + 0x19d54] */
    PUSH32(esp, MEM32(eax + edi * 4)); /* 0x006E07C6: push dword ptr [eax + edi*4] */
    RECOMP_ICALL(ebx); /* 0x006E07C9: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x006E07CB: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006E07CC: add esp, 4 */
    _flag_k = FK_ADD;
    /* cmp edi, MEM32(esi + 0x19D58) */ /* 0x006E07CF: cmp edi, dword ptr [esi + 0x19d58] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x19D58));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_006E07C0; /* 0x006E07D5: jb 0x6e07c0 */
L_006E07D7:
    PUSH32(esp, MEM32(esi + 0x19D54)); /* 0x006E07D7: push dword ptr [esi + 0x19d54] */
    RECOMP_ICALL(ebx); /* 0x006E07DD: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x28)); /* 0x006E07DF: push dword ptr [esi + 0x28] */
    RECOMP_ICALL(ebx); /* 0x006E07E2: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x18)); /* 0x006E07E4: push dword ptr [esi + 0x18] */
    RECOMP_ICALL(ebx); /* 0x006E07E7: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006E07E9: add esp, 0xc */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x006E07EC: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x006E07EF: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x006E07F6: pop ecx */
    edi = POP32_VAL(esp); /* 0x006E07F7: pop edi */
    esi = POP32_VAL(esp); /* 0x006E07F8: pop esi */
    ebx = POP32_VAL(esp); /* 0x006E07F9: pop ebx */
    esp = ebp; /* 0x006E07FA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006E07FC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006E07FD: ret  */
L_007B68B4:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B68B4: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1D0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x1D0u; /* 0x007B68B7: add ecx, 0x1d0 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_006E0720; /* 0x007B68BD: jmp 0x6e0720 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_007B68C2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B68C2u);

L_007B68C2:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B68C2: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x0001AF38u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x0001AF38u; /* 0x007B68C5: add ecx, 0x1af38 */
    _flag_k = FK_ADD;
    goto L_0061D500; /* 0x007B68CB: jmp 0x61d500 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0061D500: RECOMP_ITAIL(0x0061D500u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B68D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B68D0u);

    goto L_007B68D0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B68D0:
    edx = MEM32(esp + 0x8); /* 0x007B68D0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B68D4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x10)); /* 0x007B68D7: mov ecx, dword ptr [edx - 0x10] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B68DA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B68DC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0084053Cu; /* 0x007B68E1: mov eax, 0x84053c */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B68E6: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B68F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B68F0u);

L_007B68F0:
    goto L_0061D4F0; /* 0x007B68F0: jmp 0x61d4f0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0061D4F0: RECOMP_ITAIL(0x0061D4F0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B68F5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B68F5u);

L_007B68F5:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B68F5: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x007B68F8: add ecx, 8 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x007B68FB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B6900(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6900u);

L_007B6900:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B6900: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x20u; /* 0x007B6903: add ecx, 0x20 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x007B6906: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B690B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B690Bu);

L_007B690B:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B690B: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x48u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x48u; /* 0x007B690E: add ecx, 0x48 */
    _flag_k = FK_ADD;
    goto L_0061BB00; /* 0x007B6911: jmp 0x61bb00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0061BB00: RECOMP_ITAIL(0x0061BB00u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B6916(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6916u);

L_007B6916:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B6916: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x108u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x108u; /* 0x007B6919: add ecx, 0x108 */
    _flag_k = FK_ADD;
    goto L_0061BB00; /* 0x007B691F: jmp 0x61bb00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0061BB00: RECOMP_ITAIL(0x0061BB00u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B6924(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6924u);

    goto L_007B6924;
L_006E0720:
    PUSH32(esp, ebp); /* 0x006E0720: push ebp */
    ebp = esp; /* 0x006E0721: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x006E0723: push -1 */
    PUSH32(esp, 0x007C6D46u); /* 0x006E0725: push 0x7c6d46 */
    eax = MEM32(FS_BASE + (0)); /* 0x006E072A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x006E0730: push eax */
    PUSH32(esp, ecx); /* 0x006E0731: push ecx */
    PUSH32(esp, ebx); /* 0x006E0732: push ebx */
    PUSH32(esp, esi); /* 0x006E0733: push esi */
    PUSH32(esp, edi); /* 0x006E0734: push edi */
    eax = MEM32(0x855000); /* 0x006E0735: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006E073A: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x006E073C: push eax */
    eax = ebp + (-0xC); /* 0x006E073D: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x006E0740: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x006E0746: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x006E0748: mov dword ptr [ebp - 0x10], esi */
    MEM32(ebp + (-0x4)) = 1; /* 0x006E074B: mov dword ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_006E03B0); /* 0x006E0752: call 0x6e03b0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x8); /* 0x006E0757: mov eax, dword ptr [esi + 8] */
    /* test eax, eax */ /* 0x006E075A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006E0764; /* 0x006E075C: je 0x6e0764 */
L_006E075E:
    PUSH32(esp, esi); /* 0x006E075E: push esi */
    RECOMP_ICALL(eax); /* 0x006E075F: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006E0761: add esp, 4 */
    _flag_k = FK_ADD;
L_006E0764:
    edi = MEM32(esi + 0x4); /* 0x006E0764: mov edi, dword ptr [esi + 4] */
    MEM32(esi + 0x8) = 0; /* 0x006E0767: mov dword ptr [esi + 8], 0 */
    /* test edi, edi */ /* 0x006E076E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006E0783; /* 0x006E0770: je 0x6e0783 */
L_006E0772:
    PUSH32(esp, edi); /* 0x006E0772: push edi */
    RECOMP_ICALL(MEM32(0x7CC15C)); /* 0x006E0773: call dword ptr [0x7cc15c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x006E0779: push edi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x006E077A: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006E0780: add esp, 4 */
    _flag_k = FK_ADD;
L_006E0783:
    MEM32(esi + 0x4) = 0; /* 0x006E0783: mov dword ptr [esi + 4], 0 */
    edi = esi + 0x10B8; /* 0x006E078A: lea edi, [esi + 0x10b8] */
    ebx = 8; /* 0x006E0790: mov ebx, 8 */
L_006E0795:
    ecx = MEM32(edi); /* 0x006E0795: mov ecx, dword ptr [edi] */
    /* test ecx, ecx */ /* 0x006E0797: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006E07A2; /* 0x006E0799: je 0x6e07a2 */
L_006E079B:
    eax = MEM32(ecx); /* 0x006E079B: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x006E079D: push 1 */
    RECOMP_ICALL(MEM32(eax + 0x20)); /* 0x006E079F: call dword ptr [eax + 0x20] */
    RECOMP_FLAGS_IN();
L_006E07A2:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x006E07A2: add edi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x006E07A5: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_006E0795; /* 0x006E07A6: jne 0x6e0795 */
L_006E07A8:
    ebx = MEM32(0x7CC694); /* 0x006E07A8: mov ebx, dword ptr [0x7cc694] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x006E07AE: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x19D58), edi */ /* 0x006E07B0: cmp dword ptr [esi + 0x19d58], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x19D58)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_006E07D7; /* 0x006E07B6: jbe 0x6e07d7 */
L_006E07B8:
    goto L_006E07C0; /* 0x006E07B8: jmp 0x6e07c0 */
L_006E07C0:
    eax = MEM32(esi + 0x19D54); /* 0x006E07C0: mov eax, dword ptr [esi + 0x19d54] */
    PUSH32(esp, MEM32(eax + edi * 4)); /* 0x006E07C6: push dword ptr [eax + edi*4] */
    RECOMP_ICALL(ebx); /* 0x006E07C9: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x006E07CB: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006E07CC: add esp, 4 */
    _flag_k = FK_ADD;
    /* cmp edi, MEM32(esi + 0x19D58) */ /* 0x006E07CF: cmp edi, dword ptr [esi + 0x19d58] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x19D58));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_006E07C0; /* 0x006E07D5: jb 0x6e07c0 */
L_006E07D7:
    PUSH32(esp, MEM32(esi + 0x19D54)); /* 0x006E07D7: push dword ptr [esi + 0x19d54] */
    RECOMP_ICALL(ebx); /* 0x006E07DD: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x28)); /* 0x006E07DF: push dword ptr [esi + 0x28] */
    RECOMP_ICALL(ebx); /* 0x006E07E2: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x18)); /* 0x006E07E4: push dword ptr [esi + 0x18] */
    RECOMP_ICALL(ebx); /* 0x006E07E7: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006E07E9: add esp, 0xc */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x006E07EC: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x006E07EF: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x006E07F6: pop ecx */
    edi = POP32_VAL(esp); /* 0x006E07F7: pop edi */
    esi = POP32_VAL(esp); /* 0x006E07F8: pop esi */
    ebx = POP32_VAL(esp); /* 0x006E07F9: pop ebx */
    esp = ebp; /* 0x006E07FA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006E07FC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006E07FD: ret  */
L_007B6924:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B6924: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1D0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x1D0u; /* 0x007B6927: add ecx, 0x1d0 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_006E0720; /* 0x007B692D: jmp 0x6e0720 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_007B6932(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6932u);

L_007B6932:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B6932: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x0001AF38u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x0001AF38u; /* 0x007B6935: add ecx, 0x1af38 */
    _flag_k = FK_ADD;
    goto L_0061D500; /* 0x007B693B: jmp 0x61d500 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0061D500: RECOMP_ITAIL(0x0061D500u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B6940(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6940u);

    goto L_007B6940;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B6940:
    edx = MEM32(esp + 0x8); /* 0x007B6940: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B6944: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x007B6947: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B694A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B694C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00840598u; /* 0x007B6951: mov eax, 0x840598 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B6956: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B6960(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6960u);

    goto L_007B6960;
L_006DECF0:
    eax = MEM32(ecx + 0x4C); /* 0x006DECF0: mov eax, dword ptr [ecx + 0x4c] */
    MEM32(ecx) = 0x007F8DACu; /* 0x006DECF3: mov dword ptr [ecx], 0x7f8dac */
    /* test eax, eax */ /* 0x006DECF9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DED05; /* 0x006DECFB: je 0x6ded05 */
L_006DECFD:
    PUSH32(esp, ecx); /* 0x006DECFD: push ecx */
    ecx = eax; /* 0x006DECFE: mov ecx, eax */
    RECOMP_CALL(sub_006E0330); /* 0x006DED00: call 0x6e0330 */
    RECOMP_FLAGS_IN();
L_006DED05:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006DED05: ret  */
L_007B6960:
    ecx = ebp + (-0x80); /* 0x007B6960: lea ecx, [ebp - 0x80] */
    RECOMP_BACKEDGE();
    goto L_006DECF0; /* 0x007B6963: jmp 0x6decf0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_007B6968(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6968u);

L_007B6968:
    ecx = ebp + (-0x80); /* 0x007B6968: lea ecx, [ebp - 0x80] */
    goto L_0061C4B0; /* 0x007B696B: jmp 0x61c4b0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0061C4B0: RECOMP_ITAIL(0x0061C4B0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B6970(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6970u);

    goto L_007B6970;
L_006DECF0:
    eax = MEM32(ecx + 0x4C); /* 0x006DECF0: mov eax, dword ptr [ecx + 0x4c] */
    MEM32(ecx) = 0x007F8DACu; /* 0x006DECF3: mov dword ptr [ecx], 0x7f8dac */
    /* test eax, eax */ /* 0x006DECF9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DED05; /* 0x006DECFB: je 0x6ded05 */
L_006DECFD:
    PUSH32(esp, ecx); /* 0x006DECFD: push ecx */
    ecx = eax; /* 0x006DECFE: mov ecx, eax */
    RECOMP_CALL(sub_006E0330); /* 0x006DED00: call 0x6e0330 */
    RECOMP_FLAGS_IN();
L_006DED05:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006DED05: ret  */
L_007B6970:
    ecx = ebp + (-0x80); /* 0x007B6970: lea ecx, [ebp - 0x80] */
    RECOMP_BACKEDGE();
    goto L_006DECF0; /* 0x007B6973: jmp 0x6decf0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_007B6978(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6978u);

    goto L_007B6978;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B6978:
    edx = MEM32(esp + 0x8); /* 0x007B6978: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B697C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x84)); /* 0x007B697F: mov ecx, dword ptr [edx - 0x84] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B6985: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B6987: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008405F4u; /* 0x007B698C: mov eax, 0x8405f4 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B6991: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B69A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B69A0u);

L_007B69A0:
    goto L_00409980; /* 0x007B69A0: jmp 0x409980 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00409980: RECOMP_ITAIL(0x00409980u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B69A5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B69A5u);

    goto L_007B69A5;
L_006DECF0:
    eax = MEM32(ecx + 0x4C); /* 0x006DECF0: mov eax, dword ptr [ecx + 0x4c] */
    MEM32(ecx) = 0x007F8DACu; /* 0x006DECF3: mov dword ptr [ecx], 0x7f8dac */
    /* test eax, eax */ /* 0x006DECF9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DED05; /* 0x006DECFB: je 0x6ded05 */
L_006DECFD:
    PUSH32(esp, ecx); /* 0x006DECFD: push ecx */
    ecx = eax; /* 0x006DECFE: mov ecx, eax */
    RECOMP_CALL(sub_006E0330); /* 0x006DED00: call 0x6e0330 */
    RECOMP_FLAGS_IN();
L_006DED05:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006DED05: ret  */
L_007B69A5:
    ecx = MEM32(ebp + 0x8); /* 0x007B69A5: mov ecx, dword ptr [ebp + 8] */
    RECOMP_BACKEDGE();
    goto L_006DECF0; /* 0x007B69A8: jmp 0x6decf0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_007B69AD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B69ADu);

    goto L_007B69AD;
L_006DECF0:
    eax = MEM32(ecx + 0x4C); /* 0x006DECF0: mov eax, dword ptr [ecx + 0x4c] */
    MEM32(ecx) = 0x007F8DACu; /* 0x006DECF3: mov dword ptr [ecx], 0x7f8dac */
    /* test eax, eax */ /* 0x006DECF9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DED05; /* 0x006DECFB: je 0x6ded05 */
L_006DECFD:
    PUSH32(esp, ecx); /* 0x006DECFD: push ecx */
    ecx = eax; /* 0x006DECFE: mov ecx, eax */
    RECOMP_CALL(sub_006E0330); /* 0x006DED00: call 0x6e0330 */
    RECOMP_FLAGS_IN();
L_006DED05:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006DED05: ret  */
L_007B69AD:
    ecx = MEM32(ebp + 0x8); /* 0x007B69AD: mov ecx, dword ptr [ebp + 8] */
    RECOMP_BACKEDGE();
    goto L_006DECF0; /* 0x007B69B0: jmp 0x6decf0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_007B69B5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B69B5u);

    goto L_007B69B5;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B69B5:
    edx = MEM32(esp + 0x8); /* 0x007B69B5: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B69B9: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x10)); /* 0x007B69BC: mov ecx, dword ptr [edx - 0x10] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B69BF: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B69C1: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00840630u; /* 0x007B69C6: mov eax, 0x840630 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B69CB: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B69D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B69D0u);

    goto L_007B69D0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B69D0:
    edx = MEM32(esp + 0x8); /* 0x007B69D0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B69D4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x20)); /* 0x007B69D7: mov ecx, dword ptr [edx - 0x20] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B69DA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B69DC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0084066Cu; /* 0x007B69E1: mov eax, 0x84066c */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B69E6: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B69F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B69F0u);

    goto L_007B69F0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B69F0:
    edx = MEM32(esp + 0x8); /* 0x007B69F0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B69F4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x1C)); /* 0x007B69F7: mov ecx, dword ptr [edx - 0x1c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B69FA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B69FC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008406C4u; /* 0x007B6A01: mov eax, 0x8406c4 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B6A06: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B6A10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6A10u);

L_007B6A10:
    goto L_00409980; /* 0x007B6A10: jmp 0x409980 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00409980: RECOMP_ITAIL(0x00409980u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B6A15(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6A15u);

    goto L_007B6A15;
L_006DECF0:
    eax = MEM32(ecx + 0x4C); /* 0x006DECF0: mov eax, dword ptr [ecx + 0x4c] */
    MEM32(ecx) = 0x007F8DACu; /* 0x006DECF3: mov dword ptr [ecx], 0x7f8dac */
    /* test eax, eax */ /* 0x006DECF9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DED05; /* 0x006DECFB: je 0x6ded05 */
L_006DECFD:
    PUSH32(esp, ecx); /* 0x006DECFD: push ecx */
    ecx = eax; /* 0x006DECFE: mov ecx, eax */
    RECOMP_CALL(sub_006E0330); /* 0x006DED00: call 0x6e0330 */
    RECOMP_FLAGS_IN();
L_006DED05:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006DED05: ret  */
L_007B6A15:
    ecx = MEM32(ebp + (-0x18)); /* 0x007B6A15: mov ecx, dword ptr [ebp - 0x18] */
    RECOMP_BACKEDGE();
    goto L_006DECF0; /* 0x007B6A18: jmp 0x6decf0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_007B6A1D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6A1Du);

    goto L_007B6A1D;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B6A1D:
    edx = MEM32(esp + 0x8); /* 0x007B6A1D: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B6A21: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x20)); /* 0x007B6A24: mov ecx, dword ptr [edx - 0x20] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B6A27: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B6A29: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0084071Cu; /* 0x007B6A2E: mov eax, 0x84071c */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B6A33: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B6A40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6A40u);

L_007B6A40:
    eax = MEM32(ebp + (-0x48)); /* 0x007B6A40: mov eax, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x007B6A43: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007B6A58; /* 0x007B6A46: je 0x7b6a58 */
L_007B6A4C:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x48))); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(ebp + (-0x48)) = MEM32(ebp + (-0x48)) & 0xFFFFFFFEu; /* 0x007B6A4C: and dword ptr [ebp - 0x48], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x2C); /* 0x007B6A50: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x007B6A53: jmp 0x40a000 */
L_007B6A58:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007B6A58: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B6A59(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6A59u);

L_007B6A59:
    eax = MEM32(ebp + (-0x48)); /* 0x007B6A59: mov eax, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    eax = eax & 2; /* 0x007B6A5C: and eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007B6A71; /* 0x007B6A5F: je 0x7b6a71 */
L_007B6A65:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x48))); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ebp + (-0x48)) = MEM32(ebp + (-0x48)) & 0xFFFFFFFDu; /* 0x007B6A65: and dword ptr [ebp - 0x48], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x44); /* 0x007B6A69: lea ecx, [ebp - 0x44] */
    goto L_0040A000; /* 0x007B6A6C: jmp 0x40a000 */
L_007B6A71:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007B6A71: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B6A72(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6A72u);

L_007B6A72:
    eax = MEM32(ebp + (-0x48)); /* 0x007B6A72: mov eax, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    eax = eax & 4; /* 0x007B6A75: and eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007B6A8A; /* 0x007B6A78: je 0x7b6a8a */
L_007B6A7E:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x48))); _flag_b = (uint32_t)(0xFFFFFFFBu);
    MEM32(ebp + (-0x48)) = MEM32(ebp + (-0x48)) & 0xFFFFFFFBu; /* 0x007B6A7E: and dword ptr [ebp - 0x48], 0xfffffffb */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x4C)); /* 0x007B6A82: mov ecx, dword ptr [ebp - 0x4c] */
    goto L_0040A000; /* 0x007B6A85: jmp 0x40a000 */
L_007B6A8A:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007B6A8A: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B6A8B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6A8Bu);

    goto L_007B6A8B;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B6A8B:
    edx = MEM32(esp + 0x8); /* 0x007B6A8B: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B6A8F: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x50)); /* 0x007B6A92: mov ecx, dword ptr [edx - 0x50] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B6A95: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B6A97: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x8)); /* 0x007B6A9C: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B6A9F: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B6AA1: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00840784u; /* 0x007B6AA6: mov eax, 0x840784 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B6AAB: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B6AB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6AB0u);

L_007B6AB0:
    eax = MEM32(ebp + (-0x10)); /* 0x007B6AB0: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x007B6AB3: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007B6AC8; /* 0x007B6AB6: je 0x7b6ac8 */
L_007B6ABC:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0xFFFFFFFEu; /* 0x007B6ABC: and dword ptr [ebp - 0x10], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x8); /* 0x007B6AC0: mov ecx, dword ptr [ebp + 8] */
    goto L_005C6270; /* 0x007B6AC3: jmp 0x5c6270 */
L_007B6AC8:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007B6AC8: ret  */
    L_005C6270: RECOMP_ITAIL(0x005C6270u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B6AC9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6AC9u);

L_007B6AC9:
    eax = MEM32(ebp + (-0x10)); /* 0x007B6AC9: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    eax = eax & 2; /* 0x007B6ACC: and eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007B6AE1; /* 0x007B6ACF: je 0x7b6ae1 */
L_007B6AD5:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0xFFFFFFFDu; /* 0x007B6AD5: and dword ptr [ebp - 0x10], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x30); /* 0x007B6AD9: lea ecx, [ebp - 0x30] */
    goto L_005C6270; /* 0x007B6ADC: jmp 0x5c6270 */
L_007B6AE1:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007B6AE1: ret  */
    L_005C6270: RECOMP_ITAIL(0x005C6270u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B6AE2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6AE2u);

L_007B6AE2:
    eax = MEM32(ebp + (-0x10)); /* 0x007B6AE2: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    eax = eax & 4; /* 0x007B6AE5: and eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007B6AFA; /* 0x007B6AE8: je 0x7b6afa */
L_007B6AEE:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0xFFFFFFFBu);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0xFFFFFFFBu; /* 0x007B6AEE: and dword ptr [ebp - 0x10], 0xfffffffb */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x20); /* 0x007B6AF2: lea ecx, [ebp - 0x20] */
    goto L_005C6270; /* 0x007B6AF5: jmp 0x5c6270 */
L_007B6AFA:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007B6AFA: ret  */
    L_005C6270: RECOMP_ITAIL(0x005C6270u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B6AFB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6AFBu);

    goto L_007B6AFB;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B6AFB:
    edx = MEM32(esp + 0x8); /* 0x007B6AFB: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B6AFF: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x34)); /* 0x007B6B02: mov ecx, dword ptr [edx - 0x34] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B6B05: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B6B07: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008407C0u; /* 0x007B6B0C: mov eax, 0x8407c0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B6B11: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B6B20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6B20u);

L_007B6B20:
    goto L_00409980; /* 0x007B6B20: jmp 0x409980 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00409980: RECOMP_ITAIL(0x00409980u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B6B25(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6B25u);

L_007B6B25:
    eax = MEM32(ebp + (-0x2C)); /* 0x007B6B25: mov eax, dword ptr [ebp - 0x2c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x007B6B28: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007B6B3D; /* 0x007B6B2B: je 0x7b6b3d */
L_007B6B31:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(ebp + (-0x2C)) = MEM32(ebp + (-0x2C)) & 0xFFFFFFFEu; /* 0x007B6B31: and dword ptr [ebp - 0x2c], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x30)); /* 0x007B6B35: mov ecx, dword ptr [ebp - 0x30] */
    goto L_005C6270; /* 0x007B6B38: jmp 0x5c6270 */
L_007B6B3D:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007B6B3D: ret  */
    L_005C6270: RECOMP_ITAIL(0x005C6270u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B6B3E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6B3Eu);

    goto L_007B6B3E;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B6B3E:
    edx = MEM32(esp + 0x8); /* 0x007B6B3E: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B6B42: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x30)); /* 0x007B6B45: mov ecx, dword ptr [edx - 0x30] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B6B48: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B6B4A: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x8)); /* 0x007B6B4F: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B6B52: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B6B54: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008407FCu; /* 0x007B6B59: mov eax, 0x8407fc */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B6B5E: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B6B70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6B70u);

L_007B6B70:
    ecx = ebp + (-0x2C); /* 0x007B6B70: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x007B6B73: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B6B78(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6B78u);

L_007B6B78:
    ecx = ebp + (-0x40); /* 0x007B6B78: lea ecx, [ebp - 0x40] */
    goto L_005C6270; /* 0x007B6B7B: jmp 0x5c6270 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005C6270: RECOMP_ITAIL(0x005C6270u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B6B80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6B80u);

    goto L_007B6B80;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B6B80:
    edx = MEM32(esp + 0x8); /* 0x007B6B80: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x4C); /* 0x007B6B84: lea eax, [edx - 0x4c] */
    ecx = MEM32(edx + (-0x50)); /* 0x007B6B87: mov ecx, dword ptr [edx - 0x50] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B6B8A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B6B8C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x007B6B91: add eax, 0xc */
    _flag_k = FK_ADD;
    ecx = MEM32(edx + (-0x8)); /* 0x007B6B94: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B6B97: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B6B99: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00840840u; /* 0x007B6B9E: mov eax, 0x840840 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B6BA3: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B6BB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6BB0u);

L_007B6BB0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B6BB0: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0061DF60; /* 0x007B6BB3: jmp 0x61df60 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0061DF60: RECOMP_ITAIL(0x0061DF60u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B6BB8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6BB8u);

L_007B6BB8:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B6BB8: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xCu; /* 0x007B6BBB: add ecx, 0xc */
    _flag_k = FK_ADD;
    goto L_00419790; /* 0x007B6BBE: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B6BC3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6BC3u);

    goto L_007B6BC3;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B6BC3:
    edx = MEM32(esp + 0x8); /* 0x007B6BC3: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B6BC7: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xC)); /* 0x007B6BCA: mov ecx, dword ptr [edx - 0xc] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B6BCD: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B6BCF: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0084087Cu; /* 0x007B6BD4: mov eax, 0x84087c */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B6BD9: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B6BE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6BE0u);

L_007B6BE0:
    ecx = ebp + (-0x40); /* 0x007B6BE0: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007B6BE3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B6BE8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6BE8u);

L_007B6BE8:
    ecx = ebp + (-0x28); /* 0x007B6BE8: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007B6BEB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B6BF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6BF0u);

L_007B6BF0:
    ecx = ebp + (-0x58); /* 0x007B6BF0: lea ecx, [ebp - 0x58] */
    goto L_0040A000; /* 0x007B6BF3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B6BF8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6BF8u);

L_007B6BF8:
    eax = MEM32(ebp + (-0x5C)); /* 0x007B6BF8: mov eax, dword ptr [ebp - 0x5c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x007B6BFB: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007B6C10; /* 0x007B6BFE: je 0x7b6c10 */
L_007B6C04:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x5C))); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(ebp + (-0x5C)) = MEM32(ebp + (-0x5C)) & 0xFFFFFFFEu; /* 0x007B6C04: and dword ptr [ebp - 0x5c], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x60)); /* 0x007B6C08: mov ecx, dword ptr [ebp - 0x60] */
    goto L_0040A000; /* 0x007B6C0B: jmp 0x40a000 */
L_007B6C10:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007B6C10: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B6C11(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6C11u);

    goto L_007B6C11;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B6C11:
    edx = MEM32(esp + 0x8); /* 0x007B6C11: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B6C15: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x60)); /* 0x007B6C18: mov ecx, dword ptr [edx - 0x60] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B6C1B: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B6C1D: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007B6C22: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B6C25: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B6C27: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008408B0u; /* 0x007B6C2C: mov eax, 0x8408b0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B6C31: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B6C40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6C40u);

L_007B6C40:
    ecx = ebp + (-0x20); /* 0x007B6C40: lea ecx, [ebp - 0x20] */
    goto L_005C6270; /* 0x007B6C43: jmp 0x5c6270 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005C6270: RECOMP_ITAIL(0x005C6270u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B6C48(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6C48u);

    goto L_007B6C48;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B6C48:
    edx = MEM32(esp + 0x8); /* 0x007B6C48: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x24); /* 0x007B6C4C: lea eax, [edx - 0x24] */
    ecx = MEM32(edx + (-0x28)); /* 0x007B6C4F: mov ecx, dword ptr [edx - 0x28] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B6C52: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B6C54: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008408F4u; /* 0x007B6C59: mov eax, 0x8408f4 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B6C5E: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}
