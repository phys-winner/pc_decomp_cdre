#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_007AF400(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF400u);

    goto L_007AF400;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AF400:
    edx = MEM32(esp + 0x8); /* 0x007AF400: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007AF404: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x1C)); /* 0x007AF407: mov ecx, dword ptr [edx - 0x1c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AF40A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AF40C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00838F08u; /* 0x007AF411: mov eax, 0x838f08 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AF416: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AF420(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF420u);

L_007AF420:
    ecx = MEM32(ebp + 0x8); /* 0x007AF420: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x007AF423: add ecx, 8 */
    _flag_k = FK_ADD;
    goto L_005D7D50; /* 0x007AF426: jmp 0x5d7d50 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005D7D50: RECOMP_ITAIL(0x005D7D50u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF42B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF42Bu);

L_007AF42B:
    ecx = MEM32(ebp + 0x8); /* 0x007AF42B: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x007AF42E: add ecx, 4 */
    _flag_k = FK_ADD;
    goto L_005D6D20; /* 0x007AF431: jmp 0x5d6d20 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005D6D20: RECOMP_ITAIL(0x005D6D20u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF436(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF436u);

    goto L_007AF436;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AF436:
    edx = MEM32(esp + 0x8); /* 0x007AF436: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007AF43A: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x8)); /* 0x007AF43D: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AF440: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AF442: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00838F60u; /* 0x007AF447: mov eax, 0x838f60 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AF44C: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AF460(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF460u);

    goto L_007AF460;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AF460:
    edx = MEM32(esp + 0x8); /* 0x007AF460: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007AF464: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x007AF467: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AF46A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AF46C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00838F94u; /* 0x007AF471: mov eax, 0x838f94 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AF476: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AF480(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF480u);

L_007AF480:
    ecx = MEM32(ebp + 0xC); /* 0x007AF480: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x007AF483: add ecx, 8 */
    _flag_k = FK_ADD;
    goto L_005D7D50; /* 0x007AF486: jmp 0x5d7d50 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005D7D50: RECOMP_ITAIL(0x005D7D50u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF48B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF48Bu);

L_007AF48B:
    ecx = MEM32(ebp + 0xC); /* 0x007AF48B: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x007AF48E: add ecx, 4 */
    _flag_k = FK_ADD;
    goto L_005D6D20; /* 0x007AF491: jmp 0x5d6d20 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005D6D20: RECOMP_ITAIL(0x005D6D20u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF496(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF496u);

    goto L_007AF496;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AF496:
    edx = MEM32(esp + 0x8); /* 0x007AF496: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007AF49A: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x10)); /* 0x007AF49D: mov ecx, dword ptr [edx - 0x10] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AF4A0: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AF4A2: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00838FECu; /* 0x007AF4A7: mov eax, 0x838fec */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AF4AC: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AF4C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF4C0u);

    goto L_007AF4C0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AF4C0:
    edx = MEM32(esp + 0x8); /* 0x007AF4C0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007AF4C4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x1C)); /* 0x007AF4C7: mov ecx, dword ptr [edx - 0x1c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AF4CA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AF4CC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00839020u; /* 0x007AF4D1: mov eax, 0x839020 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AF4D6: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AF4E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF4E0u);

L_007AF4E0:
    ecx = MEM32(ebp + 0x8); /* 0x007AF4E0: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xCCu; /* 0x007AF4E3: add ecx, 0xcc */
    _flag_k = FK_ADD;
    goto L_00419790; /* 0x007AF4E9: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF4EE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF4EEu);

    goto L_007AF4EE;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AF4EE:
    edx = MEM32(esp + 0x8); /* 0x007AF4EE: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007AF4F2: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x8)); /* 0x007AF4F5: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AF4F8: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AF4FA: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00839078u; /* 0x007AF4FF: mov eax, 0x839078 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AF504: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AF510(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF510u);

L_007AF510:
    goto L_00409980; /* 0x007AF510: jmp 0x409980 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00409980: RECOMP_ITAIL(0x00409980u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF515(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF515u);

    goto L_007AF515;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AF515:
    edx = MEM32(esp + 0x8); /* 0x007AF515: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007AF519: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x1C)); /* 0x007AF51C: mov ecx, dword ptr [edx - 0x1c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AF51F: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AF521: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008390A4u; /* 0x007AF526: mov eax, 0x8390a4 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AF52B: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AF530(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF530u);

L_007AF530:
    ecx = MEM32(ebp + (-0x10)); /* 0x007AF530: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xCCu; /* 0x007AF533: add ecx, 0xcc */
    _flag_k = FK_ADD;
    goto L_00419790; /* 0x007AF539: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF53E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF53Eu);

    goto L_007AF53E;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AF53E:
    edx = MEM32(esp + 0x8); /* 0x007AF53E: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007AF542: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xC)); /* 0x007AF545: mov ecx, dword ptr [edx - 0xc] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AF548: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AF54A: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00839104u; /* 0x007AF54F: mov eax, 0x839104 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AF554: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AF560(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF560u);

    goto L_007AF560;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AF560:
    edx = MEM32(esp + 0x8); /* 0x007AF560: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007AF564: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x007AF567: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AF56A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AF56C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00839130u; /* 0x007AF571: mov eax, 0x839130 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AF576: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AF580(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF580u);

    goto L_007AF580;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AF580:
    edx = MEM32(esp + 0x8); /* 0x007AF580: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007AF584: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x007AF587: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AF58A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AF58C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00839188u; /* 0x007AF591: mov eax, 0x839188 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AF596: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AF5A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF5A0u);

    goto L_007AF5A0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AF5A0:
    edx = MEM32(esp + 0x8); /* 0x007AF5A0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007AF5A4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x007AF5A7: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AF5AA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AF5AC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008391E0u; /* 0x007AF5B1: mov eax, 0x8391e0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AF5B6: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AF5C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF5C0u);

L_007AF5C0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007AF5C0: mov ecx, dword ptr [ebp - 0x10] */
    goto L_005FA9D0; /* 0x007AF5C3: jmp 0x5fa9d0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005FA9D0: RECOMP_ITAIL(0x005FA9D0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF5C8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF5C8u);

L_007AF5C8:
    ecx = MEM32(ebp + (-0x10)); /* 0x007AF5C8: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCAC4u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xCAC4u; /* 0x007AF5CB: add ecx, 0xcac4 */
    _flag_k = FK_ADD;
    goto L_0052E240; /* 0x007AF5D1: jmp 0x52e240 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0052E240: RECOMP_ITAIL(0x0052E240u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF5D6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF5D6u);

L_007AF5D6:
    ecx = MEM32(ebp + (-0x10)); /* 0x007AF5D6: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCAD8u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xCAD8u; /* 0x007AF5D9: add ecx, 0xcad8 */
    _flag_k = FK_ADD;
    goto L_0048A290; /* 0x007AF5DF: jmp 0x48a290 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0048A290: RECOMP_ITAIL(0x0048A290u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF5E4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF5E4u);

L_007AF5E4:
    ecx = MEM32(ebp + (-0x10)); /* 0x007AF5E4: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCAECu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xCAECu; /* 0x007AF5E7: add ecx, 0xcaec */
    _flag_k = FK_ADD;
    goto L_005DD990; /* 0x007AF5ED: jmp 0x5dd990 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005DD990: RECOMP_ITAIL(0x005DD990u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF5F2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF5F2u);

L_007AF5F2:
    ecx = MEM32(ebp + (-0x10)); /* 0x007AF5F2: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCB00u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xCB00u; /* 0x007AF5F5: add ecx, 0xcb00 */
    _flag_k = FK_ADD;
    goto L_005E0B90; /* 0x007AF5FB: jmp 0x5e0b90 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005E0B90: RECOMP_ITAIL(0x005E0B90u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF600(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF600u);

L_007AF600:
    ecx = MEM32(ebp + (-0x10)); /* 0x007AF600: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCBC0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xCBC0u; /* 0x007AF603: add ecx, 0xcbc0 */
    _flag_k = FK_ADD;
    goto L_005DD9F0; /* 0x007AF609: jmp 0x5dd9f0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005DD9F0: RECOMP_ITAIL(0x005DD9F0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF60E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF60Eu);

L_007AF60E:
    ecx = MEM32(ebp + (-0x14)); /* 0x007AF60E: mov ecx, dword ptr [ebp - 0x14] */
    goto L_005E0310; /* 0x007AF611: jmp 0x5e0310 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005E0310: RECOMP_ITAIL(0x005E0310u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF616(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF616u);

L_007AF616:
    ecx = MEM32(ebp + (-0x14)); /* 0x007AF616: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040B290; /* 0x007AF619: jmp 0x40b290 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B290: RECOMP_ITAIL(0x0040B290u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF61E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF61Eu);

L_007AF61E:
    ecx = MEM32(ebp + (-0x14)); /* 0x007AF61E: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040B2E0; /* 0x007AF621: jmp 0x40b2e0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B2E0: RECOMP_ITAIL(0x0040B2E0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF626(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF626u);

L_007AF626:
    ecx = MEM32(ebp + (-0x14)); /* 0x007AF626: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040B340; /* 0x007AF629: jmp 0x40b340 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B340: RECOMP_ITAIL(0x0040B340u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF62E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF62Eu);

L_007AF62E:
    ecx = MEM32(ebp + (-0x18)); /* 0x007AF62E: mov ecx, dword ptr [ebp - 0x18] */
    goto L_005E0190; /* 0x007AF631: jmp 0x5e0190 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005E0190: RECOMP_ITAIL(0x005E0190u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF636(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF636u);

L_007AF636:
    ecx = MEM32(ebp + (-0x18)); /* 0x007AF636: mov ecx, dword ptr [ebp - 0x18] */
    goto L_004964E0; /* 0x007AF639: jmp 0x4964e0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_004964E0: RECOMP_ITAIL(0x004964E0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF63E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF63Eu);

L_007AF63E:
    ecx = MEM32(ebp + (-0x18)); /* 0x007AF63E: mov ecx, dword ptr [ebp - 0x18] */
    goto L_0053CC70; /* 0x007AF641: jmp 0x53cc70 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0053CC70: RECOMP_ITAIL(0x0053CC70u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF646(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF646u);

    goto L_007AF646;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AF646:
    edx = MEM32(esp + 0x8); /* 0x007AF646: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007AF64A: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x1C)); /* 0x007AF64D: mov ecx, dword ptr [edx - 0x1c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AF650: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AF652: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00839238u; /* 0x007AF657: mov eax, 0x839238 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AF65C: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AF670(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF670u);

L_007AF670:
    ecx = MEM32(ebp + (-0x10)); /* 0x007AF670: mov ecx, dword ptr [ebp - 0x10] */
    goto L_005E0190; /* 0x007AF673: jmp 0x5e0190 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005E0190: RECOMP_ITAIL(0x005E0190u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF678(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF678u);

    goto L_007AF678;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AF678:
    edx = MEM32(esp + 0x8); /* 0x007AF678: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007AF67C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x8)); /* 0x007AF67F: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AF682: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AF684: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008392C8u; /* 0x007AF689: mov eax, 0x8392c8 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AF68E: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AF6A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF6A0u);

L_007AF6A0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007AF6A0: mov ecx, dword ptr [ebp - 0x10] */
    goto L_005E0310; /* 0x007AF6A3: jmp 0x5e0310 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005E0310: RECOMP_ITAIL(0x005E0310u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF6A8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF6A8u);

L_007AF6A8:
    ecx = MEM32(ebp + (-0x10)); /* 0x007AF6A8: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040B290; /* 0x007AF6AB: jmp 0x40b290 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B290: RECOMP_ITAIL(0x0040B290u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF6B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF6B0u);

L_007AF6B0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007AF6B0: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040B2E0; /* 0x007AF6B3: jmp 0x40b2e0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B2E0: RECOMP_ITAIL(0x0040B2E0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF6B8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF6B8u);

L_007AF6B8:
    ecx = MEM32(ebp + (-0x10)); /* 0x007AF6B8: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040B340; /* 0x007AF6BB: jmp 0x40b340 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B340: RECOMP_ITAIL(0x0040B340u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF6C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF6C0u);

    goto L_007AF6C0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AF6C0:
    edx = MEM32(esp + 0x8); /* 0x007AF6C0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007AF6C4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x10)); /* 0x007AF6C7: mov ecx, dword ptr [edx - 0x10] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AF6CA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AF6CC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008392F4u; /* 0x007AF6D1: mov eax, 0x8392f4 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AF6D6: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AF6E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF6E0u);

L_007AF6E0:
    ecx = ebp + (-0x9A0); /* 0x007AF6E0: lea ecx, [ebp - 0x9a0] */
    goto L_0040A000; /* 0x007AF6E6: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF6EB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF6EBu);

L_007AF6EB:
    ecx = ebp + (-0x988); /* 0x007AF6EB: lea ecx, [ebp - 0x988] */
    goto L_0040A000; /* 0x007AF6F1: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF6F6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF6F6u);

L_007AF6F6:
    ecx = ebp + (-0x9A8); /* 0x007AF6F6: lea ecx, [ebp - 0x9a8] */
    goto L_0051C800; /* 0x007AF6FC: jmp 0x51c800 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0051C800: RECOMP_ITAIL(0x0051C800u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF701(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF701u);

L_007AF701:
    ecx = ebp + (-0x95C); /* 0x007AF701: lea ecx, [ebp - 0x95c] */
    goto L_0040A000; /* 0x007AF707: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF70C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF70Cu);

L_007AF70C:
    ecx = ebp + (-0x944); /* 0x007AF70C: lea ecx, [ebp - 0x944] */
    goto L_0040A000; /* 0x007AF712: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF717(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF717u);

L_007AF717:
    ecx = ebp + (-0x964); /* 0x007AF717: lea ecx, [ebp - 0x964] */
    goto L_0051C800; /* 0x007AF71D: jmp 0x51c800 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0051C800: RECOMP_ITAIL(0x0051C800u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF722(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF722u);

L_007AF722:
    ecx = ebp + (-0x918); /* 0x007AF722: lea ecx, [ebp - 0x918] */
    goto L_0040A000; /* 0x007AF728: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF72D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF72Du);

L_007AF72D:
    ecx = ebp + (-0x900); /* 0x007AF72D: lea ecx, [ebp - 0x900] */
    goto L_0040A000; /* 0x007AF733: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF738(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF738u);

L_007AF738:
    ecx = ebp + (-0x920); /* 0x007AF738: lea ecx, [ebp - 0x920] */
    goto L_0051C800; /* 0x007AF73E: jmp 0x51c800 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0051C800: RECOMP_ITAIL(0x0051C800u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF743(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF743u);

L_007AF743:
    ecx = ebp + (-0x8D4); /* 0x007AF743: lea ecx, [ebp - 0x8d4] */
    goto L_0040A000; /* 0x007AF749: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF74E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF74Eu);

L_007AF74E:
    ecx = ebp + (-0x8BC); /* 0x007AF74E: lea ecx, [ebp - 0x8bc] */
    goto L_0040A000; /* 0x007AF754: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF759(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF759u);

L_007AF759:
    ecx = ebp + (-0x8DC); /* 0x007AF759: lea ecx, [ebp - 0x8dc] */
    goto L_0051C800; /* 0x007AF75F: jmp 0x51c800 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0051C800: RECOMP_ITAIL(0x0051C800u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF764(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF764u);

L_007AF764:
    ecx = ebp + (-0x890); /* 0x007AF764: lea ecx, [ebp - 0x890] */
    goto L_0040A000; /* 0x007AF76A: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF76F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF76Fu);

L_007AF76F:
    ecx = ebp + (-0x878); /* 0x007AF76F: lea ecx, [ebp - 0x878] */
    goto L_0040A000; /* 0x007AF775: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF77A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF77Au);

L_007AF77A:
    ecx = ebp + (-0x898); /* 0x007AF77A: lea ecx, [ebp - 0x898] */
    goto L_0051C800; /* 0x007AF780: jmp 0x51c800 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0051C800: RECOMP_ITAIL(0x0051C800u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF785(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF785u);

L_007AF785:
    ecx = ebp + (-0x84C); /* 0x007AF785: lea ecx, [ebp - 0x84c] */
    goto L_0040A000; /* 0x007AF78B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF790(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF790u);

L_007AF790:
    ecx = ebp + (-0x834); /* 0x007AF790: lea ecx, [ebp - 0x834] */
    goto L_0040A000; /* 0x007AF796: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF79B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF79Bu);

L_007AF79B:
    ecx = ebp + (-0x854); /* 0x007AF79B: lea ecx, [ebp - 0x854] */
    goto L_0051C800; /* 0x007AF7A1: jmp 0x51c800 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0051C800: RECOMP_ITAIL(0x0051C800u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF7A6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF7A6u);

L_007AF7A6:
    ecx = ebp + (-0x808); /* 0x007AF7A6: lea ecx, [ebp - 0x808] */
    goto L_0040A000; /* 0x007AF7AC: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF7B1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF7B1u);

L_007AF7B1:
    ecx = ebp + (-0x7F0); /* 0x007AF7B1: lea ecx, [ebp - 0x7f0] */
    goto L_0040A000; /* 0x007AF7B7: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF7BC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF7BCu);

L_007AF7BC:
    ecx = ebp + (-0x810); /* 0x007AF7BC: lea ecx, [ebp - 0x810] */
    goto L_0051C800; /* 0x007AF7C2: jmp 0x51c800 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0051C800: RECOMP_ITAIL(0x0051C800u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF7C7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF7C7u);

L_007AF7C7:
    ecx = ebp + (-0x7C4); /* 0x007AF7C7: lea ecx, [ebp - 0x7c4] */
    goto L_0040A000; /* 0x007AF7CD: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF7D2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF7D2u);

L_007AF7D2:
    ecx = ebp + (-0x7AC); /* 0x007AF7D2: lea ecx, [ebp - 0x7ac] */
    goto L_0040A000; /* 0x007AF7D8: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF7DD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF7DDu);

L_007AF7DD:
    ecx = ebp + (-0x7CC); /* 0x007AF7DD: lea ecx, [ebp - 0x7cc] */
    goto L_0051C800; /* 0x007AF7E3: jmp 0x51c800 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0051C800: RECOMP_ITAIL(0x0051C800u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF7E8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF7E8u);

L_007AF7E8:
    ecx = ebp + (-0x780); /* 0x007AF7E8: lea ecx, [ebp - 0x780] */
    goto L_0040A000; /* 0x007AF7EE: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF7F3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF7F3u);

L_007AF7F3:
    ecx = ebp + (-0x768); /* 0x007AF7F3: lea ecx, [ebp - 0x768] */
    goto L_0040A000; /* 0x007AF7F9: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF7FE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF7FEu);

L_007AF7FE:
    ecx = ebp + (-0x788); /* 0x007AF7FE: lea ecx, [ebp - 0x788] */
    goto L_0051C800; /* 0x007AF804: jmp 0x51c800 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0051C800: RECOMP_ITAIL(0x0051C800u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF809(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF809u);

L_007AF809:
    ecx = ebp + (-0x73C); /* 0x007AF809: lea ecx, [ebp - 0x73c] */
    goto L_0040A000; /* 0x007AF80F: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF814(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF814u);

L_007AF814:
    ecx = ebp + (-0x724); /* 0x007AF814: lea ecx, [ebp - 0x724] */
    goto L_0040A000; /* 0x007AF81A: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF81F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF81Fu);

L_007AF81F:
    ecx = ebp + (-0x744); /* 0x007AF81F: lea ecx, [ebp - 0x744] */
    goto L_0051C800; /* 0x007AF825: jmp 0x51c800 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0051C800: RECOMP_ITAIL(0x0051C800u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF82A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF82Au);

L_007AF82A:
    ecx = ebp + (-0x6F8); /* 0x007AF82A: lea ecx, [ebp - 0x6f8] */
    goto L_0040A000; /* 0x007AF830: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF835(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF835u);

L_007AF835:
    ecx = ebp + (-0x6E0); /* 0x007AF835: lea ecx, [ebp - 0x6e0] */
    goto L_0040A000; /* 0x007AF83B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF840(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF840u);

L_007AF840:
    ecx = ebp + (-0x700); /* 0x007AF840: lea ecx, [ebp - 0x700] */
    goto L_0051C800; /* 0x007AF846: jmp 0x51c800 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0051C800: RECOMP_ITAIL(0x0051C800u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF84B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF84Bu);

L_007AF84B:
    ecx = ebp + (-0x6B4); /* 0x007AF84B: lea ecx, [ebp - 0x6b4] */
    goto L_0040A000; /* 0x007AF851: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF856(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF856u);

L_007AF856:
    ecx = ebp + (-0x69C); /* 0x007AF856: lea ecx, [ebp - 0x69c] */
    goto L_0040A000; /* 0x007AF85C: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF861(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF861u);

L_007AF861:
    ecx = ebp + (-0x6BC); /* 0x007AF861: lea ecx, [ebp - 0x6bc] */
    goto L_0051C800; /* 0x007AF867: jmp 0x51c800 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0051C800: RECOMP_ITAIL(0x0051C800u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF86C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF86Cu);

L_007AF86C:
    ecx = ebp + (-0x670); /* 0x007AF86C: lea ecx, [ebp - 0x670] */
    goto L_0040A000; /* 0x007AF872: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF877(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF877u);

L_007AF877:
    ecx = ebp + (-0x658); /* 0x007AF877: lea ecx, [ebp - 0x658] */
    goto L_0040A000; /* 0x007AF87D: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF882(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF882u);

L_007AF882:
    ecx = ebp + (-0x678); /* 0x007AF882: lea ecx, [ebp - 0x678] */
    goto L_0051C800; /* 0x007AF888: jmp 0x51c800 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0051C800: RECOMP_ITAIL(0x0051C800u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF88D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF88Du);

L_007AF88D:
    ecx = ebp + (-0x62C); /* 0x007AF88D: lea ecx, [ebp - 0x62c] */
    goto L_0040A000; /* 0x007AF893: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF898(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF898u);

L_007AF898:
    ecx = ebp + (-0x614); /* 0x007AF898: lea ecx, [ebp - 0x614] */
    goto L_0040A000; /* 0x007AF89E: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF8A3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF8A3u);

L_007AF8A3:
    ecx = ebp + (-0x634); /* 0x007AF8A3: lea ecx, [ebp - 0x634] */
    goto L_0051C800; /* 0x007AF8A9: jmp 0x51c800 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0051C800: RECOMP_ITAIL(0x0051C800u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF8AE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF8AEu);

L_007AF8AE:
    ecx = ebp + (-0x5E8); /* 0x007AF8AE: lea ecx, [ebp - 0x5e8] */
    goto L_0040A000; /* 0x007AF8B4: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF8B9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF8B9u);

L_007AF8B9:
    ecx = ebp + (-0x5D0); /* 0x007AF8B9: lea ecx, [ebp - 0x5d0] */
    goto L_0040A000; /* 0x007AF8BF: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF8C4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF8C4u);

L_007AF8C4:
    ecx = ebp + (-0x5F0); /* 0x007AF8C4: lea ecx, [ebp - 0x5f0] */
    goto L_0051C800; /* 0x007AF8CA: jmp 0x51c800 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0051C800: RECOMP_ITAIL(0x0051C800u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF8CF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF8CFu);

L_007AF8CF:
    ecx = ebp + (-0x5A4); /* 0x007AF8CF: lea ecx, [ebp - 0x5a4] */
    goto L_0040A000; /* 0x007AF8D5: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF8DA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF8DAu);

L_007AF8DA:
    ecx = ebp + (-0x58C); /* 0x007AF8DA: lea ecx, [ebp - 0x58c] */
    goto L_0040A000; /* 0x007AF8E0: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF8E5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF8E5u);

L_007AF8E5:
    ecx = ebp + (-0x5AC); /* 0x007AF8E5: lea ecx, [ebp - 0x5ac] */
    goto L_0051C800; /* 0x007AF8EB: jmp 0x51c800 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0051C800: RECOMP_ITAIL(0x0051C800u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF8F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF8F0u);

L_007AF8F0:
    ecx = ebp + (-0x560); /* 0x007AF8F0: lea ecx, [ebp - 0x560] */
    goto L_0040A000; /* 0x007AF8F6: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF8FB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF8FBu);

L_007AF8FB:
    ecx = ebp + (-0x548); /* 0x007AF8FB: lea ecx, [ebp - 0x548] */
    goto L_0040A000; /* 0x007AF901: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF906(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF906u);

L_007AF906:
    ecx = ebp + (-0x568); /* 0x007AF906: lea ecx, [ebp - 0x568] */
    goto L_0051C800; /* 0x007AF90C: jmp 0x51c800 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0051C800: RECOMP_ITAIL(0x0051C800u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF911(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF911u);

L_007AF911:
    ecx = ebp + (-0x51C); /* 0x007AF911: lea ecx, [ebp - 0x51c] */
    goto L_0040A000; /* 0x007AF917: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF91C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF91Cu);

L_007AF91C:
    ecx = ebp + (-0x504); /* 0x007AF91C: lea ecx, [ebp - 0x504] */
    goto L_0040A000; /* 0x007AF922: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF927(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF927u);

L_007AF927:
    ecx = ebp + (-0x524); /* 0x007AF927: lea ecx, [ebp - 0x524] */
    goto L_0051C800; /* 0x007AF92D: jmp 0x51c800 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0051C800: RECOMP_ITAIL(0x0051C800u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF932(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF932u);

L_007AF932:
    ecx = ebp + (-0x4D8); /* 0x007AF932: lea ecx, [ebp - 0x4d8] */
    goto L_0040A000; /* 0x007AF938: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF93D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF93Du);

L_007AF93D:
    ecx = ebp + (-0x4C0); /* 0x007AF93D: lea ecx, [ebp - 0x4c0] */
    goto L_0040A000; /* 0x007AF943: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF948(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF948u);

L_007AF948:
    ecx = ebp + (-0x4E0); /* 0x007AF948: lea ecx, [ebp - 0x4e0] */
    goto L_0051C800; /* 0x007AF94E: jmp 0x51c800 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0051C800: RECOMP_ITAIL(0x0051C800u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF953(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF953u);

L_007AF953:
    ecx = ebp + (-0x494); /* 0x007AF953: lea ecx, [ebp - 0x494] */
    goto L_0040A000; /* 0x007AF959: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF95E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF95Eu);

L_007AF95E:
    ecx = ebp + (-0x47C); /* 0x007AF95E: lea ecx, [ebp - 0x47c] */
    goto L_0040A000; /* 0x007AF964: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF969(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF969u);

L_007AF969:
    ecx = ebp + (-0x49C); /* 0x007AF969: lea ecx, [ebp - 0x49c] */
    goto L_0051C800; /* 0x007AF96F: jmp 0x51c800 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0051C800: RECOMP_ITAIL(0x0051C800u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF974(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF974u);

L_007AF974:
    ecx = ebp + (-0x450); /* 0x007AF974: lea ecx, [ebp - 0x450] */
    goto L_0040A000; /* 0x007AF97A: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}
