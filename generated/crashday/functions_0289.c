#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_007C687A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C687Au);

L_007C687A:
    ecx = ebp + (-0x8C); /* 0x007C687A: lea ecx, [ebp - 0x8c] */
    goto L_0040A000; /* 0x007C6880: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C6885(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C6885u);

L_007C6885:
    ecx = ebp + (-0x2C); /* 0x007C6885: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x007C6888: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C688D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C688Du);

L_007C688D:
    ecx = ebp + (-0x44); /* 0x007C688D: lea ecx, [ebp - 0x44] */
    goto L_00558880; /* 0x007C6890: jmp 0x558880 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00558880: RECOMP_ITAIL(0x00558880u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C6895(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C6895u);

L_007C6895:
    ecx = ebp + (-0x5C); /* 0x007C6895: lea ecx, [ebp - 0x5c] */
    goto L_00558880; /* 0x007C6898: jmp 0x558880 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00558880: RECOMP_ITAIL(0x00558880u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C689D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C689Du);

L_007C689D:
    ecx = ebp + (-0x74); /* 0x007C689D: lea ecx, [ebp - 0x74] */
    goto L_00558880; /* 0x007C68A0: jmp 0x558880 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00558880: RECOMP_ITAIL(0x00558880u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C68A5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C68A5u);

    goto L_007C68A5;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007C68A5:
    edx = MEM32(esp + 0x8); /* 0x007C68A5: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0xBC); /* 0x007C68A9: lea eax, [edx - 0xbc] */
    ecx = MEM32(edx + (-0xC0)); /* 0x007C68AF: mov ecx, dword ptr [edx - 0xc0] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007C68B5: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007C68B7: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x007C68BC: add eax, 0xc */
    _flag_k = FK_ADD;
    ecx = MEM32(edx + (-0x8)); /* 0x007C68BF: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007C68C2: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007C68C4: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0084F868u; /* 0x007C68C9: mov eax, 0x84f868 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007C68CE: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007C68E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C68E0u);

L_007C68E0:
    eax = MEM32(ebp + (-0x30)); /* 0x007C68E0: mov eax, dword ptr [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x007C68E3: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C68E4: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007C68EA: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C68EB: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C68EC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C68ECu);

L_007C68EC:
    eax = MEM32(ebp + (-0x34)); /* 0x007C68EC: mov eax, dword ptr [ebp - 0x34] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x007C68EF: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007C6904; /* 0x007C68F2: je 0x7c6904 */
L_007C68F8:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(ebp + (-0x34)) = MEM32(ebp + (-0x34)) & 0xFFFFFFFEu; /* 0x007C68F8: and dword ptr [ebp - 0x34], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x2C); /* 0x007C68FC: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x007C68FF: jmp 0x40a000 */
L_007C6904:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C6904: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C6905(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C6905u);

    goto L_007C6905;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007C6905:
    edx = MEM32(esp + 0x8); /* 0x007C6905: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x3C); /* 0x007C6909: lea eax, [edx - 0x3c] */
    ecx = MEM32(edx + (-0x40)); /* 0x007C690C: mov ecx, dword ptr [edx - 0x40] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007C690F: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007C6911: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x007C6916: add eax, 0xc */
    _flag_k = FK_ADD;
    ecx = MEM32(edx + (-0x8)); /* 0x007C6919: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007C691C: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007C691E: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0084F8E0u; /* 0x007C6923: mov eax, 0x84f8e0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007C6928: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007C6930(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C6930u);

L_007C6930:
    eax = MEM32(ebp + (-0x30)); /* 0x007C6930: mov eax, dword ptr [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x007C6933: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C6934: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007C693A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C693B: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C693C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C693Cu);

L_007C693C:
    eax = MEM32(ebp + (-0x34)); /* 0x007C693C: mov eax, dword ptr [ebp - 0x34] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x007C693F: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007C6954; /* 0x007C6942: je 0x7c6954 */
L_007C6948:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(ebp + (-0x34)) = MEM32(ebp + (-0x34)) & 0xFFFFFFFEu; /* 0x007C6948: and dword ptr [ebp - 0x34], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x2C); /* 0x007C694C: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x007C694F: jmp 0x40a000 */
L_007C6954:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C6954: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C6955(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C6955u);

    goto L_007C6955;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007C6955:
    edx = MEM32(esp + 0x8); /* 0x007C6955: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x3C); /* 0x007C6959: lea eax, [edx - 0x3c] */
    ecx = MEM32(edx + (-0x40)); /* 0x007C695C: mov ecx, dword ptr [edx - 0x40] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007C695F: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007C6961: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x007C6966: add eax, 0xc */
    _flag_k = FK_ADD;
    ecx = MEM32(edx + (-0x8)); /* 0x007C6969: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007C696C: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007C696E: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0084F91Cu; /* 0x007C6973: mov eax, 0x84f91c */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007C6978: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007C6980(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C6980u);

    goto L_007C6980;
L_006D3B20:
    eax = MEM32(ecx); /* 0x006D3B20: mov eax, dword ptr [ecx] */
    PUSH32(esp, esi); /* 0x006D3B22: push esi */
    PUSH32(esp, edi); /* 0x006D3B23: push edi */
    edi = ecx + 0x68; /* 0x006D3B24: lea edi, [ecx + 0x68] */
    eax = MEM32(eax + 0x4); /* 0x006D3B27: mov eax, dword ptr [eax + 4] */
    MEM32(eax + edi + (-0x68)) = 0x00801920u; /* 0x006D3B2A: mov dword ptr [eax + edi - 0x68], 0x801920 */
    eax = MEM32(edi + (-0x68)); /* 0x006D3B32: mov eax, dword ptr [edi - 0x68] */
    ecx = MEM32(eax + 0x4); /* 0x006D3B35: mov ecx, dword ptr [eax + 4] */
    eax = ecx + (-0x68); /* 0x006D3B38: lea eax, [ecx - 0x68] */
    MEM32(ecx + edi + (-0x6C)) = eax; /* 0x006D3B3B: mov dword ptr [ecx + edi - 0x6c], eax */
    ecx = edi + (-0x50); /* 0x006D3B3F: lea ecx, [edi - 0x50] */
    MEM32(edi + (-0x50)) = 0x008018E0u; /* 0x006D3B42: mov dword ptr [edi - 0x50], 0x8018e0 */
    RECOMP_CALL(sub_0044E5B0); /* 0x006D3B49: call 0x44e5b0 */
    RECOMP_FLAGS_IN();
    ecx = edi + (-0x50); /* 0x006D3B4E: lea ecx, [edi - 0x50] */
    RECOMP_ICALL(MEM32(0x7CC3B8)); /* 0x006D3B51: call dword ptr [0x7cc3b8] */
    RECOMP_FLAGS_IN();
    ecx = edi + (-0x48); /* 0x006D3B57: lea ecx, [edi - 0x48] */
    RECOMP_ICALL(MEM32(0x7CC37C)); /* 0x006D3B5A: call dword ptr [0x7cc37c] */
    RECOMP_FLAGS_IN();
    ecx = edi; /* 0x006D3B60: mov ecx, edi */
    edi = POP32_VAL(esp); /* 0x006D3B62: pop edi */
    esi = POP32_VAL(esp); /* 0x006D3B63: pop esi */
    { _itail_tgt = (uint32_t)(MEM32(0x7CC38C)); goto _ljump; }
L_007C6980:
    ecx = ebp + (-0xF0); /* 0x007C6980: lea ecx, [ebp - 0xf0] */
    RECOMP_BACKEDGE();
    goto L_006D3B20; /* 0x007C6986: jmp 0x6d3b20 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007C698B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C698Bu);

L_007C698B:
    ecx = ebp + (-0x40); /* 0x007C698B: lea ecx, [ebp - 0x40] */
    goto L_00558880; /* 0x007C698E: jmp 0x558880 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00558880: RECOMP_ITAIL(0x00558880u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C6993(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C6993u);

    goto L_007C6993;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007C6993:
    edx = MEM32(esp + 0x8); /* 0x007C6993: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0xF4); /* 0x007C6997: lea eax, [edx - 0xf4] */
    ecx = MEM32(edx + (-0xF8)); /* 0x007C699D: mov ecx, dword ptr [edx - 0xf8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007C69A3: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007C69A5: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x007C69AA: add eax, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(edx + (-0x8)); /* 0x007C69AD: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007C69B0: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007C69B2: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0084F958u; /* 0x007C69B7: mov eax, 0x84f958 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007C69BC: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007C69D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C69D0u);

L_007C69D0:
    eax = MEM32(ebp + (-0x10)); /* 0x007C69D0: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x007C69D3: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007C69EC; /* 0x007C69D6: je 0x7c69ec */
L_007C69DC:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0xFFFFFFFEu; /* 0x007C69DC: and dword ptr [ebp - 0x10], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x14)); /* 0x007C69E0: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x68u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x68u; /* 0x007C69E3: add ecx, 0x68 */
    _flag_k = FK_ADD;
    { _itail_tgt = (uint32_t)(MEM32(0x7CC38C)); goto _ljump; }
L_007C69EC:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C69EC: ret  */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007C69ED(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C69EDu);

L_007C69ED:
    ecx = MEM32(ebp + (-0x14)); /* 0x007C69ED: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x20u; /* 0x007C69F0: add ecx, 0x20 */
    _flag_k = FK_ADD;
    { _itail_tgt = (uint32_t)(MEM32(0x7CC37C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007C69F9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C69F9u);

L_007C69F9:
    ecx = MEM32(ebp + (-0x18)); /* 0x007C69F9: mov ecx, dword ptr [ebp - 0x18] */
    { _itail_tgt = (uint32_t)(MEM32(0x7CC3B8)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007C6A02(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C6A02u);

    goto L_007C6A02;
L_006D4710:
    PUSH32(esp, esi); /* 0x006D4710: push esi */
    esi = ecx; /* 0x006D4711: mov esi, ecx */
    MEM32(esi) = 0x008018E0u; /* 0x006D4713: mov dword ptr [esi], 0x8018e0 */
    RECOMP_CALL(sub_0044E5B0); /* 0x006D4719: call 0x44e5b0 */
    RECOMP_FLAGS_IN();
    ecx = esi; /* 0x006D471E: mov ecx, esi */
    esi = POP32_VAL(esp); /* 0x006D4720: pop esi */
    { _itail_tgt = (uint32_t)(MEM32(0x7CC3B8)); goto _ljump; }
L_007C6A02:
    ecx = MEM32(ebp + (-0x14)); /* 0x007C6A02: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x18u; /* 0x007C6A05: add ecx, 0x18 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_006D4710; /* 0x007C6A08: jmp 0x6d4710 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007C6A0D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C6A0Du);

    goto L_007C6A0D;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007C6A0D:
    edx = MEM32(esp + 0x8); /* 0x007C6A0D: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007C6A11: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x007C6A14: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007C6A17: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007C6A19: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0084F98Cu; /* 0x007C6A1E: mov eax, 0x84f98c */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007C6A23: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007C6A30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C6A30u);

L_007C6A30:
    ecx = ebp + (-0x2C); /* 0x007C6A30: lea ecx, [ebp - 0x2c] */
    goto L_00558880; /* 0x007C6A33: jmp 0x558880 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00558880: RECOMP_ITAIL(0x00558880u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C6A38(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C6A38u);

L_007C6A38:
    eax = MEM32(ebp + (-0x30)); /* 0x007C6A38: mov eax, dword ptr [ebp - 0x30] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x007C6A3B: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007C6A50; /* 0x007C6A3E: je 0x7c6a50 */
L_007C6A44:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(ebp + (-0x30)) = MEM32(ebp + (-0x30)) & 0xFFFFFFFEu; /* 0x007C6A44: and dword ptr [ebp - 0x30], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x34)); /* 0x007C6A48: mov ecx, dword ptr [ebp - 0x34] */
    goto L_00558880; /* 0x007C6A4B: jmp 0x558880 */
L_007C6A50:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C6A50: ret  */
    L_00558880: RECOMP_ITAIL(0x00558880u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C6A51(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C6A51u);

L_007C6A51:
    ecx = ebp + (-0x2C); /* 0x007C6A51: lea ecx, [ebp - 0x2c] */
    goto L_00558880; /* 0x007C6A54: jmp 0x558880 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00558880: RECOMP_ITAIL(0x00558880u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C6A59(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C6A59u);

L_007C6A59:
    ecx = ebp + (-0x2C); /* 0x007C6A59: lea ecx, [ebp - 0x2c] */
    goto L_00558880; /* 0x007C6A5C: jmp 0x558880 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00558880: RECOMP_ITAIL(0x00558880u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C6A61(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C6A61u);

    goto L_007C6A61;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007C6A61:
    edx = MEM32(esp + 0x8); /* 0x007C6A61: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007C6A65: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x30)); /* 0x007C6A68: mov ecx, dword ptr [edx - 0x30] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007C6A6B: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007C6A6D: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x8)); /* 0x007C6A72: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007C6A75: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007C6A77: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0084F9D0u; /* 0x007C6A7C: mov eax, 0x84f9d0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007C6A81: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007C6A90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C6A90u);

    goto L_007C6A90;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007C6A90:
    edx = MEM32(esp + 0x8); /* 0x007C6A90: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007C6A94: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x007C6A97: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007C6A9A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007C6A9C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0084FA14u; /* 0x007C6AA1: mov eax, 0x84fa14 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007C6AA6: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007C6AB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C6AB0u);

    goto L_007C6AB0;
L_006D50C0:
    PUSH32(esp, esi); /* 0x006D50C0: push esi */
    esi = ecx; /* 0x006D50C1: mov esi, ecx */
    RECOMP_ICALL(MEM32(0x7CC290)); /* 0x006D50C3: call dword ptr [0x7cc290] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x006D50C9: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006D50D5; /* 0x006D50CB: jne 0x6d50d5 */
L_006D50CD:
    ecx = MEM32(esi); /* 0x006D50CD: mov ecx, dword ptr [esi] */
    RECOMP_ICALL(MEM32(0x7CC244)); /* 0x006D50CF: call dword ptr [0x7cc244] */
    RECOMP_FLAGS_IN();
L_006D50D5:
    ecx = MEM32(esi); /* 0x006D50D5: mov ecx, dword ptr [esi] */
    esi = POP32_VAL(esp); /* 0x006D50D7: pop esi */
    eax = MEM32(ecx); /* 0x006D50D8: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x4); /* 0x006D50DA: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + ecx + 0x38); /* 0x006D50DD: mov ecx, dword ptr [eax + ecx + 0x38] */
    /* test ecx, ecx */ /* 0x006D50E1: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D50EA; /* 0x006D50E3: je 0x6d50ea */
L_006D50E5:
    eax = MEM32(ecx); /* 0x006D50E5: mov eax, dword ptr [ecx] */
    { _itail_tgt = (uint32_t)(MEM32(eax + 0x8)); goto _ljump; }
L_006D50EA:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D50EA: ret  */
L_007C6AB0:
    ecx = ebp + (-0x48); /* 0x007C6AB0: lea ecx, [ebp - 0x48] */
    RECOMP_BACKEDGE();
    goto L_006D50C0; /* 0x007C6AB3: jmp 0x6d50c0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007C6AB8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C6AB8u);

L_007C6AB8:
    ecx = ebp + (-0x2C); /* 0x007C6AB8: lea ecx, [ebp - 0x2c] */
    goto L_0052C530; /* 0x007C6ABB: jmp 0x52c530 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0052C530: RECOMP_ITAIL(0x0052C530u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C6AC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C6AC0u);

    goto L_007C6AC0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007C6AC0:
    edx = MEM32(esp + 0x8); /* 0x007C6AC0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007C6AC4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x54)); /* 0x007C6AC7: mov ecx, dword ptr [edx - 0x54] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007C6ACA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007C6ACC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0084FA6Cu; /* 0x007C6AD1: mov eax, 0x84fa6c */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007C6AD6: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007C6AE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C6AE0u);

    goto L_007C6AE0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007C6AE0:
    edx = MEM32(esp + 0x8); /* 0x007C6AE0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007C6AE4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x007C6AE7: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007C6AEA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007C6AEC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0084FAD4u; /* 0x007C6AF1: mov eax, 0x84fad4 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007C6AF6: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007C6B00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C6B00u);

    goto L_007C6B00;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007C6B00:
    edx = MEM32(esp + 0x8); /* 0x007C6B00: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007C6B04: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x007C6B07: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007C6B0A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007C6B0C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0084FB2Cu; /* 0x007C6B11: mov eax, 0x84fb2c */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007C6B16: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007C6B20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C6B20u);

    goto L_007C6B20;
L_006D57E0:
    MEM32(ecx) = 0x00801A40u; /* 0x006D57E0: mov dword ptr [ecx], 0x801a40 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D57E6: ret  */
L_007C6B20:
    ecx = MEM32(ebp + (-0x10)); /* 0x007C6B20: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_BACKEDGE();
    goto L_006D57E0; /* 0x007C6B23: jmp 0x6d57e0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_007C6B28(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C6B28u);

    goto L_007C6B28;
L_006DC010:
    PUSH32(esp, esi); /* 0x006DC010: push esi */
    esi = ecx; /* 0x006DC011: mov esi, ecx */
    eax = MEM32(esi + 0xC); /* 0x006DC013: mov eax, dword ptr [esi + 0xc] */
    ecx = esi + 0x4; /* 0x006DC016: lea ecx, [esi + 4] */
    MEM32(esi) = 0x008030A8u; /* 0x006DC019: mov dword ptr [esi], 0x8030a8 */
    _flag_a = (uint32_t)(MEM32(eax + 0xA18)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0xA18) = MEM32(eax + 0xA18) - 1; /* 0x006DC01F: dec dword ptr [eax + 0xa18] */
    _flag_k = FK_DEC;
    RECOMP_CALL(sub_006DC040); /* 0x006DC025: call 0x6dc040 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x00801A40u; /* 0x006DC02A: mov dword ptr [esi], 0x801a40 */
    esi = POP32_VAL(esp); /* 0x006DC030: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006DC031: ret  */
L_007C6B28:
    ecx = MEM32(ebp + (-0x10)); /* 0x007C6B28: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x007C6B2B: add ecx, 4 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_006DC010; /* 0x007C6B2E: jmp 0x6dc010 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_007C6B33(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C6B33u);

    goto L_007C6B33;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007C6B33:
    edx = MEM32(esp + 0x8); /* 0x007C6B33: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007C6B37: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xC)); /* 0x007C6B3A: mov ecx, dword ptr [edx - 0xc] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007C6B3D: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007C6B3F: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0084FB84u; /* 0x007C6B44: mov eax, 0x84fb84 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007C6B49: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007C6B50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C6B50u);

    goto L_007C6B50;
L_006D77C0:
    eax = MEM32(ecx + 0x4); /* 0x006D77C0: mov eax, dword ptr [ecx + 4] */
    /* test eax, eax */ /* 0x006D77C3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D77CF; /* 0x006D77C5: je 0x6d77cf */
L_006D77C7:
    PUSH32(esp, eax); /* 0x006D77C7: push eax */
    RECOMP_ICALL(MEM32(0x7CC6A8)); /* 0x006D77C8: call dword ptr [0x7cc6a8] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x006D77CE: pop ecx */
L_006D77CF:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D77CF: ret  */
L_007C6B50:
    ecx = ebp + (-0x4C); /* 0x007C6B50: lea ecx, [ebp - 0x4c] */
    RECOMP_BACKEDGE();
    goto L_006D77C0; /* 0x007C6B53: jmp 0x6d77c0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_007C6B58(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C6B58u);

    goto L_007C6B58;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007C6B58:
    edx = MEM32(esp + 0x8); /* 0x007C6B58: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007C6B5C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x54)); /* 0x007C6B5F: mov ecx, dword ptr [edx - 0x54] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007C6B62: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007C6B64: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007C6B69: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007C6B6C: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007C6B6E: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0084FBB8u; /* 0x007C6B73: mov eax, 0x84fbb8 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007C6B78: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007C6B80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C6B80u);

    goto L_007C6B80;
L_006D57E0:
    MEM32(ecx) = 0x00801A40u; /* 0x006D57E0: mov dword ptr [ecx], 0x801a40 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D57E6: ret  */
L_007C6B80:
    ecx = MEM32(ebp + (-0x10)); /* 0x007C6B80: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_BACKEDGE();
    goto L_006D57E0; /* 0x007C6B83: jmp 0x6d57e0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_007C6B88(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C6B88u);

    goto L_007C6B88;
L_006DC010:
    PUSH32(esp, esi); /* 0x006DC010: push esi */
    esi = ecx; /* 0x006DC011: mov esi, ecx */
    eax = MEM32(esi + 0xC); /* 0x006DC013: mov eax, dword ptr [esi + 0xc] */
    ecx = esi + 0x4; /* 0x006DC016: lea ecx, [esi + 4] */
    MEM32(esi) = 0x008030A8u; /* 0x006DC019: mov dword ptr [esi], 0x8030a8 */
    _flag_a = (uint32_t)(MEM32(eax + 0xA18)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0xA18) = MEM32(eax + 0xA18) - 1; /* 0x006DC01F: dec dword ptr [eax + 0xa18] */
    _flag_k = FK_DEC;
    RECOMP_CALL(sub_006DC040); /* 0x006DC025: call 0x6dc040 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x00801A40u; /* 0x006DC02A: mov dword ptr [esi], 0x801a40 */
    esi = POP32_VAL(esp); /* 0x006DC030: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006DC031: ret  */
L_007C6B88:
    ecx = MEM32(ebp + (-0x10)); /* 0x007C6B88: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x007C6B8B: add ecx, 4 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_006DC010; /* 0x007C6B8E: jmp 0x6dc010 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_007C6B93(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C6B93u);

L_007C6B93:
    ecx = MEM32(ebp + (-0x10)); /* 0x007C6B93: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x40u; /* 0x007C6B96: add ecx, 0x40 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x007C6B99: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C6B9E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C6B9Eu);

    goto L_007C6B9E;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007C6B9E:
    edx = MEM32(esp + 0x8); /* 0x007C6B9E: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007C6BA2: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xC)); /* 0x007C6BA5: mov ecx, dword ptr [edx - 0xc] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007C6BA8: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007C6BAA: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0084FBE4u; /* 0x007C6BAF: mov eax, 0x84fbe4 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007C6BB4: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007C6BC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C6BC0u);

L_007C6BC0:
    ecx = ebp + (-0x2C); /* 0x007C6BC0: lea ecx, [ebp - 0x2c] */
    goto L_00558880; /* 0x007C6BC3: jmp 0x558880 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00558880: RECOMP_ITAIL(0x00558880u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C6BC8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C6BC8u);

    goto L_007C6BC8;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007C6BC8:
    edx = MEM32(esp + 0x8); /* 0x007C6BC8: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007C6BCC: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x30)); /* 0x007C6BCF: mov ecx, dword ptr [edx - 0x30] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007C6BD2: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007C6BD4: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x8)); /* 0x007C6BD9: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007C6BDC: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007C6BDE: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0084FC20u; /* 0x007C6BE3: mov eax, 0x84fc20 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007C6BE8: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007C6BF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C6BF0u);

L_007C6BF0:
    ecx = ebp + (-0x82C); /* 0x007C6BF0: lea ecx, [ebp - 0x82c] */
    goto L_00558880; /* 0x007C6BF6: jmp 0x558880 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00558880: RECOMP_ITAIL(0x00558880u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C6BFB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C6BFBu);

    goto L_007C6BFB;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007C6BFB:
    edx = MEM32(esp + 0x8); /* 0x007C6BFB: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007C6BFF: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x838)); /* 0x007C6C02: mov ecx, dword ptr [edx - 0x838] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007C6C08: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007C6C0A: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x8)); /* 0x007C6C0F: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007C6C12: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007C6C14: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0084FC4Cu; /* 0x007C6C19: mov eax, 0x84fc4c */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007C6C1E: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007C6C30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C6C30u);

    goto L_007C6C30;
L_006DEAD0:
    PUSH32(esp, ebx); /* 0x006DEAD0: push ebx */
    ebx = ecx; /* 0x006DEAD1: mov ebx, ecx */
    PUSH32(esp, esi); /* 0x006DEAD3: push esi */
    PUSH32(esp, edi); /* 0x006DEAD4: push edi */
    edi = 8; /* 0x006DEAD5: mov edi, 8 */
    MEM32(ebx) = 0x00803DF8u; /* 0x006DEADA: mov dword ptr [ebx], 0x803df8 */
    esi = ebx + 0x16C; /* 0x006DEAE0: lea esi, [ebx + 0x16c] */
L_006DEAE6:
    ecx = MEM32(esi); /* 0x006DEAE6: mov ecx, dword ptr [esi] */
    /* test ecx, ecx */ /* 0x006DEAE8: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DEAF3; /* 0x006DEAEA: je 0x6deaf3 */
L_006DEAEC:
    eax = MEM32(ecx); /* 0x006DEAEC: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x006DEAEE: push 1 */
    RECOMP_ICALL(MEM32(eax + 0x20)); /* 0x006DEAF0: call dword ptr [eax + 0x20] */
    RECOMP_FLAGS_IN();
L_006DEAF3:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x006DEAF3: add esi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x006DEAF6: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_006DEAE6; /* 0x006DEAF7: jne 0x6deae6 */
L_006DEAF9:
    edi = MEM32(ebx + 0x18C); /* 0x006DEAF9: mov edi, dword ptr [ebx + 0x18c] */
    esi = MEM32(0x7CC694); /* 0x006DEAFF: mov esi, dword ptr [0x7cc694] */
    /* test edi, edi */ /* 0x006DEB05: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DEB13; /* 0x006DEB07: je 0x6deb13 */
L_006DEB09:
    PUSH32(esp, MEM32(edi)); /* 0x006DEB09: push dword ptr [edi] */
    RECOMP_ICALL(esi); /* 0x006DEB0B: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x006DEB0D: push edi */
    RECOMP_ICALL(esi); /* 0x006DEB0E: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006DEB10: add esp, 8 */
    _flag_k = FK_ADD;
L_006DEB13:
    edi = MEM32(ebx + 0x190); /* 0x006DEB13: mov edi, dword ptr [ebx + 0x190] */
    /* test edi, edi */ /* 0x006DEB19: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DEB27; /* 0x006DEB1B: je 0x6deb27 */
L_006DEB1D:
    PUSH32(esp, MEM32(edi)); /* 0x006DEB1D: push dword ptr [edi] */
    RECOMP_ICALL(esi); /* 0x006DEB1F: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x006DEB21: push edi */
    RECOMP_ICALL(esi); /* 0x006DEB22: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006DEB24: add esp, 8 */
    _flag_k = FK_ADD;
L_006DEB27:
    edi = POP32_VAL(esp); /* 0x006DEB27: pop edi */
    esi = POP32_VAL(esp); /* 0x006DEB28: pop esi */
    ebx = POP32_VAL(esp); /* 0x006DEB29: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006DEB2A: ret  */
L_007C6C30:
    ecx = MEM32(ebp + (-0x18)); /* 0x007C6C30: mov ecx, dword ptr [ebp - 0x18] */
    RECOMP_BACKEDGE();
    goto L_006DEAD0; /* 0x007C6C33: jmp 0x6dead0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_007C6C38(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C6C38u);

    goto L_007C6C38;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007C6C38:
    edx = MEM32(esp + 0x8); /* 0x007C6C38: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007C6C3C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x007C6C3F: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007C6C42: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007C6C44: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0084FC78u; /* 0x007C6C49: mov eax, 0x84fc78 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007C6C4E: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007C6C60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C6C60u);

    goto L_007C6C60;
L_006DEAD0:
    PUSH32(esp, ebx); /* 0x006DEAD0: push ebx */
    ebx = ecx; /* 0x006DEAD1: mov ebx, ecx */
    PUSH32(esp, esi); /* 0x006DEAD3: push esi */
    PUSH32(esp, edi); /* 0x006DEAD4: push edi */
    edi = 8; /* 0x006DEAD5: mov edi, 8 */
    MEM32(ebx) = 0x00803DF8u; /* 0x006DEADA: mov dword ptr [ebx], 0x803df8 */
    esi = ebx + 0x16C; /* 0x006DEAE0: lea esi, [ebx + 0x16c] */
L_006DEAE6:
    ecx = MEM32(esi); /* 0x006DEAE6: mov ecx, dword ptr [esi] */
    /* test ecx, ecx */ /* 0x006DEAE8: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DEAF3; /* 0x006DEAEA: je 0x6deaf3 */
L_006DEAEC:
    eax = MEM32(ecx); /* 0x006DEAEC: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x006DEAEE: push 1 */
    RECOMP_ICALL(MEM32(eax + 0x20)); /* 0x006DEAF0: call dword ptr [eax + 0x20] */
    RECOMP_FLAGS_IN();
L_006DEAF3:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x006DEAF3: add esi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x006DEAF6: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_006DEAE6; /* 0x006DEAF7: jne 0x6deae6 */
L_006DEAF9:
    edi = MEM32(ebx + 0x18C); /* 0x006DEAF9: mov edi, dword ptr [ebx + 0x18c] */
    esi = MEM32(0x7CC694); /* 0x006DEAFF: mov esi, dword ptr [0x7cc694] */
    /* test edi, edi */ /* 0x006DEB05: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DEB13; /* 0x006DEB07: je 0x6deb13 */
L_006DEB09:
    PUSH32(esp, MEM32(edi)); /* 0x006DEB09: push dword ptr [edi] */
    RECOMP_ICALL(esi); /* 0x006DEB0B: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x006DEB0D: push edi */
    RECOMP_ICALL(esi); /* 0x006DEB0E: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006DEB10: add esp, 8 */
    _flag_k = FK_ADD;
L_006DEB13:
    edi = MEM32(ebx + 0x190); /* 0x006DEB13: mov edi, dword ptr [ebx + 0x190] */
    /* test edi, edi */ /* 0x006DEB19: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DEB27; /* 0x006DEB1B: je 0x6deb27 */
L_006DEB1D:
    PUSH32(esp, MEM32(edi)); /* 0x006DEB1D: push dword ptr [edi] */
    RECOMP_ICALL(esi); /* 0x006DEB1F: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x006DEB21: push edi */
    RECOMP_ICALL(esi); /* 0x006DEB22: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006DEB24: add esp, 8 */
    _flag_k = FK_ADD;
L_006DEB27:
    edi = POP32_VAL(esp); /* 0x006DEB27: pop edi */
    esi = POP32_VAL(esp); /* 0x006DEB28: pop esi */
    ebx = POP32_VAL(esp); /* 0x006DEB29: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006DEB2A: ret  */
L_007C6C60:
    ecx = MEM32(ebp + (-0x10)); /* 0x007C6C60: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_BACKEDGE();
    goto L_006DEAD0; /* 0x007C6C63: jmp 0x6dead0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_007C6C68(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C6C68u);

    goto L_007C6C68;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007C6C68:
    edx = MEM32(esp + 0x8); /* 0x007C6C68: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007C6C6C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x10)); /* 0x007C6C6F: mov ecx, dword ptr [edx - 0x10] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007C6C72: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007C6C74: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0084FCA4u; /* 0x007C6C79: mov eax, 0x84fca4 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007C6C7E: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007C6C90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C6C90u);

    goto L_007C6C90;
L_006DECF0:
    eax = MEM32(ecx + 0x4C); /* 0x006DECF0: mov eax, dword ptr [ecx + 0x4c] */
    MEM32(ecx) = 0x007F8DACu; /* 0x006DECF3: mov dword ptr [ecx], 0x7f8dac */
    /* test eax, eax */ /* 0x006DECF9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DED05; /* 0x006DECFB: je 0x6ded05 */
L_006DECFD:
    PUSH32(esp, ecx); /* 0x006DECFD: push ecx */
    ecx = eax; /* 0x006DECFE: mov ecx, eax */
    RECOMP_CALL(sub_006E0330); /* 0x006DED00: call 0x6e0330 */
    RECOMP_FLAGS_IN();
L_006DED05:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006DED05: ret  */
L_007C6C90:
    ecx = MEM32(ebp + (-0x10)); /* 0x007C6C90: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_BACKEDGE();
    goto L_006DECF0; /* 0x007C6C93: jmp 0x6decf0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_007C6C98(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C6C98u);

    goto L_007C6C98;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007C6C98:
    edx = MEM32(esp + 0x8); /* 0x007C6C98: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007C6C9C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xC)); /* 0x007C6C9F: mov ecx, dword ptr [edx - 0xc] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007C6CA2: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007C6CA4: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0084FCD0u; /* 0x007C6CA9: mov eax, 0x84fcd0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007C6CAE: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007C6CC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C6CC0u);

L_007C6CC0:
    eax = MEM32(ebp + (-0x10)); /* 0x007C6CC0: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007C6CC3: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C6CC4: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007C6CCA: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C6CCB: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C6CCC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C6CCCu);

    goto L_007C6CCC;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007C6CCC:
    edx = MEM32(esp + 0x8); /* 0x007C6CCC: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007C6CD0: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x10)); /* 0x007C6CD3: mov ecx, dword ptr [edx - 0x10] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007C6CD6: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007C6CD8: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0084FCFCu; /* 0x007C6CDD: mov eax, 0x84fcfc */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007C6CE2: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007C6CF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C6CF0u);

    goto L_007C6CF0;
L_006E0410:
    PUSH32(esp, MEM32(ecx + 0x4)); /* 0x006E0410: push dword ptr [ecx + 4] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x006E0413: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x006E0419: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006E041A: ret  */
L_007C6CF0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007C6CF0: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x14u; /* 0x007C6CF3: add ecx, 0x14 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_006E0410; /* 0x007C6CF6: jmp 0x6e0410 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_007C6CFB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C6CFBu);

    goto L_007C6CFB;
L_006E0410:
    PUSH32(esp, MEM32(ecx + 0x4)); /* 0x006E0410: push dword ptr [ecx + 4] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x006E0413: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x006E0419: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006E041A: ret  */
L_007C6CFB:
    ecx = MEM32(ebp + (-0x10)); /* 0x007C6CFB: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x24u; /* 0x007C6CFE: add ecx, 0x24 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_006E0410; /* 0x007C6D01: jmp 0x6e0410 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_007C6D06(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C6D06u);

    goto L_007C6D06;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007C6D06:
    edx = MEM32(esp + 0x8); /* 0x007C6D06: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007C6D0A: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xC)); /* 0x007C6D0D: mov ecx, dword ptr [edx - 0xc] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007C6D10: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007C6D12: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0084FD28u; /* 0x007C6D17: mov eax, 0x84fd28 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007C6D1C: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007C6D30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C6D30u);

    goto L_007C6D30;
L_006E0410:
    PUSH32(esp, MEM32(ecx + 0x4)); /* 0x006E0410: push dword ptr [ecx + 4] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x006E0413: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x006E0419: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006E041A: ret  */
L_007C6D30:
    ecx = MEM32(ebp + (-0x10)); /* 0x007C6D30: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x14u; /* 0x007C6D33: add ecx, 0x14 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_006E0410; /* 0x007C6D36: jmp 0x6e0410 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_007C6D3B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C6D3Bu);

    goto L_007C6D3B;
L_006E0410:
    PUSH32(esp, MEM32(ecx + 0x4)); /* 0x006E0410: push dword ptr [ecx + 4] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x006E0413: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x006E0419: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006E041A: ret  */
L_007C6D3B:
    ecx = MEM32(ebp + (-0x10)); /* 0x007C6D3B: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x24u; /* 0x007C6D3E: add ecx, 0x24 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_006E0410; /* 0x007C6D41: jmp 0x6e0410 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_007C6D46(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C6D46u);

    goto L_007C6D46;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007C6D46:
    edx = MEM32(esp + 0x8); /* 0x007C6D46: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007C6D4A: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x007C6D4D: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007C6D50: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007C6D52: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0084FD5Cu; /* 0x007C6D57: mov eax, 0x84fd5c */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007C6D5C: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007C6D70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C6D70u);

    goto L_007C6D70;
L_006E0410:
    PUSH32(esp, MEM32(ecx + 0x4)); /* 0x006E0410: push dword ptr [ecx + 4] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x006E0413: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x006E0419: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006E041A: ret  */
L_007C6D70:
    ecx = ebp + (-0x1C); /* 0x007C6D70: lea ecx, [ebp - 0x1c] */
    RECOMP_BACKEDGE();
    goto L_006E0410; /* 0x007C6D73: jmp 0x6e0410 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_007C6D78(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C6D78u);

    goto L_007C6D78;
L_006E0410:
    PUSH32(esp, MEM32(ecx + 0x4)); /* 0x006E0410: push dword ptr [ecx + 4] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x006E0413: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x006E0419: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006E041A: ret  */
L_007C6D78:
    ecx = ebp + (-0x1C); /* 0x007C6D78: lea ecx, [ebp - 0x1c] */
    RECOMP_BACKEDGE();
    goto L_006E0410; /* 0x007C6D7B: jmp 0x6e0410 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_007C6D80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C6D80u);

    goto L_007C6D80;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007C6D80:
    edx = MEM32(esp + 0x8); /* 0x007C6D80: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007C6D84: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xC8)); /* 0x007C6D87: mov ecx, dword ptr [edx - 0xc8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007C6D8D: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007C6D8F: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x8)); /* 0x007C6D94: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007C6D97: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007C6D99: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0084FD90u; /* 0x007C6D9E: mov eax, 0x84fd90 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007C6DA3: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007C6DB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C6DB0u);

    goto L_007C6DB0;
L_006E9BD0:
    MEM32(ecx) = 0x00803EA8u; /* 0x006E9BD0: mov dword ptr [ecx], 0x803ea8 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006E9BD6: ret  */
L_007C6DB0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007C6DB0: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_BACKEDGE();
    goto L_006E9BD0; /* 0x007C6DB3: jmp 0x6e9bd0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_007C6DB8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C6DB8u);

    goto L_007C6DB8;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007C6DB8:
    edx = MEM32(esp + 0x8); /* 0x007C6DB8: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007C6DBC: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xC)); /* 0x007C6DBF: mov ecx, dword ptr [edx - 0xc] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007C6DC2: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007C6DC4: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0084FDC4u; /* 0x007C6DC9: mov eax, 0x84fdc4 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007C6DCE: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007C6DE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C6DE0u);

L_007C6DE0:
    PUSH32(esp, ebp); /* 0x007C6DE0: push ebp */
    ebp = esp; /* 0x007C6DE1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x007C6DE3: push -1 */
    PUSH32(esp, 0x00781854u); /* 0x007C6DE5: push 0x781854 */
    eax = MEM32(FS_BASE + (0)); /* 0x007C6DEA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x007C6DF0: push eax */
    eax = MEM32(0x855000); /* 0x007C6DF1: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x007C6DF6: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x007C6DF8: push eax */
    eax = ebp + (-0xC); /* 0x007C6DF9: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x007C6DFC: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x007C6E02: mov dword ptr [ebp - 4], 0xffffffff */
    MEM32(0x86608C) = 0x007CCF2Cu; /* 0x007C6E09: mov dword ptr [0x86608c], 0x7ccf2c */
    ecx = MEM32(ebp + (-0xC)); /* 0x007C6E13: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x007C6E16: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x007C6E1D: pop ecx */
    esp = ebp; /* 0x007C6E1E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C6E20: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C6E21: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C6E30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C6E30u);

L_007C6E30:
    PUSH32(esp, ebp); /* 0x007C6E30: push ebp */
    ebp = esp; /* 0x007C6E31: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x007C6E33: push -1 */
    PUSH32(esp, 0x00781884u); /* 0x007C6E35: push 0x781884 */
    eax = MEM32(FS_BASE + (0)); /* 0x007C6E3A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x007C6E40: push eax */
    eax = MEM32(0x855000); /* 0x007C6E41: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x007C6E46: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x007C6E48: push eax */
    eax = ebp + (-0xC); /* 0x007C6E49: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x007C6E4C: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x007C6E52: mov dword ptr [ebp - 4], 0xffffffff */
    MEM32(0x866094) = 0x007CCF2Cu; /* 0x007C6E59: mov dword ptr [0x866094], 0x7ccf2c */
    ecx = MEM32(ebp + (-0xC)); /* 0x007C6E63: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x007C6E66: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x007C6E6D: pop ecx */
    esp = ebp; /* 0x007C6E6E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C6E70: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C6E71: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C6E80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C6E80u);

L_007C6E80:
    PUSH32(esp, ebp); /* 0x007C6E80: push ebp */
    ebp = esp; /* 0x007C6E81: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x007C6E83: push -1 */
    PUSH32(esp, 0x007817BAu); /* 0x007C6E85: push 0x7817ba */
    eax = MEM32(FS_BASE + (0)); /* 0x007C6E8A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x007C6E90: push eax */
    eax = MEM32(0x855000); /* 0x007C6E91: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x007C6E96: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x007C6E98: push eax */
    eax = ebp + (-0xC); /* 0x007C6E99: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x007C6E9C: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x007C6EA2: mov dword ptr [ebp - 4], 0xffffffff */
    MEM32(0x866090) = 0x007CCF2Cu; /* 0x007C6EA9: mov dword ptr [0x866090], 0x7ccf2c */
    ecx = MEM32(ebp + (-0xC)); /* 0x007C6EB3: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x007C6EB6: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x007C6EBD: pop ecx */
    esp = ebp; /* 0x007C6EBE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C6EC0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C6EC1: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C6ED0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C6ED0u);

L_007C6ED0:
    PUSH32(esp, 0x0040A000u); /* 0x007C6ED0: push 0x40a000 */
    PUSH32(esp, 3); /* 0x007C6ED5: push 3 */
    PUSH32(esp, 0x18u); /* 0x007C6ED7: push 0x18 */
    PUSH32(esp, 0x00864A18u); /* 0x007C6ED9: push 0x864a18 */
    RECOMP_CALL(sub_0077F628); /* 0x007C6EDE: call 0x77f628 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C6EE3: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C6EF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C6EF0u);

L_007C6EF0:
    PUSH32(esp, 0x0040A000u); /* 0x007C6EF0: push 0x40a000 */
    PUSH32(esp, 3); /* 0x007C6EF5: push 3 */
    PUSH32(esp, 0x18u); /* 0x007C6EF7: push 0x18 */
    PUSH32(esp, 0x00864A60u); /* 0x007C6EF9: push 0x864a60 */
    RECOMP_CALL(sub_0077F628); /* 0x007C6EFE: call 0x77f628 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C6F03: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C6F10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C6F10u);

L_007C6F10:
    PUSH32(esp, ebp); /* 0x007C6F10: push ebp */
    ebp = esp; /* 0x007C6F11: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x007C6F13: push -1 */
    PUSH32(esp, 0x00781F68u); /* 0x007C6F15: push 0x781f68 */
    eax = MEM32(FS_BASE + (0)); /* 0x007C6F1A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x007C6F20: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x007C6F21: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x007C6F24: push esi */
    eax = MEM32(0x855000); /* 0x007C6F25: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x007C6F2A: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x007C6F2C: push eax */
    eax = ebp + (-0xC); /* 0x007C6F2D: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x007C6F30: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x4)) = 1; /* 0x007C6F36: mov dword ptr [ebp - 4], 1 */
    ecx = 0x0087CD40u; /* 0x007C6F3D: mov ecx, 0x87cd40 */
    eax = MEM32(0x87CD40); /* 0x007C6F42: mov eax, dword ptr [0x87cd40] */
    PUSH32(esp, eax); /* 0x007C6F47: push eax */
    PUSH32(esp, MEM32(eax)); /* 0x007C6F48: push dword ptr [eax] */
    eax = ebp + (-0x14); /* 0x007C6F4A: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x007C6F4D: push eax */
    RECOMP_CALL(sub_0040B350); /* 0x007C6F4E: call 0x40b350 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x007C6F53: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = ebp + (-0xD); /* 0x007C6F5A: lea ecx, [ebp - 0xd] */
    esi = MEM32(0x87CD40); /* 0x007C6F5D: mov esi, dword ptr [0x87cd40] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C6F63: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C6F68: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C6F69: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0xD); /* 0x007C6F6E: lea ecx, [ebp - 0xd] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C6F71: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C6F76: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C6F77: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0xD); /* 0x007C6F7C: lea ecx, [ebp - 0xd] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C6F7F: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C6F84: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C6F85: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0xD); /* 0x007C6F8A: lea ecx, [ebp - 0xd] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C6F8D: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C6F92: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C6F93: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C6F99: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x007C6F9C: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x007C6F9F: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x007C6FA6: pop ecx */
    esi = POP32_VAL(esp); /* 0x007C6FA7: pop esi */
    esp = ebp; /* 0x007C6FA8: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C6FAA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C6FAB: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C6FB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C6FB0u);

L_007C6FB0:
    PUSH32(esp, 0x0040A000u); /* 0x007C6FB0: push 0x40a000 */
    PUSH32(esp, 3); /* 0x007C6FB5: push 3 */
    PUSH32(esp, 0x18u); /* 0x007C6FB7: push 0x18 */
    PUSH32(esp, 0x00864AA8u); /* 0x007C6FB9: push 0x864aa8 */
    RECOMP_CALL(sub_0077F628); /* 0x007C6FBE: call 0x77f628 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C6FC3: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C6FD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C6FD0u);

L_007C6FD0:
    PUSH32(esp, 0x0040A000u); /* 0x007C6FD0: push 0x40a000 */
    PUSH32(esp, 3); /* 0x007C6FD5: push 3 */
    PUSH32(esp, 0x18u); /* 0x007C6FD7: push 0x18 */
    PUSH32(esp, 0x00864AF0u); /* 0x007C6FD9: push 0x864af0 */
    RECOMP_CALL(sub_0077F628); /* 0x007C6FDE: call 0x77f628 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C6FE3: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C6FF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C6FF0u);

L_007C6FF0:
    PUSH32(esp, 0x0040A000u); /* 0x007C6FF0: push 0x40a000 */
    PUSH32(esp, 3); /* 0x007C6FF5: push 3 */
    PUSH32(esp, 0x18u); /* 0x007C6FF7: push 0x18 */
    PUSH32(esp, 0x00864B38u); /* 0x007C6FF9: push 0x864b38 */
    RECOMP_CALL(sub_0077F628); /* 0x007C6FFE: call 0x77f628 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C7003: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C7010(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C7010u);

L_007C7010:
    PUSH32(esp, 0x0040A000u); /* 0x007C7010: push 0x40a000 */
    PUSH32(esp, 3); /* 0x007C7015: push 3 */
    PUSH32(esp, 0x18u); /* 0x007C7017: push 0x18 */
    PUSH32(esp, 0x00864B80u); /* 0x007C7019: push 0x864b80 */
    RECOMP_CALL(sub_0077F628); /* 0x007C701E: call 0x77f628 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C7023: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C7030(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C7030u);

L_007C7030:
    PUSH32(esp, 0x0040A000u); /* 0x007C7030: push 0x40a000 */
    PUSH32(esp, 3); /* 0x007C7035: push 3 */
    PUSH32(esp, 0x18u); /* 0x007C7037: push 0x18 */
    PUSH32(esp, 0x00864BC8u); /* 0x007C7039: push 0x864bc8 */
    RECOMP_CALL(sub_0077F628); /* 0x007C703E: call 0x77f628 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C7043: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C7050(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C7050u);

L_007C7050:
    PUSH32(esp, 0x00409980u); /* 0x007C7050: push 0x409980 */
    PUSH32(esp, 0x2710u); /* 0x007C7055: push 0x2710 */
    PUSH32(esp, 0x18u); /* 0x007C705A: push 0x18 */
    PUSH32(esp, 0x0087CD70u); /* 0x007C705C: push 0x87cd70 */
    RECOMP_CALL(sub_0077F628); /* 0x007C7061: call 0x77f628 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C7066: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C7070(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C7070u);

L_007C7070:
    PUSH32(esp, 0x00409980u); /* 0x007C7070: push 0x409980 */
    PUSH32(esp, 0x2710u); /* 0x007C7075: push 0x2710 */
    PUSH32(esp, 0x18u); /* 0x007C707A: push 0x18 */
    PUSH32(esp, 0x008B76F0u); /* 0x007C707C: push 0x8b76f0 */
    RECOMP_CALL(sub_0077F628); /* 0x007C7081: call 0x77f628 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C7086: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C7090(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C7090u);

L_007C7090:
    PUSH32(esp, 0x0040A000u); /* 0x007C7090: push 0x40a000 */
    PUSH32(esp, 3); /* 0x007C7095: push 3 */
    PUSH32(esp, 0x18u); /* 0x007C7097: push 0x18 */
    PUSH32(esp, 0x00864C10u); /* 0x007C7099: push 0x864c10 */
    RECOMP_CALL(sub_0077F628); /* 0x007C709E: call 0x77f628 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C70A3: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C70B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C70B0u);

L_007C70B0:
    PUSH32(esp, 0x0040A000u); /* 0x007C70B0: push 0x40a000 */
    PUSH32(esp, 8); /* 0x007C70B5: push 8 */
    PUSH32(esp, 0x18u); /* 0x007C70B7: push 0x18 */
    PUSH32(esp, 0x00864C58u); /* 0x007C70B9: push 0x864c58 */
    RECOMP_CALL(sub_0077F628); /* 0x007C70BE: call 0x77f628 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C70C3: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C70D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C70D0u);

L_007C70D0:
    PUSH32(esp, 0x0040A000u); /* 0x007C70D0: push 0x40a000 */
    PUSH32(esp, 4); /* 0x007C70D5: push 4 */
    PUSH32(esp, 0x18u); /* 0x007C70D7: push 0x18 */
    PUSH32(esp, 0x00864D18u); /* 0x007C70D9: push 0x864d18 */
    RECOMP_CALL(sub_0077F628); /* 0x007C70DE: call 0x77f628 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C70E3: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C70F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C70F0u);

L_007C70F0:
    PUSH32(esp, 0x0040A000u); /* 0x007C70F0: push 0x40a000 */
    PUSH32(esp, 8); /* 0x007C70F5: push 8 */
    PUSH32(esp, 0x18u); /* 0x007C70F7: push 0x18 */
    PUSH32(esp, 0x00864D78u); /* 0x007C70F9: push 0x864d78 */
    RECOMP_CALL(sub_0077F628); /* 0x007C70FE: call 0x77f628 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C7103: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C7110(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C7110u);

L_007C7110:
    PUSH32(esp, 0x0040A000u); /* 0x007C7110: push 0x40a000 */
    PUSH32(esp, 8); /* 0x007C7115: push 8 */
    PUSH32(esp, 0x18u); /* 0x007C7117: push 0x18 */
    PUSH32(esp, 0x00864E38u); /* 0x007C7119: push 0x864e38 */
    RECOMP_CALL(sub_0077F628); /* 0x007C711E: call 0x77f628 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C7123: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C7130(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C7130u);

L_007C7130:
    PUSH32(esp, ebp); /* 0x007C7130: push ebp */
    ebp = esp; /* 0x007C7131: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C7133: push ecx */
    /* cmp MEM32(0x8F20D8), 0 */ /* 0x007C7134: cmp dword ptr [0x8f20d8], 0 */
    _flag_a = (uint32_t)(MEM32(0x8F20D8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_007C717A; /* 0x007C713B: je 0x7c717a */
L_007C713D:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x007C713D: sub esp, 8 */
    _flag_k = FK_CMP;
    RECOMP_CALL(sub_0040A6F0); /* 0x007C7140: call 0x40a6f0 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C7145: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C7148: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(0x8F20D8)); /* 0x007C714D: push dword ptr [0x8f20d8] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C7153: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C7159: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(0x8F20D8) = 0; /* 0x007C715C: mov dword ptr [0x8f20d8], 0 */
    MEM32(0x8F20DC) = 0; /* 0x007C7166: mov dword ptr [0x8f20dc], 0 */
    MEM32(0x8F20E0) = 0; /* 0x007C7170: mov dword ptr [0x8f20e0], 0 */
L_007C717A:
    esp = ebp; /* 0x007C717A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C717C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C717D: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C7180(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C7180u);

L_007C7180:
    PUSH32(esp, ebp); /* 0x007C7180: push ebp */
    ebp = esp; /* 0x007C7181: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x007C7183: push -1 */
    PUSH32(esp, 0x0078B6B4u); /* 0x007C7185: push 0x78b6b4 */
    eax = MEM32(FS_BASE + (0)); /* 0x007C718A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x007C7190: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x007C7191: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x007C7194: push esi */
    eax = MEM32(0x855000); /* 0x007C7195: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x007C719A: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x007C719C: push eax */
    eax = ebp + (-0xC); /* 0x007C719D: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x007C71A0: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x4)) = 1; /* 0x007C71A6: mov dword ptr [ebp - 4], 1 */
    eax = MEM32(0x8F2128); /* 0x007C71AD: mov eax, dword ptr [0x8f2128] */
    PUSH32(esp, eax); /* 0x007C71B2: push eax */
    PUSH32(esp, MEM32(eax)); /* 0x007C71B3: push dword ptr [eax] */
    eax = ebp + (-0x14); /* 0x007C71B5: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x007C71B8: push eax */
    RECOMP_CALL(sub_004966D0); /* 0x007C71B9: call 0x4966d0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x007C71BE: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = ebp + (-0xD); /* 0x007C71C5: lea ecx, [ebp - 0xd] */
    esi = MEM32(0x8F2128); /* 0x007C71C8: mov esi, dword ptr [0x8f2128] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C71CE: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C71D3: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C71D4: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0xD); /* 0x007C71D9: lea ecx, [ebp - 0xd] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C71DC: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C71E1: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C71E2: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0xD); /* 0x007C71E7: lea ecx, [ebp - 0xd] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C71EA: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C71EF: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C71F0: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0xD); /* 0x007C71F5: lea ecx, [ebp - 0xd] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C71F8: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C71FD: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C71FE: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C7204: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x007C7207: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x007C720A: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x007C7211: pop ecx */
    esi = POP32_VAL(esp); /* 0x007C7212: pop esi */
    esp = ebp; /* 0x007C7213: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C7215: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C7216: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C7220(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C7220u);

L_007C7220:
    PUSH32(esp, ebp); /* 0x007C7220: push ebp */
    ebp = esp; /* 0x007C7221: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x007C7223: push -1 */
    PUSH32(esp, 0x0078D72Au); /* 0x007C7225: push 0x78d72a */
    eax = MEM32(FS_BASE + (0)); /* 0x007C722A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x007C7230: push eax */
    PUSH32(esp, ecx); /* 0x007C7231: push ecx */
    PUSH32(esp, esi); /* 0x007C7232: push esi */
    eax = MEM32(0x855000); /* 0x007C7233: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x007C7238: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x007C723A: push eax */
    eax = ebp + (-0xC); /* 0x007C723B: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x007C723E: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x007C7244: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(0x864F10), 0x10u */ /* 0x007C724B: cmp dword ptr [0x864f10], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x864F10)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C727A; /* 0x007C7252: jb 0x7c727a */
L_007C7254:
    esi = MEM32(0x864EFC); /* 0x007C7254: mov esi, dword ptr [0x864efc] */
    ecx = ebp + (-0xD); /* 0x007C725A: lea ecx, [ebp - 0xd] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C725D: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C7262: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C7263: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0xD); /* 0x007C7268: lea ecx, [ebp - 0xd] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C726B: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C7270: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C7271: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C7277: add esp, 4 */
    _flag_k = FK_ADD;
L_007C727A:
    MEM32(0x864F10) = 0xFu; /* 0x007C727A: mov dword ptr [0x864f10], 0xf */
    MEM32(0x864F0C) = 0; /* 0x007C7284: mov dword ptr [0x864f0c], 0 */
    MEM8(0x864EFC) = (uint8_t)(0); /* 0x007C728E: mov byte ptr [0x864efc], 0 */
    ecx = MEM32(ebp + (-0xC)); /* 0x007C7295: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x007C7298: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x007C729F: pop ecx */
    esi = POP32_VAL(esp); /* 0x007C72A0: pop esi */
    esp = ebp; /* 0x007C72A1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C72A3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C72A4: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C72B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C72B0u);

L_007C72B0:
    PUSH32(esp, ebp); /* 0x007C72B0: push ebp */
    ebp = esp; /* 0x007C72B1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C72B3: push ecx */
    /* cmp MEM32(0x864F2C), 0x10u */ /* 0x007C72B4: cmp dword ptr [0x864f2c], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x864F2C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C72E5; /* 0x007C72BB: jb 0x7c72e5 */
L_007C72BD:
    PUSH32(esp, esi); /* 0x007C72BD: push esi */
    esi = MEM32(0x864F18); /* 0x007C72BE: mov esi, dword ptr [0x864f18] */
    ecx = ebp + (-0x1); /* 0x007C72C4: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C72C7: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C72CC: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C72CD: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C72D2: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C72D5: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C72DA: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C72DB: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C72E1: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C72E4: pop esi */
L_007C72E5:
    MEM32(0x864F2C) = 0xFu; /* 0x007C72E5: mov dword ptr [0x864f2c], 0xf */
    MEM32(0x864F28) = 0; /* 0x007C72EF: mov dword ptr [0x864f28], 0 */
    MEM8(0x864F18) = (uint8_t)(0); /* 0x007C72F9: mov byte ptr [0x864f18], 0 */
    esp = ebp; /* 0x007C7300: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C7302: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C7303: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C7310(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C7310u);

L_007C7310:
    PUSH32(esp, 0x004296F0u); /* 0x007C7310: push 0x4296f0 */
    PUSH32(esp, 0x40u); /* 0x007C7315: push 0x40 */
    PUSH32(esp, 0x40u); /* 0x007C7317: push 0x40 */
    PUSH32(esp, 0x008F2190u); /* 0x007C7319: push 0x8f2190 */
    RECOMP_CALL(sub_0077F628); /* 0x007C731E: call 0x77f628 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C7323: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C7330(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C7330u);

L_007C7330:
    PUSH32(esp, ebp); /* 0x007C7330: push ebp */
    ebp = esp; /* 0x007C7331: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x007C7333: push -1 */
    PUSH32(esp, 0x007927AAu); /* 0x007C7335: push 0x7927aa */
    eax = MEM32(FS_BASE + (0)); /* 0x007C733A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x007C7340: push eax */
    PUSH32(esp, ecx); /* 0x007C7341: push ecx */
    PUSH32(esp, esi); /* 0x007C7342: push esi */
    eax = MEM32(0x855000); /* 0x007C7343: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x007C7348: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x007C734A: push eax */
    eax = ebp + (-0xC); /* 0x007C734B: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x007C734E: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x007C7354: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(0x864F78), 0x10u */ /* 0x007C735B: cmp dword ptr [0x864f78], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x864F78)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C738A; /* 0x007C7362: jb 0x7c738a */
L_007C7364:
    esi = MEM32(0x864F64); /* 0x007C7364: mov esi, dword ptr [0x864f64] */
    ecx = ebp + (-0xD); /* 0x007C736A: lea ecx, [ebp - 0xd] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C736D: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C7372: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C7373: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0xD); /* 0x007C7378: lea ecx, [ebp - 0xd] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C737B: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C7380: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C7381: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C7387: add esp, 4 */
    _flag_k = FK_ADD;
L_007C738A:
    MEM32(0x864F78) = 0xFu; /* 0x007C738A: mov dword ptr [0x864f78], 0xf */
    MEM32(0x864F74) = 0; /* 0x007C7394: mov dword ptr [0x864f74], 0 */
    MEM8(0x864F64) = (uint8_t)(0); /* 0x007C739E: mov byte ptr [0x864f64], 0 */
    ecx = MEM32(ebp + (-0xC)); /* 0x007C73A5: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x007C73A8: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x007C73AF: pop ecx */
    esi = POP32_VAL(esp); /* 0x007C73B0: pop esi */
    esp = ebp; /* 0x007C73B1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C73B3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C73B4: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C73C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C73C0u);

L_007C73C0:
    PUSH32(esp, ebp); /* 0x007C73C0: push ebp */
    ebp = esp; /* 0x007C73C1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C73C3: push ecx */
    /* cmp MEM32(0x864F90), 0x10u */ /* 0x007C73C4: cmp dword ptr [0x864f90], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x864F90)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C73F5; /* 0x007C73CB: jb 0x7c73f5 */
L_007C73CD:
    PUSH32(esp, esi); /* 0x007C73CD: push esi */
    esi = MEM32(0x864F7C); /* 0x007C73CE: mov esi, dword ptr [0x864f7c] */
    ecx = ebp + (-0x1); /* 0x007C73D4: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C73D7: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C73DC: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C73DD: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C73E2: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C73E5: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C73EA: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C73EB: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C73F1: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C73F4: pop esi */
L_007C73F5:
    MEM32(0x864F90) = 0xFu; /* 0x007C73F5: mov dword ptr [0x864f90], 0xf */
    MEM32(0x864F8C) = 0; /* 0x007C73FF: mov dword ptr [0x864f8c], 0 */
    MEM8(0x864F7C) = (uint8_t)(0); /* 0x007C7409: mov byte ptr [0x864f7c], 0 */
    esp = ebp; /* 0x007C7410: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C7412: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C7413: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C7420(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C7420u);

L_007C7420:
    PUSH32(esp, ebp); /* 0x007C7420: push ebp */
    ebp = esp; /* 0x007C7421: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C7423: push ecx */
    /* cmp MEM32(0x864FA8), 0x10u */ /* 0x007C7424: cmp dword ptr [0x864fa8], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x864FA8)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C7455; /* 0x007C742B: jb 0x7c7455 */
L_007C742D:
    PUSH32(esp, esi); /* 0x007C742D: push esi */
    esi = MEM32(0x864F94); /* 0x007C742E: mov esi, dword ptr [0x864f94] */
    ecx = ebp + (-0x1); /* 0x007C7434: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C7437: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C743C: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C743D: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C7442: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C7445: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C744A: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C744B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C7451: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C7454: pop esi */
L_007C7455:
    MEM32(0x864FA8) = 0xFu; /* 0x007C7455: mov dword ptr [0x864fa8], 0xf */
    MEM32(0x864FA4) = 0; /* 0x007C745F: mov dword ptr [0x864fa4], 0 */
    MEM8(0x864F94) = (uint8_t)(0); /* 0x007C7469: mov byte ptr [0x864f94], 0 */
    esp = ebp; /* 0x007C7470: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C7472: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C7473: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C7480(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C7480u);

L_007C7480:
    PUSH32(esp, ebp); /* 0x007C7480: push ebp */
    ebp = esp; /* 0x007C7481: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C7483: push ecx */
    /* cmp MEM32(0x864FD8), 0x10u */ /* 0x007C7484: cmp dword ptr [0x864fd8], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x864FD8)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C74B5; /* 0x007C748B: jb 0x7c74b5 */
L_007C748D:
    PUSH32(esp, esi); /* 0x007C748D: push esi */
    esi = MEM32(0x864FC4); /* 0x007C748E: mov esi, dword ptr [0x864fc4] */
    ecx = ebp + (-0x1); /* 0x007C7494: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C7497: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C749C: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C749D: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C74A2: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C74A5: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C74AA: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C74AB: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C74B1: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C74B4: pop esi */
L_007C74B5:
    MEM32(0x864FD8) = 0xFu; /* 0x007C74B5: mov dword ptr [0x864fd8], 0xf */
    MEM32(0x864FD4) = 0; /* 0x007C74BF: mov dword ptr [0x864fd4], 0 */
    MEM8(0x864FC4) = (uint8_t)(0); /* 0x007C74C9: mov byte ptr [0x864fc4], 0 */
    esp = ebp; /* 0x007C74D0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C74D2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C74D3: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C74E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C74E0u);

L_007C74E0:
    PUSH32(esp, ebp); /* 0x007C74E0: push ebp */
    ebp = esp; /* 0x007C74E1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C74E3: push ecx */
    /* cmp MEM32(0x864FF0), 0x10u */ /* 0x007C74E4: cmp dword ptr [0x864ff0], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x864FF0)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C7515; /* 0x007C74EB: jb 0x7c7515 */
L_007C74ED:
    PUSH32(esp, esi); /* 0x007C74ED: push esi */
    esi = MEM32(0x864FDC); /* 0x007C74EE: mov esi, dword ptr [0x864fdc] */
    ecx = ebp + (-0x1); /* 0x007C74F4: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C74F7: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C74FC: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C74FD: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C7502: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C7505: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C750A: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C750B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C7511: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C7514: pop esi */
L_007C7515:
    MEM32(0x864FF0) = 0xFu; /* 0x007C7515: mov dword ptr [0x864ff0], 0xf */
    MEM32(0x864FEC) = 0; /* 0x007C751F: mov dword ptr [0x864fec], 0 */
    MEM8(0x864FDC) = (uint8_t)(0); /* 0x007C7529: mov byte ptr [0x864fdc], 0 */
    esp = ebp; /* 0x007C7530: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C7532: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C7533: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C7540(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C7540u);

L_007C7540:
    PUSH32(esp, ebp); /* 0x007C7540: push ebp */
    ebp = esp; /* 0x007C7541: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C7543: push ecx */
    /* cmp MEM32(0x864FC0), 0x10u */ /* 0x007C7544: cmp dword ptr [0x864fc0], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x864FC0)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C7575; /* 0x007C754B: jb 0x7c7575 */
L_007C754D:
    PUSH32(esp, esi); /* 0x007C754D: push esi */
    esi = MEM32(0x864FAC); /* 0x007C754E: mov esi, dword ptr [0x864fac] */
    ecx = ebp + (-0x1); /* 0x007C7554: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C7557: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C755C: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C755D: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C7562: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C7565: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C756A: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C756B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C7571: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C7574: pop esi */
L_007C7575:
    MEM32(0x864FC0) = 0xFu; /* 0x007C7575: mov dword ptr [0x864fc0], 0xf */
    MEM32(0x864FBC) = 0; /* 0x007C757F: mov dword ptr [0x864fbc], 0 */
    MEM8(0x864FAC) = (uint8_t)(0); /* 0x007C7589: mov byte ptr [0x864fac], 0 */
    esp = ebp; /* 0x007C7590: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C7592: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C7593: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C75A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C75A0u);

L_007C75A0:
    PUSH32(esp, 0x00441610u); /* 0x007C75A0: push 0x441610 */
    PUSH32(esp, 7); /* 0x007C75A5: push 7 */
    PUSH32(esp, 0x30u); /* 0x007C75A7: push 0x30 */
    PUSH32(esp, 0x008F31D0u); /* 0x007C75A9: push 0x8f31d0 */
    RECOMP_CALL(sub_0077F628); /* 0x007C75AE: call 0x77f628 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C75B3: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C75C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C75C0u);

L_007C75C0:
    PUSH32(esp, ebp); /* 0x007C75C0: push ebp */
    ebp = esp; /* 0x007C75C1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C75C3: push ecx */
    /* cmp MEM32(0x865028), 0x10u */ /* 0x007C75C4: cmp dword ptr [0x865028], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x865028)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C75F5; /* 0x007C75CB: jb 0x7c75f5 */
L_007C75CD:
    PUSH32(esp, esi); /* 0x007C75CD: push esi */
    esi = MEM32(0x865014); /* 0x007C75CE: mov esi, dword ptr [0x865014] */
    ecx = ebp + (-0x1); /* 0x007C75D4: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C75D7: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C75DC: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C75DD: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C75E2: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C75E5: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C75EA: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C75EB: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C75F1: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C75F4: pop esi */
L_007C75F5:
    MEM32(0x865028) = 0xFu; /* 0x007C75F5: mov dword ptr [0x865028], 0xf */
    MEM32(0x865024) = 0; /* 0x007C75FF: mov dword ptr [0x865024], 0 */
    MEM8(0x865014) = (uint8_t)(0); /* 0x007C7609: mov byte ptr [0x865014], 0 */
    esp = ebp; /* 0x007C7610: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C7612: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C7613: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C7620(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C7620u);

L_007C7620:
    PUSH32(esp, ebp); /* 0x007C7620: push ebp */
    ebp = esp; /* 0x007C7621: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C7623: push ecx */
    /* cmp MEM32(0x865010), 0x10u */ /* 0x007C7624: cmp dword ptr [0x865010], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x865010)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C7655; /* 0x007C762B: jb 0x7c7655 */
L_007C762D:
    PUSH32(esp, esi); /* 0x007C762D: push esi */
    esi = MEM32(0x864FFC); /* 0x007C762E: mov esi, dword ptr [0x864ffc] */
    ecx = ebp + (-0x1); /* 0x007C7634: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C7637: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C763C: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C763D: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C7642: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C7645: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C764A: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C764B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C7651: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C7654: pop esi */
L_007C7655:
    MEM32(0x865010) = 0xFu; /* 0x007C7655: mov dword ptr [0x865010], 0xf */
    MEM32(0x86500C) = 0; /* 0x007C765F: mov dword ptr [0x86500c], 0 */
    MEM8(0x864FFC) = (uint8_t)(0); /* 0x007C7669: mov byte ptr [0x864ffc], 0 */
    esp = ebp; /* 0x007C7670: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C7672: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C7673: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C7680(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C7680u);

L_007C7680:
    PUSH32(esp, ebp); /* 0x007C7680: push ebp */
    ebp = esp; /* 0x007C7681: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C7683: push ecx */
    /* cmp MEM32(0x8650E8), 0x10u */ /* 0x007C7684: cmp dword ptr [0x8650e8], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x8650E8)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C76B5; /* 0x007C768B: jb 0x7c76b5 */
L_007C768D:
    PUSH32(esp, esi); /* 0x007C768D: push esi */
    esi = MEM32(0x8650D4); /* 0x007C768E: mov esi, dword ptr [0x8650d4] */
    ecx = ebp + (-0x1); /* 0x007C7694: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C7697: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C769C: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C769D: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C76A2: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C76A5: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C76AA: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C76AB: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C76B1: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C76B4: pop esi */
L_007C76B5:
    MEM32(0x8650E8) = 0xFu; /* 0x007C76B5: mov dword ptr [0x8650e8], 0xf */
    MEM32(0x8650E4) = 0; /* 0x007C76BF: mov dword ptr [0x8650e4], 0 */
    MEM8(0x8650D4) = (uint8_t)(0); /* 0x007C76C9: mov byte ptr [0x8650d4], 0 */
    esp = ebp; /* 0x007C76D0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C76D2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C76D3: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C76E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C76E0u);

L_007C76E0:
    PUSH32(esp, ebp); /* 0x007C76E0: push ebp */
    ebp = esp; /* 0x007C76E1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C76E3: push ecx */
    /* cmp MEM32(0x865100), 0x10u */ /* 0x007C76E4: cmp dword ptr [0x865100], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x865100)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C7715; /* 0x007C76EB: jb 0x7c7715 */
L_007C76ED:
    PUSH32(esp, esi); /* 0x007C76ED: push esi */
    esi = MEM32(0x8650EC); /* 0x007C76EE: mov esi, dword ptr [0x8650ec] */
    ecx = ebp + (-0x1); /* 0x007C76F4: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C76F7: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C76FC: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C76FD: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C7702: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C7705: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C770A: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C770B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C7711: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C7714: pop esi */
L_007C7715:
    MEM32(0x865100) = 0xFu; /* 0x007C7715: mov dword ptr [0x865100], 0xf */
    MEM32(0x8650FC) = 0; /* 0x007C771F: mov dword ptr [0x8650fc], 0 */
    MEM8(0x8650EC) = (uint8_t)(0); /* 0x007C7729: mov byte ptr [0x8650ec], 0 */
    esp = ebp; /* 0x007C7730: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C7732: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C7733: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C7740(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C7740u);

L_007C7740:
    PUSH32(esp, ebp); /* 0x007C7740: push ebp */
    ebp = esp; /* 0x007C7741: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C7743: push ecx */
    /* cmp MEM32(0x865184), 0x10u */ /* 0x007C7744: cmp dword ptr [0x865184], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x865184)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C7775; /* 0x007C774B: jb 0x7c7775 */
L_007C774D:
    PUSH32(esp, esi); /* 0x007C774D: push esi */
    esi = MEM32(0x865170); /* 0x007C774E: mov esi, dword ptr [0x865170] */
    ecx = ebp + (-0x1); /* 0x007C7754: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C7757: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C775C: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C775D: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C7762: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C7765: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C776A: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C776B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C7771: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C7774: pop esi */
L_007C7775:
    MEM32(0x865184) = 0xFu; /* 0x007C7775: mov dword ptr [0x865184], 0xf */
    MEM32(0x865180) = 0; /* 0x007C777F: mov dword ptr [0x865180], 0 */
    MEM8(0x865170) = (uint8_t)(0); /* 0x007C7789: mov byte ptr [0x865170], 0 */
    esp = ebp; /* 0x007C7790: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C7792: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C7793: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C77A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C77A0u);

L_007C77A0:
    PUSH32(esp, ebp); /* 0x007C77A0: push ebp */
    ebp = esp; /* 0x007C77A1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C77A3: push ecx */
    /* cmp MEM32(0x86516C), 0x10u */ /* 0x007C77A4: cmp dword ptr [0x86516c], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x86516C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C77D5; /* 0x007C77AB: jb 0x7c77d5 */
L_007C77AD:
    PUSH32(esp, esi); /* 0x007C77AD: push esi */
    esi = MEM32(0x865158); /* 0x007C77AE: mov esi, dword ptr [0x865158] */
    ecx = ebp + (-0x1); /* 0x007C77B4: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C77B7: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C77BC: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C77BD: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C77C2: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C77C5: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C77CA: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C77CB: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C77D1: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C77D4: pop esi */
L_007C77D5:
    MEM32(0x86516C) = 0xFu; /* 0x007C77D5: mov dword ptr [0x86516c], 0xf */
    MEM32(0x865168) = 0; /* 0x007C77DF: mov dword ptr [0x865168], 0 */
    MEM8(0x865158) = (uint8_t)(0); /* 0x007C77E9: mov byte ptr [0x865158], 0 */
    esp = ebp; /* 0x007C77F0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C77F2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C77F3: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C7800(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C7800u);

L_007C7800:
    PUSH32(esp, ebp); /* 0x007C7800: push ebp */
    ebp = esp; /* 0x007C7801: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007C7803: push ecx */
    /* cmp MEM32(0x865040), 0x10u */ /* 0x007C7804: cmp dword ptr [0x865040], 0x10 */
    _flag_a = (uint32_t)(MEM32(0x865040)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007C7835; /* 0x007C780B: jb 0x7c7835 */
L_007C780D:
    PUSH32(esp, esi); /* 0x007C780D: push esi */
    esi = MEM32(0x86502C); /* 0x007C780E: mov esi, dword ptr [0x86502c] */
    ecx = ebp + (-0x1); /* 0x007C7814: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C7817: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x007C781C: push ecx */
    RECOMP_CALL(sub_0040A620); /* 0x007C781D: call 0x40a620 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1); /* 0x007C7822: lea ecx, [ebp - 1] */
    RECOMP_CALL(sub_0040A4A0); /* 0x007C7825: call 0x40a4a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007C782A: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C782B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007C7831: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007C7834: pop esi */
L_007C7835:
    MEM32(0x865040) = 0xFu; /* 0x007C7835: mov dword ptr [0x865040], 0xf */
    MEM32(0x86503C) = 0; /* 0x007C783F: mov dword ptr [0x86503c], 0 */
    MEM8(0x86502C) = (uint8_t)(0); /* 0x007C7849: mov byte ptr [0x86502c], 0 */
    esp = ebp; /* 0x007C7850: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007C7852: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C7853: ret  */
    RECOMP_REGS_OUT();
}
