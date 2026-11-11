#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_0079ECB8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079ECB8u);

L_0079ECB8:
    ecx = ebp + (-0x58); /* 0x0079ECB8: lea ecx, [ebp - 0x58] */
    goto L_0040A000; /* 0x0079ECBB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079ECC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079ECC0u);

    goto L_0079ECC0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0079ECC0:
    edx = MEM32(esp + 0x8); /* 0x0079ECC0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0079ECC4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x64)); /* 0x0079ECC7: mov ecx, dword ptr [edx - 0x64] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079ECCA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079ECCC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x0079ECD1: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079ECD4: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079ECD6: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00829D78u; /* 0x0079ECDB: mov eax, 0x829d78 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0079ECE0: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0079ECF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079ECF0u);

L_0079ECF0:
    ecx = MEM32(ebp + (-0x5C)); /* 0x0079ECF0: mov ecx, dword ptr [ebp - 0x5c] */
    goto L_0040A000; /* 0x0079ECF3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079ECF8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079ECF8u);

L_0079ECF8:
    ecx = ebp + (-0x40); /* 0x0079ECF8: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x0079ECFB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079ED00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079ED00u);

L_0079ED00:
    ecx = ebp + (-0x58); /* 0x0079ED00: lea ecx, [ebp - 0x58] */
    goto L_0040A000; /* 0x0079ED03: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079ED08(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079ED08u);

L_0079ED08:
    ecx = ebp + (-0x28); /* 0x0079ED08: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x0079ED0B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079ED10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079ED10u);

L_0079ED10:
    ecx = MEM32(ebp + (-0x5C)); /* 0x0079ED10: mov ecx, dword ptr [ebp - 0x5c] */
    goto L_0040A000; /* 0x0079ED13: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079ED18(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079ED18u);

L_0079ED18:
    ecx = ebp + (-0x40); /* 0x0079ED18: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x0079ED1B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079ED20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079ED20u);

L_0079ED20:
    ecx = ebp + (-0x28); /* 0x0079ED20: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x0079ED23: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079ED28(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079ED28u);

L_0079ED28:
    ecx = ebp + (-0x58); /* 0x0079ED28: lea ecx, [ebp - 0x58] */
    goto L_0040A000; /* 0x0079ED2B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079ED30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079ED30u);

L_0079ED30:
    ecx = ebp + (-0x40); /* 0x0079ED30: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x0079ED33: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079ED38(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079ED38u);

L_0079ED38:
    ecx = ebp + (-0x28); /* 0x0079ED38: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x0079ED3B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079ED40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079ED40u);

L_0079ED40:
    ecx = ebp + (-0x28); /* 0x0079ED40: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x0079ED43: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079ED48(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079ED48u);

L_0079ED48:
    ecx = ebp + (-0x40); /* 0x0079ED48: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x0079ED4B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079ED50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079ED50u);

L_0079ED50:
    ecx = ebp + (-0x58); /* 0x0079ED50: lea ecx, [ebp - 0x58] */
    goto L_0040A000; /* 0x0079ED53: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079ED58(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079ED58u);

L_0079ED58:
    ecx = ebp + (-0x40); /* 0x0079ED58: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x0079ED5B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079ED60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079ED60u);

L_0079ED60:
    ecx = ebp + (-0x28); /* 0x0079ED60: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x0079ED63: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079ED68(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079ED68u);

L_0079ED68:
    ecx = ebp + (-0x58); /* 0x0079ED68: lea ecx, [ebp - 0x58] */
    goto L_0040A000; /* 0x0079ED6B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079ED70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079ED70u);

L_0079ED70:
    ecx = ebp + (-0x58); /* 0x0079ED70: lea ecx, [ebp - 0x58] */
    goto L_0040A000; /* 0x0079ED73: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079ED78(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079ED78u);

L_0079ED78:
    ecx = ebp + (-0x28); /* 0x0079ED78: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x0079ED7B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079ED80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079ED80u);

L_0079ED80:
    ecx = ebp + (-0x40); /* 0x0079ED80: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x0079ED83: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079ED88(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079ED88u);

L_0079ED88:
    ecx = ebp + (-0x40); /* 0x0079ED88: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x0079ED8B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079ED90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079ED90u);

L_0079ED90:
    ecx = ebp + (-0x28); /* 0x0079ED90: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x0079ED93: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079ED98(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079ED98u);

L_0079ED98:
    ecx = ebp + (-0x58); /* 0x0079ED98: lea ecx, [ebp - 0x58] */
    goto L_0040A000; /* 0x0079ED9B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EDA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EDA0u);

L_0079EDA0:
    ecx = ebp + (-0x58); /* 0x0079EDA0: lea ecx, [ebp - 0x58] */
    goto L_0040A000; /* 0x0079EDA3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EDA8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EDA8u);

L_0079EDA8:
    ecx = ebp + (-0x28); /* 0x0079EDA8: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x0079EDAB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EDB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EDB0u);

L_0079EDB0:
    ecx = ebp + (-0x40); /* 0x0079EDB0: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x0079EDB3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EDB8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EDB8u);

    goto L_0079EDB8;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0079EDB8:
    edx = MEM32(esp + 0x8); /* 0x0079EDB8: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0079EDBC: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x64)); /* 0x0079EDBF: mov ecx, dword ptr [edx - 0x64] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079EDC2: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079EDC4: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x0079EDC9: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079EDCC: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079EDCE: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00829E00u; /* 0x0079EDD3: mov eax, 0x829e00 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0079EDD8: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0079EDE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EDE0u);

L_0079EDE0:
    ecx = MEM32(ebp + (-0x16C)); /* 0x0079EDE0: mov ecx, dword ptr [ebp - 0x16c] */
    goto L_0040A000; /* 0x0079EDE6: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EDEB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EDEBu);

L_0079EDEB:
    ecx = MEM32(ebp + (-0x16C)); /* 0x0079EDEB: mov ecx, dword ptr [ebp - 0x16c] */
    goto L_0040A000; /* 0x0079EDF1: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EDF6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EDF6u);

L_0079EDF6:
    ecx = ebp + (-0xF0); /* 0x0079EDF6: lea ecx, [ebp - 0xf0] */
    goto L_0040A000; /* 0x0079EDFC: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EE01(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EE01u);

L_0079EE01:
    ecx = MEM32(ebp + (-0x168)); /* 0x0079EE01: mov ecx, dword ptr [ebp - 0x168] */
    goto L_0040A000; /* 0x0079EE07: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EE0C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EE0Cu);

L_0079EE0C:
    ecx = ebp + (-0x138); /* 0x0079EE0C: lea ecx, [ebp - 0x138] */
    goto L_0040A000; /* 0x0079EE12: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EE17(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EE17u);

L_0079EE17:
    ecx = ebp + (-0xD8); /* 0x0079EE17: lea ecx, [ebp - 0xd8] */
    goto L_0040A000; /* 0x0079EE1D: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EE22(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EE22u);

L_0079EE22:
    ecx = ebp + (-0x138); /* 0x0079EE22: lea ecx, [ebp - 0x138] */
    goto L_0040A000; /* 0x0079EE28: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EE2D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EE2Du);

L_0079EE2D:
    ecx = ebp + (-0x120); /* 0x0079EE2D: lea ecx, [ebp - 0x120] */
    goto L_0040A000; /* 0x0079EE33: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EE38(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EE38u);

L_0079EE38:
    ecx = ebp + (-0x108); /* 0x0079EE38: lea ecx, [ebp - 0x108] */
    goto L_0040A000; /* 0x0079EE3E: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EE43(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EE43u);

L_0079EE43:
    ecx = ebp + (-0x120); /* 0x0079EE43: lea ecx, [ebp - 0x120] */
    goto L_0040A000; /* 0x0079EE49: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EE4E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EE4Eu);

L_0079EE4E:
    ecx = ebp + (-0x138); /* 0x0079EE4E: lea ecx, [ebp - 0x138] */
    goto L_0040A000; /* 0x0079EE54: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EE59(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EE59u);

L_0079EE59:
    ecx = ebp + (-0x108); /* 0x0079EE59: lea ecx, [ebp - 0x108] */
    goto L_0040A000; /* 0x0079EE5F: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EE64(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EE64u);

L_0079EE64:
    ecx = ebp + (-0xC0); /* 0x0079EE64: lea ecx, [ebp - 0xc0] */
    goto L_0040A000; /* 0x0079EE6A: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EE6F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EE6Fu);

L_0079EE6F:
    ecx = ebp + (-0xA8); /* 0x0079EE6F: lea ecx, [ebp - 0xa8] */
    goto L_0040A000; /* 0x0079EE75: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EE7A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EE7Au);

L_0079EE7A:
    ecx = ebp + (-0x90); /* 0x0079EE7A: lea ecx, [ebp - 0x90] */
    goto L_0040A000; /* 0x0079EE80: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EE85(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EE85u);

L_0079EE85:
    ecx = ebp + (-0x78); /* 0x0079EE85: lea ecx, [ebp - 0x78] */
    goto L_0040A000; /* 0x0079EE88: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EE8D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EE8Du);

L_0079EE8D:
    ecx = ebp + (-0x60); /* 0x0079EE8D: lea ecx, [ebp - 0x60] */
    goto L_0040A000; /* 0x0079EE90: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EE95(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EE95u);

L_0079EE95:
    PUSH32(esp, 0x0040A000u); /* 0x0079EE95: push 0x40a000 */
    PUSH32(esp, 6); /* 0x0079EE9A: push 6 */
    PUSH32(esp, 0x18u); /* 0x0079EE9C: push 0x18 */
    eax = ebp + (-0xC0); /* 0x0079EE9E: lea eax, [ebp - 0xc0] */
    PUSH32(esp, eax); /* 0x0079EEA4: push eax */
    RECOMP_CALL(sub_0077F628); /* 0x0079EEA5: call 0x77f628 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0079EEAA: ret  */
    RECOMP_REGS_OUT();
}

void sub_0079EEAB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EEABu);

L_0079EEAB:
    ecx = ebp + (-0x138); /* 0x0079EEAB: lea ecx, [ebp - 0x138] */
    goto L_0040A000; /* 0x0079EEB1: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EEB6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EEB6u);

L_0079EEB6:
    ecx = ebp + (-0x120); /* 0x0079EEB6: lea ecx, [ebp - 0x120] */
    goto L_0040A000; /* 0x0079EEBC: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EEC1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EEC1u);

L_0079EEC1:
    ecx = ebp + (-0x108); /* 0x0079EEC1: lea ecx, [ebp - 0x108] */
    goto L_0040A000; /* 0x0079EEC7: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EECC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EECCu);

    goto L_0079EECC;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0079EECC:
    edx = MEM32(esp + 0x8); /* 0x0079EECC: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x16C); /* 0x0079EED0: lea eax, [edx - 0x16c] */
    ecx = MEM32(edx + (-0x170)); /* 0x0079EED6: mov ecx, dword ptr [edx - 0x170] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079EEDC: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079EEDE: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x0079EEE3: add eax, 0xc */
    _flag_k = FK_ADD;
    ecx = MEM32(edx + (-0x8)); /* 0x0079EEE6: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079EEE9: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079EEEB: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00829EF8u; /* 0x0079EEF0: mov eax, 0x829ef8 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0079EEF5: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0079EF00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EF00u);

L_0079EF00:
    ecx = ebp + (-0x8C); /* 0x0079EF00: lea ecx, [ebp - 0x8c] */
    goto L_0040A000; /* 0x0079EF06: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EF0B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EF0Bu);

L_0079EF0B:
    ecx = ebp + (-0x74); /* 0x0079EF0B: lea ecx, [ebp - 0x74] */
    goto L_0040A000; /* 0x0079EF0E: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EF13(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EF13u);

L_0079EF13:
    ecx = ebp + (-0x8C); /* 0x0079EF13: lea ecx, [ebp - 0x8c] */
    goto L_0040A000; /* 0x0079EF19: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EF1E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EF1Eu);

L_0079EF1E:
    ecx = MEM32(ebp + (-0xC8)); /* 0x0079EF1E: mov ecx, dword ptr [ebp - 0xc8] */
    goto L_0040A000; /* 0x0079EF24: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EF29(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EF29u);

L_0079EF29:
    ecx = MEM32(ebp + (-0xC8)); /* 0x0079EF29: mov ecx, dword ptr [ebp - 0xc8] */
    goto L_0040A000; /* 0x0079EF2F: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EF34(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EF34u);

L_0079EF34:
    ecx = ebp + (-0xA4); /* 0x0079EF34: lea ecx, [ebp - 0xa4] */
    goto L_0040A000; /* 0x0079EF3A: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EF3F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EF3Fu);

L_0079EF3F:
    ecx = ebp + (-0x74); /* 0x0079EF3F: lea ecx, [ebp - 0x74] */
    goto L_0040A000; /* 0x0079EF42: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EF47(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EF47u);

L_0079EF47:
    ecx = MEM32(ebp + (-0xC8)); /* 0x0079EF47: mov ecx, dword ptr [ebp - 0xc8] */
    goto L_0040A000; /* 0x0079EF4D: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EF52(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EF52u);

L_0079EF52:
    ecx = MEM32(ebp + (-0xC8)); /* 0x0079EF52: mov ecx, dword ptr [ebp - 0xc8] */
    goto L_0040A000; /* 0x0079EF58: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EF5D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EF5Du);

L_0079EF5D:
    ecx = MEM32(ebp + (-0xC8)); /* 0x0079EF5D: mov ecx, dword ptr [ebp - 0xc8] */
    goto L_0040A000; /* 0x0079EF63: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EF68(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EF68u);

L_0079EF68:
    ecx = MEM32(ebp + (-0xC8)); /* 0x0079EF68: mov ecx, dword ptr [ebp - 0xc8] */
    goto L_0040A000; /* 0x0079EF6E: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EF73(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EF73u);

L_0079EF73:
    ecx = MEM32(ebp + (-0xC8)); /* 0x0079EF73: mov ecx, dword ptr [ebp - 0xc8] */
    goto L_0040A000; /* 0x0079EF79: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EF7E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EF7Eu);

L_0079EF7E:
    ecx = MEM32(ebp + (-0xC8)); /* 0x0079EF7E: mov ecx, dword ptr [ebp - 0xc8] */
    goto L_0040A000; /* 0x0079EF84: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EF89(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EF89u);

L_0079EF89:
    ecx = MEM32(ebp + (-0xC8)); /* 0x0079EF89: mov ecx, dword ptr [ebp - 0xc8] */
    goto L_0040A000; /* 0x0079EF8F: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EF94(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EF94u);

L_0079EF94:
    ecx = MEM32(ebp + (-0xC8)); /* 0x0079EF94: mov ecx, dword ptr [ebp - 0xc8] */
    goto L_0040A000; /* 0x0079EF9A: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EF9F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EF9Fu);

L_0079EF9F:
    ecx = MEM32(ebp + (-0xC8)); /* 0x0079EF9F: mov ecx, dword ptr [ebp - 0xc8] */
    goto L_0040A000; /* 0x0079EFA5: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EFAA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EFAAu);

L_0079EFAA:
    ecx = MEM32(ebp + (-0xC8)); /* 0x0079EFAA: mov ecx, dword ptr [ebp - 0xc8] */
    goto L_0040A000; /* 0x0079EFB0: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EFB5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EFB5u);

L_0079EFB5:
    ecx = MEM32(ebp + (-0xC8)); /* 0x0079EFB5: mov ecx, dword ptr [ebp - 0xc8] */
    goto L_0040A000; /* 0x0079EFBB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EFC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EFC0u);

L_0079EFC0:
    ecx = MEM32(ebp + (-0xC8)); /* 0x0079EFC0: mov ecx, dword ptr [ebp - 0xc8] */
    goto L_0040A000; /* 0x0079EFC6: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EFCB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EFCBu);

L_0079EFCB:
    ecx = MEM32(ebp + (-0xC8)); /* 0x0079EFCB: mov ecx, dword ptr [ebp - 0xc8] */
    goto L_0040A000; /* 0x0079EFD1: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EFD6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EFD6u);

L_0079EFD6:
    ecx = MEM32(ebp + (-0xC8)); /* 0x0079EFD6: mov ecx, dword ptr [ebp - 0xc8] */
    goto L_0040A000; /* 0x0079EFDC: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EFE1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EFE1u);

L_0079EFE1:
    ecx = MEM32(ebp + (-0xC8)); /* 0x0079EFE1: mov ecx, dword ptr [ebp - 0xc8] */
    goto L_0040A000; /* 0x0079EFE7: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EFEC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EFECu);

L_0079EFEC:
    ecx = MEM32(ebp + (-0xC8)); /* 0x0079EFEC: mov ecx, dword ptr [ebp - 0xc8] */
    goto L_0040A000; /* 0x0079EFF2: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EFF7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EFF7u);

L_0079EFF7:
    ecx = MEM32(ebp + (-0xC8)); /* 0x0079EFF7: mov ecx, dword ptr [ebp - 0xc8] */
    goto L_0040A000; /* 0x0079EFFD: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079F002(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079F002u);

L_0079F002:
    ecx = MEM32(ebp + (-0xC8)); /* 0x0079F002: mov ecx, dword ptr [ebp - 0xc8] */
    goto L_0040A000; /* 0x0079F008: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079F00D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079F00Du);

L_0079F00D:
    ecx = MEM32(ebp + (-0xC8)); /* 0x0079F00D: mov ecx, dword ptr [ebp - 0xc8] */
    goto L_0040A000; /* 0x0079F013: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079F018(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079F018u);

L_0079F018:
    ecx = MEM32(ebp + (-0xC8)); /* 0x0079F018: mov ecx, dword ptr [ebp - 0xc8] */
    goto L_0040A000; /* 0x0079F01E: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079F023(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079F023u);

L_0079F023:
    ecx = MEM32(ebp + (-0xC8)); /* 0x0079F023: mov ecx, dword ptr [ebp - 0xc8] */
    goto L_0040A000; /* 0x0079F029: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079F02E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079F02Eu);

L_0079F02E:
    ecx = MEM32(ebp + (-0xC8)); /* 0x0079F02E: mov ecx, dword ptr [ebp - 0xc8] */
    goto L_0040A000; /* 0x0079F034: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079F039(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079F039u);

L_0079F039:
    ecx = MEM32(ebp + (-0xC8)); /* 0x0079F039: mov ecx, dword ptr [ebp - 0xc8] */
    goto L_0040A000; /* 0x0079F03F: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079F044(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079F044u);

L_0079F044:
    ecx = MEM32(ebp + (-0xC8)); /* 0x0079F044: mov ecx, dword ptr [ebp - 0xc8] */
    goto L_0040A000; /* 0x0079F04A: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079F04F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079F04Fu);

L_0079F04F:
    ecx = MEM32(ebp + (-0xC8)); /* 0x0079F04F: mov ecx, dword ptr [ebp - 0xc8] */
    goto L_0040A000; /* 0x0079F055: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079F05A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079F05Au);

L_0079F05A:
    ecx = MEM32(ebp + (-0xC8)); /* 0x0079F05A: mov ecx, dword ptr [ebp - 0xc8] */
    goto L_0040A000; /* 0x0079F060: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079F065(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079F065u);

L_0079F065:
    ecx = MEM32(ebp + (-0xC8)); /* 0x0079F065: mov ecx, dword ptr [ebp - 0xc8] */
    goto L_0040A000; /* 0x0079F06B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079F070(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079F070u);

L_0079F070:
    ecx = MEM32(ebp + (-0xC8)); /* 0x0079F070: mov ecx, dword ptr [ebp - 0xc8] */
    goto L_0040A000; /* 0x0079F076: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079F07B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079F07Bu);

L_0079F07B:
    eax = MEM32(ebp + (-0xC0)); /* 0x0079F07B: mov eax, dword ptr [ebp - 0xc0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x0079F081: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0079F09C; /* 0x0079F084: je 0x79f09c */
L_0079F08A:
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC0))); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(ebp + (-0xC0)) = MEM32(ebp + (-0xC0)) & 0xFFFFFFFEu; /* 0x0079F08A: and dword ptr [ebp - 0xc0], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x8C); /* 0x0079F091: lea ecx, [ebp - 0x8c] */
    goto L_0040A000; /* 0x0079F097: jmp 0x40a000 */
L_0079F09C:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0079F09C: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079F09D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079F09Du);

L_0079F09D:
    eax = MEM32(ebp + (-0xC0)); /* 0x0079F09D: mov eax, dword ptr [ebp - 0xc0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    eax = eax & 2; /* 0x0079F0A3: and eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0079F0BB; /* 0x0079F0A6: je 0x79f0bb */
L_0079F0AC:
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC0))); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ebp + (-0xC0)) = MEM32(ebp + (-0xC0)) & 0xFFFFFFFDu; /* 0x0079F0AC: and dword ptr [ebp - 0xc0], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x74); /* 0x0079F0B3: lea ecx, [ebp - 0x74] */
    goto L_0040A000; /* 0x0079F0B6: jmp 0x40a000 */
L_0079F0BB:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0079F0BB: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079F0BC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079F0BCu);

L_0079F0BC:
    ecx = ebp + (-0xA4); /* 0x0079F0BC: lea ecx, [ebp - 0xa4] */
    goto L_0040A000; /* 0x0079F0C2: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079F0C7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079F0C7u);

L_0079F0C7:
    ecx = ebp + (-0xA4); /* 0x0079F0C7: lea ecx, [ebp - 0xa4] */
    goto L_0040A000; /* 0x0079F0CD: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079F0D2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079F0D2u);

L_0079F0D2:
    ecx = ebp + (-0xA4); /* 0x0079F0D2: lea ecx, [ebp - 0xa4] */
    goto L_0040A000; /* 0x0079F0D8: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079F0DD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079F0DDu);

L_0079F0DD:
    ecx = ebp + (-0xA4); /* 0x0079F0DD: lea ecx, [ebp - 0xa4] */
    goto L_0040A000; /* 0x0079F0E3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079F0E8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079F0E8u);

L_0079F0E8:
    ecx = ebp + (-0xA4); /* 0x0079F0E8: lea ecx, [ebp - 0xa4] */
    goto L_0040A000; /* 0x0079F0EE: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079F0F3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079F0F3u);

L_0079F0F3:
    ecx = MEM32(ebp + (-0xC8)); /* 0x0079F0F3: mov ecx, dword ptr [ebp - 0xc8] */
    goto L_0040A000; /* 0x0079F0F9: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079F0FE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079F0FEu);

L_0079F0FE:
    eax = MEM32(ebp + (-0xC0)); /* 0x0079F0FE: mov eax, dword ptr [ebp - 0xc0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    eax = eax & 4; /* 0x0079F104: and eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0079F11C; /* 0x0079F107: je 0x79f11c */
L_0079F10D:
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC0))); _flag_b = (uint32_t)(0xFFFFFFFBu);
    MEM32(ebp + (-0xC0)) = MEM32(ebp + (-0xC0)) & 0xFFFFFFFBu; /* 0x0079F10D: and dword ptr [ebp - 0xc0], 0xfffffffb */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x5C); /* 0x0079F114: lea ecx, [ebp - 0x5c] */
    goto L_0040A000; /* 0x0079F117: jmp 0x40a000 */
L_0079F11C:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0079F11C: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079F11D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079F11Du);

L_0079F11D:
    eax = MEM32(ebp + (-0xC0)); /* 0x0079F11D: mov eax, dword ptr [ebp - 0xc0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    eax = eax & 8; /* 0x0079F123: and eax, 8 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0079F13B; /* 0x0079F126: je 0x79f13b */
L_0079F12C:
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC0))); _flag_b = (uint32_t)(0xFFFFFFF7u);
    MEM32(ebp + (-0xC0)) = MEM32(ebp + (-0xC0)) & 0xFFFFFFF7u; /* 0x0079F12C: and dword ptr [ebp - 0xc0], 0xfffffff7 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x44); /* 0x0079F133: lea ecx, [ebp - 0x44] */
    goto L_0040A000; /* 0x0079F136: jmp 0x40a000 */
L_0079F13B:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0079F13B: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079F13C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079F13Cu);

L_0079F13C:
    ecx = ebp + (-0xA4); /* 0x0079F13C: lea ecx, [ebp - 0xa4] */
    goto L_0040A000; /* 0x0079F142: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079F147(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079F147u);

L_0079F147:
    ecx = ebp + (-0xA4); /* 0x0079F147: lea ecx, [ebp - 0xa4] */
    goto L_0040A000; /* 0x0079F14D: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079F152(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079F152u);

L_0079F152:
    eax = MEM32(ebp + (-0xC0)); /* 0x0079F152: mov eax, dword ptr [ebp - 0xc0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    eax = eax & 0x10u; /* 0x0079F158: and eax, 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0079F170; /* 0x0079F15B: je 0x79f170 */
L_0079F161:
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC0))); _flag_b = (uint32_t)(0xFFFFFFEFu);
    MEM32(ebp + (-0xC0)) = MEM32(ebp + (-0xC0)) & 0xFFFFFFEFu; /* 0x0079F161: and dword ptr [ebp - 0xc0], 0xffffffef */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x2C); /* 0x0079F168: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x0079F16B: jmp 0x40a000 */
L_0079F170:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0079F170: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079F171(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079F171u);

L_0079F171:
    eax = MEM32(ebp + (-0xC0)); /* 0x0079F171: mov eax, dword ptr [ebp - 0xc0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    eax = eax & 0x20u; /* 0x0079F177: and eax, 0x20 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0079F192; /* 0x0079F17A: je 0x79f192 */
L_0079F180:
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC0))); _flag_b = (uint32_t)(0xFFFFFFDFu);
    MEM32(ebp + (-0xC0)) = MEM32(ebp + (-0xC0)) & 0xFFFFFFDFu; /* 0x0079F180: and dword ptr [ebp - 0xc0], 0xffffffdf */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x8C); /* 0x0079F187: lea ecx, [ebp - 0x8c] */
    goto L_0040A000; /* 0x0079F18D: jmp 0x40a000 */
L_0079F192:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0079F192: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079F193(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079F193u);

L_0079F193:
    eax = MEM32(ebp + (-0xC0)); /* 0x0079F193: mov eax, dword ptr [ebp - 0xc0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40u);
    eax = eax & 0x40u; /* 0x0079F199: and eax, 0x40 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0079F1B1; /* 0x0079F19C: je 0x79f1b1 */
L_0079F1A2:
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC0))); _flag_b = (uint32_t)(0xFFFFFFBFu);
    MEM32(ebp + (-0xC0)) = MEM32(ebp + (-0xC0)) & 0xFFFFFFBFu; /* 0x0079F1A2: and dword ptr [ebp - 0xc0], 0xffffffbf */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x74); /* 0x0079F1A9: lea ecx, [ebp - 0x74] */
    goto L_0040A000; /* 0x0079F1AC: jmp 0x40a000 */
L_0079F1B1:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0079F1B1: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}
