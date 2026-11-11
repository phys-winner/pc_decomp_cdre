#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_007BF460(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF460u);

L_007BF460:
    eax = MEM32(ebp + (-0xB8)); /* 0x007BF460: mov eax, dword ptr [ebp - 0xb8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x007BF466: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007BF47E; /* 0x007BF469: je 0x7bf47e */
L_007BF46F:
    _flag_a = (uint32_t)(MEM32(ebp + (-0xB8))); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(ebp + (-0xB8)) = MEM32(ebp + (-0xB8)) & 0xFFFFFFFEu; /* 0x007BF46F: and dword ptr [ebp - 0xb8], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x2C); /* 0x007BF476: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x007BF479: jmp 0x40a000 */
L_007BF47E:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007BF47E: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF47F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF47Fu);

L_007BF47F:
    ecx = ebp + (-0x74); /* 0x007BF47F: lea ecx, [ebp - 0x74] */
    goto L_0040A000; /* 0x007BF482: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF487(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF487u);

L_007BF487:
    ecx = ebp + (-0x8C); /* 0x007BF487: lea ecx, [ebp - 0x8c] */
    goto L_0040A000; /* 0x007BF48D: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF492(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF492u);

L_007BF492:
    ecx = ebp + (-0x5C); /* 0x007BF492: lea ecx, [ebp - 0x5c] */
    goto L_0040A000; /* 0x007BF495: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF49A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF49Au);

L_007BF49A:
    ecx = ebp + (-0x2C); /* 0x007BF49A: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x007BF49D: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF4A2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF4A2u);

L_007BF4A2:
    ecx = ebp + (-0x5C); /* 0x007BF4A2: lea ecx, [ebp - 0x5c] */
    goto L_0040A000; /* 0x007BF4A5: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF4AA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF4AAu);

L_007BF4AA:
    ecx = ebp + (-0x44); /* 0x007BF4AA: lea ecx, [ebp - 0x44] */
    goto L_0040A000; /* 0x007BF4AD: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF4B2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF4B2u);

L_007BF4B2:
    ecx = ebp + (-0x5C); /* 0x007BF4B2: lea ecx, [ebp - 0x5c] */
    goto L_0040A000; /* 0x007BF4B5: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF4BA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF4BAu);

L_007BF4BA:
    ecx = ebp + (-0x8C); /* 0x007BF4BA: lea ecx, [ebp - 0x8c] */
    goto L_0040A000; /* 0x007BF4C0: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF4C5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF4C5u);

L_007BF4C5:
    ecx = ebp + (-0x74); /* 0x007BF4C5: lea ecx, [ebp - 0x74] */
    goto L_0040A000; /* 0x007BF4C8: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF4CD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF4CDu);

L_007BF4CD:
    ecx = ebp + (-0x5C); /* 0x007BF4CD: lea ecx, [ebp - 0x5c] */
    goto L_0040A000; /* 0x007BF4D0: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF4D5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF4D5u);

L_007BF4D5:
    ecx = ebp + (-0x2C); /* 0x007BF4D5: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x007BF4D8: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF4DD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF4DDu);

L_007BF4DD:
    ecx = ebp + (-0x44); /* 0x007BF4DD: lea ecx, [ebp - 0x44] */
    goto L_0040A000; /* 0x007BF4E0: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF4E5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF4E5u);

L_007BF4E5:
    ecx = ebp + (-0xA4); /* 0x007BF4E5: lea ecx, [ebp - 0xa4] */
    goto L_0040A000; /* 0x007BF4EB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF4F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF4F0u);

    goto L_007BF4F0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BF4F0:
    edx = MEM32(esp + 0x8); /* 0x007BF4F0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BF4F4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xC8)); /* 0x007BF4F7: mov ecx, dword ptr [edx - 0xc8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BF4FD: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BF4FF: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x8)); /* 0x007BF504: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BF507: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BF509: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00848D48u; /* 0x007BF50E: mov eax, 0x848d48 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BF513: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BF520(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF520u);

L_007BF520:
    ecx = ebp + (-0x74); /* 0x007BF520: lea ecx, [ebp - 0x74] */
    goto L_0040A000; /* 0x007BF523: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF528(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF528u);

L_007BF528:
    ecx = ebp + (-0x8C); /* 0x007BF528: lea ecx, [ebp - 0x8c] */
    goto L_0040A000; /* 0x007BF52E: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF533(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF533u);

L_007BF533:
    ecx = MEM32(ebp + (-0xA0)); /* 0x007BF533: mov ecx, dword ptr [ebp - 0xa0] */
    goto L_0040A000; /* 0x007BF539: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF53E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF53Eu);

L_007BF53E:
    ecx = ebp + (-0x2C); /* 0x007BF53E: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x007BF541: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF546(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF546u);

L_007BF546:
    ecx = MEM32(ebp + (-0xA0)); /* 0x007BF546: mov ecx, dword ptr [ebp - 0xa0] */
    goto L_0040A000; /* 0x007BF54C: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF551(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF551u);

L_007BF551:
    ecx = ebp + (-0x8C); /* 0x007BF551: lea ecx, [ebp - 0x8c] */
    goto L_0040A000; /* 0x007BF557: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF55C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF55Cu);

L_007BF55C:
    ecx = ebp + (-0x74); /* 0x007BF55C: lea ecx, [ebp - 0x74] */
    goto L_0040A000; /* 0x007BF55F: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF564(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF564u);

L_007BF564:
    ecx = MEM32(ebp + (-0xA0)); /* 0x007BF564: mov ecx, dword ptr [ebp - 0xa0] */
    goto L_0040A000; /* 0x007BF56A: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF56F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF56Fu);

L_007BF56F:
    ecx = ebp + (-0x44); /* 0x007BF56F: lea ecx, [ebp - 0x44] */
    goto L_0040A000; /* 0x007BF572: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF577(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF577u);

L_007BF577:
    ecx = ebp + (-0x5C); /* 0x007BF577: lea ecx, [ebp - 0x5c] */
    goto L_0040A000; /* 0x007BF57A: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF57F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF57Fu);

L_007BF57F:
    ecx = MEM32(ebp + (-0xA0)); /* 0x007BF57F: mov ecx, dword ptr [ebp - 0xa0] */
    goto L_0040A000; /* 0x007BF585: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF58A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF58Au);

    goto L_007BF58A;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BF58A:
    edx = MEM32(esp + 0x8); /* 0x007BF58A: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0xAC); /* 0x007BF58E: lea eax, [edx - 0xac] */
    ecx = MEM32(edx + (-0xB0)); /* 0x007BF594: mov ecx, dword ptr [edx - 0xb0] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BF59A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BF59C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x007BF5A1: add eax, 0xc */
    _flag_k = FK_ADD;
    ecx = MEM32(edx + (-0x8)); /* 0x007BF5A4: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BF5A7: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BF5A9: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00848DE0u; /* 0x007BF5AE: mov eax, 0x848de0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BF5B3: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BF5C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF5C0u);

L_007BF5C0:
    ecx = ebp + 0xC; /* 0x007BF5C0: lea ecx, [ebp + 0xc] */
    goto L_005F3D00; /* 0x007BF5C3: jmp 0x5f3d00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005F3D00: RECOMP_ITAIL(0x005F3D00u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF5C8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF5C8u);

L_007BF5C8:
    ecx = MEM32(ebp + (-0x14)); /* 0x007BF5C8: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x14u; /* 0x007BF5CB: add ecx, 0x14 */
    _flag_k = FK_ADD;
    goto L_00419790; /* 0x007BF5CE: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF5D3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF5D3u);

L_007BF5D3:
    ecx = MEM32(ebp + (-0x10)); /* 0x007BF5D3: mov ecx, dword ptr [ebp - 0x10] */
    goto L_005F3D00; /* 0x007BF5D6: jmp 0x5f3d00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005F3D00: RECOMP_ITAIL(0x005F3D00u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF5DB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF5DBu);

L_007BF5DB:
    ecx = MEM32(ebp + (-0x14)); /* 0x007BF5DB: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x14u; /* 0x007BF5DE: add ecx, 0x14 */
    _flag_k = FK_ADD;
    goto L_00419790; /* 0x007BF5E1: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF5E6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF5E6u);

L_007BF5E6:
    ecx = MEM32(ebp + 0x8); /* 0x007BF5E6: mov ecx, dword ptr [ebp + 8] */
    goto L_005F3D00; /* 0x007BF5E9: jmp 0x5f3d00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005F3D00: RECOMP_ITAIL(0x005F3D00u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF5EE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF5EEu);

L_007BF5EE:
    ecx = MEM32(ebp + (-0x14)); /* 0x007BF5EE: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x14u; /* 0x007BF5F1: add ecx, 0x14 */
    _flag_k = FK_ADD;
    goto L_00419790; /* 0x007BF5F4: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF5F9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF5F9u);

L_007BF5F9:
    ecx = MEM32(ebp + 0x8); /* 0x007BF5F9: mov ecx, dword ptr [ebp + 8] */
    goto L_005F3D00; /* 0x007BF5FC: jmp 0x5f3d00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005F3D00: RECOMP_ITAIL(0x005F3D00u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF601(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF601u);

L_007BF601:
    ecx = MEM32(ebp + (-0x14)); /* 0x007BF601: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x14u; /* 0x007BF604: add ecx, 0x14 */
    _flag_k = FK_ADD;
    goto L_00419790; /* 0x007BF607: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF60C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF60Cu);

L_007BF60C:
    ecx = MEM32(ebp + 0x8); /* 0x007BF60C: mov ecx, dword ptr [ebp + 8] */
    goto L_005F3D00; /* 0x007BF60F: jmp 0x5f3d00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005F3D00: RECOMP_ITAIL(0x005F3D00u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF614(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF614u);

L_007BF614:
    ecx = MEM32(ebp + (-0x14)); /* 0x007BF614: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x14u; /* 0x007BF617: add ecx, 0x14 */
    _flag_k = FK_ADD;
    goto L_00419790; /* 0x007BF61A: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF61F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF61Fu);

L_007BF61F:
    ecx = MEM32(ebp + 0x8); /* 0x007BF61F: mov ecx, dword ptr [ebp + 8] */
    goto L_005F3D00; /* 0x007BF622: jmp 0x5f3d00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005F3D00: RECOMP_ITAIL(0x005F3D00u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF627(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF627u);

L_007BF627:
    ecx = MEM32(ebp + (-0x14)); /* 0x007BF627: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x14u; /* 0x007BF62A: add ecx, 0x14 */
    _flag_k = FK_ADD;
    goto L_00419790; /* 0x007BF62D: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF632(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF632u);

L_007BF632:
    ecx = MEM32(ebp + 0x8); /* 0x007BF632: mov ecx, dword ptr [ebp + 8] */
    goto L_005F3D00; /* 0x007BF635: jmp 0x5f3d00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005F3D00: RECOMP_ITAIL(0x005F3D00u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF63A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF63Au);

L_007BF63A:
    ecx = ebp + 0x20; /* 0x007BF63A: lea ecx, [ebp + 0x20] */
    goto L_00419790; /* 0x007BF63D: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF642(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF642u);

    goto L_007BF642;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BF642:
    edx = MEM32(esp + 0x8); /* 0x007BF642: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BF646: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x007BF649: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BF64C: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BF64E: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00848EE0u; /* 0x007BF653: mov eax, 0x848ee0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BF658: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BF660(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF660u);

L_007BF660:
    ecx = ebp + 0xC; /* 0x007BF660: lea ecx, [ebp + 0xc] */
    goto L_005F3D00; /* 0x007BF663: jmp 0x5f3d00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005F3D00: RECOMP_ITAIL(0x005F3D00u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF668(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF668u);

L_007BF668:
    ecx = ebp + 0x20; /* 0x007BF668: lea ecx, [ebp + 0x20] */
    goto L_00419790; /* 0x007BF66B: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF670(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF670u);

    goto L_007BF670;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BF670:
    edx = MEM32(esp + 0x8); /* 0x007BF670: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BF674: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x2C)); /* 0x007BF677: mov ecx, dword ptr [edx - 0x2c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BF67A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BF67C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00848F78u; /* 0x007BF681: mov eax, 0x848f78 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BF686: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BF690(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF690u);

L_007BF690:
    ecx = ebp + 0xC; /* 0x007BF690: lea ecx, [ebp + 0xc] */
    goto L_005F3D00; /* 0x007BF693: jmp 0x5f3d00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005F3D00: RECOMP_ITAIL(0x005F3D00u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF698(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF698u);

L_007BF698:
    ecx = ebp + (-0xFC); /* 0x007BF698: lea ecx, [ebp - 0xfc] */
    goto L_005DBAA0; /* 0x007BF69E: jmp 0x5dbaa0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005DBAA0: RECOMP_ITAIL(0x005DBAA0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF6A3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF6A3u);

L_007BF6A3:
    ecx = ebp + (-0x100); /* 0x007BF6A3: lea ecx, [ebp - 0x100] */
    goto L_005D6DF0; /* 0x007BF6A9: jmp 0x5d6df0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005D6DF0: RECOMP_ITAIL(0x005D6DF0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF6AE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF6AEu);

L_007BF6AE:
    ecx = ebp + (-0xE8); /* 0x007BF6AE: lea ecx, [ebp - 0xe8] */
    goto L_005DD3E0; /* 0x007BF6B4: jmp 0x5dd3e0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005DD3E0: RECOMP_ITAIL(0x005DD3E0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF6B9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF6B9u);

L_007BF6B9:
    ecx = ebp + 0x20; /* 0x007BF6B9: lea ecx, [ebp + 0x20] */
    goto L_00419790; /* 0x007BF6BC: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF6C1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF6C1u);

    goto L_007BF6C1;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BF6C1:
    edx = MEM32(esp + 0x8); /* 0x007BF6C1: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BF6C5: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x114)); /* 0x007BF6C8: mov ecx, dword ptr [edx - 0x114] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BF6CE: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BF6D0: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007BF6D5: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BF6D8: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BF6DA: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00848FF0u; /* 0x007BF6DF: mov eax, 0x848ff0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BF6E4: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BF6F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF6F0u);

L_007BF6F0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007BF6F0: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xCCu; /* 0x007BF6F3: add ecx, 0xcc */
    _flag_k = FK_ADD;
    goto L_00419790; /* 0x007BF6F9: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF6FE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF6FEu);

    goto L_007BF6FE;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BF6FE:
    edx = MEM32(esp + 0x8); /* 0x007BF6FE: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BF702: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x8)); /* 0x007BF705: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BF708: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BF70A: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0084903Cu; /* 0x007BF70F: mov eax, 0x84903c */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BF714: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BF720(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF720u);

L_007BF720:
    ecx = ebp + 0xC; /* 0x007BF720: lea ecx, [ebp + 0xc] */
    goto L_005F3D00; /* 0x007BF723: jmp 0x5f3d00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005F3D00: RECOMP_ITAIL(0x005F3D00u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF728(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF728u);

L_007BF728:
    ecx = ebp + (-0x100); /* 0x007BF728: lea ecx, [ebp - 0x100] */
    goto L_005DBAA0; /* 0x007BF72E: jmp 0x5dbaa0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005DBAA0: RECOMP_ITAIL(0x005DBAA0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF733(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF733u);

L_007BF733:
    ecx = ebp + (-0x104); /* 0x007BF733: lea ecx, [ebp - 0x104] */
    goto L_005D6DF0; /* 0x007BF739: jmp 0x5d6df0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005D6DF0: RECOMP_ITAIL(0x005D6DF0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF73E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF73Eu);

L_007BF73E:
    ecx = ebp + (-0xE8); /* 0x007BF73E: lea ecx, [ebp - 0xe8] */
    goto L_005DD3E0; /* 0x007BF744: jmp 0x5dd3e0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005DD3E0: RECOMP_ITAIL(0x005DD3E0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF749(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF749u);

L_007BF749:
    ecx = MEM32(ebp + (-0xF0)); /* 0x007BF749: mov ecx, dword ptr [ebp - 0xf0] */
    goto L_0040A000; /* 0x007BF74F: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF754(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF754u);

L_007BF754:
    ecx = MEM32(ebp + (-0xEC)); /* 0x007BF754: mov ecx, dword ptr [ebp - 0xec] */
    goto L_0040A000; /* 0x007BF75A: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF75F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF75Fu);

L_007BF75F:
    ecx = ebp + (-0x1C); /* 0x007BF75F: lea ecx, [ebp - 0x1c] */
    goto L_00419790; /* 0x007BF762: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF767(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF767u);

L_007BF767:
    ecx = ebp + (-0x1C); /* 0x007BF767: lea ecx, [ebp - 0x1c] */
    goto L_00419790; /* 0x007BF76A: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF76F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF76Fu);

L_007BF76F:
    ecx = ebp + (-0x1C); /* 0x007BF76F: lea ecx, [ebp - 0x1c] */
    goto L_00419790; /* 0x007BF772: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF777(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF777u);

L_007BF777:
    ecx = ebp + (-0x100); /* 0x007BF777: lea ecx, [ebp - 0x100] */
    goto L_005DBAA0; /* 0x007BF77D: jmp 0x5dbaa0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005DBAA0: RECOMP_ITAIL(0x005DBAA0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF782(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF782u);

L_007BF782:
    ecx = ebp + 0x20; /* 0x007BF782: lea ecx, [ebp + 0x20] */
    goto L_00419790; /* 0x007BF785: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF78A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF78Au);

    goto L_007BF78A;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BF78A:
    edx = MEM32(esp + 0x8); /* 0x007BF78A: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BF78E: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x20C)); /* 0x007BF791: mov ecx, dword ptr [edx - 0x20c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BF797: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BF799: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007BF79E: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BF7A1: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BF7A3: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00849068u; /* 0x007BF7A8: mov eax, 0x849068 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BF7AD: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BF7C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF7C0u);

L_007BF7C0:
    ecx = ebp + (-0xEC); /* 0x007BF7C0: lea ecx, [ebp - 0xec] */
    goto L_005DD3E0; /* 0x007BF7C6: jmp 0x5dd3e0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005DD3E0: RECOMP_ITAIL(0x005DD3E0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF7CB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF7CBu);

L_007BF7CB:
    ecx = ebp + (-0x20); /* 0x007BF7CB: lea ecx, [ebp - 0x20] */
    goto L_00419790; /* 0x007BF7CE: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF7D3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF7D3u);

    goto L_007BF7D3;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BF7D3:
    edx = MEM32(esp + 0x8); /* 0x007BF7D3: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BF7D7: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x150)); /* 0x007BF7DA: mov ecx, dword ptr [edx - 0x150] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BF7E0: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BF7E2: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x8)); /* 0x007BF7E7: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BF7EA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BF7EC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00849118u; /* 0x007BF7F1: mov eax, 0x849118 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BF7F6: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BF800(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF800u);

L_007BF800:
    ecx = ebp + (-0xF0); /* 0x007BF800: lea ecx, [ebp - 0xf0] */
    goto L_005DD3E0; /* 0x007BF806: jmp 0x5dd3e0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005DD3E0: RECOMP_ITAIL(0x005DD3E0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF80B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF80Bu);

L_007BF80B:
    ecx = ebp + (-0x24); /* 0x007BF80B: lea ecx, [ebp - 0x24] */
    goto L_00419790; /* 0x007BF80E: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF813(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF813u);

    goto L_007BF813;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BF813:
    edx = MEM32(esp + 0x8); /* 0x007BF813: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x194); /* 0x007BF817: lea eax, [edx - 0x194] */
    ecx = MEM32(edx + (-0x198)); /* 0x007BF81D: mov ecx, dword ptr [edx - 0x198] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BF823: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BF825: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x007BF82A: add eax, 0xc */
    _flag_k = FK_ADD;
    ecx = MEM32(edx + (-0x8)); /* 0x007BF82D: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BF830: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BF832: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008491F0u; /* 0x007BF837: mov eax, 0x8491f0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BF83C: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BF850(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF850u);

L_007BF850:
    ecx = ebp + (-0xEC); /* 0x007BF850: lea ecx, [ebp - 0xec] */
    goto L_005DD3E0; /* 0x007BF856: jmp 0x5dd3e0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005DD3E0: RECOMP_ITAIL(0x005DD3E0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF85B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF85Bu);

L_007BF85B:
    ecx = MEM32(ebp + (-0xF8)); /* 0x007BF85B: mov ecx, dword ptr [ebp - 0xf8] */
    goto L_0040A000; /* 0x007BF861: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF866(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF866u);

L_007BF866:
    ecx = MEM32(ebp + (-0xFC)); /* 0x007BF866: mov ecx, dword ptr [ebp - 0xfc] */
    goto L_0040A000; /* 0x007BF86C: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF871(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF871u);

L_007BF871:
    ecx = ebp + (-0x20); /* 0x007BF871: lea ecx, [ebp - 0x20] */
    goto L_00419790; /* 0x007BF874: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF879(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF879u);

    goto L_007BF879;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BF879:
    edx = MEM32(esp + 0x8); /* 0x007BF879: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BF87D: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x100)); /* 0x007BF880: mov ecx, dword ptr [edx - 0x100] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BF886: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BF888: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x8)); /* 0x007BF88D: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BF890: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BF892: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008492B8u; /* 0x007BF897: mov eax, 0x8492b8 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BF89C: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BF8B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF8B0u);

L_007BF8B0:
    ecx = MEM32(ebp + (-0x170)); /* 0x007BF8B0: mov ecx, dword ptr [ebp - 0x170] */
    goto L_0040A000; /* 0x007BF8B6: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF8BB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF8BBu);

L_007BF8BB:
    ecx = MEM32(ebp + (-0x94)); /* 0x007BF8BB: mov ecx, dword ptr [ebp - 0x94] */
    goto L_0040A000; /* 0x007BF8C1: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF8C6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF8C6u);

    goto L_007BF8C6;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BF8C6:
    edx = MEM32(esp + 0x8); /* 0x007BF8C6: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x1B4); /* 0x007BF8CA: lea eax, [edx - 0x1b4] */
    ecx = MEM32(edx + (-0x1B8)); /* 0x007BF8D0: mov ecx, dword ptr [edx - 0x1b8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BF8D6: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BF8D8: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x007BF8DD: add eax, 8 */
    _flag_k = FK_ADD;
    ecx = MEM32(edx + (-0x8)); /* 0x007BF8E0: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BF8E3: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BF8E5: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008492FCu; /* 0x007BF8EA: mov eax, 0x8492fc */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BF8EF: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BF900(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF900u);

L_007BF900:
    ecx = ebp + (-0x1C); /* 0x007BF900: lea ecx, [ebp - 0x1c] */
    goto L_00419790; /* 0x007BF903: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF908(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF908u);

L_007BF908:
    ecx = ebp + (-0x30); /* 0x007BF908: lea ecx, [ebp - 0x30] */
    goto L_005F3D00; /* 0x007BF90B: jmp 0x5f3d00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005F3D00: RECOMP_ITAIL(0x005F3D00u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF910(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF910u);

L_007BF910:
    ecx = MEM32(ebp + (-0x64)); /* 0x007BF910: mov ecx, dword ptr [ebp - 0x64] */
    goto L_0040A000; /* 0x007BF913: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF918(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF918u);

L_007BF918:
    ecx = MEM32(ebp + (-0x6C)); /* 0x007BF918: mov ecx, dword ptr [ebp - 0x6c] */
    goto L_0040A000; /* 0x007BF91B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF920(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF920u);

L_007BF920:
    ecx = MEM32(ebp + (-0x6C)); /* 0x007BF920: mov ecx, dword ptr [ebp - 0x6c] */
    goto L_0040A000; /* 0x007BF923: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF928(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF928u);

L_007BF928:
    ecx = MEM32(ebp + (-0x70)); /* 0x007BF928: mov ecx, dword ptr [ebp - 0x70] */
    goto L_0040A000; /* 0x007BF92B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF930(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF930u);

L_007BF930:
    ecx = MEM32(ebp + (-0x64)); /* 0x007BF930: mov ecx, dword ptr [ebp - 0x64] */
    goto L_0040A000; /* 0x007BF933: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF938(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF938u);

L_007BF938:
    ecx = MEM32(ebp + (-0x6C)); /* 0x007BF938: mov ecx, dword ptr [ebp - 0x6c] */
    goto L_0040A000; /* 0x007BF93B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF940(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF940u);

L_007BF940:
    ecx = ebp + (-0x1C); /* 0x007BF940: lea ecx, [ebp - 0x1c] */
    goto L_00419790; /* 0x007BF943: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF948(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF948u);

    goto L_007BF948;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BF948:
    edx = MEM32(esp + 0x8); /* 0x007BF948: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x7C); /* 0x007BF94C: lea eax, [edx - 0x7c] */
    ecx = MEM32(edx + (-0x80)); /* 0x007BF94F: mov ecx, dword ptr [edx - 0x80] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BF952: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BF954: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00849330u; /* 0x007BF959: mov eax, 0x849330 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BF95E: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BF970(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF970u);

L_007BF970:
    ecx = ebp + (-0x28); /* 0x007BF970: lea ecx, [ebp - 0x28] */
    goto L_005DBAA0; /* 0x007BF973: jmp 0x5dbaa0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005DBAA0: RECOMP_ITAIL(0x005DBAA0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF978(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF978u);

L_007BF978:
    ecx = ebp + (-0x2C); /* 0x007BF978: lea ecx, [ebp - 0x2c] */
    goto L_005D6DF0; /* 0x007BF97B: jmp 0x5d6df0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005D6DF0: RECOMP_ITAIL(0x005D6DF0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF980(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF980u);

L_007BF980:
    ecx = ebp + (-0x28); /* 0x007BF980: lea ecx, [ebp - 0x28] */
    goto L_005DBAA0; /* 0x007BF983: jmp 0x5dbaa0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005DBAA0: RECOMP_ITAIL(0x005DBAA0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF988(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF988u);

L_007BF988:
    ecx = ebp + (-0x2C); /* 0x007BF988: lea ecx, [ebp - 0x2c] */
    goto L_005D6DF0; /* 0x007BF98B: jmp 0x5d6df0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005D6DF0: RECOMP_ITAIL(0x005D6DF0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF990(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF990u);

L_007BF990:
    ecx = ebp + (-0x28); /* 0x007BF990: lea ecx, [ebp - 0x28] */
    goto L_005DBAA0; /* 0x007BF993: jmp 0x5dbaa0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005DBAA0: RECOMP_ITAIL(0x005DBAA0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF998(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF998u);

    goto L_007BF998;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BF998:
    edx = MEM32(esp + 0x8); /* 0x007BF998: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BF99C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x34)); /* 0x007BF99F: mov ecx, dword ptr [edx - 0x34] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BF9A2: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BF9A4: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00849400u; /* 0x007BF9A9: mov eax, 0x849400 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BF9AE: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BF9C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF9C0u);

L_007BF9C0:
    ecx = ebp + (-0x18); /* 0x007BF9C0: lea ecx, [ebp - 0x18] */
    goto L_005DBAA0; /* 0x007BF9C3: jmp 0x5dbaa0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005DBAA0: RECOMP_ITAIL(0x005DBAA0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF9C8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF9C8u);

L_007BF9C8:
    ecx = ebp + (-0x1C); /* 0x007BF9C8: lea ecx, [ebp - 0x1c] */
    goto L_005D6DF0; /* 0x007BF9CB: jmp 0x5d6df0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005D6DF0: RECOMP_ITAIL(0x005D6DF0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF9D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF9D0u);

    goto L_007BF9D0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BF9D0:
    edx = MEM32(esp + 0x8); /* 0x007BF9D0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BF9D4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x1C)); /* 0x007BF9D7: mov ecx, dword ptr [edx - 0x1c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BF9DA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BF9DC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0084944Cu; /* 0x007BF9E1: mov eax, 0x84944c */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BF9E6: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BF9F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF9F0u);

L_007BF9F0:
    ecx = ebp + 0xC; /* 0x007BF9F0: lea ecx, [ebp + 0xc] */
    goto L_005F3D00; /* 0x007BF9F3: jmp 0x5f3d00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005F3D00: RECOMP_ITAIL(0x005F3D00u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BF9F8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BF9F8u);

L_007BF9F8:
    ecx = ebp + (-0x28); /* 0x007BF9F8: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007BF9FB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}
