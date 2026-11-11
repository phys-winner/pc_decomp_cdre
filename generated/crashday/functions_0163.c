#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_0079E730(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079E730u);

L_0079E730:
    ecx = MEM32(ebp + (-0x10)); /* 0x0079E730: mov ecx, dword ptr [ebp - 0x10] */
    goto L_004A74F0; /* 0x0079E733: jmp 0x4a74f0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_004A74F0: RECOMP_ITAIL(0x004A74F0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079E738(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079E738u);

L_0079E738:
    ecx = MEM32(ebp + (-0x10)); /* 0x0079E738: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x54u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x54u; /* 0x0079E73B: add ecx, 0x54 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x0079E73E: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079E743(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079E743u);

    goto L_0079E743;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0079E743:
    edx = MEM32(esp + 0x8); /* 0x0079E743: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0079E747: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xC)); /* 0x0079E74A: mov ecx, dword ptr [edx - 0xc] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079E74D: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079E74F: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0082986Cu; /* 0x0079E754: mov eax, 0x82986c */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0079E759: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0079E760(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079E760u);

L_0079E760:
    ecx = 0x00865458u; /* 0x0079E760: mov ecx, 0x865458 */
    goto L_0046D430; /* 0x0079E765: jmp 0x46d430 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0046D430: RECOMP_ITAIL(0x0046D430u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079E76A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079E76Au);

    goto L_0079E76A;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0079E76A:
    edx = MEM32(esp + 0x8); /* 0x0079E76A: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0079E76E: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x4)); /* 0x0079E771: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079E774: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079E776: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008298A0u; /* 0x0079E77B: mov eax, 0x8298a0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0079E780: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0079E790(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079E790u);

L_0079E790:
    ecx = MEM32(ebp + (-0x10)); /* 0x0079E790: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0046D430; /* 0x0079E793: jmp 0x46d430 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0046D430: RECOMP_ITAIL(0x0046D430u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079E798(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079E798u);

    goto L_0079E798;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0079E798:
    edx = MEM32(esp + 0x8); /* 0x0079E798: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0079E79C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xC)); /* 0x0079E79F: mov ecx, dword ptr [edx - 0xc] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079E7A2: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079E7A4: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008298CCu; /* 0x0079E7A9: mov eax, 0x8298cc */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0079E7AE: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0079E7C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079E7C0u);

L_0079E7C0:
    ecx = ebp + (-0x2C); /* 0x0079E7C0: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x0079E7C3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079E7C8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079E7C8u);

    goto L_0079E7C8;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0079E7C8:
    edx = MEM32(esp + 0x8); /* 0x0079E7C8: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x24); /* 0x0079E7CC: lea eax, [edx - 0x24] */
    ecx = MEM32(edx + (-0x28)); /* 0x0079E7CF: mov ecx, dword ptr [edx - 0x28] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079E7D2: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079E7D4: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x0079E7D9: add eax, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(edx + (-0x8)); /* 0x0079E7DC: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079E7DF: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079E7E1: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008298F8u; /* 0x0079E7E6: mov eax, 0x8298f8 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0079E7EB: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0079E7F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079E7F0u);

L_0079E7F0:
    ecx = ebp + (-0x44); /* 0x0079E7F0: lea ecx, [ebp - 0x44] */
    goto L_0040A000; /* 0x0079E7F3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079E7F8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079E7F8u);

L_0079E7F8:
    ecx = ebp + (-0x44); /* 0x0079E7F8: lea ecx, [ebp - 0x44] */
    goto L_0040A000; /* 0x0079E7FB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079E800(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079E800u);

L_0079E800:
    ecx = ebp + (-0x2C); /* 0x0079E800: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x0079E803: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079E808(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079E808u);

L_0079E808:
    ecx = MEM32(ebp + (-0x48)); /* 0x0079E808: mov ecx, dword ptr [ebp - 0x48] */
    goto L_0040A000; /* 0x0079E80B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079E810(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079E810u);

L_0079E810:
    ecx = ebp + (-0x2C); /* 0x0079E810: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x0079E813: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079E818(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079E818u);

L_0079E818:
    ecx = ebp + (-0x44); /* 0x0079E818: lea ecx, [ebp - 0x44] */
    goto L_0040A000; /* 0x0079E81B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079E820(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079E820u);

L_0079E820:
    ecx = MEM32(ebp + (-0x48)); /* 0x0079E820: mov ecx, dword ptr [ebp - 0x48] */
    goto L_0040A000; /* 0x0079E823: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079E828(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079E828u);

    goto L_0079E828;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0079E828:
    edx = MEM32(esp + 0x8); /* 0x0079E828: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x44); /* 0x0079E82C: lea eax, [edx - 0x44] */
    ecx = MEM32(edx + (-0x48)); /* 0x0079E82F: mov ecx, dword ptr [edx - 0x48] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079E832: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079E834: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x0079E839: add eax, 8 */
    _flag_k = FK_ADD;
    ecx = MEM32(edx + (-0x8)); /* 0x0079E83C: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079E83F: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079E841: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00829938u; /* 0x0079E846: mov eax, 0x829938 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0079E84B: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0079E850(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079E850u);

L_0079E850:
    ecx = MEM32(ebp + (-0x10)); /* 0x0079E850: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x0079E853: add ecx, 4 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x0079E856: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079E85B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079E85Bu);

L_0079E85B:
    ecx = MEM32(ebp + (-0x10)); /* 0x0079E85B: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x20u; /* 0x0079E85E: add ecx, 0x20 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x0079E861: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079E866(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079E866u);

L_0079E866:
    ecx = MEM32(ebp + (-0x10)); /* 0x0079E866: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x38u; /* 0x0079E869: add ecx, 0x38 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x0079E86C: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079E871(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079E871u);

L_0079E871:
    ecx = MEM32(ebp + (-0x10)); /* 0x0079E871: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x50u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x50u; /* 0x0079E874: add ecx, 0x50 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x0079E877: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079E87C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079E87Cu);

    goto L_0079E87C;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0079E87C:
    edx = MEM32(esp + 0x8); /* 0x0079E87C: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0079E880: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x10)); /* 0x0079E883: mov ecx, dword ptr [edx - 0x10] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079E886: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079E888: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008299D8u; /* 0x0079E88D: mov eax, 0x8299d8 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0079E892: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0079E8A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079E8A0u);

L_0079E8A0:
    ecx = ebp + (-0x44); /* 0x0079E8A0: lea ecx, [ebp - 0x44] */
    goto L_0040A000; /* 0x0079E8A3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079E8A8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079E8A8u);

L_0079E8A8:
    ecx = ebp + (-0x44); /* 0x0079E8A8: lea ecx, [ebp - 0x44] */
    goto L_0040A000; /* 0x0079E8AB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079E8B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079E8B0u);

L_0079E8B0:
    ecx = ebp + (-0x2C); /* 0x0079E8B0: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x0079E8B3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079E8B8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079E8B8u);

L_0079E8B8:
    ecx = MEM32(ebp + (-0x54)); /* 0x0079E8B8: mov ecx, dword ptr [ebp - 0x54] */
    goto L_0040A000; /* 0x0079E8BB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079E8C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079E8C0u);

L_0079E8C0:
    ecx = ebp + (-0x2C); /* 0x0079E8C0: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x0079E8C3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079E8C8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079E8C8u);

L_0079E8C8:
    ecx = ebp + (-0x44); /* 0x0079E8C8: lea ecx, [ebp - 0x44] */
    goto L_0040A000; /* 0x0079E8CB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079E8D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079E8D0u);

L_0079E8D0:
    ecx = MEM32(ebp + (-0x54)); /* 0x0079E8D0: mov ecx, dword ptr [ebp - 0x54] */
    goto L_0040A000; /* 0x0079E8D3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079E8D8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079E8D8u);

L_0079E8D8:
    ecx = ebp + (-0x2C); /* 0x0079E8D8: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x0079E8DB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079E8E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079E8E0u);

L_0079E8E0:
    ecx = ebp + (-0x44); /* 0x0079E8E0: lea ecx, [ebp - 0x44] */
    goto L_0040A000; /* 0x0079E8E3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079E8E8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079E8E8u);

L_0079E8E8:
    ecx = MEM32(ebp + (-0x54)); /* 0x0079E8E8: mov ecx, dword ptr [ebp - 0x54] */
    goto L_0040A000; /* 0x0079E8EB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079E8F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079E8F0u);

    goto L_0079E8F0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0079E8F0:
    edx = MEM32(esp + 0x8); /* 0x0079E8F0: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x54); /* 0x0079E8F4: lea eax, [edx - 0x54] */
    ecx = MEM32(edx + (-0x58)); /* 0x0079E8F7: mov ecx, dword ptr [edx - 0x58] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079E8FA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079E8FC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x0079E901: add eax, 8 */
    _flag_k = FK_ADD;
    ecx = MEM32(edx + (-0x8)); /* 0x0079E904: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079E907: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079E909: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00829A20u; /* 0x0079E90E: mov eax, 0x829a20 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0079E913: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0079E920(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079E920u);

L_0079E920:
    ecx = ebp + (-0xC4); /* 0x0079E920: lea ecx, [ebp - 0xc4] */
    goto L_004A74F0; /* 0x0079E926: jmp 0x4a74f0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_004A74F0: RECOMP_ITAIL(0x004A74F0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079E92B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079E92Bu);

L_0079E92B:
    eax = MEM32(ebp + (-0xCC)); /* 0x0079E92B: mov eax, dword ptr [ebp - 0xcc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x0079E931: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0079E94C; /* 0x0079E934: je 0x79e94c */
L_0079E93A:
    _flag_a = (uint32_t)(MEM32(ebp + (-0xCC))); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(ebp + (-0xCC)) = MEM32(ebp + (-0xCC)) & 0xFFFFFFFEu; /* 0x0079E93A: and dword ptr [ebp - 0xcc], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0xE0)); /* 0x0079E941: mov ecx, dword ptr [ebp - 0xe0] */
    goto L_004A74F0; /* 0x0079E947: jmp 0x4a74f0 */
L_0079E94C:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0079E94C: ret  */
    L_004A74F0: RECOMP_ITAIL(0x004A74F0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079E94D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079E94Du);

L_0079E94D:
    ecx = ebp + (-0x5C); /* 0x0079E94D: lea ecx, [ebp - 0x5c] */
    goto L_0040A000; /* 0x0079E950: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079E955(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079E955u);

L_0079E955:
    ecx = ebp + (-0x2C); /* 0x0079E955: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x0079E958: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079E95D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079E95Du);

L_0079E95D:
    ecx = ebp + (-0x44); /* 0x0079E95D: lea ecx, [ebp - 0x44] */
    goto L_0040A000; /* 0x0079E960: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079E965(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079E965u);

L_0079E965:
    ecx = ebp + (-0x74); /* 0x0079E965: lea ecx, [ebp - 0x74] */
    goto L_0040A000; /* 0x0079E968: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079E96D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079E96Du);

    goto L_0079E96D;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0079E96D:
    edx = MEM32(esp + 0x8); /* 0x0079E96D: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0079E971: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xF0)); /* 0x0079E974: mov ecx, dword ptr [edx - 0xf0] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079E97A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079E97C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x8)); /* 0x0079E981: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079E984: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079E986: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00829AD8u; /* 0x0079E98B: mov eax, 0x829ad8 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0079E990: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0079E9A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079E9A0u);

L_0079E9A0:
    ecx = ebp + (-0x28); /* 0x0079E9A0: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x0079E9A3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079E9A8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079E9A8u);

L_0079E9A8:
    ecx = ebp + (-0x40); /* 0x0079E9A8: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x0079E9AB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079E9B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079E9B0u);

    goto L_0079E9B0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0079E9B0:
    edx = MEM32(esp + 0x8); /* 0x0079E9B0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0079E9B4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x5C)); /* 0x0079E9B7: mov ecx, dword ptr [edx - 0x5c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079E9BA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079E9BC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x0079E9C1: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079E9C4: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079E9C6: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00829B40u; /* 0x0079E9CB: mov eax, 0x829b40 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0079E9D0: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0079E9E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079E9E0u);

L_0079E9E0:
    ecx = ebp + (-0xB8); /* 0x0079E9E0: lea ecx, [ebp - 0xb8] */
    goto L_0040A000; /* 0x0079E9E6: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079E9EB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079E9EBu);

L_0079E9EB:
    ecx = ebp + (-0xA0); /* 0x0079E9EB: lea ecx, [ebp - 0xa0] */
    goto L_0040A000; /* 0x0079E9F1: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079E9F6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079E9F6u);

L_0079E9F6:
    ecx = ebp + (-0x88); /* 0x0079E9F6: lea ecx, [ebp - 0x88] */
    goto L_0040A000; /* 0x0079E9FC: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EA01(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EA01u);

L_0079EA01:
    ecx = ebp + (-0xB8); /* 0x0079EA01: lea ecx, [ebp - 0xb8] */
    goto L_004A74F0; /* 0x0079EA07: jmp 0x4a74f0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_004A74F0: RECOMP_ITAIL(0x004A74F0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EA0C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EA0Cu);

L_0079EA0C:
    ecx = ebp + (-0x68); /* 0x0079EA0C: lea ecx, [ebp - 0x68] */
    goto L_004A74F0; /* 0x0079EA0F: jmp 0x4a74f0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_004A74F0: RECOMP_ITAIL(0x004A74F0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EA14(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EA14u);

L_0079EA14:
    ecx = ebp + (-0xD0); /* 0x0079EA14: lea ecx, [ebp - 0xd0] */
    goto L_0040A000; /* 0x0079EA1A: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EA1F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EA1Fu);

    goto L_0079EA1F;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0079EA1F:
    edx = MEM32(esp + 0x8); /* 0x0079EA1F: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0xD4); /* 0x0079EA23: lea eax, [edx - 0xd4] */
    ecx = MEM32(edx + (-0xD8)); /* 0x0079EA29: mov ecx, dword ptr [edx - 0xd8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079EA2F: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079EA31: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x0079EA36: add eax, 0xc */
    _flag_k = FK_ADD;
    ecx = MEM32(edx + (-0x8)); /* 0x0079EA39: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079EA3C: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079EA3E: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00829B74u; /* 0x0079EA43: mov eax, 0x829b74 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0079EA48: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0079EA50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EA50u);

L_0079EA50:
    ecx = ebp + (-0xD0); /* 0x0079EA50: lea ecx, [ebp - 0xd0] */
    goto L_0040A000; /* 0x0079EA56: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EA5B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EA5Bu);

L_0079EA5B:
    ecx = ebp + (-0xB8); /* 0x0079EA5B: lea ecx, [ebp - 0xb8] */
    goto L_0040A000; /* 0x0079EA61: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EA66(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EA66u);

L_0079EA66:
    ecx = ebp + (-0xA0); /* 0x0079EA66: lea ecx, [ebp - 0xa0] */
    goto L_0040A000; /* 0x0079EA6C: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EA71(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EA71u);

L_0079EA71:
    ecx = ebp + (-0xD0); /* 0x0079EA71: lea ecx, [ebp - 0xd0] */
    goto L_004A74F0; /* 0x0079EA77: jmp 0x4a74f0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_004A74F0: RECOMP_ITAIL(0x004A74F0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EA7C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EA7Cu);

L_0079EA7C:
    ecx = ebp + (-0x68); /* 0x0079EA7C: lea ecx, [ebp - 0x68] */
    goto L_004A74F0; /* 0x0079EA7F: jmp 0x4a74f0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_004A74F0: RECOMP_ITAIL(0x004A74F0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EA84(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EA84u);

L_0079EA84:
    ecx = ebp + (-0xE8); /* 0x0079EA84: lea ecx, [ebp - 0xe8] */
    goto L_0040A000; /* 0x0079EA8A: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EA8F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EA8Fu);

L_0079EA8F:
    ecx = ebp + (-0x80); /* 0x0079EA8F: lea ecx, [ebp - 0x80] */
    goto L_0040A000; /* 0x0079EA92: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EA97(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EA97u);

L_0079EA97:
    ecx = MEM32(ebp + (-0x100)); /* 0x0079EA97: mov ecx, dword ptr [ebp - 0x100] */
    goto L_0040A000; /* 0x0079EA9D: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EAA2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EAA2u);

    goto L_0079EAA2;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0079EAA2:
    edx = MEM32(esp + 0x8); /* 0x0079EAA2: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0xFC); /* 0x0079EAA6: lea eax, [edx - 0xfc] */
    ecx = MEM32(edx + (-0x100)); /* 0x0079EAAC: mov ecx, dword ptr [edx - 0x100] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079EAB2: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079EAB4: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x0079EAB9: add eax, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(edx + (-0x8)); /* 0x0079EABC: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079EABF: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079EAC1: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00829BC8u; /* 0x0079EAC6: mov eax, 0x829bc8 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0079EACB: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0079EAD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EAD0u);

L_0079EAD0:
    ecx = ebp + (-0x164); /* 0x0079EAD0: lea ecx, [ebp - 0x164] */
    goto L_0040A000; /* 0x0079EAD6: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EADB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EADBu);

L_0079EADB:
    ecx = ebp + (-0x17C); /* 0x0079EADB: lea ecx, [ebp - 0x17c] */
    goto L_0040A000; /* 0x0079EAE1: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EAE6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EAE6u);

L_0079EAE6:
    ecx = ebp + (-0x194); /* 0x0079EAE6: lea ecx, [ebp - 0x194] */
    goto L_0040A000; /* 0x0079EAEC: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EAF1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EAF1u);

L_0079EAF1:
    ecx = ebp + (-0x14C); /* 0x0079EAF1: lea ecx, [ebp - 0x14c] */
    goto L_0040A000; /* 0x0079EAF7: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EAFC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EAFCu);

L_0079EAFC:
    ecx = ebp + (-0x11C); /* 0x0079EAFC: lea ecx, [ebp - 0x11c] */
    goto L_0040A000; /* 0x0079EB02: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EB07(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EB07u);

L_0079EB07:
    ecx = ebp + (-0x2C); /* 0x0079EB07: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x0079EB0A: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EB0F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EB0Fu);

L_0079EB0F:
    ecx = ebp + (-0xD4); /* 0x0079EB0F: lea ecx, [ebp - 0xd4] */
    goto L_0040A000; /* 0x0079EB15: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EB1A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EB1Au);

L_0079EB1A:
    ecx = ebp + (-0x134); /* 0x0079EB1A: lea ecx, [ebp - 0x134] */
    goto L_0040A000; /* 0x0079EB20: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EB25(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EB25u);

L_0079EB25:
    ecx = ebp + (-0xA4); /* 0x0079EB25: lea ecx, [ebp - 0xa4] */
    goto L_0040A000; /* 0x0079EB2B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EB30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EB30u);

L_0079EB30:
    ecx = ebp + (-0x44); /* 0x0079EB30: lea ecx, [ebp - 0x44] */
    goto L_0040A000; /* 0x0079EB33: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EB38(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EB38u);

L_0079EB38:
    ecx = MEM32(ebp + (-0x1D4)); /* 0x0079EB38: mov ecx, dword ptr [ebp - 0x1d4] */
    goto L_0040A000; /* 0x0079EB3E: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EB43(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EB43u);

L_0079EB43:
    ecx = ebp + (-0x74); /* 0x0079EB43: lea ecx, [ebp - 0x74] */
    goto L_0040A000; /* 0x0079EB46: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EB4B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EB4Bu);

L_0079EB4B:
    ecx = ebp + (-0xBC); /* 0x0079EB4B: lea ecx, [ebp - 0xbc] */
    goto L_0040A000; /* 0x0079EB51: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EB56(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EB56u);

L_0079EB56:
    ecx = ebp + (-0x8C); /* 0x0079EB56: lea ecx, [ebp - 0x8c] */
    goto L_0040A000; /* 0x0079EB5C: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EB61(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EB61u);

L_0079EB61:
    ecx = ebp + (-0x104); /* 0x0079EB61: lea ecx, [ebp - 0x104] */
    goto L_0040A000; /* 0x0079EB67: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EB6C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EB6Cu);

L_0079EB6C:
    ecx = ebp + (-0x5C); /* 0x0079EB6C: lea ecx, [ebp - 0x5c] */
    goto L_0040A000; /* 0x0079EB6F: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EB74(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EB74u);

L_0079EB74:
    goto L_00409980; /* 0x0079EB74: jmp 0x409980 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00409980: RECOMP_ITAIL(0x00409980u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EB79(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EB79u);

L_0079EB79:
    ecx = ebp + (-0x194); /* 0x0079EB79: lea ecx, [ebp - 0x194] */
    goto L_0040A000; /* 0x0079EB7F: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EB84(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EB84u);

L_0079EB84:
    ecx = ebp + (-0xEC); /* 0x0079EB84: lea ecx, [ebp - 0xec] */
    goto L_0040A000; /* 0x0079EB8A: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EB8F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EB8Fu);

L_0079EB8F:
    ecx = ebp + (-0x194); /* 0x0079EB8F: lea ecx, [ebp - 0x194] */
    goto L_0040A000; /* 0x0079EB95: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EB9A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EB9Au);

L_0079EB9A:
    ecx = ebp + (-0xEC); /* 0x0079EB9A: lea ecx, [ebp - 0xec] */
    goto L_0040A000; /* 0x0079EBA0: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EBA5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EBA5u);

    goto L_0079EBA5;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0079EBA5:
    edx = MEM32(esp + 0x8); /* 0x0079EBA5: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x1E4); /* 0x0079EBA9: lea eax, [edx - 0x1e4] */
    ecx = MEM32(edx + (-0x1E8)); /* 0x0079EBAF: mov ecx, dword ptr [edx - 0x1e8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079EBB5: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079EBB7: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x0079EBBC: add eax, 0xc */
    _flag_k = FK_ADD;
    ecx = MEM32(edx + (-0x8)); /* 0x0079EBBF: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079EBC2: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079EBC4: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00829C30u; /* 0x0079EBC9: mov eax, 0x829c30 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0079EBCE: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0079EBE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EBE0u);

L_0079EBE0:
    ecx = ebp + (-0x8C); /* 0x0079EBE0: lea ecx, [ebp - 0x8c] */
    goto L_0040A000; /* 0x0079EBE6: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EBEB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EBEBu);

L_0079EBEB:
    ecx = ebp + (-0x5C); /* 0x0079EBEB: lea ecx, [ebp - 0x5c] */
    goto L_0040A000; /* 0x0079EBEE: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EBF3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EBF3u);

L_0079EBF3:
    ecx = MEM32(ebp + (-0x98)); /* 0x0079EBF3: mov ecx, dword ptr [ebp - 0x98] */
    goto L_0040A000; /* 0x0079EBF9: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EBFE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EBFEu);

L_0079EBFE:
    ecx = ebp + (-0x8C); /* 0x0079EBFE: lea ecx, [ebp - 0x8c] */
    goto L_0040A000; /* 0x0079EC04: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EC09(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EC09u);

L_0079EC09:
    ecx = MEM32(ebp + (-0x98)); /* 0x0079EC09: mov ecx, dword ptr [ebp - 0x98] */
    goto L_0040A000; /* 0x0079EC0F: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EC14(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EC14u);

L_0079EC14:
    ecx = ebp + (-0x8C); /* 0x0079EC14: lea ecx, [ebp - 0x8c] */
    goto L_0040A000; /* 0x0079EC1A: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EC1F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EC1Fu);

L_0079EC1F:
    ecx = ebp + (-0x74); /* 0x0079EC1F: lea ecx, [ebp - 0x74] */
    goto L_0040A000; /* 0x0079EC22: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EC27(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EC27u);

    goto L_0079EC27;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0079EC27:
    edx = MEM32(esp + 0x8); /* 0x0079EC27: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0xB4); /* 0x0079EC2B: lea eax, [edx - 0xb4] */
    ecx = MEM32(edx + (-0xB8)); /* 0x0079EC31: mov ecx, dword ptr [edx - 0xb8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079EC37: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079EC39: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x0079EC3E: add eax, 0xc */
    _flag_k = FK_ADD;
    ecx = MEM32(edx + (-0x38)); /* 0x0079EC41: mov ecx, dword ptr [edx - 0x38] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079EC44: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079EC46: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00829D00u; /* 0x0079EC4B: mov eax, 0x829d00 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0079EC50: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0079EC60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EC60u);

L_0079EC60:
    ecx = ebp + (-0x40); /* 0x0079EC60: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x0079EC63: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EC68(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EC68u);

L_0079EC68:
    ecx = ebp + (-0x28); /* 0x0079EC68: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x0079EC6B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EC70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EC70u);

L_0079EC70:
    ecx = ebp + (-0x58); /* 0x0079EC70: lea ecx, [ebp - 0x58] */
    goto L_0040A000; /* 0x0079EC73: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EC78(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EC78u);

L_0079EC78:
    ecx = ebp + (-0x28); /* 0x0079EC78: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x0079EC7B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EC80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EC80u);

L_0079EC80:
    ecx = ebp + (-0x40); /* 0x0079EC80: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x0079EC83: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EC88(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EC88u);

L_0079EC88:
    ecx = ebp + (-0x58); /* 0x0079EC88: lea ecx, [ebp - 0x58] */
    goto L_0040A000; /* 0x0079EC8B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EC90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EC90u);

L_0079EC90:
    ecx = ebp + (-0x28); /* 0x0079EC90: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x0079EC93: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079EC98(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079EC98u);

L_0079EC98:
    ecx = ebp + (-0x40); /* 0x0079EC98: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x0079EC9B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079ECA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079ECA0u);

L_0079ECA0:
    ecx = ebp + (-0x58); /* 0x0079ECA0: lea ecx, [ebp - 0x58] */
    goto L_0040A000; /* 0x0079ECA3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079ECA8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079ECA8u);

L_0079ECA8:
    ecx = ebp + (-0x28); /* 0x0079ECA8: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x0079ECAB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079ECB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079ECB0u);

L_0079ECB0:
    ecx = ebp + (-0x40); /* 0x0079ECB0: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x0079ECB3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}
