#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_0079C298(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C298u);

L_0079C298:
    ecx = ebp + (-0x104); /* 0x0079C298: lea ecx, [ebp - 0x104] */
    goto L_0040A000; /* 0x0079C29E: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079C2A3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C2A3u);

L_0079C2A3:
    ecx = ebp + (-0x11C); /* 0x0079C2A3: lea ecx, [ebp - 0x11c] */
    goto L_0040A000; /* 0x0079C2A9: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079C2AE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C2AEu);

L_0079C2AE:
    ecx = ebp + (-0xD4); /* 0x0079C2AE: lea ecx, [ebp - 0xd4] */
    goto L_0040A000; /* 0x0079C2B4: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079C2B9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C2B9u);

L_0079C2B9:
    ecx = MEM32(ebp + (-0x124)); /* 0x0079C2B9: mov ecx, dword ptr [ebp - 0x124] */
    goto L_0040A000; /* 0x0079C2BF: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079C2C4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C2C4u);

    goto L_0079C2C4;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0079C2C4:
    edx = MEM32(esp + 0x8); /* 0x0079C2C4: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x124); /* 0x0079C2C8: lea eax, [edx - 0x124] */
    ecx = MEM32(edx + (-0x128)); /* 0x0079C2CE: mov ecx, dword ptr [edx - 0x128] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079C2D4: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079C2D6: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x0079C2DB: add eax, 0xc */
    _flag_k = FK_ADD;
    ecx = MEM32(edx + (-0x8)); /* 0x0079C2DE: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079C2E1: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079C2E3: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00827378u; /* 0x0079C2E8: mov eax, 0x827378 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0079C2ED: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0079C300(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C300u);

L_0079C300:
    ecx = ebp + (-0x8C); /* 0x0079C300: lea ecx, [ebp - 0x8c] */
    goto L_0040A000; /* 0x0079C306: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079C30B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C30Bu);

L_0079C30B:
    ecx = ebp + (-0x2C); /* 0x0079C30B: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x0079C30E: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079C313(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C313u);

L_0079C313:
    ecx = ebp + (-0x5C); /* 0x0079C313: lea ecx, [ebp - 0x5c] */
    goto L_0040A000; /* 0x0079C316: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079C31B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C31Bu);

L_0079C31B:
    ecx = ebp + (-0x74); /* 0x0079C31B: lea ecx, [ebp - 0x74] */
    goto L_0040A000; /* 0x0079C31E: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079C323(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C323u);

L_0079C323:
    ecx = ebp + (-0x44); /* 0x0079C323: lea ecx, [ebp - 0x44] */
    goto L_0040A000; /* 0x0079C326: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079C32B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C32Bu);

L_0079C32B:
    ecx = MEM32(ebp + (-0x90)); /* 0x0079C32B: mov ecx, dword ptr [ebp - 0x90] */
    goto L_0040A000; /* 0x0079C331: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079C336(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C336u);

L_0079C336:
    ecx = MEM32(ebp + (-0x94)); /* 0x0079C336: mov ecx, dword ptr [ebp - 0x94] */
    goto L_0040A000; /* 0x0079C33C: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079C341(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C341u);

L_0079C341:
    ecx = MEM32(ebp + (-0x98)); /* 0x0079C341: mov ecx, dword ptr [ebp - 0x98] */
    goto L_0040A000; /* 0x0079C347: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079C34C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C34Cu);

L_0079C34C:
    ecx = MEM32(ebp + (-0x98)); /* 0x0079C34C: mov ecx, dword ptr [ebp - 0x98] */
    goto L_0040A000; /* 0x0079C352: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079C357(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C357u);

    goto L_0079C357;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0079C357:
    edx = MEM32(esp + 0x8); /* 0x0079C357: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x94); /* 0x0079C35B: lea eax, [edx - 0x94] */
    ecx = MEM32(edx + (-0x98)); /* 0x0079C361: mov ecx, dword ptr [edx - 0x98] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079C367: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079C369: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x0079C36E: add eax, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(edx + (-0x8)); /* 0x0079C371: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079C374: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079C376: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008275F0u; /* 0x0079C37B: mov eax, 0x8275f0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0079C380: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0079C390(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C390u);

L_0079C390:
    ecx = ebp + (-0x44); /* 0x0079C390: lea ecx, [ebp - 0x44] */
    goto L_0040A000; /* 0x0079C393: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079C398(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C398u);

L_0079C398:
    ecx = ebp + (-0x2C); /* 0x0079C398: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x0079C39B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079C3A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C3A0u);

    goto L_0079C3A0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0079C3A0:
    edx = MEM32(esp + 0x8); /* 0x0079C3A0: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x44); /* 0x0079C3A4: lea eax, [edx - 0x44] */
    ecx = MEM32(edx + (-0x48)); /* 0x0079C3A7: mov ecx, dword ptr [edx - 0x48] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079C3AA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079C3AC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x0079C3B1: add eax, 0xc */
    _flag_k = FK_ADD;
    ecx = MEM32(edx + (-0x8)); /* 0x0079C3B4: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079C3B7: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079C3B9: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00827660u; /* 0x0079C3BE: mov eax, 0x827660 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0079C3C3: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0079C3D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C3D0u);

L_0079C3D0:
    ecx = MEM32(ebp + (-0x10)); /* 0x0079C3D0: mov ecx, dword ptr [ebp - 0x10] */
    { _itail_tgt = (uint32_t)(MEM32(0x7CC3D0)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0079C3D9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C3D9u);

    goto L_0079C3D9;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0079C3D9:
    edx = MEM32(esp + 0x8); /* 0x0079C3D9: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0079C3DD: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x0079C3E0: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079C3E3: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079C3E5: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00827694u; /* 0x0079C3EA: mov eax, 0x827694 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0079C3EF: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0079C400(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C400u);

L_0079C400:
    goto L_00409980; /* 0x0079C400: jmp 0x409980 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00409980: RECOMP_ITAIL(0x00409980u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079C405(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C405u);

L_0079C405:
    ecx = MEM32(ebp + (-0x10)); /* 0x0079C405: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x18u; /* 0x0079C408: add ecx, 0x18 */
    _flag_k = FK_ADD;
    goto L_0053C6A0; /* 0x0079C40B: jmp 0x53c6a0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0053C6A0: RECOMP_ITAIL(0x0053C6A0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079C410(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C410u);

L_0079C410:
    eax = MEM32(ebp + (-0x10)); /* 0x0079C410: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0079C413: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0079C414: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0079C41A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0079C41B: ret  */
    RECOMP_REGS_OUT();
}

void sub_0079C41C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C41Cu);

    goto L_0079C41C;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0079C41C:
    edx = MEM32(esp + 0x8); /* 0x0079C41C: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0079C420: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xC)); /* 0x0079C423: mov ecx, dword ptr [edx - 0xc] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079C426: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079C428: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008276C0u; /* 0x0079C42D: mov eax, 0x8276c0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0079C432: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0079C440(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C440u);

L_0079C440:
    goto L_00409980; /* 0x0079C440: jmp 0x409980 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00409980: RECOMP_ITAIL(0x00409980u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079C445(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C445u);

L_0079C445:
    ecx = MEM32(ebp + (-0x10)); /* 0x0079C445: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x18u; /* 0x0079C448: add ecx, 0x18 */
    _flag_k = FK_ADD;
    goto L_0053C6A0; /* 0x0079C44B: jmp 0x53c6a0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0053C6A0: RECOMP_ITAIL(0x0053C6A0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079C450(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C450u);

    goto L_0079C450;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0079C450:
    edx = MEM32(esp + 0x8); /* 0x0079C450: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0079C454: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x0079C457: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079C45A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079C45C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008276FCu; /* 0x0079C461: mov eax, 0x8276fc */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0079C466: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0079C470(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C470u);

L_0079C470:
    eax = MEM32(ebp + (-0x10)); /* 0x0079C470: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x0079C473: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0079C48C; /* 0x0079C476: je 0x79c48c */
L_0079C47C:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0xFFFFFFFEu; /* 0x0079C47C: and dword ptr [ebp - 0x10], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x14)); /* 0x0079C480: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x60u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x60u; /* 0x0079C483: add ecx, 0x60 */
    _flag_k = FK_ADD;
    { _itail_tgt = (uint32_t)(MEM32(0x7CC3F4)); goto _ljump; }
L_0079C48C:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0079C48C: ret  */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0079C48D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C48Du);

L_0079C48D:
    ecx = MEM32(ebp + (-0x14)); /* 0x0079C48D: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x0079C490: add ecx, 8 */
    _flag_k = FK_ADD;
    { _itail_tgt = (uint32_t)(MEM32(0x7CC3F8)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0079C499(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C499u);

L_0079C499:
    ecx = MEM32(ebp + (-0x18)); /* 0x0079C499: mov ecx, dword ptr [ebp - 0x18] */
    { _itail_tgt = (uint32_t)(MEM32(0x7CC3D0)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0079C4A2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C4A2u);

L_0079C4A2:
    ecx = MEM32(ebp + (-0x14)); /* 0x0079C4A2: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x0079C4A5: add ecx, 4 */
    _flag_k = FK_ADD;
    goto L_0053BD90; /* 0x0079C4A8: jmp 0x53bd90 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0053BD90: RECOMP_ITAIL(0x0053BD90u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079C4AD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C4ADu);

    goto L_0079C4AD;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0079C4AD:
    edx = MEM32(esp + 0x8); /* 0x0079C4AD: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0079C4B1: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x0079C4B4: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079C4B7: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079C4B9: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00827740u; /* 0x0079C4BE: mov eax, 0x827740 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0079C4C3: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0079C4D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C4D0u);

    goto L_0079C4D0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0079C4D0:
    edx = MEM32(esp + 0x8); /* 0x0079C4D0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0079C4D4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x0079C4D7: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079C4DA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079C4DC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00827784u; /* 0x0079C4E1: mov eax, 0x827784 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0079C4E6: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0079C4F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C4F0u);

L_0079C4F0:
    ecx = MEM32(ebp + (-0x14)); /* 0x0079C4F0: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x0079C4F3: add ecx, 8 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x0079C4F6: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079C4FB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C4FBu);

    goto L_0079C4FB;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0079C4FB:
    edx = MEM32(esp + 0x8); /* 0x0079C4FB: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0079C4FF: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x0079C502: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079C505: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079C507: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008277DCu; /* 0x0079C50C: mov eax, 0x8277dc */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0079C511: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0079C520(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C520u);

L_0079C520:
    ecx = MEM32(ebp + (-0x10)); /* 0x0079C520: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040B340; /* 0x0079C523: jmp 0x40b340 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B340: RECOMP_ITAIL(0x0040B340u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079C528(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C528u);

L_0079C528:
    ecx = MEM32(ebp + (-0x10)); /* 0x0079C528: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040B2E0; /* 0x0079C52B: jmp 0x40b2e0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B2E0: RECOMP_ITAIL(0x0040B2E0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079C530(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C530u);

    goto L_0079C530;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0079C530:
    edx = MEM32(esp + 0x8); /* 0x0079C530: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0079C534: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xC)); /* 0x0079C537: mov ecx, dword ptr [edx - 0xc] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079C53A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079C53C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00827808u; /* 0x0079C541: mov eax, 0x827808 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0079C546: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0079C550(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C550u);

L_0079C550:
    ecx = MEM32(ebp + (-0x10)); /* 0x0079C550: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 0x58u; /* 0x0079C553: sub ecx, 0x58 */
    _flag_k = FK_CMP;
    { _itail_tgt = (uint32_t)(MEM32(0x7CC3F8)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0079C55C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C55Cu);

L_0079C55C:
    ecx = MEM32(ebp + (-0x10)); /* 0x0079C55C: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x5Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 0x5Cu; /* 0x0079C55F: sub ecx, 0x5c */
    _flag_k = FK_CMP;
    goto L_0053BD90; /* 0x0079C562: jmp 0x53bd90 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0053BD90: RECOMP_ITAIL(0x0053BD90u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079C567(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C567u);

    goto L_0079C567;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0079C567:
    edx = MEM32(esp + 0x8); /* 0x0079C567: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0079C56B: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x10)); /* 0x0079C56E: mov ecx, dword ptr [edx - 0x10] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079C571: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079C573: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0082783Cu; /* 0x0079C578: mov eax, 0x82783c */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0079C57D: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0079C590(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C590u);

L_0079C590:
    ecx = ebp + 0xC; /* 0x0079C590: lea ecx, [ebp + 0xc] */
    goto L_0052C530; /* 0x0079C593: jmp 0x52c530 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0052C530: RECOMP_ITAIL(0x0052C530u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079C598(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C598u);

    goto L_0079C598;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0079C598:
    edx = MEM32(esp + 0x8); /* 0x0079C598: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0079C59C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xC)); /* 0x0079C59F: mov ecx, dword ptr [edx - 0xc] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079C5A2: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079C5A4: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00827870u; /* 0x0079C5A9: mov eax, 0x827870 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0079C5AE: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0079C5C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C5C0u);

    goto L_0079C5C0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0079C5C0:
    edx = MEM32(esp + 0x8); /* 0x0079C5C0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0079C5C4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x0079C5C7: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079C5CA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079C5CC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0082789Cu; /* 0x0079C5D1: mov eax, 0x82789c */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0079C5D6: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0079C5E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C5E0u);

L_0079C5E0:
    goto L_00409980; /* 0x0079C5E0: jmp 0x409980 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00409980: RECOMP_ITAIL(0x00409980u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079C5E5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C5E5u);

L_0079C5E5:
    goto L_00409980; /* 0x0079C5E5: jmp 0x409980 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00409980: RECOMP_ITAIL(0x00409980u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079C5EA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C5EAu);

    goto L_0079C5EA;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0079C5EA:
    edx = MEM32(esp + 0x8); /* 0x0079C5EA: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0079C5EE: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x0079C5F1: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079C5F4: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079C5F6: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008278F4u; /* 0x0079C5FB: mov eax, 0x8278f4 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0079C600: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0079C610(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C610u);

L_0079C610:
    goto L_00409980; /* 0x0079C610: jmp 0x409980 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00409980: RECOMP_ITAIL(0x00409980u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079C615(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C615u);

L_0079C615:
    goto L_00409980; /* 0x0079C615: jmp 0x409980 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00409980: RECOMP_ITAIL(0x00409980u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079C61A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C61Au);

    goto L_0079C61A;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0079C61A:
    edx = MEM32(esp + 0x8); /* 0x0079C61A: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0079C61E: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x0079C621: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079C624: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079C626: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0082795Cu; /* 0x0079C62B: mov eax, 0x82795c */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0079C630: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0079C640(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C640u);

L_0079C640:
    ecx = MEM32(ebp + (-0x10)); /* 0x0079C640: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0053CC70; /* 0x0079C643: jmp 0x53cc70 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0053CC70: RECOMP_ITAIL(0x0053CC70u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079C648(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C648u);

    goto L_0079C648;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0079C648:
    edx = MEM32(esp + 0x8); /* 0x0079C648: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0079C64C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xC)); /* 0x0079C64F: mov ecx, dword ptr [edx - 0xc] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079C652: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079C654: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008279C4u; /* 0x0079C659: mov eax, 0x8279c4 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0079C65E: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0079C670(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C670u);

L_0079C670:
    ecx = ebp + (-0xEC); /* 0x0079C670: lea ecx, [ebp - 0xec] */
    goto L_0040B340; /* 0x0079C676: jmp 0x40b340 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B340: RECOMP_ITAIL(0x0040B340u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079C67B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C67Bu);

L_0079C67B:
    ecx = ebp + (-0xEC); /* 0x0079C67B: lea ecx, [ebp - 0xec] */
    goto L_0040B2E0; /* 0x0079C681: jmp 0x40b2e0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B2E0: RECOMP_ITAIL(0x0040B2E0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079C686(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C686u);

L_0079C686:
    ecx = ebp + (-0xEC); /* 0x0079C686: lea ecx, [ebp - 0xec] */
    goto L_0053CD20; /* 0x0079C68C: jmp 0x53cd20 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0053CD20: RECOMP_ITAIL(0x0053CD20u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079C691(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C691u);

L_0079C691:
    PUSH32(esp, 0x0053CD20u); /* 0x0079C691: push 0x53cd20 */
    PUSH32(esp, 0x1Au); /* 0x0079C696: push 0x1a */
    PUSH32(esp, 8); /* 0x0079C698: push 8 */
    eax = ebp + (-0xE4); /* 0x0079C69A: lea eax, [ebp - 0xe4] */
    PUSH32(esp, eax); /* 0x0079C6A0: push eax */
    RECOMP_CALL(sub_0077F628); /* 0x0079C6A1: call 0x77f628 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0079C6A6: ret  */
    RECOMP_REGS_OUT();
}

void sub_0079C6A7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C6A7u);

L_0079C6A7:
    ecx = ebp + (-0xEC); /* 0x0079C6A7: lea ecx, [ebp - 0xec] */
    goto L_0040B2E0; /* 0x0079C6AD: jmp 0x40b2e0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B2E0: RECOMP_ITAIL(0x0040B2E0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079C6B2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C6B2u);

L_0079C6B2:
    ecx = ebp + (-0xEC); /* 0x0079C6B2: lea ecx, [ebp - 0xec] */
    goto L_0040B340; /* 0x0079C6B8: jmp 0x40b340 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B340: RECOMP_ITAIL(0x0040B340u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079C6BD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C6BDu);

    goto L_0079C6BD;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0079C6BD:
    edx = MEM32(esp + 0x8); /* 0x0079C6BD: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0079C6C1: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x100)); /* 0x0079C6C4: mov ecx, dword ptr [edx - 0x100] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079C6CA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079C6CC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x8)); /* 0x0079C6D1: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079C6D4: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079C6D6: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008279F0u; /* 0x0079C6DB: mov eax, 0x8279f0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0079C6E0: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0079C6F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C6F0u);

L_0079C6F0:
    ecx = ebp + (-0x14); /* 0x0079C6F0: lea ecx, [ebp - 0x14] */
    { _itail_tgt = (uint32_t)(MEM32(0x7CC358)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0079C6F9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C6F9u);

    goto L_0079C6F9;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0079C6F9:
    edx = MEM32(esp + 0x8); /* 0x0079C6F9: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0079C6FD: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x24)); /* 0x0079C700: mov ecx, dword ptr [edx - 0x24] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079C703: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079C705: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00827A44u; /* 0x0079C70A: mov eax, 0x827a44 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0079C70F: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0079C720(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C720u);

    goto L_0079C720;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0079C720:
    edx = MEM32(esp + 0x8); /* 0x0079C720: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0079C724: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x1C)); /* 0x0079C727: mov ecx, dword ptr [edx - 0x1c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079C72A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079C72C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00827A70u; /* 0x0079C731: mov eax, 0x827a70 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0079C736: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0079C740(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C740u);

L_0079C740:
    goto L_00409980; /* 0x0079C740: jmp 0x409980 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00409980: RECOMP_ITAIL(0x00409980u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079C745(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C745u);

L_0079C745:
    ecx = MEM32(ebp + 0x8); /* 0x0079C745: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x0079C748: add ecx, 8 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x0079C74B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079C750(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C750u);

    goto L_0079C750;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0079C750:
    edx = MEM32(esp + 0x8); /* 0x0079C750: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0079C754: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x0079C757: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079C75A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079C75C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00827AC8u; /* 0x0079C761: mov eax, 0x827ac8 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0079C766: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0079C770(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C770u);

L_0079C770:
    goto L_00409980; /* 0x0079C770: jmp 0x409980 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00409980: RECOMP_ITAIL(0x00409980u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079C775(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C775u);

    goto L_0079C775;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0079C775:
    edx = MEM32(esp + 0x8); /* 0x0079C775: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0079C779: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x0079C77C: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079C77F: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079C781: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00827B30u; /* 0x0079C786: mov eax, 0x827b30 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0079C78B: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0079C790(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C790u);

L_0079C790:
    ecx = ebp + (-0x40); /* 0x0079C790: lea ecx, [ebp - 0x40] */
    goto L_0053C6A0; /* 0x0079C793: jmp 0x53c6a0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0053C6A0: RECOMP_ITAIL(0x0053C6A0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079C798(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C798u);

L_0079C798:
    ecx = ebp + (-0x40); /* 0x0079C798: lea ecx, [ebp - 0x40] */
    goto L_0052DAD0; /* 0x0079C79B: jmp 0x52dad0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0052DAD0: RECOMP_ITAIL(0x0052DAD0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079C7A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C7A0u);

L_0079C7A0:
    ecx = ebp + (-0x18); /* 0x0079C7A0: lea ecx, [ebp - 0x18] */
    goto L_0053ED40; /* 0x0079C7A3: jmp 0x53ed40 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0053ED40: RECOMP_ITAIL(0x0053ED40u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079C7A8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C7A8u);

L_0079C7A8:
    ecx = ebp + (-0x40); /* 0x0079C7A8: lea ecx, [ebp - 0x40] */
    goto L_0053C6A0; /* 0x0079C7AB: jmp 0x53c6a0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0053C6A0: RECOMP_ITAIL(0x0053C6A0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079C7B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C7B0u);

    goto L_0079C7B0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0079C7B0:
    edx = MEM32(esp + 0x8); /* 0x0079C7B0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0079C7B4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x40)); /* 0x0079C7B7: mov ecx, dword ptr [edx - 0x40] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079C7BA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079C7BC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00827B90u; /* 0x0079C7C1: mov eax, 0x827b90 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0079C7C6: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0079C7D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C7D0u);

L_0079C7D0:
    ecx = ebp + (-0x10); /* 0x0079C7D0: lea ecx, [ebp - 0x10] */
    goto L_0053EFE0; /* 0x0079C7D3: jmp 0x53efe0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0053EFE0: RECOMP_ITAIL(0x0053EFE0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079C7D8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C7D8u);

    goto L_0079C7D8;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0079C7D8:
    edx = MEM32(esp + 0x8); /* 0x0079C7D8: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0079C7DC: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x10)); /* 0x0079C7DF: mov ecx, dword ptr [edx - 0x10] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079C7E2: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079C7E4: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00827BD4u; /* 0x0079C7E9: mov eax, 0x827bd4 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0079C7EE: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0079C800(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C800u);

L_0079C800:
    goto L_00409980; /* 0x0079C800: jmp 0x409980 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00409980: RECOMP_ITAIL(0x00409980u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079C805(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C805u);

    goto L_0079C805;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0079C805:
    edx = MEM32(esp + 0x8); /* 0x0079C805: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0079C809: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x0079C80C: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079C80F: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079C811: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00827C00u; /* 0x0079C816: mov eax, 0x827c00 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0079C81B: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0079C820(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C820u);

L_0079C820:
    goto L_00409980; /* 0x0079C820: jmp 0x409980 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00409980: RECOMP_ITAIL(0x00409980u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079C825(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C825u);

    goto L_0079C825;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0079C825:
    edx = MEM32(esp + 0x8); /* 0x0079C825: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0079C829: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x8)); /* 0x0079C82C: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079C82F: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079C831: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00827C60u; /* 0x0079C836: mov eax, 0x827c60 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0079C83B: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0079C840(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C840u);

L_0079C840:
    goto L_00409980; /* 0x0079C840: jmp 0x409980 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00409980: RECOMP_ITAIL(0x00409980u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079C845(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C845u);

    goto L_0079C845;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0079C845:
    edx = MEM32(esp + 0x8); /* 0x0079C845: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0079C849: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x10)); /* 0x0079C84C: mov ecx, dword ptr [edx - 0x10] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079C84F: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079C851: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00827C8Cu; /* 0x0079C856: mov eax, 0x827c8c */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0079C85B: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0079C860(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C860u);

L_0079C860:
    ecx = ebp + (-0x18); /* 0x0079C860: lea ecx, [ebp - 0x18] */
    goto L_005409D0; /* 0x0079C863: jmp 0x5409d0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005409D0: RECOMP_ITAIL(0x005409D0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079C868(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C868u);

    goto L_0079C868;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0079C868:
    edx = MEM32(esp + 0x8); /* 0x0079C868: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0079C86C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x0079C86F: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079C872: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079C874: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00827CC0u; /* 0x0079C879: mov eax, 0x827cc0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0079C87E: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0079C890(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C890u);

L_0079C890:
    ecx = ebp + (-0x34); /* 0x0079C890: lea ecx, [ebp - 0x34] */
    goto L_005409D0; /* 0x0079C893: jmp 0x5409d0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005409D0: RECOMP_ITAIL(0x005409D0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079C898(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C898u);

    goto L_0079C898;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0079C898:
    edx = MEM32(esp + 0x8); /* 0x0079C898: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0079C89C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x38)); /* 0x0079C89F: mov ecx, dword ptr [edx - 0x38] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079C8A2: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079C8A4: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00827CECu; /* 0x0079C8A9: mov eax, 0x827cec */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0079C8AE: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0079C8C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C8C0u);

L_0079C8C0:
    ecx = ebp + (-0x40); /* 0x0079C8C0: lea ecx, [ebp - 0x40] */
    goto L_005409D0; /* 0x0079C8C3: jmp 0x5409d0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005409D0: RECOMP_ITAIL(0x005409D0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079C8C8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C8C8u);

    goto L_0079C8C8;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0079C8C8:
    edx = MEM32(esp + 0x8); /* 0x0079C8C8: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0079C8CC: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x44)); /* 0x0079C8CF: mov ecx, dword ptr [edx - 0x44] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079C8D2: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079C8D4: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00827D18u; /* 0x0079C8D9: mov eax, 0x827d18 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0079C8DE: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0079C8F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C8F0u);

L_0079C8F0:
    ecx = MEM32(ebp + (-0x10)); /* 0x0079C8F0: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0053C8D0; /* 0x0079C8F3: jmp 0x53c8d0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0053C8D0: RECOMP_ITAIL(0x0053C8D0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079C8F8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C8F8u);

L_0079C8F8:
    goto L_00409980; /* 0x0079C8F8: jmp 0x409980 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00409980: RECOMP_ITAIL(0x00409980u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079C8FD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C8FDu);

L_0079C8FD:
    ecx = MEM32(ebp + (-0x10)); /* 0x0079C8FD: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x18u; /* 0x0079C900: add ecx, 0x18 */
    _flag_k = FK_ADD;
    goto L_0053C6A0; /* 0x0079C903: jmp 0x53c6a0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0053C6A0: RECOMP_ITAIL(0x0053C6A0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079C908(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C908u);

    goto L_0079C908;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0079C908:
    edx = MEM32(esp + 0x8); /* 0x0079C908: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0079C90C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x0079C90F: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079C912: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079C914: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00827D64u; /* 0x0079C919: mov eax, 0x827d64 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0079C91E: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0079C930(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C930u);

L_0079C930:
    eax = MEM32(ebp + (-0x10)); /* 0x0079C930: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x0079C933: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0079C948; /* 0x0079C936: je 0x79c948 */
L_0079C93C:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0xFFFFFFFEu; /* 0x0079C93C: and dword ptr [ebp - 0x10], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x8); /* 0x0079C940: mov ecx, dword ptr [ebp + 8] */
    goto L_0040A000; /* 0x0079C943: jmp 0x40a000 */
L_0079C948:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0079C948: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079C949(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C949u);

    goto L_0079C949;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0079C949:
    edx = MEM32(esp + 0x8); /* 0x0079C949: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0079C94D: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x0079C950: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079C953: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079C955: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00827DB0u; /* 0x0079C95A: mov eax, 0x827db0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0079C95F: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0079C970(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C970u);

L_0079C970:
    ecx = ebp + (-0xDC); /* 0x0079C970: lea ecx, [ebp - 0xdc] */
    goto L_005411A0; /* 0x0079C976: jmp 0x5411a0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005411A0: RECOMP_ITAIL(0x005411A0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079C97B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C97Bu);

L_0079C97B:
    ecx = MEM32(ebp + (-0x24)); /* 0x0079C97B: mov ecx, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 0x58u; /* 0x0079C97E: sub ecx, 0x58 */
    _flag_k = FK_CMP;
    { _itail_tgt = (uint32_t)(MEM32(0x7CC3FC)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0079C987(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C987u);

L_0079C987:
    ecx = MEM32(ebp + (-0x24)); /* 0x0079C987: mov ecx, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x60u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 0x60u; /* 0x0079C98A: sub ecx, 0x60 */
    _flag_k = FK_CMP;
    goto L_0053BD90; /* 0x0079C98D: jmp 0x53bd90 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0053BD90: RECOMP_ITAIL(0x0053BD90u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079C992(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C992u);

    goto L_0079C992;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0079C992:
    edx = MEM32(esp + 0x8); /* 0x0079C992: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0079C996: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xD8)); /* 0x0079C999: mov ecx, dword ptr [edx - 0xd8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079C99F: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079C9A1: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x8)); /* 0x0079C9A6: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079C9A9: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079C9AB: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00827DDCu; /* 0x0079C9B0: mov eax, 0x827ddc */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0079C9B5: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0079C9C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C9C0u);

L_0079C9C0:
    ecx = MEM32(ebp + (-0x10)); /* 0x0079C9C0: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 0x58u; /* 0x0079C9C3: sub ecx, 0x58 */
    _flag_k = FK_CMP;
    { _itail_tgt = (uint32_t)(MEM32(0x7CC3FC)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0079C9CC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C9CCu);

L_0079C9CC:
    ecx = MEM32(ebp + (-0x10)); /* 0x0079C9CC: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x60u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 0x60u; /* 0x0079C9CF: sub ecx, 0x60 */
    _flag_k = FK_CMP;
    goto L_0053BD90; /* 0x0079C9D2: jmp 0x53bd90 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0053BD90: RECOMP_ITAIL(0x0053BD90u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079C9D7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079C9D7u);

    goto L_0079C9D7;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0079C9D7:
    edx = MEM32(esp + 0x8); /* 0x0079C9D7: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0079C9DB: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xC)); /* 0x0079C9DE: mov ecx, dword ptr [edx - 0xc] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079C9E1: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079C9E3: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00827E18u; /* 0x0079C9E8: mov eax, 0x827e18 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0079C9ED: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0079CA00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079CA00u);

L_0079CA00:
    ecx = MEM32(ebp + (-0x10)); /* 0x0079CA00: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x0079CA03: add ecx, 4 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x0079CA06: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}
