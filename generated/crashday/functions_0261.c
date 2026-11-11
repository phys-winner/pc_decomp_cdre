#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_007BDD87(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDD87u);

L_007BDD87:
    ecx = MEM32(ebp + (-0x130)); /* 0x007BDD87: mov ecx, dword ptr [ebp - 0x130] */
    goto L_0040A000; /* 0x007BDD8D: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDD92(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDD92u);

L_007BDD92:
    eax = MEM32(ebp + (-0x138)); /* 0x007BDD92: mov eax, dword ptr [ebp - 0x138] */
    PUSH32(esp, eax); /* 0x007BDD98: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007BDD99: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007BDD9F: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007BDDA0: ret  */
    RECOMP_REGS_OUT();
}

void sub_007BDDA1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDDA1u);

L_007BDDA1:
    ecx = ebp + (-0x11C); /* 0x007BDDA1: lea ecx, [ebp - 0x11c] */
    goto L_0040A000; /* 0x007BDDA7: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDDAC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDDACu);

L_007BDDAC:
    ecx = ebp + (-0x104); /* 0x007BDDAC: lea ecx, [ebp - 0x104] */
    goto L_0040A000; /* 0x007BDDB2: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDDB7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDDB7u);

L_007BDDB7:
    ecx = ebp + (-0xEC); /* 0x007BDDB7: lea ecx, [ebp - 0xec] */
    goto L_0040A000; /* 0x007BDDBD: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDDC2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDDC2u);

L_007BDDC2:
    ecx = ebp + (-0x8C); /* 0x007BDDC2: lea ecx, [ebp - 0x8c] */
    goto L_0040A000; /* 0x007BDDC8: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDDCD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDDCDu);

L_007BDDCD:
    ecx = ebp + (-0xBC); /* 0x007BDDCD: lea ecx, [ebp - 0xbc] */
    goto L_0040A000; /* 0x007BDDD3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDDD8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDDD8u);

L_007BDDD8:
    ecx = ebp + (-0x11C); /* 0x007BDDD8: lea ecx, [ebp - 0x11c] */
    goto L_0040A000; /* 0x007BDDDE: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDDE3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDDE3u);

L_007BDDE3:
    ecx = MEM32(ebp + (-0x138)); /* 0x007BDDE3: mov ecx, dword ptr [ebp - 0x138] */
    goto L_0040A000; /* 0x007BDDE9: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDDEE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDDEEu);

L_007BDDEE:
    ecx = MEM32(ebp + (-0x130)); /* 0x007BDDEE: mov ecx, dword ptr [ebp - 0x130] */
    goto L_0040A000; /* 0x007BDDF4: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDDF9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDDF9u);

L_007BDDF9:
    ecx = ebp + (-0xD4); /* 0x007BDDF9: lea ecx, [ebp - 0xd4] */
    goto L_0040A000; /* 0x007BDDFF: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDE04(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDE04u);

L_007BDE04:
    ecx = ebp + (-0x11C); /* 0x007BDE04: lea ecx, [ebp - 0x11c] */
    goto L_0040A000; /* 0x007BDE0A: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDE0F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDE0Fu);

L_007BDE0F:
    ecx = ebp + (-0xBC); /* 0x007BDE0F: lea ecx, [ebp - 0xbc] */
    goto L_0040A000; /* 0x007BDE15: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDE1A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDE1Au);

L_007BDE1A:
    ecx = MEM32(ebp + (-0x138)); /* 0x007BDE1A: mov ecx, dword ptr [ebp - 0x138] */
    goto L_0040A000; /* 0x007BDE20: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDE25(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDE25u);

L_007BDE25:
    ecx = MEM32(ebp + (-0x130)); /* 0x007BDE25: mov ecx, dword ptr [ebp - 0x130] */
    goto L_0040A000; /* 0x007BDE2B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDE30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDE30u);

L_007BDE30:
    ecx = ebp + (-0xBC); /* 0x007BDE30: lea ecx, [ebp - 0xbc] */
    goto L_0040A000; /* 0x007BDE36: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDE3B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDE3Bu);

L_007BDE3B:
    ecx = ebp + (-0x11C); /* 0x007BDE3B: lea ecx, [ebp - 0x11c] */
    goto L_0040A000; /* 0x007BDE41: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDE46(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDE46u);

L_007BDE46:
    ecx = ebp + (-0x2C); /* 0x007BDE46: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x007BDE49: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDE4E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDE4Eu);

L_007BDE4E:
    ecx = ebp + (-0xBC); /* 0x007BDE4E: lea ecx, [ebp - 0xbc] */
    goto L_0040A000; /* 0x007BDE54: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDE59(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDE59u);

L_007BDE59:
    ecx = MEM32(ebp + (-0x130)); /* 0x007BDE59: mov ecx, dword ptr [ebp - 0x130] */
    goto L_0040A000; /* 0x007BDE5F: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDE64(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDE64u);

L_007BDE64:
    ecx = MEM32(ebp + (-0x124)); /* 0x007BDE64: mov ecx, dword ptr [ebp - 0x124] */
    goto L_0040A000; /* 0x007BDE6A: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDE6F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDE6Fu);

L_007BDE6F:
    ecx = ebp + (-0x5C); /* 0x007BDE6F: lea ecx, [ebp - 0x5c] */
    goto L_0040A000; /* 0x007BDE72: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDE77(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDE77u);

L_007BDE77:
    ecx = ebp + (-0x44); /* 0x007BDE77: lea ecx, [ebp - 0x44] */
    goto L_0040A000; /* 0x007BDE7A: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDE7F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDE7Fu);

L_007BDE7F:
    ecx = ebp + (-0x74); /* 0x007BDE7F: lea ecx, [ebp - 0x74] */
    goto L_0040A000; /* 0x007BDE82: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDE87(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDE87u);

L_007BDE87:
    ecx = MEM32(ebp + (-0x124)); /* 0x007BDE87: mov ecx, dword ptr [ebp - 0x124] */
    goto L_0040A000; /* 0x007BDE8D: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDE92(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDE92u);

L_007BDE92:
    ecx = MEM32(ebp + (-0x130)); /* 0x007BDE92: mov ecx, dword ptr [ebp - 0x130] */
    goto L_0040A000; /* 0x007BDE98: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDE9D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDE9Du);

L_007BDE9D:
    ecx = ebp + (-0x11C); /* 0x007BDE9D: lea ecx, [ebp - 0x11c] */
    goto L_0040A000; /* 0x007BDEA3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDEA8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDEA8u);

L_007BDEA8:
    ecx = ebp + (-0x74); /* 0x007BDEA8: lea ecx, [ebp - 0x74] */
    goto L_0040A000; /* 0x007BDEAB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDEB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDEB0u);

L_007BDEB0:
    ecx = ebp + (-0x44); /* 0x007BDEB0: lea ecx, [ebp - 0x44] */
    goto L_0040A000; /* 0x007BDEB3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDEB8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDEB8u);

L_007BDEB8:
    ecx = ebp + (-0x5C); /* 0x007BDEB8: lea ecx, [ebp - 0x5c] */
    goto L_0040A000; /* 0x007BDEBB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDEC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDEC0u);

L_007BDEC0:
    ecx = MEM32(ebp + (-0x124)); /* 0x007BDEC0: mov ecx, dword ptr [ebp - 0x124] */
    goto L_0040A000; /* 0x007BDEC6: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDECB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDECBu);

L_007BDECB:
    ecx = MEM32(ebp + (-0x138)); /* 0x007BDECB: mov ecx, dword ptr [ebp - 0x138] */
    goto L_0040A000; /* 0x007BDED1: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDED6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDED6u);

    goto L_007BDED6;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BDED6:
    edx = MEM32(esp + 0x8); /* 0x007BDED6: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x144); /* 0x007BDEDA: lea eax, [edx - 0x144] */
    ecx = MEM32(edx + (-0x148)); /* 0x007BDEE0: mov ecx, dword ptr [edx - 0x148] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BDEE6: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BDEE8: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x007BDEED: add eax, 8 */
    _flag_k = FK_ADD;
    ecx = MEM32(edx + (-0x8)); /* 0x007BDEF0: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BDEF3: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BDEF5: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00847A28u; /* 0x007BDEFA: mov eax, 0x847a28 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BDEFF: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BDF10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDF10u);

L_007BDF10:
    ecx = ebp + (-0x2C); /* 0x007BDF10: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x007BDF13: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDF18(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDF18u);

L_007BDF18:
    ecx = MEM32(ebp + (-0x34)); /* 0x007BDF18: mov ecx, dword ptr [ebp - 0x34] */
    goto L_0040A000; /* 0x007BDF1B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDF20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDF20u);

L_007BDF20:
    ecx = MEM32(ebp + (-0x3C)); /* 0x007BDF20: mov ecx, dword ptr [ebp - 0x3c] */
    goto L_0040A000; /* 0x007BDF23: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDF28(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDF28u);

L_007BDF28:
    ecx = MEM32(ebp + (-0x3C)); /* 0x007BDF28: mov ecx, dword ptr [ebp - 0x3c] */
    goto L_0040A000; /* 0x007BDF2B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDF30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDF30u);

L_007BDF30:
    ecx = MEM32(ebp + (-0x34)); /* 0x007BDF30: mov ecx, dword ptr [ebp - 0x34] */
    goto L_0040A000; /* 0x007BDF33: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDF38(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDF38u);

    goto L_007BDF38;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BDF38:
    edx = MEM32(esp + 0x8); /* 0x007BDF38: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x4C); /* 0x007BDF3C: lea eax, [edx - 0x4c] */
    ecx = MEM32(edx + (-0x50)); /* 0x007BDF3F: mov ecx, dword ptr [edx - 0x50] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BDF42: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BDF44: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x007BDF49: add eax, 0xc */
    _flag_k = FK_ADD;
    ecx = MEM32(edx + (-0x8)); /* 0x007BDF4C: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BDF4F: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BDF51: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00847B78u; /* 0x007BDF56: mov eax, 0x847b78 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BDF5B: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BDF60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDF60u);

L_007BDF60:
    ecx = MEM32(ebp + (-0x70)); /* 0x007BDF60: mov ecx, dword ptr [ebp - 0x70] */
    goto L_0040A000; /* 0x007BDF63: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDF68(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDF68u);

L_007BDF68:
    ecx = MEM32(ebp + (-0x68)); /* 0x007BDF68: mov ecx, dword ptr [ebp - 0x68] */
    goto L_0040A000; /* 0x007BDF6B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDF70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDF70u);

L_007BDF70:
    ecx = ebp + (-0x44); /* 0x007BDF70: lea ecx, [ebp - 0x44] */
    goto L_0040A000; /* 0x007BDF73: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDF78(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDF78u);

L_007BDF78:
    ecx = ebp + (-0x2C); /* 0x007BDF78: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x007BDF7B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDF80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDF80u);

L_007BDF80:
    ecx = ebp + (-0x5C); /* 0x007BDF80: lea ecx, [ebp - 0x5c] */
    goto L_0040A000; /* 0x007BDF83: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDF88(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDF88u);

    goto L_007BDF88;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BDF88:
    edx = MEM32(esp + 0x8); /* 0x007BDF88: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BDF8C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x90)); /* 0x007BDF8F: mov ecx, dword ptr [edx - 0x90] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BDF95: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BDF97: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x8)); /* 0x007BDF9C: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BDF9F: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BDFA1: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00847BC4u; /* 0x007BDFA6: mov eax, 0x847bc4 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BDFAB: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BDFB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDFB0u);

L_007BDFB0:
    eax = MEM32(ebp + (-0x14)); /* 0x007BDFB0: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x007BDFB3: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007BDFC8; /* 0x007BDFB6: je 0x7bdfc8 */
L_007BDFBC:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(ebp + (-0x14)) = MEM32(ebp + (-0x14)) & 0xFFFFFFFEu; /* 0x007BDFBC: and dword ptr [ebp - 0x14], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x18)); /* 0x007BDFC0: mov ecx, dword ptr [ebp - 0x18] */
    goto L_0040A000; /* 0x007BDFC3: jmp 0x40a000 */
L_007BDFC8:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007BDFC8: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDFC9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDFC9u);

    goto L_007BDFC9;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BDFC9:
    edx = MEM32(esp + 0x8); /* 0x007BDFC9: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BDFCD: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x24)); /* 0x007BDFD0: mov ecx, dword ptr [edx - 0x24] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BDFD3: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BDFD5: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00847C10u; /* 0x007BDFDA: mov eax, 0x847c10 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BDFDF: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BDFF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDFF0u);

L_007BDFF0:
    ecx = ebp + (-0x38); /* 0x007BDFF0: lea ecx, [ebp - 0x38] */
    goto L_00429F40; /* 0x007BDFF3: jmp 0x429f40 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00429F40: RECOMP_ITAIL(0x00429F40u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDFF8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDFF8u);

L_007BDFF8:
    ecx = ebp + (-0x2C); /* 0x007BDFF8: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x007BDFFB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE000(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE000u);

L_007BE000:
    eax = MEM32(ebp + (-0x48)); /* 0x007BE000: mov eax, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x007BE003: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007BE018; /* 0x007BE006: je 0x7be018 */
L_007BE00C:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x48))); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(ebp + (-0x48)) = MEM32(ebp + (-0x48)) & 0xFFFFFFFEu; /* 0x007BE00C: and dword ptr [ebp - 0x48], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x44)); /* 0x007BE010: mov ecx, dword ptr [ebp - 0x44] */
    goto L_0040A000; /* 0x007BE013: jmp 0x40a000 */
L_007BE018:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007BE018: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE019(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE019u);

    goto L_007BE019;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BE019:
    edx = MEM32(esp + 0x8); /* 0x007BE019: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BE01D: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x50)); /* 0x007BE020: mov ecx, dword ptr [edx - 0x50] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BE023: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BE025: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x8)); /* 0x007BE02A: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BE02D: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BE02F: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00847C3Cu; /* 0x007BE034: mov eax, 0x847c3c */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BE039: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BE040(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE040u);

L_007BE040:
    ecx = MEM32(ebp + (-0x38)); /* 0x007BE040: mov ecx, dword ptr [ebp - 0x38] */
    goto L_0040A000; /* 0x007BE043: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE048(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE048u);

L_007BE048:
    ecx = MEM32(ebp + (-0x44)); /* 0x007BE048: mov ecx, dword ptr [ebp - 0x44] */
    goto L_0040A000; /* 0x007BE04B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE050(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE050u);

L_007BE050:
    ecx = MEM32(ebp + (-0x3C)); /* 0x007BE050: mov ecx, dword ptr [ebp - 0x3c] */
    goto L_0040A000; /* 0x007BE053: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE058(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE058u);

L_007BE058:
    ecx = MEM32(ebp + (-0x40)); /* 0x007BE058: mov ecx, dword ptr [ebp - 0x40] */
    goto L_0040A000; /* 0x007BE05B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE060(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE060u);

L_007BE060:
    eax = MEM32(ebp + (-0x30)); /* 0x007BE060: mov eax, dword ptr [ebp - 0x30] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x007BE063: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007BE078; /* 0x007BE066: je 0x7be078 */
L_007BE06C:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(ebp + (-0x30)) = MEM32(ebp + (-0x30)) & 0xFFFFFFFEu; /* 0x007BE06C: and dword ptr [ebp - 0x30], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x48)); /* 0x007BE070: mov ecx, dword ptr [ebp - 0x48] */
    goto L_0040A000; /* 0x007BE073: jmp 0x40a000 */
L_007BE078:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007BE078: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE079(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE079u);

L_007BE079:
    ecx = ebp + (-0x2C); /* 0x007BE079: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x007BE07C: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE081(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE081u);

    goto L_007BE081;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BE081:
    edx = MEM32(esp + 0x8); /* 0x007BE081: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BE085: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x50)); /* 0x007BE088: mov ecx, dword ptr [edx - 0x50] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BE08B: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BE08D: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x8)); /* 0x007BE092: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BE095: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BE097: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00847C78u; /* 0x007BE09C: mov eax, 0x847c78 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BE0A1: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BE0B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE0B0u);

L_007BE0B0:
    ecx = MEM32(ebp + (-0xB4)); /* 0x007BE0B0: mov ecx, dword ptr [ebp - 0xb4] */
    goto L_0040A000; /* 0x007BE0B6: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE0BB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE0BBu);

L_007BE0BB:
    ecx = MEM32(ebp + (-0xB0)); /* 0x007BE0BB: mov ecx, dword ptr [ebp - 0xb0] */
    goto L_0040A000; /* 0x007BE0C1: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE0C6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE0C6u);

L_007BE0C6:
    ecx = MEM32(ebp + (-0xA4)); /* 0x007BE0C6: mov ecx, dword ptr [ebp - 0xa4] */
    goto L_0040A000; /* 0x007BE0CC: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE0D1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE0D1u);

L_007BE0D1:
    ecx = MEM32(ebp + (-0xAC)); /* 0x007BE0D1: mov ecx, dword ptr [ebp - 0xac] */
    goto L_0040A000; /* 0x007BE0D7: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE0DC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE0DCu);

L_007BE0DC:
    eax = MEM32(ebp + (-0xA0)); /* 0x007BE0DC: mov eax, dword ptr [ebp - 0xa0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x007BE0E2: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007BE0FD; /* 0x007BE0E5: je 0x7be0fd */
L_007BE0EB:
    _flag_a = (uint32_t)(MEM32(ebp + (-0xA0))); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(ebp + (-0xA0)) = MEM32(ebp + (-0xA0)) & 0xFFFFFFFEu; /* 0x007BE0EB: and dword ptr [ebp - 0xa0], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0xA8)); /* 0x007BE0F2: mov ecx, dword ptr [ebp - 0xa8] */
    goto L_0040A000; /* 0x007BE0F8: jmp 0x40a000 */
L_007BE0FD:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007BE0FD: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE0FE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE0FEu);

L_007BE0FE:
    ecx = ebp + (-0x64); /* 0x007BE0FE: lea ecx, [ebp - 0x64] */
    goto L_0040A000; /* 0x007BE101: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE106(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE106u);

L_007BE106:
    ecx = ebp + (-0x4C); /* 0x007BE106: lea ecx, [ebp - 0x4c] */
    goto L_0040A000; /* 0x007BE109: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE10E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE10Eu);

L_007BE10E:
    ecx = ebp + (-0x94); /* 0x007BE10E: lea ecx, [ebp - 0x94] */
    goto L_0040A000; /* 0x007BE114: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE119(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE119u);

L_007BE119:
    ecx = ebp + (-0x7C); /* 0x007BE119: lea ecx, [ebp - 0x7c] */
    goto L_0040A000; /* 0x007BE11C: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE121(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE121u);

L_007BE121:
    ecx = ebp + (-0x4C); /* 0x007BE121: lea ecx, [ebp - 0x4c] */
    goto L_0040A000; /* 0x007BE124: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE129(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE129u);

L_007BE129:
    ecx = ebp + (-0x64); /* 0x007BE129: lea ecx, [ebp - 0x64] */
    goto L_0040A000; /* 0x007BE12C: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE131(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE131u);

    goto L_007BE131;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BE131:
    edx = MEM32(esp + 0x8); /* 0x007BE131: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BE135: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xB8)); /* 0x007BE138: mov ecx, dword ptr [edx - 0xb8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BE13E: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BE140: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x8)); /* 0x007BE145: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BE148: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BE14A: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00847CD0u; /* 0x007BE14F: mov eax, 0x847cd0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BE154: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BE160(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE160u);

L_007BE160:
    ecx = MEM32(ebp + (-0x74)); /* 0x007BE160: mov ecx, dword ptr [ebp - 0x74] */
    goto L_0040A000; /* 0x007BE163: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE168(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE168u);

L_007BE168:
    ecx = MEM32(ebp + (-0x64)); /* 0x007BE168: mov ecx, dword ptr [ebp - 0x64] */
    goto L_0040A000; /* 0x007BE16B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE170(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE170u);

L_007BE170:
    ecx = MEM32(ebp + (-0x6C)); /* 0x007BE170: mov ecx, dword ptr [ebp - 0x6c] */
    goto L_0040A000; /* 0x007BE173: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE178(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE178u);

L_007BE178:
    ecx = MEM32(ebp + (-0x68)); /* 0x007BE178: mov ecx, dword ptr [ebp - 0x68] */
    goto L_0040A000; /* 0x007BE17B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE180(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE180u);

L_007BE180:
    ecx = MEM32(ebp + (-0x68)); /* 0x007BE180: mov ecx, dword ptr [ebp - 0x68] */
    goto L_0040A000; /* 0x007BE183: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE188(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE188u);

L_007BE188:
    ecx = MEM32(ebp + (-0x6C)); /* 0x007BE188: mov ecx, dword ptr [ebp - 0x6c] */
    goto L_0040A000; /* 0x007BE18B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE190(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE190u);

L_007BE190:
    ecx = MEM32(ebp + (-0x64)); /* 0x007BE190: mov ecx, dword ptr [ebp - 0x64] */
    goto L_0040A000; /* 0x007BE193: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE198(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE198u);

L_007BE198:
    ecx = MEM32(ebp + (-0x74)); /* 0x007BE198: mov ecx, dword ptr [ebp - 0x74] */
    goto L_0040A000; /* 0x007BE19B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE1A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE1A0u);

L_007BE1A0:
    ecx = ebp + (-0x28); /* 0x007BE1A0: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007BE1A3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE1A8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE1A8u);

L_007BE1A8:
    eax = MEM32(ebp + (-0x60)); /* 0x007BE1A8: mov eax, dword ptr [ebp - 0x60] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x007BE1AB: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007BE1C0; /* 0x007BE1AE: je 0x7be1c0 */
L_007BE1B4:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x60))); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(ebp + (-0x60)) = MEM32(ebp + (-0x60)) & 0xFFFFFFFEu; /* 0x007BE1B4: and dword ptr [ebp - 0x60], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x78)); /* 0x007BE1B8: mov ecx, dword ptr [ebp - 0x78] */
    goto L_0040A000; /* 0x007BE1BB: jmp 0x40a000 */
L_007BE1C0:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007BE1C0: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE1C1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE1C1u);

L_007BE1C1:
    ecx = ebp + (-0x40); /* 0x007BE1C1: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007BE1C4: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE1C9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE1C9u);

L_007BE1C9:
    ecx = ebp + (-0x58); /* 0x007BE1C9: lea ecx, [ebp - 0x58] */
    goto L_0040A000; /* 0x007BE1CC: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE1D1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE1D1u);

L_007BE1D1:
    ecx = ebp + (-0x28); /* 0x007BE1D1: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007BE1D4: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE1D9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE1D9u);

    goto L_007BE1D9;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BE1D9:
    edx = MEM32(esp + 0x8); /* 0x007BE1D9: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BE1DD: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x7C)); /* 0x007BE1E0: mov ecx, dword ptr [edx - 0x7c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BE1E3: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BE1E5: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007BE1EA: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BE1ED: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BE1EF: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00847D50u; /* 0x007BE1F4: mov eax, 0x847d50 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BE1F9: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BE200(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE200u);

L_007BE200:
    eax = MEM32(ebp + (-0x2C)); /* 0x007BE200: mov eax, dword ptr [ebp - 0x2c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x007BE203: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007BE218; /* 0x007BE206: je 0x7be218 */
L_007BE20C:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(ebp + (-0x2C)) = MEM32(ebp + (-0x2C)) & 0xFFFFFFFEu; /* 0x007BE20C: and dword ptr [ebp - 0x2c], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x30)); /* 0x007BE210: mov ecx, dword ptr [ebp - 0x30] */
    goto L_0040A000; /* 0x007BE213: jmp 0x40a000 */
L_007BE218:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007BE218: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE219(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE219u);

L_007BE219:
    ecx = ebp + (-0x28); /* 0x007BE219: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007BE21C: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE221(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE221u);

    goto L_007BE221;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BE221:
    edx = MEM32(esp + 0x8); /* 0x007BE221: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BE225: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x34)); /* 0x007BE228: mov ecx, dword ptr [edx - 0x34] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BE22B: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BE22D: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007BE232: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BE235: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BE237: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00847DE0u; /* 0x007BE23C: mov eax, 0x847de0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BE241: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BE250(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE250u);

L_007BE250:
    ecx = ebp + (-0x2C); /* 0x007BE250: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x007BE253: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE258(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE258u);

L_007BE258:
    eax = MEM32(ebp + (-0x34)); /* 0x007BE258: mov eax, dword ptr [ebp - 0x34] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x007BE25B: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007BE270; /* 0x007BE25E: je 0x7be270 */
L_007BE264:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(ebp + (-0x34)) = MEM32(ebp + (-0x34)) & 0xFFFFFFFEu; /* 0x007BE264: and dword ptr [ebp - 0x34], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x44)); /* 0x007BE268: mov ecx, dword ptr [ebp - 0x44] */
    goto L_0040A000; /* 0x007BE26B: jmp 0x40a000 */
L_007BE270:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007BE270: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE271(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE271u);

L_007BE271:
    ecx = MEM32(ebp + (-0x38)); /* 0x007BE271: mov ecx, dword ptr [ebp - 0x38] */
    goto L_0040A000; /* 0x007BE274: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE279(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE279u);

L_007BE279:
    ecx = MEM32(ebp + (-0x40)); /* 0x007BE279: mov ecx, dword ptr [ebp - 0x40] */
    goto L_0040A000; /* 0x007BE27C: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE281(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE281u);

L_007BE281:
    ecx = MEM32(ebp + (-0x30)); /* 0x007BE281: mov ecx, dword ptr [ebp - 0x30] */
    goto L_0040A000; /* 0x007BE284: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE289(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE289u);

L_007BE289:
    ecx = MEM32(ebp + (-0x3C)); /* 0x007BE289: mov ecx, dword ptr [ebp - 0x3c] */
    goto L_0040A000; /* 0x007BE28C: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE291(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE291u);

    goto L_007BE291;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BE291:
    edx = MEM32(esp + 0x8); /* 0x007BE291: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BE295: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x48)); /* 0x007BE298: mov ecx, dword ptr [edx - 0x48] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BE29B: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BE29D: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x8)); /* 0x007BE2A2: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BE2A5: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BE2A7: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00847E14u; /* 0x007BE2AC: mov eax, 0x847e14 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BE2B1: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BE2C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE2C0u);

L_007BE2C0:
    ecx = MEM32(ebp + (-0x30)); /* 0x007BE2C0: mov ecx, dword ptr [ebp - 0x30] */
    goto L_0040A000; /* 0x007BE2C3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE2C8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE2C8u);

L_007BE2C8:
    ecx = MEM32(ebp + (-0x38)); /* 0x007BE2C8: mov ecx, dword ptr [ebp - 0x38] */
    goto L_0040A000; /* 0x007BE2CB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE2D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE2D0u);

L_007BE2D0:
    ecx = MEM32(ebp + (-0x40)); /* 0x007BE2D0: mov ecx, dword ptr [ebp - 0x40] */
    goto L_0040A000; /* 0x007BE2D3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE2D8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE2D8u);

L_007BE2D8:
    ecx = MEM32(ebp + (-0x3C)); /* 0x007BE2D8: mov ecx, dword ptr [ebp - 0x3c] */
    goto L_0040A000; /* 0x007BE2DB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE2E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE2E0u);

L_007BE2E0:
    ecx = ebp + (-0x2C); /* 0x007BE2E0: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x007BE2E3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE2E8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE2E8u);

L_007BE2E8:
    goto L_00409980; /* 0x007BE2E8: jmp 0x409980 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00409980: RECOMP_ITAIL(0x00409980u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}
