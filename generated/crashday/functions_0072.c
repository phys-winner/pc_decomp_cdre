#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_00781CC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781CC0u);

L_00781CC0:
    ecx = MEM32(ebp + 0x8); /* 0x00781CC0: mov ecx, dword ptr [ebp + 8] */
    goto L_0040B660; /* 0x00781CC3: jmp 0x40b660 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B660: RECOMP_ITAIL(0x0040B660u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781CC8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781CC8u);

    goto L_00781CC8;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_00781CC8:
    edx = MEM32(esp + 0x8); /* 0x00781CC8: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x00781CCC: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xC)); /* 0x00781CCF: mov ecx, dword ptr [edx - 0xc] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x00781CD2: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00781CD4: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0080F028u; /* 0x00781CD9: mov eax, 0x80f028 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x00781CDE: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00781CF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781CF0u);

L_00781CF0:
    ecx = MEM32(ebp + 0x8); /* 0x00781CF0: mov ecx, dword ptr [ebp + 8] */
    goto L_0040A000; /* 0x00781CF3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781CF8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781CF8u);

L_00781CF8:
    ecx = MEM32(ebp + 0x8); /* 0x00781CF8: mov ecx, dword ptr [ebp + 8] */
    goto L_0040A000; /* 0x00781CFB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781D00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781D00u);

L_00781D00:
    ecx = MEM32(ebp + 0x8); /* 0x00781D00: mov ecx, dword ptr [ebp + 8] */
    goto L_0040A000; /* 0x00781D03: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781D08(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781D08u);

L_00781D08:
    ecx = MEM32(ebp + (-0x10)); /* 0x00781D08: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040A000; /* 0x00781D0B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781D10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781D10u);

L_00781D10:
    ecx = MEM32(ebp + 0x8); /* 0x00781D10: mov ecx, dword ptr [ebp + 8] */
    goto L_0040A000; /* 0x00781D13: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781D18(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781D18u);

L_00781D18:
    ecx = MEM32(ebp + (-0x10)); /* 0x00781D18: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040A000; /* 0x00781D1B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781D20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781D20u);

    goto L_00781D20;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_00781D20:
    edx = MEM32(esp + 0x8); /* 0x00781D20: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x00781D24: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x10)); /* 0x00781D27: mov ecx, dword ptr [edx - 0x10] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x00781D2A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00781D2C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0080F054u; /* 0x00781D31: mov eax, 0x80f054 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x00781D36: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00781D40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781D40u);

L_00781D40:
    ecx = 0x00864A60u; /* 0x00781D40: mov ecx, 0x864a60 */
    goto L_0040A000; /* 0x00781D45: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781D4A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781D4Au);

L_00781D4A:
    ecx = 0x00864A78u; /* 0x00781D4A: mov ecx, 0x864a78 */
    goto L_0040A000; /* 0x00781D4F: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781D54(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781D54u);

    goto L_00781D54;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_00781D54:
    edx = MEM32(esp + 0x8); /* 0x00781D54: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x00781D58: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x4)); /* 0x00781D5B: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x00781D5E: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00781D60: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0080F0A8u; /* 0x00781D65: mov eax, 0x80f0a8 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x00781D6A: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00781D70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781D70u);

L_00781D70:
    ecx = MEM32(ebp + (-0x4C)); /* 0x00781D70: mov ecx, dword ptr [ebp - 0x4c] */
    goto L_004E3920; /* 0x00781D73: jmp 0x4e3920 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_004E3920: RECOMP_ITAIL(0x004E3920u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781D78(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781D78u);

L_00781D78:
    ecx = MEM32(ebp + (-0x48)); /* 0x00781D78: mov ecx, dword ptr [ebp - 0x48] */
    goto L_0040B330; /* 0x00781D7B: jmp 0x40b330 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B330: RECOMP_ITAIL(0x0040B330u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781D80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781D80u);

L_00781D80:
    ecx = MEM32(ebp + (-0x4C)); /* 0x00781D80: mov ecx, dword ptr [ebp - 0x4c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x984Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x984Cu; /* 0x00781D83: add ecx, 0x984c */
    _flag_k = FK_ADD;
    goto L_0040B140; /* 0x00781D89: jmp 0x40b140 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B140: RECOMP_ITAIL(0x0040B140u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781D8E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781D8Eu);

L_00781D8E:
    ecx = MEM32(ebp + (-0x48)); /* 0x00781D8E: mov ecx, dword ptr [ebp - 0x48] */
    goto L_0040B330; /* 0x00781D91: jmp 0x40b330 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B330: RECOMP_ITAIL(0x0040B330u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781D96(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781D96u);

L_00781D96:
    ecx = MEM32(ebp + (-0x4C)); /* 0x00781D96: mov ecx, dword ptr [ebp - 0x4c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x9854u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x9854u; /* 0x00781D99: add ecx, 0x9854 */
    _flag_k = FK_ADD;
    goto L_0040B140; /* 0x00781D9F: jmp 0x40b140 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B140: RECOMP_ITAIL(0x0040B140u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781DA4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781DA4u);

L_00781DA4:
    ecx = MEM32(ebp + (-0x4C)); /* 0x00781DA4: mov ecx, dword ptr [ebp - 0x4c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x0003ADDCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x0003ADDCu; /* 0x00781DA7: add ecx, 0x3addc */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x00781DAD: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781DB2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781DB2u);

L_00781DB2:
    ecx = MEM32(ebp + (-0x48)); /* 0x00781DB2: mov ecx, dword ptr [ebp - 0x48] */
    goto L_0040A000; /* 0x00781DB5: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781DBA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781DBAu);

L_00781DBA:
    ecx = MEM32(ebp + (-0x44)); /* 0x00781DBA: mov ecx, dword ptr [ebp - 0x44] */
    goto L_0040A000; /* 0x00781DBD: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781DC2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781DC2u);

L_00781DC2:
    ecx = MEM32(ebp + (-0x44)); /* 0x00781DC2: mov ecx, dword ptr [ebp - 0x44] */
    goto L_0040A000; /* 0x00781DC5: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781DCA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781DCAu);

L_00781DCA:
    ecx = MEM32(ebp + (-0x48)); /* 0x00781DCA: mov ecx, dword ptr [ebp - 0x48] */
    goto L_0040A000; /* 0x00781DCD: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781DD2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781DD2u);

L_00781DD2:
    eax = MEM32(ebp + (-0x44)); /* 0x00781DD2: mov eax, dword ptr [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x00781DD5: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x00781DD6: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00781DDC: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00781DDD: ret  */
    RECOMP_REGS_OUT();
}

void sub_00781DDE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781DDEu);

L_00781DDE:
    eax = MEM32(ebp + (-0x44)); /* 0x00781DDE: mov eax, dword ptr [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x00781DE1: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x00781DE2: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00781DE8: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00781DE9: ret  */
    RECOMP_REGS_OUT();
}

void sub_00781DEA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781DEAu);

L_00781DEA:
    ecx = MEM32(ebp + (-0x44)); /* 0x00781DEA: mov ecx, dword ptr [ebp - 0x44] */
    goto L_0040A000; /* 0x00781DED: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781DF2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781DF2u);

L_00781DF2:
    ecx = MEM32(ebp + (-0x48)); /* 0x00781DF2: mov ecx, dword ptr [ebp - 0x48] */
    goto L_0040A000; /* 0x00781DF5: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781DFA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781DFAu);

L_00781DFA:
    ecx = ebp + (-0x40); /* 0x00781DFA: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x00781DFD: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781E02(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781E02u);

L_00781E02:
    ecx = ebp + (-0x28); /* 0x00781E02: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x00781E05: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781E0A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781E0Au);

    goto L_00781E0A;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_00781E0A:
    edx = MEM32(esp + 0x8); /* 0x00781E0A: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x00781E0E: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x4C)); /* 0x00781E11: mov ecx, dword ptr [edx - 0x4c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x00781E14: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00781E16: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x00781E1B: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x00781E1E: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00781E20: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0080F0E0u; /* 0x00781E25: mov eax, 0x80f0e0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x00781E2A: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00781E30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781E30u);

L_00781E30:
    ecx = MEM32(ebp + (-0x10)); /* 0x00781E30: mov ecx, dword ptr [ebp - 0x10] */
    goto L_004E3920; /* 0x00781E33: jmp 0x4e3920 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_004E3920: RECOMP_ITAIL(0x004E3920u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781E38(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781E38u);

L_00781E38:
    ecx = MEM32(ebp + (-0x10)); /* 0x00781E38: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x984Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x984Cu; /* 0x00781E3B: add ecx, 0x984c */
    _flag_k = FK_ADD;
    goto L_0040B140; /* 0x00781E41: jmp 0x40b140 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B140: RECOMP_ITAIL(0x0040B140u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781E46(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781E46u);

L_00781E46:
    ecx = MEM32(ebp + (-0x10)); /* 0x00781E46: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x9854u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x9854u; /* 0x00781E49: add ecx, 0x9854 */
    _flag_k = FK_ADD;
    goto L_0040B140; /* 0x00781E4F: jmp 0x40b140 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B140: RECOMP_ITAIL(0x0040B140u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781E54(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781E54u);

L_00781E54:
    ecx = MEM32(ebp + (-0x10)); /* 0x00781E54: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x0003ADDCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x0003ADDCu; /* 0x00781E57: add ecx, 0x3addc */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x00781E5D: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781E62(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781E62u);

L_00781E62:
    ecx = MEM32(ebp + (-0x14)); /* 0x00781E62: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040B330; /* 0x00781E65: jmp 0x40b330 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B330: RECOMP_ITAIL(0x0040B330u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781E6A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781E6Au);

L_00781E6A:
    ecx = MEM32(ebp + (-0x14)); /* 0x00781E6A: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040B330; /* 0x00781E6D: jmp 0x40b330 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B330: RECOMP_ITAIL(0x0040B330u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781E72(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781E72u);

    goto L_00781E72;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_00781E72:
    edx = MEM32(esp + 0x8); /* 0x00781E72: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x00781E76: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x00781E79: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x00781E7C: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00781E7E: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0080F188u; /* 0x00781E83: mov eax, 0x80f188 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x00781E88: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00781E90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781E90u);

L_00781E90:
    ecx = MEM32(ebp + 0x8); /* 0x00781E90: mov ecx, dword ptr [ebp + 8] */
    goto L_0040A000; /* 0x00781E93: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781E98(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781E98u);

L_00781E98:
    ecx = MEM32(ebp + (-0x10)); /* 0x00781E98: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040A000; /* 0x00781E9B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781EA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781EA0u);

    goto L_00781EA0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_00781EA0:
    edx = MEM32(esp + 0x8); /* 0x00781EA0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x00781EA4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x2C)); /* 0x00781EA7: mov ecx, dword ptr [edx - 0x2c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x00781EAA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00781EAC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0080F1DCu; /* 0x00781EB1: mov eax, 0x80f1dc */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x00781EB6: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00781EC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781EC0u);

L_00781EC0:
    ecx = MEM32(ebp + (-0x18)); /* 0x00781EC0: mov ecx, dword ptr [ebp - 0x18] */
    goto L_0040A000; /* 0x00781EC3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781EC8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781EC8u);

L_00781EC8:
    ecx = MEM32(ebp + (-0x14)); /* 0x00781EC8: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040A000; /* 0x00781ECB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781ED0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781ED0u);

    goto L_00781ED0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_00781ED0:
    edx = MEM32(esp + 0x8); /* 0x00781ED0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x00781ED4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x70)); /* 0x00781ED7: mov ecx, dword ptr [edx - 0x70] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x00781EDA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00781EDC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0080F210u; /* 0x00781EE1: mov eax, 0x80f210 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x00781EE6: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00781EF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781EF0u);

L_00781EF0:
    ecx = 0x0087CD40u; /* 0x00781EF0: mov ecx, 0x87cd40 */
    goto L_0040B340; /* 0x00781EF5: jmp 0x40b340 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B340: RECOMP_ITAIL(0x0040B340u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781EFA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781EFAu);

L_00781EFA:
    ecx = 0x0087CD40u; /* 0x00781EFA: mov ecx, 0x87cd40 */
    goto L_0040B2E0; /* 0x00781EFF: jmp 0x40b2e0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B2E0: RECOMP_ITAIL(0x0040B2E0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781F04(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781F04u);

L_00781F04:
    ecx = 0x0087CD40u; /* 0x00781F04: mov ecx, 0x87cd40 */
    goto L_0040B290; /* 0x00781F09: jmp 0x40b290 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B290: RECOMP_ITAIL(0x0040B290u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781F0E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781F0Eu);

L_00781F0E:
    ecx = 0x0087CD40u; /* 0x00781F0E: mov ecx, 0x87cd40 */
    goto L_0040B220; /* 0x00781F13: jmp 0x40b220 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B220: RECOMP_ITAIL(0x0040B220u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781F18(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781F18u);

    goto L_00781F18;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_00781F18:
    edx = MEM32(esp + 0x8); /* 0x00781F18: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x34); /* 0x00781F1C: lea eax, [edx - 0x34] */
    ecx = MEM32(edx + (-0x38)); /* 0x00781F1F: mov ecx, dword ptr [edx - 0x38] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x00781F22: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00781F24: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0; /* 0x00781F29: add eax, 0 */
    _flag_k = FK_ADD;
    ecx = MEM32(edx + (-0x8)); /* 0x00781F2C: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x00781F2F: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00781F31: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0080F244u; /* 0x00781F36: mov eax, 0x80f244 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x00781F3B: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00781F40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781F40u);

L_00781F40:
    ecx = 0x0087CD40u; /* 0x00781F40: mov ecx, 0x87cd40 */
    goto L_0040B220; /* 0x00781F45: jmp 0x40b220 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B220: RECOMP_ITAIL(0x0040B220u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781F4A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781F4Au);

L_00781F4A:
    ecx = 0x0087CD40u; /* 0x00781F4A: mov ecx, 0x87cd40 */
    goto L_0040B290; /* 0x00781F4F: jmp 0x40b290 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B290: RECOMP_ITAIL(0x0040B290u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781F54(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781F54u);

L_00781F54:
    ecx = 0x0087CD40u; /* 0x00781F54: mov ecx, 0x87cd40 */
    goto L_0040B2E0; /* 0x00781F59: jmp 0x40b2e0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B2E0: RECOMP_ITAIL(0x0040B2E0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781F5E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781F5Eu);

L_00781F5E:
    ecx = 0x0087CD40u; /* 0x00781F5E: mov ecx, 0x87cd40 */
    goto L_0040B340; /* 0x00781F63: jmp 0x40b340 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B340: RECOMP_ITAIL(0x0040B340u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781F68(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781F68u);

    goto L_00781F68;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_00781F68:
    edx = MEM32(esp + 0x8); /* 0x00781F68: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x00781F6C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x10)); /* 0x00781F6F: mov ecx, dword ptr [edx - 0x10] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x00781F72: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00781F74: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0080F288u; /* 0x00781F79: mov eax, 0x80f288 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x00781F7E: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00781F90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781F90u);

L_00781F90:
    ecx = ebp + (-0x20); /* 0x00781F90: lea ecx, [ebp - 0x20] */
    goto L_00419790; /* 0x00781F93: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781F98(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781F98u);

    goto L_00781F98;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_00781F98:
    edx = MEM32(esp + 0x8); /* 0x00781F98: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x00781F9C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x58)); /* 0x00781F9F: mov ecx, dword ptr [edx - 0x58] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x00781FA2: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00781FA4: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0080F2CCu; /* 0x00781FA9: mov eax, 0x80f2cc */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x00781FAE: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00781FC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781FC0u);

L_00781FC0:
    ecx = MEM32(ebp + 0x8); /* 0x00781FC0: mov ecx, dword ptr [ebp + 8] */
    goto L_0040A000; /* 0x00781FC3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781FC8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781FC8u);

L_00781FC8:
    ecx = MEM32(ebp + (-0x10)); /* 0x00781FC8: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040A000; /* 0x00781FCB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781FD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781FD0u);

L_00781FD0:
    ecx = ebp + 0x8; /* 0x00781FD0: lea ecx, [ebp + 8] */
    goto L_0040B140; /* 0x00781FD3: jmp 0x40b140 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B140: RECOMP_ITAIL(0x0040B140u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781FD8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781FD8u);

L_00781FD8:
    ecx = ebp + 0x8; /* 0x00781FD8: lea ecx, [ebp + 8] */
    goto L_0040B330; /* 0x00781FDB: jmp 0x40b330 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B330: RECOMP_ITAIL(0x0040B330u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781FE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781FE0u);

    goto L_00781FE0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_00781FE0:
    edx = MEM32(esp + 0x8); /* 0x00781FE0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x00781FE4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x00781FE7: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x00781FEA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00781FEC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0080F2F8u; /* 0x00781FF1: mov eax, 0x80f2f8 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x00781FF6: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00782000(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782000u);

L_00782000:
    ecx = ebp + (-0x34); /* 0x00782000: lea ecx, [ebp - 0x34] */
    goto L_00419790; /* 0x00782003: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00782008(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782008u);

    goto L_00782008;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_00782008:
    edx = MEM32(esp + 0x8); /* 0x00782008: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0078200C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x64)); /* 0x0078200F: mov ecx, dword ptr [edx - 0x64] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x00782012: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00782014: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0080F33Cu; /* 0x00782019: mov eax, 0x80f33c */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0078201E: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00782030(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782030u);

L_00782030:
    ecx = MEM32(ebp + (-0x4C)); /* 0x00782030: mov ecx, dword ptr [ebp - 0x4c] */
    goto L_0040A000; /* 0x00782033: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00782038(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782038u);

L_00782038:
    ecx = MEM32(ebp + (-0x68)); /* 0x00782038: mov ecx, dword ptr [ebp - 0x68] */
    goto L_0040A000; /* 0x0078203B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00782040(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782040u);

L_00782040:
    ecx = MEM32(ebp + (-0x4C)); /* 0x00782040: mov ecx, dword ptr [ebp - 0x4c] */
    goto L_0040A000; /* 0x00782043: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00782048(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782048u);

L_00782048:
    ecx = MEM32(ebp + (-0x68)); /* 0x00782048: mov ecx, dword ptr [ebp - 0x68] */
    goto L_0040A000; /* 0x0078204B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00782050(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782050u);

L_00782050:
    ecx = MEM32(ebp + (-0x68)); /* 0x00782050: mov ecx, dword ptr [ebp - 0x68] */
    goto L_0040A000; /* 0x00782053: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00782058(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782058u);

L_00782058:
    ecx = MEM32(ebp + (-0x3C)); /* 0x00782058: mov ecx, dword ptr [ebp - 0x3c] */
    goto L_0040A000; /* 0x0078205B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00782060(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782060u);

L_00782060:
    ecx = MEM32(ebp + (-0x68)); /* 0x00782060: mov ecx, dword ptr [ebp - 0x68] */
    goto L_0040A000; /* 0x00782063: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00782068(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782068u);

L_00782068:
    ecx = MEM32(ebp + (-0x3C)); /* 0x00782068: mov ecx, dword ptr [ebp - 0x3c] */
    goto L_0040A000; /* 0x0078206B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00782070(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782070u);

L_00782070:
    ecx = MEM32(ebp + (-0x68)); /* 0x00782070: mov ecx, dword ptr [ebp - 0x68] */
    goto L_0040A000; /* 0x00782073: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00782078(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782078u);

L_00782078:
    ecx = MEM32(ebp + (-0x3C)); /* 0x00782078: mov ecx, dword ptr [ebp - 0x3c] */
    goto L_0040A000; /* 0x0078207B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00782080(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782080u);

    goto L_00782080;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_00782080:
    edx = MEM32(esp + 0x8); /* 0x00782080: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x84); /* 0x00782084: lea eax, [edx - 0x84] */
    ecx = MEM32(edx + (-0x88)); /* 0x0078208A: mov ecx, dword ptr [edx - 0x88] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x00782090: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00782092: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x00782097: add eax, 0xc */
    _flag_k = FK_ADD;
    ecx = MEM32(edx + (-0x8)); /* 0x0078209A: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078209D: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078209F: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0080F368u; /* 0x007820A4: mov eax, 0x80f368 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007820A9: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007820B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007820B0u);

L_007820B0:
    ecx = ebp + (-0x10); /* 0x007820B0: lea ecx, [ebp - 0x10] */
    goto L_0040B330; /* 0x007820B3: jmp 0x40b330 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B330: RECOMP_ITAIL(0x0040B330u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007820B8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007820B8u);

L_007820B8:
    ecx = ebp + (-0x10); /* 0x007820B8: lea ecx, [ebp - 0x10] */
    goto L_0040B140; /* 0x007820BB: jmp 0x40b140 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B140: RECOMP_ITAIL(0x0040B140u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007820C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007820C0u);

L_007820C0:
    ecx = ebp + (-0x10); /* 0x007820C0: lea ecx, [ebp - 0x10] */
    goto L_0040B330; /* 0x007820C3: jmp 0x40b330 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B330: RECOMP_ITAIL(0x0040B330u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007820C8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007820C8u);

L_007820C8:
    ecx = ebp + (-0x10); /* 0x007820C8: lea ecx, [ebp - 0x10] */
    goto L_0040B330; /* 0x007820CB: jmp 0x40b330 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B330: RECOMP_ITAIL(0x0040B330u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007820D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007820D0u);

L_007820D0:
    ecx = ebp + (-0x10); /* 0x007820D0: lea ecx, [ebp - 0x10] */
    goto L_0040B140; /* 0x007820D3: jmp 0x40b140 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B140: RECOMP_ITAIL(0x0040B140u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007820D8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007820D8u);

L_007820D8:
    ecx = ebp + (-0x10); /* 0x007820D8: lea ecx, [ebp - 0x10] */
    goto L_0040B330; /* 0x007820DB: jmp 0x40b330 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B330: RECOMP_ITAIL(0x0040B330u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007820E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007820E0u);

    goto L_007820E0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007820E0:
    edx = MEM32(esp + 0x8); /* 0x007820E0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007820E4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x10)); /* 0x007820E7: mov ecx, dword ptr [edx - 0x10] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007820EA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007820EC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0080F3E0u; /* 0x007820F1: mov eax, 0x80f3e0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007820F6: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00782100(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782100u);

L_00782100:
    ecx = ebp + (-0x10); /* 0x00782100: lea ecx, [ebp - 0x10] */
    goto L_0040B330; /* 0x00782103: jmp 0x40b330 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B330: RECOMP_ITAIL(0x0040B330u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00782108(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782108u);

L_00782108:
    ecx = ebp + (-0x10); /* 0x00782108: lea ecx, [ebp - 0x10] */
    goto L_0040B140; /* 0x0078210B: jmp 0x40b140 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B140: RECOMP_ITAIL(0x0040B140u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00782110(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782110u);

L_00782110:
    ecx = ebp + (-0x10); /* 0x00782110: lea ecx, [ebp - 0x10] */
    goto L_0040B330; /* 0x00782113: jmp 0x40b330 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B330: RECOMP_ITAIL(0x0040B330u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00782118(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782118u);

L_00782118:
    ecx = ebp + (-0x14); /* 0x00782118: lea ecx, [ebp - 0x14] */
    goto L_0040B330; /* 0x0078211B: jmp 0x40b330 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B330: RECOMP_ITAIL(0x0040B330u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00782120(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782120u);

L_00782120:
    ecx = ebp + (-0x14); /* 0x00782120: lea ecx, [ebp - 0x14] */
    goto L_0040B140; /* 0x00782123: jmp 0x40b140 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B140: RECOMP_ITAIL(0x0040B140u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00782128(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782128u);

L_00782128:
    ecx = ebp + (-0x14); /* 0x00782128: lea ecx, [ebp - 0x14] */
    goto L_0040B330; /* 0x0078212B: jmp 0x40b330 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B330: RECOMP_ITAIL(0x0040B330u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00782130(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782130u);

    goto L_00782130;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_00782130:
    edx = MEM32(esp + 0x8); /* 0x00782130: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x00782134: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x00782137: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078213A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078213C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0080F434u; /* 0x00782141: mov eax, 0x80f434 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x00782146: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00782150(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782150u);

L_00782150:
    ecx = ebp + (-0x1AC); /* 0x00782150: lea ecx, [ebp - 0x1ac] */
    goto L_0040A000; /* 0x00782156: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078215B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078215Bu);

L_0078215B:
    ecx = ebp + (-0x1DC); /* 0x0078215B: lea ecx, [ebp - 0x1dc] */
    goto L_0040A000; /* 0x00782161: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00782166(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782166u);

L_00782166:
    ecx = ebp + (-0x1C4); /* 0x00782166: lea ecx, [ebp - 0x1c4] */
    goto L_0040A000; /* 0x0078216C: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00782171(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782171u);

L_00782171:
    ecx = ebp + (-0x1DC); /* 0x00782171: lea ecx, [ebp - 0x1dc] */
    goto L_0040A000; /* 0x00782177: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078217C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078217Cu);

L_0078217C:
    ecx = ebp + (-0x1C4); /* 0x0078217C: lea ecx, [ebp - 0x1c4] */
    goto L_0040A000; /* 0x00782182: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00782187(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782187u);

L_00782187:
    ecx = ebp + (-0x1DC); /* 0x00782187: lea ecx, [ebp - 0x1dc] */
    goto L_0040A000; /* 0x0078218D: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00782192(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782192u);

L_00782192:
    ecx = ebp + (-0x1C4); /* 0x00782192: lea ecx, [ebp - 0x1c4] */
    goto L_0040A000; /* 0x00782198: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078219D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078219Du);

L_0078219D:
    ecx = ebp + (-0x1DC); /* 0x0078219D: lea ecx, [ebp - 0x1dc] */
    goto L_0040A000; /* 0x007821A3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007821A8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007821A8u);

L_007821A8:
    ecx = ebp + (-0x1C4); /* 0x007821A8: lea ecx, [ebp - 0x1c4] */
    goto L_0040A000; /* 0x007821AE: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007821B3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007821B3u);

L_007821B3:
    ecx = ebp + (-0x1DC); /* 0x007821B3: lea ecx, [ebp - 0x1dc] */
    goto L_0040A000; /* 0x007821B9: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007821BE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007821BEu);

L_007821BE:
    ecx = MEM32(ebp + (-0x1E8)); /* 0x007821BE: mov ecx, dword ptr [ebp - 0x1e8] */
    goto L_0040A000; /* 0x007821C4: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007821C9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007821C9u);

L_007821C9:
    ecx = MEM32(ebp + (-0x1EC)); /* 0x007821C9: mov ecx, dword ptr [ebp - 0x1ec] */
    goto L_0040A000; /* 0x007821CF: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007821D4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007821D4u);

L_007821D4:
    ecx = MEM32(ebp + (-0x1E0)); /* 0x007821D4: mov ecx, dword ptr [ebp - 0x1e0] */
    goto L_0040A000; /* 0x007821DA: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007821DF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007821DFu);

L_007821DF:
    ecx = MEM32(ebp + (-0x1E4)); /* 0x007821DF: mov ecx, dword ptr [ebp - 0x1e4] */
    goto L_0040A000; /* 0x007821E5: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}
