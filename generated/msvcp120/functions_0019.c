#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_110299C3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110299C3u);

L_110299C3:
    PUSH32(esp, 4); /* 0x110299C3: push 4 */
    eax = 0x1103D313u; /* 0x110299C5: mov eax, 0x1103d313 */
    RECOMP_CALL(sub_1103B372); /* 0x110299CA: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x10); /* 0x110299CF: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x110299D2: push eax */
    RECOMP_CALL(sub_1100F94A); /* 0x110299D3: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x110299D8: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x110299DC: push eax */
    RECOMP_CALL(sub_1101103E); /* 0x110299DD: call 0x1101103e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x110299E2: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = eax; /* 0x110299E6: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x110299E8: pop ecx */
    ecx = ebp + (-0x10); /* 0x110299E9: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1100E431); /* 0x110299EC: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x110299F1: push dword ptr [ebp + 0xc] */
    edx = MEM32(esi); /* 0x110299F4: mov edx, dword ptr [esi] */
    ecx = esi; /* 0x110299F6: mov ecx, esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x110299F8: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(edx + 0x38)); /* 0x110299FB: call dword ptr [edx + 0x38] */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_1103B340); /* 0x110299FE: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x11029A03: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_11029A06(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11029A06u);

L_11029A06:
    PUSH32(esp, 4); /* 0x11029A06: push 4 */
    eax = 0x1103D313u; /* 0x11029A08: mov eax, 0x1103d313 */
    RECOMP_CALL(sub_1103B372); /* 0x11029A0D: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x10); /* 0x11029A12: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x11029A15: push eax */
    RECOMP_CALL(sub_1100F94A); /* 0x11029A16: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11029A1B: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x11029A1F: push eax */
    RECOMP_CALL(sub_11010FA4); /* 0x11029A20: call 0x11010fa4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11029A25: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = eax; /* 0x11029A29: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x11029A2B: pop ecx */
    ecx = ebp + (-0x10); /* 0x11029A2C: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1100E431); /* 0x11029A2F: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11029A34: push dword ptr [ebp + 0xc] */
    edx = MEM32(esi); /* 0x11029A37: mov edx, dword ptr [esi] */
    ecx = esi; /* 0x11029A39: mov ecx, esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11029A3B: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(edx + 0x38)); /* 0x11029A3E: call dword ptr [edx + 0x38] */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_1103B340); /* 0x11029A41: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x11029A46: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_11029A49(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11029A49u);

L_11029A49:
    PUSH32(esp, esi); /* 0x11029A49: push esi */
    esi = ecx; /* 0x11029A4A: mov esi, ecx */
    eax = MEM32(esi); /* 0x11029A4C: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x11029A4E: mov ecx, dword ptr [eax + 4] */
    /* cmp MEM32(ecx + esi + 0xC), 0 */ /* 0x11029A51: cmp dword ptr [ecx + esi + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + esi + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11029A69; /* 0x11029A56: jne 0x11029a69 */
L_11029A58:
    ecx = MEM32(ecx + esi + 0x3C); /* 0x11029A58: mov ecx, dword ptr [ecx + esi + 0x3c] */
    /* test ecx, ecx */ /* 0x11029A5C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11029A69; /* 0x11029A5E: je 0x11029a69 */
L_11029A60:
    /* cmp ecx, esi */ /* 0x11029A60: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11029A69; /* 0x11029A62: je 0x11029a69 */
L_11029A64:
    RECOMP_CALL(sub_11010C82); /* 0x11029A64: call 0x11010c82 */
    RECOMP_FLAGS_IN();
L_11029A69:
    eax = MEM32(esi); /* 0x11029A69: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x11029A6B: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11029A6E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx + esi + 0xC), eax */ /* 0x11029A70: cmp dword ptr [ecx + esi + 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ecx + esi + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = POP32_VAL(esp); /* 0x11029A74: pop esi */
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x11029A75: sete al */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11029A78: ret  */
    RECOMP_REGS_OUT();
}

void sub_11029A79(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11029A79u);
    RECOMP_EH_ENTER();

    goto L_11029A79;
L_11010E89:
    PUSH32(esp, 4); /* 0x11010E89: push 4 */
    eax = 0x1103CE8Du; /* 0x11010E8B: mov eax, 0x1103ce8d */
    RECOMP_CALL(sub_1103B3DB); /* 0x11010E90: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x11010E95: mov esi, ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11010E97: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(esi); /* 0x11010E9B: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x11010E9D: mov ecx, dword ptr [eax + 4] */
    /* cmp MEM32(ecx + esi + 0xC), 0 */ /* 0x11010EA0: cmp dword ptr [ecx + esi + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + esi + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11010EDA; /* 0x11010EA5: jne 0x11010eda */
L_11010EA7:
    /* test MEM8(ecx + esi + 0x14), 2 */ /* 0x11010EA7: test byte ptr [ecx + esi + 0x14], 2 */
    _flag_a = (uint32_t)(MEM8(ecx + esi + 0x14)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11010EDA; /* 0x11010EAC: je 0x11010eda */
L_11010EAE:
    ecx = MEM32(ecx + esi + 0x38); /* 0x11010EAE: mov ecx, dword ptr [ecx + esi + 0x38] */
    eax = MEM32(ecx); /* 0x11010EB2: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x34)); /* 0x11010EB4: call dword ptr [eax + 0x34] */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xFFFFFFFFu */ /* 0x11010EB7: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11010EDA; /* 0x11010EBA: jne 0x11010eda */
L_11010EBC:
    eax = MEM32(esi); /* 0x11010EBC: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x11010EBE: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11010EC1: add ecx, esi */
    _flag_k = FK_ADD;
    eax = MEM32(ecx + 0xC); /* 0x11010EC3: mov eax, dword ptr [ecx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11010EC6: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx + 0x38), 0 */ /* 0x11010EC9: cmp dword ptr [ecx + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11010ED2; /* 0x11010ECD: jne 0x11010ed2 */
L_11010ECF:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11010ECF: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11010ED2:
    PUSH32(esp, 0); /* 0x11010ED2: push 0 */
    PUSH32(esp, eax); /* 0x11010ED4: push eax */
    RECOMP_CALL(sub_1100F771); /* 0x11010ED5: call 0x1100f771 */
    RECOMP_FLAGS_IN();
L_11010EDA:
    RECOMP_CALL(sub_1103B340); /* 0x11010EDA: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x11010EDF: ret  */
L_11029A79:
    RECOMP_BACKEDGE();
    goto L_11010E89; /* 0x11029A79: jmp 0x11010e89 */
    { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x11010EDAu: goto L_11010EDA;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_11029A7E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11029A7Eu);

L_11029A7E:
    eax = 0xFFFFu; /* 0x11029A7E: mov eax, 0xffff */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11029A83: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11029A86(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11029A86u);

L_11029A86:
    eax = MEM32(ecx + 0x10); /* 0x11029A86: mov eax, dword ptr [ecx + 0x10] */
    eax = MEM32(eax); /* 0x11029A89: mov eax, dword ptr [eax] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11029A8B: ret  */
    RECOMP_REGS_OUT();
}

void sub_11029A8C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11029A8Cu);

L_11029A8C:
    PUSH32(esp, ebp); /* 0x11029A8C: push ebp */
    ebp = esp; /* 0x11029A8D: mov ebp, esp */
    eax = MEM32(ecx + 0x30); /* 0x11029A8F: mov eax, dword ptr [ecx + 0x30] */
    edx = MEM32(ebp + 0x8); /* 0x11029A92: mov edx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(eax) = MEM32(eax) - edx; /* 0x11029A95: sub dword ptr [eax], edx */
    _flag_k = FK_CMP;
    ecx = MEM32(ecx + 0x20); /* 0x11029A97: mov ecx, dword ptr [ecx + 0x20] */
    eax = edx + edx; /* 0x11029A9A: lea eax, [edx + edx] */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx) = MEM32(ecx) + eax; /* 0x11029A9D: add dword ptr [ecx], eax */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x11029A9F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11029AA0: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11029AA3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11029AA3u);
    RECOMP_EH_ENTER();

L_11029AA3:
    PUSH32(esp, 0x18u); /* 0x11029AA3: push 0x18 */
    eax = 0x1103EA7Au; /* 0x11029AA5: mov eax, 0x1103ea7a */
    RECOMP_CALL(sub_1103B3DB); /* 0x11029AAA: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x11029AAF: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x11029AB1: mov dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11029AB4: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x24)) = esi; /* 0x11029AB6: mov dword ptr [ebp - 0x24], esi */
    MEM32(esi + 0x8) = edi; /* 0x11029AB9: mov dword ptr [esi + 8], edi */
    MEM32(esi + 0xC) = edi; /* 0x11029ABC: mov dword ptr [esi + 0xc], edi */
    eax = MEM32(esi); /* 0x11029ABF: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x11029AC1: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11029AC4: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x11029AC8: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11029AD1; /* 0x11029ACA: je 0x11029ad1 */
L_11029ACC:
    eax = MEM32(ecx); /* 0x11029ACC: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x11029ACE: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_11029AD1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x11029AD1: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = edi; /* 0x11029AD3: mov dword ptr [ebp - 4], edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x11029AD6: inc ebx */
    _flag_k = FK_INC;
    ecx = esi; /* 0x11029AD7: mov ecx, esi */
    PUSH32(esp, ebx); /* 0x11029AD9: push ebx */
    RECOMP_CALL(sub_11010675); /* 0x11029ADA: call 0x11010675 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x20)) = (uint8_t)(LO8(eax)); /* 0x11029ADF: mov byte ptr [ebp - 0x20], al */
    MEM32(ebp + (-0x4)) = ebx; /* 0x11029AE2: mov dword ptr [ebp - 4], ebx */
    /* test LO8(eax), LO8(eax) */ /* 0x11029AE5: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11029AF0; /* 0x11029AE7: jne 0x11029af0 */
L_11029AE9:
    _flag_a = (uint32_t)((ebx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ebx | 0xFFFFFFFFu));
    ebx = ebx | 0xFFFFFFFFu; /* 0x11029AE9: or ebx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edi; /* 0x11029AEC: mov eax, edi */
    goto L_11029B4D; /* 0x11029AEE: jmp 0x11029b4d */
L_11029AF0:
    eax = MEM32(esi); /* 0x11029AF0: mov eax, dword ptr [esi] */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x11029AF2: mov byte ptr [ebp - 4], 2 */
    eax = MEM32(eax + 0x4); /* 0x11029AF6: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11029AF9: mov ecx, dword ptr [eax + esi + 0x38] */
    RECOMP_CALL(sub_11010336); /* 0x11029AFD: call 0x11010336 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x11029B02: mov ebx, eax */
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x11029B04: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11029B0E; /* 0x11029B07: jne 0x11029b0e */
L_11029B09:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11029B09: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x11029B0B: inc eax */
    _flag_k = FK_INC;
    goto L_11029B46; /* 0x11029B0C: jmp 0x11029b46 */
L_11029B0E:
    eax = edi; /* 0x11029B0E: mov eax, edi */
    goto L_11029B46; /* 0x11029B10: jmp 0x11029b46 */
L_11029B3D:
    esi = MEM32(ebp + (-0x14)); /* 0x11029B3D: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11029B40: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edi; /* 0x11029B42: mov eax, edi */
    ebx = eax; /* 0x11029B44: mov ebx, eax */
L_11029B46:
    MEM32(ebp + (-0x4)) = 1; /* 0x11029B46: mov dword ptr [ebp - 4], 1 */
L_11029B4D:
    PUSH32(esp, edi); /* 0x11029B4D: push edi */
    PUSH32(esp, eax); /* 0x11029B4E: push eax */
    eax = MEM32(esi); /* 0x11029B4F: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x11029B51: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11029B54: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x11029B56: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x11029B5B: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11029B5D: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(eax + 0x4); /* 0x11029B61: mov ecx, dword ptr [eax + 4] */
    ecx = MEM32(ecx + esi + 0x38); /* 0x11029B64: mov ecx, dword ptr [ecx + esi + 0x38] */
    /* test ecx, ecx */ /* 0x11029B68: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11029B71; /* 0x11029B6A: je 0x11029b71 */
L_11029B6C:
    edx = MEM32(ecx); /* 0x11029B6C: mov edx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(edx + 0x8)); /* 0x11029B6E: call dword ptr [edx + 8] */
    RECOMP_FLAGS_IN();
L_11029B71:
    eax = ebx; /* 0x11029B71: mov eax, ebx */
    RECOMP_CALL(sub_1103B340); /* 0x11029B73: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x11029B78: ret  */
  _ljump:
    switch (_itail_tgt) {
      case 0x11029B3Du: goto L_11029B3D;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_11029B12(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11029B12u);

L_11029B12:
    ecx = MEM32(ebp + (-0x14)); /* 0x11029B12: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11029B15: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x11029B17: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x11029B19: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x11029B1C: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x11029B1E: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11029B21: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), edi */ /* 0x11029B24: cmp dword ptr [edx + 0x38], edi */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11029B2C; /* 0x11029B27: jne 0x11029b2c */
L_11029B29:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11029B29: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11029B2C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x11029B2C: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x11029B2F: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x11029B32: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11029B79; /* 0x11029B35: jne 0x11029b79 */
L_11029B37:
    eax = 0x11029B3Du; /* 0x11029B37: mov eax, 0x11029b3d */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11029B3C: ret  */
L_11029B79:
    PUSH32(esp, edi); /* 0x11029B79: push edi */
    PUSH32(esp, edi); /* 0x11029B7A: push edi */
    RECOMP_CALL(sub_1103B33A); /* 0x11029B7B: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x11029B80u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11029B3D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11029B3Du);

L_11029B3D:
    esi = MEM32(ebp + (-0x14)); /* 0x11029B3D: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11029B40: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edi; /* 0x11029B42: mov eax, edi */
    ebx = eax; /* 0x11029B44: mov ebx, eax */
    MEM32(ebp + (-0x4)) = 1; /* 0x11029B46: mov dword ptr [ebp - 4], 1 */
    PUSH32(esp, edi); /* 0x11029B4D: push edi */
    PUSH32(esp, eax); /* 0x11029B4E: push eax */
    eax = MEM32(esi); /* 0x11029B4F: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x11029B51: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11029B54: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x11029B56: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x11029B5B: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11029B5D: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(eax + 0x4); /* 0x11029B61: mov ecx, dword ptr [eax + 4] */
    ecx = MEM32(ecx + esi + 0x38); /* 0x11029B64: mov ecx, dword ptr [ecx + esi + 0x38] */
    /* test ecx, ecx */ /* 0x11029B68: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11029B71; /* 0x11029B6A: je 0x11029b71 */
L_11029B6C:
    edx = MEM32(ecx); /* 0x11029B6C: mov edx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(edx + 0x8)); /* 0x11029B6E: call dword ptr [edx + 8] */
    RECOMP_FLAGS_IN();
L_11029B71:
    eax = ebx; /* 0x11029B71: mov eax, ebx */
    RECOMP_CALL(sub_1103B340); /* 0x11029B73: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11029B78: ret  */
    RECOMP_REGS_OUT();
}

void sub_11029B81(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11029B81u);
    RECOMP_EH_ENTER();

L_11029B81:
    PUSH32(esp, 0x18u); /* 0x11029B81: push 0x18 */
    eax = 0x1103EAA5u; /* 0x11029B83: mov eax, 0x1103eaa5 */
    RECOMP_CALL(sub_1103B3DB); /* 0x11029B88: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x11029B8D: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x11029B8F: mov dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11029B92: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x24)) = esi; /* 0x11029B94: mov dword ptr [ebp - 0x24], esi */
    MEM32(esi + 0x8) = edi; /* 0x11029B97: mov dword ptr [esi + 8], edi */
    MEM32(esi + 0xC) = edi; /* 0x11029B9A: mov dword ptr [esi + 0xc], edi */
    eax = MEM32(esi); /* 0x11029B9D: mov eax, dword ptr [esi] */
    MEM32(ebp + (-0x1C)) = edi; /* 0x11029B9F: mov dword ptr [ebp - 0x1c], edi */
    eax = MEM32(eax + 0x4); /* 0x11029BA2: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11029BA5: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x11029BA9: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11029BB2; /* 0x11029BAB: je 0x11029bb2 */
L_11029BAD:
    eax = MEM32(ecx); /* 0x11029BAD: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x11029BAF: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_11029BB2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x11029BB2: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = edi; /* 0x11029BB4: mov dword ptr [ebp - 4], edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x11029BB7: inc ebx */
    _flag_k = FK_INC;
    ecx = esi; /* 0x11029BB8: mov ecx, esi */
    PUSH32(esp, ebx); /* 0x11029BBA: push ebx */
    RECOMP_CALL(sub_11010989); /* 0x11029BBB: call 0x11010989 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x20)) = (uint8_t)(LO8(eax)); /* 0x11029BC0: mov byte ptr [ebp - 0x20], al */
    MEM32(ebp + (-0x4)) = ebx; /* 0x11029BC3: mov dword ptr [ebp - 4], ebx */
    /* test LO8(eax), LO8(eax) */ /* 0x11029BC6: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11029BD1; /* 0x11029BC8: jne 0x11029bd1 */
L_11029BCA:
    ebx = 0xFFFFu; /* 0x11029BCA: mov ebx, 0xffff */
    goto L_11029C3C; /* 0x11029BCF: jmp 0x11029c3c */
L_11029BD1:
    eax = MEM32(esi); /* 0x11029BD1: mov eax, dword ptr [esi] */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x11029BD3: mov byte ptr [ebp - 4], 2 */
    eax = MEM32(eax + 0x4); /* 0x11029BD7: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11029BDA: mov ecx, dword ptr [eax + esi + 0x38] */
    RECOMP_CALL(sub_11010398); /* 0x11029BDE: call 0x11010398 */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO16(eax); /* 0x11029BE3: movzx eax, ax */
    ebx = eax; /* 0x11029BE6: mov ebx, eax */
    eax = 0xFFFFu; /* 0x11029BE8: mov eax, 0xffff */
    /* cmp LO16(eax), LO16(ebx) */ /* 0x11029BED: cmp ax, bx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11029BF7; /* 0x11029BF0: jne 0x11029bf7 */
L_11029BF2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11029BF2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x11029BF4: inc eax */
    _flag_k = FK_INC;
    goto L_11029BF9; /* 0x11029BF5: jmp 0x11029bf9 */
L_11029BF7:
    eax = edi; /* 0x11029BF7: mov eax, edi */
L_11029BF9:
    MEM32(ebp + (-0x4)) = 1; /* 0x11029BF9: mov dword ptr [ebp - 4], 1 */
    goto L_11029C3E; /* 0x11029C00: jmp 0x11029c3e */
L_11029C2D:
    esi = MEM32(ebp + (-0x14)); /* 0x11029C2D: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11029C30: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = MEM32(ebp + (-0x1C)); /* 0x11029C32: mov ebx, dword ptr [ebp - 0x1c] */
    MEM32(ebp + (-0x4)) = 1; /* 0x11029C35: mov dword ptr [ebp - 4], 1 */
L_11029C3C:
    eax = edi; /* 0x11029C3C: mov eax, edi */
L_11029C3E:
    PUSH32(esp, edi); /* 0x11029C3E: push edi */
    PUSH32(esp, eax); /* 0x11029C3F: push eax */
    eax = MEM32(esi); /* 0x11029C40: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x11029C42: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11029C45: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x11029C47: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x11029C4C: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11029C4E: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(eax + 0x4); /* 0x11029C52: mov ecx, dword ptr [eax + 4] */
    ecx = MEM32(ecx + esi + 0x38); /* 0x11029C55: mov ecx, dword ptr [ecx + esi + 0x38] */
    /* test ecx, ecx */ /* 0x11029C59: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11029C62; /* 0x11029C5B: je 0x11029c62 */
L_11029C5D:
    edx = MEM32(ecx); /* 0x11029C5D: mov edx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(edx + 0x8)); /* 0x11029C5F: call dword ptr [edx + 8] */
    RECOMP_FLAGS_IN();
L_11029C62:
    SET_LO16(eax, LO16(ebx)); /* 0x11029C62: mov ax, bx */
    RECOMP_CALL(sub_1103B340); /* 0x11029C65: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x11029C6A: ret  */
  _ljump:
    switch (_itail_tgt) {
      case 0x11029C2Du: goto L_11029C2D;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_11029C02(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11029C02u);

L_11029C02:
    ecx = MEM32(ebp + (-0x14)); /* 0x11029C02: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11029C05: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x11029C07: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x11029C09: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x11029C0C: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x11029C0E: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11029C11: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), edi */ /* 0x11029C14: cmp dword ptr [edx + 0x38], edi */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11029C1C; /* 0x11029C17: jne 0x11029c1c */
L_11029C19:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11029C19: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11029C1C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x11029C1C: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x11029C1F: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x11029C22: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11029C6B; /* 0x11029C25: jne 0x11029c6b */
L_11029C27:
    eax = 0x11029C2Du; /* 0x11029C27: mov eax, 0x11029c2d */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11029C2C: ret  */
L_11029C6B:
    PUSH32(esp, edi); /* 0x11029C6B: push edi */
    PUSH32(esp, edi); /* 0x11029C6C: push edi */
    RECOMP_CALL(sub_1103B33A); /* 0x11029C6D: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x11029C72u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11029C2D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11029C2Du);

L_11029C2D:
    esi = MEM32(ebp + (-0x14)); /* 0x11029C2D: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11029C30: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = MEM32(ebp + (-0x1C)); /* 0x11029C32: mov ebx, dword ptr [ebp - 0x1c] */
    MEM32(ebp + (-0x4)) = 1; /* 0x11029C35: mov dword ptr [ebp - 4], 1 */
    eax = edi; /* 0x11029C3C: mov eax, edi */
    PUSH32(esp, edi); /* 0x11029C3E: push edi */
    PUSH32(esp, eax); /* 0x11029C3F: push eax */
    eax = MEM32(esi); /* 0x11029C40: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x11029C42: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11029C45: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x11029C47: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x11029C4C: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11029C4E: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(eax + 0x4); /* 0x11029C52: mov ecx, dword ptr [eax + 4] */
    ecx = MEM32(ecx + esi + 0x38); /* 0x11029C55: mov ecx, dword ptr [ecx + esi + 0x38] */
    /* test ecx, ecx */ /* 0x11029C59: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11029C62; /* 0x11029C5B: je 0x11029c62 */
L_11029C5D:
    edx = MEM32(ecx); /* 0x11029C5D: mov edx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(edx + 0x8)); /* 0x11029C5F: call dword ptr [edx + 8] */
    RECOMP_FLAGS_IN();
L_11029C62:
    SET_LO16(eax, LO16(ebx)); /* 0x11029C62: mov ax, bx */
    RECOMP_CALL(sub_1103B340); /* 0x11029C65: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11029C6A: ret  */
    RECOMP_REGS_OUT();
}

void sub_11029C73(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11029C73u);
    RECOMP_EH_ENTER();

L_11029C73:
    PUSH32(esp, 0x18u); /* 0x11029C73: push 0x18 */
    eax = 0x1103EAD0u; /* 0x11029C75: mov eax, 0x1103ead0 */
    RECOMP_CALL(sub_1103B3DB); /* 0x11029C7A: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x11029C7F: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x11029C81: mov dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11029C84: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x24)) = esi; /* 0x11029C86: mov dword ptr [ebp - 0x24], esi */
    MEM32(esi + 0x8) = edi; /* 0x11029C89: mov dword ptr [esi + 8], edi */
    MEM32(esi + 0xC) = edi; /* 0x11029C8C: mov dword ptr [esi + 0xc], edi */
    eax = MEM32(esi); /* 0x11029C8F: mov eax, dword ptr [esi] */
    MEM32(ebp + (-0x1C)) = edi; /* 0x11029C91: mov dword ptr [ebp - 0x1c], edi */
    eax = MEM32(eax + 0x4); /* 0x11029C94: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11029C97: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x11029C9B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11029CA4; /* 0x11029C9D: je 0x11029ca4 */
L_11029C9F:
    eax = MEM32(ecx); /* 0x11029C9F: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x11029CA1: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_11029CA4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x11029CA4: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = edi; /* 0x11029CA6: mov dword ptr [ebp - 4], edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x11029CA9: inc ebx */
    _flag_k = FK_INC;
    ecx = esi; /* 0x11029CAA: mov ecx, esi */
    PUSH32(esp, ebx); /* 0x11029CAC: push ebx */
    RECOMP_CALL(sub_11010810); /* 0x11029CAD: call 0x11010810 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x20)) = (uint8_t)(LO8(eax)); /* 0x11029CB2: mov byte ptr [ebp - 0x20], al */
    MEM32(ebp + (-0x4)) = ebx; /* 0x11029CB5: mov dword ptr [ebp - 4], ebx */
    /* test LO8(eax), LO8(eax) */ /* 0x11029CB8: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11029CC3; /* 0x11029CBA: jne 0x11029cc3 */
L_11029CBC:
    ebx = 0xFFFFu; /* 0x11029CBC: mov ebx, 0xffff */
    goto L_11029D2E; /* 0x11029CC1: jmp 0x11029d2e */
L_11029CC3:
    eax = MEM32(esi); /* 0x11029CC3: mov eax, dword ptr [esi] */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x11029CC5: mov byte ptr [ebp - 4], 2 */
    eax = MEM32(eax + 0x4); /* 0x11029CC9: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11029CCC: mov ecx, dword ptr [eax + esi + 0x38] */
    RECOMP_CALL(sub_11010398); /* 0x11029CD0: call 0x11010398 */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO16(eax); /* 0x11029CD5: movzx eax, ax */
    ebx = eax; /* 0x11029CD8: mov ebx, eax */
    eax = 0xFFFFu; /* 0x11029CDA: mov eax, 0xffff */
    /* cmp LO16(eax), LO16(ebx) */ /* 0x11029CDF: cmp ax, bx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11029CE9; /* 0x11029CE2: jne 0x11029ce9 */
L_11029CE4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11029CE4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x11029CE6: inc eax */
    _flag_k = FK_INC;
    goto L_11029CEB; /* 0x11029CE7: jmp 0x11029ceb */
L_11029CE9:
    eax = edi; /* 0x11029CE9: mov eax, edi */
L_11029CEB:
    MEM32(ebp + (-0x4)) = 1; /* 0x11029CEB: mov dword ptr [ebp - 4], 1 */
    goto L_11029D30; /* 0x11029CF2: jmp 0x11029d30 */
L_11029D1F:
    esi = MEM32(ebp + (-0x14)); /* 0x11029D1F: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11029D22: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = MEM32(ebp + (-0x1C)); /* 0x11029D24: mov ebx, dword ptr [ebp - 0x1c] */
    MEM32(ebp + (-0x4)) = 1; /* 0x11029D27: mov dword ptr [ebp - 4], 1 */
L_11029D2E:
    eax = edi; /* 0x11029D2E: mov eax, edi */
L_11029D30:
    PUSH32(esp, edi); /* 0x11029D30: push edi */
    PUSH32(esp, eax); /* 0x11029D31: push eax */
    eax = MEM32(esi); /* 0x11029D32: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x11029D34: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11029D37: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x11029D39: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x11029D3E: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11029D40: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(eax + 0x4); /* 0x11029D44: mov ecx, dword ptr [eax + 4] */
    ecx = MEM32(ecx + esi + 0x38); /* 0x11029D47: mov ecx, dword ptr [ecx + esi + 0x38] */
    /* test ecx, ecx */ /* 0x11029D4B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11029D54; /* 0x11029D4D: je 0x11029d54 */
L_11029D4F:
    edx = MEM32(ecx); /* 0x11029D4F: mov edx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(edx + 0x8)); /* 0x11029D51: call dword ptr [edx + 8] */
    RECOMP_FLAGS_IN();
L_11029D54:
    SET_LO16(eax, LO16(ebx)); /* 0x11029D54: mov ax, bx */
    RECOMP_CALL(sub_1103B340); /* 0x11029D57: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x11029D5C: ret  */
  _ljump:
    switch (_itail_tgt) {
      case 0x11029D1Fu: goto L_11029D1F;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_11029CF4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11029CF4u);

L_11029CF4:
    ecx = MEM32(ebp + (-0x14)); /* 0x11029CF4: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11029CF7: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x11029CF9: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x11029CFB: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x11029CFE: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x11029D00: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11029D03: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), edi */ /* 0x11029D06: cmp dword ptr [edx + 0x38], edi */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11029D0E; /* 0x11029D09: jne 0x11029d0e */
L_11029D0B:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11029D0B: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11029D0E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x11029D0E: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x11029D11: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x11029D14: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11029D5D; /* 0x11029D17: jne 0x11029d5d */
L_11029D19:
    eax = 0x11029D1Fu; /* 0x11029D19: mov eax, 0x11029d1f */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11029D1E: ret  */
L_11029D5D:
    PUSH32(esp, edi); /* 0x11029D5D: push edi */
    PUSH32(esp, edi); /* 0x11029D5E: push edi */
    RECOMP_CALL(sub_1103B33A); /* 0x11029D5F: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x11029D64u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11029D1F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11029D1Fu);

L_11029D1F:
    esi = MEM32(ebp + (-0x14)); /* 0x11029D1F: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11029D22: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = MEM32(ebp + (-0x1C)); /* 0x11029D24: mov ebx, dword ptr [ebp - 0x1c] */
    MEM32(ebp + (-0x4)) = 1; /* 0x11029D27: mov dword ptr [ebp - 4], 1 */
    eax = edi; /* 0x11029D2E: mov eax, edi */
    PUSH32(esp, edi); /* 0x11029D30: push edi */
    PUSH32(esp, eax); /* 0x11029D31: push eax */
    eax = MEM32(esi); /* 0x11029D32: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x11029D34: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11029D37: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x11029D39: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x11029D3E: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11029D40: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(eax + 0x4); /* 0x11029D44: mov ecx, dword ptr [eax + 4] */
    ecx = MEM32(ecx + esi + 0x38); /* 0x11029D47: mov ecx, dword ptr [ecx + esi + 0x38] */
    /* test ecx, ecx */ /* 0x11029D4B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11029D54; /* 0x11029D4D: je 0x11029d54 */
L_11029D4F:
    edx = MEM32(ecx); /* 0x11029D4F: mov edx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(edx + 0x8)); /* 0x11029D51: call dword ptr [edx + 8] */
    RECOMP_FLAGS_IN();
L_11029D54:
    SET_LO16(eax, LO16(ebx)); /* 0x11029D54: mov ax, bx */
    RECOMP_CALL(sub_1103B340); /* 0x11029D57: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11029D5C: ret  */
    RECOMP_REGS_OUT();
}

void sub_11029D65(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11029D65u);

L_11029D65:
    eax = MEM32(ecx + 0x20); /* 0x11029D65: mov eax, dword ptr [ecx + 0x20] */
    eax = MEM32(eax); /* 0x11029D68: mov eax, dword ptr [eax] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11029D6A: ret  */
    RECOMP_REGS_OUT();
}

void sub_11029D6B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11029D6Bu);

L_11029D6B:
    PUSH32(esp, 4); /* 0x11029D6B: push 4 */
    eax = 0x1103EA4Fu; /* 0x11029D6D: mov eax, 0x1103ea4f */
    RECOMP_CALL(sub_1103B372); /* 0x11029D72: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x11029D77: mov edi, ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11029D79: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0; /* 0x11029D7D: and dword ptr [ebp - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(edi + 0x34); /* 0x11029D81: mov eax, dword ptr [edi + 0x34] */
    esi = MEM32(ebp + 0x8); /* 0x11029D84: mov esi, dword ptr [ebp + 8] */
    ecx = MEM32(eax); /* 0x11029D87: mov ecx, dword ptr [eax] */
    MEM32(esi) = ecx; /* 0x11029D89: mov dword ptr [esi], ecx */
    eax = MEM32(ecx); /* 0x11029D8B: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x11029D8D: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    edx = MEM32(edi); /* 0x11029D90: mov edx, dword ptr [edi] */
    ecx = edi; /* 0x11029D92: mov ecx, edi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11029D94: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11029D97: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = 1; /* 0x11029D9B: mov dword ptr [ebp - 0x10], 1 */
    RECOMP_ICALL(MEM32(edx + 0x38)); /* 0x11029DA2: call dword ptr [edx + 0x38] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11029DA5: push dword ptr [ebp + 0xc] */
    ecx = MEM32(edi + 0x34); /* 0x11029DA8: mov ecx, dword ptr [edi + 0x34] */
    RECOMP_CALL(sub_1100E449); /* 0x11029DAB: call 0x1100e449 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x11029DB0: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11029DB2: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x11029DB7: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_11029DBA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11029DBAu);

L_11029DBA:
    PUSH32(esp, ebp); /* 0x11029DBA: push ebp */
    ebp = esp; /* 0x11029DBB: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x11029DBD: push dword ptr [ebp + 0x18] */
    eax = MEM32(ecx); /* 0x11029DC0: mov eax, dword ptr [ecx] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x11029DC2: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11029DC5: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11029DC8: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11029DCB: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(eax + 0x28)); /* 0x11029DCE: call dword ptr [eax + 0x28] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x11029DD1: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x11029DD4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x11029DD5: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_11029DD8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11029DD8u);

L_11029DD8:
    PUSH32(esp, ebp); /* 0x11029DD8: push ebp */
    ebp = esp; /* 0x11029DD9: mov ebp, esp */
    PUSH32(esp, esi); /* 0x11029DDB: push esi */
    PUSH32(esp, edi); /* 0x11029DDC: push edi */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x11029DDD: push dword ptr [ebp + 0x24] */
    edx = ecx; /* 0x11029DE0: mov edx, ecx */
    esi = ebp + 0xC; /* 0x11029DE2: lea esi, [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x11029DE5: sub esp, 0x18 */
    _flag_k = FK_CMP;
    eax = MEM32(edx); /* 0x11029DE8: mov eax, dword ptr [edx] */
    PUSH32(esp, 6); /* 0x11029DEA: push 6 */
    ecx = POP32_VAL(esp); /* 0x11029DEC: pop ecx */
    edi = esp; /* 0x11029DED: mov edi, esp */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11029DEF: push dword ptr [ebp + 8] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x11029DF2: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = edx; /* 0x11029DF4: mov ecx, edx */
    RECOMP_ICALL(MEM32(eax + 0x2C)); /* 0x11029DF6: call dword ptr [eax + 0x2c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x11029DF9: mov eax, dword ptr [ebp + 8] */
    edi = POP32_VAL(esp); /* 0x11029DFC: pop edi */
    esi = POP32_VAL(esp); /* 0x11029DFD: pop esi */
    ebp = POP32_VAL(esp); /* 0x11029DFE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x11029DFF: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_11029E02(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11029E02u);

L_11029E02:
    PUSH32(esp, ebp); /* 0x11029E02: push ebp */
    ebp = esp; /* 0x11029E03: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11029E05: push dword ptr [ebp + 0x10] */
    eax = MEM32(ecx); /* 0x11029E08: mov eax, dword ptr [ecx] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11029E0A: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11029E0D: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(eax + 0x30)); /* 0x11029E10: call dword ptr [eax + 0x30] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x11029E13: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x11029E14: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_11029E17(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11029E17u);
    RECOMP_EH_ENTER();

L_11029E17:
    PUSH32(esp, 0x14u); /* 0x11029E17: push 0x14 */
    eax = 0x1103EAF3u; /* 0x11029E19: mov eax, 0x1103eaf3 */
    RECOMP_CALL(sub_1103B3DB); /* 0x11029E1E: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x11029E23: mov edi, ecx */
    MEM32(ebp + (-0x14)) = edi; /* 0x11029E25: mov dword ptr [ebp - 0x14], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x11029E28: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x20); /* 0x11029E2A: lea ecx, [ebp - 0x20] */
    PUSH32(esp, edi); /* 0x11029E2D: push edi */
    MEM32(ebp + (-0x18)) = ebx; /* 0x11029E2E: mov dword ptr [ebp - 0x18], ebx */
    RECOMP_CALL(sub_11010E19); /* 0x11029E31: call 0x11010e19 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(ebx);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & ebx; /* 0x11029E36: and dword ptr [ebp - 4], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(ebp + (-0x1C)), LO8(ebx) */ /* 0x11029E39: cmp byte ptr [ebp - 0x1c], bl */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x1C))) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11029E43; /* 0x11029E3C: jne 0x11029e43 */
L_11029E3E:
    PUSH32(esp, 4); /* 0x11029E3E: push 4 */
    ebx = POP32_VAL(esp); /* 0x11029E40: pop ebx */
    goto L_11029E96; /* 0x11029E41: jmp 0x11029e96 */
L_11029E43:
    eax = MEM32(edi); /* 0x11029E43: mov eax, dword ptr [edi] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11029E45: push dword ptr [ebp + 8] */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x11029E48: mov byte ptr [ebp - 4], 1 */
    eax = MEM32(eax + 0x4); /* 0x11029E4C: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + edi + 0x38); /* 0x11029E4F: mov ecx, dword ptr [eax + edi + 0x38] */
    RECOMP_CALL(sub_1102B39E); /* 0x11029E53: call 0x1102b39e */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xFFFFFFFFu */ /* 0x11029E58: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11029E92; /* 0x11029E5B: jne 0x11029e92 */
L_11029E5D:
    PUSH32(esp, 4); /* 0x11029E5D: push 4 */
    ebx = POP32_VAL(esp); /* 0x11029E5F: pop ebx */
    goto L_11029E92; /* 0x11029E60: jmp 0x11029e92 */
L_11029E8C:
    edi = MEM32(ebp + (-0x14)); /* 0x11029E8C: mov edi, dword ptr [ebp - 0x14] */
    ebx = MEM32(ebp + (-0x18)); /* 0x11029E8F: mov ebx, dword ptr [ebp - 0x18] */
L_11029E92:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11029E92: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11029E96:
    eax = MEM32(edi); /* 0x11029E96: mov eax, dword ptr [edi] */
    PUSH32(esp, 0); /* 0x11029E98: push 0 */
    PUSH32(esp, ebx); /* 0x11029E9A: push ebx */
    ecx = MEM32(eax + 0x4); /* 0x11029E9B: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x11029E9E: add ecx, edi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x11029EA0: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x20); /* 0x11029EA5: lea ecx, [ebp - 0x20] */
    RECOMP_CALL(sub_11010E6E); /* 0x11029EA8: call 0x11010e6e */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x11029EAD: mov eax, edi */
    RECOMP_CALL(sub_1103B340); /* 0x11029EAF: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x11029EB4: ret 4 */
  _ljump:
    switch (_itail_tgt) {
      case 0x11029E8Cu: goto L_11029E8C;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_11029E62(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11029E62u);

L_11029E62:
    ecx = MEM32(ebp + (-0x14)); /* 0x11029E62: mov ecx, dword ptr [ebp - 0x14] */
    eax = MEM32(ecx); /* 0x11029E65: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x11029E67: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x11029E6A: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x11029E6C: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11029E6F: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), 0 */ /* 0x11029E72: cmp dword ptr [edx + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11029E7B; /* 0x11029E76: jne 0x11029e7b */
L_11029E78:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11029E78: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11029E7B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x11029E7B: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x11029E7E: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x11029E81: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11029EB7; /* 0x11029E84: jne 0x11029eb7 */
L_11029E86:
    eax = 0x11029E8Cu; /* 0x11029E86: mov eax, 0x11029e8c */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11029E8B: ret  */
L_11029EB7:
    PUSH32(esp, 0); /* 0x11029EB7: push 0 */
    PUSH32(esp, 0); /* 0x11029EB9: push 0 */
    RECOMP_CALL(sub_1103B33A); /* 0x11029EBB: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x11029EC0u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11029E8C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11029E8Cu);

L_11029E8C:
    edi = MEM32(ebp + (-0x14)); /* 0x11029E8C: mov edi, dword ptr [ebp - 0x14] */
    ebx = MEM32(ebp + (-0x18)); /* 0x11029E8F: mov ebx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11029E92: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(edi); /* 0x11029E96: mov eax, dword ptr [edi] */
    PUSH32(esp, 0); /* 0x11029E98: push 0 */
    PUSH32(esp, ebx); /* 0x11029E9A: push ebx */
    ecx = MEM32(eax + 0x4); /* 0x11029E9B: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x11029E9E: add ecx, edi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x11029EA0: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x20); /* 0x11029EA5: lea ecx, [ebp - 0x20] */
    RECOMP_CALL(sub_11010E6E); /* 0x11029EA8: call 0x11010e6e */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x11029EAD: mov eax, edi */
    RECOMP_CALL(sub_1103B340); /* 0x11029EAF: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11029EB4: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11029EC1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11029EC1u);
    RECOMP_EH_ENTER();

L_11029EC1:
    PUSH32(esp, 0x14u); /* 0x11029EC1: push 0x14 */
    eax = 0x1103EB16u; /* 0x11029EC3: mov eax, 0x1103eb16 */
    RECOMP_CALL(sub_1103B3DB); /* 0x11029EC8: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x11029ECD: mov edi, ecx */
    MEM32(ebp + (-0x14)) = edi; /* 0x11029ECF: mov dword ptr [ebp - 0x14], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x11029ED2: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x20); /* 0x11029ED4: lea ecx, [ebp - 0x20] */
    PUSH32(esp, edi); /* 0x11029ED7: push edi */
    MEM32(ebp + (-0x18)) = ebx; /* 0x11029ED8: mov dword ptr [ebp - 0x18], ebx */
    RECOMP_CALL(sub_11010E19); /* 0x11029EDB: call 0x11010e19 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(ebx);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & ebx; /* 0x11029EE0: and dword ptr [ebp - 4], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(ebp + (-0x1C)), LO8(ebx) */ /* 0x11029EE3: cmp byte ptr [ebp - 0x1c], bl */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x1C))) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11029EED; /* 0x11029EE6: jne 0x11029eed */
L_11029EE8:
    PUSH32(esp, 4); /* 0x11029EE8: push 4 */
    ebx = POP32_VAL(esp); /* 0x11029EEA: pop ebx */
    goto L_11029F48; /* 0x11029EEB: jmp 0x11029f48 */
L_11029EED:
    eax = MEM32(edi); /* 0x11029EED: mov eax, dword ptr [edi] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11029EEF: push dword ptr [ebp + 8] */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x11029EF2: mov byte ptr [ebp - 4], 1 */
    eax = MEM32(eax + 0x4); /* 0x11029EF6: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + edi + 0x38); /* 0x11029EF9: mov ecx, dword ptr [eax + edi + 0x38] */
    RECOMP_CALL(sub_1102B3DC); /* 0x11029EFD: call 0x1102b3dc */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO16(eax); /* 0x11029F02: movzx eax, ax */
    ecx = 0xFFFFu; /* 0x11029F05: mov ecx, 0xffff */
    /* cmp LO16(ecx), LO16(eax) */ /* 0x11029F0A: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11029F44; /* 0x11029F0D: jne 0x11029f44 */
L_11029F0F:
    PUSH32(esp, 4); /* 0x11029F0F: push 4 */
    ebx = POP32_VAL(esp); /* 0x11029F11: pop ebx */
    goto L_11029F44; /* 0x11029F12: jmp 0x11029f44 */
L_11029F3E:
    edi = MEM32(ebp + (-0x14)); /* 0x11029F3E: mov edi, dword ptr [ebp - 0x14] */
    ebx = MEM32(ebp + (-0x18)); /* 0x11029F41: mov ebx, dword ptr [ebp - 0x18] */
L_11029F44:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11029F44: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11029F48:
    eax = MEM32(edi); /* 0x11029F48: mov eax, dword ptr [edi] */
    PUSH32(esp, 0); /* 0x11029F4A: push 0 */
    PUSH32(esp, ebx); /* 0x11029F4C: push ebx */
    ecx = MEM32(eax + 0x4); /* 0x11029F4D: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x11029F50: add ecx, edi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x11029F52: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x20); /* 0x11029F57: lea ecx, [ebp - 0x20] */
    RECOMP_CALL(sub_11010E6E); /* 0x11029F5A: call 0x11010e6e */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x11029F5F: mov eax, edi */
    RECOMP_CALL(sub_1103B340); /* 0x11029F61: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x11029F66: ret 4 */
  _ljump:
    switch (_itail_tgt) {
      case 0x11029F3Eu: goto L_11029F3E;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_11029F14(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11029F14u);

L_11029F14:
    ecx = MEM32(ebp + (-0x14)); /* 0x11029F14: mov ecx, dword ptr [ebp - 0x14] */
    eax = MEM32(ecx); /* 0x11029F17: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x11029F19: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x11029F1C: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x11029F1E: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11029F21: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), 0 */ /* 0x11029F24: cmp dword ptr [edx + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11029F2D; /* 0x11029F28: jne 0x11029f2d */
L_11029F2A:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11029F2A: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11029F2D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x11029F2D: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x11029F30: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x11029F33: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11029F69; /* 0x11029F36: jne 0x11029f69 */
L_11029F38:
    eax = 0x11029F3Eu; /* 0x11029F38: mov eax, 0x11029f3e */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11029F3D: ret  */
L_11029F69:
    PUSH32(esp, 0); /* 0x11029F69: push 0 */
    PUSH32(esp, 0); /* 0x11029F6B: push 0 */
    RECOMP_CALL(sub_1103B33A); /* 0x11029F6D: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x11029F72u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11029F3E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11029F3Eu);

L_11029F3E:
    edi = MEM32(ebp + (-0x14)); /* 0x11029F3E: mov edi, dword ptr [ebp - 0x14] */
    ebx = MEM32(ebp + (-0x18)); /* 0x11029F41: mov ebx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11029F44: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(edi); /* 0x11029F48: mov eax, dword ptr [edi] */
    PUSH32(esp, 0); /* 0x11029F4A: push 0 */
    PUSH32(esp, ebx); /* 0x11029F4C: push ebx */
    ecx = MEM32(eax + 0x4); /* 0x11029F4D: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x11029F50: add ecx, edi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x11029F52: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x20); /* 0x11029F57: lea ecx, [ebp - 0x20] */
    RECOMP_CALL(sub_11010E6E); /* 0x11029F5A: call 0x11010e6e */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x11029F5F: mov eax, edi */
    RECOMP_CALL(sub_1103B340); /* 0x11029F61: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11029F66: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11029F73(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11029F73u);

L_11029F73:
    PUSH32(esp, ebp); /* 0x11029F73: push ebp */
    ebp = esp; /* 0x11029F74: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x11029F76: push dword ptr [ebp + 0x1c] */
    eax = MEM32(ecx); /* 0x11029F79: mov eax, dword ptr [ecx] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x11029F7B: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x11029F7E: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11029F81: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11029F84: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11029F87: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(eax + 0x24)); /* 0x11029F8A: call dword ptr [eax + 0x24] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x11029F8D: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x11029F90: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x11029F91: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_11029F94(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11029F94u);

L_11029F94:
    PUSH32(esp, ebp); /* 0x11029F94: push ebp */
    ebp = esp; /* 0x11029F95: mov ebp, esp */
    fp_push(*(double*)ADDR(ebp + 0x1C)); /* 0x11029F97: fld qword ptr [ebp + 0x1c] */
    eax = MEM32(ecx); /* 0x11029F9A: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x11029F9C: push ecx */
    PUSH32(esp, ecx); /* 0x11029F9D: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x11029F9E: fstp qword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x11029FA1: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x11029FA4: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11029FA7: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11029FAA: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11029FAD: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x11029FB0: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x11029FB3: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x11029FB6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x11029FB7: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_11029FBA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11029FBAu);

L_11029FBA:
    PUSH32(esp, ebp); /* 0x11029FBA: push ebp */
    ebp = esp; /* 0x11029FBB: mov ebp, esp */
    fp_push(*(double*)ADDR(ebp + 0x1C)); /* 0x11029FBD: fld qword ptr [ebp + 0x1c] */
    eax = MEM32(ecx); /* 0x11029FC0: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x11029FC2: push ecx */
    PUSH32(esp, ecx); /* 0x11029FC3: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x11029FC4: fstp qword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x11029FC7: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x11029FCA: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11029FCD: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11029FD0: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11029FD3: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x11029FD6: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x11029FD9: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x11029FDC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x11029FDD: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_11029FE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11029FE0u);

L_11029FE0:
    PUSH32(esp, ebp); /* 0x11029FE0: push ebp */
    ebp = esp; /* 0x11029FE1: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x11029FE3: push dword ptr [ebp + 0x20] */
    eax = MEM32(ecx); /* 0x11029FE6: mov eax, dword ptr [ecx] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x11029FE8: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x11029FEB: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x11029FEE: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11029FF1: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11029FF4: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11029FF7: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(eax + 0x1C)); /* 0x11029FFA: call dword ptr [eax + 0x1c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x11029FFD: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x1102A000: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x1102A001: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_1102A004(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102A004u);

L_1102A004:
    PUSH32(esp, ebp); /* 0x1102A004: push ebp */
    ebp = esp; /* 0x1102A005: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1102A007: push dword ptr [ebp + 0x1c] */
    eax = MEM32(ecx); /* 0x1102A00A: mov eax, dword ptr [ecx] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1102A00C: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1102A00F: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1102A012: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1102A015: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1102A018: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(eax + 0x28)); /* 0x1102A01B: call dword ptr [eax + 0x28] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1102A01E: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x1102A021: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x1102A022: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_1102A025(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102A025u);

L_1102A025:
    PUSH32(esp, ebp); /* 0x1102A025: push ebp */
    ebp = esp; /* 0x1102A026: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1102A028: push dword ptr [ebp + 0x1c] */
    eax = MEM32(ecx); /* 0x1102A02B: mov eax, dword ptr [ecx] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1102A02D: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1102A030: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1102A033: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1102A036: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1102A039: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(eax + 0x20)); /* 0x1102A03C: call dword ptr [eax + 0x20] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1102A03F: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x1102A042: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x1102A043: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_1102A046(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102A046u);

L_1102A046:
    PUSH32(esp, ebp); /* 0x1102A046: push ebp */
    ebp = esp; /* 0x1102A047: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1102A049: push dword ptr [ebp + 0x1c] */
    eax = MEM32(ecx); /* 0x1102A04C: mov eax, dword ptr [ecx] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1102A04E: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1102A051: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1102A054: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1102A057: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1102A05A: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x1102A05D: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1102A060: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x1102A063: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x1102A064: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_1102A067(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102A067u);

L_1102A067:
    PUSH32(esp, ebp); /* 0x1102A067: push ebp */
    ebp = esp; /* 0x1102A068: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x1102A06A: push dword ptr [ebp + 0x20] */
    eax = MEM32(ecx); /* 0x1102A06D: mov eax, dword ptr [ecx] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1102A06F: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1102A072: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1102A075: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1102A078: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1102A07B: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1102A07E: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x1102A081: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1102A084: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x1102A087: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x1102A088: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_1102A08B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102A08Bu);

L_1102A08B:
    PUSH32(esp, 0x24u); /* 0x1102A08B: push 0x24 */
    eax = 0x1103EB39u; /* 0x1102A08D: mov eax, 0x1103eb39 */
    RECOMP_CALL(sub_1103B372); /* 0x1102A092: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x24)) = ecx; /* 0x1102A097: mov dword ptr [ebp - 0x24], ecx */
    ecx = MEM32(ebp + 0x14); /* 0x1102A09A: mov ecx, dword ptr [ebp + 0x14] */
    eax = ebp + (-0x14); /* 0x1102A09D: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1102A0A0: push eax */
    RECOMP_CALL(sub_1100F94A); /* 0x1102A0A1: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1102A0A6: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1102A0AA: push eax */
    RECOMP_CALL(sub_11010F0A); /* 0x1102A0AB: call 0x11010f0a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1102A0B0: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = eax; /* 0x1102A0B4: mov ebx, eax */
    ecx = POP32_VAL(esp); /* 0x1102A0B6: pop ecx */
    ecx = ebp + (-0x14); /* 0x1102A0B7: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1100E431); /* 0x1102A0BA: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x20); /* 0x1102A0BF: mov esi, dword ptr [ebp + 0x20] */
    goto L_1102A16F; /* 0x1102A0C2: jmp 0x1102a16f */
L_1102A0C7:
    SET_LO8(eax, MEM8(esi)); /* 0x1102A0C7: mov al, byte ptr [esi] */
    ecx = ebx; /* 0x1102A0C9: mov ecx, ebx */
    MEM8(ebp + (-0x18)) = (uint8_t)(LO8(eax)); /* 0x1102A0CB: mov byte ptr [ebp - 0x18], al */
    eax = MEM32(ebx); /* 0x1102A0CE: mov eax, dword ptr [ebx] */
    PUSH32(esp, 0); /* 0x1102A0D0: push 0 */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x1102A0D2: push dword ptr [ebp - 0x18] */
    RECOMP_ICALL(MEM32(eax + 0x28)); /* 0x1102A0D5: call dword ptr [eax + 0x28] */
    RECOMP_FLAGS_IN();
    /* cmp LO8(eax), 0x25u */ /* 0x1102A0D8: cmp al, 0x25 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x25u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102A0ED; /* 0x1102A0DA: je 0x1102a0ed */
L_1102A0DC:
    eax = (uint32_t)MEM8(esi); /* 0x1102A0DC: movzx eax, byte ptr [esi] */
    ecx = ebp + 0xC; /* 0x1102A0DF: lea ecx, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x1102A0E2: push eax */
    RECOMP_CALL(sub_1101776A); /* 0x1102A0E3: call 0x1101776a */
    RECOMP_FLAGS_IN();
    goto L_1102A16E; /* 0x1102A0E8: jmp 0x1102a16e */
L_1102A0ED:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1102A0ED: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(ebp + 0x24) */ /* 0x1102A0EE: cmp esi, dword ptr [ebp + 0x24] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x24));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102A18A; /* 0x1102A0F1: je 0x1102a18a */
L_1102A0F7:
    SET_LO8(eax, MEM8(esi)); /* 0x1102A0F7: mov al, byte ptr [esi] */
    ecx = ebx; /* 0x1102A0F9: mov ecx, ebx */
    MEM8(ebp + (-0x1C)) = (uint8_t)(LO8(eax)); /* 0x1102A0FB: mov byte ptr [ebp - 0x1c], al */
    eax = MEM32(ebx); /* 0x1102A0FE: mov eax, dword ptr [ebx] */
    PUSH32(esp, 0); /* 0x1102A100: push 0 */
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x1102A102: push dword ptr [ebp - 0x1c] */
    RECOMP_ICALL(MEM32(eax + 0x28)); /* 0x1102A105: call dword ptr [eax + 0x28] */
    RECOMP_FLAGS_IN();
    SET_LO8(ecx, MEM8(esi + (-0x1))); /* 0x1102A108: mov cl, byte ptr [esi - 1] */
    MEM8(ebp + 0x20) = (uint8_t)(LO8(eax)); /* 0x1102A10B: mov byte ptr [ebp + 0x20], al */
    MEM8(ebp + (-0x10)) = (uint8_t)(0); /* 0x1102A10E: mov byte ptr [ebp - 0x10], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(LO8(ecx)); /* 0x1102A112: mov byte ptr [ebp - 0x28], cl */
    /* cmp LO8(eax), 0x45u */ /* 0x1102A115: cmp al, 0x45 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x45u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102A125; /* 0x1102A117: je 0x1102a125 */
L_1102A119:
    /* cmp LO8(eax), 0x4Fu */ /* 0x1102A119: cmp al, 0x4f */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x4Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102A125; /* 0x1102A11B: je 0x1102a125 */
L_1102A11D:
    /* cmp LO8(eax), 0x51u */ /* 0x1102A11D: cmp al, 0x51 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x51u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102A125; /* 0x1102A11F: je 0x1102a125 */
L_1102A121:
    /* cmp LO8(eax), 0x23u */ /* 0x1102A121: cmp al, 0x23 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x23u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102A142; /* 0x1102A123: jne 0x1102a142 */
L_1102A125:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1102A125: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(ebp + 0x24) */ /* 0x1102A126: cmp esi, dword ptr [ebp + 0x24] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x24));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102A17A; /* 0x1102A129: je 0x1102a17a */
L_1102A12B:
    MEM8(ebp + (-0x10)) = (uint8_t)(LO8(eax)); /* 0x1102A12B: mov byte ptr [ebp - 0x10], al */
    ecx = ebx; /* 0x1102A12E: mov ecx, ebx */
    SET_LO8(eax, MEM8(esi)); /* 0x1102A130: mov al, byte ptr [esi] */
    MEM8(ebp + (-0x20)) = (uint8_t)(LO8(eax)); /* 0x1102A132: mov byte ptr [ebp - 0x20], al */
    eax = MEM32(ebx); /* 0x1102A135: mov eax, dword ptr [ebx] */
    PUSH32(esp, 0); /* 0x1102A137: push 0 */
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x1102A139: push dword ptr [ebp - 0x20] */
    RECOMP_ICALL(MEM32(eax + 0x28)); /* 0x1102A13C: call dword ptr [eax + 0x28] */
    RECOMP_FLAGS_IN();
    MEM8(ebp + 0x20) = (uint8_t)(LO8(eax)); /* 0x1102A13F: mov byte ptr [ebp + 0x20], al */
L_1102A142:
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x1102A142: push dword ptr [ebp - 0x10] */
    ecx = MEM32(ebp + (-0x24)); /* 0x1102A145: mov ecx, dword ptr [ebp - 0x24] */
    edx = ebp + (-0x30); /* 0x1102A148: lea edx, [ebp - 0x30] */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x1102A14B: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1102A14E: push dword ptr [ebp + 0x1c] */
    eax = MEM32(ecx); /* 0x1102A151: mov eax, dword ptr [ecx] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1102A153: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1102A156: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1102A159: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1102A15C: push dword ptr [ebp + 0xc] */
    PUSH32(esp, edx); /* 0x1102A15F: push edx */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x1102A160: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(eax); /* 0x1102A163: mov ecx, dword ptr [eax] */
    MEM32(ebp + 0xC) = ecx; /* 0x1102A165: mov dword ptr [ebp + 0xc], ecx */
    eax = MEM32(eax + 0x4); /* 0x1102A168: mov eax, dword ptr [eax + 4] */
    MEM32(ebp + 0x10) = eax; /* 0x1102A16B: mov dword ptr [ebp + 0x10], eax */
L_1102A16E:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1102A16E: inc esi */
    _flag_k = FK_INC;
L_1102A16F:
    /* cmp esi, MEM32(ebp + 0x24) */ /* 0x1102A16F: cmp esi, dword ptr [ebp + 0x24] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x24));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102A0C7; /* 0x1102A172: jne 0x1102a0c7 */
L_1102A178:
    goto L_1102A197; /* 0x1102A178: jmp 0x1102a197 */
L_1102A17A:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x1102A17A: push dword ptr [ebp - 0x28] */
    ecx = ebp + 0xC; /* 0x1102A17D: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_1101776A); /* 0x1102A180: call 0x1101776a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x1102A185: push dword ptr [ebp + 0x20] */
    goto L_1102A18F; /* 0x1102A188: jmp 0x1102a18f */
L_1102A18A:
    eax = (uint32_t)MEM8(esi + (-0x1)); /* 0x1102A18A: movzx eax, byte ptr [esi - 1] */
    PUSH32(esp, eax); /* 0x1102A18E: push eax */
L_1102A18F:
    ecx = ebp + 0xC; /* 0x1102A18F: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_1101776A); /* 0x1102A192: call 0x1101776a */
    RECOMP_FLAGS_IN();
L_1102A197:
    eax = MEM32(ebp + 0x8); /* 0x1102A197: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0xC); /* 0x1102A19A: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(eax) = ecx; /* 0x1102A19D: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x1102A19F: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(eax + 0x4) = ecx; /* 0x1102A1A2: mov dword ptr [eax + 4], ecx */
    RECOMP_CALL(sub_1103B340); /* 0x1102A1A5: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x1102A1AA: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_1102A1AD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102A1ADu);

L_1102A1AD:
    PUSH32(esp, 0x18u); /* 0x1102A1AD: push 0x18 */
    eax = 0x1103EB5Cu; /* 0x1102A1AF: mov eax, 0x1103eb5c */
    RECOMP_CALL(sub_1103B372); /* 0x1102A1B4: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x1C)) = ecx; /* 0x1102A1B9: mov dword ptr [ebp - 0x1c], ecx */
    ecx = MEM32(ebp + 0x14); /* 0x1102A1BC: mov ecx, dword ptr [ebp + 0x14] */
    eax = ebp + (-0x18); /* 0x1102A1BF: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x1102A1C2: push eax */
    RECOMP_CALL(sub_1100F94A); /* 0x1102A1C3: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1102A1C8: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1102A1CC: push eax */
    RECOMP_CALL(sub_1101103E); /* 0x1102A1CD: call 0x1101103e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1102A1D2: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = eax; /* 0x1102A1D6: mov ebx, eax */
    ecx = POP32_VAL(esp); /* 0x1102A1D8: pop ecx */
    ecx = ebp + (-0x18); /* 0x1102A1D9: lea ecx, [ebp - 0x18] */
    MEM32(ebp + (-0x10)) = ebx; /* 0x1102A1DC: mov dword ptr [ebp - 0x10], ebx */
    RECOMP_CALL(sub_1100E431); /* 0x1102A1DF: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x20); /* 0x1102A1E4: mov esi, dword ptr [ebp + 0x20] */
    goto L_1102A29A; /* 0x1102A1E7: jmp 0x1102a29a */
L_1102A1EC:
    eax = (uint32_t)MEM16(esi); /* 0x1102A1EC: movzx eax, word ptr [esi] */
    ecx = ebx; /* 0x1102A1EF: mov ecx, ebx */
    edx = MEM32(ebx); /* 0x1102A1F1: mov edx, dword ptr [ebx] */
    PUSH32(esp, 0); /* 0x1102A1F3: push 0 */
    PUSH32(esp, eax); /* 0x1102A1F5: push eax */
    RECOMP_ICALL(MEM32(edx + 0x38)); /* 0x1102A1F6: call dword ptr [edx + 0x38] */
    RECOMP_FLAGS_IN();
    /* cmp LO8(eax), 0x25u */ /* 0x1102A1F9: cmp al, 0x25 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x25u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102A20E; /* 0x1102A1FB: je 0x1102a20e */
L_1102A1FD:
    eax = (uint32_t)MEM16(esi); /* 0x1102A1FD: movzx eax, word ptr [esi] */
    ecx = ebp + 0xC; /* 0x1102A200: lea ecx, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x1102A203: push eax */
    RECOMP_CALL(sub_1101778E); /* 0x1102A204: call 0x1101778e */
    RECOMP_FLAGS_IN();
    goto L_1102A297; /* 0x1102A209: jmp 0x1102a297 */
L_1102A20E:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x1102A20E: add esi, 2 */
    _flag_k = FK_ADD;
    /* cmp esi, MEM32(ebp + 0x24) */ /* 0x1102A211: cmp esi, dword ptr [ebp + 0x24] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x24));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102A2B7; /* 0x1102A214: je 0x1102a2b7 */
L_1102A21A:
    eax = (uint32_t)MEM16(esi); /* 0x1102A21A: movzx eax, word ptr [esi] */
    ecx = ebx; /* 0x1102A21D: mov ecx, ebx */
    edx = MEM32(ebx); /* 0x1102A21F: mov edx, dword ptr [ebx] */
    PUSH32(esp, 0); /* 0x1102A221: push 0 */
    PUSH32(esp, eax); /* 0x1102A223: push eax */
    RECOMP_ICALL(MEM32(edx + 0x38)); /* 0x1102A224: call dword ptr [edx + 0x38] */
    RECOMP_FLAGS_IN();
    SET_LO8(ebx, LO8(eax)); /* 0x1102A227: mov bl, al */
    MEM8(ebp + 0x20) = (uint8_t)(0); /* 0x1102A229: mov byte ptr [ebp + 0x20], 0 */
    eax = (uint32_t)MEM16(esi + (-0x2)); /* 0x1102A22D: movzx eax, word ptr [esi - 2] */
    MEM8(ebp + (-0x14)) = (uint8_t)(LO8(ebx)); /* 0x1102A231: mov byte ptr [ebp - 0x14], bl */
    /* cmp LO8(ebx), 0x45u */ /* 0x1102A234: cmp bl, 0x45 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x45u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102A248; /* 0x1102A237: je 0x1102a248 */
L_1102A239:
    /* cmp LO8(ebx), 0x4Fu */ /* 0x1102A239: cmp bl, 0x4f */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x4Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102A248; /* 0x1102A23C: je 0x1102a248 */
L_1102A23E:
    /* cmp LO8(ebx), 0x51u */ /* 0x1102A23E: cmp bl, 0x51 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x51u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102A248; /* 0x1102A241: je 0x1102a248 */
L_1102A243:
    /* cmp LO8(ebx), 0x23u */ /* 0x1102A243: cmp bl, 0x23 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x23u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102A268; /* 0x1102A246: jne 0x1102a268 */
L_1102A248:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x1102A248: add esi, 2 */
    _flag_k = FK_ADD;
    /* cmp esi, MEM32(ebp + 0x24) */ /* 0x1102A24B: cmp esi, dword ptr [ebp + 0x24] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x24));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102A2A5; /* 0x1102A24E: je 0x1102a2a5 */
L_1102A250:
    eax = (uint32_t)MEM16(esi); /* 0x1102A250: movzx eax, word ptr [esi] */
    MEM8(ebp + 0x20) = (uint8_t)(LO8(ebx)); /* 0x1102A253: mov byte ptr [ebp + 0x20], bl */
    ebx = MEM32(ebp + (-0x10)); /* 0x1102A256: mov ebx, dword ptr [ebp - 0x10] */
    ecx = ebx; /* 0x1102A259: mov ecx, ebx */
    PUSH32(esp, 0); /* 0x1102A25B: push 0 */
    PUSH32(esp, eax); /* 0x1102A25D: push eax */
    edx = MEM32(ebx); /* 0x1102A25E: mov edx, dword ptr [ebx] */
    RECOMP_ICALL(MEM32(edx + 0x38)); /* 0x1102A260: call dword ptr [edx + 0x38] */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x14)) = (uint8_t)(LO8(eax)); /* 0x1102A263: mov byte ptr [ebp - 0x14], al */
    goto L_1102A26B; /* 0x1102A266: jmp 0x1102a26b */
L_1102A268:
    ebx = MEM32(ebp + (-0x10)); /* 0x1102A268: mov ebx, dword ptr [ebp - 0x10] */
L_1102A26B:
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x1102A26B: push dword ptr [ebp + 0x20] */
    ecx = MEM32(ebp + (-0x1C)); /* 0x1102A26E: mov ecx, dword ptr [ebp - 0x1c] */
    edx = ebp + (-0x24); /* 0x1102A271: lea edx, [ebp - 0x24] */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x1102A274: push dword ptr [ebp - 0x14] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1102A277: push dword ptr [ebp + 0x1c] */
    eax = MEM32(ecx); /* 0x1102A27A: mov eax, dword ptr [ecx] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1102A27C: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1102A27F: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1102A282: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1102A285: push dword ptr [ebp + 0xc] */
    PUSH32(esp, edx); /* 0x1102A288: push edx */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x1102A289: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(eax); /* 0x1102A28C: mov ecx, dword ptr [eax] */
    MEM32(ebp + 0xC) = ecx; /* 0x1102A28E: mov dword ptr [ebp + 0xc], ecx */
    eax = MEM32(eax + 0x4); /* 0x1102A291: mov eax, dword ptr [eax + 4] */
    MEM32(ebp + 0x10) = eax; /* 0x1102A294: mov dword ptr [ebp + 0x10], eax */
L_1102A297:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x1102A297: add esi, 2 */
    _flag_k = FK_ADD;
L_1102A29A:
    /* cmp esi, MEM32(ebp + 0x24) */ /* 0x1102A29A: cmp esi, dword ptr [ebp + 0x24] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x24));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102A1EC; /* 0x1102A29D: jne 0x1102a1ec */
L_1102A2A3:
    goto L_1102A2C4; /* 0x1102A2A3: jmp 0x1102a2c4 */
L_1102A2A5:
    PUSH32(esp, eax); /* 0x1102A2A5: push eax */
    ecx = ebp + 0xC; /* 0x1102A2A6: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_1101778E); /* 0x1102A2A9: call 0x1101778e */
    RECOMP_FLAGS_IN();
    SET_LO16(eax, (int32_t)(int8_t)LO8(ebx)); /* 0x1102A2AE: movsx ax, bl */
    eax = (uint32_t)LO16(eax); /* 0x1102A2B2: movzx eax, ax */
    goto L_1102A2BB; /* 0x1102A2B5: jmp 0x1102a2bb */
L_1102A2B7:
    eax = (uint32_t)MEM16(esi + (-0x2)); /* 0x1102A2B7: movzx eax, word ptr [esi - 2] */
L_1102A2BB:
    PUSH32(esp, eax); /* 0x1102A2BB: push eax */
    ecx = ebp + 0xC; /* 0x1102A2BC: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_1101778E); /* 0x1102A2BF: call 0x1101778e */
    RECOMP_FLAGS_IN();
L_1102A2C4:
    eax = MEM32(ebp + 0x8); /* 0x1102A2C4: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0xC); /* 0x1102A2C7: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(eax) = ecx; /* 0x1102A2CA: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x1102A2CC: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(eax + 0x4) = ecx; /* 0x1102A2CF: mov dword ptr [eax + 4], ecx */
    RECOMP_CALL(sub_1103B340); /* 0x1102A2D2: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x1102A2D7: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_1102A2DA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102A2DAu);

L_1102A2DA:
    PUSH32(esp, 0x18u); /* 0x1102A2DA: push 0x18 */
    eax = 0x1103EB5Cu; /* 0x1102A2DC: mov eax, 0x1103eb5c */
    RECOMP_CALL(sub_1103B372); /* 0x1102A2E1: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x1C)) = ecx; /* 0x1102A2E6: mov dword ptr [ebp - 0x1c], ecx */
    ecx = MEM32(ebp + 0x14); /* 0x1102A2E9: mov ecx, dword ptr [ebp + 0x14] */
    eax = ebp + (-0x18); /* 0x1102A2EC: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x1102A2EF: push eax */
    RECOMP_CALL(sub_1100F94A); /* 0x1102A2F0: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1102A2F5: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1102A2F9: push eax */
    RECOMP_CALL(sub_11010FA4); /* 0x1102A2FA: call 0x11010fa4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1102A2FF: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = eax; /* 0x1102A303: mov ebx, eax */
    ecx = POP32_VAL(esp); /* 0x1102A305: pop ecx */
    ecx = ebp + (-0x18); /* 0x1102A306: lea ecx, [ebp - 0x18] */
    MEM32(ebp + (-0x10)) = ebx; /* 0x1102A309: mov dword ptr [ebp - 0x10], ebx */
    RECOMP_CALL(sub_1100E431); /* 0x1102A30C: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x20); /* 0x1102A311: mov esi, dword ptr [ebp + 0x20] */
    goto L_1102A3C7; /* 0x1102A314: jmp 0x1102a3c7 */
L_1102A319:
    eax = (uint32_t)MEM16(esi); /* 0x1102A319: movzx eax, word ptr [esi] */
    ecx = ebx; /* 0x1102A31C: mov ecx, ebx */
    edx = MEM32(ebx); /* 0x1102A31E: mov edx, dword ptr [ebx] */
    PUSH32(esp, 0); /* 0x1102A320: push 0 */
    PUSH32(esp, eax); /* 0x1102A322: push eax */
    RECOMP_ICALL(MEM32(edx + 0x38)); /* 0x1102A323: call dword ptr [edx + 0x38] */
    RECOMP_FLAGS_IN();
    /* cmp LO8(eax), 0x25u */ /* 0x1102A326: cmp al, 0x25 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x25u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102A33B; /* 0x1102A328: je 0x1102a33b */
L_1102A32A:
    eax = (uint32_t)MEM16(esi); /* 0x1102A32A: movzx eax, word ptr [esi] */
    ecx = ebp + 0xC; /* 0x1102A32D: lea ecx, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x1102A330: push eax */
    RECOMP_CALL(sub_1101778E); /* 0x1102A331: call 0x1101778e */
    RECOMP_FLAGS_IN();
    goto L_1102A3C4; /* 0x1102A336: jmp 0x1102a3c4 */
L_1102A33B:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x1102A33B: add esi, 2 */
    _flag_k = FK_ADD;
    /* cmp esi, MEM32(ebp + 0x24) */ /* 0x1102A33E: cmp esi, dword ptr [ebp + 0x24] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x24));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102A3E4; /* 0x1102A341: je 0x1102a3e4 */
L_1102A347:
    eax = (uint32_t)MEM16(esi); /* 0x1102A347: movzx eax, word ptr [esi] */
    ecx = ebx; /* 0x1102A34A: mov ecx, ebx */
    edx = MEM32(ebx); /* 0x1102A34C: mov edx, dword ptr [ebx] */
    PUSH32(esp, 0); /* 0x1102A34E: push 0 */
    PUSH32(esp, eax); /* 0x1102A350: push eax */
    RECOMP_ICALL(MEM32(edx + 0x38)); /* 0x1102A351: call dword ptr [edx + 0x38] */
    RECOMP_FLAGS_IN();
    SET_LO8(ebx, LO8(eax)); /* 0x1102A354: mov bl, al */
    MEM8(ebp + 0x20) = (uint8_t)(0); /* 0x1102A356: mov byte ptr [ebp + 0x20], 0 */
    eax = (uint32_t)MEM16(esi + (-0x2)); /* 0x1102A35A: movzx eax, word ptr [esi - 2] */
    MEM8(ebp + (-0x14)) = (uint8_t)(LO8(ebx)); /* 0x1102A35E: mov byte ptr [ebp - 0x14], bl */
    /* cmp LO8(ebx), 0x45u */ /* 0x1102A361: cmp bl, 0x45 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x45u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102A375; /* 0x1102A364: je 0x1102a375 */
L_1102A366:
    /* cmp LO8(ebx), 0x4Fu */ /* 0x1102A366: cmp bl, 0x4f */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x4Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102A375; /* 0x1102A369: je 0x1102a375 */
L_1102A36B:
    /* cmp LO8(ebx), 0x51u */ /* 0x1102A36B: cmp bl, 0x51 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x51u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102A375; /* 0x1102A36E: je 0x1102a375 */
L_1102A370:
    /* cmp LO8(ebx), 0x23u */ /* 0x1102A370: cmp bl, 0x23 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x23u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102A395; /* 0x1102A373: jne 0x1102a395 */
L_1102A375:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x1102A375: add esi, 2 */
    _flag_k = FK_ADD;
    /* cmp esi, MEM32(ebp + 0x24) */ /* 0x1102A378: cmp esi, dword ptr [ebp + 0x24] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x24));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102A3D2; /* 0x1102A37B: je 0x1102a3d2 */
L_1102A37D:
    eax = (uint32_t)MEM16(esi); /* 0x1102A37D: movzx eax, word ptr [esi] */
    MEM8(ebp + 0x20) = (uint8_t)(LO8(ebx)); /* 0x1102A380: mov byte ptr [ebp + 0x20], bl */
    ebx = MEM32(ebp + (-0x10)); /* 0x1102A383: mov ebx, dword ptr [ebp - 0x10] */
    ecx = ebx; /* 0x1102A386: mov ecx, ebx */
    PUSH32(esp, 0); /* 0x1102A388: push 0 */
    PUSH32(esp, eax); /* 0x1102A38A: push eax */
    edx = MEM32(ebx); /* 0x1102A38B: mov edx, dword ptr [ebx] */
    RECOMP_ICALL(MEM32(edx + 0x38)); /* 0x1102A38D: call dword ptr [edx + 0x38] */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x14)) = (uint8_t)(LO8(eax)); /* 0x1102A390: mov byte ptr [ebp - 0x14], al */
    goto L_1102A398; /* 0x1102A393: jmp 0x1102a398 */
L_1102A395:
    ebx = MEM32(ebp + (-0x10)); /* 0x1102A395: mov ebx, dword ptr [ebp - 0x10] */
L_1102A398:
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x1102A398: push dword ptr [ebp + 0x20] */
    ecx = MEM32(ebp + (-0x1C)); /* 0x1102A39B: mov ecx, dword ptr [ebp - 0x1c] */
    edx = ebp + (-0x24); /* 0x1102A39E: lea edx, [ebp - 0x24] */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x1102A3A1: push dword ptr [ebp - 0x14] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1102A3A4: push dword ptr [ebp + 0x1c] */
    eax = MEM32(ecx); /* 0x1102A3A7: mov eax, dword ptr [ecx] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1102A3A9: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1102A3AC: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1102A3AF: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1102A3B2: push dword ptr [ebp + 0xc] */
    PUSH32(esp, edx); /* 0x1102A3B5: push edx */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x1102A3B6: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(eax); /* 0x1102A3B9: mov ecx, dword ptr [eax] */
    MEM32(ebp + 0xC) = ecx; /* 0x1102A3BB: mov dword ptr [ebp + 0xc], ecx */
    eax = MEM32(eax + 0x4); /* 0x1102A3BE: mov eax, dword ptr [eax + 4] */
    MEM32(ebp + 0x10) = eax; /* 0x1102A3C1: mov dword ptr [ebp + 0x10], eax */
L_1102A3C4:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x1102A3C4: add esi, 2 */
    _flag_k = FK_ADD;
L_1102A3C7:
    /* cmp esi, MEM32(ebp + 0x24) */ /* 0x1102A3C7: cmp esi, dword ptr [ebp + 0x24] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x24));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102A319; /* 0x1102A3CA: jne 0x1102a319 */
L_1102A3D0:
    goto L_1102A3F1; /* 0x1102A3D0: jmp 0x1102a3f1 */
L_1102A3D2:
    PUSH32(esp, eax); /* 0x1102A3D2: push eax */
    ecx = ebp + 0xC; /* 0x1102A3D3: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_1101778E); /* 0x1102A3D6: call 0x1101778e */
    RECOMP_FLAGS_IN();
    SET_LO16(eax, (int32_t)(int8_t)LO8(ebx)); /* 0x1102A3DB: movsx ax, bl */
    eax = (uint32_t)LO16(eax); /* 0x1102A3DF: movzx eax, ax */
    goto L_1102A3E8; /* 0x1102A3E2: jmp 0x1102a3e8 */
L_1102A3E4:
    eax = (uint32_t)MEM16(esi + (-0x2)); /* 0x1102A3E4: movzx eax, word ptr [esi - 2] */
L_1102A3E8:
    PUSH32(esp, eax); /* 0x1102A3E8: push eax */
    ecx = ebp + 0xC; /* 0x1102A3E9: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_1101778E); /* 0x1102A3EC: call 0x1101778e */
    RECOMP_FLAGS_IN();
L_1102A3F1:
    eax = MEM32(ebp + 0x8); /* 0x1102A3F1: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0xC); /* 0x1102A3F4: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(eax) = ecx; /* 0x1102A3F7: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x1102A3F9: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(eax + 0x4) = ecx; /* 0x1102A3FC: mov dword ptr [eax + 4], ecx */
    RECOMP_CALL(sub_1103B340); /* 0x1102A3FF: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x1102A404: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_1102A407(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102A407u);
    RECOMP_EH_ENTER();

L_1102A407:
    PUSH32(esp, 0x18u); /* 0x1102A407: push 0x18 */
    eax = 0x1103EB87u; /* 0x1102A409: mov eax, 0x1103eb87 */
    RECOMP_CALL(sub_1103B3DB); /* 0x1102A40E: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1102A413: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x1102A415: mov dword ptr [ebp - 0x14], esi */
    eax = MEM32(esi); /* 0x1102A418: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1102A41A: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x8) = edi; /* 0x1102A41C: mov dword ptr [esi + 8], edi */
    ebx = edi; /* 0x1102A41F: mov ebx, edi */
    MEM32(esi + 0xC) = edi; /* 0x1102A421: mov dword ptr [esi + 0xc], edi */
    ecx = MEM32(eax + 0x4); /* 0x1102A424: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1102A427: add ecx, esi */
    _flag_k = FK_ADD;
    eax = MEM32(ecx + 0xC); /* 0x1102A429: mov eax, dword ptr [ecx + 0xc] */
    MEM32(ebp + (-0x18)) = eax; /* 0x1102A42C: mov dword ptr [ebp - 0x18], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    eax = eax & 0xFFFFFFFEu; /* 0x1102A42F: and eax, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx + 0x38), edi */ /* 0x1102A432: cmp dword ptr [ecx + 0x38], edi */
    _flag_a = (uint32_t)(MEM32(ecx + 0x38)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102A43A; /* 0x1102A435: jne 0x1102a43a */
L_1102A437:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1102A437: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102A43A:
    PUSH32(esp, edi); /* 0x1102A43A: push edi */
    PUSH32(esp, eax); /* 0x1102A43B: push eax */
    RECOMP_CALL(sub_1100F771); /* 0x1102A43C: call 0x1100f771 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x1102A441: mov eax, dword ptr [esi] */
    MEM32(ebp + (-0x24)) = esi; /* 0x1102A443: mov dword ptr [ebp - 0x24], esi */
    eax = MEM32(eax + 0x4); /* 0x1102A446: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1102A449: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x1102A44D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102A456; /* 0x1102A44F: je 0x1102a456 */
L_1102A451:
    eax = MEM32(ecx); /* 0x1102A451: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1102A453: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_1102A456:
    PUSH32(esp, 1); /* 0x1102A456: push 1 */
    ecx = esi; /* 0x1102A458: mov ecx, esi */
    MEM32(ebp + (-0x4)) = edi; /* 0x1102A45A: mov dword ptr [ebp - 4], edi */
    RECOMP_CALL(sub_11010675); /* 0x1102A45D: call 0x11010675 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x20)) = (uint8_t)(LO8(eax)); /* 0x1102A462: mov byte ptr [ebp - 0x20], al */
    MEM32(ebp + (-0x4)) = 1; /* 0x1102A465: mov dword ptr [ebp - 4], 1 */
    /* test LO8(eax), LO8(eax) */ /* 0x1102A46C: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102A497; /* 0x1102A46E: je 0x1102a497 */
L_1102A470:
    eax = MEM32(esi); /* 0x1102A470: mov eax, dword ptr [esi] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1102A472: push dword ptr [ebp + 8] */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x1102A475: mov byte ptr [ebp - 4], 2 */
    eax = MEM32(eax + 0x4); /* 0x1102A479: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1102A47C: mov ecx, dword ptr [eax + esi + 0x38] */
    RECOMP_CALL(sub_1102B323); /* 0x1102A480: call 0x1102b323 */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1102A485: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102A490; /* 0x1102A488: jne 0x1102a490 */
L_1102A48A:
    ebx = MEM32(ebp + (-0x18)); /* 0x1102A48A: mov ebx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)((ebx | 4)); _flag_b = (uint32_t)((ebx | 4));
    ebx = ebx | 4; /* 0x1102A48D: or ebx, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102A490:
    MEM32(ebp + (-0x4)) = 1; /* 0x1102A490: mov dword ptr [ebp - 4], 1 */
L_1102A497:
    eax = MEM32(esi); /* 0x1102A497: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x1102A499: push edi */
    PUSH32(esp, ebx); /* 0x1102A49A: push ebx */
    ecx = MEM32(eax + 0x4); /* 0x1102A49B: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1102A49E: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1102A4A0: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x1102A4A5: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1102A4A7: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x1102A4AB: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1102A4AE: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x1102A4B2: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102A4BB; /* 0x1102A4B4: je 0x1102a4bb */
L_1102A4B6:
    eax = MEM32(ecx); /* 0x1102A4B6: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1102A4B8: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_1102A4BB:
    eax = esi; /* 0x1102A4BB: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1102A4BD: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x1102A4C2: ret 4 */
L_1102A4F0:
    esi = MEM32(ebp + (-0x14)); /* 0x1102A4F0: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1102A4F3: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x1102A4F5: mov dword ptr [ebp - 4], 1 */
    ebx = edi; /* 0x1102A4FC: mov ebx, edi */
    RECOMP_BACKEDGE();
    goto L_1102A497; /* 0x1102A4FE: jmp 0x1102a497 */
    { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x1102A4F0u: goto L_1102A4F0;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_1102A4C5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102A4C5u);

L_1102A4C5:
    ecx = MEM32(ebp + (-0x14)); /* 0x1102A4C5: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1102A4C8: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x1102A4CA: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x1102A4CC: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1102A4CF: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x1102A4D1: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1102A4D4: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), edi */ /* 0x1102A4D7: cmp dword ptr [edx + 0x38], edi */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102A4DF; /* 0x1102A4DA: jne 0x1102a4df */
L_1102A4DC:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1102A4DC: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102A4DF:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x1102A4DF: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x1102A4E2: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x1102A4E5: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102A500; /* 0x1102A4E8: jne 0x1102a500 */
L_1102A4EA:
    eax = 0x1102A4F0u; /* 0x1102A4EA: mov eax, 0x1102a4f0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102A4EF: ret  */
L_1102A500:
    PUSH32(esp, edi); /* 0x1102A500: push edi */
    PUSH32(esp, edi); /* 0x1102A501: push edi */
    RECOMP_CALL(sub_1103B33A); /* 0x1102A502: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1102A507u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1102A4F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102A4F0u);

    goto L_1102A4F0;
L_1102A497:
    eax = MEM32(esi); /* 0x1102A497: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x1102A499: push edi */
    PUSH32(esp, ebx); /* 0x1102A49A: push ebx */
    ecx = MEM32(eax + 0x4); /* 0x1102A49B: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1102A49E: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1102A4A0: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x1102A4A5: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1102A4A7: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x1102A4AB: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1102A4AE: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x1102A4B2: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102A4BB; /* 0x1102A4B4: je 0x1102a4bb */
L_1102A4B6:
    eax = MEM32(ecx); /* 0x1102A4B6: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1102A4B8: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_1102A4BB:
    eax = esi; /* 0x1102A4BB: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1102A4BD: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1102A4C2: ret 4 */
L_1102A4F0:
    esi = MEM32(ebp + (-0x14)); /* 0x1102A4F0: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1102A4F3: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x1102A4F5: mov dword ptr [ebp - 4], 1 */
    ebx = edi; /* 0x1102A4FC: mov ebx, edi */
    RECOMP_BACKEDGE();
    goto L_1102A497; /* 0x1102A4FE: jmp 0x1102a497 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1102A508(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102A508u);
    RECOMP_EH_ENTER();

L_1102A508:
    PUSH32(esp, 0x18u); /* 0x1102A508: push 0x18 */
    eax = 0x1103EBB2u; /* 0x1102A50A: mov eax, 0x1103ebb2 */
    RECOMP_CALL(sub_1103B3DB); /* 0x1102A50F: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1102A514: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x1102A516: mov dword ptr [ebp - 0x14], esi */
    eax = MEM32(esi); /* 0x1102A519: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1102A51B: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x8) = edi; /* 0x1102A51D: mov dword ptr [esi + 8], edi */
    ebx = edi; /* 0x1102A520: mov ebx, edi */
    MEM32(esi + 0xC) = edi; /* 0x1102A522: mov dword ptr [esi + 0xc], edi */
    ecx = MEM32(eax + 0x4); /* 0x1102A525: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1102A528: add ecx, esi */
    _flag_k = FK_ADD;
    eax = MEM32(ecx + 0xC); /* 0x1102A52A: mov eax, dword ptr [ecx + 0xc] */
    MEM32(ebp + (-0x18)) = eax; /* 0x1102A52D: mov dword ptr [ebp - 0x18], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    eax = eax & 0xFFFFFFFEu; /* 0x1102A530: and eax, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx + 0x38), edi */ /* 0x1102A533: cmp dword ptr [ecx + 0x38], edi */
    _flag_a = (uint32_t)(MEM32(ecx + 0x38)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102A53B; /* 0x1102A536: jne 0x1102a53b */
L_1102A538:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1102A538: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102A53B:
    PUSH32(esp, edi); /* 0x1102A53B: push edi */
    PUSH32(esp, eax); /* 0x1102A53C: push eax */
    RECOMP_CALL(sub_1100F771); /* 0x1102A53D: call 0x1100f771 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x1102A542: mov eax, dword ptr [esi] */
    MEM32(ebp + (-0x24)) = esi; /* 0x1102A544: mov dword ptr [ebp - 0x24], esi */
    eax = MEM32(eax + 0x4); /* 0x1102A547: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1102A54A: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x1102A54E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102A557; /* 0x1102A550: je 0x1102a557 */
L_1102A552:
    eax = MEM32(ecx); /* 0x1102A552: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1102A554: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_1102A557:
    PUSH32(esp, 1); /* 0x1102A557: push 1 */
    ecx = esi; /* 0x1102A559: mov ecx, esi */
    MEM32(ebp + (-0x4)) = edi; /* 0x1102A55B: mov dword ptr [ebp - 4], edi */
    RECOMP_CALL(sub_11010989); /* 0x1102A55E: call 0x11010989 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x20)) = (uint8_t)(LO8(eax)); /* 0x1102A563: mov byte ptr [ebp - 0x20], al */
    MEM32(ebp + (-0x4)) = 1; /* 0x1102A566: mov dword ptr [ebp - 4], 1 */
    /* test LO8(eax), LO8(eax) */ /* 0x1102A56D: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102A5A0; /* 0x1102A56F: je 0x1102a5a0 */
L_1102A571:
    eax = MEM32(esi); /* 0x1102A571: mov eax, dword ptr [esi] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1102A573: push dword ptr [ebp + 8] */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x1102A576: mov byte ptr [ebp - 4], 2 */
    eax = MEM32(eax + 0x4); /* 0x1102A57A: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1102A57D: mov ecx, dword ptr [eax + esi + 0x38] */
    RECOMP_CALL(sub_1102B35F); /* 0x1102A581: call 0x1102b35f */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO16(eax); /* 0x1102A586: movzx eax, ax */
    ecx = 0xFFFFu; /* 0x1102A589: mov ecx, 0xffff */
    /* cmp LO16(ecx), LO16(eax) */ /* 0x1102A58E: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102A599; /* 0x1102A591: jne 0x1102a599 */
L_1102A593:
    ebx = MEM32(ebp + (-0x18)); /* 0x1102A593: mov ebx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)((ebx | 4)); _flag_b = (uint32_t)((ebx | 4));
    ebx = ebx | 4; /* 0x1102A596: or ebx, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102A599:
    MEM32(ebp + (-0x4)) = 1; /* 0x1102A599: mov dword ptr [ebp - 4], 1 */
L_1102A5A0:
    eax = MEM32(esi); /* 0x1102A5A0: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x1102A5A2: push edi */
    PUSH32(esp, ebx); /* 0x1102A5A3: push ebx */
    ecx = MEM32(eax + 0x4); /* 0x1102A5A4: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1102A5A7: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1102A5A9: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x1102A5AE: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1102A5B0: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x1102A5B4: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1102A5B7: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x1102A5BB: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102A5C4; /* 0x1102A5BD: je 0x1102a5c4 */
L_1102A5BF:
    eax = MEM32(ecx); /* 0x1102A5BF: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1102A5C1: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_1102A5C4:
    eax = esi; /* 0x1102A5C4: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1102A5C6: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x1102A5CB: ret 4 */
L_1102A5F9:
    esi = MEM32(ebp + (-0x14)); /* 0x1102A5F9: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1102A5FC: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x1102A5FE: mov dword ptr [ebp - 4], 1 */
    ebx = edi; /* 0x1102A605: mov ebx, edi */
    RECOMP_BACKEDGE();
    goto L_1102A5A0; /* 0x1102A607: jmp 0x1102a5a0 */
    { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x1102A5F9u: goto L_1102A5F9;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_1102A5CE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102A5CEu);

L_1102A5CE:
    ecx = MEM32(ebp + (-0x14)); /* 0x1102A5CE: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1102A5D1: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x1102A5D3: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x1102A5D5: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1102A5D8: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x1102A5DA: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1102A5DD: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), edi */ /* 0x1102A5E0: cmp dword ptr [edx + 0x38], edi */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102A5E8; /* 0x1102A5E3: jne 0x1102a5e8 */
L_1102A5E5:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1102A5E5: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102A5E8:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x1102A5E8: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x1102A5EB: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x1102A5EE: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102A609; /* 0x1102A5F1: jne 0x1102a609 */
L_1102A5F3:
    eax = 0x1102A5F9u; /* 0x1102A5F3: mov eax, 0x1102a5f9 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102A5F8: ret  */
L_1102A609:
    PUSH32(esp, edi); /* 0x1102A609: push edi */
    PUSH32(esp, edi); /* 0x1102A60A: push edi */
    RECOMP_CALL(sub_1103B33A); /* 0x1102A60B: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1102A610u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1102A5F9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102A5F9u);

    goto L_1102A5F9;
L_1102A5A0:
    eax = MEM32(esi); /* 0x1102A5A0: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x1102A5A2: push edi */
    PUSH32(esp, ebx); /* 0x1102A5A3: push ebx */
    ecx = MEM32(eax + 0x4); /* 0x1102A5A4: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1102A5A7: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1102A5A9: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x1102A5AE: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1102A5B0: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x1102A5B4: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1102A5B7: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x1102A5BB: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102A5C4; /* 0x1102A5BD: je 0x1102a5c4 */
L_1102A5BF:
    eax = MEM32(ecx); /* 0x1102A5BF: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1102A5C1: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_1102A5C4:
    eax = esi; /* 0x1102A5C4: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1102A5C6: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1102A5CB: ret 4 */
L_1102A5F9:
    esi = MEM32(ebp + (-0x14)); /* 0x1102A5F9: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1102A5FC: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x1102A5FE: mov dword ptr [ebp - 4], 1 */
    ebx = edi; /* 0x1102A605: mov ebx, edi */
    RECOMP_BACKEDGE();
    goto L_1102A5A0; /* 0x1102A607: jmp 0x1102a5a0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1102A611(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102A611u);
    RECOMP_EH_ENTER();

L_1102A611:
    PUSH32(esp, 0x18u); /* 0x1102A611: push 0x18 */
    eax = 0x1103EBDDu; /* 0x1102A613: mov eax, 0x1103ebdd */
    RECOMP_CALL(sub_1103B3DB); /* 0x1102A618: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1102A61D: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x1102A61F: mov dword ptr [ebp - 0x14], esi */
    eax = MEM32(esi); /* 0x1102A622: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1102A624: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x8) = edi; /* 0x1102A626: mov dword ptr [esi + 8], edi */
    ebx = edi; /* 0x1102A629: mov ebx, edi */
    MEM32(esi + 0xC) = edi; /* 0x1102A62B: mov dword ptr [esi + 0xc], edi */
    ecx = MEM32(eax + 0x4); /* 0x1102A62E: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1102A631: add ecx, esi */
    _flag_k = FK_ADD;
    eax = MEM32(ecx + 0xC); /* 0x1102A633: mov eax, dword ptr [ecx + 0xc] */
    MEM32(ebp + (-0x18)) = eax; /* 0x1102A636: mov dword ptr [ebp - 0x18], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    eax = eax & 0xFFFFFFFEu; /* 0x1102A639: and eax, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx + 0x38), edi */ /* 0x1102A63C: cmp dword ptr [ecx + 0x38], edi */
    _flag_a = (uint32_t)(MEM32(ecx + 0x38)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102A644; /* 0x1102A63F: jne 0x1102a644 */
L_1102A641:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1102A641: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102A644:
    PUSH32(esp, edi); /* 0x1102A644: push edi */
    PUSH32(esp, eax); /* 0x1102A645: push eax */
    RECOMP_CALL(sub_1100F771); /* 0x1102A646: call 0x1100f771 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x1102A64B: mov eax, dword ptr [esi] */
    MEM32(ebp + (-0x24)) = esi; /* 0x1102A64D: mov dword ptr [ebp - 0x24], esi */
    eax = MEM32(eax + 0x4); /* 0x1102A650: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1102A653: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x1102A657: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102A660; /* 0x1102A659: je 0x1102a660 */
L_1102A65B:
    eax = MEM32(ecx); /* 0x1102A65B: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1102A65D: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_1102A660:
    PUSH32(esp, 1); /* 0x1102A660: push 1 */
    ecx = esi; /* 0x1102A662: mov ecx, esi */
    MEM32(ebp + (-0x4)) = edi; /* 0x1102A664: mov dword ptr [ebp - 4], edi */
    RECOMP_CALL(sub_11010810); /* 0x1102A667: call 0x11010810 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x20)) = (uint8_t)(LO8(eax)); /* 0x1102A66C: mov byte ptr [ebp - 0x20], al */
    MEM32(ebp + (-0x4)) = 1; /* 0x1102A66F: mov dword ptr [ebp - 4], 1 */
    /* test LO8(eax), LO8(eax) */ /* 0x1102A676: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102A6A9; /* 0x1102A678: je 0x1102a6a9 */
L_1102A67A:
    eax = MEM32(esi); /* 0x1102A67A: mov eax, dword ptr [esi] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1102A67C: push dword ptr [ebp + 8] */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x1102A67F: mov byte ptr [ebp - 4], 2 */
    eax = MEM32(eax + 0x4); /* 0x1102A683: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1102A686: mov ecx, dword ptr [eax + esi + 0x38] */
    RECOMP_CALL(sub_1102B35F); /* 0x1102A68A: call 0x1102b35f */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO16(eax); /* 0x1102A68F: movzx eax, ax */
    ecx = 0xFFFFu; /* 0x1102A692: mov ecx, 0xffff */
    /* cmp LO16(ecx), LO16(eax) */ /* 0x1102A697: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102A6A2; /* 0x1102A69A: jne 0x1102a6a2 */
L_1102A69C:
    ebx = MEM32(ebp + (-0x18)); /* 0x1102A69C: mov ebx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)((ebx | 4)); _flag_b = (uint32_t)((ebx | 4));
    ebx = ebx | 4; /* 0x1102A69F: or ebx, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102A6A2:
    MEM32(ebp + (-0x4)) = 1; /* 0x1102A6A2: mov dword ptr [ebp - 4], 1 */
L_1102A6A9:
    eax = MEM32(esi); /* 0x1102A6A9: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x1102A6AB: push edi */
    PUSH32(esp, ebx); /* 0x1102A6AC: push ebx */
    ecx = MEM32(eax + 0x4); /* 0x1102A6AD: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1102A6B0: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1102A6B2: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x1102A6B7: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1102A6B9: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x1102A6BD: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1102A6C0: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x1102A6C4: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102A6CD; /* 0x1102A6C6: je 0x1102a6cd */
L_1102A6C8:
    eax = MEM32(ecx); /* 0x1102A6C8: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1102A6CA: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_1102A6CD:
    eax = esi; /* 0x1102A6CD: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1102A6CF: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x1102A6D4: ret 4 */
L_1102A702:
    esi = MEM32(ebp + (-0x14)); /* 0x1102A702: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1102A705: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x1102A707: mov dword ptr [ebp - 4], 1 */
    ebx = edi; /* 0x1102A70E: mov ebx, edi */
    RECOMP_BACKEDGE();
    goto L_1102A6A9; /* 0x1102A710: jmp 0x1102a6a9 */
    { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x1102A702u: goto L_1102A702;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_1102A6D7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102A6D7u);

L_1102A6D7:
    ecx = MEM32(ebp + (-0x14)); /* 0x1102A6D7: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1102A6DA: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x1102A6DC: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x1102A6DE: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1102A6E1: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x1102A6E3: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1102A6E6: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), edi */ /* 0x1102A6E9: cmp dword ptr [edx + 0x38], edi */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102A6F1; /* 0x1102A6EC: jne 0x1102a6f1 */
L_1102A6EE:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1102A6EE: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102A6F1:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x1102A6F1: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x1102A6F4: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x1102A6F7: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102A712; /* 0x1102A6FA: jne 0x1102a712 */
L_1102A6FC:
    eax = 0x1102A702u; /* 0x1102A6FC: mov eax, 0x1102a702 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102A701: ret  */
L_1102A712:
    PUSH32(esp, edi); /* 0x1102A712: push edi */
    PUSH32(esp, edi); /* 0x1102A713: push edi */
    RECOMP_CALL(sub_1103B33A); /* 0x1102A714: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1102A719u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1102A702(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102A702u);

    goto L_1102A702;
L_1102A6A9:
    eax = MEM32(esi); /* 0x1102A6A9: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x1102A6AB: push edi */
    PUSH32(esp, ebx); /* 0x1102A6AC: push ebx */
    ecx = MEM32(eax + 0x4); /* 0x1102A6AD: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1102A6B0: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1102A6B2: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x1102A6B7: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1102A6B9: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x1102A6BD: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1102A6C0: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x1102A6C4: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102A6CD; /* 0x1102A6C6: je 0x1102a6cd */
L_1102A6C8:
    eax = MEM32(ecx); /* 0x1102A6C8: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1102A6CA: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_1102A6CD:
    eax = esi; /* 0x1102A6CD: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1102A6CF: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1102A6D4: ret 4 */
L_1102A702:
    esi = MEM32(ebp + (-0x14)); /* 0x1102A702: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1102A705: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x1102A707: mov dword ptr [ebp - 4], 1 */
    ebx = edi; /* 0x1102A70E: mov ebx, edi */
    RECOMP_BACKEDGE();
    goto L_1102A6A9; /* 0x1102A710: jmp 0x1102a6a9 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1102A71A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102A71Au);

L_1102A71A:
    PUSH32(esp, ebp); /* 0x1102A71A: push ebp */
    ebp = esp; /* 0x1102A71B: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x1102A71D: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1102A720: push esi */
    esi = MEM32(ecx + 0x38); /* 0x1102A721: mov esi, dword ptr [ecx + 0x38] */
    MEM32(ecx + 0x38) = edx; /* 0x1102A724: mov dword ptr [ecx + 0x38], edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edx);
    _cf = (edx) != 0;
    edx = (uint32_t)(-(int32_t)edx); /* 0x1102A727: neg edx */
    _flag_k = FK_CMP;
    PUSH32(esp, 0); /* 0x1102A729: push 0 */
    { uint32_t _sa = edx, _sb = edx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1102A72B: sbb edx, edx */
      edx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFCu);
    edx = edx & 0xFFFFFFFCu; /* 0x1102A72D: and edx, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x1102A730: add edx, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, edx); /* 0x1102A733: push edx */
    RECOMP_CALL(sub_1100F771); /* 0x1102A734: call 0x1100f771 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1102A739: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1102A73B: pop esi */
    ebp = POP32_VAL(esp); /* 0x1102A73C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1102A73D: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1102A740(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102A740u);
    RECOMP_EH_ENTER();

L_1102A740:
    PUSH32(esp, 0x14u); /* 0x1102A740: push 0x14 */
    eax = 0x1103EC08u; /* 0x1102A742: mov eax, 0x1103ec08 */
    RECOMP_CALL(sub_1103B3DB); /* 0x1102A747: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1102A74C: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x1102A74E: mov dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1102A751: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x20)) = esi; /* 0x1102A753: mov dword ptr [ebp - 0x20], esi */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(ebx);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) & ebx; /* 0x1102A756: and dword ptr [esi + 8], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(ebx);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & ebx; /* 0x1102A759: and dword ptr [esi + 0xc], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(esi); /* 0x1102A75C: mov eax, dword ptr [esi] */
    MEM32(ebp + (-0x18)) = ebx; /* 0x1102A75E: mov dword ptr [ebp - 0x18], ebx */
    eax = MEM32(eax + 0x4); /* 0x1102A761: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1102A764: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x1102A768: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102A771; /* 0x1102A76A: je 0x1102a771 */
L_1102A76C:
    eax = MEM32(ecx); /* 0x1102A76C: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1102A76E: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_1102A771:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1102A771: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x1102A775: mov ecx, esi */
    PUSH32(esp, 1); /* 0x1102A777: push 1 */
    RECOMP_CALL(sub_11010675); /* 0x1102A779: call 0x11010675 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x1C)) = (uint8_t)(LO8(eax)); /* 0x1102A77E: mov byte ptr [ebp - 0x1c], al */
    MEM32(ebp + (-0x4)) = 1; /* 0x1102A781: mov dword ptr [ebp - 4], 1 */
    /* test LO8(eax), LO8(eax) */ /* 0x1102A788: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102A7C1; /* 0x1102A78A: je 0x1102a7c1 */
L_1102A78C:
    eax = MEM32(esi); /* 0x1102A78C: mov eax, dword ptr [esi] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1102A78E: push dword ptr [ebp + 0x10] */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x1102A791: mov byte ptr [ebp - 4], 2 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1102A795: push dword ptr [ebp + 0xc] */
    eax = MEM32(eax + 0x4); /* 0x1102A798: mov eax, dword ptr [eax + 4] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1102A79B: push dword ptr [ebp + 8] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1102A79E: mov ecx, dword ptr [eax + esi + 0x38] */
    eax = MEM32(ecx); /* 0x1102A7A2: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x20)); /* 0x1102A7A4: call dword ptr [eax + 0x20] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) + eax; /* 0x1102A7A7: add dword ptr [esi + 8], eax */
    _flag_k = FK_ADD;
    { uint32_t _aa = MEM32(esi + 0xC), _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1102A7AA: adc dword ptr [esi + 0xc], edx */
      MEM32(esi + 0xC) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    /* cmp eax, MEM32(ebp + 0xC) */ /* 0x1102A7AD: cmp eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102A7B7; /* 0x1102A7B0: jne 0x1102a7b7 */
L_1102A7B2:
    /* cmp edx, MEM32(ebp + 0x10) */ /* 0x1102A7B2: cmp edx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102A7BA; /* 0x1102A7B5: je 0x1102a7ba */
L_1102A7B7:
    PUSH32(esp, 3); /* 0x1102A7B7: push 3 */
    ebx = POP32_VAL(esp); /* 0x1102A7B9: pop ebx */
L_1102A7BA:
    MEM32(ebp + (-0x4)) = 1; /* 0x1102A7BA: mov dword ptr [ebp - 4], 1 */
L_1102A7C1:
    eax = MEM32(esi); /* 0x1102A7C1: mov eax, dword ptr [esi] */
    PUSH32(esp, 0); /* 0x1102A7C3: push 0 */
    PUSH32(esp, ebx); /* 0x1102A7C5: push ebx */
    ecx = MEM32(eax + 0x4); /* 0x1102A7C6: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1102A7C9: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1102A7CB: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x1102A7D0: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1102A7D2: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x1102A7D6: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1102A7D9: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x1102A7DD: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102A7E6; /* 0x1102A7DF: je 0x1102a7e6 */
L_1102A7E1:
    eax = MEM32(ecx); /* 0x1102A7E1: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1102A7E3: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_1102A7E6:
    eax = esi; /* 0x1102A7E6: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1102A7E8: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x1102A7ED: ret 0xc */
L_1102A81A:
    esi = MEM32(ebp + (-0x14)); /* 0x1102A81A: mov esi, dword ptr [ebp - 0x14] */
    ebx = MEM32(ebp + (-0x18)); /* 0x1102A81D: mov ebx, dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0x4)) = 1; /* 0x1102A820: mov dword ptr [ebp - 4], 1 */
    RECOMP_BACKEDGE();
    goto L_1102A7C1; /* 0x1102A827: jmp 0x1102a7c1 */
    { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x1102A81Au: goto L_1102A81A;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_1102A7F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102A7F0u);

L_1102A7F0:
    ecx = MEM32(ebp + (-0x14)); /* 0x1102A7F0: mov ecx, dword ptr [ebp - 0x14] */
    eax = MEM32(ecx); /* 0x1102A7F3: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x1102A7F5: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1102A7F8: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x1102A7FA: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1102A7FD: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), 0 */ /* 0x1102A800: cmp dword ptr [edx + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102A809; /* 0x1102A804: jne 0x1102a809 */
L_1102A806:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1102A806: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102A809:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x1102A809: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x1102A80C: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x1102A80F: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102A829; /* 0x1102A812: jne 0x1102a829 */
L_1102A814:
    eax = 0x1102A81Au; /* 0x1102A814: mov eax, 0x1102a81a */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102A819: ret  */
L_1102A829:
    PUSH32(esp, 0); /* 0x1102A829: push 0 */
    PUSH32(esp, 0); /* 0x1102A82B: push 0 */
    RECOMP_CALL(sub_1103B33A); /* 0x1102A82D: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1102A832u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1102A81A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102A81Au);

    goto L_1102A81A;
L_1102A7C1:
    eax = MEM32(esi); /* 0x1102A7C1: mov eax, dword ptr [esi] */
    PUSH32(esp, 0); /* 0x1102A7C3: push 0 */
    PUSH32(esp, ebx); /* 0x1102A7C5: push ebx */
    ecx = MEM32(eax + 0x4); /* 0x1102A7C6: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1102A7C9: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1102A7CB: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x1102A7D0: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1102A7D2: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x1102A7D6: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1102A7D9: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x1102A7DD: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102A7E6; /* 0x1102A7DF: je 0x1102a7e6 */
L_1102A7E1:
    eax = MEM32(ecx); /* 0x1102A7E1: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1102A7E3: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_1102A7E6:
    eax = esi; /* 0x1102A7E6: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1102A7E8: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1102A7ED: ret 0xc */
L_1102A81A:
    esi = MEM32(ebp + (-0x14)); /* 0x1102A81A: mov esi, dword ptr [ebp - 0x14] */
    ebx = MEM32(ebp + (-0x18)); /* 0x1102A81D: mov ebx, dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0x4)) = 1; /* 0x1102A820: mov dword ptr [ebp - 4], 1 */
    RECOMP_BACKEDGE();
    goto L_1102A7C1; /* 0x1102A827: jmp 0x1102a7c1 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1102A833(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102A833u);
    RECOMP_EH_ENTER();

L_1102A833:
    PUSH32(esp, 0x14u); /* 0x1102A833: push 0x14 */
    eax = 0x1103EC33u; /* 0x1102A835: mov eax, 0x1103ec33 */
    RECOMP_CALL(sub_1103B3DB); /* 0x1102A83A: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1102A83F: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x1102A841: mov dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1102A844: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x20)) = esi; /* 0x1102A846: mov dword ptr [ebp - 0x20], esi */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(ebx);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) & ebx; /* 0x1102A849: and dword ptr [esi + 8], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(ebx);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & ebx; /* 0x1102A84C: and dword ptr [esi + 0xc], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(esi); /* 0x1102A84F: mov eax, dword ptr [esi] */
    MEM32(ebp + (-0x18)) = ebx; /* 0x1102A851: mov dword ptr [ebp - 0x18], ebx */
    eax = MEM32(eax + 0x4); /* 0x1102A854: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1102A857: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x1102A85B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102A864; /* 0x1102A85D: je 0x1102a864 */
L_1102A85F:
    eax = MEM32(ecx); /* 0x1102A85F: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1102A861: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_1102A864:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1102A864: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x1102A868: mov ecx, esi */
    PUSH32(esp, 1); /* 0x1102A86A: push 1 */
    RECOMP_CALL(sub_11010989); /* 0x1102A86C: call 0x11010989 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x1C)) = (uint8_t)(LO8(eax)); /* 0x1102A871: mov byte ptr [ebp - 0x1c], al */
    MEM32(ebp + (-0x4)) = 1; /* 0x1102A874: mov dword ptr [ebp - 4], 1 */
    /* test LO8(eax), LO8(eax) */ /* 0x1102A87B: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102A8B4; /* 0x1102A87D: je 0x1102a8b4 */
L_1102A87F:
    eax = MEM32(esi); /* 0x1102A87F: mov eax, dword ptr [esi] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1102A881: push dword ptr [ebp + 0x10] */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x1102A884: mov byte ptr [ebp - 4], 2 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1102A888: push dword ptr [ebp + 0xc] */
    eax = MEM32(eax + 0x4); /* 0x1102A88B: mov eax, dword ptr [eax + 4] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1102A88E: push dword ptr [ebp + 8] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1102A891: mov ecx, dword ptr [eax + esi + 0x38] */
    eax = MEM32(ecx); /* 0x1102A895: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x20)); /* 0x1102A897: call dword ptr [eax + 0x20] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) + eax; /* 0x1102A89A: add dword ptr [esi + 8], eax */
    _flag_k = FK_ADD;
    { uint32_t _aa = MEM32(esi + 0xC), _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1102A89D: adc dword ptr [esi + 0xc], edx */
      MEM32(esi + 0xC) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    /* cmp eax, MEM32(ebp + 0xC) */ /* 0x1102A8A0: cmp eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102A8AA; /* 0x1102A8A3: jne 0x1102a8aa */
L_1102A8A5:
    /* cmp edx, MEM32(ebp + 0x10) */ /* 0x1102A8A5: cmp edx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102A8AD; /* 0x1102A8A8: je 0x1102a8ad */
L_1102A8AA:
    PUSH32(esp, 3); /* 0x1102A8AA: push 3 */
    ebx = POP32_VAL(esp); /* 0x1102A8AC: pop ebx */
L_1102A8AD:
    MEM32(ebp + (-0x4)) = 1; /* 0x1102A8AD: mov dword ptr [ebp - 4], 1 */
L_1102A8B4:
    eax = MEM32(esi); /* 0x1102A8B4: mov eax, dword ptr [esi] */
    PUSH32(esp, 0); /* 0x1102A8B6: push 0 */
    PUSH32(esp, ebx); /* 0x1102A8B8: push ebx */
    ecx = MEM32(eax + 0x4); /* 0x1102A8B9: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1102A8BC: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1102A8BE: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x1102A8C3: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1102A8C5: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x1102A8C9: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1102A8CC: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x1102A8D0: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102A8D9; /* 0x1102A8D2: je 0x1102a8d9 */
L_1102A8D4:
    eax = MEM32(ecx); /* 0x1102A8D4: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1102A8D6: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_1102A8D9:
    eax = esi; /* 0x1102A8D9: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1102A8DB: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x1102A8E0: ret 0xc */
L_1102A90D:
    esi = MEM32(ebp + (-0x14)); /* 0x1102A90D: mov esi, dword ptr [ebp - 0x14] */
    ebx = MEM32(ebp + (-0x18)); /* 0x1102A910: mov ebx, dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0x4)) = 1; /* 0x1102A913: mov dword ptr [ebp - 4], 1 */
    RECOMP_BACKEDGE();
    goto L_1102A8B4; /* 0x1102A91A: jmp 0x1102a8b4 */
    { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x1102A90Du: goto L_1102A90D;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_1102A8E3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102A8E3u);

L_1102A8E3:
    ecx = MEM32(ebp + (-0x14)); /* 0x1102A8E3: mov ecx, dword ptr [ebp - 0x14] */
    eax = MEM32(ecx); /* 0x1102A8E6: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x1102A8E8: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1102A8EB: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x1102A8ED: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1102A8F0: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), 0 */ /* 0x1102A8F3: cmp dword ptr [edx + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102A8FC; /* 0x1102A8F7: jne 0x1102a8fc */
L_1102A8F9:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1102A8F9: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102A8FC:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x1102A8FC: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x1102A8FF: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x1102A902: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102A91C; /* 0x1102A905: jne 0x1102a91c */
L_1102A907:
    eax = 0x1102A90Du; /* 0x1102A907: mov eax, 0x1102a90d */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102A90C: ret  */
L_1102A91C:
    PUSH32(esp, 0); /* 0x1102A91C: push 0 */
    PUSH32(esp, 0); /* 0x1102A91E: push 0 */
    RECOMP_CALL(sub_1103B33A); /* 0x1102A920: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1102A925u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1102A90D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102A90Du);

    goto L_1102A90D;
L_1102A8B4:
    eax = MEM32(esi); /* 0x1102A8B4: mov eax, dword ptr [esi] */
    PUSH32(esp, 0); /* 0x1102A8B6: push 0 */
    PUSH32(esp, ebx); /* 0x1102A8B8: push ebx */
    ecx = MEM32(eax + 0x4); /* 0x1102A8B9: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1102A8BC: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1102A8BE: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x1102A8C3: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1102A8C5: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x1102A8C9: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1102A8CC: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x1102A8D0: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102A8D9; /* 0x1102A8D2: je 0x1102a8d9 */
L_1102A8D4:
    eax = MEM32(ecx); /* 0x1102A8D4: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1102A8D6: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_1102A8D9:
    eax = esi; /* 0x1102A8D9: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1102A8DB: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1102A8E0: ret 0xc */
L_1102A90D:
    esi = MEM32(ebp + (-0x14)); /* 0x1102A90D: mov esi, dword ptr [ebp - 0x14] */
    ebx = MEM32(ebp + (-0x18)); /* 0x1102A910: mov ebx, dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0x4)) = 1; /* 0x1102A913: mov dword ptr [ebp - 4], 1 */
    RECOMP_BACKEDGE();
    goto L_1102A8B4; /* 0x1102A91A: jmp 0x1102a8b4 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1102A926(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102A926u);
    RECOMP_EH_ENTER();

L_1102A926:
    PUSH32(esp, 0x14u); /* 0x1102A926: push 0x14 */
    eax = 0x1103EC5Eu; /* 0x1102A928: mov eax, 0x1103ec5e */
    RECOMP_CALL(sub_1103B3DB); /* 0x1102A92D: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1102A932: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x1102A934: mov dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1102A937: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x20)) = esi; /* 0x1102A939: mov dword ptr [ebp - 0x20], esi */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(ebx);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) & ebx; /* 0x1102A93C: and dword ptr [esi + 8], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(ebx);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & ebx; /* 0x1102A93F: and dword ptr [esi + 0xc], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(esi); /* 0x1102A942: mov eax, dword ptr [esi] */
    MEM32(ebp + (-0x18)) = ebx; /* 0x1102A944: mov dword ptr [ebp - 0x18], ebx */
    eax = MEM32(eax + 0x4); /* 0x1102A947: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1102A94A: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x1102A94E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102A957; /* 0x1102A950: je 0x1102a957 */
L_1102A952:
    eax = MEM32(ecx); /* 0x1102A952: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1102A954: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_1102A957:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1102A957: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x1102A95B: mov ecx, esi */
    PUSH32(esp, 1); /* 0x1102A95D: push 1 */
    RECOMP_CALL(sub_11010810); /* 0x1102A95F: call 0x11010810 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x1C)) = (uint8_t)(LO8(eax)); /* 0x1102A964: mov byte ptr [ebp - 0x1c], al */
    MEM32(ebp + (-0x4)) = 1; /* 0x1102A967: mov dword ptr [ebp - 4], 1 */
    /* test LO8(eax), LO8(eax) */ /* 0x1102A96E: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102A9A7; /* 0x1102A970: je 0x1102a9a7 */
L_1102A972:
    eax = MEM32(esi); /* 0x1102A972: mov eax, dword ptr [esi] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1102A974: push dword ptr [ebp + 0x10] */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x1102A977: mov byte ptr [ebp - 4], 2 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1102A97B: push dword ptr [ebp + 0xc] */
    eax = MEM32(eax + 0x4); /* 0x1102A97E: mov eax, dword ptr [eax + 4] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1102A981: push dword ptr [ebp + 8] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1102A984: mov ecx, dword ptr [eax + esi + 0x38] */
    eax = MEM32(ecx); /* 0x1102A988: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x20)); /* 0x1102A98A: call dword ptr [eax + 0x20] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) + eax; /* 0x1102A98D: add dword ptr [esi + 8], eax */
    _flag_k = FK_ADD;
    { uint32_t _aa = MEM32(esi + 0xC), _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1102A990: adc dword ptr [esi + 0xc], edx */
      MEM32(esi + 0xC) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    /* cmp eax, MEM32(ebp + 0xC) */ /* 0x1102A993: cmp eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102A99D; /* 0x1102A996: jne 0x1102a99d */
L_1102A998:
    /* cmp edx, MEM32(ebp + 0x10) */ /* 0x1102A998: cmp edx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102A9A0; /* 0x1102A99B: je 0x1102a9a0 */
L_1102A99D:
    PUSH32(esp, 3); /* 0x1102A99D: push 3 */
    ebx = POP32_VAL(esp); /* 0x1102A99F: pop ebx */
L_1102A9A0:
    MEM32(ebp + (-0x4)) = 1; /* 0x1102A9A0: mov dword ptr [ebp - 4], 1 */
L_1102A9A7:
    eax = MEM32(esi); /* 0x1102A9A7: mov eax, dword ptr [esi] */
    PUSH32(esp, 0); /* 0x1102A9A9: push 0 */
    PUSH32(esp, ebx); /* 0x1102A9AB: push ebx */
    ecx = MEM32(eax + 0x4); /* 0x1102A9AC: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1102A9AF: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1102A9B1: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x1102A9B6: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1102A9B8: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x1102A9BC: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1102A9BF: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x1102A9C3: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102A9CC; /* 0x1102A9C5: je 0x1102a9cc */
L_1102A9C7:
    eax = MEM32(ecx); /* 0x1102A9C7: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1102A9C9: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_1102A9CC:
    eax = esi; /* 0x1102A9CC: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1102A9CE: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x1102A9D3: ret 0xc */
L_1102AA00:
    esi = MEM32(ebp + (-0x14)); /* 0x1102AA00: mov esi, dword ptr [ebp - 0x14] */
    ebx = MEM32(ebp + (-0x18)); /* 0x1102AA03: mov ebx, dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0x4)) = 1; /* 0x1102AA06: mov dword ptr [ebp - 4], 1 */
    RECOMP_BACKEDGE();
    goto L_1102A9A7; /* 0x1102AA0D: jmp 0x1102a9a7 */
    { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x1102AA00u: goto L_1102AA00;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_1102A9D6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102A9D6u);

L_1102A9D6:
    ecx = MEM32(ebp + (-0x14)); /* 0x1102A9D6: mov ecx, dword ptr [ebp - 0x14] */
    eax = MEM32(ecx); /* 0x1102A9D9: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x1102A9DB: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1102A9DE: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x1102A9E0: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1102A9E3: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), 0 */ /* 0x1102A9E6: cmp dword ptr [edx + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102A9EF; /* 0x1102A9EA: jne 0x1102a9ef */
L_1102A9EC:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1102A9EC: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102A9EF:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x1102A9EF: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x1102A9F2: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x1102A9F5: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102AA0F; /* 0x1102A9F8: jne 0x1102aa0f */
L_1102A9FA:
    eax = 0x1102AA00u; /* 0x1102A9FA: mov eax, 0x1102aa00 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102A9FF: ret  */
L_1102AA0F:
    PUSH32(esp, 0); /* 0x1102AA0F: push 0 */
    PUSH32(esp, 0); /* 0x1102AA11: push 0 */
    RECOMP_CALL(sub_1103B33A); /* 0x1102AA13: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1102AA18u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1102AA00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102AA00u);

    goto L_1102AA00;
L_1102A9A7:
    eax = MEM32(esi); /* 0x1102A9A7: mov eax, dword ptr [esi] */
    PUSH32(esp, 0); /* 0x1102A9A9: push 0 */
    PUSH32(esp, ebx); /* 0x1102A9AB: push ebx */
    ecx = MEM32(eax + 0x4); /* 0x1102A9AC: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1102A9AF: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1102A9B1: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x1102A9B6: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1102A9B8: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x1102A9BC: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1102A9BF: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x1102A9C3: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102A9CC; /* 0x1102A9C5: je 0x1102a9cc */
L_1102A9C7:
    eax = MEM32(ecx); /* 0x1102A9C7: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1102A9C9: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_1102A9CC:
    eax = esi; /* 0x1102A9CC: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1102A9CE: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1102A9D3: ret 0xc */
L_1102AA00:
    esi = MEM32(ebp + (-0x14)); /* 0x1102AA00: mov esi, dword ptr [ebp - 0x14] */
    ebx = MEM32(ebp + (-0x18)); /* 0x1102AA03: mov ebx, dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0x4)) = 1; /* 0x1102AA06: mov dword ptr [ebp - 4], 1 */
    RECOMP_BACKEDGE();
    goto L_1102A9A7; /* 0x1102AA0D: jmp 0x1102a9a7 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1102AA19(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102AA19u);

L_1102AA19:
    PUSH32(esp, 8); /* 0x1102AA19: push 8 */
    eax = 0x1103ECD7u; /* 0x1102AA1B: mov eax, 0x1103ecd7 */
    RECOMP_CALL(sub_1103B372); /* 0x1102AA20: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1102AA25: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1102AA27: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = esi; /* 0x1102AA29: mov dword ptr [ebp - 0x14], esi */
    MEM32(esi + 0x8) = ebx; /* 0x1102AA2C: mov dword ptr [esi + 8], ebx */
    edi = ebx; /* 0x1102AA2F: mov edi, ebx */
    MEM32(esi + 0xC) = ebx; /* 0x1102AA31: mov dword ptr [esi + 0xc], ebx */
    eax = MEM32(esi); /* 0x1102AA34: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x1102AA36: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1102AA39: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x1102AA3D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102AA46; /* 0x1102AA3F: je 0x1102aa46 */
L_1102AA41:
    eax = MEM32(ecx); /* 0x1102AA41: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1102AA43: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_1102AA46:
    PUSH32(esp, 1); /* 0x1102AA46: push 1 */
    ecx = esi; /* 0x1102AA48: mov ecx, esi */
    MEM32(ebp + (-0x4)) = ebx; /* 0x1102AA4A: mov dword ptr [ebp - 4], ebx */
    RECOMP_CALL(sub_11010675); /* 0x1102AA4D: call 0x11010675 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x10)) = (uint8_t)(LO8(eax)); /* 0x1102AA52: mov byte ptr [ebp - 0x10], al */
    MEM32(ebp + (-0x4)) = 1; /* 0x1102AA55: mov dword ptr [ebp - 4], 1 */
    /* test LO8(eax), LO8(eax) */ /* 0x1102AA5C: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102AA65; /* 0x1102AA5E: jne 0x1102aa65 */
L_1102AA60:
    PUSH32(esp, 2); /* 0x1102AA60: push 2 */
    edi = POP32_VAL(esp); /* 0x1102AA62: pop edi */
    goto L_1102AAAA; /* 0x1102AA63: jmp 0x1102aaaa */
L_1102AA65:
    eax = MEM32(esi); /* 0x1102AA65: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x1102AA67: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1102AA6A: mov ecx, dword ptr [eax + esi + 0x38] */
    RECOMP_CALL(sub_110296F6); /* 0x1102AA6E: call 0x110296f6 */
    RECOMP_FLAGS_IN();
    /* cmp edx, ebx */ /* 0x1102AA73: cmp edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1102AA8C; /* 0x1102AA75: jg 0x1102aa8c */
L_1102AA77:
    if (CMP_L(_flag_a, _flag_b)) goto L_1102AA7D; /* 0x1102AA77: jl 0x1102aa7d */
L_1102AA79:
    /* cmp eax, ebx */ /* 0x1102AA79: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1102AA82; /* 0x1102AA7B: jae 0x1102aa82 */
L_1102AA7D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1102AA7D: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1102AA7F: inc edi */
    _flag_k = FK_INC;
    goto L_1102AAAA; /* 0x1102AA80: jmp 0x1102aaaa */
L_1102AA82:
    /* cmp edx, ebx */ /* 0x1102AA82: cmp edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1102AAAA; /* 0x1102AA84: jl 0x1102aaaa */
L_1102AA86:
    if (CMP_G(_flag_a, _flag_b)) goto L_1102AA8C; /* 0x1102AA86: jg 0x1102aa8c */
L_1102AA88:
    /* cmp eax, ebx */ /* 0x1102AA88: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1102AAAA; /* 0x1102AA8A: jbe 0x1102aaaa */
L_1102AA8C:
    /* cmp edx, MEM32(ebp + 0x10) */ /* 0x1102AA8C: cmp edx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1102AA98; /* 0x1102AA8F: jg 0x1102aa98 */
L_1102AA91:
    if (CMP_L(_flag_a, _flag_b)) goto L_1102AA9E; /* 0x1102AA91: jl 0x1102aa9e */
L_1102AA93:
    /* cmp eax, MEM32(ebp + 0xC) */ /* 0x1102AA93: cmp eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1102AA9E; /* 0x1102AA96: jb 0x1102aa9e */
L_1102AA98:
    eax = MEM32(ebp + 0xC); /* 0x1102AA98: mov eax, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x10); /* 0x1102AA9B: mov edx, dword ptr [ebp + 0x10] */
L_1102AA9E:
    PUSH32(esp, edx); /* 0x1102AA9E: push edx */
    PUSH32(esp, eax); /* 0x1102AA9F: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1102AAA0: push dword ptr [ebp + 8] */
    ecx = esi; /* 0x1102AAA3: mov ecx, esi */
    RECOMP_CALL(sub_1102A740); /* 0x1102AAA5: call 0x1102a740 */
    RECOMP_FLAGS_IN();
L_1102AAAA:
    eax = MEM32(esi); /* 0x1102AAAA: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x1102AAAC: push ebx */
    PUSH32(esp, edi); /* 0x1102AAAD: push edi */
    ecx = MEM32(eax + 0x4); /* 0x1102AAAE: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1102AAB1: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1102AAB3: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x1102AAB8: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1102AABA: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(esi + 0x8); /* 0x1102AABE: mov edi, dword ptr [esi + 8] */
    ebx = MEM32(esi + 0xC); /* 0x1102AAC1: mov ebx, dword ptr [esi + 0xc] */
    ecx = MEM32(eax + 0x4); /* 0x1102AAC4: mov ecx, dword ptr [eax + 4] */
    ecx = MEM32(ecx + esi + 0x38); /* 0x1102AAC7: mov ecx, dword ptr [ecx + esi + 0x38] */
    /* test ecx, ecx */ /* 0x1102AACB: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102AAD4; /* 0x1102AACD: je 0x1102aad4 */
L_1102AACF:
    esi = MEM32(ecx); /* 0x1102AACF: mov esi, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(esi + 0x8)); /* 0x1102AAD1: call dword ptr [esi + 8] */
    RECOMP_FLAGS_IN();
L_1102AAD4:
    eax = edi; /* 0x1102AAD4: mov eax, edi */
    edx = ebx; /* 0x1102AAD6: mov edx, ebx */
    RECOMP_CALL(sub_1103B340); /* 0x1102AAD8: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1102AADD: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1102AAE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102AAE0u);

L_1102AAE0:
    PUSH32(esp, 8); /* 0x1102AAE0: push 8 */
    eax = 0x1103ECD7u; /* 0x1102AAE2: mov eax, 0x1103ecd7 */
    RECOMP_CALL(sub_1103B372); /* 0x1102AAE7: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1102AAEC: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1102AAEE: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = esi; /* 0x1102AAF0: mov dword ptr [ebp - 0x14], esi */
    MEM32(esi + 0x8) = ebx; /* 0x1102AAF3: mov dword ptr [esi + 8], ebx */
    edi = ebx; /* 0x1102AAF6: mov edi, ebx */
    MEM32(esi + 0xC) = ebx; /* 0x1102AAF8: mov dword ptr [esi + 0xc], ebx */
    eax = MEM32(esi); /* 0x1102AAFB: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x1102AAFD: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1102AB00: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x1102AB04: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102AB0D; /* 0x1102AB06: je 0x1102ab0d */
L_1102AB08:
    eax = MEM32(ecx); /* 0x1102AB08: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1102AB0A: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_1102AB0D:
    PUSH32(esp, 1); /* 0x1102AB0D: push 1 */
    ecx = esi; /* 0x1102AB0F: mov ecx, esi */
    MEM32(ebp + (-0x4)) = ebx; /* 0x1102AB11: mov dword ptr [ebp - 4], ebx */
    RECOMP_CALL(sub_11010989); /* 0x1102AB14: call 0x11010989 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x10)) = (uint8_t)(LO8(eax)); /* 0x1102AB19: mov byte ptr [ebp - 0x10], al */
    MEM32(ebp + (-0x4)) = 1; /* 0x1102AB1C: mov dword ptr [ebp - 4], 1 */
    /* test LO8(eax), LO8(eax) */ /* 0x1102AB23: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102AB2C; /* 0x1102AB25: jne 0x1102ab2c */
L_1102AB27:
    PUSH32(esp, 2); /* 0x1102AB27: push 2 */
    edi = POP32_VAL(esp); /* 0x1102AB29: pop edi */
    goto L_1102AB71; /* 0x1102AB2A: jmp 0x1102ab71 */
L_1102AB2C:
    eax = MEM32(esi); /* 0x1102AB2C: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x1102AB2E: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1102AB31: mov ecx, dword ptr [eax + esi + 0x38] */
    RECOMP_CALL(sub_110296F6); /* 0x1102AB35: call 0x110296f6 */
    RECOMP_FLAGS_IN();
    /* cmp edx, ebx */ /* 0x1102AB3A: cmp edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1102AB53; /* 0x1102AB3C: jg 0x1102ab53 */
L_1102AB3E:
    if (CMP_L(_flag_a, _flag_b)) goto L_1102AB44; /* 0x1102AB3E: jl 0x1102ab44 */
L_1102AB40:
    /* cmp eax, ebx */ /* 0x1102AB40: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1102AB49; /* 0x1102AB42: jae 0x1102ab49 */
L_1102AB44:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1102AB44: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1102AB46: inc edi */
    _flag_k = FK_INC;
    goto L_1102AB71; /* 0x1102AB47: jmp 0x1102ab71 */
L_1102AB49:
    /* cmp edx, ebx */ /* 0x1102AB49: cmp edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1102AB71; /* 0x1102AB4B: jl 0x1102ab71 */
L_1102AB4D:
    if (CMP_G(_flag_a, _flag_b)) goto L_1102AB53; /* 0x1102AB4D: jg 0x1102ab53 */
L_1102AB4F:
    /* cmp eax, ebx */ /* 0x1102AB4F: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1102AB71; /* 0x1102AB51: jbe 0x1102ab71 */
L_1102AB53:
    /* cmp edx, MEM32(ebp + 0x10) */ /* 0x1102AB53: cmp edx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1102AB5F; /* 0x1102AB56: jg 0x1102ab5f */
L_1102AB58:
    if (CMP_L(_flag_a, _flag_b)) goto L_1102AB65; /* 0x1102AB58: jl 0x1102ab65 */
L_1102AB5A:
    /* cmp eax, MEM32(ebp + 0xC) */ /* 0x1102AB5A: cmp eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1102AB65; /* 0x1102AB5D: jb 0x1102ab65 */
L_1102AB5F:
    eax = MEM32(ebp + 0xC); /* 0x1102AB5F: mov eax, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x10); /* 0x1102AB62: mov edx, dword ptr [ebp + 0x10] */
L_1102AB65:
    PUSH32(esp, edx); /* 0x1102AB65: push edx */
    PUSH32(esp, eax); /* 0x1102AB66: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1102AB67: push dword ptr [ebp + 8] */
    ecx = esi; /* 0x1102AB6A: mov ecx, esi */
    RECOMP_CALL(sub_1102A833); /* 0x1102AB6C: call 0x1102a833 */
    RECOMP_FLAGS_IN();
L_1102AB71:
    eax = MEM32(esi); /* 0x1102AB71: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x1102AB73: push ebx */
    PUSH32(esp, edi); /* 0x1102AB74: push edi */
    ecx = MEM32(eax + 0x4); /* 0x1102AB75: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1102AB78: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1102AB7A: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x1102AB7F: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1102AB81: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(esi + 0x8); /* 0x1102AB85: mov edi, dword ptr [esi + 8] */
    ebx = MEM32(esi + 0xC); /* 0x1102AB88: mov ebx, dword ptr [esi + 0xc] */
    ecx = MEM32(eax + 0x4); /* 0x1102AB8B: mov ecx, dword ptr [eax + 4] */
    ecx = MEM32(ecx + esi + 0x38); /* 0x1102AB8E: mov ecx, dword ptr [ecx + esi + 0x38] */
    /* test ecx, ecx */ /* 0x1102AB92: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102AB9B; /* 0x1102AB94: je 0x1102ab9b */
L_1102AB96:
    esi = MEM32(ecx); /* 0x1102AB96: mov esi, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(esi + 0x8)); /* 0x1102AB98: call dword ptr [esi + 8] */
    RECOMP_FLAGS_IN();
L_1102AB9B:
    eax = edi; /* 0x1102AB9B: mov eax, edi */
    edx = ebx; /* 0x1102AB9D: mov edx, ebx */
    RECOMP_CALL(sub_1103B340); /* 0x1102AB9F: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1102ABA4: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1102ABA7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102ABA7u);

L_1102ABA7:
    PUSH32(esp, 8); /* 0x1102ABA7: push 8 */
    eax = 0x1103ECD7u; /* 0x1102ABA9: mov eax, 0x1103ecd7 */
    RECOMP_CALL(sub_1103B372); /* 0x1102ABAE: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1102ABB3: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1102ABB5: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = esi; /* 0x1102ABB7: mov dword ptr [ebp - 0x14], esi */
    MEM32(esi + 0x8) = ebx; /* 0x1102ABBA: mov dword ptr [esi + 8], ebx */
    edi = ebx; /* 0x1102ABBD: mov edi, ebx */
    MEM32(esi + 0xC) = ebx; /* 0x1102ABBF: mov dword ptr [esi + 0xc], ebx */
    eax = MEM32(esi); /* 0x1102ABC2: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x1102ABC4: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1102ABC7: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x1102ABCB: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102ABD4; /* 0x1102ABCD: je 0x1102abd4 */
L_1102ABCF:
    eax = MEM32(ecx); /* 0x1102ABCF: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1102ABD1: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_1102ABD4:
    PUSH32(esp, 1); /* 0x1102ABD4: push 1 */
    ecx = esi; /* 0x1102ABD6: mov ecx, esi */
    MEM32(ebp + (-0x4)) = ebx; /* 0x1102ABD8: mov dword ptr [ebp - 4], ebx */
    RECOMP_CALL(sub_11010810); /* 0x1102ABDB: call 0x11010810 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x10)) = (uint8_t)(LO8(eax)); /* 0x1102ABE0: mov byte ptr [ebp - 0x10], al */
    MEM32(ebp + (-0x4)) = 1; /* 0x1102ABE3: mov dword ptr [ebp - 4], 1 */
    /* test LO8(eax), LO8(eax) */ /* 0x1102ABEA: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102ABF3; /* 0x1102ABEC: jne 0x1102abf3 */
L_1102ABEE:
    PUSH32(esp, 2); /* 0x1102ABEE: push 2 */
    edi = POP32_VAL(esp); /* 0x1102ABF0: pop edi */
    goto L_1102AC38; /* 0x1102ABF1: jmp 0x1102ac38 */
L_1102ABF3:
    eax = MEM32(esi); /* 0x1102ABF3: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x1102ABF5: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1102ABF8: mov ecx, dword ptr [eax + esi + 0x38] */
    RECOMP_CALL(sub_110296F6); /* 0x1102ABFC: call 0x110296f6 */
    RECOMP_FLAGS_IN();
    /* cmp edx, ebx */ /* 0x1102AC01: cmp edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1102AC1A; /* 0x1102AC03: jg 0x1102ac1a */
L_1102AC05:
    if (CMP_L(_flag_a, _flag_b)) goto L_1102AC0B; /* 0x1102AC05: jl 0x1102ac0b */
L_1102AC07:
    /* cmp eax, ebx */ /* 0x1102AC07: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1102AC10; /* 0x1102AC09: jae 0x1102ac10 */
L_1102AC0B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1102AC0B: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1102AC0D: inc edi */
    _flag_k = FK_INC;
    goto L_1102AC38; /* 0x1102AC0E: jmp 0x1102ac38 */
L_1102AC10:
    /* cmp edx, ebx */ /* 0x1102AC10: cmp edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1102AC38; /* 0x1102AC12: jl 0x1102ac38 */
L_1102AC14:
    if (CMP_G(_flag_a, _flag_b)) goto L_1102AC1A; /* 0x1102AC14: jg 0x1102ac1a */
L_1102AC16:
    /* cmp eax, ebx */ /* 0x1102AC16: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1102AC38; /* 0x1102AC18: jbe 0x1102ac38 */
L_1102AC1A:
    /* cmp edx, MEM32(ebp + 0x10) */ /* 0x1102AC1A: cmp edx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1102AC26; /* 0x1102AC1D: jg 0x1102ac26 */
L_1102AC1F:
    if (CMP_L(_flag_a, _flag_b)) goto L_1102AC2C; /* 0x1102AC1F: jl 0x1102ac2c */
L_1102AC21:
    /* cmp eax, MEM32(ebp + 0xC) */ /* 0x1102AC21: cmp eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1102AC2C; /* 0x1102AC24: jb 0x1102ac2c */
L_1102AC26:
    eax = MEM32(ebp + 0xC); /* 0x1102AC26: mov eax, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x10); /* 0x1102AC29: mov edx, dword ptr [ebp + 0x10] */
L_1102AC2C:
    PUSH32(esp, edx); /* 0x1102AC2C: push edx */
    PUSH32(esp, eax); /* 0x1102AC2D: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1102AC2E: push dword ptr [ebp + 8] */
    ecx = esi; /* 0x1102AC31: mov ecx, esi */
    RECOMP_CALL(sub_1102A926); /* 0x1102AC33: call 0x1102a926 */
    RECOMP_FLAGS_IN();
L_1102AC38:
    eax = MEM32(esi); /* 0x1102AC38: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x1102AC3A: push ebx */
    PUSH32(esp, edi); /* 0x1102AC3B: push edi */
    ecx = MEM32(eax + 0x4); /* 0x1102AC3C: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1102AC3F: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1102AC41: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x1102AC46: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1102AC48: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(esi + 0x8); /* 0x1102AC4C: mov edi, dword ptr [esi + 8] */
    ebx = MEM32(esi + 0xC); /* 0x1102AC4F: mov ebx, dword ptr [esi + 0xc] */
    ecx = MEM32(eax + 0x4); /* 0x1102AC52: mov ecx, dword ptr [eax + 4] */
    ecx = MEM32(ecx + esi + 0x38); /* 0x1102AC55: mov ecx, dword ptr [ecx + esi + 0x38] */
    /* test ecx, ecx */ /* 0x1102AC59: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102AC62; /* 0x1102AC5B: je 0x1102ac62 */
L_1102AC5D:
    esi = MEM32(ecx); /* 0x1102AC5D: mov esi, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(esi + 0x8)); /* 0x1102AC5F: call dword ptr [esi + 8] */
    RECOMP_FLAGS_IN();
L_1102AC62:
    eax = edi; /* 0x1102AC62: mov eax, edi */
    edx = ebx; /* 0x1102AC64: mov edx, ebx */
    RECOMP_CALL(sub_1103B340); /* 0x1102AC66: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1102AC6B: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1102AC6E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102AC6Eu);

L_1102AC6E:
    PUSH32(esp, 0x20u); /* 0x1102AC6E: push 0x20 */
    eax = 0x1103EC89u; /* 0x1102AC70: mov eax, 0x1103ec89 */
    RECOMP_CALL(sub_1103B372); /* 0x1102AC75: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    ebx = ecx; /* 0x1102AC7A: mov ebx, ecx */
    eax = MEM32(ebx); /* 0x1102AC7C: mov eax, dword ptr [ebx] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1102AC7E: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(eax + 0x4); /* 0x1102AC80: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ebx; /* 0x1102AC83: add ecx, ebx */
    _flag_k = FK_ADD;
    eax = MEM32(ecx + 0xC); /* 0x1102AC85: mov eax, dword ptr [ecx + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    eax = eax & 0xFFFFFFFEu; /* 0x1102AC88: and eax, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx + 0x38), esi */ /* 0x1102AC8B: cmp dword ptr [ecx + 0x38], esi */
    _flag_a = (uint32_t)(MEM32(ecx + 0x38)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102AC93; /* 0x1102AC8E: jne 0x1102ac93 */
L_1102AC90:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1102AC90: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102AC93:
    PUSH32(esp, esi); /* 0x1102AC93: push esi */
    PUSH32(esp, eax); /* 0x1102AC94: push eax */
    RECOMP_CALL(sub_1100F771); /* 0x1102AC95: call 0x1100f771 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx); /* 0x1102AC9A: mov eax, dword ptr [ebx] */
    MEM32(ebp + (-0x14)) = ebx; /* 0x1102AC9C: mov dword ptr [ebp - 0x14], ebx */
    eax = MEM32(eax + 0x4); /* 0x1102AC9F: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + ebx + 0x38); /* 0x1102ACA2: mov ecx, dword ptr [eax + ebx + 0x38] */
    /* test ecx, ecx */ /* 0x1102ACA6: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102ACAF; /* 0x1102ACA8: je 0x1102acaf */
L_1102ACAA:
    eax = MEM32(ecx); /* 0x1102ACAA: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1102ACAC: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_1102ACAF:
    MEM32(ebp + (-0x4)) = esi; /* 0x1102ACAF: mov dword ptr [ebp - 4], esi */
    ecx = ebx; /* 0x1102ACB2: mov ecx, ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1102ACB4: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1102ACB6: inc esi */
    _flag_k = FK_INC;
    PUSH32(esp, esi); /* 0x1102ACB7: push esi */
    RECOMP_CALL(sub_11010675); /* 0x1102ACB8: call 0x11010675 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x10)) = (uint8_t)(LO8(eax)); /* 0x1102ACBD: mov byte ptr [ebp - 0x10], al */
    eax = MEM32(ebx); /* 0x1102ACC0: mov eax, dword ptr [ebx] */
    MEM32(ebp + (-0x4)) = esi; /* 0x1102ACC2: mov dword ptr [ebp - 4], esi */
    eax = MEM32(eax + 0x4); /* 0x1102ACC5: mov eax, dword ptr [eax + 4] */
    /* test MEM8(eax + ebx + 0xC), 6 */ /* 0x1102ACC8: test byte ptr [eax + ebx + 0xc], 6 */
    _flag_a = (uint32_t)(MEM8(eax + ebx + 0xC)) << 24; _flag_b = (uint32_t)(6) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102AD18; /* 0x1102ACCD: jne 0x1102ad18 */
L_1102ACCF:
    eax = MEM32(eax + ebx + 0x38); /* 0x1102ACCF: mov eax, dword ptr [eax + ebx + 0x38] */
    PUSH32(esp, esi); /* 0x1102ACD3: push esi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x1102ACD4: sub esp, 0x18 */
    _flag_k = FK_CMP;
    esi = ebp + 0x8; /* 0x1102ACD7: lea esi, [ebp + 8] */
    edx = MEM32(eax); /* 0x1102ACDA: mov edx, dword ptr [eax] */
    PUSH32(esp, 6); /* 0x1102ACDC: push 6 */
    ecx = POP32_VAL(esp); /* 0x1102ACDE: pop ecx */
    edi = esp; /* 0x1102ACDF: mov edi, esp */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1102ACE1: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = ebp + (-0x2C); /* 0x1102ACE3: lea ecx, [ebp - 0x2c] */
    PUSH32(esp, ecx); /* 0x1102ACE6: push ecx */
    ecx = eax; /* 0x1102ACE7: mov ecx, eax */
    RECOMP_ICALL(MEM32(edx + 0x2C)); /* 0x1102ACE9: call dword ptr [edx + 0x2c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x2C)); /* 0x1102ACEC: mov eax, dword ptr [ebp - 0x2c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x24)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x24)); /* 0x1102ACEF: add eax, dword ptr [ebp - 0x24] */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0x28)); /* 0x1102ACF2: mov ecx, dword ptr [ebp - 0x28] */
    { uint32_t _aa = ecx, _ab = MEM32(ebp + (-0x20)), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1102ACF5: adc ecx, dword ptr [ebp - 0x20] */
      ecx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    /* cmp eax, MEM32(0x110032C8) */ /* 0x1102ACF8: cmp eax, dword ptr [0x110032c8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x110032C8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102AD18; /* 0x1102ACFE: jne 0x1102ad18 */
L_1102AD00:
    /* cmp ecx, MEM32(0x110032CC) */ /* 0x1102AD00: cmp ecx, dword ptr [0x110032cc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(0x110032CC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102AD18; /* 0x1102AD06: jne 0x1102ad18 */
L_1102AD08:
    eax = MEM32(ebx); /* 0x1102AD08: mov eax, dword ptr [ebx] */
    PUSH32(esp, 0); /* 0x1102AD0A: push 0 */
    PUSH32(esp, 2); /* 0x1102AD0C: push 2 */
    ecx = MEM32(eax + 0x4); /* 0x1102AD0E: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ebx; /* 0x1102AD11: add ecx, ebx */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1102AD13: call 0x110102f8 */
    RECOMP_FLAGS_IN();
L_1102AD18:
    eax = MEM32(ebx); /* 0x1102AD18: mov eax, dword ptr [ebx] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1102AD1A: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x1102AD1E: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + ebx + 0x38); /* 0x1102AD21: mov ecx, dword ptr [eax + ebx + 0x38] */
    /* test ecx, ecx */ /* 0x1102AD25: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102AD2E; /* 0x1102AD27: je 0x1102ad2e */
L_1102AD29:
    eax = MEM32(ecx); /* 0x1102AD29: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1102AD2B: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_1102AD2E:
    eax = ebx; /* 0x1102AD2E: mov eax, ebx */
    RECOMP_CALL(sub_1103B340); /* 0x1102AD30: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x1102AD35: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_1102AD38(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102AD38u);

L_1102AD38:
    PUSH32(esp, 0x20u); /* 0x1102AD38: push 0x20 */
    eax = 0x1103EC89u; /* 0x1102AD3A: mov eax, 0x1103ec89 */
    RECOMP_CALL(sub_1103B372); /* 0x1102AD3F: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1102AD44: mov esi, ecx */
    eax = MEM32(esi); /* 0x1102AD46: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1102AD48: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(eax + 0x4); /* 0x1102AD4A: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1102AD4D: add ecx, esi */
    _flag_k = FK_ADD;
    eax = MEM32(ecx + 0xC); /* 0x1102AD4F: mov eax, dword ptr [ecx + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    eax = eax & 0xFFFFFFFEu; /* 0x1102AD52: and eax, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx + 0x38), edi */ /* 0x1102AD55: cmp dword ptr [ecx + 0x38], edi */
    _flag_a = (uint32_t)(MEM32(ecx + 0x38)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102AD5D; /* 0x1102AD58: jne 0x1102ad5d */
L_1102AD5A:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1102AD5A: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102AD5D:
    PUSH32(esp, edi); /* 0x1102AD5D: push edi */
    PUSH32(esp, eax); /* 0x1102AD5E: push eax */
    RECOMP_CALL(sub_1100F771); /* 0x1102AD5F: call 0x1100f771 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x1102AD64: mov eax, dword ptr [esi] */
    MEM32(ebp + (-0x14)) = esi; /* 0x1102AD66: mov dword ptr [ebp - 0x14], esi */
    eax = MEM32(eax + 0x4); /* 0x1102AD69: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1102AD6C: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x1102AD70: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102AD79; /* 0x1102AD72: je 0x1102ad79 */
L_1102AD74:
    eax = MEM32(ecx); /* 0x1102AD74: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1102AD76: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_1102AD79:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1102AD79: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = edi; /* 0x1102AD7B: mov dword ptr [ebp - 4], edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1102AD7E: inc ebx */
    _flag_k = FK_INC;
    ecx = esi; /* 0x1102AD7F: mov ecx, esi */
    PUSH32(esp, ebx); /* 0x1102AD81: push ebx */
    RECOMP_CALL(sub_11010675); /* 0x1102AD82: call 0x11010675 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x10)) = (uint8_t)(LO8(eax)); /* 0x1102AD87: mov byte ptr [ebp - 0x10], al */
    eax = MEM32(esi); /* 0x1102AD8A: mov eax, dword ptr [esi] */
    MEM32(ebp + (-0x4)) = ebx; /* 0x1102AD8C: mov dword ptr [ebp - 4], ebx */
    ecx = MEM32(eax + 0x4); /* 0x1102AD8F: mov ecx, dword ptr [eax + 4] */
    /* test MEM8(ecx + esi + 0xC), 6 */ /* 0x1102AD92: test byte ptr [ecx + esi + 0xc], 6 */
    _flag_a = (uint32_t)(MEM8(ecx + esi + 0xC)) << 24; _flag_b = (uint32_t)(6) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102ADDB; /* 0x1102AD97: jne 0x1102addb */
L_1102AD99:
    ecx = MEM32(ecx + esi + 0x38); /* 0x1102AD99: mov ecx, dword ptr [ecx + esi + 0x38] */
    edx = ebp + (-0x2C); /* 0x1102AD9D: lea edx, [ebp - 0x2c] */
    PUSH32(esp, ebx); /* 0x1102ADA0: push ebx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1102ADA1: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1102ADA4: push dword ptr [ebp + 0xc] */
    eax = MEM32(ecx); /* 0x1102ADA7: mov eax, dword ptr [ecx] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1102ADA9: push dword ptr [ebp + 8] */
    PUSH32(esp, edx); /* 0x1102ADAC: push edx */
    RECOMP_ICALL(MEM32(eax + 0x28)); /* 0x1102ADAD: call dword ptr [eax + 0x28] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x2C)); /* 0x1102ADB0: mov eax, dword ptr [ebp - 0x2c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x24)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x24)); /* 0x1102ADB3: add eax, dword ptr [ebp - 0x24] */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0x28)); /* 0x1102ADB6: mov ecx, dword ptr [ebp - 0x28] */
    { uint32_t _aa = ecx, _ab = MEM32(ebp + (-0x20)), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1102ADB9: adc ecx, dword ptr [ebp - 0x20] */
      ecx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    /* cmp eax, MEM32(0x110032C8) */ /* 0x1102ADBC: cmp eax, dword ptr [0x110032c8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x110032C8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102ADDB; /* 0x1102ADC2: jne 0x1102addb */
L_1102ADC4:
    /* cmp ecx, MEM32(0x110032CC) */ /* 0x1102ADC4: cmp ecx, dword ptr [0x110032cc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(0x110032CC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102ADDB; /* 0x1102ADCA: jne 0x1102addb */
L_1102ADCC:
    eax = MEM32(esi); /* 0x1102ADCC: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x1102ADCE: push edi */
    PUSH32(esp, 2); /* 0x1102ADCF: push 2 */
    ecx = MEM32(eax + 0x4); /* 0x1102ADD1: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1102ADD4: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1102ADD6: call 0x110102f8 */
    RECOMP_FLAGS_IN();
L_1102ADDB:
    eax = MEM32(esi); /* 0x1102ADDB: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1102ADDD: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x1102ADE1: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1102ADE4: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x1102ADE8: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102ADF1; /* 0x1102ADEA: je 0x1102adf1 */
L_1102ADEC:
    eax = MEM32(ecx); /* 0x1102ADEC: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1102ADEE: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_1102ADF1:
    eax = esi; /* 0x1102ADF1: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1102ADF3: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1102ADF8: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1102ADFB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102ADFBu);

L_1102ADFB:
    PUSH32(esp, 0x20u); /* 0x1102ADFB: push 0x20 */
    eax = 0x1103EC89u; /* 0x1102ADFD: mov eax, 0x1103ec89 */
    RECOMP_CALL(sub_1103B372); /* 0x1102AE02: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    ebx = ecx; /* 0x1102AE07: mov ebx, ecx */
    eax = MEM32(ebx); /* 0x1102AE09: mov eax, dword ptr [ebx] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1102AE0B: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(eax + 0x4); /* 0x1102AE0D: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ebx; /* 0x1102AE10: add ecx, ebx */
    _flag_k = FK_ADD;
    eax = MEM32(ecx + 0xC); /* 0x1102AE12: mov eax, dword ptr [ecx + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    eax = eax & 0xFFFFFFFEu; /* 0x1102AE15: and eax, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx + 0x38), esi */ /* 0x1102AE18: cmp dword ptr [ecx + 0x38], esi */
    _flag_a = (uint32_t)(MEM32(ecx + 0x38)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102AE20; /* 0x1102AE1B: jne 0x1102ae20 */
L_1102AE1D:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1102AE1D: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102AE20:
    PUSH32(esp, esi); /* 0x1102AE20: push esi */
    PUSH32(esp, eax); /* 0x1102AE21: push eax */
    RECOMP_CALL(sub_1100F771); /* 0x1102AE22: call 0x1100f771 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx); /* 0x1102AE27: mov eax, dword ptr [ebx] */
    MEM32(ebp + (-0x14)) = ebx; /* 0x1102AE29: mov dword ptr [ebp - 0x14], ebx */
    eax = MEM32(eax + 0x4); /* 0x1102AE2C: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + ebx + 0x38); /* 0x1102AE2F: mov ecx, dword ptr [eax + ebx + 0x38] */
    /* test ecx, ecx */ /* 0x1102AE33: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102AE3C; /* 0x1102AE35: je 0x1102ae3c */
L_1102AE37:
    eax = MEM32(ecx); /* 0x1102AE37: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1102AE39: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_1102AE3C:
    MEM32(ebp + (-0x4)) = esi; /* 0x1102AE3C: mov dword ptr [ebp - 4], esi */
    ecx = ebx; /* 0x1102AE3F: mov ecx, ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1102AE41: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1102AE43: inc esi */
    _flag_k = FK_INC;
    PUSH32(esp, esi); /* 0x1102AE44: push esi */
    RECOMP_CALL(sub_11010989); /* 0x1102AE45: call 0x11010989 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x10)) = (uint8_t)(LO8(eax)); /* 0x1102AE4A: mov byte ptr [ebp - 0x10], al */
    eax = MEM32(ebx); /* 0x1102AE4D: mov eax, dword ptr [ebx] */
    MEM32(ebp + (-0x4)) = esi; /* 0x1102AE4F: mov dword ptr [ebp - 4], esi */
    eax = MEM32(eax + 0x4); /* 0x1102AE52: mov eax, dword ptr [eax + 4] */
    /* test MEM8(eax + ebx + 0xC), 6 */ /* 0x1102AE55: test byte ptr [eax + ebx + 0xc], 6 */
    _flag_a = (uint32_t)(MEM8(eax + ebx + 0xC)) << 24; _flag_b = (uint32_t)(6) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102AEA5; /* 0x1102AE5A: jne 0x1102aea5 */
L_1102AE5C:
    eax = MEM32(eax + ebx + 0x38); /* 0x1102AE5C: mov eax, dword ptr [eax + ebx + 0x38] */
    PUSH32(esp, esi); /* 0x1102AE60: push esi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x1102AE61: sub esp, 0x18 */
    _flag_k = FK_CMP;
    esi = ebp + 0x8; /* 0x1102AE64: lea esi, [ebp + 8] */
    edx = MEM32(eax); /* 0x1102AE67: mov edx, dword ptr [eax] */
    PUSH32(esp, 6); /* 0x1102AE69: push 6 */
    ecx = POP32_VAL(esp); /* 0x1102AE6B: pop ecx */
    edi = esp; /* 0x1102AE6C: mov edi, esp */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1102AE6E: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = ebp + (-0x2C); /* 0x1102AE70: lea ecx, [ebp - 0x2c] */
    PUSH32(esp, ecx); /* 0x1102AE73: push ecx */
    ecx = eax; /* 0x1102AE74: mov ecx, eax */
    RECOMP_ICALL(MEM32(edx + 0x2C)); /* 0x1102AE76: call dword ptr [edx + 0x2c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x2C)); /* 0x1102AE79: mov eax, dword ptr [ebp - 0x2c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x24)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x24)); /* 0x1102AE7C: add eax, dword ptr [ebp - 0x24] */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0x28)); /* 0x1102AE7F: mov ecx, dword ptr [ebp - 0x28] */
    { uint32_t _aa = ecx, _ab = MEM32(ebp + (-0x20)), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1102AE82: adc ecx, dword ptr [ebp - 0x20] */
      ecx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    /* cmp eax, MEM32(0x110032C8) */ /* 0x1102AE85: cmp eax, dword ptr [0x110032c8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x110032C8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102AEA5; /* 0x1102AE8B: jne 0x1102aea5 */
L_1102AE8D:
    /* cmp ecx, MEM32(0x110032CC) */ /* 0x1102AE8D: cmp ecx, dword ptr [0x110032cc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(0x110032CC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102AEA5; /* 0x1102AE93: jne 0x1102aea5 */
L_1102AE95:
    eax = MEM32(ebx); /* 0x1102AE95: mov eax, dword ptr [ebx] */
    PUSH32(esp, 0); /* 0x1102AE97: push 0 */
    PUSH32(esp, 2); /* 0x1102AE99: push 2 */
    ecx = MEM32(eax + 0x4); /* 0x1102AE9B: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ebx; /* 0x1102AE9E: add ecx, ebx */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1102AEA0: call 0x110102f8 */
    RECOMP_FLAGS_IN();
L_1102AEA5:
    eax = MEM32(ebx); /* 0x1102AEA5: mov eax, dword ptr [ebx] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1102AEA7: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x1102AEAB: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + ebx + 0x38); /* 0x1102AEAE: mov ecx, dword ptr [eax + ebx + 0x38] */
    /* test ecx, ecx */ /* 0x1102AEB2: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102AEBB; /* 0x1102AEB4: je 0x1102aebb */
L_1102AEB6:
    eax = MEM32(ecx); /* 0x1102AEB6: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1102AEB8: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_1102AEBB:
    eax = ebx; /* 0x1102AEBB: mov eax, ebx */
    RECOMP_CALL(sub_1103B340); /* 0x1102AEBD: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x1102AEC2: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_1102AEC5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102AEC5u);

L_1102AEC5:
    PUSH32(esp, 0x20u); /* 0x1102AEC5: push 0x20 */
    eax = 0x1103EC89u; /* 0x1102AEC7: mov eax, 0x1103ec89 */
    RECOMP_CALL(sub_1103B372); /* 0x1102AECC: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1102AED1: mov esi, ecx */
    eax = MEM32(esi); /* 0x1102AED3: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1102AED5: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(eax + 0x4); /* 0x1102AED7: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1102AEDA: add ecx, esi */
    _flag_k = FK_ADD;
    eax = MEM32(ecx + 0xC); /* 0x1102AEDC: mov eax, dword ptr [ecx + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    eax = eax & 0xFFFFFFFEu; /* 0x1102AEDF: and eax, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx + 0x38), edi */ /* 0x1102AEE2: cmp dword ptr [ecx + 0x38], edi */
    _flag_a = (uint32_t)(MEM32(ecx + 0x38)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102AEEA; /* 0x1102AEE5: jne 0x1102aeea */
L_1102AEE7:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1102AEE7: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102AEEA:
    PUSH32(esp, edi); /* 0x1102AEEA: push edi */
    PUSH32(esp, eax); /* 0x1102AEEB: push eax */
    RECOMP_CALL(sub_1100F771); /* 0x1102AEEC: call 0x1100f771 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x1102AEF1: mov eax, dword ptr [esi] */
    MEM32(ebp + (-0x14)) = esi; /* 0x1102AEF3: mov dword ptr [ebp - 0x14], esi */
    eax = MEM32(eax + 0x4); /* 0x1102AEF6: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1102AEF9: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x1102AEFD: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102AF06; /* 0x1102AEFF: je 0x1102af06 */
L_1102AF01:
    eax = MEM32(ecx); /* 0x1102AF01: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1102AF03: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_1102AF06:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1102AF06: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = edi; /* 0x1102AF08: mov dword ptr [ebp - 4], edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1102AF0B: inc ebx */
    _flag_k = FK_INC;
    ecx = esi; /* 0x1102AF0C: mov ecx, esi */
    PUSH32(esp, ebx); /* 0x1102AF0E: push ebx */
    RECOMP_CALL(sub_11010989); /* 0x1102AF0F: call 0x11010989 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x10)) = (uint8_t)(LO8(eax)); /* 0x1102AF14: mov byte ptr [ebp - 0x10], al */
    eax = MEM32(esi); /* 0x1102AF17: mov eax, dword ptr [esi] */
    MEM32(ebp + (-0x4)) = ebx; /* 0x1102AF19: mov dword ptr [ebp - 4], ebx */
    ecx = MEM32(eax + 0x4); /* 0x1102AF1C: mov ecx, dword ptr [eax + 4] */
    /* test MEM8(ecx + esi + 0xC), 6 */ /* 0x1102AF1F: test byte ptr [ecx + esi + 0xc], 6 */
    _flag_a = (uint32_t)(MEM8(ecx + esi + 0xC)) << 24; _flag_b = (uint32_t)(6) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102AF68; /* 0x1102AF24: jne 0x1102af68 */
L_1102AF26:
    ecx = MEM32(ecx + esi + 0x38); /* 0x1102AF26: mov ecx, dword ptr [ecx + esi + 0x38] */
    edx = ebp + (-0x2C); /* 0x1102AF2A: lea edx, [ebp - 0x2c] */
    PUSH32(esp, ebx); /* 0x1102AF2D: push ebx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1102AF2E: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1102AF31: push dword ptr [ebp + 0xc] */
    eax = MEM32(ecx); /* 0x1102AF34: mov eax, dword ptr [ecx] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1102AF36: push dword ptr [ebp + 8] */
    PUSH32(esp, edx); /* 0x1102AF39: push edx */
    RECOMP_ICALL(MEM32(eax + 0x28)); /* 0x1102AF3A: call dword ptr [eax + 0x28] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x2C)); /* 0x1102AF3D: mov eax, dword ptr [ebp - 0x2c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x24)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x24)); /* 0x1102AF40: add eax, dword ptr [ebp - 0x24] */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0x28)); /* 0x1102AF43: mov ecx, dword ptr [ebp - 0x28] */
    { uint32_t _aa = ecx, _ab = MEM32(ebp + (-0x20)), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1102AF46: adc ecx, dword ptr [ebp - 0x20] */
      ecx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    /* cmp eax, MEM32(0x110032C8) */ /* 0x1102AF49: cmp eax, dword ptr [0x110032c8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x110032C8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102AF68; /* 0x1102AF4F: jne 0x1102af68 */
L_1102AF51:
    /* cmp ecx, MEM32(0x110032CC) */ /* 0x1102AF51: cmp ecx, dword ptr [0x110032cc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(0x110032CC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102AF68; /* 0x1102AF57: jne 0x1102af68 */
L_1102AF59:
    eax = MEM32(esi); /* 0x1102AF59: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x1102AF5B: push edi */
    PUSH32(esp, 2); /* 0x1102AF5C: push 2 */
    ecx = MEM32(eax + 0x4); /* 0x1102AF5E: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1102AF61: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1102AF63: call 0x110102f8 */
    RECOMP_FLAGS_IN();
L_1102AF68:
    eax = MEM32(esi); /* 0x1102AF68: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1102AF6A: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x1102AF6E: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1102AF71: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x1102AF75: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102AF7E; /* 0x1102AF77: je 0x1102af7e */
L_1102AF79:
    eax = MEM32(ecx); /* 0x1102AF79: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1102AF7B: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_1102AF7E:
    eax = esi; /* 0x1102AF7E: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1102AF80: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1102AF85: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1102AF88(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102AF88u);

L_1102AF88:
    PUSH32(esp, 0x20u); /* 0x1102AF88: push 0x20 */
    eax = 0x1103EC89u; /* 0x1102AF8A: mov eax, 0x1103ec89 */
    RECOMP_CALL(sub_1103B372); /* 0x1102AF8F: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    ebx = ecx; /* 0x1102AF94: mov ebx, ecx */
    eax = MEM32(ebx); /* 0x1102AF96: mov eax, dword ptr [ebx] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1102AF98: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(eax + 0x4); /* 0x1102AF9A: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ebx; /* 0x1102AF9D: add ecx, ebx */
    _flag_k = FK_ADD;
    eax = MEM32(ecx + 0xC); /* 0x1102AF9F: mov eax, dword ptr [ecx + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    eax = eax & 0xFFFFFFFEu; /* 0x1102AFA2: and eax, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx + 0x38), esi */ /* 0x1102AFA5: cmp dword ptr [ecx + 0x38], esi */
    _flag_a = (uint32_t)(MEM32(ecx + 0x38)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102AFAD; /* 0x1102AFA8: jne 0x1102afad */
L_1102AFAA:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1102AFAA: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102AFAD:
    PUSH32(esp, esi); /* 0x1102AFAD: push esi */
    PUSH32(esp, eax); /* 0x1102AFAE: push eax */
    RECOMP_CALL(sub_1100F771); /* 0x1102AFAF: call 0x1100f771 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx); /* 0x1102AFB4: mov eax, dword ptr [ebx] */
    MEM32(ebp + (-0x14)) = ebx; /* 0x1102AFB6: mov dword ptr [ebp - 0x14], ebx */
    eax = MEM32(eax + 0x4); /* 0x1102AFB9: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + ebx + 0x38); /* 0x1102AFBC: mov ecx, dword ptr [eax + ebx + 0x38] */
    /* test ecx, ecx */ /* 0x1102AFC0: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102AFC9; /* 0x1102AFC2: je 0x1102afc9 */
L_1102AFC4:
    eax = MEM32(ecx); /* 0x1102AFC4: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1102AFC6: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_1102AFC9:
    MEM32(ebp + (-0x4)) = esi; /* 0x1102AFC9: mov dword ptr [ebp - 4], esi */
    ecx = ebx; /* 0x1102AFCC: mov ecx, ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1102AFCE: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1102AFD0: inc esi */
    _flag_k = FK_INC;
    PUSH32(esp, esi); /* 0x1102AFD1: push esi */
    RECOMP_CALL(sub_11010810); /* 0x1102AFD2: call 0x11010810 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x10)) = (uint8_t)(LO8(eax)); /* 0x1102AFD7: mov byte ptr [ebp - 0x10], al */
    eax = MEM32(ebx); /* 0x1102AFDA: mov eax, dword ptr [ebx] */
    MEM32(ebp + (-0x4)) = esi; /* 0x1102AFDC: mov dword ptr [ebp - 4], esi */
    eax = MEM32(eax + 0x4); /* 0x1102AFDF: mov eax, dword ptr [eax + 4] */
    /* test MEM8(eax + ebx + 0xC), 6 */ /* 0x1102AFE2: test byte ptr [eax + ebx + 0xc], 6 */
    _flag_a = (uint32_t)(MEM8(eax + ebx + 0xC)) << 24; _flag_b = (uint32_t)(6) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102B032; /* 0x1102AFE7: jne 0x1102b032 */
L_1102AFE9:
    eax = MEM32(eax + ebx + 0x38); /* 0x1102AFE9: mov eax, dword ptr [eax + ebx + 0x38] */
    PUSH32(esp, esi); /* 0x1102AFED: push esi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x1102AFEE: sub esp, 0x18 */
    _flag_k = FK_CMP;
    esi = ebp + 0x8; /* 0x1102AFF1: lea esi, [ebp + 8] */
    edx = MEM32(eax); /* 0x1102AFF4: mov edx, dword ptr [eax] */
    PUSH32(esp, 6); /* 0x1102AFF6: push 6 */
    ecx = POP32_VAL(esp); /* 0x1102AFF8: pop ecx */
    edi = esp; /* 0x1102AFF9: mov edi, esp */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1102AFFB: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = ebp + (-0x2C); /* 0x1102AFFD: lea ecx, [ebp - 0x2c] */
    PUSH32(esp, ecx); /* 0x1102B000: push ecx */
    ecx = eax; /* 0x1102B001: mov ecx, eax */
    RECOMP_ICALL(MEM32(edx + 0x2C)); /* 0x1102B003: call dword ptr [edx + 0x2c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x2C)); /* 0x1102B006: mov eax, dword ptr [ebp - 0x2c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x24)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x24)); /* 0x1102B009: add eax, dword ptr [ebp - 0x24] */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0x28)); /* 0x1102B00C: mov ecx, dword ptr [ebp - 0x28] */
    { uint32_t _aa = ecx, _ab = MEM32(ebp + (-0x20)), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1102B00F: adc ecx, dword ptr [ebp - 0x20] */
      ecx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    /* cmp eax, MEM32(0x110032C8) */ /* 0x1102B012: cmp eax, dword ptr [0x110032c8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x110032C8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102B032; /* 0x1102B018: jne 0x1102b032 */
L_1102B01A:
    /* cmp ecx, MEM32(0x110032CC) */ /* 0x1102B01A: cmp ecx, dword ptr [0x110032cc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(0x110032CC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102B032; /* 0x1102B020: jne 0x1102b032 */
L_1102B022:
    eax = MEM32(ebx); /* 0x1102B022: mov eax, dword ptr [ebx] */
    PUSH32(esp, 0); /* 0x1102B024: push 0 */
    PUSH32(esp, 2); /* 0x1102B026: push 2 */
    ecx = MEM32(eax + 0x4); /* 0x1102B028: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ebx; /* 0x1102B02B: add ecx, ebx */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1102B02D: call 0x110102f8 */
    RECOMP_FLAGS_IN();
L_1102B032:
    eax = MEM32(ebx); /* 0x1102B032: mov eax, dword ptr [ebx] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1102B034: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x1102B038: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + ebx + 0x38); /* 0x1102B03B: mov ecx, dword ptr [eax + ebx + 0x38] */
    /* test ecx, ecx */ /* 0x1102B03F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102B048; /* 0x1102B041: je 0x1102b048 */
L_1102B043:
    eax = MEM32(ecx); /* 0x1102B043: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1102B045: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_1102B048:
    eax = ebx; /* 0x1102B048: mov eax, ebx */
    RECOMP_CALL(sub_1103B340); /* 0x1102B04A: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x1102B04F: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_1102B052(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102B052u);

L_1102B052:
    PUSH32(esp, 0x20u); /* 0x1102B052: push 0x20 */
    eax = 0x1103EC89u; /* 0x1102B054: mov eax, 0x1103ec89 */
    RECOMP_CALL(sub_1103B372); /* 0x1102B059: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1102B05E: mov esi, ecx */
    eax = MEM32(esi); /* 0x1102B060: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1102B062: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(eax + 0x4); /* 0x1102B064: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1102B067: add ecx, esi */
    _flag_k = FK_ADD;
    eax = MEM32(ecx + 0xC); /* 0x1102B069: mov eax, dword ptr [ecx + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    eax = eax & 0xFFFFFFFEu; /* 0x1102B06C: and eax, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx + 0x38), edi */ /* 0x1102B06F: cmp dword ptr [ecx + 0x38], edi */
    _flag_a = (uint32_t)(MEM32(ecx + 0x38)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102B077; /* 0x1102B072: jne 0x1102b077 */
L_1102B074:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1102B074: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102B077:
    PUSH32(esp, edi); /* 0x1102B077: push edi */
    PUSH32(esp, eax); /* 0x1102B078: push eax */
    RECOMP_CALL(sub_1100F771); /* 0x1102B079: call 0x1100f771 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x1102B07E: mov eax, dword ptr [esi] */
    MEM32(ebp + (-0x14)) = esi; /* 0x1102B080: mov dword ptr [ebp - 0x14], esi */
    eax = MEM32(eax + 0x4); /* 0x1102B083: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1102B086: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x1102B08A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102B093; /* 0x1102B08C: je 0x1102b093 */
L_1102B08E:
    eax = MEM32(ecx); /* 0x1102B08E: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1102B090: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_1102B093:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1102B093: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = edi; /* 0x1102B095: mov dword ptr [ebp - 4], edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1102B098: inc ebx */
    _flag_k = FK_INC;
    ecx = esi; /* 0x1102B099: mov ecx, esi */
    PUSH32(esp, ebx); /* 0x1102B09B: push ebx */
    RECOMP_CALL(sub_11010810); /* 0x1102B09C: call 0x11010810 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x10)) = (uint8_t)(LO8(eax)); /* 0x1102B0A1: mov byte ptr [ebp - 0x10], al */
    eax = MEM32(esi); /* 0x1102B0A4: mov eax, dword ptr [esi] */
    MEM32(ebp + (-0x4)) = ebx; /* 0x1102B0A6: mov dword ptr [ebp - 4], ebx */
    ecx = MEM32(eax + 0x4); /* 0x1102B0A9: mov ecx, dword ptr [eax + 4] */
    /* test MEM8(ecx + esi + 0xC), 6 */ /* 0x1102B0AC: test byte ptr [ecx + esi + 0xc], 6 */
    _flag_a = (uint32_t)(MEM8(ecx + esi + 0xC)) << 24; _flag_b = (uint32_t)(6) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102B0F5; /* 0x1102B0B1: jne 0x1102b0f5 */
L_1102B0B3:
    ecx = MEM32(ecx + esi + 0x38); /* 0x1102B0B3: mov ecx, dword ptr [ecx + esi + 0x38] */
    edx = ebp + (-0x2C); /* 0x1102B0B7: lea edx, [ebp - 0x2c] */
    PUSH32(esp, ebx); /* 0x1102B0BA: push ebx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1102B0BB: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1102B0BE: push dword ptr [ebp + 0xc] */
    eax = MEM32(ecx); /* 0x1102B0C1: mov eax, dword ptr [ecx] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1102B0C3: push dword ptr [ebp + 8] */
    PUSH32(esp, edx); /* 0x1102B0C6: push edx */
    RECOMP_ICALL(MEM32(eax + 0x28)); /* 0x1102B0C7: call dword ptr [eax + 0x28] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x2C)); /* 0x1102B0CA: mov eax, dword ptr [ebp - 0x2c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x24)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x24)); /* 0x1102B0CD: add eax, dword ptr [ebp - 0x24] */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0x28)); /* 0x1102B0D0: mov ecx, dword ptr [ebp - 0x28] */
    { uint32_t _aa = ecx, _ab = MEM32(ebp + (-0x20)), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1102B0D3: adc ecx, dword ptr [ebp - 0x20] */
      ecx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    /* cmp eax, MEM32(0x110032C8) */ /* 0x1102B0D6: cmp eax, dword ptr [0x110032c8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x110032C8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102B0F5; /* 0x1102B0DC: jne 0x1102b0f5 */
L_1102B0DE:
    /* cmp ecx, MEM32(0x110032CC) */ /* 0x1102B0DE: cmp ecx, dword ptr [0x110032cc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(0x110032CC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102B0F5; /* 0x1102B0E4: jne 0x1102b0f5 */
L_1102B0E6:
    eax = MEM32(esi); /* 0x1102B0E6: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x1102B0E8: push edi */
    PUSH32(esp, 2); /* 0x1102B0E9: push 2 */
    ecx = MEM32(eax + 0x4); /* 0x1102B0EB: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1102B0EE: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1102B0F0: call 0x110102f8 */
    RECOMP_FLAGS_IN();
L_1102B0F5:
    eax = MEM32(esi); /* 0x1102B0F5: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1102B0F7: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x1102B0FB: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1102B0FE: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x1102B102: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102B10B; /* 0x1102B104: je 0x1102b10b */
L_1102B106:
    eax = MEM32(ecx); /* 0x1102B106: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1102B108: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_1102B10B:
    eax = esi; /* 0x1102B10B: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1102B10D: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1102B112: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1102B115(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102B115u);

L_1102B115:
    PUSH32(esp, ebp); /* 0x1102B115: push ebp */
    ebp = esp; /* 0x1102B116: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1102B118: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(0x110032C8); /* 0x1102B11B: mov ecx, dword ptr [0x110032c8] */
    MEM32(eax) = ecx; /* 0x1102B121: mov dword ptr [eax], ecx */
    ecx = MEM32(0x110032CC); /* 0x1102B123: mov ecx, dword ptr [0x110032cc] */
    MEM32(eax + 0x4) = ecx; /* 0x1102B129: mov dword ptr [eax + 4], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1102B12C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + 0x8) = ecx; /* 0x1102B12E: mov dword ptr [eax + 8], ecx */
    MEM32(eax + 0xC) = ecx; /* 0x1102B131: mov dword ptr [eax + 0xc], ecx */
    MEM32(eax + 0x10) = ecx; /* 0x1102B134: mov dword ptr [eax + 0x10], ecx */
    ebp = POP32_VAL(esp); /* 0x1102B137: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x1102B138: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_1102B13B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102B13Bu);

L_1102B13B:
    PUSH32(esp, 0x20u); /* 0x1102B13B: push 0x20 */
    eax = 0x1103ECACu; /* 0x1102B13D: mov eax, 0x1103ecac */
    RECOMP_CALL(sub_1103B372); /* 0x1102B142: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1102B147: mov esi, ecx */
    PUSH32(esp, esi); /* 0x1102B149: push esi */
    ecx = ebp + (-0x14); /* 0x1102B14A: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_11010E19); /* 0x1102B14D: call 0x11010e19 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x1102B152: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1102B154: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(eax + 0x4); /* 0x1102B158: mov ecx, dword ptr [eax + 4] */
    /* test MEM8(ecx + esi + 0xC), 6 */ /* 0x1102B15B: test byte ptr [ecx + esi + 0xc], 6 */
    _flag_a = (uint32_t)(MEM8(ecx + esi + 0xC)) << 24; _flag_b = (uint32_t)(6) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102B1B4; /* 0x1102B160: jne 0x1102b1b4 */
L_1102B162:
    ecx = MEM32(ecx + esi + 0x38); /* 0x1102B162: mov ecx, dword ptr [ecx + esi + 0x38] */
    edx = ebp + (-0x2C); /* 0x1102B166: lea edx, [ebp - 0x2c] */
    PUSH32(esp, 2); /* 0x1102B169: push 2 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1102B16B: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1102B16E: push dword ptr [ebp + 0xc] */
    eax = MEM32(ecx); /* 0x1102B171: mov eax, dword ptr [ecx] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1102B173: push dword ptr [ebp + 8] */
    PUSH32(esp, edx); /* 0x1102B176: push edx */
    RECOMP_ICALL(MEM32(eax + 0x28)); /* 0x1102B177: call dword ptr [eax + 0x28] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x24)); /* 0x1102B17A: mov eax, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x2C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x2C)); /* 0x1102B17D: add eax, dword ptr [ebp - 0x2c] */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0x20)); /* 0x1102B180: mov ecx, dword ptr [ebp - 0x20] */
    { uint32_t _aa = ecx, _ab = MEM32(ebp + (-0x28)), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1102B183: adc ecx, dword ptr [ebp - 0x28] */
      ecx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    /* cmp eax, MEM32(0x110032C8) */ /* 0x1102B186: cmp eax, dword ptr [0x110032c8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x110032C8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102B1B4; /* 0x1102B18C: jne 0x1102b1b4 */
L_1102B18E:
    /* cmp ecx, MEM32(0x110032CC) */ /* 0x1102B18E: cmp ecx, dword ptr [0x110032cc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(0x110032CC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102B1B4; /* 0x1102B194: jne 0x1102b1b4 */
L_1102B196:
    eax = MEM32(esi); /* 0x1102B196: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x1102B198: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1102B19B: add ecx, esi */
    _flag_k = FK_ADD;
    eax = MEM32(ecx + 0xC); /* 0x1102B19D: mov eax, dword ptr [ecx + 0xc] */
    _flag_a = (uint32_t)((eax | 2)); _flag_b = (uint32_t)((eax | 2));
    eax = eax | 2; /* 0x1102B1A0: or eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx + 0x38), 0 */ /* 0x1102B1A3: cmp dword ptr [ecx + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102B1AC; /* 0x1102B1A7: jne 0x1102b1ac */
L_1102B1A9:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1102B1A9: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102B1AC:
    PUSH32(esp, 0); /* 0x1102B1AC: push 0 */
    PUSH32(esp, eax); /* 0x1102B1AE: push eax */
    RECOMP_CALL(sub_1100F771); /* 0x1102B1AF: call 0x1100f771 */
    RECOMP_FLAGS_IN();
L_1102B1B4:
    ecx = ebp + (-0x14); /* 0x1102B1B4: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_11010E6E); /* 0x1102B1B7: call 0x11010e6e */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1102B1BC: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1102B1BE: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1102B1C3: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1102B1C6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102B1C6u);

L_1102B1C6:
    PUSH32(esp, 0x20u); /* 0x1102B1C6: push 0x20 */
    eax = 0x1103ECACu; /* 0x1102B1C8: mov eax, 0x1103ecac */
    RECOMP_CALL(sub_1103B372); /* 0x1102B1CD: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    ebx = ecx; /* 0x1102B1D2: mov ebx, ecx */
    PUSH32(esp, ebx); /* 0x1102B1D4: push ebx */
    ecx = ebp + (-0x14); /* 0x1102B1D5: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_11010E19); /* 0x1102B1D8: call 0x11010e19 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx); /* 0x1102B1DD: mov eax, dword ptr [ebx] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1102B1DF: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x1102B1E3: mov eax, dword ptr [eax + 4] */
    /* test MEM8(eax + ebx + 0xC), 6 */ /* 0x1102B1E6: test byte ptr [eax + ebx + 0xc], 6 */
    _flag_a = (uint32_t)(MEM8(eax + ebx + 0xC)) << 24; _flag_b = (uint32_t)(6) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102B245; /* 0x1102B1EB: jne 0x1102b245 */
L_1102B1ED:
    eax = MEM32(eax + ebx + 0x38); /* 0x1102B1ED: mov eax, dword ptr [eax + ebx + 0x38] */
    esi = ebp + 0x8; /* 0x1102B1F1: lea esi, [ebp + 8] */
    PUSH32(esp, 2); /* 0x1102B1F4: push 2 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x1102B1F6: sub esp, 0x18 */
    _flag_k = FK_CMP;
    edx = MEM32(eax); /* 0x1102B1F9: mov edx, dword ptr [eax] */
    PUSH32(esp, 6); /* 0x1102B1FB: push 6 */
    ecx = POP32_VAL(esp); /* 0x1102B1FD: pop ecx */
    edi = esp; /* 0x1102B1FE: mov edi, esp */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1102B200: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = ebp + (-0x2C); /* 0x1102B202: lea ecx, [ebp - 0x2c] */
    PUSH32(esp, ecx); /* 0x1102B205: push ecx */
    ecx = eax; /* 0x1102B206: mov ecx, eax */
    RECOMP_ICALL(MEM32(edx + 0x2C)); /* 0x1102B208: call dword ptr [edx + 0x2c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x24)); /* 0x1102B20B: mov eax, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x2C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x2C)); /* 0x1102B20E: add eax, dword ptr [ebp - 0x2c] */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0x20)); /* 0x1102B211: mov ecx, dword ptr [ebp - 0x20] */
    { uint32_t _aa = ecx, _ab = MEM32(ebp + (-0x28)), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1102B214: adc ecx, dword ptr [ebp - 0x28] */
      ecx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    /* cmp eax, MEM32(0x110032C8) */ /* 0x1102B217: cmp eax, dword ptr [0x110032c8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x110032C8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102B245; /* 0x1102B21D: jne 0x1102b245 */
L_1102B21F:
    /* cmp ecx, MEM32(0x110032CC) */ /* 0x1102B21F: cmp ecx, dword ptr [0x110032cc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(0x110032CC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102B245; /* 0x1102B225: jne 0x1102b245 */
L_1102B227:
    eax = MEM32(ebx); /* 0x1102B227: mov eax, dword ptr [ebx] */
    ecx = MEM32(eax + 0x4); /* 0x1102B229: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ebx; /* 0x1102B22C: add ecx, ebx */
    _flag_k = FK_ADD;
    eax = MEM32(ecx + 0xC); /* 0x1102B22E: mov eax, dword ptr [ecx + 0xc] */
    _flag_a = (uint32_t)((eax | 2)); _flag_b = (uint32_t)((eax | 2));
    eax = eax | 2; /* 0x1102B231: or eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx + 0x38), 0 */ /* 0x1102B234: cmp dword ptr [ecx + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102B23D; /* 0x1102B238: jne 0x1102b23d */
L_1102B23A:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1102B23A: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102B23D:
    PUSH32(esp, 0); /* 0x1102B23D: push 0 */
    PUSH32(esp, eax); /* 0x1102B23F: push eax */
    RECOMP_CALL(sub_1100F771); /* 0x1102B240: call 0x1100f771 */
    RECOMP_FLAGS_IN();
L_1102B245:
    ecx = ebp + (-0x14); /* 0x1102B245: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_11010E6E); /* 0x1102B248: call 0x11010e6e */
    RECOMP_FLAGS_IN();
    eax = ebx; /* 0x1102B24D: mov eax, ebx */
    RECOMP_CALL(sub_1103B340); /* 0x1102B24F: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x1102B254: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_1102B257(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102B257u);

L_1102B257:
    PUSH32(esp, ebp); /* 0x1102B257: push ebp */
    ebp = esp; /* 0x1102B258: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1102B25A: mov eax, dword ptr [ebp + 8] */
    MEM32(ecx + 0x38) = eax; /* 0x1102B25D: mov dword ptr [ecx + 0x38], eax */
    ebp = POP32_VAL(esp); /* 0x1102B260: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1102B261: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1102B264(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102B264u);

L_1102B264:
    eax = ecx; /* 0x1102B264: mov eax, ecx */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1102B266: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1102B269(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102B269u);

L_1102B269:
    PUSH32(esp, ebp); /* 0x1102B269: push ebp */
    ebp = esp; /* 0x1102B26A: mov ebp, esp */
    edx = MEM32(ecx + 0xC); /* 0x1102B26C: mov edx, dword ptr [ecx + 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x1102B26F: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1102B272: push esi */
    esi = MEM32(ebp + 0x10); /* 0x1102B273: mov esi, dword ptr [ebp + 0x10] */
    MEM32(edx) = eax; /* 0x1102B276: mov dword ptr [edx], eax */
    eax = MEM32(ecx + 0x1C); /* 0x1102B278: mov eax, dword ptr [ecx + 0x1c] */
    edx = MEM32(ebp + 0xC); /* 0x1102B27B: mov edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edx; /* 0x1102B27E: sub esi, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((esi) >> 0) & 1u); /* 0x1102B280: sar esi, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)esi >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = (uint32_t)((int32_t)esi >> 1u);
    MEM32(eax) = edx; /* 0x1102B282: mov dword ptr [eax], edx */
    eax = MEM32(ecx + 0x2C); /* 0x1102B284: mov eax, dword ptr [ecx + 0x2c] */
    MEM32(eax) = esi; /* 0x1102B287: mov dword ptr [eax], esi */
    esi = POP32_VAL(esp); /* 0x1102B289: pop esi */
    ebp = POP32_VAL(esp); /* 0x1102B28A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1102B28B: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1102B28E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102B28Eu);

L_1102B28E:
    PUSH32(esp, ebp); /* 0x1102B28E: push ebp */
    ebp = esp; /* 0x1102B28F: mov ebp, esp */
    edx = MEM32(ecx + 0x10); /* 0x1102B291: mov edx, dword ptr [ecx + 0x10] */
    eax = MEM32(ebp + 0x8); /* 0x1102B294: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1102B297: push esi */
    esi = MEM32(ebp + 0x10); /* 0x1102B298: mov esi, dword ptr [ebp + 0x10] */
    MEM32(edx) = eax; /* 0x1102B29B: mov dword ptr [edx], eax */
    eax = MEM32(ecx + 0x20); /* 0x1102B29D: mov eax, dword ptr [ecx + 0x20] */
    edx = MEM32(ebp + 0xC); /* 0x1102B2A0: mov edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edx; /* 0x1102B2A3: sub esi, edx */
    _flag_k = FK_CMP;
    MEM32(eax) = edx; /* 0x1102B2A5: mov dword ptr [eax], edx */
    eax = MEM32(ecx + 0x30); /* 0x1102B2A7: mov eax, dword ptr [ecx + 0x30] */
    MEM32(eax) = esi; /* 0x1102B2AA: mov dword ptr [eax], esi */
    esi = POP32_VAL(esp); /* 0x1102B2AC: pop esi */
    ebp = POP32_VAL(esp); /* 0x1102B2AD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1102B2AE: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1102B2B1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102B2B1u);

L_1102B2B1:
    PUSH32(esp, ebp); /* 0x1102B2B1: push ebp */
    ebp = esp; /* 0x1102B2B2: mov ebp, esp */
    edx = MEM32(ecx + 0x10); /* 0x1102B2B4: mov edx, dword ptr [ecx + 0x10] */
    eax = MEM32(ebp + 0x8); /* 0x1102B2B7: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1102B2BA: push esi */
    esi = MEM32(ebp + 0x10); /* 0x1102B2BB: mov esi, dword ptr [ebp + 0x10] */
    MEM32(edx) = eax; /* 0x1102B2BE: mov dword ptr [edx], eax */
    eax = MEM32(ecx + 0x20); /* 0x1102B2C0: mov eax, dword ptr [ecx + 0x20] */
    edx = MEM32(ebp + 0xC); /* 0x1102B2C3: mov edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edx; /* 0x1102B2C6: sub esi, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((esi) >> 0) & 1u); /* 0x1102B2C8: sar esi, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)esi >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = (uint32_t)((int32_t)esi >> 1u);
    MEM32(eax) = edx; /* 0x1102B2CA: mov dword ptr [eax], edx */
    eax = MEM32(ecx + 0x30); /* 0x1102B2CC: mov eax, dword ptr [ecx + 0x30] */
    MEM32(eax) = esi; /* 0x1102B2CF: mov dword ptr [eax], esi */
    esi = POP32_VAL(esp); /* 0x1102B2D1: pop esi */
    ebp = POP32_VAL(esp); /* 0x1102B2D2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1102B2D3: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1102B2D6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102B2D6u);

L_1102B2D6:
    PUSH32(esp, ebp); /* 0x1102B2D6: push ebp */
    ebp = esp; /* 0x1102B2D7: mov ebp, esp */
    eax = MEM32(ecx + 0x10); /* 0x1102B2D9: mov eax, dword ptr [ecx + 0x10] */
    edx = MEM32(ebp + 0xC); /* 0x1102B2DC: mov edx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1102B2DF: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1102B2E0: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - esi; /* 0x1102B2E3: sub edx, esi */
    _flag_k = FK_CMP;
    MEM32(eax) = esi; /* 0x1102B2E5: mov dword ptr [eax], esi */
    eax = MEM32(ecx + 0x20); /* 0x1102B2E7: mov eax, dword ptr [ecx + 0x20] */
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x1102B2EA: sar edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 1u);
    MEM32(eax) = esi; /* 0x1102B2EC: mov dword ptr [eax], esi */
    eax = MEM32(ecx + 0x30); /* 0x1102B2EE: mov eax, dword ptr [ecx + 0x30] */
    esi = POP32_VAL(esp); /* 0x1102B2F1: pop esi */
    MEM32(eax) = edx; /* 0x1102B2F2: mov dword ptr [eax], edx */
    ebp = POP32_VAL(esp); /* 0x1102B2F4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1102B2F5: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1102B2F8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102B2F8u);

L_1102B2F8:
    PUSH32(esp, ebp); /* 0x1102B2F8: push ebp */
    ebp = esp; /* 0x1102B2F9: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1102B2FB: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1102B2FD: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_110102F8); /* 0x1102B300: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1102B305: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1102B306: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1102B309(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102B309u);

L_1102B309:
    PUSH32(esp, ebp); /* 0x1102B309: push ebp */
    ebp = esp; /* 0x1102B30A: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1102B30C: push dword ptr [ebp + 0x10] */
    eax = MEM32(ecx); /* 0x1102B30F: mov eax, dword ptr [ecx] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1102B311: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1102B314: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(eax + 0x20)); /* 0x1102B317: call dword ptr [eax + 0x20] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1102B31A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1102B31B: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1102B31E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102B31Eu);

L_1102B31E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1102B31E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1102B320: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102B322: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102B323(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102B323u);

L_1102B323:
    PUSH32(esp, ebp); /* 0x1102B323: push ebp */
    ebp = esp; /* 0x1102B324: mov ebp, esp */
    eax = MEM32(ecx + 0x1C); /* 0x1102B326: mov eax, dword ptr [ecx + 0x1c] */
    PUSH32(esp, ebx); /* 0x1102B329: push ebx */
    SET_LO8(ebx, MEM8(ebp + 0x8)); /* 0x1102B32A: mov bl, byte ptr [ebp + 8] */
    edx = MEM32(eax); /* 0x1102B32D: mov edx, dword ptr [eax] */
    /* test edx, edx */ /* 0x1102B32F: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102B351; /* 0x1102B331: je 0x1102b351 */
L_1102B333:
    eax = MEM32(ecx + 0xC); /* 0x1102B333: mov eax, dword ptr [ecx + 0xc] */
    /* cmp MEM32(eax), edx */ /* 0x1102B336: cmp dword ptr [eax], edx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1102B351; /* 0x1102B338: jae 0x1102b351 */
L_1102B33A:
    /* cmp LO8(ebx), MEM8(edx + (-0x1)) */ /* 0x1102B33A: cmp bl, byte ptr [edx - 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + (-0x1))) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102B351; /* 0x1102B33D: jne 0x1102b351 */
L_1102B33F:
    eax = MEM32(ecx + 0x2C); /* 0x1102B33F: mov eax, dword ptr [ecx + 0x2c] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) + 1; /* 0x1102B342: inc dword ptr [eax] */
    _flag_k = FK_INC;
    eax = MEM32(ecx + 0x1C); /* 0x1102B344: mov eax, dword ptr [ecx + 0x1c] */
    ecx = MEM32(eax); /* 0x1102B347: mov ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1102B349: dec ecx */
    _flag_k = FK_DEC;
    MEM32(eax) = ecx; /* 0x1102B34A: mov dword ptr [eax], ecx */
    eax = (uint32_t)MEM8(ecx); /* 0x1102B34C: movzx eax, byte ptr [ecx] */
    goto L_1102B35A; /* 0x1102B34F: jmp 0x1102b35a */
L_1102B351:
    edx = MEM32(ecx); /* 0x1102B351: mov edx, dword ptr [ecx] */
    eax = (uint32_t)LO8(ebx); /* 0x1102B353: movzx eax, bl */
    PUSH32(esp, eax); /* 0x1102B356: push eax */
    RECOMP_ICALL(MEM32(edx + 0x10)); /* 0x1102B357: call dword ptr [edx + 0x10] */
    RECOMP_FLAGS_IN();
L_1102B35A:
    ebx = POP32_VAL(esp); /* 0x1102B35A: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1102B35B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1102B35C: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1102B35F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102B35Fu);

L_1102B35F:
    PUSH32(esp, ebp); /* 0x1102B35F: push ebp */
    ebp = esp; /* 0x1102B360: mov ebp, esp */
    eax = MEM32(ecx + 0x1C); /* 0x1102B362: mov eax, dword ptr [ecx + 0x1c] */
    PUSH32(esp, esi); /* 0x1102B365: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1102B366: mov esi, dword ptr [ebp + 8] */
    edx = MEM32(eax); /* 0x1102B369: mov edx, dword ptr [eax] */
    /* test edx, edx */ /* 0x1102B36B: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102B390; /* 0x1102B36D: je 0x1102b390 */
L_1102B36F:
    eax = MEM32(ecx + 0xC); /* 0x1102B36F: mov eax, dword ptr [ecx + 0xc] */
    /* cmp MEM32(eax), edx */ /* 0x1102B372: cmp dword ptr [eax], edx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1102B390; /* 0x1102B374: jae 0x1102b390 */
L_1102B376:
    /* cmp LO16(esi), MEM16(edx + (-0x2)) */ /* 0x1102B376: cmp si, word ptr [edx - 2] */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(MEM16(edx + (-0x2))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102B390; /* 0x1102B37A: jne 0x1102b390 */
L_1102B37C:
    eax = MEM32(ecx + 0x2C); /* 0x1102B37C: mov eax, dword ptr [ecx + 0x2c] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) + 1; /* 0x1102B37F: inc dword ptr [eax] */
    _flag_k = FK_INC;
    eax = MEM32(ecx + 0x1C); /* 0x1102B381: mov eax, dword ptr [ecx + 0x1c] */
    ecx = MEM32(eax); /* 0x1102B384: mov ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 2; /* 0x1102B386: sub ecx, 2 */
    _flag_k = FK_CMP;
    MEM32(eax) = ecx; /* 0x1102B389: mov dword ptr [eax], ecx */
    eax = (uint32_t)MEM16(ecx); /* 0x1102B38B: movzx eax, word ptr [ecx] */
    goto L_1102B399; /* 0x1102B38E: jmp 0x1102b399 */
L_1102B390:
    eax = MEM32(ecx); /* 0x1102B390: mov eax, dword ptr [ecx] */
    PUSH32(esp, esi); /* 0x1102B392: push esi */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x1102B393: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO16(eax); /* 0x1102B396: movzx eax, ax */
L_1102B399:
    esi = POP32_VAL(esp); /* 0x1102B399: pop esi */
    ebp = POP32_VAL(esp); /* 0x1102B39A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1102B39B: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1102B39E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102B39Eu);

L_1102B39E:
    PUSH32(esp, ebp); /* 0x1102B39E: push ebp */
    ebp = esp; /* 0x1102B39F: mov ebp, esp */
    eax = MEM32(ecx + 0x20); /* 0x1102B3A1: mov eax, dword ptr [ecx + 0x20] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1102B3A4: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(eax), edx */ /* 0x1102B3A6: cmp dword ptr [eax], edx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102B3AF; /* 0x1102B3A8: je 0x1102b3af */
L_1102B3AA:
    eax = MEM32(ecx + 0x30); /* 0x1102B3AA: mov eax, dword ptr [ecx + 0x30] */
    edx = MEM32(eax); /* 0x1102B3AD: mov edx, dword ptr [eax] */
L_1102B3AF:
    /* test edx, edx */ /* 0x1102B3AF: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1102B3CC; /* 0x1102B3B1: jle 0x1102b3cc */
L_1102B3B3:
    eax = MEM32(ecx + 0x30); /* 0x1102B3B3: mov eax, dword ptr [ecx + 0x30] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) - 1; /* 0x1102B3B6: dec dword ptr [eax] */
    _flag_k = FK_DEC;
    ecx = MEM32(ecx + 0x20); /* 0x1102B3B8: mov ecx, dword ptr [ecx + 0x20] */
    edx = MEM32(ecx); /* 0x1102B3BB: mov edx, dword ptr [ecx] */
    eax = edx + 0x1; /* 0x1102B3BD: lea eax, [edx + 1] */
    MEM32(ecx) = eax; /* 0x1102B3C0: mov dword ptr [ecx], eax */
    SET_LO8(eax, MEM8(ebp + 0x8)); /* 0x1102B3C2: mov al, byte ptr [ebp + 8] */
    MEM8(edx) = (uint8_t)(LO8(eax)); /* 0x1102B3C5: mov byte ptr [edx], al */
    eax = (uint32_t)LO8(eax); /* 0x1102B3C7: movzx eax, al */
    goto L_1102B3D8; /* 0x1102B3CA: jmp 0x1102b3d8 */
L_1102B3CC:
    eax = MEM32(ebp + 0x8); /* 0x1102B3CC: mov eax, dword ptr [ebp + 8] */
    edx = MEM32(ecx); /* 0x1102B3CF: mov edx, dword ptr [ecx] */
    eax = (uint32_t)LO8(eax); /* 0x1102B3D1: movzx eax, al */
    PUSH32(esp, eax); /* 0x1102B3D4: push eax */
    RECOMP_ICALL(MEM32(edx + 0xC)); /* 0x1102B3D5: call dword ptr [edx + 0xc] */
    RECOMP_FLAGS_IN();
L_1102B3D8:
    ebp = POP32_VAL(esp); /* 0x1102B3D8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1102B3D9: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1102B3DC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102B3DCu);

L_1102B3DC:
    PUSH32(esp, ebp); /* 0x1102B3DC: push ebp */
    ebp = esp; /* 0x1102B3DD: mov ebp, esp */
    eax = MEM32(ecx + 0x20); /* 0x1102B3DF: mov eax, dword ptr [ecx + 0x20] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1102B3E2: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(eax), edx */ /* 0x1102B3E4: cmp dword ptr [eax], edx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102B3ED; /* 0x1102B3E6: je 0x1102b3ed */
L_1102B3E8:
    eax = MEM32(ecx + 0x30); /* 0x1102B3E8: mov eax, dword ptr [ecx + 0x30] */
    edx = MEM32(eax); /* 0x1102B3EB: mov edx, dword ptr [eax] */
L_1102B3ED:
    /* test edx, edx */ /* 0x1102B3ED: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1102B408; /* 0x1102B3EF: jle 0x1102b408 */
L_1102B3F1:
    eax = MEM32(ecx + 0x30); /* 0x1102B3F1: mov eax, dword ptr [ecx + 0x30] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) - 1; /* 0x1102B3F4: dec dword ptr [eax] */
    _flag_k = FK_DEC;
    ecx = MEM32(ecx + 0x20); /* 0x1102B3F6: mov ecx, dword ptr [ecx + 0x20] */
    edx = MEM32(ecx); /* 0x1102B3F9: mov edx, dword ptr [ecx] */
    eax = edx + 0x2; /* 0x1102B3FB: lea eax, [edx + 2] */
    MEM32(ecx) = eax; /* 0x1102B3FE: mov dword ptr [ecx], eax */
    eax = MEM32(ebp + 0x8); /* 0x1102B400: mov eax, dword ptr [ebp + 8] */
    MEM16(edx) = (uint16_t)(LO16(eax)); /* 0x1102B403: mov word ptr [edx], ax */
    goto L_1102B410; /* 0x1102B406: jmp 0x1102b410 */
L_1102B408:
    eax = MEM32(ecx); /* 0x1102B408: mov eax, dword ptr [ecx] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1102B40A: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x1102B40D: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
L_1102B410:
    eax = (uint32_t)LO16(eax); /* 0x1102B410: movzx eax, ax */
    ebp = POP32_VAL(esp); /* 0x1102B413: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1102B414: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1102B417(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102B417u);

L_1102B417:
    PUSH32(esp, ebp); /* 0x1102B417: push ebp */
    ebp = esp; /* 0x1102B418: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1102B41A: push dword ptr [ebp + 0x10] */
    eax = MEM32(ecx); /* 0x1102B41D: mov eax, dword ptr [ecx] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1102B41F: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1102B422: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(eax + 0x24)); /* 0x1102B425: call dword ptr [eax + 0x24] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1102B428: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1102B429: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1102B42C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102B42Cu);

L_1102B42C:
    eax = MEM32(ecx + 0x1C); /* 0x1102B42C: mov eax, dword ptr [ecx + 0x1c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1102B42F: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(eax), edx */ /* 0x1102B431: cmp dword ptr [eax], edx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102B43A; /* 0x1102B433: je 0x1102b43a */
L_1102B435:
    eax = MEM32(ecx + 0x2C); /* 0x1102B435: mov eax, dword ptr [ecx + 0x2c] */
    edx = MEM32(eax); /* 0x1102B438: mov edx, dword ptr [eax] */
L_1102B43A:
    /* test edx, edx */ /* 0x1102B43A: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1102B449; /* 0x1102B43C: jle 0x1102b449 */
L_1102B43E:
    eax = MEM32(ecx + 0x2C); /* 0x1102B43E: mov eax, dword ptr [ecx + 0x2c] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) - 1; /* 0x1102B441: dec dword ptr [eax] */
    _flag_k = FK_DEC;
    eax = MEM32(ecx + 0x1C); /* 0x1102B443: mov eax, dword ptr [ecx + 0x1c] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) + 1; /* 0x1102B446: inc dword ptr [eax] */
    _flag_k = FK_INC;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102B448: ret  */
L_1102B449:
    eax = MEM32(ecx); /* 0x1102B449: mov eax, dword ptr [ecx] */
    { _itail_tgt = (uint32_t)(MEM32(eax + 0x1C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1102B44E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102B44Eu);

L_1102B44E:
    eax = MEM32(ecx + 0x1C); /* 0x1102B44E: mov eax, dword ptr [ecx + 0x1c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1102B451: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(eax), edx */ /* 0x1102B453: cmp dword ptr [eax], edx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102B45C; /* 0x1102B455: je 0x1102b45c */
L_1102B457:
    eax = MEM32(ecx + 0x2C); /* 0x1102B457: mov eax, dword ptr [ecx + 0x2c] */
    edx = MEM32(eax); /* 0x1102B45A: mov edx, dword ptr [eax] */
L_1102B45C:
    /* test edx, edx */ /* 0x1102B45C: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1102B46C; /* 0x1102B45E: jle 0x1102b46c */
L_1102B460:
    eax = MEM32(ecx + 0x2C); /* 0x1102B460: mov eax, dword ptr [ecx + 0x2c] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) - 1; /* 0x1102B463: dec dword ptr [eax] */
    _flag_k = FK_DEC;
    eax = MEM32(ecx + 0x1C); /* 0x1102B465: mov eax, dword ptr [ecx + 0x1c] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + 2; /* 0x1102B468: add dword ptr [eax], 2 */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102B46B: ret  */
L_1102B46C:
    eax = MEM32(ecx); /* 0x1102B46C: mov eax, dword ptr [ecx] */
    { _itail_tgt = (uint32_t)(MEM32(eax + 0x1C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1102B471(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102B471u);

L_1102B471:
    eax = MEM32(ecx + 0x1C); /* 0x1102B471: mov eax, dword ptr [ecx + 0x1c] */
    edx = MEM32(eax); /* 0x1102B474: mov edx, dword ptr [eax] */
    /* test edx, edx */ /* 0x1102B476: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102B492; /* 0x1102B478: je 0x1102b492 */
L_1102B47A:
    eax = MEM32(ecx + 0xC); /* 0x1102B47A: mov eax, dword ptr [ecx + 0xc] */
    /* cmp MEM32(eax), edx */ /* 0x1102B47D: cmp dword ptr [eax], edx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1102B492; /* 0x1102B47F: jae 0x1102b492 */
L_1102B481:
    eax = MEM32(ecx + 0x2C); /* 0x1102B481: mov eax, dword ptr [ecx + 0x2c] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) + 1; /* 0x1102B484: inc dword ptr [eax] */
    _flag_k = FK_INC;
    eax = MEM32(ecx + 0x1C); /* 0x1102B486: mov eax, dword ptr [ecx + 0x1c] */
    ecx = MEM32(eax); /* 0x1102B489: mov ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1102B48B: dec ecx */
    _flag_k = FK_DEC;
    MEM32(eax) = ecx; /* 0x1102B48C: mov dword ptr [eax], ecx */
    eax = (uint32_t)MEM8(ecx); /* 0x1102B48E: movzx eax, byte ptr [ecx] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102B491: ret  */
L_1102B492:
    eax = MEM32(ecx); /* 0x1102B492: mov eax, dword ptr [ecx] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1102B494: push -1 */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x1102B496: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102B499: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102B49A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102B49Au);

L_1102B49A:
    eax = MEM32(ecx + 0x1C); /* 0x1102B49A: mov eax, dword ptr [ecx + 0x1c] */
    edx = MEM32(eax); /* 0x1102B49D: mov edx, dword ptr [eax] */
    /* test edx, edx */ /* 0x1102B49F: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102B4BD; /* 0x1102B4A1: je 0x1102b4bd */
L_1102B4A3:
    eax = MEM32(ecx + 0xC); /* 0x1102B4A3: mov eax, dword ptr [ecx + 0xc] */
    /* cmp MEM32(eax), edx */ /* 0x1102B4A6: cmp dword ptr [eax], edx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1102B4BD; /* 0x1102B4A8: jae 0x1102b4bd */
L_1102B4AA:
    eax = MEM32(ecx + 0x2C); /* 0x1102B4AA: mov eax, dword ptr [ecx + 0x2c] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) + 1; /* 0x1102B4AD: inc dword ptr [eax] */
    _flag_k = FK_INC;
    eax = MEM32(ecx + 0x1C); /* 0x1102B4AF: mov eax, dword ptr [ecx + 0x1c] */
    ecx = MEM32(eax); /* 0x1102B4B2: mov ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 2; /* 0x1102B4B4: sub ecx, 2 */
    _flag_k = FK_CMP;
    MEM32(eax) = ecx; /* 0x1102B4B7: mov dword ptr [eax], ecx */
    eax = (uint32_t)MEM16(ecx); /* 0x1102B4B9: movzx eax, word ptr [ecx] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102B4BC: ret  */
L_1102B4BD:
    eax = MEM32(ecx); /* 0x1102B4BD: mov eax, dword ptr [ecx] */
    PUSH32(esp, 0xFFFFu); /* 0x1102B4BF: push 0xffff */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x1102B4C4: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO16(eax); /* 0x1102B4C7: movzx eax, ax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102B4CA: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102B4CB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102B4CBu);

L_1102B4CB:
    PUSH32(esp, ebp); /* 0x1102B4CB: push ebp */
    ebp = esp; /* 0x1102B4CC: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1102B4CE: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1102B4CF: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1102B4D2: push edi */
    PUSH32(esp, esi); /* 0x1102B4D3: push esi */
    edi = ecx; /* 0x1102B4D4: mov edi, ecx */
    RECOMP_CALL(sub_1100FB13); /* 0x1102B4D6: call 0x1100fb13 */
    RECOMP_FLAGS_IN();
    SET_LO8(eax, MEM8(esi + 0x40)); /* 0x1102B4DB: mov al, byte ptr [esi + 0x40] */
    SET_LO8(ecx, MEM8(edi + 0x40)); /* 0x1102B4DE: mov cl, byte ptr [edi + 0x40] */
    MEM8(edi + 0x40) = (uint8_t)(LO8(eax)); /* 0x1102B4E1: mov byte ptr [edi + 0x40], al */
    MEM8(esi + 0x40) = (uint8_t)(LO8(ecx)); /* 0x1102B4E4: mov byte ptr [esi + 0x40], cl */
    ecx = MEM32(edi + 0x3C); /* 0x1102B4E7: mov ecx, dword ptr [edi + 0x3c] */
    eax = MEM32(esi + 0x3C); /* 0x1102B4EA: mov eax, dword ptr [esi + 0x3c] */
    MEM32(edi + 0x3C) = eax; /* 0x1102B4ED: mov dword ptr [edi + 0x3c], eax */
    edi = POP32_VAL(esp); /* 0x1102B4F0: pop edi */
    MEM32(esi + 0x3C) = ecx; /* 0x1102B4F1: mov dword ptr [esi + 0x3c], ecx */
    esi = POP32_VAL(esp); /* 0x1102B4F4: pop esi */
    ebp = POP32_VAL(esp); /* 0x1102B4F5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1102B4F6: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1102B4F9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102B4F9u);

L_1102B4F9:
    PUSH32(esp, ebp); /* 0x1102B4F9: push ebp */
    ebp = esp; /* 0x1102B4FA: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1102B4FC: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1102B4FD: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1102B500: push edi */
    PUSH32(esp, esi); /* 0x1102B501: push esi */
    edi = ecx; /* 0x1102B502: mov edi, ecx */
    RECOMP_CALL(sub_1100FB13); /* 0x1102B504: call 0x1100fb13 */
    RECOMP_FLAGS_IN();
    SET_LO16(eax, MEM16(esi + 0x40)); /* 0x1102B509: mov ax, word ptr [esi + 0x40] */
    ecx = (uint32_t)MEM16(edi + 0x40); /* 0x1102B50D: movzx ecx, word ptr [edi + 0x40] */
    MEM16(edi + 0x40) = (uint16_t)(LO16(eax)); /* 0x1102B511: mov word ptr [edi + 0x40], ax */
    MEM16(esi + 0x40) = (uint16_t)(LO16(ecx)); /* 0x1102B515: mov word ptr [esi + 0x40], cx */
    ecx = MEM32(edi + 0x3C); /* 0x1102B519: mov ecx, dword ptr [edi + 0x3c] */
    eax = MEM32(esi + 0x3C); /* 0x1102B51C: mov eax, dword ptr [esi + 0x3c] */
    MEM32(edi + 0x3C) = eax; /* 0x1102B51F: mov dword ptr [edi + 0x3c], eax */
    edi = POP32_VAL(esp); /* 0x1102B522: pop edi */
    MEM32(esi + 0x3C) = ecx; /* 0x1102B523: mov dword ptr [esi + 0x3c], ecx */
    esi = POP32_VAL(esp); /* 0x1102B526: pop esi */
    ebp = POP32_VAL(esp); /* 0x1102B527: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1102B528: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1102B52B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102B52Bu);

L_1102B52B:
    PUSH32(esp, ebp); /* 0x1102B52B: push ebp */
    ebp = esp; /* 0x1102B52C: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1102B52E: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1102B52F: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1102B532: push edi */
    edi = ecx; /* 0x1102B533: mov edi, ecx */
    /* test esi, esi */ /* 0x1102B535: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102B53D; /* 0x1102B537: jne 0x1102b53d */
L_1102B539:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1102B539: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1102B544; /* 0x1102B53B: jmp 0x1102b544 */
L_1102B53D:
    eax = MEM32(esi); /* 0x1102B53D: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x1102B53F: mov eax, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x1102B542: add eax, esi */
    _flag_k = FK_ADD;
L_1102B544:
    PUSH32(esp, eax); /* 0x1102B544: push eax */
    eax = MEM32(edi); /* 0x1102B545: mov eax, dword ptr [edi] */
    ecx = MEM32(eax + 0x4); /* 0x1102B547: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x1102B54A: add ecx, edi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1102B4CB); /* 0x1102B54C: call 0x1102b4cb */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x8); /* 0x1102B551: mov eax, dword ptr [esi + 8] */
    ecx = MEM32(edi + 0x8); /* 0x1102B554: mov ecx, dword ptr [edi + 8] */
    edx = MEM32(edi + 0xC); /* 0x1102B557: mov edx, dword ptr [edi + 0xc] */
    MEM32(edi + 0x8) = eax; /* 0x1102B55A: mov dword ptr [edi + 8], eax */
    eax = MEM32(esi + 0xC); /* 0x1102B55D: mov eax, dword ptr [esi + 0xc] */
    MEM32(edi + 0xC) = eax; /* 0x1102B560: mov dword ptr [edi + 0xc], eax */
    edi = POP32_VAL(esp); /* 0x1102B563: pop edi */
    MEM32(esi + 0x8) = ecx; /* 0x1102B564: mov dword ptr [esi + 8], ecx */
    MEM32(esi + 0xC) = edx; /* 0x1102B567: mov dword ptr [esi + 0xc], edx */
    esi = POP32_VAL(esp); /* 0x1102B56A: pop esi */
    ebp = POP32_VAL(esp); /* 0x1102B56B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1102B56C: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1102B56F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102B56Fu);

L_1102B56F:
    PUSH32(esp, ebp); /* 0x1102B56F: push ebp */
    ebp = esp; /* 0x1102B570: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1102B572: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1102B573: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1102B576: push edi */
    edi = ecx; /* 0x1102B577: mov edi, ecx */
    /* test esi, esi */ /* 0x1102B579: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102B581; /* 0x1102B57B: jne 0x1102b581 */
L_1102B57D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1102B57D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1102B588; /* 0x1102B57F: jmp 0x1102b588 */
L_1102B581:
    eax = MEM32(esi); /* 0x1102B581: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x1102B583: mov eax, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x1102B586: add eax, esi */
    _flag_k = FK_ADD;
L_1102B588:
    PUSH32(esp, eax); /* 0x1102B588: push eax */
    eax = MEM32(edi); /* 0x1102B589: mov eax, dword ptr [edi] */
    ecx = MEM32(eax + 0x4); /* 0x1102B58B: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x1102B58E: add ecx, edi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1102B4F9); /* 0x1102B590: call 0x1102b4f9 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x8); /* 0x1102B595: mov eax, dword ptr [esi + 8] */
    ecx = MEM32(edi + 0x8); /* 0x1102B598: mov ecx, dword ptr [edi + 8] */
    edx = MEM32(edi + 0xC); /* 0x1102B59B: mov edx, dword ptr [edi + 0xc] */
    MEM32(edi + 0x8) = eax; /* 0x1102B59E: mov dword ptr [edi + 8], eax */
    eax = MEM32(esi + 0xC); /* 0x1102B5A1: mov eax, dword ptr [esi + 0xc] */
    MEM32(edi + 0xC) = eax; /* 0x1102B5A4: mov dword ptr [edi + 0xc], eax */
    edi = POP32_VAL(esp); /* 0x1102B5A7: pop edi */
    MEM32(esi + 0x8) = ecx; /* 0x1102B5A8: mov dword ptr [esi + 8], ecx */
    MEM32(esi + 0xC) = edx; /* 0x1102B5AB: mov dword ptr [esi + 0xc], edx */
    esi = POP32_VAL(esp); /* 0x1102B5AE: pop esi */
    ebp = POP32_VAL(esp); /* 0x1102B5AF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1102B5B0: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1102B5B3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102B5B3u);

L_1102B5B3:
    PUSH32(esp, ebp); /* 0x1102B5B3: push ebp */
    ebp = esp; /* 0x1102B5B4: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x1102B5B6: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1102B5B9: push esi */
    esi = ecx; /* 0x1102B5BA: mov esi, ecx */
    /* cmp esi, edx */ /* 0x1102B5BC: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102B5DC; /* 0x1102B5BE: je 0x1102b5dc */
L_1102B5C0:
    /* test edx, edx */ /* 0x1102B5C0: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102B5C8; /* 0x1102B5C2: jne 0x1102b5c8 */
L_1102B5C4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1102B5C4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1102B5CF; /* 0x1102B5C6: jmp 0x1102b5cf */
L_1102B5C8:
    eax = MEM32(edx); /* 0x1102B5C8: mov eax, dword ptr [edx] */
    eax = MEM32(eax + 0x4); /* 0x1102B5CA: mov eax, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1102B5CD: add eax, edx */
    _flag_k = FK_ADD;
L_1102B5CF:
    PUSH32(esp, eax); /* 0x1102B5CF: push eax */
    eax = MEM32(esi); /* 0x1102B5D0: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x1102B5D2: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1102B5D5: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1102B4CB); /* 0x1102B5D7: call 0x1102b4cb */
    RECOMP_FLAGS_IN();
L_1102B5DC:
    esi = POP32_VAL(esp); /* 0x1102B5DC: pop esi */
    ebp = POP32_VAL(esp); /* 0x1102B5DD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1102B5DE: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1102B5E1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102B5E1u);

L_1102B5E1:
    PUSH32(esp, ebp); /* 0x1102B5E1: push ebp */
    ebp = esp; /* 0x1102B5E2: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x1102B5E4: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1102B5E7: push esi */
    esi = ecx; /* 0x1102B5E8: mov esi, ecx */
    /* cmp esi, edx */ /* 0x1102B5EA: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102B60A; /* 0x1102B5EC: je 0x1102b60a */
L_1102B5EE:
    /* test edx, edx */ /* 0x1102B5EE: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102B5F6; /* 0x1102B5F0: jne 0x1102b5f6 */
L_1102B5F2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1102B5F2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1102B5FD; /* 0x1102B5F4: jmp 0x1102b5fd */
L_1102B5F6:
    eax = MEM32(edx); /* 0x1102B5F6: mov eax, dword ptr [edx] */
    eax = MEM32(eax + 0x4); /* 0x1102B5F8: mov eax, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1102B5FB: add eax, edx */
    _flag_k = FK_ADD;
L_1102B5FD:
    PUSH32(esp, eax); /* 0x1102B5FD: push eax */
    eax = MEM32(esi); /* 0x1102B5FE: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x1102B600: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1102B603: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1102B4F9); /* 0x1102B605: call 0x1102b4f9 */
    RECOMP_FLAGS_IN();
L_1102B60A:
    esi = POP32_VAL(esp); /* 0x1102B60A: pop esi */
    ebp = POP32_VAL(esp); /* 0x1102B60B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1102B60C: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1102B60F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102B60Fu);

L_1102B60F:
    PUSH32(esp, ebp); /* 0x1102B60F: push ebp */
    ebp = esp; /* 0x1102B610: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x1102B612: sub esp, 0x14 */
    _flag_k = FK_CMP;
    edx = ecx; /* 0x1102B615: mov edx, ecx */
    MEM32(ebp + (-0x4)) = edx; /* 0x1102B617: mov dword ptr [ebp - 4], edx */
    /* cmp edx, MEM32(ebp + 0x8) */ /* 0x1102B61A: cmp edx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102B6E4; /* 0x1102B61D: je 0x1102b6e4 */
L_1102B623:
    eax = MEM32(edx + 0x20); /* 0x1102B623: mov eax, dword ptr [edx + 0x20] */
    PUSH32(esp, ebx); /* 0x1102B626: push ebx */
    PUSH32(esp, esi); /* 0x1102B627: push esi */
    esi = MEM32(edx + 0x10); /* 0x1102B628: mov esi, dword ptr [edx + 0x10] */
    ecx = MEM32(eax); /* 0x1102B62B: mov ecx, dword ptr [eax] */
    eax = MEM32(edx + 0x30); /* 0x1102B62D: mov eax, dword ptr [edx + 0x30] */
    PUSH32(esp, edi); /* 0x1102B630: push edi */
    ebx = MEM32(esi); /* 0x1102B631: mov ebx, dword ptr [esi] */
    MEM32(ebp + (-0x8)) = ecx; /* 0x1102B633: mov dword ptr [ebp - 8], ecx */
    edi = MEM32(eax); /* 0x1102B636: mov edi, dword ptr [eax] */
    eax = MEM32(edx + 0xC); /* 0x1102B638: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ecx; /* 0x1102B63B: add edi, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(eax); /* 0x1102B63D: mov eax, dword ptr [eax] */
    MEM32(ebp + (-0xC)) = eax; /* 0x1102B63F: mov dword ptr [ebp - 0xc], eax */
    eax = MEM32(edx + 0x1C); /* 0x1102B642: mov eax, dword ptr [edx + 0x1c] */
    ecx = MEM32(eax); /* 0x1102B645: mov ecx, dword ptr [eax] */
    eax = MEM32(edx + 0x2C); /* 0x1102B647: mov eax, dword ptr [edx + 0x2c] */
    MEM32(ebp + (-0x10)) = ecx; /* 0x1102B64A: mov dword ptr [ebp - 0x10], ecx */
    eax = MEM32(eax); /* 0x1102B64D: mov eax, dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1102B64F: add eax, ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + 0x8); /* 0x1102B651: mov ecx, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x14)) = eax; /* 0x1102B654: mov dword ptr [ebp - 0x14], eax */
    eax = MEM32(ecx + 0x20); /* 0x1102B657: mov eax, dword ptr [ecx + 0x20] */
    edx = MEM32(eax); /* 0x1102B65A: mov edx, dword ptr [eax] */
    eax = MEM32(ecx + 0x30); /* 0x1102B65C: mov eax, dword ptr [ecx + 0x30] */
    ecx = MEM32(eax); /* 0x1102B65F: mov ecx, dword ptr [eax] */
    eax = MEM32(ebp + 0x8); /* 0x1102B661: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x1102B664: add ecx, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1102B666: sub ecx, edx */
    _flag_k = FK_CMP;
    eax = MEM32(eax + 0x10); /* 0x1102B668: mov eax, dword ptr [eax + 0x10] */
    eax = MEM32(eax); /* 0x1102B66B: mov eax, dword ptr [eax] */
    MEM32(esi) = eax; /* 0x1102B66D: mov dword ptr [esi], eax */
    esi = MEM32(ebp + (-0x4)); /* 0x1102B66F: mov esi, dword ptr [ebp - 4] */
    eax = MEM32(esi + 0x20); /* 0x1102B672: mov eax, dword ptr [esi + 0x20] */
    MEM32(eax) = edx; /* 0x1102B675: mov dword ptr [eax], edx */
    eax = MEM32(esi + 0x30); /* 0x1102B677: mov eax, dword ptr [esi + 0x30] */
    MEM32(eax) = ecx; /* 0x1102B67A: mov dword ptr [eax], ecx */
    eax = MEM32(ebp + 0x8); /* 0x1102B67C: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + (-0x8)); /* 0x1102B67F: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ecx; /* 0x1102B682: sub edi, ecx */
    _flag_k = FK_CMP;
    eax = MEM32(eax + 0x10); /* 0x1102B684: mov eax, dword ptr [eax + 0x10] */
    MEM32(eax) = ebx; /* 0x1102B687: mov dword ptr [eax], ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1102B689: mov ebx, dword ptr [ebp + 8] */
    eax = MEM32(ebx + 0x20); /* 0x1102B68C: mov eax, dword ptr [ebx + 0x20] */
    MEM32(eax) = ecx; /* 0x1102B68F: mov dword ptr [eax], ecx */
    eax = MEM32(ebx + 0x30); /* 0x1102B691: mov eax, dword ptr [ebx + 0x30] */
    MEM32(eax) = edi; /* 0x1102B694: mov dword ptr [eax], edi */
    eax = MEM32(ebx + 0x1C); /* 0x1102B696: mov eax, dword ptr [ebx + 0x1c] */
    edi = MEM32(ebp + (-0x4)); /* 0x1102B699: mov edi, dword ptr [ebp - 4] */
    esi = MEM32(eax); /* 0x1102B69C: mov esi, dword ptr [eax] */
    eax = MEM32(ebx + 0x2C); /* 0x1102B69E: mov eax, dword ptr [ebx + 0x2c] */
    ecx = MEM32(edi + 0xC); /* 0x1102B6A1: mov ecx, dword ptr [edi + 0xc] */
    edx = MEM32(eax); /* 0x1102B6A4: mov edx, dword ptr [eax] */
    eax = MEM32(ebx + 0xC); /* 0x1102B6A6: mov eax, dword ptr [ebx + 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x1102B6A9: add edx, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - esi; /* 0x1102B6AB: sub edx, esi */
    _flag_k = FK_CMP;
    eax = MEM32(eax); /* 0x1102B6AD: mov eax, dword ptr [eax] */
    MEM32(ecx) = eax; /* 0x1102B6AF: mov dword ptr [ecx], eax */
    eax = MEM32(edi + 0x1C); /* 0x1102B6B1: mov eax, dword ptr [edi + 0x1c] */
    ecx = MEM32(ebp + (-0xC)); /* 0x1102B6B4: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(eax) = esi; /* 0x1102B6B7: mov dword ptr [eax], esi */
    eax = MEM32(edi + 0x2C); /* 0x1102B6B9: mov eax, dword ptr [edi + 0x2c] */
    MEM32(eax) = edx; /* 0x1102B6BC: mov dword ptr [eax], edx */
    eax = MEM32(ebx + 0xC); /* 0x1102B6BE: mov eax, dword ptr [ebx + 0xc] */
    edx = MEM32(ebp + (-0x10)); /* 0x1102B6C1: mov edx, dword ptr [ebp - 0x10] */
    MEM32(eax) = ecx; /* 0x1102B6C4: mov dword ptr [eax], ecx */
    eax = MEM32(ebx + 0x1C); /* 0x1102B6C6: mov eax, dword ptr [ebx + 0x1c] */
    ecx = MEM32(ebp + (-0x14)); /* 0x1102B6C9: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1102B6CC: sub ecx, edx */
    _flag_k = FK_CMP;
    MEM32(eax) = edx; /* 0x1102B6CE: mov dword ptr [eax], edx */
    eax = MEM32(ebx + 0x2C); /* 0x1102B6D0: mov eax, dword ptr [ebx + 0x2c] */
    MEM32(eax) = ecx; /* 0x1102B6D3: mov dword ptr [eax], ecx */
    ecx = MEM32(edi + 0x34); /* 0x1102B6D5: mov ecx, dword ptr [edi + 0x34] */
    eax = MEM32(ebx + 0x34); /* 0x1102B6D8: mov eax, dword ptr [ebx + 0x34] */
    MEM32(edi + 0x34) = eax; /* 0x1102B6DB: mov dword ptr [edi + 0x34], eax */
    edi = POP32_VAL(esp); /* 0x1102B6DE: pop edi */
    esi = POP32_VAL(esp); /* 0x1102B6DF: pop esi */
    MEM32(ebx + 0x34) = ecx; /* 0x1102B6E0: mov dword ptr [ebx + 0x34], ecx */
    ebx = POP32_VAL(esp); /* 0x1102B6E3: pop ebx */
L_1102B6E4:
    esp = ebp; /* 0x1102B6E4: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1102B6E6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1102B6E7: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1102B6EA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102B6EAu);

L_1102B6EA:
    PUSH32(esp, ebp); /* 0x1102B6EA: push ebp */
    ebp = esp; /* 0x1102B6EB: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x1102B6ED: sub esp, 0x14 */
    _flag_k = FK_CMP;
    edx = ecx; /* 0x1102B6F0: mov edx, ecx */
    MEM32(ebp + (-0x4)) = edx; /* 0x1102B6F2: mov dword ptr [ebp - 4], edx */
    /* cmp edx, MEM32(ebp + 0x8) */ /* 0x1102B6F5: cmp edx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102B7CB; /* 0x1102B6F8: je 0x1102b7cb */
L_1102B6FE:
    eax = MEM32(edx + 0x20); /* 0x1102B6FE: mov eax, dword ptr [edx + 0x20] */
    PUSH32(esp, ebx); /* 0x1102B701: push ebx */
    PUSH32(esp, esi); /* 0x1102B702: push esi */
    esi = MEM32(edx + 0x10); /* 0x1102B703: mov esi, dword ptr [edx + 0x10] */
    ecx = MEM32(eax); /* 0x1102B706: mov ecx, dword ptr [eax] */
    eax = MEM32(edx + 0x30); /* 0x1102B708: mov eax, dword ptr [edx + 0x30] */
    PUSH32(esp, edi); /* 0x1102B70B: push edi */
    MEM32(ebp + (-0x8)) = ecx; /* 0x1102B70C: mov dword ptr [ebp - 8], ecx */
    ebx = MEM32(esi); /* 0x1102B70F: mov ebx, dword ptr [esi] */
    eax = MEM32(eax); /* 0x1102B711: mov eax, dword ptr [eax] */
    edi = ecx + eax * 2; /* 0x1102B713: lea edi, [ecx + eax*2] */
    eax = MEM32(edx + 0xC); /* 0x1102B716: mov eax, dword ptr [edx + 0xc] */
    eax = MEM32(eax); /* 0x1102B719: mov eax, dword ptr [eax] */
    MEM32(ebp + (-0xC)) = eax; /* 0x1102B71B: mov dword ptr [ebp - 0xc], eax */
    eax = MEM32(edx + 0x1C); /* 0x1102B71E: mov eax, dword ptr [edx + 0x1c] */
    ecx = MEM32(eax); /* 0x1102B721: mov ecx, dword ptr [eax] */
    eax = MEM32(edx + 0x2C); /* 0x1102B723: mov eax, dword ptr [edx + 0x2c] */
    MEM32(ebp + (-0x10)) = ecx; /* 0x1102B726: mov dword ptr [ebp - 0x10], ecx */
    eax = MEM32(eax); /* 0x1102B729: mov eax, dword ptr [eax] */
    eax = ecx + eax * 2; /* 0x1102B72B: lea eax, [ecx + eax*2] */
    ecx = MEM32(ebp + 0x8); /* 0x1102B72E: mov ecx, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x14)) = eax; /* 0x1102B731: mov dword ptr [ebp - 0x14], eax */
    eax = MEM32(ecx + 0x20); /* 0x1102B734: mov eax, dword ptr [ecx + 0x20] */
    edx = MEM32(eax); /* 0x1102B737: mov edx, dword ptr [eax] */
    eax = MEM32(ecx + 0x30); /* 0x1102B739: mov eax, dword ptr [ecx + 0x30] */
    eax = MEM32(eax); /* 0x1102B73C: mov eax, dword ptr [eax] */
    ecx = edx + eax * 2; /* 0x1102B73E: lea ecx, [edx + eax*2] */
    eax = MEM32(ebp + 0x8); /* 0x1102B741: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1102B744: sub ecx, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x1102B746: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    eax = MEM32(eax + 0x10); /* 0x1102B748: mov eax, dword ptr [eax + 0x10] */
    eax = MEM32(eax); /* 0x1102B74B: mov eax, dword ptr [eax] */
    MEM32(esi) = eax; /* 0x1102B74D: mov dword ptr [esi], eax */
    esi = MEM32(ebp + (-0x4)); /* 0x1102B74F: mov esi, dword ptr [ebp - 4] */
    eax = MEM32(esi + 0x20); /* 0x1102B752: mov eax, dword ptr [esi + 0x20] */
    MEM32(eax) = edx; /* 0x1102B755: mov dword ptr [eax], edx */
    eax = MEM32(esi + 0x30); /* 0x1102B757: mov eax, dword ptr [esi + 0x30] */
    MEM32(eax) = ecx; /* 0x1102B75A: mov dword ptr [eax], ecx */
    eax = MEM32(ebp + 0x8); /* 0x1102B75C: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + (-0x8)); /* 0x1102B75F: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ecx; /* 0x1102B762: sub edi, ecx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((edi) >> 0) & 1u); /* 0x1102B764: sar edi, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edi >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = (uint32_t)((int32_t)edi >> 1u);
    eax = MEM32(eax + 0x10); /* 0x1102B766: mov eax, dword ptr [eax + 0x10] */
    MEM32(eax) = ebx; /* 0x1102B769: mov dword ptr [eax], ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1102B76B: mov ebx, dword ptr [ebp + 8] */
    eax = MEM32(ebx + 0x20); /* 0x1102B76E: mov eax, dword ptr [ebx + 0x20] */
    MEM32(eax) = ecx; /* 0x1102B771: mov dword ptr [eax], ecx */
    eax = MEM32(ebx + 0x30); /* 0x1102B773: mov eax, dword ptr [ebx + 0x30] */
    MEM32(eax) = edi; /* 0x1102B776: mov dword ptr [eax], edi */
    eax = MEM32(ebx + 0x1C); /* 0x1102B778: mov eax, dword ptr [ebx + 0x1c] */
    edi = MEM32(ebp + (-0x4)); /* 0x1102B77B: mov edi, dword ptr [ebp - 4] */
    esi = MEM32(eax); /* 0x1102B77E: mov esi, dword ptr [eax] */
    eax = MEM32(ebx + 0x2C); /* 0x1102B780: mov eax, dword ptr [ebx + 0x2c] */
    ecx = MEM32(edi + 0xC); /* 0x1102B783: mov ecx, dword ptr [edi + 0xc] */
    eax = MEM32(eax); /* 0x1102B786: mov eax, dword ptr [eax] */
    edx = esi + eax * 2; /* 0x1102B788: lea edx, [esi + eax*2] */
    eax = MEM32(ebx + 0xC); /* 0x1102B78B: mov eax, dword ptr [ebx + 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - esi; /* 0x1102B78E: sub edx, esi */
    _flag_k = FK_CMP;
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x1102B790: sar edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 1u);
    eax = MEM32(eax); /* 0x1102B792: mov eax, dword ptr [eax] */
    MEM32(ecx) = eax; /* 0x1102B794: mov dword ptr [ecx], eax */
    eax = MEM32(edi + 0x1C); /* 0x1102B796: mov eax, dword ptr [edi + 0x1c] */
    ecx = MEM32(ebp + (-0xC)); /* 0x1102B799: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(eax) = esi; /* 0x1102B79C: mov dword ptr [eax], esi */
    eax = MEM32(edi + 0x2C); /* 0x1102B79E: mov eax, dword ptr [edi + 0x2c] */
    MEM32(eax) = edx; /* 0x1102B7A1: mov dword ptr [eax], edx */
    eax = MEM32(ebx + 0xC); /* 0x1102B7A3: mov eax, dword ptr [ebx + 0xc] */
    edx = MEM32(ebp + (-0x10)); /* 0x1102B7A6: mov edx, dword ptr [ebp - 0x10] */
    MEM32(eax) = ecx; /* 0x1102B7A9: mov dword ptr [eax], ecx */
    eax = MEM32(ebx + 0x1C); /* 0x1102B7AB: mov eax, dword ptr [ebx + 0x1c] */
    ecx = MEM32(ebp + (-0x14)); /* 0x1102B7AE: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1102B7B1: sub ecx, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x1102B7B3: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    MEM32(eax) = edx; /* 0x1102B7B5: mov dword ptr [eax], edx */
    eax = MEM32(ebx + 0x2C); /* 0x1102B7B7: mov eax, dword ptr [ebx + 0x2c] */
    MEM32(eax) = ecx; /* 0x1102B7BA: mov dword ptr [eax], ecx */
    ecx = MEM32(edi + 0x34); /* 0x1102B7BC: mov ecx, dword ptr [edi + 0x34] */
    eax = MEM32(ebx + 0x34); /* 0x1102B7BF: mov eax, dword ptr [ebx + 0x34] */
    MEM32(edi + 0x34) = eax; /* 0x1102B7C2: mov dword ptr [edi + 0x34], eax */
    MEM32(ebx + 0x34) = ecx; /* 0x1102B7C5: mov dword ptr [ebx + 0x34], ecx */
    edi = POP32_VAL(esp); /* 0x1102B7C8: pop edi */
    esi = POP32_VAL(esp); /* 0x1102B7C9: pop esi */
    ebx = POP32_VAL(esp); /* 0x1102B7CA: pop ebx */
L_1102B7CB:
    esp = ebp; /* 0x1102B7CB: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1102B7CD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1102B7CE: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1102B7D1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102B7D1u);

L_1102B7D1:
    PUSH32(esp, 8); /* 0x1102B7D1: push 8 */
    eax = 0x1103ECD7u; /* 0x1102B7D3: mov eax, 0x1103ecd7 */
    RECOMP_CALL(sub_1103B372); /* 0x1102B7D8: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1102B7DD: mov esi, ecx */
    eax = MEM32(esi); /* 0x1102B7DF: mov eax, dword ptr [esi] */
    MEM32(ebp + (-0x14)) = esi; /* 0x1102B7E1: mov dword ptr [ebp - 0x14], esi */
    eax = MEM32(eax + 0x4); /* 0x1102B7E4: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1102B7E7: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x1102B7EB: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102B7F4; /* 0x1102B7ED: je 0x1102b7f4 */
L_1102B7EF:
    eax = MEM32(ecx); /* 0x1102B7EF: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1102B7F1: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_1102B7F4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1102B7F4: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x1102B7F6: mov ecx, esi */
    PUSH32(esp, 1); /* 0x1102B7F8: push 1 */
    MEM32(ebp + (-0x4)) = edi; /* 0x1102B7FA: mov dword ptr [ebp - 4], edi */
    RECOMP_CALL(sub_11010675); /* 0x1102B7FD: call 0x11010675 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x10)) = (uint8_t)(LO8(eax)); /* 0x1102B802: mov byte ptr [ebp - 0x10], al */
    eax = MEM32(esi); /* 0x1102B805: mov eax, dword ptr [esi] */
    MEM32(ebp + (-0x4)) = 1; /* 0x1102B807: mov dword ptr [ebp - 4], 1 */
    eax = MEM32(eax + 0x4); /* 0x1102B80E: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1102B811: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x1102B815: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102B83F; /* 0x1102B817: je 0x1102b83f */
L_1102B819:
    eax = MEM32(ecx); /* 0x1102B819: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x34)); /* 0x1102B81B: call dword ptr [eax + 0x34] */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1102B81E: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102B842; /* 0x1102B821: jne 0x1102b842 */
L_1102B823:
    eax = MEM32(esi); /* 0x1102B823: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x1102B825: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1102B828: add ecx, esi */
    _flag_k = FK_ADD;
    eax = MEM32(ecx + 0xC); /* 0x1102B82A: mov eax, dword ptr [ecx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1102B82D: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx + 0x38), edi */ /* 0x1102B830: cmp dword ptr [ecx + 0x38], edi */
    _flag_a = (uint32_t)(MEM32(ecx + 0x38)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102B838; /* 0x1102B833: jne 0x1102b838 */
L_1102B835:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1102B835: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102B838:
    PUSH32(esp, edi); /* 0x1102B838: push edi */
    PUSH32(esp, eax); /* 0x1102B839: push eax */
    RECOMP_CALL(sub_1100F771); /* 0x1102B83A: call 0x1100f771 */
    RECOMP_FLAGS_IN();
L_1102B83F:
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x1102B83F: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102B842:
    eax = MEM32(esi); /* 0x1102B842: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1102B844: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(eax + 0x4); /* 0x1102B848: mov ecx, dword ptr [eax + 4] */
    ecx = MEM32(ecx + esi + 0x38); /* 0x1102B84B: mov ecx, dword ptr [ecx + esi + 0x38] */
    /* test ecx, ecx */ /* 0x1102B84F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102B858; /* 0x1102B851: je 0x1102b858 */
L_1102B853:
    edx = MEM32(ecx); /* 0x1102B853: mov edx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(edx + 0x8)); /* 0x1102B855: call dword ptr [edx + 8] */
    RECOMP_FLAGS_IN();
L_1102B858:
    eax = edi; /* 0x1102B858: mov eax, edi */
    RECOMP_CALL(sub_1103B340); /* 0x1102B85A: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102B85F: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102B860(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102B860u);

L_1102B860:
    PUSH32(esp, 8); /* 0x1102B860: push 8 */
    eax = 0x1103ECD7u; /* 0x1102B862: mov eax, 0x1103ecd7 */
    RECOMP_CALL(sub_1103B372); /* 0x1102B867: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1102B86C: mov esi, ecx */
    eax = MEM32(esi); /* 0x1102B86E: mov eax, dword ptr [esi] */
    MEM32(ebp + (-0x14)) = esi; /* 0x1102B870: mov dword ptr [ebp - 0x14], esi */
    eax = MEM32(eax + 0x4); /* 0x1102B873: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1102B876: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x1102B87A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102B883; /* 0x1102B87C: je 0x1102b883 */
L_1102B87E:
    eax = MEM32(ecx); /* 0x1102B87E: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1102B880: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_1102B883:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1102B883: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x1102B885: mov ecx, esi */
    PUSH32(esp, 1); /* 0x1102B887: push 1 */
    MEM32(ebp + (-0x4)) = edi; /* 0x1102B889: mov dword ptr [ebp - 4], edi */
    RECOMP_CALL(sub_11010989); /* 0x1102B88C: call 0x11010989 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x10)) = (uint8_t)(LO8(eax)); /* 0x1102B891: mov byte ptr [ebp - 0x10], al */
    eax = MEM32(esi); /* 0x1102B894: mov eax, dword ptr [esi] */
    MEM32(ebp + (-0x4)) = 1; /* 0x1102B896: mov dword ptr [ebp - 4], 1 */
    eax = MEM32(eax + 0x4); /* 0x1102B89D: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1102B8A0: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x1102B8A4: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102B8CE; /* 0x1102B8A6: je 0x1102b8ce */
L_1102B8A8:
    eax = MEM32(ecx); /* 0x1102B8A8: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x34)); /* 0x1102B8AA: call dword ptr [eax + 0x34] */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1102B8AD: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102B8D1; /* 0x1102B8B0: jne 0x1102b8d1 */
L_1102B8B2:
    eax = MEM32(esi); /* 0x1102B8B2: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x1102B8B4: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1102B8B7: add ecx, esi */
    _flag_k = FK_ADD;
    eax = MEM32(ecx + 0xC); /* 0x1102B8B9: mov eax, dword ptr [ecx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1102B8BC: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx + 0x38), edi */ /* 0x1102B8BF: cmp dword ptr [ecx + 0x38], edi */
    _flag_a = (uint32_t)(MEM32(ecx + 0x38)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102B8C7; /* 0x1102B8C2: jne 0x1102b8c7 */
L_1102B8C4:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1102B8C4: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102B8C7:
    PUSH32(esp, edi); /* 0x1102B8C7: push edi */
    PUSH32(esp, eax); /* 0x1102B8C8: push eax */
    RECOMP_CALL(sub_1100F771); /* 0x1102B8C9: call 0x1100f771 */
    RECOMP_FLAGS_IN();
L_1102B8CE:
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x1102B8CE: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102B8D1:
    eax = MEM32(esi); /* 0x1102B8D1: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1102B8D3: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(eax + 0x4); /* 0x1102B8D7: mov ecx, dword ptr [eax + 4] */
    ecx = MEM32(ecx + esi + 0x38); /* 0x1102B8DA: mov ecx, dword ptr [ecx + esi + 0x38] */
    /* test ecx, ecx */ /* 0x1102B8DE: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102B8E7; /* 0x1102B8E0: je 0x1102b8e7 */
L_1102B8E2:
    edx = MEM32(ecx); /* 0x1102B8E2: mov edx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(edx + 0x8)); /* 0x1102B8E4: call dword ptr [edx + 8] */
    RECOMP_FLAGS_IN();
L_1102B8E7:
    eax = edi; /* 0x1102B8E7: mov eax, edi */
    RECOMP_CALL(sub_1103B340); /* 0x1102B8E9: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102B8EE: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102B8EF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102B8EFu);

L_1102B8EF:
    PUSH32(esp, 8); /* 0x1102B8EF: push 8 */
    eax = 0x1103ECD7u; /* 0x1102B8F1: mov eax, 0x1103ecd7 */
    RECOMP_CALL(sub_1103B372); /* 0x1102B8F6: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1102B8FB: mov esi, ecx */
    eax = MEM32(esi); /* 0x1102B8FD: mov eax, dword ptr [esi] */
    MEM32(ebp + (-0x14)) = esi; /* 0x1102B8FF: mov dword ptr [ebp - 0x14], esi */
    eax = MEM32(eax + 0x4); /* 0x1102B902: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1102B905: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x1102B909: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102B912; /* 0x1102B90B: je 0x1102b912 */
L_1102B90D:
    eax = MEM32(ecx); /* 0x1102B90D: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1102B90F: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_1102B912:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1102B912: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x1102B914: mov ecx, esi */
    PUSH32(esp, 1); /* 0x1102B916: push 1 */
    MEM32(ebp + (-0x4)) = edi; /* 0x1102B918: mov dword ptr [ebp - 4], edi */
    RECOMP_CALL(sub_11010810); /* 0x1102B91B: call 0x11010810 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x10)) = (uint8_t)(LO8(eax)); /* 0x1102B920: mov byte ptr [ebp - 0x10], al */
    eax = MEM32(esi); /* 0x1102B923: mov eax, dword ptr [esi] */
    MEM32(ebp + (-0x4)) = 1; /* 0x1102B925: mov dword ptr [ebp - 4], 1 */
    eax = MEM32(eax + 0x4); /* 0x1102B92C: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1102B92F: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x1102B933: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102B95D; /* 0x1102B935: je 0x1102b95d */
L_1102B937:
    eax = MEM32(ecx); /* 0x1102B937: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x34)); /* 0x1102B939: call dword ptr [eax + 0x34] */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1102B93C: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102B960; /* 0x1102B93F: jne 0x1102b960 */
L_1102B941:
    eax = MEM32(esi); /* 0x1102B941: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x1102B943: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1102B946: add ecx, esi */
    _flag_k = FK_ADD;
    eax = MEM32(ecx + 0xC); /* 0x1102B948: mov eax, dword ptr [ecx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1102B94B: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx + 0x38), edi */ /* 0x1102B94E: cmp dword ptr [ecx + 0x38], edi */
    _flag_a = (uint32_t)(MEM32(ecx + 0x38)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102B956; /* 0x1102B951: jne 0x1102b956 */
L_1102B953:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1102B953: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102B956:
    PUSH32(esp, edi); /* 0x1102B956: push edi */
    PUSH32(esp, eax); /* 0x1102B957: push eax */
    RECOMP_CALL(sub_1100F771); /* 0x1102B958: call 0x1100f771 */
    RECOMP_FLAGS_IN();
L_1102B95D:
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x1102B95D: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102B960:
    eax = MEM32(esi); /* 0x1102B960: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1102B962: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(eax + 0x4); /* 0x1102B966: mov ecx, dword ptr [eax + 4] */
    ecx = MEM32(ecx + esi + 0x38); /* 0x1102B969: mov ecx, dword ptr [ecx + esi + 0x38] */
    /* test ecx, ecx */ /* 0x1102B96D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102B976; /* 0x1102B96F: je 0x1102b976 */
L_1102B971:
    edx = MEM32(ecx); /* 0x1102B971: mov edx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(edx + 0x8)); /* 0x1102B973: call dword ptr [edx + 8] */
    RECOMP_FLAGS_IN();
L_1102B976:
    eax = edi; /* 0x1102B976: mov eax, edi */
    RECOMP_CALL(sub_1103B340); /* 0x1102B978: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102B97D: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102B97E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102B97Eu);

L_1102B97E:
    PUSH32(esp, 8); /* 0x1102B97E: push 8 */
    eax = 0x1103ECD7u; /* 0x1102B980: mov eax, 0x1103ecd7 */
    RECOMP_CALL(sub_1103B372); /* 0x1102B985: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1102B98A: mov esi, ecx */
    eax = MEM32(esi); /* 0x1102B98C: mov eax, dword ptr [esi] */
    MEM32(ebp + (-0x14)) = esi; /* 0x1102B98E: mov dword ptr [ebp - 0x14], esi */
    eax = MEM32(eax + 0x4); /* 0x1102B991: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1102B994: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x1102B998: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102B9A1; /* 0x1102B99A: je 0x1102b9a1 */
L_1102B99C:
    eax = MEM32(ecx); /* 0x1102B99C: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1102B99E: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_1102B9A1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1102B9A1: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1102B9A3: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1102B9A5: inc edi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1102B9A6: mov dword ptr [ebp - 4], ebx */
    PUSH32(esp, edi); /* 0x1102B9A9: push edi */
    ecx = esi; /* 0x1102B9AA: mov ecx, esi */
    RECOMP_CALL(sub_11010675); /* 0x1102B9AC: call 0x11010675 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x10)) = (uint8_t)(LO8(eax)); /* 0x1102B9B1: mov byte ptr [ebp - 0x10], al */
    eax = MEM32(esi); /* 0x1102B9B4: mov eax, dword ptr [esi] */
    MEM32(ebp + (-0x4)) = edi; /* 0x1102B9B6: mov dword ptr [ebp - 4], edi */
    ecx = MEM32(eax + 0x4); /* 0x1102B9B9: mov ecx, dword ptr [eax + 4] */
    /* test MEM8(ecx + esi + 0xC), 6 */ /* 0x1102B9BC: test byte ptr [ecx + esi + 0xc], 6 */
    _flag_a = (uint32_t)(MEM8(ecx + esi + 0xC)) << 24; _flag_b = (uint32_t)(6) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102B9EE; /* 0x1102B9C1: jne 0x1102b9ee */
L_1102B9C3:
    ecx = MEM32(ecx + esi + 0x38); /* 0x1102B9C3: mov ecx, dword ptr [ecx + esi + 0x38] */
    PUSH32(esp, edi); /* 0x1102B9C7: push edi */
    PUSH32(esp, edi); /* 0x1102B9C8: push edi */
    PUSH32(esp, ebx); /* 0x1102B9C9: push ebx */
    eax = MEM32(ecx); /* 0x1102B9CA: mov eax, dword ptr [ecx] */
    PUSH32(esp, ebx); /* 0x1102B9CC: push ebx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1102B9CD: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(eax + 0x28)); /* 0x1102B9D0: call dword ptr [eax + 0x28] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x1102B9D3: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1102B9D5: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(eax + 0x4); /* 0x1102B9D9: mov ecx, dword ptr [eax + 4] */
    ecx = MEM32(ecx + esi + 0x38); /* 0x1102B9DC: mov ecx, dword ptr [ecx + esi + 0x38] */
    /* test ecx, ecx */ /* 0x1102B9E0: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102B9E9; /* 0x1102B9E2: je 0x1102b9e9 */
L_1102B9E4:
    edx = MEM32(ecx); /* 0x1102B9E4: mov edx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(edx + 0x8)); /* 0x1102B9E6: call dword ptr [edx + 8] */
    RECOMP_FLAGS_IN();
L_1102B9E9:
    eax = MEM32(ebp + 0x8); /* 0x1102B9E9: mov eax, dword ptr [ebp + 8] */
    goto L_1102BA21; /* 0x1102B9EC: jmp 0x1102ba21 */
L_1102B9EE:
    edi = MEM32(ebp + 0x8); /* 0x1102B9EE: mov edi, dword ptr [ebp + 8] */
    eax = MEM32(0x110032C8); /* 0x1102B9F1: mov eax, dword ptr [0x110032c8] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1102B9F6: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi) = eax; /* 0x1102B9FA: mov dword ptr [edi], eax */
    eax = MEM32(0x110032CC); /* 0x1102B9FC: mov eax, dword ptr [0x110032cc] */
    MEM32(edi + 0x4) = eax; /* 0x1102BA01: mov dword ptr [edi + 4], eax */
    MEM32(edi + 0x8) = ebx; /* 0x1102BA04: mov dword ptr [edi + 8], ebx */
    MEM32(edi + 0xC) = ebx; /* 0x1102BA07: mov dword ptr [edi + 0xc], ebx */
    MEM32(edi + 0x10) = ebx; /* 0x1102BA0A: mov dword ptr [edi + 0x10], ebx */
    eax = MEM32(esi); /* 0x1102BA0D: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x1102BA0F: mov ecx, dword ptr [eax + 4] */
    ecx = MEM32(ecx + esi + 0x38); /* 0x1102BA12: mov ecx, dword ptr [ecx + esi + 0x38] */
    /* test ecx, ecx */ /* 0x1102BA16: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102BA1F; /* 0x1102BA18: je 0x1102ba1f */
L_1102BA1A:
    edx = MEM32(ecx); /* 0x1102BA1A: mov edx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(edx + 0x8)); /* 0x1102BA1C: call dword ptr [edx + 8] */
    RECOMP_FLAGS_IN();
L_1102BA1F:
    eax = edi; /* 0x1102BA1F: mov eax, edi */
L_1102BA21:
    RECOMP_CALL(sub_1103B340); /* 0x1102BA21: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1102BA26: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1102BA29(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102BA29u);

L_1102BA29:
    PUSH32(esp, 8); /* 0x1102BA29: push 8 */
    eax = 0x1103ECD7u; /* 0x1102BA2B: mov eax, 0x1103ecd7 */
    RECOMP_CALL(sub_1103B372); /* 0x1102BA30: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1102BA35: mov esi, ecx */
    eax = MEM32(esi); /* 0x1102BA37: mov eax, dword ptr [esi] */
    MEM32(ebp + (-0x14)) = esi; /* 0x1102BA39: mov dword ptr [ebp - 0x14], esi */
    eax = MEM32(eax + 0x4); /* 0x1102BA3C: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1102BA3F: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x1102BA43: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102BA4C; /* 0x1102BA45: je 0x1102ba4c */
L_1102BA47:
    eax = MEM32(ecx); /* 0x1102BA47: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1102BA49: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_1102BA4C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1102BA4C: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1102BA4E: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1102BA50: inc edi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1102BA51: mov dword ptr [ebp - 4], ebx */
    PUSH32(esp, edi); /* 0x1102BA54: push edi */
    ecx = esi; /* 0x1102BA55: mov ecx, esi */
    RECOMP_CALL(sub_11010989); /* 0x1102BA57: call 0x11010989 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x10)) = (uint8_t)(LO8(eax)); /* 0x1102BA5C: mov byte ptr [ebp - 0x10], al */
    eax = MEM32(esi); /* 0x1102BA5F: mov eax, dword ptr [esi] */
    MEM32(ebp + (-0x4)) = edi; /* 0x1102BA61: mov dword ptr [ebp - 4], edi */
    ecx = MEM32(eax + 0x4); /* 0x1102BA64: mov ecx, dword ptr [eax + 4] */
    /* test MEM8(ecx + esi + 0xC), 6 */ /* 0x1102BA67: test byte ptr [ecx + esi + 0xc], 6 */
    _flag_a = (uint32_t)(MEM8(ecx + esi + 0xC)) << 24; _flag_b = (uint32_t)(6) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102BA99; /* 0x1102BA6C: jne 0x1102ba99 */
L_1102BA6E:
    ecx = MEM32(ecx + esi + 0x38); /* 0x1102BA6E: mov ecx, dword ptr [ecx + esi + 0x38] */
    PUSH32(esp, edi); /* 0x1102BA72: push edi */
    PUSH32(esp, edi); /* 0x1102BA73: push edi */
    PUSH32(esp, ebx); /* 0x1102BA74: push ebx */
    eax = MEM32(ecx); /* 0x1102BA75: mov eax, dword ptr [ecx] */
    PUSH32(esp, ebx); /* 0x1102BA77: push ebx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1102BA78: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(eax + 0x28)); /* 0x1102BA7B: call dword ptr [eax + 0x28] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x1102BA7E: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1102BA80: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(eax + 0x4); /* 0x1102BA84: mov ecx, dword ptr [eax + 4] */
    ecx = MEM32(ecx + esi + 0x38); /* 0x1102BA87: mov ecx, dword ptr [ecx + esi + 0x38] */
    /* test ecx, ecx */ /* 0x1102BA8B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102BA94; /* 0x1102BA8D: je 0x1102ba94 */
L_1102BA8F:
    edx = MEM32(ecx); /* 0x1102BA8F: mov edx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(edx + 0x8)); /* 0x1102BA91: call dword ptr [edx + 8] */
    RECOMP_FLAGS_IN();
L_1102BA94:
    eax = MEM32(ebp + 0x8); /* 0x1102BA94: mov eax, dword ptr [ebp + 8] */
    goto L_1102BACC; /* 0x1102BA97: jmp 0x1102bacc */
L_1102BA99:
    edi = MEM32(ebp + 0x8); /* 0x1102BA99: mov edi, dword ptr [ebp + 8] */
    eax = MEM32(0x110032C8); /* 0x1102BA9C: mov eax, dword ptr [0x110032c8] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1102BAA1: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi) = eax; /* 0x1102BAA5: mov dword ptr [edi], eax */
    eax = MEM32(0x110032CC); /* 0x1102BAA7: mov eax, dword ptr [0x110032cc] */
    MEM32(edi + 0x4) = eax; /* 0x1102BAAC: mov dword ptr [edi + 4], eax */
    MEM32(edi + 0x8) = ebx; /* 0x1102BAAF: mov dword ptr [edi + 8], ebx */
    MEM32(edi + 0xC) = ebx; /* 0x1102BAB2: mov dword ptr [edi + 0xc], ebx */
    MEM32(edi + 0x10) = ebx; /* 0x1102BAB5: mov dword ptr [edi + 0x10], ebx */
    eax = MEM32(esi); /* 0x1102BAB8: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x1102BABA: mov ecx, dword ptr [eax + 4] */
    ecx = MEM32(ecx + esi + 0x38); /* 0x1102BABD: mov ecx, dword ptr [ecx + esi + 0x38] */
    /* test ecx, ecx */ /* 0x1102BAC1: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102BACA; /* 0x1102BAC3: je 0x1102baca */
L_1102BAC5:
    edx = MEM32(ecx); /* 0x1102BAC5: mov edx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(edx + 0x8)); /* 0x1102BAC7: call dword ptr [edx + 8] */
    RECOMP_FLAGS_IN();
L_1102BACA:
    eax = edi; /* 0x1102BACA: mov eax, edi */
L_1102BACC:
    RECOMP_CALL(sub_1103B340); /* 0x1102BACC: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1102BAD1: ret 4 */
    RECOMP_REGS_OUT();
}
