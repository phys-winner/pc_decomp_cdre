#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_0078E3F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E3F0u);

L_0078E3F0:
    ecx = MEM32(ebp + (-0x40)); /* 0x0078E3F0: mov ecx, dword ptr [ebp - 0x40] */
    goto L_00498A70; /* 0x0078E3F3: jmp 0x498a70 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00498A70: RECOMP_ITAIL(0x00498A70u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078E3F8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E3F8u);

L_0078E3F8:
    ecx = ebp + (-0x2C); /* 0x0078E3F8: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x0078E3FB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078E400(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E400u);

    goto L_0078E400;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0078E400:
    edx = MEM32(esp + 0x8); /* 0x0078E400: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0078E404: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x40)); /* 0x0078E407: mov ecx, dword ptr [edx - 0x40] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078E40A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078E40C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x8)); /* 0x0078E411: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078E414: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078E416: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00819508u; /* 0x0078E41B: mov eax, 0x819508 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0078E420: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0078E430(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E430u);

L_0078E430:
    ecx = MEM32(ebp + (-0x2C)); /* 0x0078E430: mov ecx, dword ptr [ebp - 0x2c] */
    goto L_00498A70; /* 0x0078E433: jmp 0x498a70 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00498A70: RECOMP_ITAIL(0x00498A70u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078E438(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E438u);

L_0078E438:
    ecx = ebp + (-0x28); /* 0x0078E438: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x0078E43B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078E440(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E440u);

L_0078E440:
    ecx = MEM32(ebp + (-0x2C)); /* 0x0078E440: mov ecx, dword ptr [ebp - 0x2c] */
    goto L_004844F0; /* 0x0078E443: jmp 0x4844f0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_004844F0: RECOMP_ITAIL(0x004844F0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078E448(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E448u);

    goto L_0078E448;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0078E448:
    edx = MEM32(esp + 0x8); /* 0x0078E448: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0078E44C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x2C)); /* 0x0078E44F: mov ecx, dword ptr [edx - 0x2c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078E452: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078E454: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x0078E459: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078E45C: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078E45E: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00819570u; /* 0x0078E463: mov eax, 0x819570 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0078E468: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0078E470(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E470u);

L_0078E470:
    eax = MEM32(ebp + (-0x10)); /* 0x0078E470: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0078E473: push eax */
    RECOMP_ICALL(MEM32(0x7CC6A8)); /* 0x0078E474: call dword ptr [0x7cc6a8] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0078E47A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0078E47B: ret  */
    RECOMP_REGS_OUT();
}

void sub_0078E47C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E47Cu);

    goto L_0078E47C;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0078E47C:
    edx = MEM32(esp + 0x8); /* 0x0078E47C: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0078E480: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x10)); /* 0x0078E483: mov ecx, dword ptr [edx - 0x10] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078E486: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078E488: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008195ACu; /* 0x0078E48D: mov eax, 0x8195ac */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0078E492: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0078E4A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E4A0u);

L_0078E4A0:
    ecx = MEM32(ebp + (-0x18)); /* 0x0078E4A0: mov ecx, dword ptr [ebp - 0x18] */
    goto L_0040A000; /* 0x0078E4A3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078E4A8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E4A8u);

L_0078E4A8:
    ecx = MEM32(ebp + (-0x14)); /* 0x0078E4A8: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040A000; /* 0x0078E4AB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078E4B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E4B0u);

    goto L_0078E4B0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0078E4B0:
    edx = MEM32(esp + 0x8); /* 0x0078E4B0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0078E4B4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x1C)); /* 0x0078E4B7: mov ecx, dword ptr [edx - 0x1c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078E4BA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078E4BC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008195E8u; /* 0x0078E4C1: mov eax, 0x8195e8 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0078E4C6: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0078E4D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E4D0u);

L_0078E4D0:
    ecx = ebp + 0x20; /* 0x0078E4D0: lea ecx, [ebp + 0x20] */
    goto L_0040A000; /* 0x0078E4D3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078E4D8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E4D8u);

L_0078E4D8:
    ecx = ebp + 0x8; /* 0x0078E4D8: lea ecx, [ebp + 8] */
    goto L_0040A000; /* 0x0078E4DB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078E4E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E4E0u);

    goto L_0078E4E0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0078E4E0:
    edx = MEM32(esp + 0x8); /* 0x0078E4E0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0078E4E4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xC)); /* 0x0078E4E7: mov ecx, dword ptr [edx - 0xc] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078E4EA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078E4EC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0081961Cu; /* 0x0078E4F1: mov eax, 0x81961c */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0078E4F6: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0078E500(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E500u);

L_0078E500:
    eax = MEM32(0x9281A0); /* 0x0078E500: mov eax, dword ptr [0x9281a0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    eax = eax & 0xFFFFFFFEu; /* 0x0078E505: and eax, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x9281A0) = eax; /* 0x0078E508: mov dword ptr [0x9281a0], eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0078E50D: ret  */
    RECOMP_REGS_OUT();
}

void sub_0078E50E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E50Eu);

    goto L_0078E50E;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0078E50E:
    edx = MEM32(esp + 0x8); /* 0x0078E50E: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0078E512: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x2C)); /* 0x0078E515: mov ecx, dword ptr [edx - 0x2c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078E518: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078E51A: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00819650u; /* 0x0078E51F: mov eax, 0x819650 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0078E524: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0078E530(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E530u);

L_0078E530:
    ecx = MEM32(ebp + (-0x88)); /* 0x0078E530: mov ecx, dword ptr [ebp - 0x88] */
    goto L_0040A000; /* 0x0078E536: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078E53B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E53Bu);

L_0078E53B:
    ecx = MEM32(ebp + (-0x7C)); /* 0x0078E53B: mov ecx, dword ptr [ebp - 0x7c] */
    goto L_0040A000; /* 0x0078E53E: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078E543(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E543u);

L_0078E543:
    ecx = MEM32(ebp + (-0x80)); /* 0x0078E543: mov ecx, dword ptr [ebp - 0x80] */
    goto L_0040A000; /* 0x0078E546: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078E54B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E54Bu);

L_0078E54B:
    ecx = MEM32(ebp + (-0x84)); /* 0x0078E54B: mov ecx, dword ptr [ebp - 0x84] */
    goto L_0040A000; /* 0x0078E551: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078E556(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E556u);

L_0078E556:
    ecx = ebp + (-0x2C); /* 0x0078E556: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x0078E559: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078E55E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E55Eu);

L_0078E55E:
    ecx = ebp + (-0x5C); /* 0x0078E55E: lea ecx, [ebp - 0x5c] */
    goto L_0040A000; /* 0x0078E561: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078E566(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E566u);

L_0078E566:
    ecx = ebp + (-0x44); /* 0x0078E566: lea ecx, [ebp - 0x44] */
    goto L_0040A000; /* 0x0078E569: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078E56E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E56Eu);

L_0078E56E:
    ecx = ebp + (-0x74); /* 0x0078E56E: lea ecx, [ebp - 0x74] */
    goto L_0040A000; /* 0x0078E571: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078E576(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E576u);

    goto L_0078E576;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0078E576:
    edx = MEM32(esp + 0x8); /* 0x0078E576: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x94); /* 0x0078E57A: lea eax, [edx - 0x94] */
    ecx = MEM32(edx + (-0x98)); /* 0x0078E580: mov ecx, dword ptr [edx - 0x98] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078E586: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078E588: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x0078E58D: add eax, 0xc */
    _flag_k = FK_ADD;
    ecx = MEM32(edx + (-0x8)); /* 0x0078E590: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078E593: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078E595: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00819680u; /* 0x0078E59A: mov eax, 0x819680 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0078E59F: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0078E5B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E5B0u);

L_0078E5B0:
    ecx = MEM32(ebp + (-0xEC)); /* 0x0078E5B0: mov ecx, dword ptr [ebp - 0xec] */
    goto L_0040A000; /* 0x0078E5B6: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078E5BB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E5BBu);

L_0078E5BB:
    ecx = MEM32(ebp + (-0xE8)); /* 0x0078E5BB: mov ecx, dword ptr [ebp - 0xe8] */
    goto L_0040A000; /* 0x0078E5C1: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078E5C6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E5C6u);

L_0078E5C6:
    ecx = ebp + (-0xE0); /* 0x0078E5C6: lea ecx, [ebp - 0xe0] */
    goto L_0040A000; /* 0x0078E5CC: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078E5D1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E5D1u);

    goto L_0078E5D1;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0078E5D1:
    edx = MEM32(esp + 0x8); /* 0x0078E5D1: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0xF4); /* 0x0078E5D5: lea eax, [edx - 0xf4] */
    ecx = MEM32(edx + (-0xF8)); /* 0x0078E5DB: mov ecx, dword ptr [edx - 0xf8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078E5E1: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078E5E3: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x0078E5E8: add eax, 0xc */
    _flag_k = FK_ADD;
    ecx = MEM32(edx + (-0x38)); /* 0x0078E5EB: mov ecx, dword ptr [edx - 0x38] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078E5EE: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078E5F0: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00819700u; /* 0x0078E5F5: mov eax, 0x819700 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0078E5FA: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0078E600(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E600u);

L_0078E600:
    ecx = ebp + 0x24; /* 0x0078E600: lea ecx, [ebp + 0x24] */
    goto L_0040A000; /* 0x0078E603: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078E608(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E608u);

L_0078E608:
    ecx = ebp + 0xC; /* 0x0078E608: lea ecx, [ebp + 0xc] */
    goto L_0040A000; /* 0x0078E60B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078E610(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E610u);

L_0078E610:
    ecx = MEM32(ebp + (-0x4C)); /* 0x0078E610: mov ecx, dword ptr [ebp - 0x4c] */
    goto L_0040A000; /* 0x0078E613: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078E618(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E618u);

L_0078E618:
    ecx = MEM32(ebp + (-0x50)); /* 0x0078E618: mov ecx, dword ptr [ebp - 0x50] */
    goto L_0040A000; /* 0x0078E61B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078E620(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E620u);

L_0078E620:
    ecx = MEM32(ebp + (-0x54)); /* 0x0078E620: mov ecx, dword ptr [ebp - 0x54] */
    goto L_00497AB0; /* 0x0078E623: jmp 0x497ab0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00497AB0: RECOMP_ITAIL(0x00497AB0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078E628(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E628u);

L_0078E628:
    eax = MEM32(ebp + (-0x50)); /* 0x0078E628: mov eax, dword ptr [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x0078E62B: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0078E62C: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0078E632: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0078E633: ret  */
    RECOMP_REGS_OUT();
}

void sub_0078E634(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E634u);

L_0078E634:
    ecx = MEM32(ebp + (-0x4C)); /* 0x0078E634: mov ecx, dword ptr [ebp - 0x4c] */
    goto L_0040A000; /* 0x0078E637: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078E63C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E63Cu);

L_0078E63C:
    ecx = MEM32(ebp + (-0x5C)); /* 0x0078E63C: mov ecx, dword ptr [ebp - 0x5c] */
    goto L_0040A000; /* 0x0078E63F: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078E644(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E644u);

L_0078E644:
    ecx = MEM32(ebp + (-0x58)); /* 0x0078E644: mov ecx, dword ptr [ebp - 0x58] */
    goto L_0040A000; /* 0x0078E647: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078E64C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E64Cu);

L_0078E64C:
    ecx = ebp + (-0x44); /* 0x0078E64C: lea ecx, [ebp - 0x44] */
    goto L_0040A000; /* 0x0078E64F: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078E654(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E654u);

L_0078E654:
    ecx = ebp + (-0x2C); /* 0x0078E654: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x0078E657: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078E65C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E65Cu);

    goto L_0078E65C;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0078E65C:
    edx = MEM32(esp + 0x8); /* 0x0078E65C: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0078E660: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x60)); /* 0x0078E663: mov ecx, dword ptr [edx - 0x60] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078E666: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078E668: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x8)); /* 0x0078E66D: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078E670: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078E672: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00819740u; /* 0x0078E677: mov eax, 0x819740 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0078E67C: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0078E690(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E690u);

L_0078E690:
    ecx = ebp + 0x8; /* 0x0078E690: lea ecx, [ebp + 8] */
    goto L_0040A000; /* 0x0078E693: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078E698(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E698u);

L_0078E698:
    ecx = MEM32(ebp + (-0x14)); /* 0x0078E698: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040A000; /* 0x0078E69B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078E6A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E6A0u);

L_0078E6A0:
    ecx = MEM32(ebp + (-0x10)); /* 0x0078E6A0: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040A000; /* 0x0078E6A3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078E6A8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E6A8u);

L_0078E6A8:
    ecx = MEM32(ebp + (-0x10)); /* 0x0078E6A8: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040A000; /* 0x0078E6AB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078E6B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E6B0u);

    goto L_0078E6B0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0078E6B0:
    edx = MEM32(esp + 0x8); /* 0x0078E6B0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0078E6B4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x10)); /* 0x0078E6B7: mov ecx, dword ptr [edx - 0x10] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078E6BA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078E6BC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008197E0u; /* 0x0078E6C1: mov eax, 0x8197e0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0078E6C6: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0078E6D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E6D0u);

L_0078E6D0:
    ecx = MEM32(ebp + (-0x10)); /* 0x0078E6D0: mov ecx, dword ptr [ebp - 0x10] */
    goto L_004844F0; /* 0x0078E6D3: jmp 0x4844f0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_004844F0: RECOMP_ITAIL(0x004844F0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078E6D8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E6D8u);

    goto L_0078E6D8;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0078E6D8:
    edx = MEM32(esp + 0x8); /* 0x0078E6D8: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0078E6DC: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x10)); /* 0x0078E6DF: mov ecx, dword ptr [edx - 0x10] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078E6E2: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078E6E4: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00819824u; /* 0x0078E6E9: mov eax, 0x819824 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0078E6EE: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0078E700(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E700u);

L_0078E700:
    ecx = MEM32(ebp + (-0x10)); /* 0x0078E700: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040A000; /* 0x0078E703: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078E708(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E708u);

L_0078E708:
    ecx = MEM32(ebp + (-0x10)); /* 0x0078E708: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x18u; /* 0x0078E70B: add ecx, 0x18 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x0078E70E: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078E713(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E713u);

L_0078E713:
    ecx = MEM32(ebp + (-0x10)); /* 0x0078E713: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x30u; /* 0x0078E716: add ecx, 0x30 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x0078E719: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078E71E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E71Eu);

    goto L_0078E71E;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0078E71E:
    edx = MEM32(esp + 0x8); /* 0x0078E71E: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0078E722: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x10)); /* 0x0078E725: mov ecx, dword ptr [edx - 0x10] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078E728: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078E72A: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00819850u; /* 0x0078E72F: mov eax, 0x819850 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0078E734: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0078E740(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E740u);

L_0078E740:
    ecx = MEM32(ebp + 0x8); /* 0x0078E740: mov ecx, dword ptr [ebp + 8] */
    goto L_0040A000; /* 0x0078E743: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078E748(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E748u);

L_0078E748:
    ecx = MEM32(ebp + (-0x10)); /* 0x0078E748: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040A000; /* 0x0078E74B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078E750(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E750u);

L_0078E750:
    eax = MEM32(ebp + 0x8); /* 0x0078E750: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x0078E753: push eax */
    RECOMP_ICALL(MEM32(0x7CC6A8)); /* 0x0078E754: call dword ptr [0x7cc6a8] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0078E75A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0078E75B: ret  */
    RECOMP_REGS_OUT();
}

void sub_0078E75C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E75Cu);

    goto L_0078E75C;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0078E75C:
    edx = MEM32(esp + 0x8); /* 0x0078E75C: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0078E760: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x0078E763: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078E766: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078E768: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0081988Cu; /* 0x0078E76D: mov eax, 0x81988c */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0078E772: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0078E780(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E780u);

L_0078E780:
    ecx = MEM32(ebp + (-0x10)); /* 0x0078E780: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040A000; /* 0x0078E783: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078E788(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E788u);

L_0078E788:
    ecx = MEM32(ebp + (-0x10)); /* 0x0078E788: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x18u; /* 0x0078E78B: add ecx, 0x18 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x0078E78E: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078E793(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E793u);

L_0078E793:
    ecx = MEM32(ebp + (-0x10)); /* 0x0078E793: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x30u; /* 0x0078E796: add ecx, 0x30 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x0078E799: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078E79E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E79Eu);

    goto L_0078E79E;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0078E79E:
    edx = MEM32(esp + 0x8); /* 0x0078E79E: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0078E7A2: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x8)); /* 0x0078E7A5: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078E7A8: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078E7AA: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008198C8u; /* 0x0078E7AF: mov eax, 0x8198c8 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0078E7B4: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0078E7C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E7C0u);

L_0078E7C0:
    ecx = MEM32(ebp + (-0x18)); /* 0x0078E7C0: mov ecx, dword ptr [ebp - 0x18] */
    goto L_0040A000; /* 0x0078E7C3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078E7C8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E7C8u);

L_0078E7C8:
    ecx = MEM32(ebp + (-0x1C)); /* 0x0078E7C8: mov ecx, dword ptr [ebp - 0x1c] */
    goto L_0040A000; /* 0x0078E7CB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078E7D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E7D0u);

L_0078E7D0:
    ecx = MEM32(ebp + (-0x20)); /* 0x0078E7D0: mov ecx, dword ptr [ebp - 0x20] */
    goto L_0040A000; /* 0x0078E7D3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078E7D8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E7D8u);

L_0078E7D8:
    ecx = MEM32(ebp + (-0x14)); /* 0x0078E7D8: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040A000; /* 0x0078E7DB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078E7E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E7E0u);

    goto L_0078E7E0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0078E7E0:
    edx = MEM32(esp + 0x8); /* 0x0078E7E0: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x1C); /* 0x0078E7E4: lea eax, [edx - 0x1c] */
    ecx = MEM32(edx + (-0x20)); /* 0x0078E7E7: mov ecx, dword ptr [edx - 0x20] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078E7EA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078E7EC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00819904u; /* 0x0078E7F1: mov eax, 0x819904 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0078E7F6: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0078E800(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E800u);

L_0078E800:
    ecx = MEM32(ebp + (-0x1C)); /* 0x0078E800: mov ecx, dword ptr [ebp - 0x1c] */
    goto L_0040A000; /* 0x0078E803: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078E808(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E808u);

L_0078E808:
    ecx = MEM32(ebp + (-0x18)); /* 0x0078E808: mov ecx, dword ptr [ebp - 0x18] */
    goto L_0040A000; /* 0x0078E80B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078E810(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E810u);

L_0078E810:
    ecx = MEM32(ebp + (-0x1C)); /* 0x0078E810: mov ecx, dword ptr [ebp - 0x1c] */
    goto L_0040A000; /* 0x0078E813: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078E818(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E818u);

    goto L_0078E818;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0078E818:
    edx = MEM32(esp + 0x8); /* 0x0078E818: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0078E81C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x20)); /* 0x0078E81F: mov ecx, dword ptr [edx - 0x20] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078E822: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078E824: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00819948u; /* 0x0078E829: mov eax, 0x819948 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0078E82E: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0078E840(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E840u);

L_0078E840:
    ecx = ebp + 0x38; /* 0x0078E840: lea ecx, [ebp + 0x38] */
    goto L_0040A000; /* 0x0078E843: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078E848(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E848u);

L_0078E848:
    ecx = ebp + 0x20; /* 0x0078E848: lea ecx, [ebp + 0x20] */
    goto L_0040A000; /* 0x0078E84B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078E850(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E850u);

L_0078E850:
    ecx = ebp + 0x8; /* 0x0078E850: lea ecx, [ebp + 8] */
    goto L_0040A000; /* 0x0078E853: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078E858(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E858u);

    goto L_0078E858;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0078E858:
    edx = MEM32(esp + 0x8); /* 0x0078E858: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0078E85C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x8)); /* 0x0078E85F: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078E862: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078E864: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00819984u; /* 0x0078E869: mov eax, 0x819984 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0078E86E: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0078E880(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E880u);

L_0078E880:
    ecx = MEM32(ebp + (-0x14)); /* 0x0078E880: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040A000; /* 0x0078E883: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078E888(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E888u);

L_0078E888:
    ecx = MEM32(ebp + (-0x18)); /* 0x0078E888: mov ecx, dword ptr [ebp - 0x18] */
    goto L_0040A000; /* 0x0078E88B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078E890(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E890u);

L_0078E890:
    eax = MEM32(ebp + (-0x10)); /* 0x0078E890: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x0078E893: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0078E8A8; /* 0x0078E896: je 0x78e8a8 */
L_0078E89C:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0xFFFFFFFEu; /* 0x0078E89C: and dword ptr [ebp - 0x10], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x8); /* 0x0078E8A0: mov ecx, dword ptr [ebp + 8] */
    goto L_0040A000; /* 0x0078E8A3: jmp 0x40a000 */
L_0078E8A8:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0078E8A8: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078E8A9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E8A9u);

    goto L_0078E8A9;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0078E8A9:
    edx = MEM32(esp + 0x8); /* 0x0078E8A9: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0078E8AD: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x0078E8B0: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078E8B3: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078E8B5: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008199C0u; /* 0x0078E8BA: mov eax, 0x8199c0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0078E8BF: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0078E8D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E8D0u);

L_0078E8D0:
    ecx = MEM32(ebp + (-0x30)); /* 0x0078E8D0: mov ecx, dword ptr [ebp - 0x30] */
    goto L_0040A000; /* 0x0078E8D3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078E8D8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E8D8u);

L_0078E8D8:
    ecx = MEM32(ebp + (-0x28)); /* 0x0078E8D8: mov ecx, dword ptr [ebp - 0x28] */
    goto L_0040A000; /* 0x0078E8DB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078E8E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E8E0u);

L_0078E8E0:
    ecx = MEM32(ebp + (-0x30)); /* 0x0078E8E0: mov ecx, dword ptr [ebp - 0x30] */
    goto L_0040A000; /* 0x0078E8E3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078E8E8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E8E8u);

L_0078E8E8:
    ecx = MEM32(ebp + (-0x28)); /* 0x0078E8E8: mov ecx, dword ptr [ebp - 0x28] */
    goto L_0040A000; /* 0x0078E8EB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078E8F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E8F0u);

L_0078E8F0:
    ecx = MEM32(ebp + (-0x30)); /* 0x0078E8F0: mov ecx, dword ptr [ebp - 0x30] */
    goto L_0040A000; /* 0x0078E8F3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078E8F8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E8F8u);

L_0078E8F8:
    ecx = MEM32(ebp + (-0x28)); /* 0x0078E8F8: mov ecx, dword ptr [ebp - 0x28] */
    goto L_0040A000; /* 0x0078E8FB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078E900(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E900u);

L_0078E900:
    eax = MEM32(ebp + (-0x28)); /* 0x0078E900: mov eax, dword ptr [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x0078E903: push eax */
    RECOMP_ICALL(MEM32(0x7CC6A8)); /* 0x0078E904: call dword ptr [0x7cc6a8] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0078E90A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0078E90B: ret  */
    RECOMP_REGS_OUT();
}

void sub_0078E90C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E90Cu);

L_0078E90C:
    eax = MEM32(ebp + (-0x2C)); /* 0x0078E90C: mov eax, dword ptr [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x0078E90F: push eax */
    RECOMP_ICALL(MEM32(0x7CC6A8)); /* 0x0078E910: call dword ptr [0x7cc6a8] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0078E916: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0078E917: ret  */
    RECOMP_REGS_OUT();
}

void sub_0078E918(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E918u);

L_0078E918:
    eax = MEM32(ebp + (-0x2C)); /* 0x0078E918: mov eax, dword ptr [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x0078E91B: push eax */
    RECOMP_ICALL(MEM32(0x7CC6A8)); /* 0x0078E91C: call dword ptr [0x7cc6a8] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0078E922: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0078E923: ret  */
    RECOMP_REGS_OUT();
}

void sub_0078E924(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E924u);

    goto L_0078E924;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0078E924:
    edx = MEM32(esp + 0x8); /* 0x0078E924: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0078E928: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x34)); /* 0x0078E92B: mov ecx, dword ptr [edx - 0x34] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078E92E: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078E930: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00819A00u; /* 0x0078E935: mov eax, 0x819a00 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0078E93A: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0078E940(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E940u);

L_0078E940:
    ecx = MEM32(ebp + (-0x18)); /* 0x0078E940: mov ecx, dword ptr [ebp - 0x18] */
    goto L_0040A000; /* 0x0078E943: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078E948(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E948u);

L_0078E948:
    ecx = MEM32(ebp + (-0x14)); /* 0x0078E948: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040A000; /* 0x0078E94B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078E950(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E950u);

L_0078E950:
    ecx = MEM32(ebp + (-0x14)); /* 0x0078E950: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040A000; /* 0x0078E953: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078E958(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E958u);

L_0078E958:
    ecx = MEM32(ebp + (-0x18)); /* 0x0078E958: mov ecx, dword ptr [ebp - 0x18] */
    goto L_0040A000; /* 0x0078E95B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078E960(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E960u);

L_0078E960:
    ecx = MEM32(ebp + (-0x14)); /* 0x0078E960: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040A000; /* 0x0078E963: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078E968(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E968u);

L_0078E968:
    ecx = MEM32(ebp + (-0x18)); /* 0x0078E968: mov ecx, dword ptr [ebp - 0x18] */
    goto L_0040A000; /* 0x0078E96B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078E970(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E970u);

L_0078E970:
    ecx = MEM32(ebp + (-0x14)); /* 0x0078E970: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040A000; /* 0x0078E973: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078E978(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E978u);

L_0078E978:
    ecx = MEM32(ebp + (-0x18)); /* 0x0078E978: mov ecx, dword ptr [ebp - 0x18] */
    goto L_0040A000; /* 0x0078E97B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078E980(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E980u);

    goto L_0078E980;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0078E980:
    edx = MEM32(esp + 0x8); /* 0x0078E980: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x14); /* 0x0078E984: lea eax, [edx - 0x14] */
    ecx = MEM32(edx + (-0x18)); /* 0x0078E987: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078E98A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078E98C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00819A70u; /* 0x0078E991: mov eax, 0x819a70 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0078E996: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0078E9A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E9A0u);

L_0078E9A0:
    ecx = MEM32(ebp + (-0x1C)); /* 0x0078E9A0: mov ecx, dword ptr [ebp - 0x1c] */
    goto L_0040A000; /* 0x0078E9A3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078E9A8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E9A8u);

L_0078E9A8:
    ecx = MEM32(ebp + (-0x18)); /* 0x0078E9A8: mov ecx, dword ptr [ebp - 0x18] */
    goto L_0040A000; /* 0x0078E9AB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078E9B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E9B0u);

L_0078E9B0:
    ecx = MEM32(ebp + (-0x1C)); /* 0x0078E9B0: mov ecx, dword ptr [ebp - 0x1c] */
    goto L_0040A000; /* 0x0078E9B3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}
