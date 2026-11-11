#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_0079116C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079116Cu);

L_0079116C:
    ecx = MEM32(ebp + (-0x130)); /* 0x0079116C: mov ecx, dword ptr [ebp - 0x130] */
    goto L_0040A000; /* 0x00791172: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00791177(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00791177u);

L_00791177:
    ecx = ebp + (-0x128); /* 0x00791177: lea ecx, [ebp - 0x128] */
    goto L_0048A870; /* 0x0079117D: jmp 0x48a870 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0048A870: RECOMP_ITAIL(0x0048A870u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00791182(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00791182u);

L_00791182:
    eax = MEM32(ebp + (-0x130)); /* 0x00791182: mov eax, dword ptr [ebp - 0x130] */
    PUSH32(esp, eax); /* 0x00791188: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x00791189: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0079118F: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00791190: ret  */
    RECOMP_REGS_OUT();
}

void sub_00791191(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00791191u);

L_00791191:
    ecx = MEM32(ebp + (-0x134)); /* 0x00791191: mov ecx, dword ptr [ebp - 0x134] */
    goto L_0040A000; /* 0x00791197: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079119C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079119Cu);

L_0079119C:
    ecx = MEM32(ebp + (-0x12C)); /* 0x0079119C: mov ecx, dword ptr [ebp - 0x12c] */
    goto L_0040A000; /* 0x007911A2: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007911A7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007911A7u);

L_007911A7:
    eax = MEM32(ebp + (-0x130)); /* 0x007911A7: mov eax, dword ptr [ebp - 0x130] */
    PUSH32(esp, eax); /* 0x007911AD: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007911AE: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007911B4: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007911B5: ret  */
    RECOMP_REGS_OUT();
}

void sub_007911B6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007911B6u);

L_007911B6:
    ecx = MEM32(ebp + (-0x134)); /* 0x007911B6: mov ecx, dword ptr [ebp - 0x134] */
    goto L_0040A000; /* 0x007911BC: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007911C1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007911C1u);

L_007911C1:
    ecx = MEM32(ebp + (-0x12C)); /* 0x007911C1: mov ecx, dword ptr [ebp - 0x12c] */
    goto L_0040A000; /* 0x007911C7: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007911CC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007911CCu);

L_007911CC:
    ecx = MEM32(ebp + (-0x12C)); /* 0x007911CC: mov ecx, dword ptr [ebp - 0x12c] */
    goto L_0040A000; /* 0x007911D2: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007911D7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007911D7u);

L_007911D7:
    ecx = MEM32(ebp + (-0x164)); /* 0x007911D7: mov ecx, dword ptr [ebp - 0x164] */
    goto L_0040A000; /* 0x007911DD: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007911E2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007911E2u);

    goto L_007911E2;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007911E2:
    edx = MEM32(esp + 0x8); /* 0x007911E2: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007911E6: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x16C)); /* 0x007911E9: mov ecx, dword ptr [edx - 0x16c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007911EF: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007911F1: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007911F6: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007911F9: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007911FB: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0081C780u; /* 0x00791200: mov eax, 0x81c780 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x00791205: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00791210(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00791210u);

L_00791210:
    ecx = MEM32(ebp + (-0x7C)); /* 0x00791210: mov ecx, dword ptr [ebp - 0x7c] */
    goto L_0040A000; /* 0x00791213: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00791218(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00791218u);

L_00791218:
    ecx = MEM32(ebp + (-0x80)); /* 0x00791218: mov ecx, dword ptr [ebp - 0x80] */
    goto L_0040A000; /* 0x0079121B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00791220(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00791220u);

L_00791220:
    ecx = ebp + (-0x44); /* 0x00791220: lea ecx, [ebp - 0x44] */
    goto L_0040A000; /* 0x00791223: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00791228(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00791228u);

L_00791228:
    ecx = ebp + (-0x2C); /* 0x00791228: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x0079122B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00791230(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00791230u);

L_00791230:
    ecx = MEM32(ebp + (-0x80)); /* 0x00791230: mov ecx, dword ptr [ebp - 0x80] */
    goto L_0040A000; /* 0x00791233: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00791238(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00791238u);

L_00791238:
    ecx = MEM32(ebp + (-0x7C)); /* 0x00791238: mov ecx, dword ptr [ebp - 0x7c] */
    goto L_0040A000; /* 0x0079123B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00791240(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00791240u);

L_00791240:
    ecx = ebp + (-0x74); /* 0x00791240: lea ecx, [ebp - 0x74] */
    goto L_0040A000; /* 0x00791243: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00791248(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00791248u);

L_00791248:
    ecx = ebp + (-0x2C); /* 0x00791248: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x0079124B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00791250(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00791250u);

L_00791250:
    ecx = ebp + (-0x5C); /* 0x00791250: lea ecx, [ebp - 0x5c] */
    goto L_0040A000; /* 0x00791253: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00791258(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00791258u);

L_00791258:
    ecx = MEM32(ebp + (-0x80)); /* 0x00791258: mov ecx, dword ptr [ebp - 0x80] */
    goto L_0040A000; /* 0x0079125B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00791260(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00791260u);

L_00791260:
    ecx = MEM32(ebp + (-0x7C)); /* 0x00791260: mov ecx, dword ptr [ebp - 0x7c] */
    goto L_0040A000; /* 0x00791263: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00791268(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00791268u);

L_00791268:
    ecx = ebp + (-0x2C); /* 0x00791268: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x0079126B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00791270(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00791270u);

L_00791270:
    ecx = ebp + (-0x74); /* 0x00791270: lea ecx, [ebp - 0x74] */
    goto L_0040A000; /* 0x00791273: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00791278(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00791278u);

    goto L_00791278;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_00791278:
    edx = MEM32(esp + 0x8); /* 0x00791278: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0079127C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x88)); /* 0x0079127F: mov ecx, dword ptr [edx - 0x88] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x00791285: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00791287: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x8)); /* 0x0079128C: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079128F: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00791291: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0081C8B8u; /* 0x00791296: mov eax, 0x81c8b8 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0079129B: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007912A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007912A0u);

L_007912A0:
    ecx = ebp + 0x8; /* 0x007912A0: lea ecx, [ebp + 8] */
    goto L_0040A000; /* 0x007912A3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007912A8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007912A8u);

L_007912A8:
    ecx = MEM32(ebp + (-0x14)); /* 0x007912A8: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040A000; /* 0x007912AB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007912B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007912B0u);

L_007912B0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007912B0: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040A000; /* 0x007912B3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007912B8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007912B8u);

L_007912B8:
    ecx = MEM32(ebp + (-0x18)); /* 0x007912B8: mov ecx, dword ptr [ebp - 0x18] */
    goto L_0040A000; /* 0x007912BB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007912C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007912C0u);

L_007912C0:
    ecx = MEM32(ebp + (-0x1C)); /* 0x007912C0: mov ecx, dword ptr [ebp - 0x1c] */
    goto L_0040A000; /* 0x007912C3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007912C8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007912C8u);

    goto L_007912C8;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007912C8:
    edx = MEM32(esp + 0x8); /* 0x007912C8: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007912CC: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x24)); /* 0x007912CF: mov ecx, dword ptr [edx - 0x24] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007912D2: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007912D4: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0081C948u; /* 0x007912D9: mov eax, 0x81c948 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007912DE: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007912F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007912F0u);

L_007912F0:
    ecx = ebp + 0x8; /* 0x007912F0: lea ecx, [ebp + 8] */
    goto L_0040A000; /* 0x007912F3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007912F8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007912F8u);

L_007912F8:
    ecx = MEM32(ebp + (-0x18)); /* 0x007912F8: mov ecx, dword ptr [ebp - 0x18] */
    goto L_0040A000; /* 0x007912FB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00791300(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00791300u);

L_00791300:
    ecx = MEM32(ebp + (-0x14)); /* 0x00791300: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040A000; /* 0x00791303: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00791308(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00791308u);

L_00791308:
    ecx = MEM32(ebp + (-0x10)); /* 0x00791308: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040A000; /* 0x0079130B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00791310(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00791310u);

L_00791310:
    ecx = MEM32(ebp + (-0x1C)); /* 0x00791310: mov ecx, dword ptr [ebp - 0x1c] */
    goto L_0040A000; /* 0x00791313: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00791318(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00791318u);

    goto L_00791318;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_00791318:
    edx = MEM32(esp + 0x8); /* 0x00791318: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0079131C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x24)); /* 0x0079131F: mov ecx, dword ptr [edx - 0x24] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x00791322: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00791324: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0081C994u; /* 0x00791329: mov eax, 0x81c994 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0079132E: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00791340(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00791340u);

L_00791340:
    ecx = MEM32(ebp + (-0x14)); /* 0x00791340: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xCu; /* 0x00791343: add ecx, 0xc */
    _flag_k = FK_ADD;
    goto L_0048A870; /* 0x00791346: jmp 0x48a870 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0048A870: RECOMP_ITAIL(0x0048A870u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079134B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079134Bu);

L_0079134B:
    ecx = MEM32(ebp + (-0x10)); /* 0x0079134B: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x5Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x5Cu; /* 0x0079134E: add ecx, 0x5c */
    _flag_k = FK_ADD;
    goto L_004D07D0; /* 0x00791351: jmp 0x4d07d0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_004D07D0: RECOMP_ITAIL(0x004D07D0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00791356(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00791356u);

L_00791356:
    ecx = MEM32(ebp + (-0x14)); /* 0x00791356: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xCu; /* 0x00791359: add ecx, 0xc */
    _flag_k = FK_ADD;
    goto L_0048A870; /* 0x0079135C: jmp 0x48a870 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0048A870: RECOMP_ITAIL(0x0048A870u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00791361(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00791361u);

L_00791361:
    ecx = MEM32(ebp + (-0x10)); /* 0x00791361: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x160u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x160u; /* 0x00791364: add ecx, 0x160 */
    _flag_k = FK_ADD;
    goto L_004D07D0; /* 0x0079136A: jmp 0x4d07d0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_004D07D0: RECOMP_ITAIL(0x004D07D0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079136F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079136Fu);

L_0079136F:
    ecx = MEM32(ebp + (-0x14)); /* 0x0079136F: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x00791372: add ecx, 8 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x00791375: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079137A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079137Au);

L_0079137A:
    ecx = MEM32(ebp + (-0x10)); /* 0x0079137A: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x264u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x264u; /* 0x0079137D: add ecx, 0x264 */
    _flag_k = FK_ADD;
    goto L_004D0820; /* 0x00791383: jmp 0x4d0820 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_004D0820: RECOMP_ITAIL(0x004D0820u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00791388(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00791388u);

L_00791388:
    ecx = MEM32(ebp + (-0x14)); /* 0x00791388: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040A000; /* 0x0079138B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00791390(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00791390u);

L_00791390:
    ecx = MEM32(ebp + (-0x18)); /* 0x00791390: mov ecx, dword ptr [ebp - 0x18] */
    goto L_0040A000; /* 0x00791393: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00791398(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00791398u);

L_00791398:
    ecx = MEM32(ebp + (-0x18)); /* 0x00791398: mov ecx, dword ptr [ebp - 0x18] */
    goto L_0040A000; /* 0x0079139B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007913A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007913A0u);

L_007913A0:
    ecx = MEM32(ebp + (-0x14)); /* 0x007913A0: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040A000; /* 0x007913A3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007913A8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007913A8u);

L_007913A8:
    eax = MEM32(ebp + (-0x18)); /* 0x007913A8: mov eax, dword ptr [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x007913AB: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007913AC: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007913B2: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007913B3: ret  */
    RECOMP_REGS_OUT();
}

void sub_007913B4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007913B4u);

    goto L_007913B4;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007913B4:
    edx = MEM32(esp + 0x8); /* 0x007913B4: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007913B8: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x007913BB: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007913BE: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007913C0: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0081C9E0u; /* 0x007913C5: mov eax, 0x81c9e0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007913CA: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007913D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007913D0u);

L_007913D0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007913D0: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xCu; /* 0x007913D3: add ecx, 0xc */
    _flag_k = FK_ADD;
    goto L_0048A870; /* 0x007913D6: jmp 0x48a870 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0048A870: RECOMP_ITAIL(0x0048A870u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007913DB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007913DBu);

    goto L_007913DB;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007913DB:
    edx = MEM32(esp + 0x8); /* 0x007913DB: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007913DF: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x8)); /* 0x007913E2: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007913E5: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007913E7: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0081CA60u; /* 0x007913EC: mov eax, 0x81ca60 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007913F1: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00791400(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00791400u);

L_00791400:
    ecx = MEM32(ebp + (-0x10)); /* 0x00791400: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x00791403: add ecx, 8 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x00791406: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079140B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079140Bu);

    goto L_0079140B;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0079140B:
    edx = MEM32(esp + 0x8); /* 0x0079140B: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0079140F: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xC)); /* 0x00791412: mov ecx, dword ptr [edx - 0xc] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x00791415: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00791417: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0081CA8Cu; /* 0x0079141C: mov eax, 0x81ca8c */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x00791421: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00791430(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00791430u);

L_00791430:
    ecx = MEM32(ebp + (-0x10)); /* 0x00791430: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x5Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x5Cu; /* 0x00791433: add ecx, 0x5c */
    _flag_k = FK_ADD;
    goto L_004D07D0; /* 0x00791436: jmp 0x4d07d0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_004D07D0: RECOMP_ITAIL(0x004D07D0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079143B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079143Bu);

L_0079143B:
    ecx = MEM32(ebp + (-0x10)); /* 0x0079143B: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x160u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x160u; /* 0x0079143E: add ecx, 0x160 */
    _flag_k = FK_ADD;
    goto L_004D07D0; /* 0x00791444: jmp 0x4d07d0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_004D07D0: RECOMP_ITAIL(0x004D07D0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00791449(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00791449u);

L_00791449:
    ecx = MEM32(ebp + (-0x10)); /* 0x00791449: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x264u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x264u; /* 0x0079144C: add ecx, 0x264 */
    _flag_k = FK_ADD;
    goto L_004D0820; /* 0x00791452: jmp 0x4d0820 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_004D0820: RECOMP_ITAIL(0x004D0820u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00791457(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00791457u);

L_00791457:
    ecx = MEM32(ebp + (-0x14)); /* 0x00791457: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x0079145A: add ecx, 8 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x0079145D: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00791462(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00791462u);

L_00791462:
    ecx = MEM32(ebp + (-0x14)); /* 0x00791462: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xCu; /* 0x00791465: add ecx, 0xc */
    _flag_k = FK_ADD;
    goto L_0048A870; /* 0x00791468: jmp 0x48a870 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0048A870: RECOMP_ITAIL(0x0048A870u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079146D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079146Du);

L_0079146D:
    ecx = MEM32(ebp + (-0x14)); /* 0x0079146D: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xCu; /* 0x00791470: add ecx, 0xc */
    _flag_k = FK_ADD;
    goto L_0048A870; /* 0x00791473: jmp 0x48a870 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0048A870: RECOMP_ITAIL(0x0048A870u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00791478(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00791478u);

    goto L_00791478;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_00791478:
    edx = MEM32(esp + 0x8); /* 0x00791478: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0079147C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x0079147F: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x00791482: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00791484: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0081CAB8u; /* 0x00791489: mov eax, 0x81cab8 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0079148E: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007914A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007914A0u);

L_007914A0:
    ecx = ebp + (-0x28); /* 0x007914A0: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007914A3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007914A8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007914A8u);

L_007914A8:
    ecx = ebp + (-0x40); /* 0x007914A8: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007914AB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007914B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007914B0u);

L_007914B0:
    ecx = ebp + (-0x28); /* 0x007914B0: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007914B3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007914B8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007914B8u);

L_007914B8:
    ecx = ebp + (-0x40); /* 0x007914B8: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007914BB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007914C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007914C0u);

L_007914C0:
    ecx = ebp + (-0x28); /* 0x007914C0: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007914C3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007914C8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007914C8u);

L_007914C8:
    ecx = ebp + (-0x40); /* 0x007914C8: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007914CB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007914D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007914D0u);

L_007914D0:
    ecx = ebp + (-0x28); /* 0x007914D0: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007914D3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007914D8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007914D8u);

    goto L_007914D8;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007914D8:
    edx = MEM32(esp + 0x8); /* 0x007914D8: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007914DC: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x3C)); /* 0x007914DF: mov ecx, dword ptr [edx - 0x3c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007914E2: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007914E4: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007914E9: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007914EC: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007914EE: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0081CB0Cu; /* 0x007914F3: mov eax, 0x81cb0c */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007914F8: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00791500(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00791500u);

L_00791500:
    ecx = MEM32(ebp + (-0x114)); /* 0x00791500: mov ecx, dword ptr [ebp - 0x114] */
    goto L_0040A000; /* 0x00791506: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079150B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079150Bu);

L_0079150B:
    ecx = ebp + (-0x110); /* 0x0079150B: lea ecx, [ebp - 0x110] */
    goto L_0048A870; /* 0x00791511: jmp 0x48a870 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0048A870: RECOMP_ITAIL(0x0048A870u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00791516(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00791516u);

L_00791516:
    ecx = MEM32(ebp + (-0x114)); /* 0x00791516: mov ecx, dword ptr [ebp - 0x114] */
    goto L_0040A000; /* 0x0079151C: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00791521(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00791521u);

L_00791521:
    ecx = ebp + (-0x110); /* 0x00791521: lea ecx, [ebp - 0x110] */
    goto L_0048A870; /* 0x00791527: jmp 0x48a870 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0048A870: RECOMP_ITAIL(0x0048A870u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079152C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079152Cu);

L_0079152C:
    eax = MEM32(ebp + (-0x114)); /* 0x0079152C: mov eax, dword ptr [ebp - 0x114] */
    PUSH32(esp, eax); /* 0x00791532: push eax */
    RECOMP_ICALL(MEM32(0x7CC6A8)); /* 0x00791533: call dword ptr [0x7cc6a8] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00791539: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0079153A: ret  */
    RECOMP_REGS_OUT();
}

void sub_0079153B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079153Bu);

    goto L_0079153B;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0079153B:
    edx = MEM32(esp + 0x8); /* 0x0079153B: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x114); /* 0x0079153F: lea eax, [edx - 0x114] */
    ecx = MEM32(edx + (-0x118)); /* 0x00791545: mov ecx, dword ptr [edx - 0x118] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079154B: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079154D: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x00791552: add eax, 0xc */
    _flag_k = FK_ADD;
    ecx = MEM32(edx + (-0x8)); /* 0x00791555: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x00791558: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079155A: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0081CB68u; /* 0x0079155F: mov eax, 0x81cb68 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x00791564: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00791570(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00791570u);

L_00791570:
    ecx = MEM32(ebp + (-0x30)); /* 0x00791570: mov ecx, dword ptr [ebp - 0x30] */
    goto L_0040A000; /* 0x00791573: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00791578(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00791578u);

L_00791578:
    ecx = MEM32(ebp + (-0x30)); /* 0x00791578: mov ecx, dword ptr [ebp - 0x30] */
    goto L_0040A000; /* 0x0079157B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00791580(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00791580u);

L_00791580:
    ecx = MEM32(ebp + (-0x30)); /* 0x00791580: mov ecx, dword ptr [ebp - 0x30] */
    goto L_0040A000; /* 0x00791583: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00791588(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00791588u);

L_00791588:
    ecx = MEM32(ebp + (-0x30)); /* 0x00791588: mov ecx, dword ptr [ebp - 0x30] */
    goto L_0040A000; /* 0x0079158B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00791590(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00791590u);

L_00791590:
    ecx = MEM32(ebp + (-0x30)); /* 0x00791590: mov ecx, dword ptr [ebp - 0x30] */
    goto L_0040A000; /* 0x00791593: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00791598(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00791598u);

L_00791598:
    ecx = MEM32(ebp + (-0x30)); /* 0x00791598: mov ecx, dword ptr [ebp - 0x30] */
    goto L_0040A000; /* 0x0079159B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007915A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007915A0u);

    goto L_007915A0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007915A0:
    edx = MEM32(esp + 0x8); /* 0x007915A0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007915A4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x34)); /* 0x007915A7: mov ecx, dword ptr [edx - 0x34] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007915AA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007915AC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0081CBB4u; /* 0x007915B1: mov eax, 0x81cbb4 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007915B6: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007915C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007915C0u);

L_007915C0:
    ecx = MEM32(ebp + (-0x40)); /* 0x007915C0: mov ecx, dword ptr [ebp - 0x40] */
    goto L_0040A000; /* 0x007915C3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007915C8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007915C8u);

L_007915C8:
    ecx = MEM32(ebp + (-0x44)); /* 0x007915C8: mov ecx, dword ptr [ebp - 0x44] */
    goto L_0040A000; /* 0x007915CB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007915D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007915D0u);

L_007915D0:
    ecx = MEM32(ebp + (-0x2C)); /* 0x007915D0: mov ecx, dword ptr [ebp - 0x2c] */
    goto L_0040A000; /* 0x007915D3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007915D8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007915D8u);

L_007915D8:
    ecx = MEM32(ebp + (-0x44)); /* 0x007915D8: mov ecx, dword ptr [ebp - 0x44] */
    goto L_0040A000; /* 0x007915DB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007915E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007915E0u);

L_007915E0:
    ecx = MEM32(ebp + (-0x2C)); /* 0x007915E0: mov ecx, dword ptr [ebp - 0x2c] */
    goto L_0040A000; /* 0x007915E3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007915E8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007915E8u);

L_007915E8:
    ecx = MEM32(ebp + (-0x44)); /* 0x007915E8: mov ecx, dword ptr [ebp - 0x44] */
    goto L_0040A000; /* 0x007915EB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007915F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007915F0u);

L_007915F0:
    ecx = MEM32(ebp + (-0x40)); /* 0x007915F0: mov ecx, dword ptr [ebp - 0x40] */
    goto L_0040A000; /* 0x007915F3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007915F8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007915F8u);

L_007915F8:
    ecx = MEM32(ebp + (-0x44)); /* 0x007915F8: mov ecx, dword ptr [ebp - 0x44] */
    goto L_0040A000; /* 0x007915FB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00791600(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00791600u);

L_00791600:
    ecx = MEM32(ebp + (-0x40)); /* 0x00791600: mov ecx, dword ptr [ebp - 0x40] */
    goto L_0040A000; /* 0x00791603: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00791608(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00791608u);

L_00791608:
    ecx = MEM32(ebp + (-0x44)); /* 0x00791608: mov ecx, dword ptr [ebp - 0x44] */
    goto L_0040A000; /* 0x0079160B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00791610(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00791610u);

L_00791610:
    ecx = MEM32(ebp + (-0x40)); /* 0x00791610: mov ecx, dword ptr [ebp - 0x40] */
    goto L_0040A000; /* 0x00791613: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00791618(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00791618u);

    goto L_00791618;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_00791618:
    edx = MEM32(esp + 0x8); /* 0x00791618: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0079161C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x4C)); /* 0x0079161F: mov ecx, dword ptr [edx - 0x4c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x00791622: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00791624: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0081CC08u; /* 0x00791629: mov eax, 0x81cc08 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0079162E: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00791640(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00791640u);

L_00791640:
    ecx = MEM32(ebp + (-0x2C)); /* 0x00791640: mov ecx, dword ptr [ebp - 0x2c] */
    goto L_0040A000; /* 0x00791643: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00791648(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00791648u);

L_00791648:
    ecx = MEM32(ebp + (-0x20)); /* 0x00791648: mov ecx, dword ptr [ebp - 0x20] */
    goto L_0040A000; /* 0x0079164B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00791650(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00791650u);

L_00791650:
    ecx = MEM32(ebp + (-0x20)); /* 0x00791650: mov ecx, dword ptr [ebp - 0x20] */
    goto L_0040A000; /* 0x00791653: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00791658(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00791658u);

L_00791658:
    ecx = MEM32(ebp + (-0x38)); /* 0x00791658: mov ecx, dword ptr [ebp - 0x38] */
    goto L_0040A000; /* 0x0079165B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00791660(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00791660u);

L_00791660:
    ecx = MEM32(ebp + (-0x38)); /* 0x00791660: mov ecx, dword ptr [ebp - 0x38] */
    goto L_0040A000; /* 0x00791663: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00791668(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00791668u);

L_00791668:
    ecx = MEM32(ebp + (-0x20)); /* 0x00791668: mov ecx, dword ptr [ebp - 0x20] */
    goto L_0040A000; /* 0x0079166B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00791670(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00791670u);

L_00791670:
    ecx = MEM32(ebp + (-0x38)); /* 0x00791670: mov ecx, dword ptr [ebp - 0x38] */
    goto L_0040A000; /* 0x00791673: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}
