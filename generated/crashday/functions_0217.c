#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_007AE848(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE848u);

    goto L_007AE848;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AE848:
    edx = MEM32(esp + 0x8); /* 0x007AE848: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007AE84C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xC)); /* 0x007AE84F: mov ecx, dword ptr [edx - 0xc] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AE852: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AE854: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00838254u; /* 0x007AE859: mov eax, 0x838254 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AE85E: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AE870(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE870u);

L_007AE870:
    ecx = MEM32(ebp + (-0x10)); /* 0x007AE870: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x007AE873: add ecx, 4 */
    _flag_k = FK_ADD;
    goto L_005D6D20; /* 0x007AE876: jmp 0x5d6d20 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005D6D20: RECOMP_ITAIL(0x005D6D20u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AE87B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE87Bu);

    goto L_007AE87B;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AE87B:
    edx = MEM32(esp + 0x8); /* 0x007AE87B: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007AE87F: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xC)); /* 0x007AE882: mov ecx, dword ptr [edx - 0xc] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AE885: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AE887: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00838280u; /* 0x007AE88C: mov eax, 0x838280 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AE891: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AE8A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE8A0u);

L_007AE8A0:
    ecx = MEM32(ebp + (-0x14)); /* 0x007AE8A0: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x007AE8A3: add ecx, 4 */
    _flag_k = FK_ADD;
    goto L_005DBAA0; /* 0x007AE8A6: jmp 0x5dbaa0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005DBAA0: RECOMP_ITAIL(0x005DBAA0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AE8AB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE8ABu);

L_007AE8AB:
    ecx = MEM32(ebp + (-0x10)); /* 0x007AE8AB: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x007AE8AE: add ecx, 8 */
    _flag_k = FK_ADD;
    goto L_005D6DF0; /* 0x007AE8B1: jmp 0x5d6df0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005D6DF0: RECOMP_ITAIL(0x005D6DF0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AE8B6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE8B6u);

L_007AE8B6:
    ecx = MEM32(ebp + (-0x14)); /* 0x007AE8B6: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x007AE8B9: add ecx, 4 */
    _flag_k = FK_ADD;
    goto L_005DBAA0; /* 0x007AE8BC: jmp 0x5dbaa0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005DBAA0: RECOMP_ITAIL(0x005DBAA0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AE8C1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE8C1u);

L_007AE8C1:
    ecx = MEM32(ebp + (-0x10)); /* 0x007AE8C1: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x18u; /* 0x007AE8C4: add ecx, 0x18 */
    _flag_k = FK_ADD;
    goto L_005D6DF0; /* 0x007AE8C7: jmp 0x5d6df0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005D6DF0: RECOMP_ITAIL(0x005D6DF0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AE8CC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE8CCu);

    goto L_007AE8CC;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AE8CC:
    edx = MEM32(esp + 0x8); /* 0x007AE8CC: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007AE8D0: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xC)); /* 0x007AE8D3: mov ecx, dword ptr [edx - 0xc] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AE8D6: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AE8D8: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008382ACu; /* 0x007AE8DD: mov eax, 0x8382ac */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AE8E2: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AE8F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE8F0u);

L_007AE8F0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007AE8F0: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x007AE8F3: add ecx, 8 */
    _flag_k = FK_ADD;
    goto L_005D6DF0; /* 0x007AE8F6: jmp 0x5d6df0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005D6DF0: RECOMP_ITAIL(0x005D6DF0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AE8FB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE8FBu);

L_007AE8FB:
    ecx = MEM32(ebp + (-0x10)); /* 0x007AE8FB: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x18u; /* 0x007AE8FE: add ecx, 0x18 */
    _flag_k = FK_ADD;
    goto L_005D6DF0; /* 0x007AE901: jmp 0x5d6df0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005D6DF0: RECOMP_ITAIL(0x005D6DF0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AE906(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE906u);

L_007AE906:
    ecx = MEM32(ebp + (-0x14)); /* 0x007AE906: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x007AE909: add ecx, 4 */
    _flag_k = FK_ADD;
    goto L_005DBAA0; /* 0x007AE90C: jmp 0x5dbaa0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005DBAA0: RECOMP_ITAIL(0x005DBAA0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AE911(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE911u);

L_007AE911:
    ecx = MEM32(ebp + (-0x14)); /* 0x007AE911: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x007AE914: add ecx, 4 */
    _flag_k = FK_ADD;
    goto L_005DBAA0; /* 0x007AE917: jmp 0x5dbaa0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005DBAA0: RECOMP_ITAIL(0x005DBAA0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AE91C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE91Cu);

    goto L_007AE91C;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AE91C:
    edx = MEM32(esp + 0x8); /* 0x007AE91C: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007AE920: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x007AE923: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AE926: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AE928: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008382F0u; /* 0x007AE92D: mov eax, 0x8382f0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AE932: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AE940(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE940u);

L_007AE940:
    ecx = MEM32(ebp + (-0x10)); /* 0x007AE940: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x007AE943: add ecx, 4 */
    _flag_k = FK_ADD;
    goto L_005DBAA0; /* 0x007AE946: jmp 0x5dbaa0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005DBAA0: RECOMP_ITAIL(0x005DBAA0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AE94B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE94Bu);

    goto L_007AE94B;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AE94B:
    edx = MEM32(esp + 0x8); /* 0x007AE94B: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007AE94F: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xC)); /* 0x007AE952: mov ecx, dword ptr [edx - 0xc] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AE955: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AE957: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00838334u; /* 0x007AE95C: mov eax, 0x838334 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AE961: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AE970(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE970u);

L_007AE970:
    ecx = 0x00865CB8u; /* 0x007AE970: mov ecx, 0x865cb8 */
    goto L_0040A000; /* 0x007AE975: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AE97A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE97Au);

    goto L_007AE97A;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AE97A:
    edx = MEM32(esp + 0x8); /* 0x007AE97A: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007AE97E: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x4)); /* 0x007AE981: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AE984: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AE986: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00838360u; /* 0x007AE98B: mov eax, 0x838360 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AE990: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AE9A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE9A0u);

L_007AE9A0:
    ecx = 0x00865CE8u; /* 0x007AE9A0: mov ecx, 0x865ce8 */
    goto L_0040A000; /* 0x007AE9A5: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AE9AA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE9AAu);

L_007AE9AA:
    ecx = 0x00865D00u; /* 0x007AE9AA: mov ecx, 0x865d00 */
    goto L_0040A000; /* 0x007AE9AF: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AE9B4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE9B4u);

L_007AE9B4:
    ecx = 0x00865D18u; /* 0x007AE9B4: mov ecx, 0x865d18 */
    goto L_0040A000; /* 0x007AE9B9: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AE9BE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE9BEu);

    goto L_007AE9BE;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AE9BE:
    edx = MEM32(esp + 0x8); /* 0x007AE9BE: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007AE9C2: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x4)); /* 0x007AE9C5: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AE9C8: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AE9CA: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083838Cu; /* 0x007AE9CF: mov eax, 0x83838c */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AE9D4: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AE9E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE9E0u);

L_007AE9E0:
    ecx = 0x00865D48u; /* 0x007AE9E0: mov ecx, 0x865d48 */
    goto L_0040A000; /* 0x007AE9E5: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AE9EA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE9EAu);

L_007AE9EA:
    ecx = 0x00865D60u; /* 0x007AE9EA: mov ecx, 0x865d60 */
    goto L_0040A000; /* 0x007AE9EF: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AE9F4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE9F4u);

L_007AE9F4:
    ecx = 0x00865D78u; /* 0x007AE9F4: mov ecx, 0x865d78 */
    goto L_0040A000; /* 0x007AE9F9: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AE9FE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AE9FEu);

    goto L_007AE9FE;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AE9FE:
    edx = MEM32(esp + 0x8); /* 0x007AE9FE: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007AEA02: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x8)); /* 0x007AEA05: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AEA08: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AEA0A: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008383C8u; /* 0x007AEA0F: mov eax, 0x8383c8 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AEA14: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AEA20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEA20u);

L_007AEA20:
    goto L_005DBCA0; /* 0x007AEA20: jmp 0x5dbca0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005DBCA0: RECOMP_ITAIL(0x005DBCA0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AEA25(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEA25u);

L_007AEA25:
    ecx = MEM32(ebp + (-0x14)); /* 0x007AEA25: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040B340; /* 0x007AEA28: jmp 0x40b340 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B340: RECOMP_ITAIL(0x0040B340u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AEA2D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEA2Du);

L_007AEA2D:
    ecx = MEM32(ebp + (-0x14)); /* 0x007AEA2D: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040B2E0; /* 0x007AEA30: jmp 0x40b2e0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B2E0: RECOMP_ITAIL(0x0040B2E0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AEA35(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEA35u);

L_007AEA35:
    ecx = MEM32(ebp + (-0x10)); /* 0x007AEA35: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x14u; /* 0x007AEA38: add ecx, 0x14 */
    _flag_k = FK_ADD;
    goto L_005DBCB0; /* 0x007AEA3B: jmp 0x5dbcb0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005DBCB0: RECOMP_ITAIL(0x005DBCB0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AEA40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEA40u);

L_007AEA40:
    ecx = MEM32(ebp + (-0x14)); /* 0x007AEA40: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040B340; /* 0x007AEA43: jmp 0x40b340 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B340: RECOMP_ITAIL(0x0040B340u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AEA48(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEA48u);

L_007AEA48:
    ecx = MEM32(ebp + (-0x14)); /* 0x007AEA48: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040B2E0; /* 0x007AEA4B: jmp 0x40b2e0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B2E0: RECOMP_ITAIL(0x0040B2E0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AEA50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEA50u);

L_007AEA50:
    ecx = MEM32(ebp + (-0x14)); /* 0x007AEA50: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040B290; /* 0x007AEA53: jmp 0x40b290 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B290: RECOMP_ITAIL(0x0040B290u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AEA58(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEA58u);

L_007AEA58:
    ecx = MEM32(ebp + (-0x14)); /* 0x007AEA58: mov ecx, dword ptr [ebp - 0x14] */
    goto L_005DBDC0; /* 0x007AEA5B: jmp 0x5dbdc0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005DBDC0: RECOMP_ITAIL(0x005DBDC0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AEA60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEA60u);

L_007AEA60:
    ecx = MEM32(ebp + (-0x10)); /* 0x007AEA60: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x1Cu; /* 0x007AEA63: add ecx, 0x1c */
    _flag_k = FK_ADD;
    goto L_005D6F70; /* 0x007AEA66: jmp 0x5d6f70 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005D6F70: RECOMP_ITAIL(0x005D6F70u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AEA6B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEA6Bu);

L_007AEA6B:
    ecx = MEM32(ebp + (-0x14)); /* 0x007AEA6B: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040A000; /* 0x007AEA6E: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AEA73(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEA73u);

L_007AEA73:
    ecx = MEM32(ebp + (-0x10)); /* 0x007AEA73: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x28u; /* 0x007AEA76: add ecx, 0x28 */
    _flag_k = FK_ADD;
    goto L_004296F0; /* 0x007AEA79: jmp 0x4296f0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_004296F0: RECOMP_ITAIL(0x004296F0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AEA7E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEA7Eu);

    goto L_007AEA7E;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AEA7E:
    edx = MEM32(esp + 0x8); /* 0x007AEA7E: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007AEA82: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x007AEA85: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AEA88: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AEA8A: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00838408u; /* 0x007AEA8F: mov eax, 0x838408 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AEA94: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AEAA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEAA0u);

L_007AEAA0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007AEAA0: mov ecx, dword ptr [ebp - 0x10] */
    goto L_005DBDC0; /* 0x007AEAA3: jmp 0x5dbdc0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005DBDC0: RECOMP_ITAIL(0x005DBDC0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AEAA8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEAA8u);

L_007AEAA8:
    ecx = MEM32(ebp + (-0x10)); /* 0x007AEAA8: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040B290; /* 0x007AEAAB: jmp 0x40b290 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B290: RECOMP_ITAIL(0x0040B290u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AEAB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEAB0u);

L_007AEAB0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007AEAB0: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040B2E0; /* 0x007AEAB3: jmp 0x40b2e0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B2E0: RECOMP_ITAIL(0x0040B2E0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AEAB8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEAB8u);

L_007AEAB8:
    ecx = MEM32(ebp + (-0x10)); /* 0x007AEAB8: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040B340; /* 0x007AEABB: jmp 0x40b340 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B340: RECOMP_ITAIL(0x0040B340u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AEAC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEAC0u);

    goto L_007AEAC0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AEAC0:
    edx = MEM32(esp + 0x8); /* 0x007AEAC0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007AEAC4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x10)); /* 0x007AEAC7: mov ecx, dword ptr [edx - 0x10] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AEACA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AEACC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00838488u; /* 0x007AEAD1: mov eax, 0x838488 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AEAD6: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AEAE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEAE0u);

L_007AEAE0:
    goto L_005DBCA0; /* 0x007AEAE0: jmp 0x5dbca0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005DBCA0: RECOMP_ITAIL(0x005DBCA0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AEAE5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEAE5u);

L_007AEAE5:
    ecx = MEM32(ebp + (-0x10)); /* 0x007AEAE5: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x14u; /* 0x007AEAE8: add ecx, 0x14 */
    _flag_k = FK_ADD;
    goto L_005DBCB0; /* 0x007AEAEB: jmp 0x5dbcb0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005DBCB0: RECOMP_ITAIL(0x005DBCB0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AEAF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEAF0u);

L_007AEAF0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007AEAF0: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x1Cu; /* 0x007AEAF3: add ecx, 0x1c */
    _flag_k = FK_ADD;
    goto L_005D6F70; /* 0x007AEAF6: jmp 0x5d6f70 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005D6F70: RECOMP_ITAIL(0x005D6F70u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AEAFB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEAFBu);

L_007AEAFB:
    ecx = MEM32(ebp + (-0x10)); /* 0x007AEAFB: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x28u; /* 0x007AEAFE: add ecx, 0x28 */
    _flag_k = FK_ADD;
    goto L_004296F0; /* 0x007AEB01: jmp 0x4296f0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_004296F0: RECOMP_ITAIL(0x004296F0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AEB06(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEB06u);

L_007AEB06:
    ecx = MEM32(ebp + (-0x14)); /* 0x007AEB06: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040A000; /* 0x007AEB09: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AEB0E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEB0Eu);

L_007AEB0E:
    ecx = MEM32(ebp + (-0x14)); /* 0x007AEB0E: mov ecx, dword ptr [ebp - 0x14] */
    goto L_005DBDC0; /* 0x007AEB11: jmp 0x5dbdc0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005DBDC0: RECOMP_ITAIL(0x005DBDC0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AEB16(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEB16u);

L_007AEB16:
    ecx = MEM32(ebp + (-0x14)); /* 0x007AEB16: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040B290; /* 0x007AEB19: jmp 0x40b290 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B290: RECOMP_ITAIL(0x0040B290u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AEB1E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEB1Eu);

L_007AEB1E:
    ecx = MEM32(ebp + (-0x14)); /* 0x007AEB1E: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040B2E0; /* 0x007AEB21: jmp 0x40b2e0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B2E0: RECOMP_ITAIL(0x0040B2E0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AEB26(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEB26u);

L_007AEB26:
    ecx = MEM32(ebp + (-0x14)); /* 0x007AEB26: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040B340; /* 0x007AEB29: jmp 0x40b340 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B340: RECOMP_ITAIL(0x0040B340u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AEB2E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEB2Eu);

    goto L_007AEB2E;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AEB2E:
    edx = MEM32(esp + 0x8); /* 0x007AEB2E: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007AEB32: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x007AEB35: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AEB38: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AEB3A: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008384D0u; /* 0x007AEB3F: mov eax, 0x8384d0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AEB44: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AEB50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEB50u);

L_007AEB50:
    ecx = ebp + (-0x34); /* 0x007AEB50: lea ecx, [ebp - 0x34] */
    goto L_005F3D00; /* 0x007AEB53: jmp 0x5f3d00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005F3D00: RECOMP_ITAIL(0x005F3D00u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AEB58(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEB58u);

L_007AEB58:
    ecx = ebp + (-0x20); /* 0x007AEB58: lea ecx, [ebp - 0x20] */
    goto L_00419790; /* 0x007AEB5B: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AEB60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEB60u);

    goto L_007AEB60;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AEB60:
    edx = MEM32(esp + 0x8); /* 0x007AEB60: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007AEB64: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x34)); /* 0x007AEB67: mov ecx, dword ptr [edx - 0x34] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AEB6A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AEB6C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00838540u; /* 0x007AEB71: mov eax, 0x838540 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AEB76: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AEB80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEB80u);

L_007AEB80:
    ecx = ebp + (-0x30); /* 0x007AEB80: lea ecx, [ebp - 0x30] */
    goto L_005F3D00; /* 0x007AEB83: jmp 0x5f3d00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005F3D00: RECOMP_ITAIL(0x005F3D00u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AEB88(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEB88u);

L_007AEB88:
    ecx = ebp + (-0x1C); /* 0x007AEB88: lea ecx, [ebp - 0x1c] */
    goto L_00419790; /* 0x007AEB8B: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AEB90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEB90u);

    goto L_007AEB90;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AEB90:
    edx = MEM32(esp + 0x8); /* 0x007AEB90: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x3C); /* 0x007AEB94: lea eax, [edx - 0x3c] */
    ecx = MEM32(edx + (-0x40)); /* 0x007AEB97: mov ecx, dword ptr [edx - 0x40] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AEB9A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AEB9C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00838574u; /* 0x007AEBA1: mov eax, 0x838574 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AEBA6: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AEBB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEBB0u);

L_007AEBB0:
    ecx = ebp + (-0x38); /* 0x007AEBB0: lea ecx, [ebp - 0x38] */
    goto L_005F3D00; /* 0x007AEBB3: jmp 0x5f3d00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005F3D00: RECOMP_ITAIL(0x005F3D00u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AEBB8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEBB8u);

L_007AEBB8:
    ecx = ebp + (-0x24); /* 0x007AEBB8: lea ecx, [ebp - 0x24] */
    goto L_00419790; /* 0x007AEBBB: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AEBC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEBC0u);

    goto L_007AEBC0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AEBC0:
    edx = MEM32(esp + 0x8); /* 0x007AEBC0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007AEBC4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x3C)); /* 0x007AEBC7: mov ecx, dword ptr [edx - 0x3c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AEBCA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AEBCC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008385A8u; /* 0x007AEBD1: mov eax, 0x8385a8 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AEBD6: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AEBE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEBE0u);

L_007AEBE0:
    ecx = ebp + (-0x3C); /* 0x007AEBE0: lea ecx, [ebp - 0x3c] */
    goto L_005F3D00; /* 0x007AEBE3: jmp 0x5f3d00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005F3D00: RECOMP_ITAIL(0x005F3D00u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AEBE8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEBE8u);

L_007AEBE8:
    ecx = ebp + (-0x28); /* 0x007AEBE8: lea ecx, [ebp - 0x28] */
    goto L_00419790; /* 0x007AEBEB: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AEBF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEBF0u);

    goto L_007AEBF0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AEBF0:
    edx = MEM32(esp + 0x8); /* 0x007AEBF0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007AEBF4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x40)); /* 0x007AEBF7: mov ecx, dword ptr [edx - 0x40] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AEBFA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AEBFC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008385DCu; /* 0x007AEC01: mov eax, 0x8385dc */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AEC06: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AEC10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEC10u);

L_007AEC10:
    ecx = ebp + (-0x30); /* 0x007AEC10: lea ecx, [ebp - 0x30] */
    goto L_005F3D00; /* 0x007AEC13: jmp 0x5f3d00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005F3D00: RECOMP_ITAIL(0x005F3D00u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AEC18(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEC18u);

L_007AEC18:
    ecx = ebp + (-0x1C); /* 0x007AEC18: lea ecx, [ebp - 0x1c] */
    goto L_00419790; /* 0x007AEC1B: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AEC20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEC20u);

    goto L_007AEC20;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AEC20:
    edx = MEM32(esp + 0x8); /* 0x007AEC20: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x34); /* 0x007AEC24: lea eax, [edx - 0x34] */
    ecx = MEM32(edx + (-0x38)); /* 0x007AEC27: mov ecx, dword ptr [edx - 0x38] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AEC2A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AEC2C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00838610u; /* 0x007AEC31: mov eax, 0x838610 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AEC36: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AEC40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEC40u);

L_007AEC40:
    ecx = ebp + (-0x34); /* 0x007AEC40: lea ecx, [ebp - 0x34] */
    goto L_005F3D00; /* 0x007AEC43: jmp 0x5f3d00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005F3D00: RECOMP_ITAIL(0x005F3D00u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AEC48(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEC48u);

L_007AEC48:
    ecx = ebp + (-0x20); /* 0x007AEC48: lea ecx, [ebp - 0x20] */
    goto L_00419790; /* 0x007AEC4B: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AEC50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEC50u);

    goto L_007AEC50;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AEC50:
    edx = MEM32(esp + 0x8); /* 0x007AEC50: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007AEC54: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x38)); /* 0x007AEC57: mov ecx, dword ptr [edx - 0x38] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AEC5A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AEC5C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00838644u; /* 0x007AEC61: mov eax, 0x838644 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AEC66: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AEC70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEC70u);

L_007AEC70:
    ecx = MEM32(ebp + (-0x18)); /* 0x007AEC70: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x007AEC73: add ecx, 4 */
    _flag_k = FK_ADD;
    goto L_005DBAA0; /* 0x007AEC76: jmp 0x5dbaa0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005DBAA0: RECOMP_ITAIL(0x005DBAA0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AEC7B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEC7Bu);

L_007AEC7B:
    ecx = MEM32(ebp + (-0x14)); /* 0x007AEC7B: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x007AEC7E: add ecx, 8 */
    _flag_k = FK_ADD;
    goto L_005D6DF0; /* 0x007AEC81: jmp 0x5d6df0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005D6DF0: RECOMP_ITAIL(0x005D6DF0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AEC86(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEC86u);

L_007AEC86:
    ecx = MEM32(ebp + (-0x1C)); /* 0x007AEC86: mov ecx, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x007AEC89: add ecx, 4 */
    _flag_k = FK_ADD;
    goto L_005DBAA0; /* 0x007AEC8C: jmp 0x5dbaa0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005DBAA0: RECOMP_ITAIL(0x005DBAA0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AEC91(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEC91u);

L_007AEC91:
    ecx = MEM32(ebp + (-0x14)); /* 0x007AEC91: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x18u; /* 0x007AEC94: add ecx, 0x18 */
    _flag_k = FK_ADD;
    goto L_005D6DF0; /* 0x007AEC97: jmp 0x5d6df0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005D6DF0: RECOMP_ITAIL(0x005D6DF0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AEC9C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEC9Cu);

L_007AEC9C:
    ecx = MEM32(ebp + (-0x10)); /* 0x007AEC9C: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x007AEC9F: add ecx, 4 */
    _flag_k = FK_ADD;
    goto L_005D6D20; /* 0x007AECA2: jmp 0x5d6d20 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005D6D20: RECOMP_ITAIL(0x005D6D20u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AECA7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AECA7u);

L_007AECA7:
    ecx = ebp + (-0x4C); /* 0x007AECA7: lea ecx, [ebp - 0x4c] */
    goto L_005D7D50; /* 0x007AECAA: jmp 0x5d7d50 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005D7D50: RECOMP_ITAIL(0x005D7D50u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AECAF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AECAFu);

L_007AECAF:
    ecx = ebp + (-0x54); /* 0x007AECAF: lea ecx, [ebp - 0x54] */
    goto L_005D7C40; /* 0x007AECB2: jmp 0x5d7c40 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005D7C40: RECOMP_ITAIL(0x005D7C40u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AECB7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AECB7u);

L_007AECB7:
    ecx = ebp + (-0x4C); /* 0x007AECB7: lea ecx, [ebp - 0x4c] */
    goto L_005D7D50; /* 0x007AECBA: jmp 0x5d7d50 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005D7D50: RECOMP_ITAIL(0x005D7D50u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AECBF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AECBFu);

L_007AECBF:
    ecx = MEM32(ebp + (-0x20)); /* 0x007AECBF: mov ecx, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x007AECC2: add ecx, 4 */
    _flag_k = FK_ADD;
    goto L_005D6D20; /* 0x007AECC5: jmp 0x5d6d20 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005D6D20: RECOMP_ITAIL(0x005D6D20u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AECCA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AECCAu);

    goto L_007AECCA;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AECCA:
    edx = MEM32(esp + 0x8); /* 0x007AECCA: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007AECCE: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x54)); /* 0x007AECD1: mov ecx, dword ptr [edx - 0x54] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AECD4: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AECD6: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00838678u; /* 0x007AECDB: mov eax, 0x838678 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AECE0: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AECF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AECF0u);

L_007AECF0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007AECF0: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x007AECF3: add ecx, 8 */
    _flag_k = FK_ADD;
    goto L_005D7D50; /* 0x007AECF6: jmp 0x5d7d50 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005D7D50: RECOMP_ITAIL(0x005D7D50u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AECFB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AECFBu);

L_007AECFB:
    ecx = MEM32(ebp + (-0x10)); /* 0x007AECFB: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x007AECFE: add ecx, 4 */
    _flag_k = FK_ADD;
    goto L_005D6D20; /* 0x007AED01: jmp 0x5d6d20 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005D6D20: RECOMP_ITAIL(0x005D6D20u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AED06(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AED06u);

    goto L_007AED06;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AED06:
    edx = MEM32(esp + 0x8); /* 0x007AED06: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007AED0A: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x8)); /* 0x007AED0D: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AED10: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AED12: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008386E8u; /* 0x007AED17: mov eax, 0x8386e8 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AED1C: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AED30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AED30u);

L_007AED30:
    ecx = MEM32(ebp + (-0x14)); /* 0x007AED30: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x007AED33: add ecx, 4 */
    _flag_k = FK_ADD;
    goto L_005DBAA0; /* 0x007AED36: jmp 0x5dbaa0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005DBAA0: RECOMP_ITAIL(0x005DBAA0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AED3B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AED3Bu);

L_007AED3B:
    ecx = MEM32(ebp + 0x8); /* 0x007AED3B: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x007AED3E: add ecx, 8 */
    _flag_k = FK_ADD;
    goto L_005D6DF0; /* 0x007AED41: jmp 0x5d6df0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005D6DF0: RECOMP_ITAIL(0x005D6DF0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AED46(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AED46u);

L_007AED46:
    ecx = MEM32(ebp + (-0x14)); /* 0x007AED46: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x007AED49: add ecx, 4 */
    _flag_k = FK_ADD;
    goto L_005DBAA0; /* 0x007AED4C: jmp 0x5dbaa0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005DBAA0: RECOMP_ITAIL(0x005DBAA0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AED51(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AED51u);

L_007AED51:
    ecx = MEM32(ebp + 0x8); /* 0x007AED51: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x18u; /* 0x007AED54: add ecx, 0x18 */
    _flag_k = FK_ADD;
    goto L_005D6DF0; /* 0x007AED57: jmp 0x5d6df0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005D6DF0: RECOMP_ITAIL(0x005D6DF0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AED5C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AED5Cu);

L_007AED5C:
    ecx = MEM32(ebp + (-0x10)); /* 0x007AED5C: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x007AED5F: add ecx, 4 */
    _flag_k = FK_ADD;
    goto L_005D6D20; /* 0x007AED62: jmp 0x5d6d20 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005D6D20: RECOMP_ITAIL(0x005D6D20u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AED67(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AED67u);

    goto L_007AED67;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AED67:
    edx = MEM32(esp + 0x8); /* 0x007AED67: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007AED6B: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x007AED6E: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AED71: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AED73: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083871Cu; /* 0x007AED78: mov eax, 0x83871c */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AED7D: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AED90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AED90u);

L_007AED90:
    ecx = MEM32(ebp + (-0x10)); /* 0x007AED90: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x007AED93: add ecx, 4 */
    _flag_k = FK_ADD;
    goto L_005D6D20; /* 0x007AED96: jmp 0x5d6d20 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005D6D20: RECOMP_ITAIL(0x005D6D20u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AED9B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AED9Bu);

    goto L_007AED9B;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AED9B:
    edx = MEM32(esp + 0x8); /* 0x007AED9B: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007AED9F: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x8)); /* 0x007AEDA2: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AEDA5: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AEDA7: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00838768u; /* 0x007AEDAC: mov eax, 0x838768 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AEDB1: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AEDC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEDC0u);

L_007AEDC0:
    ecx = MEM32(ebp + (-0x20)); /* 0x007AEDC0: mov ecx, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x007AEDC3: add ecx, 4 */
    _flag_k = FK_ADD;
    goto L_005DBAA0; /* 0x007AEDC6: jmp 0x5dbaa0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005DBAA0: RECOMP_ITAIL(0x005DBAA0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AEDCB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEDCBu);

L_007AEDCB:
    ecx = MEM32(ebp + (-0x1C)); /* 0x007AEDCB: mov ecx, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x007AEDCE: add ecx, 8 */
    _flag_k = FK_ADD;
    goto L_005D6DF0; /* 0x007AEDD1: jmp 0x5d6df0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005D6DF0: RECOMP_ITAIL(0x005D6DF0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AEDD6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEDD6u);

L_007AEDD6:
    ecx = MEM32(ebp + (-0x24)); /* 0x007AEDD6: mov ecx, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x007AEDD9: add ecx, 4 */
    _flag_k = FK_ADD;
    goto L_005DBAA0; /* 0x007AEDDC: jmp 0x5dbaa0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005DBAA0: RECOMP_ITAIL(0x005DBAA0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AEDE1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEDE1u);

L_007AEDE1:
    ecx = MEM32(ebp + (-0x1C)); /* 0x007AEDE1: mov ecx, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x18u; /* 0x007AEDE4: add ecx, 0x18 */
    _flag_k = FK_ADD;
    goto L_005D6DF0; /* 0x007AEDE7: jmp 0x5d6df0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005D6DF0: RECOMP_ITAIL(0x005D6DF0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AEDEC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEDECu);

L_007AEDEC:
    ecx = MEM32(ebp + (-0x18)); /* 0x007AEDEC: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x007AEDEF: add ecx, 4 */
    _flag_k = FK_ADD;
    goto L_005D6D20; /* 0x007AEDF2: jmp 0x5d6d20 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005D6D20: RECOMP_ITAIL(0x005D6D20u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AEDF7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEDF7u);

L_007AEDF7:
    ecx = ebp + (-0x54); /* 0x007AEDF7: lea ecx, [ebp - 0x54] */
    goto L_005D7D50; /* 0x007AEDFA: jmp 0x5d7d50 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005D7D50: RECOMP_ITAIL(0x005D7D50u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AEDFF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEDFFu);

L_007AEDFF:
    ecx = ebp + (-0x5C); /* 0x007AEDFF: lea ecx, [ebp - 0x5c] */
    goto L_005D7C40; /* 0x007AEE02: jmp 0x5d7c40 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005D7C40: RECOMP_ITAIL(0x005D7C40u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AEE07(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEE07u);

L_007AEE07:
    ecx = ebp + (-0x54); /* 0x007AEE07: lea ecx, [ebp - 0x54] */
    goto L_005D7D50; /* 0x007AEE0A: jmp 0x5d7d50 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005D7D50: RECOMP_ITAIL(0x005D7D50u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AEE0F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEE0Fu);

L_007AEE0F:
    ecx = MEM32(ebp + (-0x28)); /* 0x007AEE0F: mov ecx, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x007AEE12: add ecx, 4 */
    _flag_k = FK_ADD;
    goto L_005D6D20; /* 0x007AEE15: jmp 0x5d6d20 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005D6D20: RECOMP_ITAIL(0x005D6D20u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}
