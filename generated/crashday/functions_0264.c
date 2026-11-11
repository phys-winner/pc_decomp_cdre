#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_007BEEA1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BEEA1u);

L_007BEEA1:
    ecx = ebp + (-0x58); /* 0x007BEEA1: lea ecx, [ebp - 0x58] */
    goto L_0040A000; /* 0x007BEEA4: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BEEA9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BEEA9u);

L_007BEEA9:
    ecx = ebp + (-0x28); /* 0x007BEEA9: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007BEEAC: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BEEB1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BEEB1u);

L_007BEEB1:
    ecx = ebp + (-0x28); /* 0x007BEEB1: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007BEEB4: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BEEB9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BEEB9u);

L_007BEEB9:
    ecx = ebp + (-0xA0); /* 0x007BEEB9: lea ecx, [ebp - 0xa0] */
    goto L_0040A000; /* 0x007BEEBF: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BEEC4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BEEC4u);

L_007BEEC4:
    eax = MEM32(ebp + (-0xA8)); /* 0x007BEEC4: mov eax, dword ptr [ebp - 0xa8] */
    PUSH32(esp, eax); /* 0x007BEECA: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007BEECB: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007BEED1: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007BEED2: ret  */
    RECOMP_REGS_OUT();
}

void sub_007BEED3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BEED3u);

L_007BEED3:
    ecx = MEM32(ebp + (-0xA8)); /* 0x007BEED3: mov ecx, dword ptr [ebp - 0xa8] */
    goto L_0040A000; /* 0x007BEED9: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BEEDE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BEEDEu);

L_007BEEDE:
    ecx = MEM32(ebp + (-0xA8)); /* 0x007BEEDE: mov ecx, dword ptr [ebp - 0xa8] */
    goto L_0040A000; /* 0x007BEEE4: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BEEE9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BEEE9u);

L_007BEEE9:
    eax = MEM32(ebp + (-0xA8)); /* 0x007BEEE9: mov eax, dword ptr [ebp - 0xa8] */
    PUSH32(esp, eax); /* 0x007BEEEF: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007BEEF0: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007BEEF6: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007BEEF7: ret  */
    RECOMP_REGS_OUT();
}

void sub_007BEEF8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BEEF8u);

L_007BEEF8:
    ecx = MEM32(ebp + (-0xA8)); /* 0x007BEEF8: mov ecx, dword ptr [ebp - 0xa8] */
    goto L_0040A000; /* 0x007BEEFE: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BEF03(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BEF03u);

L_007BEF03:
    ecx = ebp + (-0x70); /* 0x007BEF03: lea ecx, [ebp - 0x70] */
    goto L_0040A000; /* 0x007BEF06: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BEF0B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BEF0Bu);

L_007BEF0B:
    ecx = ebp + (-0x28); /* 0x007BEF0B: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007BEF0E: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BEF13(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BEF13u);

L_007BEF13:
    ecx = ebp + (-0x88); /* 0x007BEF13: lea ecx, [ebp - 0x88] */
    goto L_0040A000; /* 0x007BEF19: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BEF1E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BEF1Eu);

L_007BEF1E:
    ecx = ebp + (-0x1C); /* 0x007BEF1E: lea ecx, [ebp - 0x1c] */
    goto L_00419790; /* 0x007BEF21: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BEF26(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BEF26u);

L_007BEF26:
    ecx = MEM32(ebp + (-0xA8)); /* 0x007BEF26: mov ecx, dword ptr [ebp - 0xa8] */
    goto L_0040A000; /* 0x007BEF2C: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BEF31(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BEF31u);

L_007BEF31:
    ecx = MEM32(ebp + (-0xA8)); /* 0x007BEF31: mov ecx, dword ptr [ebp - 0xa8] */
    goto L_0040A000; /* 0x007BEF37: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BEF3C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BEF3Cu);

L_007BEF3C:
    ecx = ebp + (-0x28); /* 0x007BEF3C: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007BEF3F: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BEF44(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BEF44u);

L_007BEF44:
    ecx = ebp + (-0x70); /* 0x007BEF44: lea ecx, [ebp - 0x70] */
    goto L_0040A000; /* 0x007BEF47: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BEF4C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BEF4Cu);

L_007BEF4C:
    ecx = ebp + (-0x88); /* 0x007BEF4C: lea ecx, [ebp - 0x88] */
    goto L_0040A000; /* 0x007BEF52: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BEF57(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BEF57u);

L_007BEF57:
    eax = MEM32(ebp + (-0xB8)); /* 0x007BEF57: mov eax, dword ptr [ebp - 0xb8] */
    PUSH32(esp, eax); /* 0x007BEF5D: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007BEF5E: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007BEF64: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007BEF65: ret  */
    RECOMP_REGS_OUT();
}

void sub_007BEF66(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BEF66u);

L_007BEF66:
    ecx = MEM32(ebp + (-0xB8)); /* 0x007BEF66: mov ecx, dword ptr [ebp - 0xb8] */
    goto L_0040A000; /* 0x007BEF6C: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BEF71(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BEF71u);

L_007BEF71:
    eax = MEM32(ebp + (-0xB8)); /* 0x007BEF71: mov eax, dword ptr [ebp - 0xb8] */
    PUSH32(esp, eax); /* 0x007BEF77: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007BEF78: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007BEF7E: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007BEF7F: ret  */
    RECOMP_REGS_OUT();
}

void sub_007BEF80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BEF80u);

L_007BEF80:
    eax = MEM32(ebp + (-0xB8)); /* 0x007BEF80: mov eax, dword ptr [ebp - 0xb8] */
    PUSH32(esp, eax); /* 0x007BEF86: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007BEF87: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007BEF8D: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007BEF8E: ret  */
    RECOMP_REGS_OUT();
}

void sub_007BEF8F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BEF8Fu);

L_007BEF8F:
    eax = MEM32(ebp + (-0xB8)); /* 0x007BEF8F: mov eax, dword ptr [ebp - 0xb8] */
    PUSH32(esp, eax); /* 0x007BEF95: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007BEF96: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007BEF9C: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007BEF9D: ret  */
    RECOMP_REGS_OUT();
}

void sub_007BEF9E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BEF9Eu);

L_007BEF9E:
    eax = MEM32(ebp + (-0xB8)); /* 0x007BEF9E: mov eax, dword ptr [ebp - 0xb8] */
    PUSH32(esp, eax); /* 0x007BEFA4: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007BEFA5: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007BEFAB: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007BEFAC: ret  */
    RECOMP_REGS_OUT();
}

void sub_007BEFAD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BEFADu);

    goto L_007BEFAD;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BEFAD:
    edx = MEM32(esp + 0x8); /* 0x007BEFAD: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BEFB1: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xBC)); /* 0x007BEFB4: mov ecx, dword ptr [edx - 0xbc] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BEFBA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BEFBC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007BEFC1: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BEFC4: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BEFC6: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00848898u; /* 0x007BEFCB: mov eax, 0x848898 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BEFD0: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BEFE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BEFE0u);

L_007BEFE0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007BEFE0: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040A000; /* 0x007BEFE3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BEFE8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BEFE8u);

L_007BEFE8:
    ecx = MEM32(ebp + (-0x14)); /* 0x007BEFE8: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040A000; /* 0x007BEFEB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BEFF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BEFF0u);

L_007BEFF0:
    ecx = MEM32(ebp + (-0x14)); /* 0x007BEFF0: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040A000; /* 0x007BEFF3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BEFF8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BEFF8u);

L_007BEFF8:
    ecx = MEM32(ebp + (-0x10)); /* 0x007BEFF8: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040A000; /* 0x007BEFFB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF000(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF000u);

L_007BF000:
    ecx = MEM32(ebp + (-0x14)); /* 0x007BF000: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040A000; /* 0x007BF003: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF008(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF008u);

L_007BF008:
    ecx = MEM32(ebp + (-0x10)); /* 0x007BF008: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040A000; /* 0x007BF00B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF010(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF010u);

L_007BF010:
    ecx = MEM32(ebp + (-0x14)); /* 0x007BF010: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040A000; /* 0x007BF013: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF018(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF018u);

L_007BF018:
    ecx = MEM32(ebp + (-0x10)); /* 0x007BF018: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040A000; /* 0x007BF01B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF020(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF020u);

L_007BF020:
    ecx = MEM32(ebp + (-0x14)); /* 0x007BF020: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040A000; /* 0x007BF023: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF028(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF028u);

L_007BF028:
    ecx = MEM32(ebp + (-0x10)); /* 0x007BF028: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040A000; /* 0x007BF02B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF030(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF030u);

L_007BF030:
    ecx = MEM32(ebp + (-0x14)); /* 0x007BF030: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040A000; /* 0x007BF033: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF038(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF038u);

L_007BF038:
    ecx = MEM32(ebp + (-0x10)); /* 0x007BF038: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040A000; /* 0x007BF03B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF040(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF040u);

L_007BF040:
    ecx = MEM32(ebp + (-0x14)); /* 0x007BF040: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040A000; /* 0x007BF043: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF048(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF048u);

L_007BF048:
    ecx = MEM32(ebp + (-0x10)); /* 0x007BF048: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040A000; /* 0x007BF04B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF050(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF050u);

L_007BF050:
    ecx = MEM32(ebp + (-0x14)); /* 0x007BF050: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040A000; /* 0x007BF053: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF058(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF058u);

L_007BF058:
    ecx = MEM32(ebp + (-0x10)); /* 0x007BF058: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040A000; /* 0x007BF05B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF060(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF060u);

L_007BF060:
    eax = MEM32(ebp + (-0x14)); /* 0x007BF060: mov eax, dword ptr [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x007BF063: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007BF064: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007BF06A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007BF06B: ret  */
    RECOMP_REGS_OUT();
}

void sub_007BF06C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF06Cu);

L_007BF06C:
    ecx = MEM32(ebp + (-0x10)); /* 0x007BF06C: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040A000; /* 0x007BF06F: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF074(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF074u);

    goto L_007BF074;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BF074:
    edx = MEM32(esp + 0x8); /* 0x007BF074: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BF078: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x1C)); /* 0x007BF07B: mov ecx, dword ptr [edx - 0x1c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BF07E: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BF080: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00848A10u; /* 0x007BF085: mov eax, 0x848a10 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BF08A: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BF090(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF090u);

L_007BF090:
    ecx = ebp + (-0x28); /* 0x007BF090: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007BF093: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF098(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF098u);

L_007BF098:
    ecx = MEM32(ebp + (-0x30)); /* 0x007BF098: mov ecx, dword ptr [ebp - 0x30] */
    goto L_0040A000; /* 0x007BF09B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF0A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF0A0u);

L_007BF0A0:
    ecx = MEM32(ebp + (-0x2C)); /* 0x007BF0A0: mov ecx, dword ptr [ebp - 0x2c] */
    goto L_0040A000; /* 0x007BF0A3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF0A8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF0A8u);

    goto L_007BF0A8;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BF0A8:
    edx = MEM32(esp + 0x8); /* 0x007BF0A8: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BF0AC: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x34)); /* 0x007BF0AF: mov ecx, dword ptr [edx - 0x34] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BF0B2: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BF0B4: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007BF0B9: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BF0BC: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BF0BE: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00848AC8u; /* 0x007BF0C3: mov eax, 0x848ac8 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BF0C8: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BF0D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF0D0u);

L_007BF0D0:
    ecx = 0x00865F70u; /* 0x007BF0D0: mov ecx, 0x865f70 */
    goto L_0040A000; /* 0x007BF0D5: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF0DA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF0DAu);

L_007BF0DA:
    ecx = 0x00865F88u; /* 0x007BF0DA: mov ecx, 0x865f88 */
    goto L_0040A000; /* 0x007BF0DF: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF0E4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF0E4u);

    goto L_007BF0E4;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BF0E4:
    edx = MEM32(esp + 0x8); /* 0x007BF0E4: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BF0E8: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x4)); /* 0x007BF0EB: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BF0EE: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BF0F0: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00848B04u; /* 0x007BF0F5: mov eax, 0x848b04 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BF0FA: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BF100(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF100u);

L_007BF100:
    ecx = MEM32(ebp + (-0x18)); /* 0x007BF100: mov ecx, dword ptr [ebp - 0x18] */
    goto L_0040A000; /* 0x007BF103: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF108(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF108u);

L_007BF108:
    ecx = MEM32(ebp + (-0x10)); /* 0x007BF108: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040A000; /* 0x007BF10B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF110(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF110u);

    goto L_007BF110;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BF110:
    edx = MEM32(esp + 0x8); /* 0x007BF110: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BF114: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x1C)); /* 0x007BF117: mov ecx, dword ptr [edx - 0x1c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BF11A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BF11C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00848B38u; /* 0x007BF121: mov eax, 0x848b38 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BF126: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BF130(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF130u);

L_007BF130:
    ecx = MEM32(ebp + (-0x14)); /* 0x007BF130: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040A000; /* 0x007BF133: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF138(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF138u);

L_007BF138:
    ecx = MEM32(ebp + (-0x1C)); /* 0x007BF138: mov ecx, dword ptr [ebp - 0x1c] */
    goto L_0040A000; /* 0x007BF13B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF140(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF140u);

L_007BF140:
    ecx = MEM32(ebp + (-0x1C)); /* 0x007BF140: mov ecx, dword ptr [ebp - 0x1c] */
    goto L_0040A000; /* 0x007BF143: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF148(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF148u);

L_007BF148:
    ecx = MEM32(ebp + (-0x18)); /* 0x007BF148: mov ecx, dword ptr [ebp - 0x18] */
    goto L_0040A000; /* 0x007BF14B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF150(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF150u);

L_007BF150:
    ecx = MEM32(ebp + (-0x1C)); /* 0x007BF150: mov ecx, dword ptr [ebp - 0x1c] */
    goto L_0040A000; /* 0x007BF153: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF158(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF158u);

L_007BF158:
    ecx = MEM32(ebp + (-0x18)); /* 0x007BF158: mov ecx, dword ptr [ebp - 0x18] */
    goto L_0040A000; /* 0x007BF15B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF160(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF160u);

    goto L_007BF160;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BF160:
    edx = MEM32(esp + 0x8); /* 0x007BF160: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BF164: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x24)); /* 0x007BF167: mov ecx, dword ptr [edx - 0x24] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BF16A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BF16C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00848B6Cu; /* 0x007BF171: mov eax, 0x848b6c */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BF176: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BF180(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF180u);

L_007BF180:
    ecx = MEM32(ebp + (-0x274)); /* 0x007BF180: mov ecx, dword ptr [ebp - 0x274] */
    goto L_0040A000; /* 0x007BF186: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF18B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF18Bu);

L_007BF18B:
    ecx = MEM32(ebp + (-0x26C)); /* 0x007BF18B: mov ecx, dword ptr [ebp - 0x26c] */
    goto L_0040A000; /* 0x007BF191: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF196(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF196u);

L_007BF196:
    ecx = MEM32(ebp + (-0x274)); /* 0x007BF196: mov ecx, dword ptr [ebp - 0x274] */
    goto L_0040A000; /* 0x007BF19C: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF1A1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF1A1u);

L_007BF1A1:
    ecx = MEM32(ebp + (-0x26C)); /* 0x007BF1A1: mov ecx, dword ptr [ebp - 0x26c] */
    goto L_0040A000; /* 0x007BF1A7: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF1AC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF1ACu);

L_007BF1AC:
    ecx = MEM32(ebp + (-0x274)); /* 0x007BF1AC: mov ecx, dword ptr [ebp - 0x274] */
    goto L_0040A000; /* 0x007BF1B2: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF1B7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF1B7u);

L_007BF1B7:
    ecx = MEM32(ebp + (-0x26C)); /* 0x007BF1B7: mov ecx, dword ptr [ebp - 0x26c] */
    goto L_0040A000; /* 0x007BF1BD: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF1C2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF1C2u);

L_007BF1C2:
    ecx = MEM32(ebp + (-0x274)); /* 0x007BF1C2: mov ecx, dword ptr [ebp - 0x274] */
    goto L_0040A000; /* 0x007BF1C8: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF1CD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF1CDu);

L_007BF1CD:
    ecx = MEM32(ebp + (-0x26C)); /* 0x007BF1CD: mov ecx, dword ptr [ebp - 0x26c] */
    goto L_0040A000; /* 0x007BF1D3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF1D8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF1D8u);

L_007BF1D8:
    ecx = ebp + (-0xC0); /* 0x007BF1D8: lea ecx, [ebp - 0xc0] */
    goto L_0040A000; /* 0x007BF1DE: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF1E3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF1E3u);

L_007BF1E3:
    ecx = ebp + (-0xA8); /* 0x007BF1E3: lea ecx, [ebp - 0xa8] */
    goto L_0040A000; /* 0x007BF1E9: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF1EE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF1EEu);

L_007BF1EE:
    ecx = ebp + (-0xD8); /* 0x007BF1EE: lea ecx, [ebp - 0xd8] */
    goto L_0040A000; /* 0x007BF1F4: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF1F9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF1F9u);

L_007BF1F9:
    eax = MEM32(ebp + (-0x260)); /* 0x007BF1F9: mov eax, dword ptr [ebp - 0x260] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x007BF1FF: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007BF21A; /* 0x007BF202: je 0x7bf21a */
L_007BF208:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x260))); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(ebp + (-0x260)) = MEM32(ebp + (-0x260)) & 0xFFFFFFFEu; /* 0x007BF208: and dword ptr [ebp - 0x260], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x180); /* 0x007BF20F: lea ecx, [ebp - 0x180] */
    goto L_0040A000; /* 0x007BF215: jmp 0x40a000 */
L_007BF21A:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007BF21A: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF21B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF21Bu);

L_007BF21B:
    eax = MEM32(ebp + (-0x260)); /* 0x007BF21B: mov eax, dword ptr [ebp - 0x260] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    eax = eax & 2; /* 0x007BF221: and eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007BF23C; /* 0x007BF224: je 0x7bf23c */
L_007BF22A:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x260))); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ebp + (-0x260)) = MEM32(ebp + (-0x260)) & 0xFFFFFFFDu; /* 0x007BF22A: and dword ptr [ebp - 0x260], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x258); /* 0x007BF231: lea ecx, [ebp - 0x258] */
    goto L_0040A000; /* 0x007BF237: jmp 0x40a000 */
L_007BF23C:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007BF23C: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF23D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF23Du);

L_007BF23D:
    ecx = MEM32(ebp + (-0x274)); /* 0x007BF23D: mov ecx, dword ptr [ebp - 0x274] */
    goto L_0040A000; /* 0x007BF243: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF248(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF248u);

L_007BF248:
    ecx = MEM32(ebp + (-0x26C)); /* 0x007BF248: mov ecx, dword ptr [ebp - 0x26c] */
    goto L_0040A000; /* 0x007BF24E: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF253(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF253u);

L_007BF253:
    eax = MEM32(ebp + (-0x260)); /* 0x007BF253: mov eax, dword ptr [ebp - 0x260] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    eax = eax & 4; /* 0x007BF259: and eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007BF274; /* 0x007BF25C: je 0x7bf274 */
L_007BF262:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x260))); _flag_b = (uint32_t)(0xFFFFFFFBu);
    MEM32(ebp + (-0x260)) = MEM32(ebp + (-0x260)) & 0xFFFFFFFBu; /* 0x007BF262: and dword ptr [ebp - 0x260], 0xfffffffb */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x1B0); /* 0x007BF269: lea ecx, [ebp - 0x1b0] */
    goto L_0040A000; /* 0x007BF26F: jmp 0x40a000 */
L_007BF274:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007BF274: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF275(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF275u);

L_007BF275:
    eax = MEM32(ebp + (-0x260)); /* 0x007BF275: mov eax, dword ptr [ebp - 0x260] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    eax = eax & 8; /* 0x007BF27B: and eax, 8 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007BF296; /* 0x007BF27E: je 0x7bf296 */
L_007BF284:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x260))); _flag_b = (uint32_t)(0xFFFFFFF7u);
    MEM32(ebp + (-0x260)) = MEM32(ebp + (-0x260)) & 0xFFFFFFF7u; /* 0x007BF284: and dword ptr [ebp - 0x260], 0xfffffff7 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0xF0); /* 0x007BF28B: lea ecx, [ebp - 0xf0] */
    goto L_0040A000; /* 0x007BF291: jmp 0x40a000 */
L_007BF296:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007BF296: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF297(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF297u);

L_007BF297:
    eax = MEM32(ebp + (-0x260)); /* 0x007BF297: mov eax, dword ptr [ebp - 0x260] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    eax = eax & 0x10u; /* 0x007BF29D: and eax, 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007BF2B8; /* 0x007BF2A0: je 0x7bf2b8 */
L_007BF2A6:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x260))); _flag_b = (uint32_t)(0xFFFFFFEFu);
    MEM32(ebp + (-0x260)) = MEM32(ebp + (-0x260)) & 0xFFFFFFEFu; /* 0x007BF2A6: and dword ptr [ebp - 0x260], 0xffffffef */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x210); /* 0x007BF2AD: lea ecx, [ebp - 0x210] */
    goto L_0040A000; /* 0x007BF2B3: jmp 0x40a000 */
L_007BF2B8:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007BF2B8: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF2B9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF2B9u);

L_007BF2B9:
    eax = MEM32(ebp + (-0x260)); /* 0x007BF2B9: mov eax, dword ptr [ebp - 0x260] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    eax = eax & 0x20u; /* 0x007BF2BF: and eax, 0x20 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007BF2DA; /* 0x007BF2C2: je 0x7bf2da */
L_007BF2C8:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x260))); _flag_b = (uint32_t)(0xFFFFFFDFu);
    MEM32(ebp + (-0x260)) = MEM32(ebp + (-0x260)) & 0xFFFFFFDFu; /* 0x007BF2C8: and dword ptr [ebp - 0x260], 0xffffffdf */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0xC0); /* 0x007BF2CF: lea ecx, [ebp - 0xc0] */
    goto L_0040A000; /* 0x007BF2D5: jmp 0x40a000 */
L_007BF2DA:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007BF2DA: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF2DB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF2DBu);

L_007BF2DB:
    ecx = ebp + (-0x150); /* 0x007BF2DB: lea ecx, [ebp - 0x150] */
    goto L_0040A000; /* 0x007BF2E1: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF2E6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF2E6u);

L_007BF2E6:
    ecx = ebp + (-0x138); /* 0x007BF2E6: lea ecx, [ebp - 0x138] */
    goto L_0040A000; /* 0x007BF2EC: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF2F1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF2F1u);

L_007BF2F1:
    ecx = ebp + (-0x108); /* 0x007BF2F1: lea ecx, [ebp - 0x108] */
    goto L_0040A000; /* 0x007BF2F7: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF2FC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF2FCu);

L_007BF2FC:
    ecx = ebp + (-0x120); /* 0x007BF2FC: lea ecx, [ebp - 0x120] */
    goto L_0040A000; /* 0x007BF302: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF307(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF307u);

L_007BF307:
    goto L_00409980; /* 0x007BF307: jmp 0x409980 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00409980: RECOMP_ITAIL(0x00409980u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF30C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF30Cu);

L_007BF30C:
    eax = MEM32(ebp + (-0x260)); /* 0x007BF30C: mov eax, dword ptr [ebp - 0x260] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40u);
    eax = eax & 0x40u; /* 0x007BF312: and eax, 0x40 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007BF32D; /* 0x007BF315: je 0x7bf32d */
L_007BF31B:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x260))); _flag_b = (uint32_t)(0xFFFFFFBFu);
    MEM32(ebp + (-0x260)) = MEM32(ebp + (-0x260)) & 0xFFFFFFBFu; /* 0x007BF31B: and dword ptr [ebp - 0x260], 0xffffffbf */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x1C8); /* 0x007BF322: lea ecx, [ebp - 0x1c8] */
    goto L_0040A000; /* 0x007BF328: jmp 0x40a000 */
L_007BF32D:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007BF32D: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF32E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF32Eu);

L_007BF32E:
    eax = MEM32(ebp + (-0x260)); /* 0x007BF32E: mov eax, dword ptr [ebp - 0x260] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80u);
    eax = eax & 0x80u; /* 0x007BF334: and eax, 0x80 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007BF354; /* 0x007BF339: je 0x7bf354 */
L_007BF33F:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x260))); _flag_b = (uint32_t)(0xFFFFFF7Fu);
    MEM32(ebp + (-0x260)) = MEM32(ebp + (-0x260)) & 0xFFFFFF7Fu; /* 0x007BF33F: and dword ptr [ebp - 0x260], 0xffffff7f */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x198); /* 0x007BF349: lea ecx, [ebp - 0x198] */
    goto L_0040A000; /* 0x007BF34F: jmp 0x40a000 */
L_007BF354:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007BF354: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF355(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF355u);

L_007BF355:
    eax = MEM32(ebp + (-0x260)); /* 0x007BF355: mov eax, dword ptr [ebp - 0x260] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100u);
    eax = eax & 0x100u; /* 0x007BF35B: and eax, 0x100 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007BF37B; /* 0x007BF360: je 0x7bf37b */
L_007BF366:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x260))); _flag_b = (uint32_t)(0xFFFFFEFFu);
    MEM32(ebp + (-0x260)) = MEM32(ebp + (-0x260)) & 0xFFFFFEFFu; /* 0x007BF366: and dword ptr [ebp - 0x260], 0xfffffeff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x168); /* 0x007BF370: lea ecx, [ebp - 0x168] */
    goto L_0040A000; /* 0x007BF376: jmp 0x40a000 */
L_007BF37B:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007BF37B: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF37C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF37Cu);

L_007BF37C:
    eax = MEM32(ebp + (-0x260)); /* 0x007BF37C: mov eax, dword ptr [ebp - 0x260] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x200u);
    eax = eax & 0x200u; /* 0x007BF382: and eax, 0x200 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007BF3A2; /* 0x007BF387: je 0x7bf3a2 */
L_007BF38D:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x260))); _flag_b = (uint32_t)(0xFFFFFDFFu);
    MEM32(ebp + (-0x260)) = MEM32(ebp + (-0x260)) & 0xFFFFFDFFu; /* 0x007BF38D: and dword ptr [ebp - 0x260], 0xfffffdff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0xA8); /* 0x007BF397: lea ecx, [ebp - 0xa8] */
    goto L_0040A000; /* 0x007BF39D: jmp 0x40a000 */
L_007BF3A2:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007BF3A2: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF3A3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF3A3u);

L_007BF3A3:
    ecx = ebp + (-0x1E0); /* 0x007BF3A3: lea ecx, [ebp - 0x1e0] */
    goto L_0040A000; /* 0x007BF3A9: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF3AE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF3AEu);

L_007BF3AE:
    ecx = ebp + (-0x228); /* 0x007BF3AE: lea ecx, [ebp - 0x228] */
    goto L_0040A000; /* 0x007BF3B4: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF3B9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF3B9u);

L_007BF3B9:
    ecx = ebp + (-0x240); /* 0x007BF3B9: lea ecx, [ebp - 0x240] */
    goto L_0040A000; /* 0x007BF3BF: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF3C4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF3C4u);

L_007BF3C4:
    ecx = ebp + (-0x1F8); /* 0x007BF3C4: lea ecx, [ebp - 0x1f8] */
    goto L_0040A000; /* 0x007BF3CA: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF3CF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF3CFu);

L_007BF3CF:
    goto L_00409980; /* 0x007BF3CF: jmp 0x409980 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00409980: RECOMP_ITAIL(0x00409980u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF3D4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF3D4u);

L_007BF3D4:
    ecx = MEM32(ebp + (-0x274)); /* 0x007BF3D4: mov ecx, dword ptr [ebp - 0x274] */
    goto L_0040A000; /* 0x007BF3DA: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF3DF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF3DFu);

L_007BF3DF:
    ecx = MEM32(ebp + (-0x26C)); /* 0x007BF3DF: mov ecx, dword ptr [ebp - 0x26c] */
    goto L_0040A000; /* 0x007BF3E5: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF3EA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF3EAu);

    goto L_007BF3EA;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BF3EA:
    edx = MEM32(esp + 0x8); /* 0x007BF3EA: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BF3EE: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x284)); /* 0x007BF3F1: mov ecx, dword ptr [edx - 0x284] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BF3F7: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BF3F9: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007BF3FE: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BF401: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BF403: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00848BC0u; /* 0x007BF408: mov eax, 0x848bc0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BF40D: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BF420(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF420u);

L_007BF420:
    ecx = MEM32(ebp + (-0x2D0)); /* 0x007BF420: mov ecx, dword ptr [ebp - 0x2d0] */
    goto L_0040A000; /* 0x007BF426: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF42B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF42Bu);

L_007BF42B:
    ecx = MEM32(ebp + (-0x2CC)); /* 0x007BF42B: mov ecx, dword ptr [ebp - 0x2cc] */
    goto L_0040A000; /* 0x007BF431: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF436(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF436u);

    goto L_007BF436;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BF436:
    edx = MEM32(esp + 0x8); /* 0x007BF436: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BF43A: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x2DC)); /* 0x007BF43D: mov ecx, dword ptr [edx - 0x2dc] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BF443: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BF445: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007BF44A: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BF44D: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BF44F: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00848D10u; /* 0x007BF454: mov eax, 0x848d10 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BF459: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}
