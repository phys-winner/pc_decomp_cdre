#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_0078CDD8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078CDD8u);

L_0078CDD8:
    ecx = ebp + 0x3C; /* 0x0078CDD8: lea ecx, [ebp + 0x3c] */
    goto L_0040A000; /* 0x0078CDDB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078CDE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078CDE0u);

L_0078CDE0:
    ecx = ebp + 0x24; /* 0x0078CDE0: lea ecx, [ebp + 0x24] */
    goto L_0040A000; /* 0x0078CDE3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078CDE8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078CDE8u);

L_0078CDE8:
    ecx = ebp + 0xC; /* 0x0078CDE8: lea ecx, [ebp + 0xc] */
    goto L_0040A000; /* 0x0078CDEB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078CDF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078CDF0u);

L_0078CDF0:
    eax = MEM32(ebp + (-0x14)); /* 0x0078CDF0: mov eax, dword ptr [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x0078CDF3: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0078CDF4: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0078CDFA: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0078CDFB: ret  */
    RECOMP_REGS_OUT();
}

void sub_0078CDFC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078CDFCu);

L_0078CDFC:
    ecx = MEM32(ebp + (-0x1C)); /* 0x0078CDFC: mov ecx, dword ptr [ebp - 0x1c] */
    goto L_0040A000; /* 0x0078CDFF: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078CE04(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078CE04u);

L_0078CE04:
    ecx = MEM32(ebp + (-0x10)); /* 0x0078CE04: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040A000; /* 0x0078CE07: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078CE0C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078CE0Cu);

L_0078CE0C:
    ecx = MEM32(ebp + (-0x18)); /* 0x0078CE0C: mov ecx, dword ptr [ebp - 0x18] */
    goto L_0040A000; /* 0x0078CE0F: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078CE14(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078CE14u);

L_0078CE14:
    ecx = MEM32(ebp + (-0x20)); /* 0x0078CE14: mov ecx, dword ptr [ebp - 0x20] */
    goto L_0040A000; /* 0x0078CE17: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078CE1C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078CE1Cu);

    goto L_0078CE1C;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0078CE1C:
    edx = MEM32(esp + 0x8); /* 0x0078CE1C: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0078CE20: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x20)); /* 0x0078CE23: mov ecx, dword ptr [edx - 0x20] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078CE26: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078CE28: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00817D70u; /* 0x0078CE2D: mov eax, 0x817d70 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0078CE32: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0078CE40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078CE40u);

L_0078CE40:
    ecx = ebp + 0x6C; /* 0x0078CE40: lea ecx, [ebp + 0x6c] */
    goto L_0040A000; /* 0x0078CE43: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078CE48(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078CE48u);

L_0078CE48:
    ecx = ebp + 0x54; /* 0x0078CE48: lea ecx, [ebp + 0x54] */
    goto L_0040A000; /* 0x0078CE4B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078CE50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078CE50u);

L_0078CE50:
    ecx = ebp + 0x3C; /* 0x0078CE50: lea ecx, [ebp + 0x3c] */
    goto L_0040A000; /* 0x0078CE53: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078CE58(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078CE58u);

L_0078CE58:
    ecx = ebp + 0x24; /* 0x0078CE58: lea ecx, [ebp + 0x24] */
    goto L_0040A000; /* 0x0078CE5B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078CE60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078CE60u);

L_0078CE60:
    ecx = ebp + 0xC; /* 0x0078CE60: lea ecx, [ebp + 0xc] */
    goto L_0040A000; /* 0x0078CE63: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078CE68(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078CE68u);

L_0078CE68:
    eax = MEM32(ebp + (-0x20)); /* 0x0078CE68: mov eax, dword ptr [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x0078CE6B: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0078CE6C: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0078CE72: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0078CE73: ret  */
    RECOMP_REGS_OUT();
}

void sub_0078CE74(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078CE74u);

L_0078CE74:
    ecx = MEM32(ebp + (-0x18)); /* 0x0078CE74: mov ecx, dword ptr [ebp - 0x18] */
    goto L_0040A000; /* 0x0078CE77: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078CE7C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078CE7Cu);

L_0078CE7C:
    ecx = MEM32(ebp + (-0x10)); /* 0x0078CE7C: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040A000; /* 0x0078CE7F: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078CE84(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078CE84u);

L_0078CE84:
    ecx = MEM32(ebp + (-0x14)); /* 0x0078CE84: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040A000; /* 0x0078CE87: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078CE8C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078CE8Cu);

L_0078CE8C:
    ecx = MEM32(ebp + (-0x1C)); /* 0x0078CE8C: mov ecx, dword ptr [ebp - 0x1c] */
    goto L_0040A000; /* 0x0078CE8F: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078CE94(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078CE94u);

L_0078CE94:
    ecx = MEM32(ebp + (-0x24)); /* 0x0078CE94: mov ecx, dword ptr [ebp - 0x24] */
    goto L_0040A000; /* 0x0078CE97: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078CE9C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078CE9Cu);

    goto L_0078CE9C;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0078CE9C:
    edx = MEM32(esp + 0x8); /* 0x0078CE9C: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0078CEA0: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x28)); /* 0x0078CEA3: mov ecx, dword ptr [edx - 0x28] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078CEA6: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078CEA8: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00817DE0u; /* 0x0078CEAD: mov eax, 0x817de0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0078CEB2: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0078CEC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078CEC0u);

L_0078CEC0:
    ecx = ebp + 0x44; /* 0x0078CEC0: lea ecx, [ebp + 0x44] */
    goto L_0040A000; /* 0x0078CEC3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078CEC8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078CEC8u);

L_0078CEC8:
    ecx = ebp + 0x2C; /* 0x0078CEC8: lea ecx, [ebp + 0x2c] */
    goto L_0040A000; /* 0x0078CECB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078CED0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078CED0u);

L_0078CED0:
    ecx = ebp + 0x14; /* 0x0078CED0: lea ecx, [ebp + 0x14] */
    goto L_0040A000; /* 0x0078CED3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078CED8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078CED8u);

L_0078CED8:
    eax = MEM32(ebp + (-0x18)); /* 0x0078CED8: mov eax, dword ptr [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x0078CEDB: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0078CEDC: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0078CEE2: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0078CEE3: ret  */
    RECOMP_REGS_OUT();
}

void sub_0078CEE4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078CEE4u);

L_0078CEE4:
    ecx = MEM32(ebp + (-0x10)); /* 0x0078CEE4: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040A000; /* 0x0078CEE7: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078CEEC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078CEECu);

L_0078CEEC:
    ecx = MEM32(ebp + (-0x14)); /* 0x0078CEEC: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040A000; /* 0x0078CEEF: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078CEF4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078CEF4u);

L_0078CEF4:
    ecx = MEM32(ebp + (-0x1C)); /* 0x0078CEF4: mov ecx, dword ptr [ebp - 0x1c] */
    goto L_0040A000; /* 0x0078CEF7: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078CEFC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078CEFCu);

    goto L_0078CEFC;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0078CEFC:
    edx = MEM32(esp + 0x8); /* 0x0078CEFC: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0078CF00: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x20)); /* 0x0078CF03: mov ecx, dword ptr [edx - 0x20] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078CF06: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078CF08: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00817E60u; /* 0x0078CF0D: mov eax, 0x817e60 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0078CF12: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0078CF20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078CF20u);

L_0078CF20:
    ecx = ebp + (-0x28); /* 0x0078CF20: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x0078CF23: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078CF28(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078CF28u);

L_0078CF28:
    ecx = ebp + (-0x40); /* 0x0078CF28: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x0078CF2B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078CF30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078CF30u);

L_0078CF30:
    ecx = MEM32(ebp + (-0x94)); /* 0x0078CF30: mov ecx, dword ptr [ebp - 0x94] */
    goto L_0040A000; /* 0x0078CF36: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078CF3B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078CF3Bu);

L_0078CF3B:
    ecx = MEM32(ebp + (-0x7C)); /* 0x0078CF3B: mov ecx, dword ptr [ebp - 0x7c] */
    goto L_0040A000; /* 0x0078CF3E: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078CF43(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078CF43u);

L_0078CF43:
    ecx = MEM32(ebp + (-0x94)); /* 0x0078CF43: mov ecx, dword ptr [ebp - 0x94] */
    goto L_0040A000; /* 0x0078CF49: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078CF4E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078CF4Eu);

L_0078CF4E:
    ecx = MEM32(ebp + (-0x7C)); /* 0x0078CF4E: mov ecx, dword ptr [ebp - 0x7c] */
    goto L_0040A000; /* 0x0078CF51: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078CF56(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078CF56u);

L_0078CF56:
    ecx = MEM32(ebp + (-0x8C)); /* 0x0078CF56: mov ecx, dword ptr [ebp - 0x8c] */
    goto L_0040A000; /* 0x0078CF5C: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078CF61(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078CF61u);

L_0078CF61:
    ecx = MEM32(ebp + (-0x90)); /* 0x0078CF61: mov ecx, dword ptr [ebp - 0x90] */
    goto L_0040A000; /* 0x0078CF67: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078CF6C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078CF6Cu);

L_0078CF6C:
    ecx = MEM32(ebp + (-0x90)); /* 0x0078CF6C: mov ecx, dword ptr [ebp - 0x90] */
    goto L_0040A000; /* 0x0078CF72: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078CF77(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078CF77u);

L_0078CF77:
    ecx = MEM32(ebp + (-0x8C)); /* 0x0078CF77: mov ecx, dword ptr [ebp - 0x8c] */
    goto L_0040A000; /* 0x0078CF7D: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078CF82(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078CF82u);

L_0078CF82:
    ecx = MEM32(ebp + (-0x90)); /* 0x0078CF82: mov ecx, dword ptr [ebp - 0x90] */
    goto L_0040A000; /* 0x0078CF88: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078CF8D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078CF8Du);

L_0078CF8D:
    ecx = MEM32(ebp + (-0x8C)); /* 0x0078CF8D: mov ecx, dword ptr [ebp - 0x8c] */
    goto L_0040A000; /* 0x0078CF93: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078CF98(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078CF98u);

L_0078CF98:
    ecx = MEM32(ebp + (-0x90)); /* 0x0078CF98: mov ecx, dword ptr [ebp - 0x90] */
    goto L_0040A000; /* 0x0078CF9E: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078CFA3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078CFA3u);

L_0078CFA3:
    ecx = MEM32(ebp + (-0x8C)); /* 0x0078CFA3: mov ecx, dword ptr [ebp - 0x8c] */
    goto L_0040A000; /* 0x0078CFA9: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078CFAE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078CFAEu);

    goto L_0078CFAE;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0078CFAE:
    edx = MEM32(esp + 0x8); /* 0x0078CFAE: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0078CFB2: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xD4)); /* 0x0078CFB5: mov ecx, dword ptr [edx - 0xd4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078CFBB: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078CFBD: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x0078CFC2: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078CFC5: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078CFC7: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00817EC0u; /* 0x0078CFCC: mov eax, 0x817ec0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0078CFD1: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0078CFE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078CFE0u);

L_0078CFE0:
    goto L_004966C0; /* 0x0078CFE0: jmp 0x4966c0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_004966C0: RECOMP_ITAIL(0x004966C0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078CFE5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078CFE5u);

L_0078CFE5:
    goto L_00496670; /* 0x0078CFE5: jmp 0x496670 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00496670: RECOMP_ITAIL(0x00496670u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078CFEA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078CFEAu);

L_0078CFEA:
    goto L_00496620; /* 0x0078CFEA: jmp 0x496620 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00496620: RECOMP_ITAIL(0x00496620u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078CFEF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078CFEFu);

L_0078CFEF:
    goto L_00496410; /* 0x0078CFEF: jmp 0x496410 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00496410: RECOMP_ITAIL(0x00496410u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078CFF4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078CFF4u);

    goto L_0078CFF4;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0078CFF4:
    edx = MEM32(esp + 0x8); /* 0x0078CFF4: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0078CFF8: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x0078CFFB: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078CFFE: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078D000: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00817F88u; /* 0x0078D005: mov eax, 0x817f88 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0078D00A: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0078D010(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078D010u);

L_0078D010:
    goto L_00496620; /* 0x0078D010: jmp 0x496620 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00496620: RECOMP_ITAIL(0x00496620u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078D015(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078D015u);

L_0078D015:
    goto L_00496670; /* 0x0078D015: jmp 0x496670 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00496670: RECOMP_ITAIL(0x00496670u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078D01A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078D01Au);

L_0078D01A:
    goto L_004966C0; /* 0x0078D01A: jmp 0x4966c0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_004966C0: RECOMP_ITAIL(0x004966C0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078D01F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078D01Fu);

    goto L_0078D01F;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0078D01F:
    edx = MEM32(esp + 0x8); /* 0x0078D01F: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0078D023: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x8)); /* 0x0078D026: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078D029: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078D02B: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00817FCCu; /* 0x0078D030: mov eax, 0x817fcc */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0078D035: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0078D040(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078D040u);

    goto L_0078D040;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0078D040:
    edx = MEM32(esp + 0x8); /* 0x0078D040: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0078D044: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x0078D047: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078D04A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078D04C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00818008u; /* 0x0078D051: mov eax, 0x818008 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0078D056: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0078D060(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078D060u);

L_0078D060:
    goto L_00496670; /* 0x0078D060: jmp 0x496670 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00496670: RECOMP_ITAIL(0x00496670u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078D065(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078D065u);

L_0078D065:
    goto L_004966C0; /* 0x0078D065: jmp 0x4966c0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_004966C0: RECOMP_ITAIL(0x004966C0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078D06A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078D06Au);

    goto L_0078D06A;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0078D06A:
    edx = MEM32(esp + 0x8); /* 0x0078D06A: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0078D06E: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x4)); /* 0x0078D071: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078D074: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078D076: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00818060u; /* 0x0078D07B: mov eax, 0x818060 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0078D080: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0078D090(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078D090u);

L_0078D090:
    goto L_004966C0; /* 0x0078D090: jmp 0x4966c0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_004966C0: RECOMP_ITAIL(0x004966C0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078D095(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078D095u);

    goto L_0078D095;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0078D095:
    edx = MEM32(esp + 0x8); /* 0x0078D095: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0078D099: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x4)); /* 0x0078D09C: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078D09F: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078D0A1: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00818094u; /* 0x0078D0A6: mov eax, 0x818094 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0078D0AB: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0078D0B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078D0B0u);

L_0078D0B0:
    ecx = MEM32(ebp + (-0x10)); /* 0x0078D0B0: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x0078D0B3: add ecx, 4 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x0078D0B6: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078D0BB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078D0BBu);

    goto L_0078D0BB;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0078D0BB:
    edx = MEM32(esp + 0x8); /* 0x0078D0BB: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0078D0BF: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x0078D0C2: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078D0C5: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078D0C7: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008180C0u; /* 0x0078D0CC: mov eax, 0x8180c0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0078D0D1: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0078D0E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078D0E0u);

L_0078D0E0:
    ecx = MEM32(ebp + 0x8); /* 0x0078D0E0: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x0078D0E3: add ecx, 4 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x0078D0E6: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078D0EB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078D0EBu);

    goto L_0078D0EB;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0078D0EB:
    edx = MEM32(esp + 0x8); /* 0x0078D0EB: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0078D0EF: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x0078D0F2: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078D0F5: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078D0F7: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008180ECu; /* 0x0078D0FC: mov eax, 0x8180ec */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0078D101: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0078D110(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078D110u);

    goto L_0078D110;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0078D110:
    edx = MEM32(esp + 0x8); /* 0x0078D110: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0078D114: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x1C)); /* 0x0078D117: mov ecx, dword ptr [edx - 0x1c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078D11A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078D11C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00818118u; /* 0x0078D121: mov eax, 0x818118 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0078D126: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0078D130(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078D130u);

L_0078D130:
    ecx = MEM32(ebp + (-0x10)); /* 0x0078D130: mov ecx, dword ptr [ebp - 0x10] */
    goto L_00496470; /* 0x0078D133: jmp 0x496470 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00496470: RECOMP_ITAIL(0x00496470u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078D138(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078D138u);

    goto L_0078D138;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0078D138:
    edx = MEM32(esp + 0x8); /* 0x0078D138: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0078D13C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x10)); /* 0x0078D13F: mov ecx, dword ptr [edx - 0x10] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078D142: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078D144: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00818170u; /* 0x0078D149: mov eax, 0x818170 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0078D14E: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0078D160(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078D160u);

L_0078D160:
    ecx = MEM32(ebp + (-0x10)); /* 0x0078D160: mov ecx, dword ptr [ebp - 0x10] */
    goto L_004964B0; /* 0x0078D163: jmp 0x4964b0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_004964B0: RECOMP_ITAIL(0x004964B0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078D168(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078D168u);

    goto L_0078D168;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0078D168:
    edx = MEM32(esp + 0x8); /* 0x0078D168: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0078D16C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x10)); /* 0x0078D16F: mov ecx, dword ptr [edx - 0x10] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078D172: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078D174: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0081819Cu; /* 0x0078D179: mov eax, 0x81819c */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0078D17E: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0078D190(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078D190u);

L_0078D190:
    ecx = MEM32(ebp + (-0x10)); /* 0x0078D190: mov ecx, dword ptr [ebp - 0x10] */
    goto L_004964E0; /* 0x0078D193: jmp 0x4964e0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_004964E0: RECOMP_ITAIL(0x004964E0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078D198(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078D198u);

    goto L_0078D198;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0078D198:
    edx = MEM32(esp + 0x8); /* 0x0078D198: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0078D19C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x10)); /* 0x0078D19F: mov ecx, dword ptr [edx - 0x10] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078D1A2: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078D1A4: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008181C8u; /* 0x0078D1A9: mov eax, 0x8181c8 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0078D1AE: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0078D1C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078D1C0u);

L_0078D1C0:
    goto L_00409980; /* 0x0078D1C0: jmp 0x409980 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00409980: RECOMP_ITAIL(0x00409980u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078D1C5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078D1C5u);

L_0078D1C5:
    ecx = MEM32(ebp + (-0x18)); /* 0x0078D1C5: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x0078D1C8: add ecx, 4 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x0078D1CB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078D1D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078D1D0u);

L_0078D1D0:
    ecx = MEM32(ebp + (-0x18)); /* 0x0078D1D0: mov ecx, dword ptr [ebp - 0x18] */
    goto L_00489930; /* 0x0078D1D3: jmp 0x489930 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00489930: RECOMP_ITAIL(0x00489930u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078D1D8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078D1D8u);

    goto L_0078D1D8;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0078D1D8:
    edx = MEM32(esp + 0x8); /* 0x0078D1D8: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0078D1DC: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x1C)); /* 0x0078D1DF: mov ecx, dword ptr [edx - 0x1c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078D1E2: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078D1E4: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008181F4u; /* 0x0078D1E9: mov eax, 0x8181f4 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0078D1EE: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0078D200(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078D200u);

    goto L_0078D200;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0078D200:
    edx = MEM32(esp + 0x8); /* 0x0078D200: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0078D204: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x1C)); /* 0x0078D207: mov ecx, dword ptr [edx - 0x1c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078D20A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078D20C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00818264u; /* 0x0078D211: mov eax, 0x818264 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0078D216: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0078D220(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078D220u);

L_0078D220:
    goto L_00409980; /* 0x0078D220: jmp 0x409980 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00409980: RECOMP_ITAIL(0x00409980u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078D225(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078D225u);

    goto L_0078D225;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0078D225:
    edx = MEM32(esp + 0x8); /* 0x0078D225: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0078D229: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x20)); /* 0x0078D22C: mov ecx, dword ptr [edx - 0x20] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078D22F: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078D231: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008182BCu; /* 0x0078D236: mov eax, 0x8182bc */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0078D23B: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0078D240(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078D240u);

L_0078D240:
    ecx = MEM32(ebp + 0x8); /* 0x0078D240: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x0078D243: add ecx, 4 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x0078D246: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078D24B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078D24Bu);

    goto L_0078D24B;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0078D24B:
    edx = MEM32(esp + 0x8); /* 0x0078D24B: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0078D24F: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xC)); /* 0x0078D252: mov ecx, dword ptr [edx - 0xc] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078D255: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078D257: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0081831Cu; /* 0x0078D25C: mov eax, 0x81831c */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0078D261: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0078D270(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078D270u);

    goto L_0078D270;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0078D270:
    edx = MEM32(esp + 0x8); /* 0x0078D270: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0078D274: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x0078D277: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078D27A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078D27C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00818348u; /* 0x0078D281: mov eax, 0x818348 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0078D286: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0078D290(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078D290u);

L_0078D290:
    goto L_00409980; /* 0x0078D290: jmp 0x409980 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00409980: RECOMP_ITAIL(0x00409980u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078D295(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078D295u);

L_0078D295:
    ecx = MEM32(ebp + (-0x18)); /* 0x0078D295: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x0078D298: add ecx, 4 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x0078D29B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078D2A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078D2A0u);

    goto L_0078D2A0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0078D2A0:
    edx = MEM32(esp + 0x8); /* 0x0078D2A0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0078D2A4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x1C)); /* 0x0078D2A7: mov ecx, dword ptr [edx - 0x1c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078D2AA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078D2AC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008183A0u; /* 0x0078D2B1: mov eax, 0x8183a0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0078D2B6: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0078D2C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078D2C0u);

L_0078D2C0:
    ecx = MEM32(ebp + 0xC); /* 0x0078D2C0: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x0078D2C3: add ecx, 4 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x0078D2C6: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078D2CB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078D2CBu);

    goto L_0078D2CB;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0078D2CB:
    edx = MEM32(esp + 0x8); /* 0x0078D2CB: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0078D2CF: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x10)); /* 0x0078D2D2: mov ecx, dword ptr [edx - 0x10] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078D2D5: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078D2D7: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00818408u; /* 0x0078D2DC: mov eax, 0x818408 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0078D2E1: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0078D2F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078D2F0u);

    goto L_0078D2F0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0078D2F0:
    edx = MEM32(esp + 0x8); /* 0x0078D2F0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0078D2F4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x0078D2F7: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078D2FA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078D2FC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00818434u; /* 0x0078D301: mov eax, 0x818434 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0078D306: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0078D310(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078D310u);

L_0078D310:
    ecx = ebp + 0x28; /* 0x0078D310: lea ecx, [ebp + 0x28] */
    goto L_0040A000; /* 0x0078D313: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078D318(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078D318u);

L_0078D318:
    ecx = ebp + 0x10; /* 0x0078D318: lea ecx, [ebp + 0x10] */
    goto L_0040A000; /* 0x0078D31B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078D320(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078D320u);

L_0078D320:
    ecx = MEM32(ebp + (-0x18)); /* 0x0078D320: mov ecx, dword ptr [ebp - 0x18] */
    goto L_0040A000; /* 0x0078D323: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078D328(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078D328u);

L_0078D328:
    ecx = MEM32(ebp + (-0x24)); /* 0x0078D328: mov ecx, dword ptr [ebp - 0x24] */
    goto L_0040A000; /* 0x0078D32B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078D330(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078D330u);

L_0078D330:
    ecx = MEM32(ebp + (-0x1C)); /* 0x0078D330: mov ecx, dword ptr [ebp - 0x1c] */
    goto L_0040A000; /* 0x0078D333: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078D338(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078D338u);

L_0078D338:
    ecx = MEM32(ebp + (-0x28)); /* 0x0078D338: mov ecx, dword ptr [ebp - 0x28] */
    goto L_00498A70; /* 0x0078D33B: jmp 0x498a70 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00498A70: RECOMP_ITAIL(0x00498A70u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078D340(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078D340u);

L_0078D340:
    ecx = MEM32(ebp + (-0x1C)); /* 0x0078D340: mov ecx, dword ptr [ebp - 0x1c] */
    goto L_0040A000; /* 0x0078D343: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078D348(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078D348u);

L_0078D348:
    ecx = MEM32(ebp + (-0x24)); /* 0x0078D348: mov ecx, dword ptr [ebp - 0x24] */
    goto L_0040A000; /* 0x0078D34B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078D350(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078D350u);

    goto L_0078D350;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0078D350:
    edx = MEM32(esp + 0x8); /* 0x0078D350: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0078D354: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x2C)); /* 0x0078D357: mov ecx, dword ptr [edx - 0x2c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078D35A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078D35C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00818490u; /* 0x0078D361: mov eax, 0x818490 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0078D366: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0078D370(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078D370u);

L_0078D370:
    ecx = MEM32(ebp + (-0x24)); /* 0x0078D370: mov ecx, dword ptr [ebp - 0x24] */
    goto L_00498A70; /* 0x0078D373: jmp 0x498a70 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00498A70: RECOMP_ITAIL(0x00498A70u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078D378(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078D378u);

L_0078D378:
    ecx = MEM32(ebp + (-0x24)); /* 0x0078D378: mov ecx, dword ptr [ebp - 0x24] */
    goto L_004844F0; /* 0x0078D37B: jmp 0x4844f0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_004844F0: RECOMP_ITAIL(0x004844F0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078D380(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078D380u);

    goto L_0078D380;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0078D380:
    edx = MEM32(esp + 0x8); /* 0x0078D380: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0078D384: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x2C)); /* 0x0078D387: mov ecx, dword ptr [edx - 0x2c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078D38A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078D38C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008184F8u; /* 0x0078D391: mov eax, 0x8184f8 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0078D396: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0078D3A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078D3A0u);

L_0078D3A0:
    ecx = MEM32(ebp + (-0x14)); /* 0x0078D3A0: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040A000; /* 0x0078D3A3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078D3A8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078D3A8u);

L_0078D3A8:
    ecx = MEM32(ebp + (-0x18)); /* 0x0078D3A8: mov ecx, dword ptr [ebp - 0x18] */
    goto L_0040A000; /* 0x0078D3AB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}
