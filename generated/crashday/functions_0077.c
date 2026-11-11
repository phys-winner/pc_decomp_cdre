#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_007837C8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007837C8u);

L_007837C8:
    ecx = MEM32(ebp + (-0x10)); /* 0x007837C8: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040A000; /* 0x007837CB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007837D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007837D0u);

    goto L_007837D0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007837D0:
    edx = MEM32(esp + 0x8); /* 0x007837D0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007837D4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x007837D7: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007837DA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007837DC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00810B18u; /* 0x007837E1: mov eax, 0x810b18 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007837E6: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007837F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007837F0u);

L_007837F0:
    ecx = MEM32(ebp + (-0x1C)); /* 0x007837F0: mov ecx, dword ptr [ebp - 0x1c] */
    goto L_0040A000; /* 0x007837F3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007837F8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007837F8u);

L_007837F8:
    ecx = MEM32(ebp + (-0x20)); /* 0x007837F8: mov ecx, dword ptr [ebp - 0x20] */
    goto L_0040A000; /* 0x007837FB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00783800(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00783800u);

    goto L_00783800;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_00783800:
    edx = MEM32(esp + 0x8); /* 0x00783800: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x00783804: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x34)); /* 0x00783807: mov ecx, dword ptr [edx - 0x34] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078380A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078380C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x00783811: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x00783814: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00783816: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00810B6Cu; /* 0x0078381B: mov eax, 0x810b6c */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x00783820: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00783830(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00783830u);

L_00783830:
    ecx = MEM32(ebp + (-0x14)); /* 0x00783830: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040A000; /* 0x00783833: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00783838(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00783838u);

L_00783838:
    ecx = MEM32(ebp + (-0x18)); /* 0x00783838: mov ecx, dword ptr [ebp - 0x18] */
    goto L_0040A000; /* 0x0078383B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00783840(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00783840u);

    goto L_00783840;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_00783840:
    edx = MEM32(esp + 0x8); /* 0x00783840: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x00783844: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x00783847: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078384A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078384C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00810BA0u; /* 0x00783851: mov eax, 0x810ba0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x00783856: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00783860(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00783860u);

L_00783860:
    ecx = MEM32(ebp + 0x8); /* 0x00783860: mov ecx, dword ptr [ebp + 8] */
    goto L_0040A000; /* 0x00783863: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00783868(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00783868u);

L_00783868:
    ecx = MEM32(ebp + (-0x10)); /* 0x00783868: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040A000; /* 0x0078386B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00783870(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00783870u);

    goto L_00783870;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_00783870:
    edx = MEM32(esp + 0x8); /* 0x00783870: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x00783874: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x40)); /* 0x00783877: mov ecx, dword ptr [edx - 0x40] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078387A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078387C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00810BD4u; /* 0x00783881: mov eax, 0x810bd4 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x00783886: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00783890(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00783890u);

L_00783890:
    ecx = ebp + (-0x74); /* 0x00783890: lea ecx, [ebp - 0x74] */
    goto L_0040A000; /* 0x00783893: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00783898(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00783898u);

L_00783898:
    ecx = ebp + (-0x44); /* 0x00783898: lea ecx, [ebp - 0x44] */
    goto L_0040A000; /* 0x0078389B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007838A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007838A0u);

L_007838A0:
    ecx = ebp + (-0x5C); /* 0x007838A0: lea ecx, [ebp - 0x5c] */
    goto L_0040A000; /* 0x007838A3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007838A8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007838A8u);

L_007838A8:
    ecx = ebp + (-0x2C); /* 0x007838A8: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x007838AB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007838B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007838B0u);

L_007838B0:
    PUSH32(esp, 0x0040A000u); /* 0x007838B0: push 0x40a000 */
    PUSH32(esp, 2); /* 0x007838B5: push 2 */
    PUSH32(esp, 0x18u); /* 0x007838B7: push 0x18 */
    eax = ebp + (-0x44); /* 0x007838B9: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x007838BC: push eax */
    RECOMP_CALL(sub_0077F628); /* 0x007838BD: call 0x77f628 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007838C2: ret  */
    RECOMP_REGS_OUT();
}

void sub_007838C3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007838C3u);

L_007838C3:
    eax = MEM32(ebp + (-0xD0)); /* 0x007838C3: mov eax, dword ptr [ebp - 0xd0] */
    PUSH32(esp, eax); /* 0x007838C9: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007838CA: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007838D0: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007838D1: ret  */
    RECOMP_REGS_OUT();
}

void sub_007838D2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007838D2u);

L_007838D2:
    eax = MEM32(ebp + (-0xD0)); /* 0x007838D2: mov eax, dword ptr [ebp - 0xd0] */
    PUSH32(esp, eax); /* 0x007838D8: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007838D9: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007838DF: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007838E0: ret  */
    RECOMP_REGS_OUT();
}

void sub_007838E1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007838E1u);

L_007838E1:
    eax = MEM32(ebp + (-0xD0)); /* 0x007838E1: mov eax, dword ptr [ebp - 0xd0] */
    PUSH32(esp, eax); /* 0x007838E7: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007838E8: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007838EE: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007838EF: ret  */
    RECOMP_REGS_OUT();
}

void sub_007838F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007838F0u);

    goto L_007838F0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007838F0:
    edx = MEM32(esp + 0x8); /* 0x007838F0: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0xD4); /* 0x007838F4: lea eax, [edx - 0xd4] */
    ecx = MEM32(edx + (-0xD8)); /* 0x007838FA: mov ecx, dword ptr [edx - 0xd8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x00783900: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00783902: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x00783907: add eax, 0xc */
    _flag_k = FK_ADD;
    ecx = MEM32(edx + (-0x8)); /* 0x0078390A: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078390D: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078390F: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00810C08u; /* 0x00783914: mov eax, 0x810c08 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x00783919: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00783920(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00783920u);

L_00783920:
    ecx = ebp + (-0x5C); /* 0x00783920: lea ecx, [ebp - 0x5c] */
    goto L_0040A000; /* 0x00783923: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00783928(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00783928u);

L_00783928:
    eax = MEM32(ebp + (-0x68)); /* 0x00783928: mov eax, dword ptr [ebp - 0x68] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x0078392B: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00783940; /* 0x0078392E: je 0x783940 */
L_00783934:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x68))); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(ebp + (-0x68)) = MEM32(ebp + (-0x68)) & 0xFFFFFFFEu; /* 0x00783934: and dword ptr [ebp - 0x68], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x44); /* 0x00783938: lea ecx, [ebp - 0x44] */
    goto L_0040A000; /* 0x0078393B: jmp 0x40a000 */
L_00783940:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00783940: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00783941(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00783941u);

L_00783941:
    eax = MEM32(ebp + (-0x68)); /* 0x00783941: mov eax, dword ptr [ebp - 0x68] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    eax = eax & 2; /* 0x00783944: and eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00783959; /* 0x00783947: je 0x783959 */
L_0078394D:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x68))); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ebp + (-0x68)) = MEM32(ebp + (-0x68)) & 0xFFFFFFFDu; /* 0x0078394D: and dword ptr [ebp - 0x68], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x2C); /* 0x00783951: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x00783954: jmp 0x40a000 */
L_00783959:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00783959: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078395A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078395Au);

    goto L_0078395A;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0078395A:
    edx = MEM32(esp + 0x8); /* 0x0078395A: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x6C); /* 0x0078395E: lea eax, [edx - 0x6c] */
    ecx = MEM32(edx + (-0x70)); /* 0x00783961: mov ecx, dword ptr [edx - 0x70] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x00783964: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00783966: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x0078396B: add eax, 0xc */
    _flag_k = FK_ADD;
    ecx = MEM32(edx + (-0x8)); /* 0x0078396E: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x00783971: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00783973: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00810C80u; /* 0x00783978: mov eax, 0x810c80 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0078397D: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00783990(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00783990u);

L_00783990:
    ecx = MEM32(ebp + (-0x50)); /* 0x00783990: mov ecx, dword ptr [ebp - 0x50] */
    goto L_0040A000; /* 0x00783993: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00783998(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00783998u);

L_00783998:
    ecx = MEM32(ebp + (-0x4C)); /* 0x00783998: mov ecx, dword ptr [ebp - 0x4c] */
    goto L_0040A000; /* 0x0078399B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007839A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007839A0u);

    goto L_007839A0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007839A0:
    edx = MEM32(esp + 0x8); /* 0x007839A0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007839A4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x74)); /* 0x007839A7: mov ecx, dword ptr [edx - 0x74] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007839AA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007839AC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00810CBCu; /* 0x007839B1: mov eax, 0x810cbc */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007839B6: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007839C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007839C0u);

L_007839C0:
    ecx = MEM32(ebp + (-0x14)); /* 0x007839C0: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040A000; /* 0x007839C3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007839C8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007839C8u);

L_007839C8:
    ecx = MEM32(ebp + (-0x18)); /* 0x007839C8: mov ecx, dword ptr [ebp - 0x18] */
    goto L_0040A000; /* 0x007839CB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007839D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007839D0u);

    goto L_007839D0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007839D0:
    edx = MEM32(esp + 0x8); /* 0x007839D0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007839D4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x1C)); /* 0x007839D7: mov ecx, dword ptr [edx - 0x1c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007839DA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007839DC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00810CF0u; /* 0x007839E1: mov eax, 0x810cf0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007839E6: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007839F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007839F0u);

L_007839F0:
    ecx = ebp + (-0x2C); /* 0x007839F0: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x007839F3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007839F8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007839F8u);

L_007839F8:
    ecx = MEM32(ebp + (-0x34)); /* 0x007839F8: mov ecx, dword ptr [ebp - 0x34] */
    goto L_0040A000; /* 0x007839FB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00783A00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00783A00u);

L_00783A00:
    ecx = MEM32(ebp + (-0x30)); /* 0x00783A00: mov ecx, dword ptr [ebp - 0x30] */
    goto L_0040A000; /* 0x00783A03: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00783A08(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00783A08u);

    goto L_00783A08;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_00783A08:
    edx = MEM32(esp + 0x8); /* 0x00783A08: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x00783A0C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x38)); /* 0x00783A0F: mov ecx, dword ptr [edx - 0x38] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x00783A12: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00783A14: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x8)); /* 0x00783A19: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x00783A1C: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00783A1E: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00810D24u; /* 0x00783A23: mov eax, 0x810d24 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x00783A28: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00783A30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00783A30u);

L_00783A30:
    ecx = MEM32(ebp + (-0x140)); /* 0x00783A30: mov ecx, dword ptr [ebp - 0x140] */
    goto L_0040A000; /* 0x00783A36: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00783A3B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00783A3Bu);

L_00783A3B:
    ecx = MEM32(ebp + (-0x150)); /* 0x00783A3B: mov ecx, dword ptr [ebp - 0x150] */
    goto L_0040A000; /* 0x00783A41: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00783A46(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00783A46u);

L_00783A46:
    ecx = ebp + (-0x2C); /* 0x00783A46: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x00783A49: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00783A4E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00783A4Eu);

L_00783A4E:
    ecx = MEM32(ebp + (-0x150)); /* 0x00783A4E: mov ecx, dword ptr [ebp - 0x150] */
    goto L_0040A000; /* 0x00783A54: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00783A59(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00783A59u);

L_00783A59:
    ecx = MEM32(ebp + (-0x140)); /* 0x00783A59: mov ecx, dword ptr [ebp - 0x140] */
    goto L_0040A000; /* 0x00783A5F: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00783A64(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00783A64u);

    goto L_00783A64;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_00783A64:
    edx = MEM32(esp + 0x8); /* 0x00783A64: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x00783A68: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x1A8)); /* 0x00783A6B: mov ecx, dword ptr [edx - 0x1a8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x00783A71: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00783A73: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x8)); /* 0x00783A78: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x00783A7B: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00783A7D: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00810D60u; /* 0x00783A82: mov eax, 0x810d60 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x00783A87: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00783A90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00783A90u);

L_00783A90:
    ecx = MEM32(ebp + (-0x48)); /* 0x00783A90: mov ecx, dword ptr [ebp - 0x48] */
    goto L_0040A000; /* 0x00783A93: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00783A98(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00783A98u);

L_00783A98:
    ecx = MEM32(ebp + (-0x44)); /* 0x00783A98: mov ecx, dword ptr [ebp - 0x44] */
    goto L_0040A000; /* 0x00783A9B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00783AA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00783AA0u);

    goto L_00783AA0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_00783AA0:
    edx = MEM32(esp + 0x8); /* 0x00783AA0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x00783AA4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x50)); /* 0x00783AA7: mov ecx, dword ptr [edx - 0x50] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x00783AAA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00783AAC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00810DF0u; /* 0x00783AB1: mov eax, 0x810df0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x00783AB6: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00783AC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00783AC0u);

L_00783AC0:
    ecx = MEM32(ebp + (-0x2C)); /* 0x00783AC0: mov ecx, dword ptr [ebp - 0x2c] */
    goto L_0040A000; /* 0x00783AC3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00783AC8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00783AC8u);

L_00783AC8:
    ecx = MEM32(ebp + (-0x28)); /* 0x00783AC8: mov ecx, dword ptr [ebp - 0x28] */
    goto L_0040A000; /* 0x00783ACB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00783AD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00783AD0u);

L_00783AD0:
    ecx = MEM32(ebp + (-0x2C)); /* 0x00783AD0: mov ecx, dword ptr [ebp - 0x2c] */
    goto L_0040A000; /* 0x00783AD3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00783AD8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00783AD8u);

L_00783AD8:
    ecx = MEM32(ebp + (-0x28)); /* 0x00783AD8: mov ecx, dword ptr [ebp - 0x28] */
    goto L_0040A000; /* 0x00783ADB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00783AE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00783AE0u);

L_00783AE0:
    ecx = MEM32(ebp + (-0x2C)); /* 0x00783AE0: mov ecx, dword ptr [ebp - 0x2c] */
    goto L_0040A000; /* 0x00783AE3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00783AE8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00783AE8u);

L_00783AE8:
    ecx = MEM32(ebp + (-0x28)); /* 0x00783AE8: mov ecx, dword ptr [ebp - 0x28] */
    goto L_0040A000; /* 0x00783AEB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00783AF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00783AF0u);

    goto L_00783AF0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_00783AF0:
    edx = MEM32(esp + 0x8); /* 0x00783AF0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x00783AF4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x30)); /* 0x00783AF7: mov ecx, dword ptr [edx - 0x30] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x00783AFA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00783AFC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00810E24u; /* 0x00783B01: mov eax, 0x810e24 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x00783B06: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00783B10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00783B10u);

L_00783B10:
    ecx = MEM32(ebp + (-0x1C)); /* 0x00783B10: mov ecx, dword ptr [ebp - 0x1c] */
    goto L_0040A000; /* 0x00783B13: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00783B18(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00783B18u);

L_00783B18:
    ecx = MEM32(ebp + (-0x18)); /* 0x00783B18: mov ecx, dword ptr [ebp - 0x18] */
    goto L_0040A000; /* 0x00783B1B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00783B20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00783B20u);

L_00783B20:
    eax = MEM32(ebp + (-0x1C)); /* 0x00783B20: mov eax, dword ptr [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x00783B23: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x00783B24: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00783B2A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00783B2B: ret  */
    RECOMP_REGS_OUT();
}

void sub_00783B2C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00783B2Cu);

L_00783B2C:
    ecx = MEM32(ebp + (-0x1C)); /* 0x00783B2C: mov ecx, dword ptr [ebp - 0x1c] */
    goto L_006377A0; /* 0x00783B2F: jmp 0x6377a0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_006377A0: RECOMP_ITAIL(0x006377A0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00783B34(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00783B34u);

L_00783B34:
    eax = MEM32(ebp + (-0x1C)); /* 0x00783B34: mov eax, dword ptr [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x00783B37: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x00783B38: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00783B3E: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00783B3F: ret  */
    RECOMP_REGS_OUT();
}

void sub_00783B40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00783B40u);

    goto L_00783B40;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_00783B40:
    edx = MEM32(esp + 0x8); /* 0x00783B40: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x00783B44: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x3C)); /* 0x00783B47: mov ecx, dword ptr [edx - 0x3c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x00783B4A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00783B4C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00810E78u; /* 0x00783B51: mov eax, 0x810e78 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x00783B56: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00783B60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00783B60u);

L_00783B60:
    ecx = MEM32(ebp + (-0x24)); /* 0x00783B60: mov ecx, dword ptr [ebp - 0x24] */
    goto L_0040A000; /* 0x00783B63: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00783B68(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00783B68u);

L_00783B68:
    ecx = MEM32(ebp + (-0x20)); /* 0x00783B68: mov ecx, dword ptr [ebp - 0x20] */
    goto L_0040A000; /* 0x00783B6B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00783B70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00783B70u);

L_00783B70:
    ecx = MEM32(ebp + (-0x24)); /* 0x00783B70: mov ecx, dword ptr [ebp - 0x24] */
    goto L_0040A000; /* 0x00783B73: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00783B78(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00783B78u);

L_00783B78:
    ecx = MEM32(ebp + (-0x20)); /* 0x00783B78: mov ecx, dword ptr [ebp - 0x20] */
    goto L_0040A000; /* 0x00783B7B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00783B80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00783B80u);

L_00783B80:
    ecx = MEM32(ebp + (-0x24)); /* 0x00783B80: mov ecx, dword ptr [ebp - 0x24] */
    goto L_0040A000; /* 0x00783B83: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00783B88(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00783B88u);

L_00783B88:
    ecx = MEM32(ebp + (-0x20)); /* 0x00783B88: mov ecx, dword ptr [ebp - 0x20] */
    goto L_0040A000; /* 0x00783B8B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00783B90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00783B90u);

L_00783B90:
    ecx = MEM32(ebp + 0x8); /* 0x00783B90: mov ecx, dword ptr [ebp + 8] */
    goto L_0040A000; /* 0x00783B93: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00783B98(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00783B98u);

L_00783B98:
    ecx = MEM32(ebp + (-0x24)); /* 0x00783B98: mov ecx, dword ptr [ebp - 0x24] */
    goto L_0040A000; /* 0x00783B9B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00783BA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00783BA0u);

L_00783BA0:
    eax = MEM32(ebp + (-0x24)); /* 0x00783BA0: mov eax, dword ptr [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x00783BA3: push eax */
    RECOMP_ICALL(MEM32(0x7CC6A8)); /* 0x00783BA4: call dword ptr [0x7cc6a8] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00783BAA: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00783BAB: ret  */
    RECOMP_REGS_OUT();
}

void sub_00783BAC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00783BACu);

L_00783BAC:
    ecx = MEM32(ebp + (-0x24)); /* 0x00783BAC: mov ecx, dword ptr [ebp - 0x24] */
    goto L_0063D370; /* 0x00783BAF: jmp 0x63d370 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0063D370: RECOMP_ITAIL(0x0063D370u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00783BB4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00783BB4u);

L_00783BB4:
    ecx = MEM32(ebp + (-0x24)); /* 0x00783BB4: mov ecx, dword ptr [ebp - 0x24] */
    goto L_0063D370; /* 0x00783BB7: jmp 0x63d370 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0063D370: RECOMP_ITAIL(0x0063D370u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00783BBC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00783BBCu);

L_00783BBC:
    ecx = MEM32(ebp + (-0x24)); /* 0x00783BBC: mov ecx, dword ptr [ebp - 0x24] */
    goto L_0063D370; /* 0x00783BBF: jmp 0x63d370 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0063D370: RECOMP_ITAIL(0x0063D370u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00783BC4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00783BC4u);

L_00783BC4:
    ecx = MEM32(ebp + (-0x24)); /* 0x00783BC4: mov ecx, dword ptr [ebp - 0x24] */
    goto L_0063D370; /* 0x00783BC7: jmp 0x63d370 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0063D370: RECOMP_ITAIL(0x0063D370u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00783BCC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00783BCCu);

L_00783BCC:
    eax = MEM32(ebp + (-0x24)); /* 0x00783BCC: mov eax, dword ptr [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x00783BCF: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x00783BD0: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00783BD6: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00783BD7: ret  */
    RECOMP_REGS_OUT();
}

void sub_00783BD8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00783BD8u);

L_00783BD8:
    ecx = MEM32(ebp + (-0x28)); /* 0x00783BD8: mov ecx, dword ptr [ebp - 0x28] */
    goto L_0040A000; /* 0x00783BDB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00783BE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00783BE0u);

    goto L_00783BE0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_00783BE0:
    edx = MEM32(esp + 0x8); /* 0x00783BE0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x00783BE4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x28)); /* 0x00783BE7: mov ecx, dword ptr [edx - 0x28] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x00783BEA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00783BEC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00810EF8u; /* 0x00783BF1: mov eax, 0x810ef8 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x00783BF6: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00783C00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00783C00u);

L_00783C00:
    ecx = MEM32(ebp + (-0x38)); /* 0x00783C00: mov ecx, dword ptr [ebp - 0x38] */
    goto L_0040A000; /* 0x00783C03: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00783C08(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00783C08u);

L_00783C08:
    ecx = MEM32(ebp + (-0x44)); /* 0x00783C08: mov ecx, dword ptr [ebp - 0x44] */
    goto L_0040A000; /* 0x00783C0B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00783C10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00783C10u);

L_00783C10:
    ecx = MEM32(ebp + (-0x38)); /* 0x00783C10: mov ecx, dword ptr [ebp - 0x38] */
    goto L_0040A000; /* 0x00783C13: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00783C18(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00783C18u);

L_00783C18:
    ecx = MEM32(ebp + (-0x44)); /* 0x00783C18: mov ecx, dword ptr [ebp - 0x44] */
    goto L_0040A000; /* 0x00783C1B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00783C20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00783C20u);

L_00783C20:
    ecx = MEM32(ebp + (-0x38)); /* 0x00783C20: mov ecx, dword ptr [ebp - 0x38] */
    goto L_0040A000; /* 0x00783C23: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00783C28(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00783C28u);

L_00783C28:
    ecx = MEM32(ebp + (-0x44)); /* 0x00783C28: mov ecx, dword ptr [ebp - 0x44] */
    goto L_0040A000; /* 0x00783C2B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00783C30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00783C30u);

    goto L_00783C30;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_00783C30:
    edx = MEM32(esp + 0x8); /* 0x00783C30: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x00783C34: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x88)); /* 0x00783C37: mov ecx, dword ptr [edx - 0x88] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x00783C3D: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00783C3F: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x8)); /* 0x00783C44: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x00783C47: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00783C49: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00810F98u; /* 0x00783C4E: mov eax, 0x810f98 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x00783C53: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00783C60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00783C60u);

L_00783C60:
    ecx = MEM32(ebp + 0x8); /* 0x00783C60: mov ecx, dword ptr [ebp + 8] */
    goto L_0040A000; /* 0x00783C63: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00783C68(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00783C68u);

L_00783C68:
    ecx = MEM32(ebp + (-0x10)); /* 0x00783C68: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040A000; /* 0x00783C6B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00783C70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00783C70u);

    goto L_00783C70;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_00783C70:
    edx = MEM32(esp + 0x8); /* 0x00783C70: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x00783C74: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x00783C77: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x00783C7A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00783C7C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00810FECu; /* 0x00783C81: mov eax, 0x810fec */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x00783C86: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00783C90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00783C90u);

L_00783C90:
    ecx = MEM32(ebp + 0x8); /* 0x00783C90: mov ecx, dword ptr [ebp + 8] */
    goto L_0040A000; /* 0x00783C93: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00783C98(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00783C98u);

L_00783C98:
    ecx = MEM32(ebp + (-0x10)); /* 0x00783C98: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040A000; /* 0x00783C9B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00783CA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00783CA0u);

    goto L_00783CA0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_00783CA0:
    edx = MEM32(esp + 0x8); /* 0x00783CA0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x00783CA4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x00783CA7: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x00783CAA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00783CAC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00811020u; /* 0x00783CB1: mov eax, 0x811020 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x00783CB6: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00783CC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00783CC0u);

L_00783CC0:
    ecx = ebp + (-0xD0); /* 0x00783CC0: lea ecx, [ebp - 0xd0] */
    goto L_0043D6D0; /* 0x00783CC6: jmp 0x43d6d0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0043D6D0: RECOMP_ITAIL(0x0043D6D0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00783CCB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00783CCBu);

    goto L_00783CCB;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_00783CCB:
    edx = MEM32(esp + 0x8); /* 0x00783CCB: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x00783CCF: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xD4)); /* 0x00783CD2: mov ecx, dword ptr [edx - 0xd4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x00783CD8: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00783CDA: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00811208u; /* 0x00783CDF: mov eax, 0x811208 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x00783CE4: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00783CF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00783CF0u);

L_00783CF0:
    ecx = MEM32(ebp + (-0x10)); /* 0x00783CF0: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x00783CF3: add ecx, 4 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x00783CF6: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00783CFB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00783CFBu);

L_00783CFB:
    ecx = MEM32(ebp + (-0x10)); /* 0x00783CFB: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xB8u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xB8u; /* 0x00783CFE: add ecx, 0xb8 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x00783D04: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00783D09(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00783D09u);

    goto L_00783D09;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_00783D09:
    edx = MEM32(esp + 0x8); /* 0x00783D09: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x00783D0D: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xC)); /* 0x00783D10: mov ecx, dword ptr [edx - 0xc] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x00783D13: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00783D15: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00811234u; /* 0x00783D1A: mov eax, 0x811234 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x00783D1F: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00783D30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00783D30u);

L_00783D30:
    ecx = MEM32(ebp + (-0x10)); /* 0x00783D30: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040A000; /* 0x00783D33: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00783D38(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00783D38u);

L_00783D38:
    ecx = MEM32(ebp + (-0x10)); /* 0x00783D38: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x20u; /* 0x00783D3B: add ecx, 0x20 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x00783D3E: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00783D43(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00783D43u);

L_00783D43:
    ecx = MEM32(ebp + (-0x10)); /* 0x00783D43: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x48u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x48u; /* 0x00783D46: add ecx, 0x48 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x00783D49: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00783D4E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00783D4Eu);

L_00783D4E:
    ecx = MEM32(ebp + (-0x10)); /* 0x00783D4E: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x60u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x60u; /* 0x00783D51: add ecx, 0x60 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x00783D54: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00783D59(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00783D59u);

L_00783D59:
    ecx = MEM32(ebp + (-0x10)); /* 0x00783D59: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x78u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x78u; /* 0x00783D5C: add ecx, 0x78 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x00783D5F: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00783D64(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00783D64u);

L_00783D64:
    ecx = MEM32(ebp + (-0x10)); /* 0x00783D64: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x90u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x90u; /* 0x00783D67: add ecx, 0x90 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x00783D6D: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00783D72(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00783D72u);

    goto L_00783D72;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_00783D72:
    edx = MEM32(esp + 0x8); /* 0x00783D72: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x00783D76: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x00783D79: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x00783D7C: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00783D7E: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00811268u; /* 0x00783D83: mov eax, 0x811268 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x00783D88: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00783D90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00783D90u);

L_00783D90:
    ecx = MEM32(ebp + (-0x44)); /* 0x00783D90: mov ecx, dword ptr [ebp - 0x44] */
    goto L_0040A000; /* 0x00783D93: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00783D98(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00783D98u);

L_00783D98:
    ecx = MEM32(ebp + (-0x4C)); /* 0x00783D98: mov ecx, dword ptr [ebp - 0x4c] */
    goto L_004B7F40; /* 0x00783D9B: jmp 0x4b7f40 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_004B7F40: RECOMP_ITAIL(0x004B7F40u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00783DA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00783DA0u);

L_00783DA0:
    ecx = ebp + (-0x28); /* 0x00783DA0: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x00783DA3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}
