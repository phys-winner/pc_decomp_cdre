#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_007AE276(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE276u);

L_007AE276:
    eax = MEM32(ebp + (-0x554)); /* 0x007AE276: mov eax, dword ptr [ebp - 0x554] */
    PUSH32(esp, eax); /* 0x007AE27C: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007AE27D: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007AE283: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007AE284: ret  */
    RECOMP_REGS_OUT();
}

void sub_007AE285(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE285u);

L_007AE285:
    ecx = ebp + (-0x488); /* 0x007AE285: lea ecx, [ebp - 0x488] */
    goto L_0040A000; /* 0x007AE28B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AE290(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE290u);

L_007AE290:
    eax = MEM32(ebp + (-0x558)); /* 0x007AE290: mov eax, dword ptr [ebp - 0x558] */
    PUSH32(esp, eax); /* 0x007AE296: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007AE297: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007AE29D: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007AE29E: ret  */
    RECOMP_REGS_OUT();
}

void sub_007AE29F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE29Fu);

L_007AE29F:
    eax = MEM32(ebp + (-0x540)); /* 0x007AE29F: mov eax, dword ptr [ebp - 0x540] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x007AE2A5: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007AE2C0; /* 0x007AE2A8: je 0x7ae2c0 */
L_007AE2AE:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x540))); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(ebp + (-0x540)) = MEM32(ebp + (-0x540)) & 0xFFFFFFFEu; /* 0x007AE2AE: and dword ptr [ebp - 0x540], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x488); /* 0x007AE2B5: lea ecx, [ebp - 0x488] */
    goto L_0040A000; /* 0x007AE2BB: jmp 0x40a000 */
L_007AE2C0:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007AE2C0: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AE2C1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE2C1u);

L_007AE2C1:
    eax = MEM32(ebp + (-0x558)); /* 0x007AE2C1: mov eax, dword ptr [ebp - 0x558] */
    PUSH32(esp, eax); /* 0x007AE2C7: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007AE2C8: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007AE2CE: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007AE2CF: ret  */
    RECOMP_REGS_OUT();
}

void sub_007AE2D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE2D0u);

L_007AE2D0:
    eax = MEM32(ebp + (-0x558)); /* 0x007AE2D0: mov eax, dword ptr [ebp - 0x558] */
    PUSH32(esp, eax); /* 0x007AE2D6: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007AE2D7: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007AE2DD: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007AE2DE: ret  */
    RECOMP_REGS_OUT();
}

void sub_007AE2DF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE2DFu);

L_007AE2DF:
    eax = MEM32(ebp + (-0x558)); /* 0x007AE2DF: mov eax, dword ptr [ebp - 0x558] */
    PUSH32(esp, eax); /* 0x007AE2E5: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007AE2E6: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007AE2EC: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007AE2ED: ret  */
    RECOMP_REGS_OUT();
}

void sub_007AE2EE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE2EEu);

L_007AE2EE:
    ecx = ebp + (-0x538); /* 0x007AE2EE: lea ecx, [ebp - 0x538] */
    goto L_004F38E0; /* 0x007AE2F4: jmp 0x4f38e0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_004F38E0: RECOMP_ITAIL(0x004F38E0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AE2F9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE2F9u);

L_007AE2F9:
    ecx = ebp + (-0x488); /* 0x007AE2F9: lea ecx, [ebp - 0x488] */
    goto L_004F38E0; /* 0x007AE2FF: jmp 0x4f38e0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_004F38E0: RECOMP_ITAIL(0x004F38E0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AE304(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE304u);

L_007AE304:
    ecx = ebp + (-0x508); /* 0x007AE304: lea ecx, [ebp - 0x508] */
    goto L_004F3A60; /* 0x007AE30A: jmp 0x4f3a60 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_004F3A60: RECOMP_ITAIL(0x004F3A60u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AE30F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE30Fu);

L_007AE30F:
    ecx = ebp + (-0x470); /* 0x007AE30F: lea ecx, [ebp - 0x470] */
    goto L_005C7920; /* 0x007AE315: jmp 0x5c7920 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005C7920: RECOMP_ITAIL(0x005C7920u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AE31A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE31Au);

L_007AE31A:
    ecx = MEM32(ebp + (-0x554)); /* 0x007AE31A: mov ecx, dword ptr [ebp - 0x554] */
    goto L_005C8980; /* 0x007AE320: jmp 0x5c8980 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005C8980: RECOMP_ITAIL(0x005C8980u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AE325(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE325u);

L_007AE325:
    eax = MEM32(ebp + (-0x554)); /* 0x007AE325: mov eax, dword ptr [ebp - 0x554] */
    PUSH32(esp, eax); /* 0x007AE32B: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007AE32C: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007AE332: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007AE333: ret  */
    RECOMP_REGS_OUT();
}

void sub_007AE334(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE334u);

L_007AE334:
    ecx = MEM32(ebp + (-0x558)); /* 0x007AE334: mov ecx, dword ptr [ebp - 0x558] */
    goto L_0040A000; /* 0x007AE33A: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AE33F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE33Fu);

L_007AE33F:
    ecx = MEM32(ebp + (-0x554)); /* 0x007AE33F: mov ecx, dword ptr [ebp - 0x554] */
    goto L_0040A000; /* 0x007AE345: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AE34A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE34Au);

L_007AE34A:
    ecx = MEM32(ebp + (-0x558)); /* 0x007AE34A: mov ecx, dword ptr [ebp - 0x558] */
    goto L_0040A000; /* 0x007AE350: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AE355(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE355u);

    goto L_007AE355;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AE355:
    edx = MEM32(esp + 0x8); /* 0x007AE355: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x55C); /* 0x007AE359: lea eax, [edx - 0x55c] */
    ecx = MEM32(edx + (-0x560)); /* 0x007AE35F: mov ecx, dword ptr [edx - 0x560] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AE365: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AE367: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x007AE36C: add eax, 0xc */
    _flag_k = FK_ADD;
    ecx = MEM32(edx + (-0x8)); /* 0x007AE36F: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AE372: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AE374: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00837D00u; /* 0x007AE379: mov eax, 0x837d00 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AE37E: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AE390(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE390u);

L_007AE390:
    ecx = MEM32(ebp + (-0x14)); /* 0x007AE390: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040A000; /* 0x007AE393: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AE398(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE398u);

L_007AE398:
    ecx = MEM32(ebp + (-0x18)); /* 0x007AE398: mov ecx, dword ptr [ebp - 0x18] */
    goto L_0040A000; /* 0x007AE39B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AE3A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE3A0u);

L_007AE3A0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007AE3A0: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0063E070; /* 0x007AE3A3: jmp 0x63e070 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0063E070: RECOMP_ITAIL(0x0063E070u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AE3A8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE3A8u);

    goto L_007AE3A8;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AE3A8:
    edx = MEM32(esp + 0x8); /* 0x007AE3A8: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007AE3AC: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x007AE3AF: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AE3B2: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AE3B4: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00837DC8u; /* 0x007AE3B9: mov eax, 0x837dc8 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AE3BE: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AE3D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE3D0u);

L_007AE3D0:
    ecx = MEM32(ebp + (-0x18)); /* 0x007AE3D0: mov ecx, dword ptr [ebp - 0x18] */
    goto L_0040A000; /* 0x007AE3D3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AE3D8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE3D8u);

L_007AE3D8:
    ecx = MEM32(ebp + (-0x1C)); /* 0x007AE3D8: mov ecx, dword ptr [ebp - 0x1c] */
    goto L_0040A000; /* 0x007AE3DB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AE3E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE3E0u);

L_007AE3E0:
    ecx = MEM32(ebp + (-0x1C)); /* 0x007AE3E0: mov ecx, dword ptr [ebp - 0x1c] */
    goto L_0040A000; /* 0x007AE3E3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AE3E8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE3E8u);

L_007AE3E8:
    ecx = MEM32(ebp + (-0x18)); /* 0x007AE3E8: mov ecx, dword ptr [ebp - 0x18] */
    goto L_0040A000; /* 0x007AE3EB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AE3F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE3F0u);

    goto L_007AE3F0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AE3F0:
    edx = MEM32(esp + 0x8); /* 0x007AE3F0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007AE3F4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x1C)); /* 0x007AE3F7: mov ecx, dword ptr [edx - 0x1c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AE3FA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AE3FC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00837E04u; /* 0x007AE401: mov eax, 0x837e04 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AE406: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AE410(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE410u);

L_007AE410:
    ecx = MEM32(ebp + (-0x10)); /* 0x007AE410: mov ecx, dword ptr [ebp - 0x10] */
    goto L_006377A0; /* 0x007AE413: jmp 0x6377a0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_006377A0: RECOMP_ITAIL(0x006377A0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AE418(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE418u);

    goto L_007AE418;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AE418:
    edx = MEM32(esp + 0x8); /* 0x007AE418: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007AE41C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x007AE41F: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AE422: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AE424: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00837E48u; /* 0x007AE429: mov eax, 0x837e48 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AE42E: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AE440(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE440u);

L_007AE440:
    ecx = ebp + (-0x28); /* 0x007AE440: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007AE443: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AE448(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE448u);

L_007AE448:
    ecx = MEM32(ebp + (-0x3C)); /* 0x007AE448: mov ecx, dword ptr [ebp - 0x3c] */
    goto L_0040A000; /* 0x007AE44B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AE450(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE450u);

L_007AE450:
    ecx = MEM32(ebp + (-0x44)); /* 0x007AE450: mov ecx, dword ptr [ebp - 0x44] */
    goto L_0040A000; /* 0x007AE453: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AE458(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE458u);

    goto L_007AE458;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AE458:
    edx = MEM32(esp + 0x8); /* 0x007AE458: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007AE45C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x54)); /* 0x007AE45F: mov ecx, dword ptr [edx - 0x54] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AE462: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AE464: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007AE469: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AE46C: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AE46E: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00837E94u; /* 0x007AE473: mov eax, 0x837e94 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AE478: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AE480(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE480u);

L_007AE480:
    ecx = MEM32(ebp + (-0x18)); /* 0x007AE480: mov ecx, dword ptr [ebp - 0x18] */
    goto L_0040A000; /* 0x007AE483: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AE488(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE488u);

L_007AE488:
    ecx = MEM32(ebp + (-0x14)); /* 0x007AE488: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040A000; /* 0x007AE48B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AE490(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE490u);

L_007AE490:
    ecx = MEM32(ebp + (-0x14)); /* 0x007AE490: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040A000; /* 0x007AE493: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AE498(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE498u);

L_007AE498:
    ecx = MEM32(ebp + (-0x18)); /* 0x007AE498: mov ecx, dword ptr [ebp - 0x18] */
    goto L_0040A000; /* 0x007AE49B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AE4A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE4A0u);

L_007AE4A0:
    ecx = MEM32(ebp + (-0x14)); /* 0x007AE4A0: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040A000; /* 0x007AE4A3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AE4A8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE4A8u);

L_007AE4A8:
    ecx = MEM32(ebp + (-0x18)); /* 0x007AE4A8: mov ecx, dword ptr [ebp - 0x18] */
    goto L_0040A000; /* 0x007AE4AB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AE4B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE4B0u);

    goto L_007AE4B0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AE4B0:
    edx = MEM32(esp + 0x8); /* 0x007AE4B0: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x1C); /* 0x007AE4B4: lea eax, [edx - 0x1c] */
    ecx = MEM32(edx + (-0x20)); /* 0x007AE4B7: mov ecx, dword ptr [edx - 0x20] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AE4BA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AE4BC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00837ED0u; /* 0x007AE4C1: mov eax, 0x837ed0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AE4C6: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AE4D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE4D0u);

L_007AE4D0:
    ecx = MEM32(ebp + (-0x134)); /* 0x007AE4D0: mov ecx, dword ptr [ebp - 0x134] */
    goto L_0063E070; /* 0x007AE4D6: jmp 0x63e070 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0063E070: RECOMP_ITAIL(0x0063E070u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AE4DB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE4DBu);

L_007AE4DB:
    eax = MEM32(ebp + (-0x12C)); /* 0x007AE4DB: mov eax, dword ptr [ebp - 0x12c] */
    PUSH32(esp, eax); /* 0x007AE4E1: push eax */
    RECOMP_ICALL(MEM32(0x7CC6A8)); /* 0x007AE4E2: call dword ptr [0x7cc6a8] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007AE4E8: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007AE4E9: ret  */
    RECOMP_REGS_OUT();
}

void sub_007AE4EA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE4EAu);

L_007AE4EA:
    ecx = MEM32(ebp + (-0x12C)); /* 0x007AE4EA: mov ecx, dword ptr [ebp - 0x12c] */
    goto L_0040A000; /* 0x007AE4F0: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AE4F5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE4F5u);

L_007AE4F5:
    eax = MEM32(ebp + (-0x12C)); /* 0x007AE4F5: mov eax, dword ptr [ebp - 0x12c] */
    PUSH32(esp, eax); /* 0x007AE4FB: push eax */
    RECOMP_ICALL(MEM32(0x7CC6A8)); /* 0x007AE4FC: call dword ptr [0x7cc6a8] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007AE502: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007AE503: ret  */
    RECOMP_REGS_OUT();
}

void sub_007AE504(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE504u);

L_007AE504:
    ecx = MEM32(ebp + (-0x12C)); /* 0x007AE504: mov ecx, dword ptr [ebp - 0x12c] */
    goto L_0040A000; /* 0x007AE50A: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AE50F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE50Fu);

L_007AE50F:
    eax = MEM32(ebp + (-0x12C)); /* 0x007AE50F: mov eax, dword ptr [ebp - 0x12c] */
    PUSH32(esp, eax); /* 0x007AE515: push eax */
    RECOMP_ICALL(MEM32(0x7CC6A8)); /* 0x007AE516: call dword ptr [0x7cc6a8] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007AE51C: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007AE51D: ret  */
    RECOMP_REGS_OUT();
}

void sub_007AE51E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE51Eu);

L_007AE51E:
    ecx = MEM32(ebp + (-0x12C)); /* 0x007AE51E: mov ecx, dword ptr [ebp - 0x12c] */
    goto L_0040A000; /* 0x007AE524: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AE529(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE529u);

L_007AE529:
    eax = MEM32(ebp + (-0x12C)); /* 0x007AE529: mov eax, dword ptr [ebp - 0x12c] */
    PUSH32(esp, eax); /* 0x007AE52F: push eax */
    RECOMP_ICALL(MEM32(0x7CC6A8)); /* 0x007AE530: call dword ptr [0x7cc6a8] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007AE536: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007AE537: ret  */
    RECOMP_REGS_OUT();
}

void sub_007AE538(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE538u);

L_007AE538:
    ecx = MEM32(ebp + (-0x12C)); /* 0x007AE538: mov ecx, dword ptr [ebp - 0x12c] */
    goto L_0040A000; /* 0x007AE53E: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AE543(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE543u);

L_007AE543:
    eax = MEM32(ebp + (-0x12C)); /* 0x007AE543: mov eax, dword ptr [ebp - 0x12c] */
    PUSH32(esp, eax); /* 0x007AE549: push eax */
    RECOMP_ICALL(MEM32(0x7CC6A8)); /* 0x007AE54A: call dword ptr [0x7cc6a8] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007AE550: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007AE551: ret  */
    RECOMP_REGS_OUT();
}

void sub_007AE552(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE552u);

L_007AE552:
    ecx = MEM32(ebp + (-0x12C)); /* 0x007AE552: mov ecx, dword ptr [ebp - 0x12c] */
    goto L_0040A000; /* 0x007AE558: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AE55D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE55Du);

L_007AE55D:
    eax = MEM32(ebp + (-0x12C)); /* 0x007AE55D: mov eax, dword ptr [ebp - 0x12c] */
    PUSH32(esp, eax); /* 0x007AE563: push eax */
    RECOMP_ICALL(MEM32(0x7CC6A8)); /* 0x007AE564: call dword ptr [0x7cc6a8] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007AE56A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007AE56B: ret  */
    RECOMP_REGS_OUT();
}

void sub_007AE56C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE56Cu);

L_007AE56C:
    ecx = MEM32(ebp + (-0x12C)); /* 0x007AE56C: mov ecx, dword ptr [ebp - 0x12c] */
    goto L_0040A000; /* 0x007AE572: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AE577(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE577u);

L_007AE577:
    ecx = ebp + (-0x128); /* 0x007AE577: lea ecx, [ebp - 0x128] */
    goto L_0040A000; /* 0x007AE57D: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AE582(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE582u);

L_007AE582:
    ecx = MEM32(ebp + (-0x12C)); /* 0x007AE582: mov ecx, dword ptr [ebp - 0x12c] */
    goto L_0040A000; /* 0x007AE588: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AE58D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE58Du);

L_007AE58D:
    ecx = MEM32(ebp + (-0x130)); /* 0x007AE58D: mov ecx, dword ptr [ebp - 0x130] */
    goto L_0040A000; /* 0x007AE593: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AE598(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE598u);

L_007AE598:
    ecx = MEM32(ebp + (-0x130)); /* 0x007AE598: mov ecx, dword ptr [ebp - 0x130] */
    goto L_0040A000; /* 0x007AE59E: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AE5A3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE5A3u);

L_007AE5A3:
    ecx = MEM32(ebp + (-0x12C)); /* 0x007AE5A3: mov ecx, dword ptr [ebp - 0x12c] */
    goto L_0040A000; /* 0x007AE5A9: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AE5AE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE5AEu);

    goto L_007AE5AE;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AE5AE:
    edx = MEM32(esp + 0x8); /* 0x007AE5AE: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007AE5B2: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x13C)); /* 0x007AE5B5: mov ecx, dword ptr [edx - 0x13c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AE5BB: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AE5BD: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007AE5C2: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AE5C5: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AE5C7: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00837F28u; /* 0x007AE5CC: mov eax, 0x837f28 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AE5D1: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AE5E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE5E0u);

L_007AE5E0:
    ecx = ebp + (-0x60); /* 0x007AE5E0: lea ecx, [ebp - 0x60] */
    goto L_0040A000; /* 0x007AE5E3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AE5E8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE5E8u);

L_007AE5E8:
    ecx = ebp + (-0x78); /* 0x007AE5E8: lea ecx, [ebp - 0x78] */
    goto L_0040A000; /* 0x007AE5EB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AE5F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE5F0u);

L_007AE5F0:
    ecx = ebp + (-0x48); /* 0x007AE5F0: lea ecx, [ebp - 0x48] */
    goto L_0040A000; /* 0x007AE5F3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AE5F8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE5F8u);

L_007AE5F8:
    ecx = ebp + (-0x48); /* 0x007AE5F8: lea ecx, [ebp - 0x48] */
    goto L_0040A000; /* 0x007AE5FB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AE600(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE600u);

    goto L_007AE600;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AE600:
    edx = MEM32(esp + 0x8); /* 0x007AE600: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007AE604: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x84)); /* 0x007AE607: mov ecx, dword ptr [edx - 0x84] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AE60D: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AE60F: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007AE614: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AE617: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AE619: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00837FE0u; /* 0x007AE61E: mov eax, 0x837fe0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AE623: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AE630(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE630u);

L_007AE630:
    ecx = ebp + (-0xB8); /* 0x007AE630: lea ecx, [ebp - 0xb8] */
    goto L_004296F0; /* 0x007AE636: jmp 0x4296f0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_004296F0: RECOMP_ITAIL(0x004296F0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AE63B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE63Bu);

L_007AE63B:
    ecx = MEM32(ebp + (-0xC0)); /* 0x007AE63B: mov ecx, dword ptr [ebp - 0xc0] */
    goto L_0040A000; /* 0x007AE641: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AE646(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE646u);

L_007AE646:
    ecx = MEM32(ebp + (-0xBC)); /* 0x007AE646: mov ecx, dword ptr [ebp - 0xbc] */
    goto L_0040A000; /* 0x007AE64C: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AE651(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE651u);

L_007AE651:
    ecx = ebp + (-0xB8); /* 0x007AE651: lea ecx, [ebp - 0xb8] */
    goto L_0040A000; /* 0x007AE657: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AE65C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE65Cu);

    goto L_007AE65C;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AE65C:
    edx = MEM32(esp + 0x8); /* 0x007AE65C: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0xDC); /* 0x007AE660: lea eax, [edx - 0xdc] */
    ecx = MEM32(edx + (-0xE0)); /* 0x007AE666: mov ecx, dword ptr [edx - 0xe0] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AE66C: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AE66E: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x007AE673: add eax, 8 */
    _flag_k = FK_ADD;
    ecx = MEM32(edx + (-0x8)); /* 0x007AE676: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AE679: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AE67B: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00838028u; /* 0x007AE680: mov eax, 0x838028 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AE685: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AE690(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE690u);

L_007AE690:
    ecx = MEM32(ebp + (-0x10)); /* 0x007AE690: mov ecx, dword ptr [ebp - 0x10] */
    goto L_006377A0; /* 0x007AE693: jmp 0x6377a0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_006377A0: RECOMP_ITAIL(0x006377A0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AE698(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE698u);

L_007AE698:
    ecx = MEM32(ebp + 0x18); /* 0x007AE698: mov ecx, dword ptr [ebp + 0x18] */
    goto L_0040A000; /* 0x007AE69B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AE6A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE6A0u);

L_007AE6A0:
    ecx = MEM32(ebp + 0xC); /* 0x007AE6A0: mov ecx, dword ptr [ebp + 0xc] */
    goto L_0040A000; /* 0x007AE6A3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AE6A8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE6A8u);

    goto L_007AE6A8;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AE6A8:
    edx = MEM32(esp + 0x8); /* 0x007AE6A8: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007AE6AC: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x10)); /* 0x007AE6AF: mov ecx, dword ptr [edx - 0x10] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AE6B2: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AE6B4: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008380A0u; /* 0x007AE6B9: mov eax, 0x8380a0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AE6BE: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AE6D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE6D0u);

L_007AE6D0:
    ecx = MEM32(ebp + (-0x20)); /* 0x007AE6D0: mov ecx, dword ptr [ebp - 0x20] */
    goto L_0040A000; /* 0x007AE6D3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AE6D8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE6D8u);

L_007AE6D8:
    ecx = MEM32(ebp + (-0x1C)); /* 0x007AE6D8: mov ecx, dword ptr [ebp - 0x1c] */
    goto L_0040A000; /* 0x007AE6DB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AE6E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE6E0u);

    goto L_007AE6E0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AE6E0:
    edx = MEM32(esp + 0x8); /* 0x007AE6E0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007AE6E4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x3C)); /* 0x007AE6E7: mov ecx, dword ptr [edx - 0x3c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AE6EA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AE6EC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008380DCu; /* 0x007AE6F1: mov eax, 0x8380dc */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AE6F6: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AE700(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE700u);

L_007AE700:
    ecx = ebp + 0x10; /* 0x007AE700: lea ecx, [ebp + 0x10] */
    goto L_0040A000; /* 0x007AE703: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AE708(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE708u);

L_007AE708:
    ecx = MEM32(ebp + (-0x7C)); /* 0x007AE708: mov ecx, dword ptr [ebp - 0x7c] */
    goto L_0063E070; /* 0x007AE70B: jmp 0x63e070 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0063E070: RECOMP_ITAIL(0x0063E070u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AE710(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE710u);

L_007AE710:
    ecx = MEM32(ebp + (-0x74)); /* 0x007AE710: mov ecx, dword ptr [ebp - 0x74] */
    goto L_0040A000; /* 0x007AE713: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AE718(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE718u);

L_007AE718:
    ecx = MEM32(ebp + (-0x78)); /* 0x007AE718: mov ecx, dword ptr [ebp - 0x78] */
    goto L_0040A000; /* 0x007AE71B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AE720(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE720u);

L_007AE720:
    ecx = ebp + (-0x58); /* 0x007AE720: lea ecx, [ebp - 0x58] */
    goto L_0040A000; /* 0x007AE723: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AE728(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE728u);

L_007AE728:
    ecx = MEM32(ebp + (-0x74)); /* 0x007AE728: mov ecx, dword ptr [ebp - 0x74] */
    goto L_0040A000; /* 0x007AE72B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AE730(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE730u);

L_007AE730:
    ecx = MEM32(ebp + (-0x78)); /* 0x007AE730: mov ecx, dword ptr [ebp - 0x78] */
    goto L_0040A000; /* 0x007AE733: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AE738(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE738u);

L_007AE738:
    ecx = ebp + (-0x28); /* 0x007AE738: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007AE73B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AE740(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE740u);

L_007AE740:
    ecx = ebp + (-0x40); /* 0x007AE740: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007AE743: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AE748(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE748u);

L_007AE748:
    ecx = ebp + (-0x70); /* 0x007AE748: lea ecx, [ebp - 0x70] */
    goto L_0040A000; /* 0x007AE74B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AE750(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE750u);

L_007AE750:
    ecx = MEM32(ebp + (-0x74)); /* 0x007AE750: mov ecx, dword ptr [ebp - 0x74] */
    goto L_0040A000; /* 0x007AE753: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AE758(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE758u);

L_007AE758:
    ecx = MEM32(ebp + (-0x78)); /* 0x007AE758: mov ecx, dword ptr [ebp - 0x78] */
    goto L_0040A000; /* 0x007AE75B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AE760(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE760u);

    goto L_007AE760;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AE760:
    edx = MEM32(esp + 0x8); /* 0x007AE760: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007AE764: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x84)); /* 0x007AE767: mov ecx, dword ptr [edx - 0x84] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AE76D: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AE76F: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007AE774: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AE777: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AE779: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00838110u; /* 0x007AE77E: mov eax, 0x838110 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AE783: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AE790(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE790u);

L_007AE790:
    ecx = MEM32(ebp + (-0x1C)); /* 0x007AE790: mov ecx, dword ptr [ebp - 0x1c] */
    goto L_0040A000; /* 0x007AE793: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AE798(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE798u);

L_007AE798:
    ecx = MEM32(ebp + (-0x14)); /* 0x007AE798: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040A000; /* 0x007AE79B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AE7A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE7A0u);

    goto L_007AE7A0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AE7A0:
    edx = MEM32(esp + 0x8); /* 0x007AE7A0: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x24); /* 0x007AE7A4: lea eax, [edx - 0x24] */
    ecx = MEM32(edx + (-0x28)); /* 0x007AE7A7: mov ecx, dword ptr [edx - 0x28] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AE7AA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AE7AC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00838198u; /* 0x007AE7B1: mov eax, 0x838198 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AE7B6: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AE7C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE7C0u);

L_007AE7C0:
    ecx = MEM32(ebp + (-0x18)); /* 0x007AE7C0: mov ecx, dword ptr [ebp - 0x18] */
    goto L_006377A0; /* 0x007AE7C3: jmp 0x6377a0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_006377A0: RECOMP_ITAIL(0x006377A0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AE7C8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE7C8u);

L_007AE7C8:
    ecx = MEM32(ebp + (-0x1C)); /* 0x007AE7C8: mov ecx, dword ptr [ebp - 0x1c] */
    goto L_0040A000; /* 0x007AE7CB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AE7D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE7D0u);

L_007AE7D0:
    ecx = MEM32(ebp + (-0x20)); /* 0x007AE7D0: mov ecx, dword ptr [ebp - 0x20] */
    goto L_0040A000; /* 0x007AE7D3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AE7D8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE7D8u);

L_007AE7D8:
    ecx = MEM32(ebp + (-0x20)); /* 0x007AE7D8: mov ecx, dword ptr [ebp - 0x20] */
    goto L_0040A000; /* 0x007AE7DB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AE7E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE7E0u);

L_007AE7E0:
    ecx = MEM32(ebp + (-0x1C)); /* 0x007AE7E0: mov ecx, dword ptr [ebp - 0x1c] */
    goto L_0040A000; /* 0x007AE7E3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AE7E8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE7E8u);

    goto L_007AE7E8;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AE7E8:
    edx = MEM32(esp + 0x8); /* 0x007AE7E8: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007AE7EC: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x20)); /* 0x007AE7EF: mov ecx, dword ptr [edx - 0x20] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AE7F2: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AE7F4: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008381DCu; /* 0x007AE7F9: mov eax, 0x8381dc */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AE7FE: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AE810(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE810u);

L_007AE810:
    ecx = MEM32(ebp + (-0x10)); /* 0x007AE810: mov ecx, dword ptr [ebp - 0x10] */
    goto L_004E3920; /* 0x007AE813: jmp 0x4e3920 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_004E3920: RECOMP_ITAIL(0x004E3920u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AE818(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE818u);

    goto L_007AE818;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AE818:
    edx = MEM32(esp + 0x8); /* 0x007AE818: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007AE81C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x10)); /* 0x007AE81F: mov ecx, dword ptr [edx - 0x10] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AE822: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AE824: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00838228u; /* 0x007AE829: mov eax, 0x838228 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AE82E: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AE840(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE840u);

L_007AE840:
    ecx = MEM32(ebp + (-0x10)); /* 0x007AE840: mov ecx, dword ptr [ebp - 0x10] */
    goto L_004E3920; /* 0x007AE843: jmp 0x4e3920 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_004E3920: RECOMP_ITAIL(0x004E3920u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}
