#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_0078D8E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078D8E0u);

L_0078D8E0:
    eax = MEM32(ebp + (-0x38)); /* 0x0078D8E0: mov eax, dword ptr [ebp - 0x38] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x0078D8E3: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0078D8F8; /* 0x0078D8E6: je 0x78d8f8 */
L_0078D8EC:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x38))); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(ebp + (-0x38)) = MEM32(ebp + (-0x38)) & 0xFFFFFFFEu; /* 0x0078D8EC: and dword ptr [ebp - 0x38], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x44)); /* 0x0078D8F0: mov ecx, dword ptr [ebp - 0x44] */
    goto L_0040A000; /* 0x0078D8F3: jmp 0x40a000 */
L_0078D8F8:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0078D8F8: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078D8F9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078D8F9u);

L_0078D8F9:
    ecx = ebp + (-0x28); /* 0x0078D8F9: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x0078D8FC: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078D901(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078D901u);

L_0078D901:
    goto L_00409980; /* 0x0078D901: jmp 0x409980 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00409980: RECOMP_ITAIL(0x00409980u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078D906(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078D906u);

    goto L_0078D906;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0078D906:
    edx = MEM32(esp + 0x8); /* 0x0078D906: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0078D90A: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x4C)); /* 0x0078D90D: mov ecx, dword ptr [edx - 0x4c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078D910: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078D912: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x0078D917: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078D91A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078D91C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00818A30u; /* 0x0078D921: mov eax, 0x818a30 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0078D926: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0078D930(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078D930u);

L_0078D930:
    ecx = ebp + 0x4C; /* 0x0078D930: lea ecx, [ebp + 0x4c] */
    goto L_0040A000; /* 0x0078D933: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078D938(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078D938u);

L_0078D938:
    ecx = ebp + 0x34; /* 0x0078D938: lea ecx, [ebp + 0x34] */
    goto L_0040A000; /* 0x0078D93B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078D940(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078D940u);

L_0078D940:
    ecx = ebp + 0x1C; /* 0x0078D940: lea ecx, [ebp + 0x1c] */
    goto L_0040A000; /* 0x0078D943: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078D948(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078D948u);

L_0078D948:
    ecx = MEM32(ebp + (-0x6C)); /* 0x0078D948: mov ecx, dword ptr [ebp - 0x6c] */
    goto L_0040A000; /* 0x0078D94B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078D950(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078D950u);

L_0078D950:
    ecx = MEM32(ebp + (-0x64)); /* 0x0078D950: mov ecx, dword ptr [ebp - 0x64] */
    goto L_0040A000; /* 0x0078D953: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078D958(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078D958u);

L_0078D958:
    ecx = MEM32(ebp + (-0x70)); /* 0x0078D958: mov ecx, dword ptr [ebp - 0x70] */
    goto L_0040A000; /* 0x0078D95B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078D960(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078D960u);

L_0078D960:
    ecx = MEM32(ebp + (-0x68)); /* 0x0078D960: mov ecx, dword ptr [ebp - 0x68] */
    goto L_004844F0; /* 0x0078D963: jmp 0x4844f0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_004844F0: RECOMP_ITAIL(0x004844F0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078D968(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078D968u);

L_0078D968:
    ecx = MEM32(ebp + (-0x68)); /* 0x0078D968: mov ecx, dword ptr [ebp - 0x68] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1F0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x1F0u; /* 0x0078D96B: add ecx, 0x1f0 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x0078D971: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078D976(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078D976u);

L_0078D976:
    ecx = MEM32(ebp + (-0x68)); /* 0x0078D976: mov ecx, dword ptr [ebp - 0x68] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x208u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x208u; /* 0x0078D979: add ecx, 0x208 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x0078D97F: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078D984(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078D984u);

L_0078D984:
    ecx = MEM32(ebp + (-0x68)); /* 0x0078D984: mov ecx, dword ptr [ebp - 0x68] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x220u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x220u; /* 0x0078D987: add ecx, 0x220 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x0078D98D: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078D992(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078D992u);

L_0078D992:
    ecx = ebp + (-0x44); /* 0x0078D992: lea ecx, [ebp - 0x44] */
    goto L_0040A000; /* 0x0078D995: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078D99A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078D99Au);

L_0078D99A:
    ecx = ebp + (-0x2C); /* 0x0078D99A: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x0078D99D: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078D9A2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078D9A2u);

L_0078D9A2:
    ecx = ebp + (-0x5C); /* 0x0078D9A2: lea ecx, [ebp - 0x5c] */
    goto L_0040A000; /* 0x0078D9A5: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078D9AA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078D9AAu);

    goto L_0078D9AA;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0078D9AA:
    edx = MEM32(esp + 0x8); /* 0x0078D9AA: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0078D9AE: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x78)); /* 0x0078D9B1: mov ecx, dword ptr [edx - 0x78] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078D9B4: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078D9B6: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x8)); /* 0x0078D9BB: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078D9BE: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078D9C0: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00818A70u; /* 0x0078D9C5: mov eax, 0x818a70 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0078D9CA: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0078D9D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078D9D0u);

L_0078D9D0:
    ecx = MEM32(ebp + (-0x10)); /* 0x0078D9D0: mov ecx, dword ptr [ebp - 0x10] */
    goto L_004844F0; /* 0x0078D9D3: jmp 0x4844f0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_004844F0: RECOMP_ITAIL(0x004844F0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078D9D8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078D9D8u);

L_0078D9D8:
    ecx = MEM32(ebp + (-0x10)); /* 0x0078D9D8: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1F0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x1F0u; /* 0x0078D9DB: add ecx, 0x1f0 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x0078D9E1: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078D9E6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078D9E6u);

L_0078D9E6:
    ecx = MEM32(ebp + (-0x10)); /* 0x0078D9E6: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x208u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x208u; /* 0x0078D9E9: add ecx, 0x208 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x0078D9EF: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078D9F4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078D9F4u);

L_0078D9F4:
    ecx = MEM32(ebp + (-0x10)); /* 0x0078D9F4: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x220u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x220u; /* 0x0078D9F7: add ecx, 0x220 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x0078D9FD: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078DA02(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078DA02u);

    goto L_0078DA02;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0078DA02:
    edx = MEM32(esp + 0x8); /* 0x0078DA02: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0078DA06: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x0078DA09: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078DA0C: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078DA0E: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00818B20u; /* 0x0078DA13: mov eax, 0x818b20 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0078DA18: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0078DA20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078DA20u);

L_0078DA20:
    ecx = MEM32(ebp + (-0x4C)); /* 0x0078DA20: mov ecx, dword ptr [ebp - 0x4c] */
    goto L_0040A000; /* 0x0078DA23: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078DA28(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078DA28u);

L_0078DA28:
    ecx = MEM32(ebp + (-0x50)); /* 0x0078DA28: mov ecx, dword ptr [ebp - 0x50] */
    goto L_0040A000; /* 0x0078DA2B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078DA30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078DA30u);

L_0078DA30:
    ecx = MEM32(ebp + (-0x54)); /* 0x0078DA30: mov ecx, dword ptr [ebp - 0x54] */
    goto L_0040A000; /* 0x0078DA33: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078DA38(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078DA38u);

L_0078DA38:
    ecx = MEM32(ebp + (-0x48)); /* 0x0078DA38: mov ecx, dword ptr [ebp - 0x48] */
    goto L_0040A000; /* 0x0078DA3B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078DA40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078DA40u);

L_0078DA40:
    ecx = MEM32(ebp + (-0x48)); /* 0x0078DA40: mov ecx, dword ptr [ebp - 0x48] */
    goto L_0040A000; /* 0x0078DA43: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078DA48(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078DA48u);

L_0078DA48:
    ecx = MEM32(ebp + (-0x4C)); /* 0x0078DA48: mov ecx, dword ptr [ebp - 0x4c] */
    goto L_0040A000; /* 0x0078DA4B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078DA50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078DA50u);

L_0078DA50:
    ecx = ebp + (-0x44); /* 0x0078DA50: lea ecx, [ebp - 0x44] */
    goto L_0040A000; /* 0x0078DA53: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078DA58(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078DA58u);

L_0078DA58:
    ecx = ebp + (-0x2C); /* 0x0078DA58: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x0078DA5B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078DA60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078DA60u);

    goto L_0078DA60;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0078DA60:
    edx = MEM32(esp + 0x8); /* 0x0078DA60: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x54); /* 0x0078DA64: lea eax, [edx - 0x54] */
    ecx = MEM32(edx + (-0x58)); /* 0x0078DA67: mov ecx, dword ptr [edx - 0x58] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078DA6A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078DA6C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x0078DA71: add eax, 0xc */
    _flag_k = FK_ADD;
    ecx = MEM32(edx + (-0x8)); /* 0x0078DA74: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078DA77: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078DA79: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00818B68u; /* 0x0078DA7E: mov eax, 0x818b68 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0078DA83: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0078DA90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078DA90u);

L_0078DA90:
    ecx = MEM32(ebp + (-0xF4)); /* 0x0078DA90: mov ecx, dword ptr [ebp - 0xf4] */
    goto L_0040A000; /* 0x0078DA96: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078DA9B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078DA9Bu);

L_0078DA9B:
    ecx = MEM32(ebp + (-0xF0)); /* 0x0078DA9B: mov ecx, dword ptr [ebp - 0xf0] */
    goto L_0040A000; /* 0x0078DAA1: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078DAA6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078DAA6u);

L_0078DAA6:
    ecx = ebp + (-0xD4); /* 0x0078DAA6: lea ecx, [ebp - 0xd4] */
    goto L_0040A000; /* 0x0078DAAC: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078DAB1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078DAB1u);

L_0078DAB1:
    ecx = ebp + (-0xEC); /* 0x0078DAB1: lea ecx, [ebp - 0xec] */
    goto L_0040A000; /* 0x0078DAB7: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078DABC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078DABCu);

L_0078DABC:
    ecx = MEM32(ebp + (-0xF4)); /* 0x0078DABC: mov ecx, dword ptr [ebp - 0xf4] */
    goto L_0040A000; /* 0x0078DAC2: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078DAC7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078DAC7u);

L_0078DAC7:
    ecx = MEM32(ebp + (-0xF0)); /* 0x0078DAC7: mov ecx, dword ptr [ebp - 0xf0] */
    goto L_0040A000; /* 0x0078DACD: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078DAD2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078DAD2u);

L_0078DAD2:
    ecx = ebp + (-0x74); /* 0x0078DAD2: lea ecx, [ebp - 0x74] */
    goto L_0040A000; /* 0x0078DAD5: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078DADA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078DADAu);

L_0078DADA:
    ecx = ebp + (-0x5C); /* 0x0078DADA: lea ecx, [ebp - 0x5c] */
    goto L_0040A000; /* 0x0078DADD: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078DAE2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078DAE2u);

L_0078DAE2:
    ecx = ebp + (-0x44); /* 0x0078DAE2: lea ecx, [ebp - 0x44] */
    goto L_0040A000; /* 0x0078DAE5: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078DAEA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078DAEAu);

L_0078DAEA:
    ecx = ebp + (-0x8C); /* 0x0078DAEA: lea ecx, [ebp - 0x8c] */
    goto L_0040A000; /* 0x0078DAF0: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078DAF5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078DAF5u);

L_0078DAF5:
    ecx = ebp + (-0xA4); /* 0x0078DAF5: lea ecx, [ebp - 0xa4] */
    goto L_0040A000; /* 0x0078DAFB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078DB00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078DB00u);

L_0078DB00:
    ecx = ebp + (-0x2C); /* 0x0078DB00: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x0078DB03: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078DB08(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078DB08u);

L_0078DB08:
    ecx = MEM32(ebp + (-0xF4)); /* 0x0078DB08: mov ecx, dword ptr [ebp - 0xf4] */
    goto L_0040A000; /* 0x0078DB0E: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078DB13(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078DB13u);

L_0078DB13:
    ecx = ebp + (-0xBC); /* 0x0078DB13: lea ecx, [ebp - 0xbc] */
    goto L_0040A000; /* 0x0078DB19: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078DB1E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078DB1Eu);

    goto L_0078DB1E;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0078DB1E:
    edx = MEM32(esp + 0x8); /* 0x0078DB1E: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0xFC); /* 0x0078DB22: lea eax, [edx - 0xfc] */
    ecx = MEM32(edx + (-0x100)); /* 0x0078DB28: mov ecx, dword ptr [edx - 0x100] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078DB2E: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078DB30: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x0078DB35: add eax, 0xc */
    _flag_k = FK_ADD;
    ecx = MEM32(edx + (-0x8)); /* 0x0078DB38: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078DB3B: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078DB3D: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00818BD0u; /* 0x0078DB42: mov eax, 0x818bd0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0078DB47: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0078DB50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078DB50u);

L_0078DB50:
    ecx = ebp + (-0x9C); /* 0x0078DB50: lea ecx, [ebp - 0x9c] */
    goto L_0040A000; /* 0x0078DB56: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078DB5B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078DB5Bu);

L_0078DB5B:
    ecx = ebp + (-0x6C); /* 0x0078DB5B: lea ecx, [ebp - 0x6c] */
    goto L_0040A000; /* 0x0078DB5E: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078DB63(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078DB63u);

L_0078DB63:
    ecx = ebp + (-0x9C); /* 0x0078DB63: lea ecx, [ebp - 0x9c] */
    goto L_0040A000; /* 0x0078DB69: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078DB6E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078DB6Eu);

L_0078DB6E:
    ecx = ebp + (-0x84); /* 0x0078DB6E: lea ecx, [ebp - 0x84] */
    goto L_0040A000; /* 0x0078DB74: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078DB79(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078DB79u);

    goto L_0078DB79;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0078DB79:
    edx = MEM32(esp + 0x8); /* 0x0078DB79: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0xA4); /* 0x0078DB7D: lea eax, [edx - 0xa4] */
    ecx = MEM32(edx + (-0xA8)); /* 0x0078DB83: mov ecx, dword ptr [edx - 0xa8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078DB89: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078DB8B: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x0078DB90: add eax, 0xc */
    _flag_k = FK_ADD;
    ecx = MEM32(edx + (-0x8)); /* 0x0078DB93: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078DB96: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078DB98: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00818C68u; /* 0x0078DB9D: mov eax, 0x818c68 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0078DBA2: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0078DBB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078DBB0u);

L_0078DBB0:
    ecx = ebp + 0x8; /* 0x0078DBB0: lea ecx, [ebp + 8] */
    goto L_0040A000; /* 0x0078DBB3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078DBB8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078DBB8u);

L_0078DBB8:
    ecx = ebp + (-0x28); /* 0x0078DBB8: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x0078DBBB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078DBC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078DBC0u);

    goto L_0078DBC0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0078DBC0:
    edx = MEM32(esp + 0x8); /* 0x0078DBC0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0078DBC4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x34)); /* 0x0078DBC7: mov ecx, dword ptr [edx - 0x34] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078DBCA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078DBCC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x0078DBD1: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078DBD4: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078DBD6: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00818CB4u; /* 0x0078DBDB: mov eax, 0x818cb4 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0078DBE0: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0078DBF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078DBF0u);

L_0078DBF0:
    ecx = ebp + 0x44; /* 0x0078DBF0: lea ecx, [ebp + 0x44] */
    goto L_0040A000; /* 0x0078DBF3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078DBF8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078DBF8u);

L_0078DBF8:
    ecx = ebp + 0x2C; /* 0x0078DBF8: lea ecx, [ebp + 0x2c] */
    goto L_0040A000; /* 0x0078DBFB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078DC00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078DC00u);

L_0078DC00:
    ecx = ebp + 0x14; /* 0x0078DC00: lea ecx, [ebp + 0x14] */
    goto L_0040A000; /* 0x0078DC03: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078DC08(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078DC08u);

L_0078DC08:
    ecx = MEM32(ebp + (-0x10)); /* 0x0078DC08: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040A000; /* 0x0078DC0B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078DC10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078DC10u);

L_0078DC10:
    ecx = MEM32(ebp + (-0x14)); /* 0x0078DC10: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040A000; /* 0x0078DC13: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078DC18(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078DC18u);

L_0078DC18:
    ecx = MEM32(ebp + (-0x20)); /* 0x0078DC18: mov ecx, dword ptr [ebp - 0x20] */
    goto L_00497AB0; /* 0x0078DC1B: jmp 0x497ab0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00497AB0: RECOMP_ITAIL(0x00497AB0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078DC20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078DC20u);

L_0078DC20:
    eax = MEM32(ebp + (-0x14)); /* 0x0078DC20: mov eax, dword ptr [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x0078DC23: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0078DC24: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0078DC2A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0078DC2B: ret  */
    RECOMP_REGS_OUT();
}

void sub_0078DC2C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078DC2Cu);

L_0078DC2C:
    ecx = MEM32(ebp + (-0x10)); /* 0x0078DC2C: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040A000; /* 0x0078DC2F: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078DC34(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078DC34u);

L_0078DC34:
    ecx = MEM32(ebp + (-0x18)); /* 0x0078DC34: mov ecx, dword ptr [ebp - 0x18] */
    goto L_0040A000; /* 0x0078DC37: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078DC3C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078DC3Cu);

L_0078DC3C:
    ecx = MEM32(ebp + (-0x1C)); /* 0x0078DC3C: mov ecx, dword ptr [ebp - 0x1c] */
    goto L_0040A000; /* 0x0078DC3F: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078DC44(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078DC44u);

L_0078DC44:
    eax = MEM32(ebp + (-0x1C)); /* 0x0078DC44: mov eax, dword ptr [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x0078DC47: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0078DC48: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0078DC4E: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0078DC4F: ret  */
    RECOMP_REGS_OUT();
}

void sub_0078DC50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078DC50u);

L_0078DC50:
    ecx = MEM32(ebp + (-0x18)); /* 0x0078DC50: mov ecx, dword ptr [ebp - 0x18] */
    goto L_0040A000; /* 0x0078DC53: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078DC58(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078DC58u);

L_0078DC58:
    ecx = MEM32(ebp + (-0x14)); /* 0x0078DC58: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040A000; /* 0x0078DC5B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078DC60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078DC60u);

L_0078DC60:
    ecx = MEM32(ebp + (-0x10)); /* 0x0078DC60: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040A000; /* 0x0078DC63: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078DC68(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078DC68u);

L_0078DC68:
    eax = MEM32(ebp + (-0x1C)); /* 0x0078DC68: mov eax, dword ptr [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x0078DC6B: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0078DC6C: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0078DC72: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0078DC73: ret  */
    RECOMP_REGS_OUT();
}

void sub_0078DC74(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078DC74u);

L_0078DC74:
    ecx = MEM32(ebp + (-0x18)); /* 0x0078DC74: mov ecx, dword ptr [ebp - 0x18] */
    goto L_0040A000; /* 0x0078DC77: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078DC7C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078DC7Cu);

L_0078DC7C:
    ecx = MEM32(ebp + (-0x14)); /* 0x0078DC7C: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040A000; /* 0x0078DC7F: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078DC84(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078DC84u);

L_0078DC84:
    ecx = MEM32(ebp + (-0x10)); /* 0x0078DC84: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040A000; /* 0x0078DC87: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078DC8C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078DC8Cu);

    goto L_0078DC8C;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0078DC8C:
    edx = MEM32(esp + 0x8); /* 0x0078DC8C: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0078DC90: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x28)); /* 0x0078DC93: mov ecx, dword ptr [edx - 0x28] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078DC96: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078DC98: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00818CE8u; /* 0x0078DC9D: mov eax, 0x818ce8 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0078DCA2: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0078DCB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078DCB0u);

L_0078DCB0:
    ecx = MEM32(ebp + (-0x10)); /* 0x0078DCB0: mov ecx, dword ptr [ebp - 0x10] */
    goto L_00497AB0; /* 0x0078DCB3: jmp 0x497ab0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00497AB0: RECOMP_ITAIL(0x00497AB0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078DCB8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078DCB8u);

    goto L_0078DCB8;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0078DCB8:
    edx = MEM32(esp + 0x8); /* 0x0078DCB8: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0078DCBC: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x10)); /* 0x0078DCBF: mov ecx, dword ptr [edx - 0x10] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078DCC2: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078DCC4: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00818DB0u; /* 0x0078DCC9: mov eax, 0x818db0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0078DCCE: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0078DCE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078DCE0u);

L_0078DCE0:
    ecx = MEM32(ebp + (-0x14)); /* 0x0078DCE0: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040A000; /* 0x0078DCE3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078DCE8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078DCE8u);

L_0078DCE8:
    ecx = MEM32(ebp + (-0x18)); /* 0x0078DCE8: mov ecx, dword ptr [ebp - 0x18] */
    goto L_0040A000; /* 0x0078DCEB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078DCF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078DCF0u);

L_0078DCF0:
    ecx = MEM32(ebp + (-0x14)); /* 0x0078DCF0: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040A000; /* 0x0078DCF3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078DCF8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078DCF8u);

L_0078DCF8:
    ecx = MEM32(ebp + (-0x18)); /* 0x0078DCF8: mov ecx, dword ptr [ebp - 0x18] */
    goto L_0040A000; /* 0x0078DCFB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078DD00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078DD00u);

L_0078DD00:
    ecx = MEM32(ebp + (-0x14)); /* 0x0078DD00: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040A000; /* 0x0078DD03: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078DD08(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078DD08u);

L_0078DD08:
    ecx = MEM32(ebp + (-0x18)); /* 0x0078DD08: mov ecx, dword ptr [ebp - 0x18] */
    goto L_0040A000; /* 0x0078DD0B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078DD10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078DD10u);

L_0078DD10:
    ecx = MEM32(ebp + (-0x14)); /* 0x0078DD10: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040A000; /* 0x0078DD13: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078DD18(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078DD18u);

    goto L_0078DD18;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0078DD18:
    edx = MEM32(esp + 0x8); /* 0x0078DD18: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x24); /* 0x0078DD1C: lea eax, [edx - 0x24] */
    ecx = MEM32(edx + (-0x28)); /* 0x0078DD1F: mov ecx, dword ptr [edx - 0x28] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078DD22: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078DD24: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00818DDCu; /* 0x0078DD29: mov eax, 0x818ddc */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0078DD2E: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0078DD40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078DD40u);

L_0078DD40:
    ecx = ebp + 0x48; /* 0x0078DD40: lea ecx, [ebp + 0x48] */
    goto L_0040A000; /* 0x0078DD43: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078DD48(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078DD48u);

L_0078DD48:
    ecx = ebp + 0x30; /* 0x0078DD48: lea ecx, [ebp + 0x30] */
    goto L_0040A000; /* 0x0078DD4B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078DD50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078DD50u);

L_0078DD50:
    ecx = ebp + 0x18; /* 0x0078DD50: lea ecx, [ebp + 0x18] */
    goto L_0040A000; /* 0x0078DD53: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078DD58(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078DD58u);

L_0078DD58:
    ecx = MEM32(ebp + (-0x30)); /* 0x0078DD58: mov ecx, dword ptr [ebp - 0x30] */
    goto L_0040A000; /* 0x0078DD5B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078DD60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078DD60u);

L_0078DD60:
    ecx = MEM32(ebp + (-0x3C)); /* 0x0078DD60: mov ecx, dword ptr [ebp - 0x3c] */
    goto L_0040A000; /* 0x0078DD63: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078DD68(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078DD68u);

L_0078DD68:
    ecx = MEM32(ebp + (-0x34)); /* 0x0078DD68: mov ecx, dword ptr [ebp - 0x34] */
    goto L_0040A000; /* 0x0078DD6B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078DD70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078DD70u);

L_0078DD70:
    ecx = MEM32(ebp + (-0x40)); /* 0x0078DD70: mov ecx, dword ptr [ebp - 0x40] */
    goto L_004844F0; /* 0x0078DD73: jmp 0x4844f0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_004844F0: RECOMP_ITAIL(0x004844F0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078DD78(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078DD78u);

L_0078DD78:
    ecx = ebp + (-0x28); /* 0x0078DD78: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x0078DD7B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078DD80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078DD80u);

    goto L_0078DD80;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0078DD80:
    edx = MEM32(esp + 0x8); /* 0x0078DD80: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0078DD84: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x44)); /* 0x0078DD87: mov ecx, dword ptr [edx - 0x44] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078DD8A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078DD8C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x0078DD91: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078DD94: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078DD96: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00818E38u; /* 0x0078DD9B: mov eax, 0x818e38 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0078DDA0: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0078DDB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078DDB0u);

L_0078DDB0:
    ecx = ebp + (-0x2C); /* 0x0078DDB0: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x0078DDB3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078DDB8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078DDB8u);

L_0078DDB8:
    ecx = ebp + (-0x2C); /* 0x0078DDB8: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x0078DDBB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078DDC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078DDC0u);

L_0078DDC0:
    ecx = ebp + (-0x2C); /* 0x0078DDC0: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x0078DDC3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078DDC8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078DDC8u);

L_0078DDC8:
    ecx = ebp + (-0x2C); /* 0x0078DDC8: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x0078DDCB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078DDD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078DDD0u);

L_0078DDD0:
    ecx = ebp + (-0x2C); /* 0x0078DDD0: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x0078DDD3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078DDD8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078DDD8u);

L_0078DDD8:
    ecx = ebp + (-0x2C); /* 0x0078DDD8: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x0078DDDB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078DDE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078DDE0u);

    goto L_0078DDE0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0078DDE0:
    edx = MEM32(esp + 0x8); /* 0x0078DDE0: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x2C); /* 0x0078DDE4: lea eax, [edx - 0x2c] */
    ecx = MEM32(edx + (-0x30)); /* 0x0078DDE7: mov ecx, dword ptr [edx - 0x30] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078DDEA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078DDEC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x0078DDF1: add eax, 0xc */
    _flag_k = FK_ADD;
    ecx = MEM32(edx + (-0x8)); /* 0x0078DDF4: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078DDF7: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078DDF9: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00818EA0u; /* 0x0078DDFE: mov eax, 0x818ea0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0078DE03: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}
