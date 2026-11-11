#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_1101A80F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101A80Fu);

L_1101A80F:
    ecx = MEM32(ebp + (-0x18)); /* 0x1101A80F: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101A812: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x1101A814: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x1101A816: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1101A819: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x1101A81B: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101A81E: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), ebx */ /* 0x1101A821: cmp dword ptr [edx + 0x38], ebx */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101A829; /* 0x1101A824: jne 0x1101a829 */
L_1101A826:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101A826: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1101A829:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x1101A829: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x1101A82C: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x1101A82F: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1101A846; /* 0x1101A832: jne 0x1101a846 */
L_1101A834:
    eax = 0x1101A83Au; /* 0x1101A834: mov eax, 0x1101a83a */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101A839: ret  */
L_1101A846:
    PUSH32(esp, ebx); /* 0x1101A846: push ebx */
    PUSH32(esp, ebx); /* 0x1101A847: push ebx */
    RECOMP_CALL(sub_1103B33A); /* 0x1101A848: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1101A84Du, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1101A83A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101A83Au);

    goto L_1101A83A;
L_1101A7EF:
    eax = MEM32(esi); /* 0x1101A7EF: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x1101A7F1: push ebx */
    PUSH32(esp, edi); /* 0x1101A7F2: push edi */
    ecx = MEM32(eax + 0x4); /* 0x1101A7F3: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101A7F6: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1101A7F8: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x2C); /* 0x1101A7FD: lea ecx, [ebp - 0x2c] */
    RECOMP_CALL(sub_11010E6E); /* 0x1101A800: call 0x11010e6e */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1101A805: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101A807: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1101A80C: ret 4 */
L_1101A83A:
    esi = MEM32(ebp + (-0x18)); /* 0x1101A83A: mov esi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101A83D: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101A83F: mov dword ptr [ebp - 4], ebx */
    edi = ebx; /* 0x1101A842: mov edi, ebx */
    RECOMP_BACKEDGE();
    goto L_1101A7EF; /* 0x1101A844: jmp 0x1101a7ef */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1101A84E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101A84Eu);
    RECOMP_EH_ENTER();

L_1101A84E:
    PUSH32(esp, 0x28u); /* 0x1101A84E: push 0x28 */
    eax = 0x1103DBDAu; /* 0x1101A850: mov eax, 0x1103dbda */
    RECOMP_CALL(sub_1103B3DB); /* 0x1101A855: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1101A85A: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x1101A85C: mov dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101A85F: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x2C); /* 0x1101A861: lea ecx, [ebp - 0x2c] */
    PUSH32(esp, esi); /* 0x1101A864: push esi */
    edi = ebx; /* 0x1101A865: mov edi, ebx */
    RECOMP_CALL(sub_11010E19); /* 0x1101A867: call 0x11010e19 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101A86C: mov dword ptr [ebp - 4], ebx */
    /* cmp MEM8(ebp + (-0x28)), LO8(ebx) */ /* 0x1101A86F: cmp byte ptr [ebp - 0x28], bl */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x28))) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101A8D4; /* 0x1101A872: je 0x1101a8d4 */
L_1101A874:
    eax = ebp + (-0x18); /* 0x1101A874: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x1101A877: push eax */
    eax = MEM32(esi); /* 0x1101A878: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x1101A87A: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101A87D: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1100F94A); /* 0x1101A87F: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1101A884: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1101A885: mov byte ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_110159A3); /* 0x1101A889: call 0x110159a3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101A88E: pop ecx */
    ecx = ebp + (-0x18); /* 0x1101A88F: lea ecx, [ebp - 0x18] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1101A892: mov dword ptr [ebp - 0x1c], eax */
    RECOMP_CALL(sub_1100E431); /* 0x1101A895: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi); /* 0x1101A89A: mov ecx, dword ptr [esi] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1101A89C: push dword ptr [ebp + 8] */
    edx = MEM32(ebp + (-0x1C)); /* 0x1101A89F: mov edx, dword ptr [ebp - 0x1c] */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x1101A8A2: mov byte ptr [ebp - 4], 2 */
    ecx = MEM32(ecx + 0x4); /* 0x1101A8A6: mov ecx, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101A8A9: add ecx, esi */
    _flag_k = FK_ADD;
    SET_LO8(eax, MEM8(ecx + 0x40)); /* 0x1101A8AB: mov al, byte ptr [ecx + 0x40] */
    MEM8(ebp + (-0x20)) = (uint8_t)(LO8(eax)); /* 0x1101A8AE: mov byte ptr [ebp - 0x20], al */
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x1101A8B1: push dword ptr [ebp - 0x20] */
    eax = MEM32(edx); /* 0x1101A8B4: mov eax, dword ptr [edx] */
    PUSH32(esp, ecx); /* 0x1101A8B6: push ecx */
    MEM8(ebp + (-0x34)) = (uint8_t)(LO8(ebx)); /* 0x1101A8B7: mov byte ptr [ebp - 0x34], bl */
    PUSH32(esp, MEM32(ecx + 0x38)); /* 0x1101A8BA: push dword ptr [ecx + 0x38] */
    ecx = ebp + (-0x34); /* 0x1101A8BD: lea ecx, [ebp - 0x34] */
    PUSH32(esp, MEM32(ebp + (-0x34))); /* 0x1101A8C0: push dword ptr [ebp - 0x34] */
    PUSH32(esp, ecx); /* 0x1101A8C3: push ecx */
    ecx = edx; /* 0x1101A8C4: mov ecx, edx */
    RECOMP_ICALL(MEM32(eax + 0x24)); /* 0x1101A8C6: call dword ptr [eax + 0x24] */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(ebp + (-0x34)), LO8(ebx) */ /* 0x1101A8C9: cmp byte ptr [ebp - 0x34], bl */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x34))) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101A8D1; /* 0x1101A8CC: je 0x1101a8d1 */
L_1101A8CE:
    PUSH32(esp, 4); /* 0x1101A8CE: push 4 */
    edi = POP32_VAL(esp); /* 0x1101A8D0: pop edi */
L_1101A8D1:
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101A8D1: mov dword ptr [ebp - 4], ebx */
L_1101A8D4:
    eax = MEM32(esi); /* 0x1101A8D4: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x1101A8D6: push ebx */
    PUSH32(esp, edi); /* 0x1101A8D7: push edi */
    ecx = MEM32(eax + 0x4); /* 0x1101A8D8: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101A8DB: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1101A8DD: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x2C); /* 0x1101A8E2: lea ecx, [ebp - 0x2c] */
    RECOMP_CALL(sub_11010E6E); /* 0x1101A8E5: call 0x11010e6e */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1101A8EA: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101A8EC: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x1101A8F1: ret 4 */
L_1101A91F:
    esi = MEM32(ebp + (-0x14)); /* 0x1101A91F: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101A922: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101A924: mov dword ptr [ebp - 4], ebx */
    edi = ebx; /* 0x1101A927: mov edi, ebx */
    RECOMP_BACKEDGE();
    goto L_1101A8D4; /* 0x1101A929: jmp 0x1101a8d4 */
    { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x1101A91Fu: goto L_1101A91F;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_1101A8F4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101A8F4u);

L_1101A8F4:
    ecx = MEM32(ebp + (-0x14)); /* 0x1101A8F4: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101A8F7: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x1101A8F9: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x1101A8FB: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1101A8FE: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x1101A900: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101A903: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), ebx */ /* 0x1101A906: cmp dword ptr [edx + 0x38], ebx */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101A90E; /* 0x1101A909: jne 0x1101a90e */
L_1101A90B:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101A90B: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1101A90E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x1101A90E: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x1101A911: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x1101A914: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1101A92B; /* 0x1101A917: jne 0x1101a92b */
L_1101A919:
    eax = 0x1101A91Fu; /* 0x1101A919: mov eax, 0x1101a91f */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101A91E: ret  */
L_1101A92B:
    PUSH32(esp, ebx); /* 0x1101A92B: push ebx */
    PUSH32(esp, ebx); /* 0x1101A92C: push ebx */
    RECOMP_CALL(sub_1103B33A); /* 0x1101A92D: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1101A932u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1101A91F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101A91Fu);

    goto L_1101A91F;
L_1101A8D4:
    eax = MEM32(esi); /* 0x1101A8D4: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x1101A8D6: push ebx */
    PUSH32(esp, edi); /* 0x1101A8D7: push edi */
    ecx = MEM32(eax + 0x4); /* 0x1101A8D8: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101A8DB: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1101A8DD: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x2C); /* 0x1101A8E2: lea ecx, [ebp - 0x2c] */
    RECOMP_CALL(sub_11010E6E); /* 0x1101A8E5: call 0x11010e6e */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1101A8EA: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101A8EC: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1101A8F1: ret 4 */
L_1101A91F:
    esi = MEM32(ebp + (-0x14)); /* 0x1101A91F: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101A922: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101A924: mov dword ptr [ebp - 4], ebx */
    edi = ebx; /* 0x1101A927: mov edi, ebx */
    RECOMP_BACKEDGE();
    goto L_1101A8D4; /* 0x1101A929: jmp 0x1101a8d4 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1101A933(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101A933u);
    RECOMP_EH_ENTER();

L_1101A933:
    PUSH32(esp, 0x28u); /* 0x1101A933: push 0x28 */
    eax = 0x1103DC05u; /* 0x1101A935: mov eax, 0x1103dc05 */
    RECOMP_CALL(sub_1103B3DB); /* 0x1101A93A: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1101A93F: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x1101A941: mov dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101A944: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x2C); /* 0x1101A946: lea ecx, [ebp - 0x2c] */
    PUSH32(esp, esi); /* 0x1101A949: push esi */
    edi = ebx; /* 0x1101A94A: mov edi, ebx */
    RECOMP_CALL(sub_11010E19); /* 0x1101A94C: call 0x11010e19 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101A951: mov dword ptr [ebp - 4], ebx */
    /* cmp MEM8(ebp + (-0x28)), LO8(ebx) */ /* 0x1101A954: cmp byte ptr [ebp - 0x28], bl */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x28))) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101A9B9; /* 0x1101A957: je 0x1101a9b9 */
L_1101A959:
    eax = ebp + (-0x18); /* 0x1101A959: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x1101A95C: push eax */
    eax = MEM32(esi); /* 0x1101A95D: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x1101A95F: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101A962: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1100F94A); /* 0x1101A964: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1101A969: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1101A96A: mov byte ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_110159A3); /* 0x1101A96E: call 0x110159a3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101A973: pop ecx */
    ecx = ebp + (-0x18); /* 0x1101A974: lea ecx, [ebp - 0x18] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1101A977: mov dword ptr [ebp - 0x1c], eax */
    RECOMP_CALL(sub_1100E431); /* 0x1101A97A: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi); /* 0x1101A97F: mov ecx, dword ptr [esi] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1101A981: push dword ptr [ebp + 8] */
    edx = MEM32(ebp + (-0x1C)); /* 0x1101A984: mov edx, dword ptr [ebp - 0x1c] */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x1101A987: mov byte ptr [ebp - 4], 2 */
    ecx = MEM32(ecx + 0x4); /* 0x1101A98B: mov ecx, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101A98E: add ecx, esi */
    _flag_k = FK_ADD;
    SET_LO8(eax, MEM8(ecx + 0x40)); /* 0x1101A990: mov al, byte ptr [ecx + 0x40] */
    MEM8(ebp + (-0x20)) = (uint8_t)(LO8(eax)); /* 0x1101A993: mov byte ptr [ebp - 0x20], al */
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x1101A996: push dword ptr [ebp - 0x20] */
    eax = MEM32(edx); /* 0x1101A999: mov eax, dword ptr [edx] */
    PUSH32(esp, ecx); /* 0x1101A99B: push ecx */
    MEM8(ebp + (-0x34)) = (uint8_t)(LO8(ebx)); /* 0x1101A99C: mov byte ptr [ebp - 0x34], bl */
    PUSH32(esp, MEM32(ecx + 0x38)); /* 0x1101A99F: push dword ptr [ecx + 0x38] */
    ecx = ebp + (-0x34); /* 0x1101A9A2: lea ecx, [ebp - 0x34] */
    PUSH32(esp, MEM32(ebp + (-0x34))); /* 0x1101A9A5: push dword ptr [ebp - 0x34] */
    PUSH32(esp, ecx); /* 0x1101A9A8: push ecx */
    ecx = edx; /* 0x1101A9A9: mov ecx, edx */
    RECOMP_ICALL(MEM32(eax + 0x20)); /* 0x1101A9AB: call dword ptr [eax + 0x20] */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(ebp + (-0x34)), LO8(ebx) */ /* 0x1101A9AE: cmp byte ptr [ebp - 0x34], bl */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x34))) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101A9B6; /* 0x1101A9B1: je 0x1101a9b6 */
L_1101A9B3:
    PUSH32(esp, 4); /* 0x1101A9B3: push 4 */
    edi = POP32_VAL(esp); /* 0x1101A9B5: pop edi */
L_1101A9B6:
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101A9B6: mov dword ptr [ebp - 4], ebx */
L_1101A9B9:
    eax = MEM32(esi); /* 0x1101A9B9: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x1101A9BB: push ebx */
    PUSH32(esp, edi); /* 0x1101A9BC: push edi */
    ecx = MEM32(eax + 0x4); /* 0x1101A9BD: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101A9C0: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1101A9C2: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x2C); /* 0x1101A9C7: lea ecx, [ebp - 0x2c] */
    RECOMP_CALL(sub_11010E6E); /* 0x1101A9CA: call 0x11010e6e */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1101A9CF: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101A9D1: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x1101A9D6: ret 4 */
L_1101AA04:
    esi = MEM32(ebp + (-0x14)); /* 0x1101AA04: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101AA07: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101AA09: mov dword ptr [ebp - 4], ebx */
    edi = ebx; /* 0x1101AA0C: mov edi, ebx */
    RECOMP_BACKEDGE();
    goto L_1101A9B9; /* 0x1101AA0E: jmp 0x1101a9b9 */
    { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x1101AA04u: goto L_1101AA04;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_1101A9D9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101A9D9u);

L_1101A9D9:
    ecx = MEM32(ebp + (-0x14)); /* 0x1101A9D9: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101A9DC: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x1101A9DE: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x1101A9E0: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1101A9E3: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x1101A9E5: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101A9E8: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), ebx */ /* 0x1101A9EB: cmp dword ptr [edx + 0x38], ebx */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101A9F3; /* 0x1101A9EE: jne 0x1101a9f3 */
L_1101A9F0:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101A9F0: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1101A9F3:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x1101A9F3: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x1101A9F6: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x1101A9F9: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1101AA10; /* 0x1101A9FC: jne 0x1101aa10 */
L_1101A9FE:
    eax = 0x1101AA04u; /* 0x1101A9FE: mov eax, 0x1101aa04 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101AA03: ret  */
L_1101AA10:
    PUSH32(esp, ebx); /* 0x1101AA10: push ebx */
    PUSH32(esp, ebx); /* 0x1101AA11: push ebx */
    RECOMP_CALL(sub_1103B33A); /* 0x1101AA12: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1101AA17u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1101AA04(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101AA04u);

    goto L_1101AA04;
L_1101A9B9:
    eax = MEM32(esi); /* 0x1101A9B9: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x1101A9BB: push ebx */
    PUSH32(esp, edi); /* 0x1101A9BC: push edi */
    ecx = MEM32(eax + 0x4); /* 0x1101A9BD: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101A9C0: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1101A9C2: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x2C); /* 0x1101A9C7: lea ecx, [ebp - 0x2c] */
    RECOMP_CALL(sub_11010E6E); /* 0x1101A9CA: call 0x11010e6e */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1101A9CF: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101A9D1: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1101A9D6: ret 4 */
L_1101AA04:
    esi = MEM32(ebp + (-0x14)); /* 0x1101AA04: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101AA07: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101AA09: mov dword ptr [ebp - 4], ebx */
    edi = ebx; /* 0x1101AA0C: mov edi, ebx */
    RECOMP_BACKEDGE();
    goto L_1101A9B9; /* 0x1101AA0E: jmp 0x1101a9b9 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1101AA18(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101AA18u);
    RECOMP_EH_ENTER();

L_1101AA18:
    PUSH32(esp, 0x28u); /* 0x1101AA18: push 0x28 */
    eax = 0x1103DC30u; /* 0x1101AA1A: mov eax, 0x1103dc30 */
    RECOMP_CALL(sub_1103B3DB); /* 0x1101AA1F: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1101AA24: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x1101AA26: mov dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101AA29: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x2C); /* 0x1101AA2B: lea ecx, [ebp - 0x2c] */
    PUSH32(esp, esi); /* 0x1101AA2E: push esi */
    edi = ebx; /* 0x1101AA2F: mov edi, ebx */
    RECOMP_CALL(sub_11010E19); /* 0x1101AA31: call 0x11010e19 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101AA36: mov dword ptr [ebp - 4], ebx */
    /* cmp MEM8(ebp + (-0x28)), LO8(ebx) */ /* 0x1101AA39: cmp byte ptr [ebp - 0x28], bl */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x28))) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101AAA3; /* 0x1101AA3C: je 0x1101aaa3 */
L_1101AA3E:
    eax = ebp + (-0x18); /* 0x1101AA3E: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x1101AA41: push eax */
    eax = MEM32(esi); /* 0x1101AA42: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x1101AA44: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101AA47: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1100F94A); /* 0x1101AA49: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1101AA4E: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1101AA4F: mov byte ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_110159A3); /* 0x1101AA53: call 0x110159a3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101AA58: pop ecx */
    ecx = ebp + (-0x18); /* 0x1101AA59: lea ecx, [ebp - 0x18] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1101AA5C: mov dword ptr [ebp - 0x1c], eax */
    RECOMP_CALL(sub_1100E431); /* 0x1101AA5F: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi); /* 0x1101AA64: mov ecx, dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x1101AA66: fld dword ptr [ebp + 8] */
    edx = MEM32(ebp + (-0x1C)); /* 0x1101AA69: mov edx, dword ptr [ebp - 0x1c] */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x1101AA6C: mov byte ptr [ebp - 4], 2 */
    ecx = MEM32(ecx + 0x4); /* 0x1101AA70: mov ecx, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101AA73: add ecx, esi */
    _flag_k = FK_ADD;
    PUSH32(esp, ecx); /* 0x1101AA75: push ecx */
    PUSH32(esp, ecx); /* 0x1101AA76: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x1101AA77: fstp qword ptr [esp] */
    SET_LO8(eax, MEM8(ecx + 0x40)); /* 0x1101AA7A: mov al, byte ptr [ecx + 0x40] */
    MEM8(ebp + (-0x20)) = (uint8_t)(LO8(eax)); /* 0x1101AA7D: mov byte ptr [ebp - 0x20], al */
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x1101AA80: push dword ptr [ebp - 0x20] */
    eax = MEM32(edx); /* 0x1101AA83: mov eax, dword ptr [edx] */
    PUSH32(esp, ecx); /* 0x1101AA85: push ecx */
    MEM8(ebp + (-0x34)) = (uint8_t)(LO8(ebx)); /* 0x1101AA86: mov byte ptr [ebp - 0x34], bl */
    PUSH32(esp, MEM32(ecx + 0x38)); /* 0x1101AA89: push dword ptr [ecx + 0x38] */
    ecx = ebp + (-0x34); /* 0x1101AA8C: lea ecx, [ebp - 0x34] */
    PUSH32(esp, MEM32(ebp + (-0x34))); /* 0x1101AA8F: push dword ptr [ebp - 0x34] */
    PUSH32(esp, ecx); /* 0x1101AA92: push ecx */
    ecx = edx; /* 0x1101AA93: mov ecx, edx */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x1101AA95: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(ebp + (-0x34)), LO8(ebx) */ /* 0x1101AA98: cmp byte ptr [ebp - 0x34], bl */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x34))) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101AAA0; /* 0x1101AA9B: je 0x1101aaa0 */
L_1101AA9D:
    PUSH32(esp, 4); /* 0x1101AA9D: push 4 */
    edi = POP32_VAL(esp); /* 0x1101AA9F: pop edi */
L_1101AAA0:
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101AAA0: mov dword ptr [ebp - 4], ebx */
L_1101AAA3:
    eax = MEM32(esi); /* 0x1101AAA3: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x1101AAA5: push ebx */
    PUSH32(esp, edi); /* 0x1101AAA6: push edi */
    ecx = MEM32(eax + 0x4); /* 0x1101AAA7: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101AAAA: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1101AAAC: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x2C); /* 0x1101AAB1: lea ecx, [ebp - 0x2c] */
    RECOMP_CALL(sub_11010E6E); /* 0x1101AAB4: call 0x11010e6e */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1101AAB9: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101AABB: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x1101AAC0: ret 4 */
L_1101AAEE:
    esi = MEM32(ebp + (-0x14)); /* 0x1101AAEE: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101AAF1: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101AAF3: mov dword ptr [ebp - 4], ebx */
    edi = ebx; /* 0x1101AAF6: mov edi, ebx */
    RECOMP_BACKEDGE();
    goto L_1101AAA3; /* 0x1101AAF8: jmp 0x1101aaa3 */
    { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x1101AAEEu: goto L_1101AAEE;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_1101AAC3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101AAC3u);

L_1101AAC3:
    ecx = MEM32(ebp + (-0x14)); /* 0x1101AAC3: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101AAC6: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x1101AAC8: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x1101AACA: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1101AACD: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x1101AACF: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101AAD2: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), ebx */ /* 0x1101AAD5: cmp dword ptr [edx + 0x38], ebx */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101AADD; /* 0x1101AAD8: jne 0x1101aadd */
L_1101AADA:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101AADA: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1101AADD:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x1101AADD: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x1101AAE0: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x1101AAE3: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1101AAFA; /* 0x1101AAE6: jne 0x1101aafa */
L_1101AAE8:
    eax = 0x1101AAEEu; /* 0x1101AAE8: mov eax, 0x1101aaee */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101AAED: ret  */
L_1101AAFA:
    PUSH32(esp, ebx); /* 0x1101AAFA: push ebx */
    PUSH32(esp, ebx); /* 0x1101AAFB: push ebx */
    RECOMP_CALL(sub_1103B33A); /* 0x1101AAFC: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1101AB01u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1101AAEE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101AAEEu);

    goto L_1101AAEE;
L_1101AAA3:
    eax = MEM32(esi); /* 0x1101AAA3: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x1101AAA5: push ebx */
    PUSH32(esp, edi); /* 0x1101AAA6: push edi */
    ecx = MEM32(eax + 0x4); /* 0x1101AAA7: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101AAAA: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1101AAAC: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x2C); /* 0x1101AAB1: lea ecx, [ebp - 0x2c] */
    RECOMP_CALL(sub_11010E6E); /* 0x1101AAB4: call 0x11010e6e */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1101AAB9: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101AABB: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1101AAC0: ret 4 */
L_1101AAEE:
    esi = MEM32(ebp + (-0x14)); /* 0x1101AAEE: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101AAF1: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101AAF3: mov dword ptr [ebp - 4], ebx */
    edi = ebx; /* 0x1101AAF6: mov edi, ebx */
    RECOMP_BACKEDGE();
    goto L_1101AAA3; /* 0x1101AAF8: jmp 0x1101aaa3 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1101AB02(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101AB02u);
    RECOMP_EH_ENTER();

L_1101AB02:
    PUSH32(esp, 0x28u); /* 0x1101AB02: push 0x28 */
    eax = 0x1103DC5Bu; /* 0x1101AB04: mov eax, 0x1103dc5b */
    RECOMP_CALL(sub_1103B3DB); /* 0x1101AB09: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1101AB0E: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x1101AB10: mov dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101AB13: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x2C); /* 0x1101AB15: lea ecx, [ebp - 0x2c] */
    PUSH32(esp, esi); /* 0x1101AB18: push esi */
    edi = ebx; /* 0x1101AB19: mov edi, ebx */
    RECOMP_CALL(sub_11010E19); /* 0x1101AB1B: call 0x11010e19 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101AB20: mov dword ptr [ebp - 4], ebx */
    /* cmp MEM8(ebp + (-0x28)), LO8(ebx) */ /* 0x1101AB23: cmp byte ptr [ebp - 0x28], bl */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x28))) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101AB8D; /* 0x1101AB26: je 0x1101ab8d */
L_1101AB28:
    eax = ebp + (-0x18); /* 0x1101AB28: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x1101AB2B: push eax */
    eax = MEM32(esi); /* 0x1101AB2C: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x1101AB2E: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101AB31: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1100F94A); /* 0x1101AB33: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1101AB38: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1101AB39: mov byte ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_110159A3); /* 0x1101AB3D: call 0x110159a3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101AB42: pop ecx */
    ecx = ebp + (-0x18); /* 0x1101AB43: lea ecx, [ebp - 0x18] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1101AB46: mov dword ptr [ebp - 0x1c], eax */
    RECOMP_CALL(sub_1100E431); /* 0x1101AB49: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi); /* 0x1101AB4E: mov ecx, dword ptr [esi] */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x1101AB50: fld qword ptr [ebp + 8] */
    edx = MEM32(ebp + (-0x1C)); /* 0x1101AB53: mov edx, dword ptr [ebp - 0x1c] */
    MEM8(ebp + (-0x34)) = (uint8_t)(LO8(ebx)); /* 0x1101AB56: mov byte ptr [ebp - 0x34], bl */
    ecx = MEM32(ecx + 0x4); /* 0x1101AB59: mov ecx, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101AB5C: add ecx, esi */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x1101AB5E: mov byte ptr [ebp - 4], 2 */
    PUSH32(esp, ecx); /* 0x1101AB62: push ecx */
    PUSH32(esp, ecx); /* 0x1101AB63: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x1101AB64: fstp qword ptr [esp] */
    SET_LO8(eax, MEM8(ecx + 0x40)); /* 0x1101AB67: mov al, byte ptr [ecx + 0x40] */
    MEM8(ebp + (-0x20)) = (uint8_t)(LO8(eax)); /* 0x1101AB6A: mov byte ptr [ebp - 0x20], al */
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x1101AB6D: push dword ptr [ebp - 0x20] */
    eax = MEM32(edx); /* 0x1101AB70: mov eax, dword ptr [edx] */
    PUSH32(esp, ecx); /* 0x1101AB72: push ecx */
    PUSH32(esp, MEM32(ecx + 0x38)); /* 0x1101AB73: push dword ptr [ecx + 0x38] */
    ecx = ebp + 0x8; /* 0x1101AB76: lea ecx, [ebp + 8] */
    PUSH32(esp, MEM32(ebp + (-0x34))); /* 0x1101AB79: push dword ptr [ebp - 0x34] */
    PUSH32(esp, ecx); /* 0x1101AB7C: push ecx */
    ecx = edx; /* 0x1101AB7D: mov ecx, edx */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x1101AB7F: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(ebp + 0x8), LO8(ebx) */ /* 0x1101AB82: cmp byte ptr [ebp + 8], bl */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101AB8A; /* 0x1101AB85: je 0x1101ab8a */
L_1101AB87:
    PUSH32(esp, 4); /* 0x1101AB87: push 4 */
    edi = POP32_VAL(esp); /* 0x1101AB89: pop edi */
L_1101AB8A:
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101AB8A: mov dword ptr [ebp - 4], ebx */
L_1101AB8D:
    eax = MEM32(esi); /* 0x1101AB8D: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x1101AB8F: push ebx */
    PUSH32(esp, edi); /* 0x1101AB90: push edi */
    ecx = MEM32(eax + 0x4); /* 0x1101AB91: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101AB94: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1101AB96: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x2C); /* 0x1101AB9B: lea ecx, [ebp - 0x2c] */
    RECOMP_CALL(sub_11010E6E); /* 0x1101AB9E: call 0x11010e6e */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1101ABA3: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101ABA5: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x1101ABAA: ret 8 */
L_1101ABD8:
    esi = MEM32(ebp + (-0x14)); /* 0x1101ABD8: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101ABDB: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101ABDD: mov dword ptr [ebp - 4], ebx */
    edi = ebx; /* 0x1101ABE0: mov edi, ebx */
    RECOMP_BACKEDGE();
    goto L_1101AB8D; /* 0x1101ABE2: jmp 0x1101ab8d */
    { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x1101ABD8u: goto L_1101ABD8;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_1101ABAD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101ABADu);

L_1101ABAD:
    ecx = MEM32(ebp + (-0x14)); /* 0x1101ABAD: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101ABB0: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x1101ABB2: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x1101ABB4: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1101ABB7: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x1101ABB9: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101ABBC: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), ebx */ /* 0x1101ABBF: cmp dword ptr [edx + 0x38], ebx */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101ABC7; /* 0x1101ABC2: jne 0x1101abc7 */
L_1101ABC4:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101ABC4: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1101ABC7:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x1101ABC7: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x1101ABCA: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x1101ABCD: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1101ABE4; /* 0x1101ABD0: jne 0x1101abe4 */
L_1101ABD2:
    eax = 0x1101ABD8u; /* 0x1101ABD2: mov eax, 0x1101abd8 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101ABD7: ret  */
L_1101ABE4:
    PUSH32(esp, ebx); /* 0x1101ABE4: push ebx */
    PUSH32(esp, ebx); /* 0x1101ABE5: push ebx */
    RECOMP_CALL(sub_1103B33A); /* 0x1101ABE6: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1101ABEBu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1101ABD8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101ABD8u);

    goto L_1101ABD8;
L_1101AB8D:
    eax = MEM32(esi); /* 0x1101AB8D: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x1101AB8F: push ebx */
    PUSH32(esp, edi); /* 0x1101AB90: push edi */
    ecx = MEM32(eax + 0x4); /* 0x1101AB91: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101AB94: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1101AB96: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x2C); /* 0x1101AB9B: lea ecx, [ebp - 0x2c] */
    RECOMP_CALL(sub_11010E6E); /* 0x1101AB9E: call 0x11010e6e */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1101ABA3: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101ABA5: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1101ABAA: ret 8 */
L_1101ABD8:
    esi = MEM32(ebp + (-0x14)); /* 0x1101ABD8: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101ABDB: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101ABDD: mov dword ptr [ebp - 4], ebx */
    edi = ebx; /* 0x1101ABE0: mov edi, ebx */
    RECOMP_BACKEDGE();
    goto L_1101AB8D; /* 0x1101ABE2: jmp 0x1101ab8d */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1101ABEC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101ABECu);
    RECOMP_EH_ENTER();

L_1101ABEC:
    PUSH32(esp, 0x28u); /* 0x1101ABEC: push 0x28 */
    eax = 0x1103DC86u; /* 0x1101ABEE: mov eax, 0x1103dc86 */
    RECOMP_CALL(sub_1103B3DB); /* 0x1101ABF3: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1101ABF8: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x1101ABFA: mov dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101ABFD: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x2C); /* 0x1101ABFF: lea ecx, [ebp - 0x2c] */
    PUSH32(esp, esi); /* 0x1101AC02: push esi */
    edi = ebx; /* 0x1101AC03: mov edi, ebx */
    RECOMP_CALL(sub_11010E19); /* 0x1101AC05: call 0x11010e19 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101AC0A: mov dword ptr [ebp - 4], ebx */
    /* cmp MEM8(ebp + (-0x28)), LO8(ebx) */ /* 0x1101AC0D: cmp byte ptr [ebp - 0x28], bl */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x28))) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101AC77; /* 0x1101AC10: je 0x1101ac77 */
L_1101AC12:
    eax = ebp + (-0x18); /* 0x1101AC12: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x1101AC15: push eax */
    eax = MEM32(esi); /* 0x1101AC16: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x1101AC18: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101AC1B: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1100F94A); /* 0x1101AC1D: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1101AC22: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1101AC23: mov byte ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_110159A3); /* 0x1101AC27: call 0x110159a3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101AC2C: pop ecx */
    ecx = ebp + (-0x18); /* 0x1101AC2D: lea ecx, [ebp - 0x18] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1101AC30: mov dword ptr [ebp - 0x1c], eax */
    RECOMP_CALL(sub_1100E431); /* 0x1101AC33: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi); /* 0x1101AC38: mov ecx, dword ptr [esi] */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x1101AC3A: fld qword ptr [ebp + 8] */
    edx = MEM32(ebp + (-0x1C)); /* 0x1101AC3D: mov edx, dword ptr [ebp - 0x1c] */
    MEM8(ebp + (-0x34)) = (uint8_t)(LO8(ebx)); /* 0x1101AC40: mov byte ptr [ebp - 0x34], bl */
    ecx = MEM32(ecx + 0x4); /* 0x1101AC43: mov ecx, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101AC46: add ecx, esi */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x1101AC48: mov byte ptr [ebp - 4], 2 */
    PUSH32(esp, ecx); /* 0x1101AC4C: push ecx */
    PUSH32(esp, ecx); /* 0x1101AC4D: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x1101AC4E: fstp qword ptr [esp] */
    SET_LO8(eax, MEM8(ecx + 0x40)); /* 0x1101AC51: mov al, byte ptr [ecx + 0x40] */
    MEM8(ebp + (-0x20)) = (uint8_t)(LO8(eax)); /* 0x1101AC54: mov byte ptr [ebp - 0x20], al */
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x1101AC57: push dword ptr [ebp - 0x20] */
    eax = MEM32(edx); /* 0x1101AC5A: mov eax, dword ptr [edx] */
    PUSH32(esp, ecx); /* 0x1101AC5C: push ecx */
    PUSH32(esp, MEM32(ecx + 0x38)); /* 0x1101AC5D: push dword ptr [ecx + 0x38] */
    ecx = ebp + 0x8; /* 0x1101AC60: lea ecx, [ebp + 8] */
    PUSH32(esp, MEM32(ebp + (-0x34))); /* 0x1101AC63: push dword ptr [ebp - 0x34] */
    PUSH32(esp, ecx); /* 0x1101AC66: push ecx */
    ecx = edx; /* 0x1101AC67: mov ecx, edx */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x1101AC69: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(ebp + 0x8), LO8(ebx) */ /* 0x1101AC6C: cmp byte ptr [ebp + 8], bl */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101AC74; /* 0x1101AC6F: je 0x1101ac74 */
L_1101AC71:
    PUSH32(esp, 4); /* 0x1101AC71: push 4 */
    edi = POP32_VAL(esp); /* 0x1101AC73: pop edi */
L_1101AC74:
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101AC74: mov dword ptr [ebp - 4], ebx */
L_1101AC77:
    eax = MEM32(esi); /* 0x1101AC77: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x1101AC79: push ebx */
    PUSH32(esp, edi); /* 0x1101AC7A: push edi */
    ecx = MEM32(eax + 0x4); /* 0x1101AC7B: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101AC7E: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1101AC80: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x2C); /* 0x1101AC85: lea ecx, [ebp - 0x2c] */
    RECOMP_CALL(sub_11010E6E); /* 0x1101AC88: call 0x11010e6e */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1101AC8D: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101AC8F: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x1101AC94: ret 8 */
L_1101ACC2:
    esi = MEM32(ebp + (-0x14)); /* 0x1101ACC2: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101ACC5: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101ACC7: mov dword ptr [ebp - 4], ebx */
    edi = ebx; /* 0x1101ACCA: mov edi, ebx */
    RECOMP_BACKEDGE();
    goto L_1101AC77; /* 0x1101ACCC: jmp 0x1101ac77 */
    { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x1101ACC2u: goto L_1101ACC2;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_1101AC97(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101AC97u);

L_1101AC97:
    ecx = MEM32(ebp + (-0x14)); /* 0x1101AC97: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101AC9A: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x1101AC9C: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x1101AC9E: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1101ACA1: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x1101ACA3: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101ACA6: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), ebx */ /* 0x1101ACA9: cmp dword ptr [edx + 0x38], ebx */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101ACB1; /* 0x1101ACAC: jne 0x1101acb1 */
L_1101ACAE:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101ACAE: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1101ACB1:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x1101ACB1: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x1101ACB4: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x1101ACB7: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1101ACCE; /* 0x1101ACBA: jne 0x1101acce */
L_1101ACBC:
    eax = 0x1101ACC2u; /* 0x1101ACBC: mov eax, 0x1101acc2 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101ACC1: ret  */
L_1101ACCE:
    PUSH32(esp, ebx); /* 0x1101ACCE: push ebx */
    PUSH32(esp, ebx); /* 0x1101ACCF: push ebx */
    RECOMP_CALL(sub_1103B33A); /* 0x1101ACD0: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1101ACD5u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1101ACC2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101ACC2u);

    goto L_1101ACC2;
L_1101AC77:
    eax = MEM32(esi); /* 0x1101AC77: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x1101AC79: push ebx */
    PUSH32(esp, edi); /* 0x1101AC7A: push edi */
    ecx = MEM32(eax + 0x4); /* 0x1101AC7B: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101AC7E: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1101AC80: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x2C); /* 0x1101AC85: lea ecx, [ebp - 0x2c] */
    RECOMP_CALL(sub_11010E6E); /* 0x1101AC88: call 0x11010e6e */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1101AC8D: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101AC8F: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1101AC94: ret 8 */
L_1101ACC2:
    esi = MEM32(ebp + (-0x14)); /* 0x1101ACC2: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101ACC5: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101ACC7: mov dword ptr [ebp - 4], ebx */
    edi = ebx; /* 0x1101ACCA: mov edi, ebx */
    RECOMP_BACKEDGE();
    goto L_1101AC77; /* 0x1101ACCC: jmp 0x1101ac77 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1101ACD6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101ACD6u);
    RECOMP_EH_ENTER();

L_1101ACD6:
    PUSH32(esp, 0x1Cu); /* 0x1101ACD6: push 0x1c */
    eax = 0x1103DCA9u; /* 0x1101ACD8: mov eax, 0x1103dca9 */
    RECOMP_CALL(sub_1103B3DB); /* 0x1101ACDD: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1101ACE2: mov esi, ecx */
    MEM32(ebp + (-0x18)) = esi; /* 0x1101ACE4: mov dword ptr [ebp - 0x18], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101ACE7: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x28); /* 0x1101ACE9: lea ecx, [ebp - 0x28] */
    edi = ebx; /* 0x1101ACEC: mov edi, ebx */
    MEM8(ebp + (-0x11)) = (uint8_t)(LO8(ebx)); /* 0x1101ACEE: mov byte ptr [ebp - 0x11], bl */
    PUSH32(esp, esi); /* 0x1101ACF1: push esi */
    MEM32(ebp + (-0x1C)) = edi; /* 0x1101ACF2: mov dword ptr [ebp - 0x1c], edi */
    RECOMP_CALL(sub_11010E19); /* 0x1101ACF5: call 0x11010e19 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101ACFA: mov dword ptr [ebp - 4], ebx */
    /* cmp MEM8(ebp + (-0x24)), LO8(ebx) */ /* 0x1101ACFD: cmp byte ptr [ebp - 0x24], bl */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x24))) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101ADD3; /* 0x1101AD00: je 0x1101add3 */
L_1101AD06:
    eax = MEM32(ebp + 0x8); /* 0x1101AD06: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x1101AD09: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101ADD3; /* 0x1101AD0B: je 0x1101add3 */
L_1101AD11:
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x1101AD11: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1101AD14:
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1101AD14: mov byte ptr [ebp - 4], 1 */
    ecx = eax; /* 0x1101AD18: mov ecx, eax */
    /* cmp edi, 0xFFFFFFFFu */ /* 0x1101AD1A: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101AD26; /* 0x1101AD1D: jne 0x1101ad26 */
L_1101AD1F:
    RECOMP_CALL(sub_11010336); /* 0x1101AD1F: call 0x11010336 */
    RECOMP_FLAGS_IN();
    goto L_1101AD2B; /* 0x1101AD24: jmp 0x1101ad2b */
L_1101AD26:
    RECOMP_CALL(sub_11010355); /* 0x1101AD26: call 0x11010355 */
    RECOMP_FLAGS_IN();
L_1101AD2B:
    edi = eax; /* 0x1101AD2B: mov edi, eax */
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101AD2D: mov dword ptr [ebp - 4], ebx */
    MEM32(ebp + (-0x20)) = edi; /* 0x1101AD30: mov dword ptr [ebp - 0x20], edi */
    /* cmp edi, 0xFFFFFFFFu */ /* 0x1101AD33: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101ADD0; /* 0x1101AD36: je 0x1101add0 */
L_1101AD3C:
    eax = MEM32(esi); /* 0x1101AD3C: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x1101AD3E: push edi */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x1101AD3F: mov byte ptr [ebp - 4], 3 */
    eax = MEM32(eax + 0x4); /* 0x1101AD43: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1101AD46: mov ecx, dword ptr [eax + esi + 0x38] */
    RECOMP_CALL(sub_1102B39E); /* 0x1101AD4A: call 0x1102b39e */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1101AD4F: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101AD95; /* 0x1101AD52: jne 0x1101ad95 */
L_1101AD54:
    edi = MEM32(ebp + (-0x1C)); /* 0x1101AD54: mov edi, dword ptr [ebp - 0x1c] */
    PUSH32(esp, 4); /* 0x1101AD57: push 4 */
    ecx = POP32_VAL(esp); /* 0x1101AD59: pop ecx */
    _flag_a = (uint32_t)((edi | ecx)); _flag_b = (uint32_t)((edi | ecx));
    edi = edi | ecx; /* 0x1101AD5A: or edi, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(ebx)); /* 0x1101AD5C: mov byte ptr [ebp - 4], bl */
    goto L_1101ADD6; /* 0x1101AD5F: jmp 0x1101add6 */
L_1101AD8D:
    esi = MEM32(ebp + (-0x18)); /* 0x1101AD8D: mov esi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101AD90: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(ebp + (-0x20)); /* 0x1101AD92: mov edi, dword ptr [ebp - 0x20] */
L_1101AD95:
    eax = MEM32(ebp + 0x8); /* 0x1101AD95: mov eax, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101AD98: mov dword ptr [ebp - 4], ebx */
    MEM8(ebp + (-0x11)) = (uint8_t)(1); /* 0x1101AD9B: mov byte ptr [ebp - 0x11], 1 */
    RECOMP_BACKEDGE();
    goto L_1101AD14; /* 0x1101AD9F: jmp 0x1101ad14 */
L_1101ADD0:
    edi = MEM32(ebp + (-0x1C)); /* 0x1101ADD0: mov edi, dword ptr [ebp - 0x1c] */
L_1101ADD3:
    PUSH32(esp, 4); /* 0x1101ADD3: push 4 */
    ecx = POP32_VAL(esp); /* 0x1101ADD5: pop ecx */
L_1101ADD6:
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x1101ADD6: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(esi); /* 0x1101ADDA: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x1101ADDC: mov eax, dword ptr [eax + 4] */
    MEM32(eax + esi + 0x20) = ebx; /* 0x1101ADDF: mov dword ptr [eax + esi + 0x20], ebx */
    MEM32(eax + esi + 0x24) = ebx; /* 0x1101ADE3: mov dword ptr [eax + esi + 0x24], ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101ADF4; /* 0x1101ADE7: je 0x1101adf4 */
L_1101ADE9:
    /* cmp MEM8(ebp + (-0x11)), 0 */ /* 0x1101ADE9: cmp byte ptr [ebp - 0x11], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x11))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ecx = edi; /* 0x1101ADED: mov ecx, edi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101ADF4; /* 0x1101ADEF: jne 0x1101adf4 */
L_1101ADF1:
    _flag_a = (uint32_t)((ecx | 2)); _flag_b = (uint32_t)((ecx | 2));
    ecx = ecx | 2; /* 0x1101ADF1: or ecx, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1101ADF4:
    eax = MEM32(esi); /* 0x1101ADF4: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x1101ADF6: push ebx */
    PUSH32(esp, ecx); /* 0x1101ADF7: push ecx */
    ecx = MEM32(eax + 0x4); /* 0x1101ADF8: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101ADFB: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1101ADFD: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x28); /* 0x1101AE02: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_11010E6E); /* 0x1101AE05: call 0x11010e6e */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1101AE0A: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101AE0C: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x1101AE11: ret 4 */
  _ljump:
    switch (_itail_tgt) {
      case 0x1101AD8Du: goto L_1101AD8D;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_1101AD61(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101AD61u);

L_1101AD61:
    ecx = MEM32(ebp + (-0x18)); /* 0x1101AD61: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101AD64: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x1101AD66: push 4 */
    eax = MEM32(ecx); /* 0x1101AD68: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x1101AD6A: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1101AD6D: add edx, ecx */
    _flag_k = FK_ADD;
    ecx = POP32_VAL(esp); /* 0x1101AD6F: pop ecx */
    eax = MEM32(edx + 0xC); /* 0x1101AD70: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x1101AD73: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), ebx */ /* 0x1101AD75: cmp dword ptr [edx + 0x38], ebx */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101AD7C; /* 0x1101AD78: jne 0x1101ad7c */
L_1101AD7A:
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x1101AD7A: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1101AD7C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x1101AD7C: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x1101AD7F: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x1101AD82: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1101ADA4; /* 0x1101AD85: jne 0x1101ada4 */
L_1101AD87:
    eax = 0x1101AD8Du; /* 0x1101AD87: mov eax, 0x1101ad8d */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101AD8C: ret  */
L_1101ADA4:
    PUSH32(esp, ebx); /* 0x1101ADA4: push ebx */
    PUSH32(esp, ebx); /* 0x1101ADA5: push ebx */
    RECOMP_CALL(sub_1103B33A); /* 0x1101ADA6: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x18)); /* 0x1101ADAB: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101ADAE: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x1101ADB0: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x1101ADB2: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1101ADB5: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x1101ADB7: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 2)); _flag_b = (uint32_t)((eax | 2));
    eax = eax | 2; /* 0x1101ADBA: or eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), ebx */ /* 0x1101ADBD: cmp dword ptr [edx + 0x38], ebx */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101ADC5; /* 0x1101ADC0: jne 0x1101adc5 */
L_1101ADC2:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101ADC2: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1101ADC5:
    PUSH32(esp, ebx); /* 0x1101ADC5: push ebx */
    PUSH32(esp, eax); /* 0x1101ADC6: push eax */
    ecx = edx; /* 0x1101ADC7: mov ecx, edx */
    RECOMP_CALL(sub_1100F771); /* 0x1101ADC9: call 0x1100f771 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1101ADA4; /* 0x1101ADCE: jmp 0x1101ada4 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1101AD8D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101AD8Du);

    goto L_1101AD8D;
L_1101AD14:
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1101AD14: mov byte ptr [ebp - 4], 1 */
    ecx = eax; /* 0x1101AD18: mov ecx, eax */
    /* cmp edi, 0xFFFFFFFFu */ /* 0x1101AD1A: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101AD26; /* 0x1101AD1D: jne 0x1101ad26 */
L_1101AD1F:
    RECOMP_CALL(sub_11010336); /* 0x1101AD1F: call 0x11010336 */
    RECOMP_FLAGS_IN();
    goto L_1101AD2B; /* 0x1101AD24: jmp 0x1101ad2b */
L_1101AD26:
    RECOMP_CALL(sub_11010355); /* 0x1101AD26: call 0x11010355 */
    RECOMP_FLAGS_IN();
L_1101AD2B:
    edi = eax; /* 0x1101AD2B: mov edi, eax */
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101AD2D: mov dword ptr [ebp - 4], ebx */
    MEM32(ebp + (-0x20)) = edi; /* 0x1101AD30: mov dword ptr [ebp - 0x20], edi */
    /* cmp edi, 0xFFFFFFFFu */ /* 0x1101AD33: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101ADD0; /* 0x1101AD36: je 0x1101add0 */
L_1101AD3C:
    eax = MEM32(esi); /* 0x1101AD3C: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x1101AD3E: push edi */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x1101AD3F: mov byte ptr [ebp - 4], 3 */
    eax = MEM32(eax + 0x4); /* 0x1101AD43: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1101AD46: mov ecx, dword ptr [eax + esi + 0x38] */
    RECOMP_CALL(sub_1102B39E); /* 0x1101AD4A: call 0x1102b39e */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1101AD4F: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101AD95; /* 0x1101AD52: jne 0x1101ad95 */
L_1101AD54:
    edi = MEM32(ebp + (-0x1C)); /* 0x1101AD54: mov edi, dword ptr [ebp - 0x1c] */
    PUSH32(esp, 4); /* 0x1101AD57: push 4 */
    ecx = POP32_VAL(esp); /* 0x1101AD59: pop ecx */
    _flag_a = (uint32_t)((edi | ecx)); _flag_b = (uint32_t)((edi | ecx));
    edi = edi | ecx; /* 0x1101AD5A: or edi, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(ebx)); /* 0x1101AD5C: mov byte ptr [ebp - 4], bl */
    goto L_1101ADD6; /* 0x1101AD5F: jmp 0x1101add6 */
L_1101AD8D:
    esi = MEM32(ebp + (-0x18)); /* 0x1101AD8D: mov esi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101AD90: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(ebp + (-0x20)); /* 0x1101AD92: mov edi, dword ptr [ebp - 0x20] */
L_1101AD95:
    eax = MEM32(ebp + 0x8); /* 0x1101AD95: mov eax, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101AD98: mov dword ptr [ebp - 4], ebx */
    MEM8(ebp + (-0x11)) = (uint8_t)(1); /* 0x1101AD9B: mov byte ptr [ebp - 0x11], 1 */
    RECOMP_BACKEDGE();
    goto L_1101AD14; /* 0x1101AD9F: jmp 0x1101ad14 */
L_1101ADD0:
    edi = MEM32(ebp + (-0x1C)); /* 0x1101ADD0: mov edi, dword ptr [ebp - 0x1c] */
    PUSH32(esp, 4); /* 0x1101ADD3: push 4 */
    ecx = POP32_VAL(esp); /* 0x1101ADD5: pop ecx */
L_1101ADD6:
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x1101ADD6: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(esi); /* 0x1101ADDA: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x1101ADDC: mov eax, dword ptr [eax + 4] */
    MEM32(eax + esi + 0x20) = ebx; /* 0x1101ADDF: mov dword ptr [eax + esi + 0x20], ebx */
    MEM32(eax + esi + 0x24) = ebx; /* 0x1101ADE3: mov dword ptr [eax + esi + 0x24], ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101ADF4; /* 0x1101ADE7: je 0x1101adf4 */
L_1101ADE9:
    /* cmp MEM8(ebp + (-0x11)), 0 */ /* 0x1101ADE9: cmp byte ptr [ebp - 0x11], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x11))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ecx = edi; /* 0x1101ADED: mov ecx, edi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101ADF4; /* 0x1101ADEF: jne 0x1101adf4 */
L_1101ADF1:
    _flag_a = (uint32_t)((ecx | 2)); _flag_b = (uint32_t)((ecx | 2));
    ecx = ecx | 2; /* 0x1101ADF1: or ecx, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1101ADF4:
    eax = MEM32(esi); /* 0x1101ADF4: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x1101ADF6: push ebx */
    PUSH32(esp, ecx); /* 0x1101ADF7: push ecx */
    ecx = MEM32(eax + 0x4); /* 0x1101ADF8: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101ADFB: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1101ADFD: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x28); /* 0x1101AE02: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_11010E6E); /* 0x1101AE05: call 0x11010e6e */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1101AE0A: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101AE0C: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1101AE11: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1101ADAB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101ADABu);

    goto L_1101ADAB;
L_1101ADA4:
    PUSH32(esp, ebx); /* 0x1101ADA4: push ebx */
    PUSH32(esp, ebx); /* 0x1101ADA5: push ebx */
    RECOMP_CALL(sub_1103B33A); /* 0x1101ADA6: call 0x1103b33a */
    RECOMP_FLAGS_IN();
L_1101ADAB:
    ecx = MEM32(ebp + (-0x18)); /* 0x1101ADAB: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101ADAE: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x1101ADB0: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x1101ADB2: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1101ADB5: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x1101ADB7: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 2)); _flag_b = (uint32_t)((eax | 2));
    eax = eax | 2; /* 0x1101ADBA: or eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), ebx */ /* 0x1101ADBD: cmp dword ptr [edx + 0x38], ebx */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101ADC5; /* 0x1101ADC0: jne 0x1101adc5 */
L_1101ADC2:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101ADC2: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1101ADC5:
    PUSH32(esp, ebx); /* 0x1101ADC5: push ebx */
    PUSH32(esp, eax); /* 0x1101ADC6: push eax */
    ecx = edx; /* 0x1101ADC7: mov ecx, edx */
    RECOMP_CALL(sub_1100F771); /* 0x1101ADC9: call 0x1100f771 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1101ADA4; /* 0x1101ADCE: jmp 0x1101ada4 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1101AE14(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101AE14u);
    RECOMP_EH_ENTER();

L_1101AE14:
    PUSH32(esp, 0x28u); /* 0x1101AE14: push 0x28 */
    eax = 0x1103DCD4u; /* 0x1101AE16: mov eax, 0x1103dcd4 */
    RECOMP_CALL(sub_1103B3DB); /* 0x1101AE1B: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1101AE20: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x1101AE22: mov dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101AE25: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x2C); /* 0x1101AE27: lea ecx, [ebp - 0x2c] */
    PUSH32(esp, esi); /* 0x1101AE2A: push esi */
    edi = ebx; /* 0x1101AE2B: mov edi, ebx */
    RECOMP_CALL(sub_11010E19); /* 0x1101AE2D: call 0x11010e19 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101AE32: mov dword ptr [ebp - 4], ebx */
    /* cmp MEM8(ebp + (-0x28)), LO8(ebx) */ /* 0x1101AE35: cmp byte ptr [ebp - 0x28], bl */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x28))) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101AE9A; /* 0x1101AE38: je 0x1101ae9a */
L_1101AE3A:
    eax = ebp + (-0x18); /* 0x1101AE3A: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x1101AE3D: push eax */
    eax = MEM32(esi); /* 0x1101AE3E: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x1101AE40: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101AE43: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1100F94A); /* 0x1101AE45: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1101AE4A: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1101AE4B: mov byte ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_110159A3); /* 0x1101AE4F: call 0x110159a3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101AE54: pop ecx */
    ecx = ebp + (-0x18); /* 0x1101AE55: lea ecx, [ebp - 0x18] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1101AE58: mov dword ptr [ebp - 0x1c], eax */
    RECOMP_CALL(sub_1100E431); /* 0x1101AE5B: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi); /* 0x1101AE60: mov ecx, dword ptr [esi] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1101AE62: push dword ptr [ebp + 8] */
    edx = MEM32(ebp + (-0x1C)); /* 0x1101AE65: mov edx, dword ptr [ebp - 0x1c] */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x1101AE68: mov byte ptr [ebp - 4], 2 */
    ecx = MEM32(ecx + 0x4); /* 0x1101AE6C: mov ecx, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101AE6F: add ecx, esi */
    _flag_k = FK_ADD;
    SET_LO8(eax, MEM8(ecx + 0x40)); /* 0x1101AE71: mov al, byte ptr [ecx + 0x40] */
    MEM8(ebp + (-0x20)) = (uint8_t)(LO8(eax)); /* 0x1101AE74: mov byte ptr [ebp - 0x20], al */
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x1101AE77: push dword ptr [ebp - 0x20] */
    eax = MEM32(edx); /* 0x1101AE7A: mov eax, dword ptr [edx] */
    PUSH32(esp, ecx); /* 0x1101AE7C: push ecx */
    MEM8(ebp + (-0x34)) = (uint8_t)(LO8(ebx)); /* 0x1101AE7D: mov byte ptr [ebp - 0x34], bl */
    PUSH32(esp, MEM32(ecx + 0x38)); /* 0x1101AE80: push dword ptr [ecx + 0x38] */
    ecx = ebp + (-0x34); /* 0x1101AE83: lea ecx, [ebp - 0x34] */
    PUSH32(esp, MEM32(ebp + (-0x34))); /* 0x1101AE86: push dword ptr [ebp - 0x34] */
    PUSH32(esp, ecx); /* 0x1101AE89: push ecx */
    ecx = edx; /* 0x1101AE8A: mov ecx, edx */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x1101AE8C: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(ebp + (-0x34)), LO8(ebx) */ /* 0x1101AE8F: cmp byte ptr [ebp - 0x34], bl */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x34))) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101AE97; /* 0x1101AE92: je 0x1101ae97 */
L_1101AE94:
    PUSH32(esp, 4); /* 0x1101AE94: push 4 */
    edi = POP32_VAL(esp); /* 0x1101AE96: pop edi */
L_1101AE97:
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101AE97: mov dword ptr [ebp - 4], ebx */
L_1101AE9A:
    eax = MEM32(esi); /* 0x1101AE9A: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x1101AE9C: push ebx */
    PUSH32(esp, edi); /* 0x1101AE9D: push edi */
    ecx = MEM32(eax + 0x4); /* 0x1101AE9E: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101AEA1: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1101AEA3: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x2C); /* 0x1101AEA8: lea ecx, [ebp - 0x2c] */
    RECOMP_CALL(sub_11010E6E); /* 0x1101AEAB: call 0x11010e6e */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1101AEB0: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101AEB2: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x1101AEB7: ret 4 */
L_1101AEE5:
    esi = MEM32(ebp + (-0x14)); /* 0x1101AEE5: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101AEE8: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101AEEA: mov dword ptr [ebp - 4], ebx */
    edi = ebx; /* 0x1101AEED: mov edi, ebx */
    RECOMP_BACKEDGE();
    goto L_1101AE9A; /* 0x1101AEEF: jmp 0x1101ae9a */
    { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x1101AEE5u: goto L_1101AEE5;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_1101AEBA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101AEBAu);

L_1101AEBA:
    ecx = MEM32(ebp + (-0x14)); /* 0x1101AEBA: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101AEBD: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x1101AEBF: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x1101AEC1: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1101AEC4: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x1101AEC6: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101AEC9: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), ebx */ /* 0x1101AECC: cmp dword ptr [edx + 0x38], ebx */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101AED4; /* 0x1101AECF: jne 0x1101aed4 */
L_1101AED1:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101AED1: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1101AED4:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x1101AED4: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x1101AED7: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x1101AEDA: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1101AEF1; /* 0x1101AEDD: jne 0x1101aef1 */
L_1101AEDF:
    eax = 0x1101AEE5u; /* 0x1101AEDF: mov eax, 0x1101aee5 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101AEE4: ret  */
L_1101AEF1:
    PUSH32(esp, ebx); /* 0x1101AEF1: push ebx */
    PUSH32(esp, ebx); /* 0x1101AEF2: push ebx */
    RECOMP_CALL(sub_1103B33A); /* 0x1101AEF3: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1101AEF8u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1101AEE5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101AEE5u);

    goto L_1101AEE5;
L_1101AE9A:
    eax = MEM32(esi); /* 0x1101AE9A: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x1101AE9C: push ebx */
    PUSH32(esp, edi); /* 0x1101AE9D: push edi */
    ecx = MEM32(eax + 0x4); /* 0x1101AE9E: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101AEA1: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1101AEA3: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x2C); /* 0x1101AEA8: lea ecx, [ebp - 0x2c] */
    RECOMP_CALL(sub_11010E6E); /* 0x1101AEAB: call 0x11010e6e */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1101AEB0: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101AEB2: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1101AEB7: ret 4 */
L_1101AEE5:
    esi = MEM32(ebp + (-0x14)); /* 0x1101AEE5: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101AEE8: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101AEEA: mov dword ptr [ebp - 4], ebx */
    edi = ebx; /* 0x1101AEED: mov edi, ebx */
    RECOMP_BACKEDGE();
    goto L_1101AE9A; /* 0x1101AEEF: jmp 0x1101ae9a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1101AEF9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101AEF9u);
    RECOMP_EH_ENTER();

L_1101AEF9:
    PUSH32(esp, 0x28u); /* 0x1101AEF9: push 0x28 */
    eax = 0x1103DCFFu; /* 0x1101AEFB: mov eax, 0x1103dcff */
    RECOMP_CALL(sub_1103B3DB); /* 0x1101AF00: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1101AF05: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x1101AF07: mov dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101AF0A: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x2C); /* 0x1101AF0C: lea ecx, [ebp - 0x2c] */
    PUSH32(esp, esi); /* 0x1101AF0F: push esi */
    edi = ebx; /* 0x1101AF10: mov edi, ebx */
    RECOMP_CALL(sub_11010E19); /* 0x1101AF12: call 0x11010e19 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101AF17: mov dword ptr [ebp - 4], ebx */
    /* cmp MEM8(ebp + (-0x28)), LO8(ebx) */ /* 0x1101AF1A: cmp byte ptr [ebp - 0x28], bl */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x28))) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101AF82; /* 0x1101AF1D: je 0x1101af82 */
L_1101AF1F:
    eax = ebp + (-0x18); /* 0x1101AF1F: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x1101AF22: push eax */
    eax = MEM32(esi); /* 0x1101AF23: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x1101AF25: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101AF28: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1100F94A); /* 0x1101AF2A: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1101AF2F: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1101AF30: mov byte ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_110159A3); /* 0x1101AF34: call 0x110159a3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101AF39: pop ecx */
    ecx = ebp + (-0x18); /* 0x1101AF3A: lea ecx, [ebp - 0x18] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1101AF3D: mov dword ptr [ebp - 0x1c], eax */
    RECOMP_CALL(sub_1100E431); /* 0x1101AF40: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi); /* 0x1101AF45: mov ecx, dword ptr [esi] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1101AF47: push dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + (-0x1C)); /* 0x1101AF4A: mov edx, dword ptr [ebp - 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1101AF4D: push dword ptr [ebp + 8] */
    ecx = MEM32(ecx + 0x4); /* 0x1101AF50: mov ecx, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101AF53: add ecx, esi */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x34)) = (uint8_t)(LO8(ebx)); /* 0x1101AF55: mov byte ptr [ebp - 0x34], bl */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x1101AF58: mov byte ptr [ebp - 4], 2 */
    SET_LO8(eax, MEM8(ecx + 0x40)); /* 0x1101AF5C: mov al, byte ptr [ecx + 0x40] */
    MEM8(ebp + (-0x20)) = (uint8_t)(LO8(eax)); /* 0x1101AF5F: mov byte ptr [ebp - 0x20], al */
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x1101AF62: push dword ptr [ebp - 0x20] */
    eax = MEM32(edx); /* 0x1101AF65: mov eax, dword ptr [edx] */
    PUSH32(esp, ecx); /* 0x1101AF67: push ecx */
    PUSH32(esp, MEM32(ecx + 0x38)); /* 0x1101AF68: push dword ptr [ecx + 0x38] */
    ecx = ebp + 0x8; /* 0x1101AF6B: lea ecx, [ebp + 8] */
    PUSH32(esp, MEM32(ebp + (-0x34))); /* 0x1101AF6E: push dword ptr [ebp - 0x34] */
    PUSH32(esp, ecx); /* 0x1101AF71: push ecx */
    ecx = edx; /* 0x1101AF72: mov ecx, edx */
    RECOMP_ICALL(MEM32(eax + 0x1C)); /* 0x1101AF74: call dword ptr [eax + 0x1c] */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(ebp + 0x8), LO8(ebx) */ /* 0x1101AF77: cmp byte ptr [ebp + 8], bl */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101AF7F; /* 0x1101AF7A: je 0x1101af7f */
L_1101AF7C:
    PUSH32(esp, 4); /* 0x1101AF7C: push 4 */
    edi = POP32_VAL(esp); /* 0x1101AF7E: pop edi */
L_1101AF7F:
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101AF7F: mov dword ptr [ebp - 4], ebx */
L_1101AF82:
    eax = MEM32(esi); /* 0x1101AF82: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x1101AF84: push ebx */
    PUSH32(esp, edi); /* 0x1101AF85: push edi */
    ecx = MEM32(eax + 0x4); /* 0x1101AF86: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101AF89: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1101AF8B: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x2C); /* 0x1101AF90: lea ecx, [ebp - 0x2c] */
    RECOMP_CALL(sub_11010E6E); /* 0x1101AF93: call 0x11010e6e */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1101AF98: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101AF9A: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x1101AF9F: ret 8 */
L_1101AFCD:
    esi = MEM32(ebp + (-0x14)); /* 0x1101AFCD: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101AFD0: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101AFD2: mov dword ptr [ebp - 4], ebx */
    edi = ebx; /* 0x1101AFD5: mov edi, ebx */
    RECOMP_BACKEDGE();
    goto L_1101AF82; /* 0x1101AFD7: jmp 0x1101af82 */
    { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x1101AFCDu: goto L_1101AFCD;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_1101AFA2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101AFA2u);

L_1101AFA2:
    ecx = MEM32(ebp + (-0x14)); /* 0x1101AFA2: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101AFA5: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x1101AFA7: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x1101AFA9: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1101AFAC: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x1101AFAE: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101AFB1: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), ebx */ /* 0x1101AFB4: cmp dword ptr [edx + 0x38], ebx */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101AFBC; /* 0x1101AFB7: jne 0x1101afbc */
L_1101AFB9:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101AFB9: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1101AFBC:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x1101AFBC: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x1101AFBF: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x1101AFC2: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1101AFD9; /* 0x1101AFC5: jne 0x1101afd9 */
L_1101AFC7:
    eax = 0x1101AFCDu; /* 0x1101AFC7: mov eax, 0x1101afcd */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101AFCC: ret  */
L_1101AFD9:
    PUSH32(esp, ebx); /* 0x1101AFD9: push ebx */
    PUSH32(esp, ebx); /* 0x1101AFDA: push ebx */
    RECOMP_CALL(sub_1103B33A); /* 0x1101AFDB: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1101AFE0u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1101AFCD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101AFCDu);

    goto L_1101AFCD;
L_1101AF82:
    eax = MEM32(esi); /* 0x1101AF82: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x1101AF84: push ebx */
    PUSH32(esp, edi); /* 0x1101AF85: push edi */
    ecx = MEM32(eax + 0x4); /* 0x1101AF86: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101AF89: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1101AF8B: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x2C); /* 0x1101AF90: lea ecx, [ebp - 0x2c] */
    RECOMP_CALL(sub_11010E6E); /* 0x1101AF93: call 0x11010e6e */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1101AF98: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101AF9A: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1101AF9F: ret 8 */
L_1101AFCD:
    esi = MEM32(ebp + (-0x14)); /* 0x1101AFCD: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101AFD0: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101AFD2: mov dword ptr [ebp - 4], ebx */
    edi = ebx; /* 0x1101AFD5: mov edi, ebx */
    RECOMP_BACKEDGE();
    goto L_1101AF82; /* 0x1101AFD7: jmp 0x1101af82 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1101AFE1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101AFE1u);
    RECOMP_EH_ENTER();

L_1101AFE1:
    PUSH32(esp, 0x28u); /* 0x1101AFE1: push 0x28 */
    eax = 0x1103DD2Au; /* 0x1101AFE3: mov eax, 0x1103dd2a */
    RECOMP_CALL(sub_1103B3DB); /* 0x1101AFE8: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1101AFED: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x1101AFEF: mov dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101AFF2: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x2C); /* 0x1101AFF4: lea ecx, [ebp - 0x2c] */
    PUSH32(esp, esi); /* 0x1101AFF7: push esi */
    edi = ebx; /* 0x1101AFF8: mov edi, ebx */
    RECOMP_CALL(sub_11010E19); /* 0x1101AFFA: call 0x11010e19 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101AFFF: mov dword ptr [ebp - 4], ebx */
    /* cmp MEM8(ebp + (-0x28)), LO8(ebx) */ /* 0x1101B002: cmp byte ptr [ebp - 0x28], bl */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x28))) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101B06A; /* 0x1101B005: je 0x1101b06a */
L_1101B007:
    eax = ebp + (-0x18); /* 0x1101B007: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x1101B00A: push eax */
    eax = MEM32(esi); /* 0x1101B00B: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x1101B00D: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101B010: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1100F94A); /* 0x1101B012: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1101B017: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1101B018: mov byte ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_110159A3); /* 0x1101B01C: call 0x110159a3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101B021: pop ecx */
    ecx = ebp + (-0x18); /* 0x1101B022: lea ecx, [ebp - 0x18] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1101B025: mov dword ptr [ebp - 0x1c], eax */
    RECOMP_CALL(sub_1100E431); /* 0x1101B028: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi); /* 0x1101B02D: mov ecx, dword ptr [esi] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1101B02F: push dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + (-0x1C)); /* 0x1101B032: mov edx, dword ptr [ebp - 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1101B035: push dword ptr [ebp + 8] */
    ecx = MEM32(ecx + 0x4); /* 0x1101B038: mov ecx, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101B03B: add ecx, esi */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x34)) = (uint8_t)(LO8(ebx)); /* 0x1101B03D: mov byte ptr [ebp - 0x34], bl */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x1101B040: mov byte ptr [ebp - 4], 2 */
    SET_LO8(eax, MEM8(ecx + 0x40)); /* 0x1101B044: mov al, byte ptr [ecx + 0x40] */
    MEM8(ebp + (-0x20)) = (uint8_t)(LO8(eax)); /* 0x1101B047: mov byte ptr [ebp - 0x20], al */
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x1101B04A: push dword ptr [ebp - 0x20] */
    eax = MEM32(edx); /* 0x1101B04D: mov eax, dword ptr [edx] */
    PUSH32(esp, ecx); /* 0x1101B04F: push ecx */
    PUSH32(esp, MEM32(ecx + 0x38)); /* 0x1101B050: push dword ptr [ecx + 0x38] */
    ecx = ebp + 0x8; /* 0x1101B053: lea ecx, [ebp + 8] */
    PUSH32(esp, MEM32(ebp + (-0x34))); /* 0x1101B056: push dword ptr [ebp - 0x34] */
    PUSH32(esp, ecx); /* 0x1101B059: push ecx */
    ecx = edx; /* 0x1101B05A: mov ecx, edx */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x1101B05C: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(ebp + 0x8), LO8(ebx) */ /* 0x1101B05F: cmp byte ptr [ebp + 8], bl */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101B067; /* 0x1101B062: je 0x1101b067 */
L_1101B064:
    PUSH32(esp, 4); /* 0x1101B064: push 4 */
    edi = POP32_VAL(esp); /* 0x1101B066: pop edi */
L_1101B067:
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101B067: mov dword ptr [ebp - 4], ebx */
L_1101B06A:
    eax = MEM32(esi); /* 0x1101B06A: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x1101B06C: push ebx */
    PUSH32(esp, edi); /* 0x1101B06D: push edi */
    ecx = MEM32(eax + 0x4); /* 0x1101B06E: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101B071: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1101B073: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x2C); /* 0x1101B078: lea ecx, [ebp - 0x2c] */
    RECOMP_CALL(sub_11010E6E); /* 0x1101B07B: call 0x11010e6e */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1101B080: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101B082: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x1101B087: ret 8 */
L_1101B0B5:
    esi = MEM32(ebp + (-0x14)); /* 0x1101B0B5: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101B0B8: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101B0BA: mov dword ptr [ebp - 4], ebx */
    edi = ebx; /* 0x1101B0BD: mov edi, ebx */
    RECOMP_BACKEDGE();
    goto L_1101B06A; /* 0x1101B0BF: jmp 0x1101b06a */
    { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x1101B0B5u: goto L_1101B0B5;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_1101B08A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101B08Au);

L_1101B08A:
    ecx = MEM32(ebp + (-0x14)); /* 0x1101B08A: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101B08D: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x1101B08F: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x1101B091: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1101B094: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x1101B096: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101B099: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), ebx */ /* 0x1101B09C: cmp dword ptr [edx + 0x38], ebx */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101B0A4; /* 0x1101B09F: jne 0x1101b0a4 */
L_1101B0A1:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101B0A1: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1101B0A4:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x1101B0A4: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x1101B0A7: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x1101B0AA: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1101B0C1; /* 0x1101B0AD: jne 0x1101b0c1 */
L_1101B0AF:
    eax = 0x1101B0B5u; /* 0x1101B0AF: mov eax, 0x1101b0b5 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101B0B4: ret  */
L_1101B0C1:
    PUSH32(esp, ebx); /* 0x1101B0C1: push ebx */
    PUSH32(esp, ebx); /* 0x1101B0C2: push ebx */
    RECOMP_CALL(sub_1103B33A); /* 0x1101B0C3: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1101B0C8u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1101B0B5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101B0B5u);

    goto L_1101B0B5;
L_1101B06A:
    eax = MEM32(esi); /* 0x1101B06A: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x1101B06C: push ebx */
    PUSH32(esp, edi); /* 0x1101B06D: push edi */
    ecx = MEM32(eax + 0x4); /* 0x1101B06E: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101B071: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1101B073: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x2C); /* 0x1101B078: lea ecx, [ebp - 0x2c] */
    RECOMP_CALL(sub_11010E6E); /* 0x1101B07B: call 0x11010e6e */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1101B080: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101B082: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1101B087: ret 8 */
L_1101B0B5:
    esi = MEM32(ebp + (-0x14)); /* 0x1101B0B5: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101B0B8: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101B0BA: mov dword ptr [ebp - 4], ebx */
    edi = ebx; /* 0x1101B0BD: mov edi, ebx */
    RECOMP_BACKEDGE();
    goto L_1101B06A; /* 0x1101B0BF: jmp 0x1101b06a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1101B0C9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101B0C9u);
    RECOMP_EH_ENTER();

L_1101B0C9:
    PUSH32(esp, 0x28u); /* 0x1101B0C9: push 0x28 */
    eax = 0x1103DD55u; /* 0x1101B0CB: mov eax, 0x1103dd55 */
    RECOMP_CALL(sub_1103B3DB); /* 0x1101B0D0: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1101B0D5: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x1101B0D7: mov dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101B0DA: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x2C); /* 0x1101B0DC: lea ecx, [ebp - 0x2c] */
    PUSH32(esp, esi); /* 0x1101B0DF: push esi */
    edi = ebx; /* 0x1101B0E0: mov edi, ebx */
    RECOMP_CALL(sub_11010E19); /* 0x1101B0E2: call 0x11010e19 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101B0E7: mov dword ptr [ebp - 4], ebx */
    /* cmp MEM8(ebp + (-0x28)), LO8(ebx) */ /* 0x1101B0EA: cmp byte ptr [ebp - 0x28], bl */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x28))) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101B14F; /* 0x1101B0ED: je 0x1101b14f */
L_1101B0EF:
    eax = ebp + (-0x18); /* 0x1101B0EF: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x1101B0F2: push eax */
    eax = MEM32(esi); /* 0x1101B0F3: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x1101B0F5: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101B0F8: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1100F94A); /* 0x1101B0FA: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1101B0FF: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1101B100: mov byte ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_110159A3); /* 0x1101B104: call 0x110159a3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101B109: pop ecx */
    ecx = ebp + (-0x18); /* 0x1101B10A: lea ecx, [ebp - 0x18] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1101B10D: mov dword ptr [ebp - 0x1c], eax */
    RECOMP_CALL(sub_1100E431); /* 0x1101B110: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi); /* 0x1101B115: mov ecx, dword ptr [esi] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1101B117: push dword ptr [ebp + 8] */
    edx = MEM32(ebp + (-0x1C)); /* 0x1101B11A: mov edx, dword ptr [ebp - 0x1c] */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x1101B11D: mov byte ptr [ebp - 4], 2 */
    ecx = MEM32(ecx + 0x4); /* 0x1101B121: mov ecx, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101B124: add ecx, esi */
    _flag_k = FK_ADD;
    SET_LO8(eax, MEM8(ecx + 0x40)); /* 0x1101B126: mov al, byte ptr [ecx + 0x40] */
    MEM8(ebp + (-0x20)) = (uint8_t)(LO8(eax)); /* 0x1101B129: mov byte ptr [ebp - 0x20], al */
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x1101B12C: push dword ptr [ebp - 0x20] */
    eax = MEM32(edx); /* 0x1101B12F: mov eax, dword ptr [edx] */
    PUSH32(esp, ecx); /* 0x1101B131: push ecx */
    MEM8(ebp + (-0x34)) = (uint8_t)(LO8(ebx)); /* 0x1101B132: mov byte ptr [ebp - 0x34], bl */
    PUSH32(esp, MEM32(ecx + 0x38)); /* 0x1101B135: push dword ptr [ecx + 0x38] */
    ecx = ebp + (-0x34); /* 0x1101B138: lea ecx, [ebp - 0x34] */
    PUSH32(esp, MEM32(ebp + (-0x34))); /* 0x1101B13B: push dword ptr [ebp - 0x34] */
    PUSH32(esp, ecx); /* 0x1101B13E: push ecx */
    ecx = edx; /* 0x1101B13F: mov ecx, edx */
    RECOMP_ICALL(MEM32(eax + 0x28)); /* 0x1101B141: call dword ptr [eax + 0x28] */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(ebp + (-0x34)), LO8(ebx) */ /* 0x1101B144: cmp byte ptr [ebp - 0x34], bl */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x34))) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101B14C; /* 0x1101B147: je 0x1101b14c */
L_1101B149:
    PUSH32(esp, 4); /* 0x1101B149: push 4 */
    edi = POP32_VAL(esp); /* 0x1101B14B: pop edi */
L_1101B14C:
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101B14C: mov dword ptr [ebp - 4], ebx */
L_1101B14F:
    eax = MEM32(esi); /* 0x1101B14F: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x1101B151: push ebx */
    PUSH32(esp, edi); /* 0x1101B152: push edi */
    ecx = MEM32(eax + 0x4); /* 0x1101B153: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101B156: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1101B158: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x2C); /* 0x1101B15D: lea ecx, [ebp - 0x2c] */
    RECOMP_CALL(sub_11010E6E); /* 0x1101B160: call 0x11010e6e */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1101B165: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101B167: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x1101B16C: ret 4 */
L_1101B19A:
    esi = MEM32(ebp + (-0x14)); /* 0x1101B19A: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101B19D: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101B19F: mov dword ptr [ebp - 4], ebx */
    edi = ebx; /* 0x1101B1A2: mov edi, ebx */
    RECOMP_BACKEDGE();
    goto L_1101B14F; /* 0x1101B1A4: jmp 0x1101b14f */
    { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x1101B19Au: goto L_1101B19A;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_1101B16F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101B16Fu);

L_1101B16F:
    ecx = MEM32(ebp + (-0x14)); /* 0x1101B16F: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101B172: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x1101B174: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x1101B176: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1101B179: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x1101B17B: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101B17E: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), ebx */ /* 0x1101B181: cmp dword ptr [edx + 0x38], ebx */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101B189; /* 0x1101B184: jne 0x1101b189 */
L_1101B186:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101B186: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1101B189:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x1101B189: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x1101B18C: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x1101B18F: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1101B1A6; /* 0x1101B192: jne 0x1101b1a6 */
L_1101B194:
    eax = 0x1101B19Au; /* 0x1101B194: mov eax, 0x1101b19a */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101B199: ret  */
L_1101B1A6:
    PUSH32(esp, ebx); /* 0x1101B1A6: push ebx */
    PUSH32(esp, ebx); /* 0x1101B1A7: push ebx */
    RECOMP_CALL(sub_1103B33A); /* 0x1101B1A8: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1101B1ADu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1101B19A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101B19Au);

    goto L_1101B19A;
L_1101B14F:
    eax = MEM32(esi); /* 0x1101B14F: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x1101B151: push ebx */
    PUSH32(esp, edi); /* 0x1101B152: push edi */
    ecx = MEM32(eax + 0x4); /* 0x1101B153: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101B156: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1101B158: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x2C); /* 0x1101B15D: lea ecx, [ebp - 0x2c] */
    RECOMP_CALL(sub_11010E6E); /* 0x1101B160: call 0x11010e6e */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1101B165: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101B167: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1101B16C: ret 4 */
L_1101B19A:
    esi = MEM32(ebp + (-0x14)); /* 0x1101B19A: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101B19D: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101B19F: mov dword ptr [ebp - 4], ebx */
    edi = ebx; /* 0x1101B1A2: mov edi, ebx */
    RECOMP_BACKEDGE();
    goto L_1101B14F; /* 0x1101B1A4: jmp 0x1101b14f */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1101B1AE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101B1AEu);
    RECOMP_EH_ENTER();

L_1101B1AE:
    PUSH32(esp, 0x28u); /* 0x1101B1AE: push 0x28 */
    eax = 0x1103DD80u; /* 0x1101B1B0: mov eax, 0x1103dd80 */
    RECOMP_CALL(sub_1103B3DB); /* 0x1101B1B5: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1101B1BA: mov esi, ecx */
    MEM32(ebp + (-0x18)) = esi; /* 0x1101B1BC: mov dword ptr [ebp - 0x18], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101B1BF: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x2C); /* 0x1101B1C1: lea ecx, [ebp - 0x2c] */
    PUSH32(esp, esi); /* 0x1101B1C4: push esi */
    edi = ebx; /* 0x1101B1C5: mov edi, ebx */
    RECOMP_CALL(sub_11010E19); /* 0x1101B1C7: call 0x11010e19 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101B1CC: mov dword ptr [ebp - 4], ebx */
    /* cmp MEM8(ebp + (-0x28)), LO8(ebx) */ /* 0x1101B1CF: cmp byte ptr [ebp - 0x28], bl */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x28))) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101B261; /* 0x1101B1D2: je 0x1101b261 */
L_1101B1D8:
    eax = ebp + (-0x1C); /* 0x1101B1D8: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1101B1DB: push eax */
    eax = MEM32(esi); /* 0x1101B1DC: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x1101B1DE: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101B1E1: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1100F94A); /* 0x1101B1E3: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1101B1E8: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1101B1E9: mov byte ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_11015A3D); /* 0x1101B1ED: call 0x11015a3d */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101B1F2: pop ecx */
    ecx = ebp + (-0x1C); /* 0x1101B1F3: lea ecx, [ebp - 0x1c] */
    MEM32(ebp + (-0x14)) = eax; /* 0x1101B1F6: mov dword ptr [ebp - 0x14], eax */
    RECOMP_CALL(sub_1100E431); /* 0x1101B1F9: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi); /* 0x1101B1FE: mov ecx, dword ptr [esi] */
    edx = MEM32(ecx + 0x4); /* 0x1101B200: mov edx, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x1101B203: add edx, esi */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x20)) = edx; /* 0x1101B205: mov dword ptr [ebp - 0x20], edx */
    ecx = MEM32(edx + 0x14); /* 0x1101B208: mov ecx, dword ptr [edx + 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xE00u);
    ecx = ecx & 0xE00u; /* 0x1101B20B: and ecx, 0xe00 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, 0x400u */ /* 0x1101B211: cmp ecx, 0x400 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x400u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101B229; /* 0x1101B217: je 0x1101b229 */
L_1101B219:
    /* cmp ecx, 0x800u */ /* 0x1101B219: cmp ecx, 0x800 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x800u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101B229; /* 0x1101B21F: je 0x1101b229 */
L_1101B221:
    eax = MEM32(ebp + 0x8); /* 0x1101B221: mov eax, dword ptr [ebp + 8] */
    ecx = (int32_t)(int16_t)LO16(eax); /* 0x1101B224: movsx ecx, ax */
    goto L_1101B22F; /* 0x1101B227: jmp 0x1101b22f */
L_1101B229:
    eax = MEM32(ebp + 0x8); /* 0x1101B229: mov eax, dword ptr [ebp + 8] */
    ecx = (uint32_t)LO16(eax); /* 0x1101B22C: movzx ecx, ax */
L_1101B22F:
    eax = (uint32_t)MEM16(edx + 0x40); /* 0x1101B22F: movzx eax, word ptr [edx + 0x40] */
    edx = MEM32(ebp + (-0x14)); /* 0x1101B233: mov edx, dword ptr [ebp - 0x14] */
    PUSH32(esp, ecx); /* 0x1101B236: push ecx */
    ecx = MEM32(ebp + (-0x14)); /* 0x1101B237: mov ecx, dword ptr [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1101B23A: push eax */
    eax = MEM32(ebp + (-0x20)); /* 0x1101B23B: mov eax, dword ptr [ebp - 0x20] */
    edx = MEM32(edx); /* 0x1101B23E: mov edx, dword ptr [edx] */
    PUSH32(esp, eax); /* 0x1101B240: push eax */
    MEM8(ebp + (-0x34)) = (uint8_t)(LO8(ebx)); /* 0x1101B241: mov byte ptr [ebp - 0x34], bl */
    PUSH32(esp, MEM32(eax + 0x38)); /* 0x1101B244: push dword ptr [eax + 0x38] */
    eax = ebp + (-0x34); /* 0x1101B247: lea eax, [ebp - 0x34] */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x1101B24A: mov byte ptr [ebp - 4], 2 */
    PUSH32(esp, MEM32(ebp + (-0x34))); /* 0x1101B24E: push dword ptr [ebp - 0x34] */
    PUSH32(esp, eax); /* 0x1101B251: push eax */
    RECOMP_ICALL(MEM32(edx + 0x24)); /* 0x1101B252: call dword ptr [edx + 0x24] */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(ebp + (-0x34)), 0 */ /* 0x1101B255: cmp byte ptr [ebp - 0x34], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x34))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101B25E; /* 0x1101B259: je 0x1101b25e */
L_1101B25B:
    PUSH32(esp, 4); /* 0x1101B25B: push 4 */
    edi = POP32_VAL(esp); /* 0x1101B25D: pop edi */
L_1101B25E:
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101B25E: mov dword ptr [ebp - 4], ebx */
L_1101B261:
    eax = MEM32(esi); /* 0x1101B261: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x1101B263: push ebx */
    PUSH32(esp, edi); /* 0x1101B264: push edi */
    ecx = MEM32(eax + 0x4); /* 0x1101B265: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101B268: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1101B26A: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x2C); /* 0x1101B26F: lea ecx, [ebp - 0x2c] */
    RECOMP_CALL(sub_11010E6E); /* 0x1101B272: call 0x11010e6e */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1101B277: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101B279: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x1101B27E: ret 4 */
L_1101B2AC:
    esi = MEM32(ebp + (-0x18)); /* 0x1101B2AC: mov esi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101B2AF: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101B2B1: mov dword ptr [ebp - 4], ebx */
    edi = ebx; /* 0x1101B2B4: mov edi, ebx */
    RECOMP_BACKEDGE();
    goto L_1101B261; /* 0x1101B2B6: jmp 0x1101b261 */
    { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x1101B2ACu: goto L_1101B2AC;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_1101B281(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101B281u);

L_1101B281:
    ecx = MEM32(ebp + (-0x18)); /* 0x1101B281: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101B284: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x1101B286: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x1101B288: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1101B28B: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x1101B28D: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101B290: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), ebx */ /* 0x1101B293: cmp dword ptr [edx + 0x38], ebx */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101B29B; /* 0x1101B296: jne 0x1101b29b */
L_1101B298:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101B298: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1101B29B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x1101B29B: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x1101B29E: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x1101B2A1: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1101B2B8; /* 0x1101B2A4: jne 0x1101b2b8 */
L_1101B2A6:
    eax = 0x1101B2ACu; /* 0x1101B2A6: mov eax, 0x1101b2ac */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101B2AB: ret  */
L_1101B2B8:
    PUSH32(esp, ebx); /* 0x1101B2B8: push ebx */
    PUSH32(esp, ebx); /* 0x1101B2B9: push ebx */
    RECOMP_CALL(sub_1103B33A); /* 0x1101B2BA: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1101B2BFu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1101B2AC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101B2ACu);

    goto L_1101B2AC;
L_1101B261:
    eax = MEM32(esi); /* 0x1101B261: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x1101B263: push ebx */
    PUSH32(esp, edi); /* 0x1101B264: push edi */
    ecx = MEM32(eax + 0x4); /* 0x1101B265: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101B268: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1101B26A: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x2C); /* 0x1101B26F: lea ecx, [ebp - 0x2c] */
    RECOMP_CALL(sub_11010E6E); /* 0x1101B272: call 0x11010e6e */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1101B277: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101B279: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1101B27E: ret 4 */
L_1101B2AC:
    esi = MEM32(ebp + (-0x18)); /* 0x1101B2AC: mov esi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101B2AF: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101B2B1: mov dword ptr [ebp - 4], ebx */
    edi = ebx; /* 0x1101B2B4: mov edi, ebx */
    RECOMP_BACKEDGE();
    goto L_1101B261; /* 0x1101B2B6: jmp 0x1101b261 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1101B2C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101B2C0u);
    RECOMP_EH_ENTER();

L_1101B2C0:
    PUSH32(esp, 0x24u); /* 0x1101B2C0: push 0x24 */
    eax = 0x1103DDABu; /* 0x1101B2C2: mov eax, 0x1103ddab */
    RECOMP_CALL(sub_1103B3DB); /* 0x1101B2C7: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x1101B2CC: mov edi, ecx */
    MEM32(ebp + (-0x14)) = edi; /* 0x1101B2CE: mov dword ptr [ebp - 0x14], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101B2D1: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x28); /* 0x1101B2D3: lea ecx, [ebp - 0x28] */
    PUSH32(esp, edi); /* 0x1101B2D6: push edi */
    esi = ebx; /* 0x1101B2D7: mov esi, ebx */
    RECOMP_CALL(sub_11010E19); /* 0x1101B2D9: call 0x11010e19 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101B2DE: mov dword ptr [ebp - 4], ebx */
    /* cmp MEM8(ebp + (-0x24)), LO8(ebx) */ /* 0x1101B2E1: cmp byte ptr [ebp - 0x24], bl */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x24))) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101B34A; /* 0x1101B2E4: je 0x1101b34a */
L_1101B2E6:
    eax = ebp + (-0x18); /* 0x1101B2E6: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x1101B2E9: push eax */
    eax = MEM32(edi); /* 0x1101B2EA: mov eax, dword ptr [edi] */
    ecx = MEM32(eax + 0x4); /* 0x1101B2EC: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x1101B2EF: add ecx, edi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1100F94A); /* 0x1101B2F1: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1101B2F6: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1101B2F7: mov byte ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_11015A3D); /* 0x1101B2FB: call 0x11015a3d */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101B300: pop ecx */
    esi = eax; /* 0x1101B301: mov esi, eax */
    ecx = ebp + (-0x18); /* 0x1101B303: lea ecx, [ebp - 0x18] */
    MEM32(ebp + (-0x1C)) = esi; /* 0x1101B306: mov dword ptr [ebp - 0x1c], esi */
    RECOMP_CALL(sub_1100E431); /* 0x1101B309: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi); /* 0x1101B30E: mov ecx, dword ptr [edi] */
    eax = MEM32(ebp + 0x8); /* 0x1101B310: mov eax, dword ptr [ebp + 8] */
    esi = MEM32(esi); /* 0x1101B313: mov esi, dword ptr [esi] */
    eax = (uint32_t)LO16(eax); /* 0x1101B315: movzx eax, ax */
    edx = MEM32(ecx + 0x4); /* 0x1101B318: mov edx, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edi; /* 0x1101B31B: add edx, edi */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x1101B31D: mov byte ptr [ebp - 4], 2 */
    PUSH32(esp, eax); /* 0x1101B321: push eax */
    eax = ebp + (-0x30); /* 0x1101B322: lea eax, [ebp - 0x30] */
    ecx = (uint32_t)MEM16(edx + 0x40); /* 0x1101B325: movzx ecx, word ptr [edx + 0x40] */
    PUSH32(esp, ecx); /* 0x1101B329: push ecx */
    ecx = MEM32(ebp + (-0x1C)); /* 0x1101B32A: mov ecx, dword ptr [ebp - 0x1c] */
    PUSH32(esp, edx); /* 0x1101B32D: push edx */
    MEM8(ebp + (-0x30)) = (uint8_t)(LO8(ebx)); /* 0x1101B32E: mov byte ptr [ebp - 0x30], bl */
    PUSH32(esp, MEM32(edx + 0x38)); /* 0x1101B331: push dword ptr [edx + 0x38] */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x1101B334: push dword ptr [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x1101B337: push eax */
    RECOMP_ICALL(MEM32(esi + 0x20)); /* 0x1101B338: call dword ptr [esi + 0x20] */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(ebp + (-0x30)), LO8(ebx) */ /* 0x1101B33B: cmp byte ptr [ebp - 0x30], bl */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x30))) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101B345; /* 0x1101B33E: je 0x1101b345 */
L_1101B340:
    PUSH32(esp, 4); /* 0x1101B340: push 4 */
    esi = POP32_VAL(esp); /* 0x1101B342: pop esi */
    goto L_1101B347; /* 0x1101B343: jmp 0x1101b347 */
L_1101B345:
    esi = ebx; /* 0x1101B345: mov esi, ebx */
L_1101B347:
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101B347: mov dword ptr [ebp - 4], ebx */
L_1101B34A:
    eax = MEM32(edi); /* 0x1101B34A: mov eax, dword ptr [edi] */
    PUSH32(esp, ebx); /* 0x1101B34C: push ebx */
    PUSH32(esp, esi); /* 0x1101B34D: push esi */
    ecx = MEM32(eax + 0x4); /* 0x1101B34E: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x1101B351: add ecx, edi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1101B353: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x28); /* 0x1101B358: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_11010E6E); /* 0x1101B35B: call 0x11010e6e */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x1101B360: mov eax, edi */
    RECOMP_CALL(sub_1103B340); /* 0x1101B362: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x1101B367: ret 4 */
L_1101B395:
    edi = MEM32(ebp + (-0x14)); /* 0x1101B395: mov edi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101B398: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101B39A: mov dword ptr [ebp - 4], ebx */
    esi = ebx; /* 0x1101B39D: mov esi, ebx */
    RECOMP_BACKEDGE();
    goto L_1101B34A; /* 0x1101B39F: jmp 0x1101b34a */
    { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x1101B395u: goto L_1101B395;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_1101B36A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101B36Au);

L_1101B36A:
    ecx = MEM32(ebp + (-0x14)); /* 0x1101B36A: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101B36D: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x1101B36F: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x1101B371: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1101B374: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x1101B376: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101B379: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), ebx */ /* 0x1101B37C: cmp dword ptr [edx + 0x38], ebx */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101B384; /* 0x1101B37F: jne 0x1101b384 */
L_1101B381:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101B381: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1101B384:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x1101B384: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x1101B387: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x1101B38A: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1101B3A1; /* 0x1101B38D: jne 0x1101b3a1 */
L_1101B38F:
    eax = 0x1101B395u; /* 0x1101B38F: mov eax, 0x1101b395 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101B394: ret  */
L_1101B3A1:
    PUSH32(esp, ebx); /* 0x1101B3A1: push ebx */
    PUSH32(esp, ebx); /* 0x1101B3A2: push ebx */
    RECOMP_CALL(sub_1103B33A); /* 0x1101B3A3: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1101B3A8u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1101B395(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101B395u);

    goto L_1101B395;
L_1101B34A:
    eax = MEM32(edi); /* 0x1101B34A: mov eax, dword ptr [edi] */
    PUSH32(esp, ebx); /* 0x1101B34C: push ebx */
    PUSH32(esp, esi); /* 0x1101B34D: push esi */
    ecx = MEM32(eax + 0x4); /* 0x1101B34E: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x1101B351: add ecx, edi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1101B353: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x28); /* 0x1101B358: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_11010E6E); /* 0x1101B35B: call 0x11010e6e */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x1101B360: mov eax, edi */
    RECOMP_CALL(sub_1103B340); /* 0x1101B362: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1101B367: ret 4 */
L_1101B395:
    edi = MEM32(ebp + (-0x14)); /* 0x1101B395: mov edi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101B398: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101B39A: mov dword ptr [ebp - 4], ebx */
    esi = ebx; /* 0x1101B39D: mov esi, ebx */
    RECOMP_BACKEDGE();
    goto L_1101B34A; /* 0x1101B39F: jmp 0x1101b34a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1101B3A9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101B3A9u);
    RECOMP_EH_ENTER();

L_1101B3A9:
    PUSH32(esp, 0x24u); /* 0x1101B3A9: push 0x24 */
    eax = 0x1103DDD6u; /* 0x1101B3AB: mov eax, 0x1103ddd6 */
    RECOMP_CALL(sub_1103B3DB); /* 0x1101B3B0: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1101B3B5: mov esi, ecx */
    MEM32(ebp + (-0x18)) = esi; /* 0x1101B3B7: mov dword ptr [ebp - 0x18], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101B3BA: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x28); /* 0x1101B3BC: lea ecx, [ebp - 0x28] */
    PUSH32(esp, esi); /* 0x1101B3BF: push esi */
    edi = ebx; /* 0x1101B3C0: mov edi, ebx */
    RECOMP_CALL(sub_11010E19); /* 0x1101B3C2: call 0x11010e19 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101B3C7: mov dword ptr [ebp - 4], ebx */
    /* cmp MEM8(ebp + (-0x24)), LO8(ebx) */ /* 0x1101B3CA: cmp byte ptr [ebp - 0x24], bl */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x24))) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101B42C; /* 0x1101B3CD: je 0x1101b42c */
L_1101B3CF:
    eax = ebp + (-0x1C); /* 0x1101B3CF: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1101B3D2: push eax */
    eax = MEM32(esi); /* 0x1101B3D3: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x1101B3D5: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101B3D8: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1100F94A); /* 0x1101B3DA: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1101B3DF: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1101B3E0: mov byte ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_11015A3D); /* 0x1101B3E4: call 0x11015a3d */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101B3E9: pop ecx */
    ecx = ebp + (-0x1C); /* 0x1101B3EA: lea ecx, [ebp - 0x1c] */
    MEM32(ebp + (-0x14)) = eax; /* 0x1101B3ED: mov dword ptr [ebp - 0x14], eax */
    RECOMP_CALL(sub_1100E431); /* 0x1101B3F0: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi); /* 0x1101B3F5: mov ecx, dword ptr [esi] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1101B3F7: push dword ptr [ebp + 8] */
    edx = MEM32(ebp + (-0x14)); /* 0x1101B3FA: mov edx, dword ptr [ebp - 0x14] */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x1101B3FD: mov byte ptr [ebp - 4], 2 */
    ecx = MEM32(ecx + 0x4); /* 0x1101B401: mov ecx, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101B404: add ecx, esi */
    _flag_k = FK_ADD;
    edx = MEM32(edx); /* 0x1101B406: mov edx, dword ptr [edx] */
    eax = (uint32_t)MEM16(ecx + 0x40); /* 0x1101B408: movzx eax, word ptr [ecx + 0x40] */
    PUSH32(esp, eax); /* 0x1101B40C: push eax */
    PUSH32(esp, ecx); /* 0x1101B40D: push ecx */
    MEM8(ebp + (-0x30)) = (uint8_t)(LO8(ebx)); /* 0x1101B40E: mov byte ptr [ebp - 0x30], bl */
    eax = ebp + (-0x30); /* 0x1101B411: lea eax, [ebp - 0x30] */
    PUSH32(esp, MEM32(ecx + 0x38)); /* 0x1101B414: push dword ptr [ecx + 0x38] */
    ecx = MEM32(ebp + (-0x14)); /* 0x1101B417: mov ecx, dword ptr [ebp - 0x14] */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x1101B41A: push dword ptr [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x1101B41D: push eax */
    RECOMP_ICALL(MEM32(edx + 0x20)); /* 0x1101B41E: call dword ptr [edx + 0x20] */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(ebp + (-0x30)), LO8(ebx) */ /* 0x1101B421: cmp byte ptr [ebp - 0x30], bl */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x30))) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101B429; /* 0x1101B424: je 0x1101b429 */
L_1101B426:
    PUSH32(esp, 4); /* 0x1101B426: push 4 */
    edi = POP32_VAL(esp); /* 0x1101B428: pop edi */
L_1101B429:
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101B429: mov dword ptr [ebp - 4], ebx */
L_1101B42C:
    eax = MEM32(esi); /* 0x1101B42C: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x1101B42E: push ebx */
    PUSH32(esp, edi); /* 0x1101B42F: push edi */
    ecx = MEM32(eax + 0x4); /* 0x1101B430: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101B433: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1101B435: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x28); /* 0x1101B43A: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_11010E6E); /* 0x1101B43D: call 0x11010e6e */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1101B442: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101B444: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x1101B449: ret 4 */
L_1101B477:
    esi = MEM32(ebp + (-0x18)); /* 0x1101B477: mov esi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101B47A: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101B47C: mov dword ptr [ebp - 4], ebx */
    edi = ebx; /* 0x1101B47F: mov edi, ebx */
    RECOMP_BACKEDGE();
    goto L_1101B42C; /* 0x1101B481: jmp 0x1101b42c */
    { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x1101B477u: goto L_1101B477;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_1101B44C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101B44Cu);

L_1101B44C:
    ecx = MEM32(ebp + (-0x18)); /* 0x1101B44C: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101B44F: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x1101B451: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x1101B453: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1101B456: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x1101B458: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101B45B: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), ebx */ /* 0x1101B45E: cmp dword ptr [edx + 0x38], ebx */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101B466; /* 0x1101B461: jne 0x1101b466 */
L_1101B463:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101B463: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1101B466:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x1101B466: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x1101B469: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x1101B46C: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1101B483; /* 0x1101B46F: jne 0x1101b483 */
L_1101B471:
    eax = 0x1101B477u; /* 0x1101B471: mov eax, 0x1101b477 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101B476: ret  */
L_1101B483:
    PUSH32(esp, ebx); /* 0x1101B483: push ebx */
    PUSH32(esp, ebx); /* 0x1101B484: push ebx */
    RECOMP_CALL(sub_1103B33A); /* 0x1101B485: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1101B48Au, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1101B477(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101B477u);

    goto L_1101B477;
L_1101B42C:
    eax = MEM32(esi); /* 0x1101B42C: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x1101B42E: push ebx */
    PUSH32(esp, edi); /* 0x1101B42F: push edi */
    ecx = MEM32(eax + 0x4); /* 0x1101B430: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101B433: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1101B435: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x28); /* 0x1101B43A: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_11010E6E); /* 0x1101B43D: call 0x11010e6e */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1101B442: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101B444: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1101B449: ret 4 */
L_1101B477:
    esi = MEM32(ebp + (-0x18)); /* 0x1101B477: mov esi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101B47A: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101B47C: mov dword ptr [ebp - 4], ebx */
    edi = ebx; /* 0x1101B47F: mov edi, ebx */
    RECOMP_BACKEDGE();
    goto L_1101B42C; /* 0x1101B481: jmp 0x1101b42c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1101B48B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101B48Bu);
    RECOMP_EH_ENTER();

L_1101B48B:
    PUSH32(esp, 0x24u); /* 0x1101B48B: push 0x24 */
    eax = 0x1103DE01u; /* 0x1101B48D: mov eax, 0x1103de01 */
    RECOMP_CALL(sub_1103B3DB); /* 0x1101B492: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1101B497: mov esi, ecx */
    MEM32(ebp + (-0x18)) = esi; /* 0x1101B499: mov dword ptr [ebp - 0x18], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101B49C: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x28); /* 0x1101B49E: lea ecx, [ebp - 0x28] */
    PUSH32(esp, esi); /* 0x1101B4A1: push esi */
    edi = ebx; /* 0x1101B4A2: mov edi, ebx */
    RECOMP_CALL(sub_11010E19); /* 0x1101B4A4: call 0x11010e19 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101B4A9: mov dword ptr [ebp - 4], ebx */
    /* cmp MEM8(ebp + (-0x24)), LO8(ebx) */ /* 0x1101B4AC: cmp byte ptr [ebp - 0x24], bl */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x24))) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101B50E; /* 0x1101B4AF: je 0x1101b50e */
L_1101B4B1:
    eax = ebp + (-0x1C); /* 0x1101B4B1: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1101B4B4: push eax */
    eax = MEM32(esi); /* 0x1101B4B5: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x1101B4B7: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101B4BA: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1100F94A); /* 0x1101B4BC: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1101B4C1: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1101B4C2: mov byte ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_11015A3D); /* 0x1101B4C6: call 0x11015a3d */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101B4CB: pop ecx */
    ecx = ebp + (-0x1C); /* 0x1101B4CC: lea ecx, [ebp - 0x1c] */
    MEM32(ebp + (-0x14)) = eax; /* 0x1101B4CF: mov dword ptr [ebp - 0x14], eax */
    RECOMP_CALL(sub_1100E431); /* 0x1101B4D2: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi); /* 0x1101B4D7: mov ecx, dword ptr [esi] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1101B4D9: push dword ptr [ebp + 8] */
    edx = MEM32(ebp + (-0x14)); /* 0x1101B4DC: mov edx, dword ptr [ebp - 0x14] */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x1101B4DF: mov byte ptr [ebp - 4], 2 */
    ecx = MEM32(ecx + 0x4); /* 0x1101B4E3: mov ecx, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101B4E6: add ecx, esi */
    _flag_k = FK_ADD;
    edx = MEM32(edx); /* 0x1101B4E8: mov edx, dword ptr [edx] */
    eax = (uint32_t)MEM16(ecx + 0x40); /* 0x1101B4EA: movzx eax, word ptr [ecx + 0x40] */
    PUSH32(esp, eax); /* 0x1101B4EE: push eax */
    PUSH32(esp, ecx); /* 0x1101B4EF: push ecx */
    MEM8(ebp + (-0x30)) = (uint8_t)(LO8(ebx)); /* 0x1101B4F0: mov byte ptr [ebp - 0x30], bl */
    eax = ebp + (-0x30); /* 0x1101B4F3: lea eax, [ebp - 0x30] */
    PUSH32(esp, MEM32(ecx + 0x38)); /* 0x1101B4F6: push dword ptr [ecx + 0x38] */
    ecx = MEM32(ebp + (-0x14)); /* 0x1101B4F9: mov ecx, dword ptr [ebp - 0x14] */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x1101B4FC: push dword ptr [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x1101B4FF: push eax */
    RECOMP_ICALL(MEM32(edx + 0x24)); /* 0x1101B500: call dword ptr [edx + 0x24] */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(ebp + (-0x30)), LO8(ebx) */ /* 0x1101B503: cmp byte ptr [ebp - 0x30], bl */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x30))) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101B50B; /* 0x1101B506: je 0x1101b50b */
L_1101B508:
    PUSH32(esp, 4); /* 0x1101B508: push 4 */
    edi = POP32_VAL(esp); /* 0x1101B50A: pop edi */
L_1101B50B:
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101B50B: mov dword ptr [ebp - 4], ebx */
L_1101B50E:
    eax = MEM32(esi); /* 0x1101B50E: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x1101B510: push ebx */
    PUSH32(esp, edi); /* 0x1101B511: push edi */
    ecx = MEM32(eax + 0x4); /* 0x1101B512: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101B515: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1101B517: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x28); /* 0x1101B51C: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_11010E6E); /* 0x1101B51F: call 0x11010e6e */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1101B524: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101B526: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x1101B52B: ret 4 */
L_1101B559:
    esi = MEM32(ebp + (-0x18)); /* 0x1101B559: mov esi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101B55C: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101B55E: mov dword ptr [ebp - 4], ebx */
    edi = ebx; /* 0x1101B561: mov edi, ebx */
    RECOMP_BACKEDGE();
    goto L_1101B50E; /* 0x1101B563: jmp 0x1101b50e */
    { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x1101B559u: goto L_1101B559;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_1101B52E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101B52Eu);

L_1101B52E:
    ecx = MEM32(ebp + (-0x18)); /* 0x1101B52E: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101B531: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x1101B533: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x1101B535: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1101B538: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x1101B53A: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101B53D: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), ebx */ /* 0x1101B540: cmp dword ptr [edx + 0x38], ebx */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101B548; /* 0x1101B543: jne 0x1101b548 */
L_1101B545:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101B545: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1101B548:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x1101B548: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x1101B54B: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x1101B54E: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1101B565; /* 0x1101B551: jne 0x1101b565 */
L_1101B553:
    eax = 0x1101B559u; /* 0x1101B553: mov eax, 0x1101b559 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101B558: ret  */
L_1101B565:
    PUSH32(esp, ebx); /* 0x1101B565: push ebx */
    PUSH32(esp, ebx); /* 0x1101B566: push ebx */
    RECOMP_CALL(sub_1103B33A); /* 0x1101B567: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1101B56Cu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1101B559(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101B559u);

    goto L_1101B559;
L_1101B50E:
    eax = MEM32(esi); /* 0x1101B50E: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x1101B510: push ebx */
    PUSH32(esp, edi); /* 0x1101B511: push edi */
    ecx = MEM32(eax + 0x4); /* 0x1101B512: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101B515: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1101B517: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x28); /* 0x1101B51C: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_11010E6E); /* 0x1101B51F: call 0x11010e6e */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1101B524: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101B526: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1101B52B: ret 4 */
L_1101B559:
    esi = MEM32(ebp + (-0x18)); /* 0x1101B559: mov esi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101B55C: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101B55E: mov dword ptr [ebp - 4], ebx */
    edi = ebx; /* 0x1101B561: mov edi, ebx */
    RECOMP_BACKEDGE();
    goto L_1101B50E; /* 0x1101B563: jmp 0x1101b50e */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1101B56D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101B56Du);
    RECOMP_EH_ENTER();

L_1101B56D:
    PUSH32(esp, 0x24u); /* 0x1101B56D: push 0x24 */
    eax = 0x1103DE2Cu; /* 0x1101B56F: mov eax, 0x1103de2c */
    RECOMP_CALL(sub_1103B3DB); /* 0x1101B574: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1101B579: mov esi, ecx */
    MEM32(ebp + (-0x18)) = esi; /* 0x1101B57B: mov dword ptr [ebp - 0x18], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101B57E: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x28); /* 0x1101B580: lea ecx, [ebp - 0x28] */
    PUSH32(esp, esi); /* 0x1101B583: push esi */
    edi = ebx; /* 0x1101B584: mov edi, ebx */
    RECOMP_CALL(sub_11010E19); /* 0x1101B586: call 0x11010e19 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101B58B: mov dword ptr [ebp - 4], ebx */
    /* cmp MEM8(ebp + (-0x24)), LO8(ebx) */ /* 0x1101B58E: cmp byte ptr [ebp - 0x24], bl */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x24))) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101B5F5; /* 0x1101B591: je 0x1101b5f5 */
L_1101B593:
    eax = ebp + (-0x1C); /* 0x1101B593: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1101B596: push eax */
    eax = MEM32(esi); /* 0x1101B597: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x1101B599: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101B59C: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1100F94A); /* 0x1101B59E: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1101B5A3: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1101B5A4: mov byte ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_11015A3D); /* 0x1101B5A8: call 0x11015a3d */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101B5AD: pop ecx */
    ecx = ebp + (-0x1C); /* 0x1101B5AE: lea ecx, [ebp - 0x1c] */
    MEM32(ebp + (-0x14)) = eax; /* 0x1101B5B1: mov dword ptr [ebp - 0x14], eax */
    RECOMP_CALL(sub_1100E431); /* 0x1101B5B4: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi); /* 0x1101B5B9: mov ecx, dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x1101B5BB: fld dword ptr [ebp + 8] */
    edx = MEM32(ebp + (-0x14)); /* 0x1101B5BE: mov edx, dword ptr [ebp - 0x14] */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x1101B5C1: mov byte ptr [ebp - 4], 2 */
    ecx = MEM32(ecx + 0x4); /* 0x1101B5C5: mov ecx, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101B5C8: add ecx, esi */
    _flag_k = FK_ADD;
    edx = MEM32(edx); /* 0x1101B5CA: mov edx, dword ptr [edx] */
    PUSH32(esp, ecx); /* 0x1101B5CC: push ecx */
    PUSH32(esp, ecx); /* 0x1101B5CD: push ecx */
    eax = (uint32_t)MEM16(ecx + 0x40); /* 0x1101B5CE: movzx eax, word ptr [ecx + 0x40] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x1101B5D2: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x1101B5D5: push eax */
    PUSH32(esp, ecx); /* 0x1101B5D6: push ecx */
    MEM8(ebp + (-0x30)) = (uint8_t)(LO8(ebx)); /* 0x1101B5D7: mov byte ptr [ebp - 0x30], bl */
    eax = ebp + (-0x30); /* 0x1101B5DA: lea eax, [ebp - 0x30] */
    PUSH32(esp, MEM32(ecx + 0x38)); /* 0x1101B5DD: push dword ptr [ecx + 0x38] */
    ecx = MEM32(ebp + (-0x14)); /* 0x1101B5E0: mov ecx, dword ptr [ebp - 0x14] */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x1101B5E3: push dword ptr [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x1101B5E6: push eax */
    RECOMP_ICALL(MEM32(edx + 0x14)); /* 0x1101B5E7: call dword ptr [edx + 0x14] */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(ebp + (-0x30)), LO8(ebx) */ /* 0x1101B5EA: cmp byte ptr [ebp - 0x30], bl */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x30))) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101B5F2; /* 0x1101B5ED: je 0x1101b5f2 */
L_1101B5EF:
    PUSH32(esp, 4); /* 0x1101B5EF: push 4 */
    edi = POP32_VAL(esp); /* 0x1101B5F1: pop edi */
L_1101B5F2:
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101B5F2: mov dword ptr [ebp - 4], ebx */
L_1101B5F5:
    eax = MEM32(esi); /* 0x1101B5F5: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x1101B5F7: push ebx */
    PUSH32(esp, edi); /* 0x1101B5F8: push edi */
    ecx = MEM32(eax + 0x4); /* 0x1101B5F9: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101B5FC: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1101B5FE: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x28); /* 0x1101B603: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_11010E6E); /* 0x1101B606: call 0x11010e6e */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1101B60B: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101B60D: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x1101B612: ret 4 */
L_1101B640:
    esi = MEM32(ebp + (-0x18)); /* 0x1101B640: mov esi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101B643: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101B645: mov dword ptr [ebp - 4], ebx */
    edi = ebx; /* 0x1101B648: mov edi, ebx */
    RECOMP_BACKEDGE();
    goto L_1101B5F5; /* 0x1101B64A: jmp 0x1101b5f5 */
    { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x1101B640u: goto L_1101B640;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_1101B615(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101B615u);

L_1101B615:
    ecx = MEM32(ebp + (-0x18)); /* 0x1101B615: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101B618: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x1101B61A: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x1101B61C: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1101B61F: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x1101B621: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101B624: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), ebx */ /* 0x1101B627: cmp dword ptr [edx + 0x38], ebx */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101B62F; /* 0x1101B62A: jne 0x1101b62f */
L_1101B62C:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101B62C: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1101B62F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x1101B62F: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x1101B632: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x1101B635: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1101B64C; /* 0x1101B638: jne 0x1101b64c */
L_1101B63A:
    eax = 0x1101B640u; /* 0x1101B63A: mov eax, 0x1101b640 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101B63F: ret  */
L_1101B64C:
    PUSH32(esp, ebx); /* 0x1101B64C: push ebx */
    PUSH32(esp, ebx); /* 0x1101B64D: push ebx */
    RECOMP_CALL(sub_1103B33A); /* 0x1101B64E: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1101B653u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1101B640(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101B640u);

    goto L_1101B640;
L_1101B5F5:
    eax = MEM32(esi); /* 0x1101B5F5: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x1101B5F7: push ebx */
    PUSH32(esp, edi); /* 0x1101B5F8: push edi */
    ecx = MEM32(eax + 0x4); /* 0x1101B5F9: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101B5FC: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1101B5FE: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x28); /* 0x1101B603: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_11010E6E); /* 0x1101B606: call 0x11010e6e */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1101B60B: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101B60D: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1101B612: ret 4 */
L_1101B640:
    esi = MEM32(ebp + (-0x18)); /* 0x1101B640: mov esi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101B643: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101B645: mov dword ptr [ebp - 4], ebx */
    edi = ebx; /* 0x1101B648: mov edi, ebx */
    RECOMP_BACKEDGE();
    goto L_1101B5F5; /* 0x1101B64A: jmp 0x1101b5f5 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1101B654(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101B654u);
    RECOMP_EH_ENTER();

L_1101B654:
    PUSH32(esp, 0x24u); /* 0x1101B654: push 0x24 */
    eax = 0x1103DE57u; /* 0x1101B656: mov eax, 0x1103de57 */
    RECOMP_CALL(sub_1103B3DB); /* 0x1101B65B: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1101B660: mov esi, ecx */
    MEM32(ebp + (-0x18)) = esi; /* 0x1101B662: mov dword ptr [ebp - 0x18], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101B665: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x28); /* 0x1101B667: lea ecx, [ebp - 0x28] */
    PUSH32(esp, esi); /* 0x1101B66A: push esi */
    edi = ebx; /* 0x1101B66B: mov edi, ebx */
    RECOMP_CALL(sub_11010E19); /* 0x1101B66D: call 0x11010e19 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101B672: mov dword ptr [ebp - 4], ebx */
    /* cmp MEM8(ebp + (-0x24)), LO8(ebx) */ /* 0x1101B675: cmp byte ptr [ebp - 0x24], bl */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x24))) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101B6DC; /* 0x1101B678: je 0x1101b6dc */
L_1101B67A:
    eax = ebp + (-0x1C); /* 0x1101B67A: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1101B67D: push eax */
    eax = MEM32(esi); /* 0x1101B67E: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x1101B680: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101B683: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1100F94A); /* 0x1101B685: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1101B68A: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1101B68B: mov byte ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_11015A3D); /* 0x1101B68F: call 0x11015a3d */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101B694: pop ecx */
    ecx = ebp + (-0x1C); /* 0x1101B695: lea ecx, [ebp - 0x1c] */
    MEM32(ebp + (-0x14)) = eax; /* 0x1101B698: mov dword ptr [ebp - 0x14], eax */
    RECOMP_CALL(sub_1100E431); /* 0x1101B69B: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi); /* 0x1101B6A0: mov ecx, dword ptr [esi] */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x1101B6A2: fld qword ptr [ebp + 8] */
    edx = MEM32(ebp + (-0x14)); /* 0x1101B6A5: mov edx, dword ptr [ebp - 0x14] */
    MEM8(ebp + (-0x30)) = (uint8_t)(LO8(ebx)); /* 0x1101B6A8: mov byte ptr [ebp - 0x30], bl */
    ecx = MEM32(ecx + 0x4); /* 0x1101B6AB: mov ecx, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101B6AE: add ecx, esi */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x1101B6B0: mov byte ptr [ebp - 4], 2 */
    edx = MEM32(edx); /* 0x1101B6B4: mov edx, dword ptr [edx] */
    PUSH32(esp, ecx); /* 0x1101B6B6: push ecx */
    PUSH32(esp, ecx); /* 0x1101B6B7: push ecx */
    eax = (uint32_t)MEM16(ecx + 0x40); /* 0x1101B6B8: movzx eax, word ptr [ecx + 0x40] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x1101B6BC: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x1101B6BF: push eax */
    PUSH32(esp, ecx); /* 0x1101B6C0: push ecx */
    PUSH32(esp, MEM32(ecx + 0x38)); /* 0x1101B6C1: push dword ptr [ecx + 0x38] */
    ecx = MEM32(ebp + (-0x14)); /* 0x1101B6C4: mov ecx, dword ptr [ebp - 0x14] */
    eax = ebp + 0x8; /* 0x1101B6C7: lea eax, [ebp + 8] */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x1101B6CA: push dword ptr [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x1101B6CD: push eax */
    RECOMP_ICALL(MEM32(edx + 0x14)); /* 0x1101B6CE: call dword ptr [edx + 0x14] */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(ebp + 0x8), LO8(ebx) */ /* 0x1101B6D1: cmp byte ptr [ebp + 8], bl */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101B6D9; /* 0x1101B6D4: je 0x1101b6d9 */
L_1101B6D6:
    PUSH32(esp, 4); /* 0x1101B6D6: push 4 */
    edi = POP32_VAL(esp); /* 0x1101B6D8: pop edi */
L_1101B6D9:
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101B6D9: mov dword ptr [ebp - 4], ebx */
L_1101B6DC:
    eax = MEM32(esi); /* 0x1101B6DC: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x1101B6DE: push ebx */
    PUSH32(esp, edi); /* 0x1101B6DF: push edi */
    ecx = MEM32(eax + 0x4); /* 0x1101B6E0: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101B6E3: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1101B6E5: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x28); /* 0x1101B6EA: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_11010E6E); /* 0x1101B6ED: call 0x11010e6e */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1101B6F2: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101B6F4: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x1101B6F9: ret 8 */
L_1101B727:
    esi = MEM32(ebp + (-0x18)); /* 0x1101B727: mov esi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101B72A: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101B72C: mov dword ptr [ebp - 4], ebx */
    edi = ebx; /* 0x1101B72F: mov edi, ebx */
    RECOMP_BACKEDGE();
    goto L_1101B6DC; /* 0x1101B731: jmp 0x1101b6dc */
    { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x1101B727u: goto L_1101B727;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_1101B6FC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101B6FCu);

L_1101B6FC:
    ecx = MEM32(ebp + (-0x18)); /* 0x1101B6FC: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101B6FF: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x1101B701: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x1101B703: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1101B706: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x1101B708: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101B70B: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), ebx */ /* 0x1101B70E: cmp dword ptr [edx + 0x38], ebx */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101B716; /* 0x1101B711: jne 0x1101b716 */
L_1101B713:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101B713: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1101B716:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x1101B716: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x1101B719: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x1101B71C: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1101B733; /* 0x1101B71F: jne 0x1101b733 */
L_1101B721:
    eax = 0x1101B727u; /* 0x1101B721: mov eax, 0x1101b727 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101B726: ret  */
L_1101B733:
    PUSH32(esp, ebx); /* 0x1101B733: push ebx */
    PUSH32(esp, ebx); /* 0x1101B734: push ebx */
    RECOMP_CALL(sub_1103B33A); /* 0x1101B735: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1101B73Au, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1101B727(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101B727u);

    goto L_1101B727;
L_1101B6DC:
    eax = MEM32(esi); /* 0x1101B6DC: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x1101B6DE: push ebx */
    PUSH32(esp, edi); /* 0x1101B6DF: push edi */
    ecx = MEM32(eax + 0x4); /* 0x1101B6E0: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101B6E3: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1101B6E5: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x28); /* 0x1101B6EA: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_11010E6E); /* 0x1101B6ED: call 0x11010e6e */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1101B6F2: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101B6F4: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1101B6F9: ret 8 */
L_1101B727:
    esi = MEM32(ebp + (-0x18)); /* 0x1101B727: mov esi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101B72A: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101B72C: mov dword ptr [ebp - 4], ebx */
    edi = ebx; /* 0x1101B72F: mov edi, ebx */
    RECOMP_BACKEDGE();
    goto L_1101B6DC; /* 0x1101B731: jmp 0x1101b6dc */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1101B73B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101B73Bu);
    RECOMP_EH_ENTER();

L_1101B73B:
    PUSH32(esp, 0x24u); /* 0x1101B73B: push 0x24 */
    eax = 0x1103DE82u; /* 0x1101B73D: mov eax, 0x1103de82 */
    RECOMP_CALL(sub_1103B3DB); /* 0x1101B742: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1101B747: mov esi, ecx */
    MEM32(ebp + (-0x18)) = esi; /* 0x1101B749: mov dword ptr [ebp - 0x18], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101B74C: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x28); /* 0x1101B74E: lea ecx, [ebp - 0x28] */
    PUSH32(esp, esi); /* 0x1101B751: push esi */
    edi = ebx; /* 0x1101B752: mov edi, ebx */
    RECOMP_CALL(sub_11010E19); /* 0x1101B754: call 0x11010e19 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101B759: mov dword ptr [ebp - 4], ebx */
    /* cmp MEM8(ebp + (-0x24)), LO8(ebx) */ /* 0x1101B75C: cmp byte ptr [ebp - 0x24], bl */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x24))) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101B7C3; /* 0x1101B75F: je 0x1101b7c3 */
L_1101B761:
    eax = ebp + (-0x1C); /* 0x1101B761: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1101B764: push eax */
    eax = MEM32(esi); /* 0x1101B765: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x1101B767: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101B76A: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1100F94A); /* 0x1101B76C: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1101B771: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1101B772: mov byte ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_11015A3D); /* 0x1101B776: call 0x11015a3d */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101B77B: pop ecx */
    ecx = ebp + (-0x1C); /* 0x1101B77C: lea ecx, [ebp - 0x1c] */
    MEM32(ebp + (-0x14)) = eax; /* 0x1101B77F: mov dword ptr [ebp - 0x14], eax */
    RECOMP_CALL(sub_1100E431); /* 0x1101B782: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi); /* 0x1101B787: mov ecx, dword ptr [esi] */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x1101B789: fld qword ptr [ebp + 8] */
    edx = MEM32(ebp + (-0x14)); /* 0x1101B78C: mov edx, dword ptr [ebp - 0x14] */
    MEM8(ebp + (-0x30)) = (uint8_t)(LO8(ebx)); /* 0x1101B78F: mov byte ptr [ebp - 0x30], bl */
    ecx = MEM32(ecx + 0x4); /* 0x1101B792: mov ecx, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101B795: add ecx, esi */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x1101B797: mov byte ptr [ebp - 4], 2 */
    edx = MEM32(edx); /* 0x1101B79B: mov edx, dword ptr [edx] */
    PUSH32(esp, ecx); /* 0x1101B79D: push ecx */
    PUSH32(esp, ecx); /* 0x1101B79E: push ecx */
    eax = (uint32_t)MEM16(ecx + 0x40); /* 0x1101B79F: movzx eax, word ptr [ecx + 0x40] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x1101B7A3: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x1101B7A6: push eax */
    PUSH32(esp, ecx); /* 0x1101B7A7: push ecx */
    PUSH32(esp, MEM32(ecx + 0x38)); /* 0x1101B7A8: push dword ptr [ecx + 0x38] */
    ecx = MEM32(ebp + (-0x14)); /* 0x1101B7AB: mov ecx, dword ptr [ebp - 0x14] */
    eax = ebp + 0x8; /* 0x1101B7AE: lea eax, [ebp + 8] */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x1101B7B1: push dword ptr [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x1101B7B4: push eax */
    RECOMP_ICALL(MEM32(edx + 0x10)); /* 0x1101B7B5: call dword ptr [edx + 0x10] */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(ebp + 0x8), LO8(ebx) */ /* 0x1101B7B8: cmp byte ptr [ebp + 8], bl */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101B7C0; /* 0x1101B7BB: je 0x1101b7c0 */
L_1101B7BD:
    PUSH32(esp, 4); /* 0x1101B7BD: push 4 */
    edi = POP32_VAL(esp); /* 0x1101B7BF: pop edi */
L_1101B7C0:
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101B7C0: mov dword ptr [ebp - 4], ebx */
L_1101B7C3:
    eax = MEM32(esi); /* 0x1101B7C3: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x1101B7C5: push ebx */
    PUSH32(esp, edi); /* 0x1101B7C6: push edi */
    ecx = MEM32(eax + 0x4); /* 0x1101B7C7: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101B7CA: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1101B7CC: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x28); /* 0x1101B7D1: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_11010E6E); /* 0x1101B7D4: call 0x11010e6e */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1101B7D9: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101B7DB: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x1101B7E0: ret 8 */
L_1101B80E:
    esi = MEM32(ebp + (-0x18)); /* 0x1101B80E: mov esi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101B811: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101B813: mov dword ptr [ebp - 4], ebx */
    edi = ebx; /* 0x1101B816: mov edi, ebx */
    RECOMP_BACKEDGE();
    goto L_1101B7C3; /* 0x1101B818: jmp 0x1101b7c3 */
    { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x1101B80Eu: goto L_1101B80E;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_1101B7E3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101B7E3u);

L_1101B7E3:
    ecx = MEM32(ebp + (-0x18)); /* 0x1101B7E3: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101B7E6: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x1101B7E8: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x1101B7EA: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1101B7ED: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x1101B7EF: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101B7F2: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), ebx */ /* 0x1101B7F5: cmp dword ptr [edx + 0x38], ebx */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101B7FD; /* 0x1101B7F8: jne 0x1101b7fd */
L_1101B7FA:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101B7FA: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1101B7FD:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x1101B7FD: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x1101B800: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x1101B803: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1101B81A; /* 0x1101B806: jne 0x1101b81a */
L_1101B808:
    eax = 0x1101B80Eu; /* 0x1101B808: mov eax, 0x1101b80e */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101B80D: ret  */
L_1101B81A:
    PUSH32(esp, ebx); /* 0x1101B81A: push ebx */
    PUSH32(esp, ebx); /* 0x1101B81B: push ebx */
    RECOMP_CALL(sub_1103B33A); /* 0x1101B81C: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1101B821u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1101B80E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101B80Eu);

    goto L_1101B80E;
L_1101B7C3:
    eax = MEM32(esi); /* 0x1101B7C3: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x1101B7C5: push ebx */
    PUSH32(esp, edi); /* 0x1101B7C6: push edi */
    ecx = MEM32(eax + 0x4); /* 0x1101B7C7: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101B7CA: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1101B7CC: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x28); /* 0x1101B7D1: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_11010E6E); /* 0x1101B7D4: call 0x11010e6e */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1101B7D9: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101B7DB: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1101B7E0: ret 8 */
L_1101B80E:
    esi = MEM32(ebp + (-0x18)); /* 0x1101B80E: mov esi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101B811: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101B813: mov dword ptr [ebp - 4], ebx */
    edi = ebx; /* 0x1101B816: mov edi, ebx */
    RECOMP_BACKEDGE();
    goto L_1101B7C3; /* 0x1101B818: jmp 0x1101b7c3 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1101B822(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101B822u);

L_1101B822:
    PUSH32(esp, ebp); /* 0x1101B822: push ebp */
    ebp = esp; /* 0x1101B823: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1101B825: push esi */
    esi = ecx; /* 0x1101B826: mov esi, ecx */
    /* test esi, esi */ /* 0x1101B828: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1101B830; /* 0x1101B82A: jne 0x1101b830 */
L_1101B82C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1101B82C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1101B837; /* 0x1101B82E: jmp 0x1101b837 */
L_1101B830:
    eax = MEM32(esi); /* 0x1101B830: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x1101B832: mov eax, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x1101B835: add eax, esi */
    _flag_k = FK_ADD;
L_1101B837:
    PUSH32(esp, eax); /* 0x1101B837: push eax */
    RECOMP_ICALL(MEM32(ebp + 0x8)); /* 0x1101B838: call dword ptr [ebp + 8] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101B83B: pop ecx */
    eax = esi; /* 0x1101B83C: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1101B83E: pop esi */
    ebp = POP32_VAL(esp); /* 0x1101B83F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1101B840: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1101B843(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101B843u);
    RECOMP_EH_ENTER();

L_1101B843:
    PUSH32(esp, 0x24u); /* 0x1101B843: push 0x24 */
    eax = 0x1103DEADu; /* 0x1101B845: mov eax, 0x1103dead */
    RECOMP_CALL(sub_1103B3DB); /* 0x1101B84A: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1101B84F: mov esi, ecx */
    MEM32(ebp + (-0x18)) = esi; /* 0x1101B851: mov dword ptr [ebp - 0x18], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101B854: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x28); /* 0x1101B856: lea ecx, [ebp - 0x28] */
    PUSH32(esp, esi); /* 0x1101B859: push esi */
    edi = ebx; /* 0x1101B85A: mov edi, ebx */
    RECOMP_CALL(sub_11010E19); /* 0x1101B85C: call 0x11010e19 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101B861: mov dword ptr [ebp - 4], ebx */
    /* cmp MEM8(ebp + (-0x24)), LO8(ebx) */ /* 0x1101B864: cmp byte ptr [ebp - 0x24], bl */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x24))) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101B8C6; /* 0x1101B867: je 0x1101b8c6 */
L_1101B869:
    eax = ebp + (-0x1C); /* 0x1101B869: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1101B86C: push eax */
    eax = MEM32(esi); /* 0x1101B86D: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x1101B86F: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101B872: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1100F94A); /* 0x1101B874: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1101B879: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1101B87A: mov byte ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_11015A3D); /* 0x1101B87E: call 0x11015a3d */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101B883: pop ecx */
    ecx = ebp + (-0x1C); /* 0x1101B884: lea ecx, [ebp - 0x1c] */
    MEM32(ebp + (-0x14)) = eax; /* 0x1101B887: mov dword ptr [ebp - 0x14], eax */
    RECOMP_CALL(sub_1100E431); /* 0x1101B88A: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi); /* 0x1101B88F: mov ecx, dword ptr [esi] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1101B891: push dword ptr [ebp + 8] */
    edx = MEM32(ebp + (-0x14)); /* 0x1101B894: mov edx, dword ptr [ebp - 0x14] */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x1101B897: mov byte ptr [ebp - 4], 2 */
    ecx = MEM32(ecx + 0x4); /* 0x1101B89B: mov ecx, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101B89E: add ecx, esi */
    _flag_k = FK_ADD;
    edx = MEM32(edx); /* 0x1101B8A0: mov edx, dword ptr [edx] */
    eax = (uint32_t)MEM16(ecx + 0x40); /* 0x1101B8A2: movzx eax, word ptr [ecx + 0x40] */
    PUSH32(esp, eax); /* 0x1101B8A6: push eax */
    PUSH32(esp, ecx); /* 0x1101B8A7: push ecx */
    MEM8(ebp + (-0x30)) = (uint8_t)(LO8(ebx)); /* 0x1101B8A8: mov byte ptr [ebp - 0x30], bl */
    eax = ebp + (-0x30); /* 0x1101B8AB: lea eax, [ebp - 0x30] */
    PUSH32(esp, MEM32(ecx + 0x38)); /* 0x1101B8AE: push dword ptr [ecx + 0x38] */
    ecx = MEM32(ebp + (-0x14)); /* 0x1101B8B1: mov ecx, dword ptr [ebp - 0x14] */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x1101B8B4: push dword ptr [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x1101B8B7: push eax */
    RECOMP_ICALL(MEM32(edx + 0xC)); /* 0x1101B8B8: call dword ptr [edx + 0xc] */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(ebp + (-0x30)), LO8(ebx) */ /* 0x1101B8BB: cmp byte ptr [ebp - 0x30], bl */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x30))) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101B8C3; /* 0x1101B8BE: je 0x1101b8c3 */
L_1101B8C0:
    PUSH32(esp, 4); /* 0x1101B8C0: push 4 */
    edi = POP32_VAL(esp); /* 0x1101B8C2: pop edi */
L_1101B8C3:
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101B8C3: mov dword ptr [ebp - 4], ebx */
L_1101B8C6:
    eax = MEM32(esi); /* 0x1101B8C6: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x1101B8C8: push ebx */
    PUSH32(esp, edi); /* 0x1101B8C9: push edi */
    ecx = MEM32(eax + 0x4); /* 0x1101B8CA: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101B8CD: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1101B8CF: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x28); /* 0x1101B8D4: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_11010E6E); /* 0x1101B8D7: call 0x11010e6e */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1101B8DC: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101B8DE: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x1101B8E3: ret 4 */
L_1101B911:
    esi = MEM32(ebp + (-0x18)); /* 0x1101B911: mov esi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101B914: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101B916: mov dword ptr [ebp - 4], ebx */
    edi = ebx; /* 0x1101B919: mov edi, ebx */
    RECOMP_BACKEDGE();
    goto L_1101B8C6; /* 0x1101B91B: jmp 0x1101b8c6 */
    { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x1101B911u: goto L_1101B911;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_1101B8E6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101B8E6u);

L_1101B8E6:
    ecx = MEM32(ebp + (-0x18)); /* 0x1101B8E6: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101B8E9: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x1101B8EB: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x1101B8ED: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1101B8F0: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x1101B8F2: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101B8F5: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), ebx */ /* 0x1101B8F8: cmp dword ptr [edx + 0x38], ebx */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101B900; /* 0x1101B8FB: jne 0x1101b900 */
L_1101B8FD:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101B8FD: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1101B900:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x1101B900: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x1101B903: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x1101B906: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1101B91D; /* 0x1101B909: jne 0x1101b91d */
L_1101B90B:
    eax = 0x1101B911u; /* 0x1101B90B: mov eax, 0x1101b911 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101B910: ret  */
L_1101B91D:
    PUSH32(esp, ebx); /* 0x1101B91D: push ebx */
    PUSH32(esp, ebx); /* 0x1101B91E: push ebx */
    RECOMP_CALL(sub_1103B33A); /* 0x1101B91F: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1101B924u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1101B911(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101B911u);

    goto L_1101B911;
L_1101B8C6:
    eax = MEM32(esi); /* 0x1101B8C6: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x1101B8C8: push ebx */
    PUSH32(esp, edi); /* 0x1101B8C9: push edi */
    ecx = MEM32(eax + 0x4); /* 0x1101B8CA: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101B8CD: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1101B8CF: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x28); /* 0x1101B8D4: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_11010E6E); /* 0x1101B8D7: call 0x11010e6e */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1101B8DC: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101B8DE: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1101B8E3: ret 4 */
L_1101B911:
    esi = MEM32(ebp + (-0x18)); /* 0x1101B911: mov esi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101B914: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101B916: mov dword ptr [ebp - 4], ebx */
    edi = ebx; /* 0x1101B919: mov edi, ebx */
    RECOMP_BACKEDGE();
    goto L_1101B8C6; /* 0x1101B91B: jmp 0x1101b8c6 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1101B925(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101B925u);
    RECOMP_EH_ENTER();

L_1101B925:
    PUSH32(esp, 0x24u); /* 0x1101B925: push 0x24 */
    eax = 0x1103DED8u; /* 0x1101B927: mov eax, 0x1103ded8 */
    RECOMP_CALL(sub_1103B3DB); /* 0x1101B92C: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1101B931: mov esi, ecx */
    MEM32(ebp + (-0x18)) = esi; /* 0x1101B933: mov dword ptr [ebp - 0x18], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101B936: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x28); /* 0x1101B938: lea ecx, [ebp - 0x28] */
    PUSH32(esp, esi); /* 0x1101B93B: push esi */
    edi = ebx; /* 0x1101B93C: mov edi, ebx */
    RECOMP_CALL(sub_11010E19); /* 0x1101B93E: call 0x11010e19 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101B943: mov dword ptr [ebp - 4], ebx */
    /* cmp MEM8(ebp + (-0x24)), LO8(ebx) */ /* 0x1101B946: cmp byte ptr [ebp - 0x24], bl */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x24))) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101B9AB; /* 0x1101B949: je 0x1101b9ab */
L_1101B94B:
    eax = ebp + (-0x1C); /* 0x1101B94B: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1101B94E: push eax */
    eax = MEM32(esi); /* 0x1101B94F: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x1101B951: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101B954: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1100F94A); /* 0x1101B956: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1101B95B: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1101B95C: mov byte ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_11015A3D); /* 0x1101B960: call 0x11015a3d */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101B965: pop ecx */
    ecx = ebp + (-0x1C); /* 0x1101B966: lea ecx, [ebp - 0x1c] */
    MEM32(ebp + (-0x14)) = eax; /* 0x1101B969: mov dword ptr [ebp - 0x14], eax */
    RECOMP_CALL(sub_1100E431); /* 0x1101B96C: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi); /* 0x1101B971: mov ecx, dword ptr [esi] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1101B973: push dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + (-0x14)); /* 0x1101B976: mov edx, dword ptr [ebp - 0x14] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1101B979: push dword ptr [ebp + 8] */
    ecx = MEM32(ecx + 0x4); /* 0x1101B97C: mov ecx, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101B97F: add ecx, esi */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x30)) = (uint8_t)(LO8(ebx)); /* 0x1101B981: mov byte ptr [ebp - 0x30], bl */
    edx = MEM32(edx); /* 0x1101B984: mov edx, dword ptr [edx] */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x1101B986: mov byte ptr [ebp - 4], 2 */
    eax = (uint32_t)MEM16(ecx + 0x40); /* 0x1101B98A: movzx eax, word ptr [ecx + 0x40] */
    PUSH32(esp, eax); /* 0x1101B98E: push eax */
    PUSH32(esp, ecx); /* 0x1101B98F: push ecx */
    PUSH32(esp, MEM32(ecx + 0x38)); /* 0x1101B990: push dword ptr [ecx + 0x38] */
    ecx = MEM32(ebp + (-0x14)); /* 0x1101B993: mov ecx, dword ptr [ebp - 0x14] */
    eax = ebp + 0x8; /* 0x1101B996: lea eax, [ebp + 8] */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x1101B999: push dword ptr [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x1101B99C: push eax */
    RECOMP_ICALL(MEM32(edx + 0x1C)); /* 0x1101B99D: call dword ptr [edx + 0x1c] */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(ebp + 0x8), LO8(ebx) */ /* 0x1101B9A0: cmp byte ptr [ebp + 8], bl */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101B9A8; /* 0x1101B9A3: je 0x1101b9a8 */
L_1101B9A5:
    PUSH32(esp, 4); /* 0x1101B9A5: push 4 */
    edi = POP32_VAL(esp); /* 0x1101B9A7: pop edi */
L_1101B9A8:
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101B9A8: mov dword ptr [ebp - 4], ebx */
L_1101B9AB:
    eax = MEM32(esi); /* 0x1101B9AB: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x1101B9AD: push ebx */
    PUSH32(esp, edi); /* 0x1101B9AE: push edi */
    ecx = MEM32(eax + 0x4); /* 0x1101B9AF: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101B9B2: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1101B9B4: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x28); /* 0x1101B9B9: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_11010E6E); /* 0x1101B9BC: call 0x11010e6e */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1101B9C1: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101B9C3: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x1101B9C8: ret 8 */
L_1101B9F6:
    esi = MEM32(ebp + (-0x18)); /* 0x1101B9F6: mov esi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101B9F9: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101B9FB: mov dword ptr [ebp - 4], ebx */
    edi = ebx; /* 0x1101B9FE: mov edi, ebx */
    RECOMP_BACKEDGE();
    goto L_1101B9AB; /* 0x1101BA00: jmp 0x1101b9ab */
    { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x1101B9F6u: goto L_1101B9F6;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_1101B9CB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101B9CBu);

L_1101B9CB:
    ecx = MEM32(ebp + (-0x18)); /* 0x1101B9CB: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101B9CE: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x1101B9D0: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x1101B9D2: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1101B9D5: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x1101B9D7: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101B9DA: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), ebx */ /* 0x1101B9DD: cmp dword ptr [edx + 0x38], ebx */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101B9E5; /* 0x1101B9E0: jne 0x1101b9e5 */
L_1101B9E2:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101B9E2: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1101B9E5:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x1101B9E5: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x1101B9E8: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x1101B9EB: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1101BA02; /* 0x1101B9EE: jne 0x1101ba02 */
L_1101B9F0:
    eax = 0x1101B9F6u; /* 0x1101B9F0: mov eax, 0x1101b9f6 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101B9F5: ret  */
L_1101BA02:
    PUSH32(esp, ebx); /* 0x1101BA02: push ebx */
    PUSH32(esp, ebx); /* 0x1101BA03: push ebx */
    RECOMP_CALL(sub_1103B33A); /* 0x1101BA04: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1101BA09u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1101B9F6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101B9F6u);

    goto L_1101B9F6;
L_1101B9AB:
    eax = MEM32(esi); /* 0x1101B9AB: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x1101B9AD: push ebx */
    PUSH32(esp, edi); /* 0x1101B9AE: push edi */
    ecx = MEM32(eax + 0x4); /* 0x1101B9AF: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101B9B2: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1101B9B4: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x28); /* 0x1101B9B9: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_11010E6E); /* 0x1101B9BC: call 0x11010e6e */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1101B9C1: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101B9C3: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1101B9C8: ret 8 */
L_1101B9F6:
    esi = MEM32(ebp + (-0x18)); /* 0x1101B9F6: mov esi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101B9F9: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101B9FB: mov dword ptr [ebp - 4], ebx */
    edi = ebx; /* 0x1101B9FE: mov edi, ebx */
    RECOMP_BACKEDGE();
    goto L_1101B9AB; /* 0x1101BA00: jmp 0x1101b9ab */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1101BA0A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101BA0Au);
    RECOMP_EH_ENTER();

L_1101BA0A:
    PUSH32(esp, 0x24u); /* 0x1101BA0A: push 0x24 */
    eax = 0x1103DF03u; /* 0x1101BA0C: mov eax, 0x1103df03 */
    RECOMP_CALL(sub_1103B3DB); /* 0x1101BA11: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1101BA16: mov esi, ecx */
    MEM32(ebp + (-0x18)) = esi; /* 0x1101BA18: mov dword ptr [ebp - 0x18], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101BA1B: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x28); /* 0x1101BA1D: lea ecx, [ebp - 0x28] */
    PUSH32(esp, esi); /* 0x1101BA20: push esi */
    edi = ebx; /* 0x1101BA21: mov edi, ebx */
    RECOMP_CALL(sub_11010E19); /* 0x1101BA23: call 0x11010e19 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101BA28: mov dword ptr [ebp - 4], ebx */
    /* cmp MEM8(ebp + (-0x24)), LO8(ebx) */ /* 0x1101BA2B: cmp byte ptr [ebp - 0x24], bl */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x24))) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101BA90; /* 0x1101BA2E: je 0x1101ba90 */
L_1101BA30:
    eax = ebp + (-0x1C); /* 0x1101BA30: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1101BA33: push eax */
    eax = MEM32(esi); /* 0x1101BA34: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x1101BA36: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101BA39: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1100F94A); /* 0x1101BA3B: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1101BA40: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1101BA41: mov byte ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_11015A3D); /* 0x1101BA45: call 0x11015a3d */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101BA4A: pop ecx */
    ecx = ebp + (-0x1C); /* 0x1101BA4B: lea ecx, [ebp - 0x1c] */
    MEM32(ebp + (-0x14)) = eax; /* 0x1101BA4E: mov dword ptr [ebp - 0x14], eax */
    RECOMP_CALL(sub_1100E431); /* 0x1101BA51: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi); /* 0x1101BA56: mov ecx, dword ptr [esi] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1101BA58: push dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + (-0x14)); /* 0x1101BA5B: mov edx, dword ptr [ebp - 0x14] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1101BA5E: push dword ptr [ebp + 8] */
    ecx = MEM32(ecx + 0x4); /* 0x1101BA61: mov ecx, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101BA64: add ecx, esi */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x30)) = (uint8_t)(LO8(ebx)); /* 0x1101BA66: mov byte ptr [ebp - 0x30], bl */
    edx = MEM32(edx); /* 0x1101BA69: mov edx, dword ptr [edx] */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x1101BA6B: mov byte ptr [ebp - 4], 2 */
    eax = (uint32_t)MEM16(ecx + 0x40); /* 0x1101BA6F: movzx eax, word ptr [ecx + 0x40] */
    PUSH32(esp, eax); /* 0x1101BA73: push eax */
    PUSH32(esp, ecx); /* 0x1101BA74: push ecx */
    PUSH32(esp, MEM32(ecx + 0x38)); /* 0x1101BA75: push dword ptr [ecx + 0x38] */
    ecx = MEM32(ebp + (-0x14)); /* 0x1101BA78: mov ecx, dword ptr [ebp - 0x14] */
    eax = ebp + 0x8; /* 0x1101BA7B: lea eax, [ebp + 8] */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x1101BA7E: push dword ptr [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x1101BA81: push eax */
    RECOMP_ICALL(MEM32(edx + 0x18)); /* 0x1101BA82: call dword ptr [edx + 0x18] */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(ebp + 0x8), LO8(ebx) */ /* 0x1101BA85: cmp byte ptr [ebp + 8], bl */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101BA8D; /* 0x1101BA88: je 0x1101ba8d */
L_1101BA8A:
    PUSH32(esp, 4); /* 0x1101BA8A: push 4 */
    edi = POP32_VAL(esp); /* 0x1101BA8C: pop edi */
L_1101BA8D:
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101BA8D: mov dword ptr [ebp - 4], ebx */
L_1101BA90:
    eax = MEM32(esi); /* 0x1101BA90: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x1101BA92: push ebx */
    PUSH32(esp, edi); /* 0x1101BA93: push edi */
    ecx = MEM32(eax + 0x4); /* 0x1101BA94: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101BA97: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1101BA99: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x28); /* 0x1101BA9E: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_11010E6E); /* 0x1101BAA1: call 0x11010e6e */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1101BAA6: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101BAA8: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x1101BAAD: ret 8 */
L_1101BADB:
    esi = MEM32(ebp + (-0x18)); /* 0x1101BADB: mov esi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101BADE: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101BAE0: mov dword ptr [ebp - 4], ebx */
    edi = ebx; /* 0x1101BAE3: mov edi, ebx */
    RECOMP_BACKEDGE();
    goto L_1101BA90; /* 0x1101BAE5: jmp 0x1101ba90 */
    { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x1101BADBu: goto L_1101BADB;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_1101BAB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101BAB0u);

L_1101BAB0:
    ecx = MEM32(ebp + (-0x18)); /* 0x1101BAB0: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101BAB3: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x1101BAB5: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x1101BAB7: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1101BABA: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x1101BABC: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101BABF: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), ebx */ /* 0x1101BAC2: cmp dword ptr [edx + 0x38], ebx */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101BACA; /* 0x1101BAC5: jne 0x1101baca */
L_1101BAC7:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101BAC7: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1101BACA:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x1101BACA: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x1101BACD: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x1101BAD0: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1101BAE7; /* 0x1101BAD3: jne 0x1101bae7 */
L_1101BAD5:
    eax = 0x1101BADBu; /* 0x1101BAD5: mov eax, 0x1101badb */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101BADA: ret  */
L_1101BAE7:
    PUSH32(esp, ebx); /* 0x1101BAE7: push ebx */
    PUSH32(esp, ebx); /* 0x1101BAE8: push ebx */
    RECOMP_CALL(sub_1103B33A); /* 0x1101BAE9: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1101BAEEu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1101BADB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101BADBu);

    goto L_1101BADB;
L_1101BA90:
    eax = MEM32(esi); /* 0x1101BA90: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x1101BA92: push ebx */
    PUSH32(esp, edi); /* 0x1101BA93: push edi */
    ecx = MEM32(eax + 0x4); /* 0x1101BA94: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101BA97: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1101BA99: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x28); /* 0x1101BA9E: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_11010E6E); /* 0x1101BAA1: call 0x11010e6e */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1101BAA6: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101BAA8: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1101BAAD: ret 8 */
L_1101BADB:
    esi = MEM32(ebp + (-0x18)); /* 0x1101BADB: mov esi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101BADE: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101BAE0: mov dword ptr [ebp - 4], ebx */
    edi = ebx; /* 0x1101BAE3: mov edi, ebx */
    RECOMP_BACKEDGE();
    goto L_1101BA90; /* 0x1101BAE5: jmp 0x1101ba90 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1101BAEF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101BAEFu);
    RECOMP_EH_ENTER();

L_1101BAEF:
    PUSH32(esp, 0x24u); /* 0x1101BAEF: push 0x24 */
    eax = 0x1103DF2Eu; /* 0x1101BAF1: mov eax, 0x1103df2e */
    RECOMP_CALL(sub_1103B3DB); /* 0x1101BAF6: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1101BAFB: mov esi, ecx */
    MEM32(ebp + (-0x18)) = esi; /* 0x1101BAFD: mov dword ptr [ebp - 0x18], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101BB00: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x28); /* 0x1101BB02: lea ecx, [ebp - 0x28] */
    PUSH32(esp, esi); /* 0x1101BB05: push esi */
    edi = ebx; /* 0x1101BB06: mov edi, ebx */
    RECOMP_CALL(sub_11010E19); /* 0x1101BB08: call 0x11010e19 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101BB0D: mov dword ptr [ebp - 4], ebx */
    /* cmp MEM8(ebp + (-0x24)), LO8(ebx) */ /* 0x1101BB10: cmp byte ptr [ebp - 0x24], bl */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x24))) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101BB72; /* 0x1101BB13: je 0x1101bb72 */
L_1101BB15:
    eax = ebp + (-0x1C); /* 0x1101BB15: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1101BB18: push eax */
    eax = MEM32(esi); /* 0x1101BB19: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x1101BB1B: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101BB1E: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1100F94A); /* 0x1101BB20: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1101BB25: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1101BB26: mov byte ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_11015A3D); /* 0x1101BB2A: call 0x11015a3d */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101BB2F: pop ecx */
    ecx = ebp + (-0x1C); /* 0x1101BB30: lea ecx, [ebp - 0x1c] */
    MEM32(ebp + (-0x14)) = eax; /* 0x1101BB33: mov dword ptr [ebp - 0x14], eax */
    RECOMP_CALL(sub_1100E431); /* 0x1101BB36: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi); /* 0x1101BB3B: mov ecx, dword ptr [esi] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1101BB3D: push dword ptr [ebp + 8] */
    edx = MEM32(ebp + (-0x14)); /* 0x1101BB40: mov edx, dword ptr [ebp - 0x14] */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x1101BB43: mov byte ptr [ebp - 4], 2 */
    ecx = MEM32(ecx + 0x4); /* 0x1101BB47: mov ecx, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101BB4A: add ecx, esi */
    _flag_k = FK_ADD;
    edx = MEM32(edx); /* 0x1101BB4C: mov edx, dword ptr [edx] */
    eax = (uint32_t)MEM16(ecx + 0x40); /* 0x1101BB4E: movzx eax, word ptr [ecx + 0x40] */
    PUSH32(esp, eax); /* 0x1101BB52: push eax */
    PUSH32(esp, ecx); /* 0x1101BB53: push ecx */
    MEM8(ebp + (-0x30)) = (uint8_t)(LO8(ebx)); /* 0x1101BB54: mov byte ptr [ebp - 0x30], bl */
    eax = ebp + (-0x30); /* 0x1101BB57: lea eax, [ebp - 0x30] */
    PUSH32(esp, MEM32(ecx + 0x38)); /* 0x1101BB5A: push dword ptr [ecx + 0x38] */
    ecx = MEM32(ebp + (-0x14)); /* 0x1101BB5D: mov ecx, dword ptr [ebp - 0x14] */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x1101BB60: push dword ptr [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x1101BB63: push eax */
    RECOMP_ICALL(MEM32(edx + 0x28)); /* 0x1101BB64: call dword ptr [edx + 0x28] */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(ebp + (-0x30)), LO8(ebx) */ /* 0x1101BB67: cmp byte ptr [ebp - 0x30], bl */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x30))) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101BB6F; /* 0x1101BB6A: je 0x1101bb6f */
L_1101BB6C:
    PUSH32(esp, 4); /* 0x1101BB6C: push 4 */
    edi = POP32_VAL(esp); /* 0x1101BB6E: pop edi */
L_1101BB6F:
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101BB6F: mov dword ptr [ebp - 4], ebx */
L_1101BB72:
    eax = MEM32(esi); /* 0x1101BB72: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x1101BB74: push ebx */
    PUSH32(esp, edi); /* 0x1101BB75: push edi */
    ecx = MEM32(eax + 0x4); /* 0x1101BB76: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101BB79: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1101BB7B: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x28); /* 0x1101BB80: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_11010E6E); /* 0x1101BB83: call 0x11010e6e */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1101BB88: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101BB8A: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x1101BB8F: ret 4 */
L_1101BBBD:
    esi = MEM32(ebp + (-0x18)); /* 0x1101BBBD: mov esi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101BBC0: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101BBC2: mov dword ptr [ebp - 4], ebx */
    edi = ebx; /* 0x1101BBC5: mov edi, ebx */
    RECOMP_BACKEDGE();
    goto L_1101BB72; /* 0x1101BBC7: jmp 0x1101bb72 */
    { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x1101BBBDu: goto L_1101BBBD;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_1101BB92(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101BB92u);

L_1101BB92:
    ecx = MEM32(ebp + (-0x18)); /* 0x1101BB92: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101BB95: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x1101BB97: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x1101BB99: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1101BB9C: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x1101BB9E: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101BBA1: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), ebx */ /* 0x1101BBA4: cmp dword ptr [edx + 0x38], ebx */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101BBAC; /* 0x1101BBA7: jne 0x1101bbac */
L_1101BBA9:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101BBA9: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1101BBAC:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x1101BBAC: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x1101BBAF: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x1101BBB2: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1101BBC9; /* 0x1101BBB5: jne 0x1101bbc9 */
L_1101BBB7:
    eax = 0x1101BBBDu; /* 0x1101BBB7: mov eax, 0x1101bbbd */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101BBBC: ret  */
L_1101BBC9:
    PUSH32(esp, ebx); /* 0x1101BBC9: push ebx */
    PUSH32(esp, ebx); /* 0x1101BBCA: push ebx */
    RECOMP_CALL(sub_1103B33A); /* 0x1101BBCB: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1101BBD0u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1101BBBD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101BBBDu);

    goto L_1101BBBD;
L_1101BB72:
    eax = MEM32(esi); /* 0x1101BB72: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x1101BB74: push ebx */
    PUSH32(esp, edi); /* 0x1101BB75: push edi */
    ecx = MEM32(eax + 0x4); /* 0x1101BB76: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101BB79: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1101BB7B: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x28); /* 0x1101BB80: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_11010E6E); /* 0x1101BB83: call 0x11010e6e */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1101BB88: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101BB8A: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1101BB8F: ret 4 */
L_1101BBBD:
    esi = MEM32(ebp + (-0x18)); /* 0x1101BBBD: mov esi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101BBC0: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101BBC2: mov dword ptr [ebp - 4], ebx */
    edi = ebx; /* 0x1101BBC5: mov edi, ebx */
    RECOMP_BACKEDGE();
    goto L_1101BB72; /* 0x1101BBC7: jmp 0x1101bb72 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1101BBD1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101BBD1u);
    RECOMP_EH_ENTER();

L_1101BBD1:
    PUSH32(esp, 0x28u); /* 0x1101BBD1: push 0x28 */
    eax = 0x1103DF59u; /* 0x1101BBD3: mov eax, 0x1103df59 */
    RECOMP_CALL(sub_1103B3DB); /* 0x1101BBD8: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1101BBDD: mov esi, ecx */
    MEM32(ebp + (-0x18)) = esi; /* 0x1101BBDF: mov dword ptr [ebp - 0x18], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101BBE2: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x2C); /* 0x1101BBE4: lea ecx, [ebp - 0x2c] */
    PUSH32(esp, esi); /* 0x1101BBE7: push esi */
    edi = ebx; /* 0x1101BBE8: mov edi, ebx */
    RECOMP_CALL(sub_11010E19); /* 0x1101BBEA: call 0x11010e19 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101BBEF: mov dword ptr [ebp - 4], ebx */
    /* cmp MEM8(ebp + (-0x28)), LO8(ebx) */ /* 0x1101BBF2: cmp byte ptr [ebp - 0x28], bl */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x28))) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101BC84; /* 0x1101BBF5: je 0x1101bc84 */
L_1101BBFB:
    eax = ebp + (-0x1C); /* 0x1101BBFB: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1101BBFE: push eax */
    eax = MEM32(esi); /* 0x1101BBFF: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x1101BC01: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101BC04: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1100F94A); /* 0x1101BC06: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1101BC0B: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1101BC0C: mov byte ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_11015AD7); /* 0x1101BC10: call 0x11015ad7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101BC15: pop ecx */
    ecx = ebp + (-0x1C); /* 0x1101BC16: lea ecx, [ebp - 0x1c] */
    MEM32(ebp + (-0x14)) = eax; /* 0x1101BC19: mov dword ptr [ebp - 0x14], eax */
    RECOMP_CALL(sub_1100E431); /* 0x1101BC1C: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi); /* 0x1101BC21: mov ecx, dword ptr [esi] */
    edx = MEM32(ecx + 0x4); /* 0x1101BC23: mov edx, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x1101BC26: add edx, esi */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x20)) = edx; /* 0x1101BC28: mov dword ptr [ebp - 0x20], edx */
    ecx = MEM32(edx + 0x14); /* 0x1101BC2B: mov ecx, dword ptr [edx + 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xE00u);
    ecx = ecx & 0xE00u; /* 0x1101BC2E: and ecx, 0xe00 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, 0x400u */ /* 0x1101BC34: cmp ecx, 0x400 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x400u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101BC4C; /* 0x1101BC3A: je 0x1101bc4c */
L_1101BC3C:
    /* cmp ecx, 0x800u */ /* 0x1101BC3C: cmp ecx, 0x800 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x800u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101BC4C; /* 0x1101BC42: je 0x1101bc4c */
L_1101BC44:
    eax = MEM32(ebp + 0x8); /* 0x1101BC44: mov eax, dword ptr [ebp + 8] */
    ecx = (int32_t)(int16_t)LO16(eax); /* 0x1101BC47: movsx ecx, ax */
    goto L_1101BC52; /* 0x1101BC4A: jmp 0x1101bc52 */
L_1101BC4C:
    eax = MEM32(ebp + 0x8); /* 0x1101BC4C: mov eax, dword ptr [ebp + 8] */
    ecx = (uint32_t)LO16(eax); /* 0x1101BC4F: movzx ecx, ax */
L_1101BC52:
    eax = (uint32_t)MEM16(edx + 0x40); /* 0x1101BC52: movzx eax, word ptr [edx + 0x40] */
    edx = MEM32(ebp + (-0x14)); /* 0x1101BC56: mov edx, dword ptr [ebp - 0x14] */
    PUSH32(esp, ecx); /* 0x1101BC59: push ecx */
    ecx = MEM32(ebp + (-0x14)); /* 0x1101BC5A: mov ecx, dword ptr [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1101BC5D: push eax */
    eax = MEM32(ebp + (-0x20)); /* 0x1101BC5E: mov eax, dword ptr [ebp - 0x20] */
    edx = MEM32(edx); /* 0x1101BC61: mov edx, dword ptr [edx] */
    PUSH32(esp, eax); /* 0x1101BC63: push eax */
    MEM8(ebp + (-0x34)) = (uint8_t)(LO8(ebx)); /* 0x1101BC64: mov byte ptr [ebp - 0x34], bl */
    PUSH32(esp, MEM32(eax + 0x38)); /* 0x1101BC67: push dword ptr [eax + 0x38] */
    eax = ebp + (-0x34); /* 0x1101BC6A: lea eax, [ebp - 0x34] */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x1101BC6D: mov byte ptr [ebp - 4], 2 */
    PUSH32(esp, MEM32(ebp + (-0x34))); /* 0x1101BC71: push dword ptr [ebp - 0x34] */
    PUSH32(esp, eax); /* 0x1101BC74: push eax */
    RECOMP_ICALL(MEM32(edx + 0x24)); /* 0x1101BC75: call dword ptr [edx + 0x24] */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(ebp + (-0x34)), 0 */ /* 0x1101BC78: cmp byte ptr [ebp - 0x34], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x34))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101BC81; /* 0x1101BC7C: je 0x1101bc81 */
L_1101BC7E:
    PUSH32(esp, 4); /* 0x1101BC7E: push 4 */
    edi = POP32_VAL(esp); /* 0x1101BC80: pop edi */
L_1101BC81:
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101BC81: mov dword ptr [ebp - 4], ebx */
L_1101BC84:
    eax = MEM32(esi); /* 0x1101BC84: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x1101BC86: push ebx */
    PUSH32(esp, edi); /* 0x1101BC87: push edi */
    ecx = MEM32(eax + 0x4); /* 0x1101BC88: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101BC8B: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1101BC8D: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x2C); /* 0x1101BC92: lea ecx, [ebp - 0x2c] */
    RECOMP_CALL(sub_11010E6E); /* 0x1101BC95: call 0x11010e6e */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1101BC9A: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101BC9C: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x1101BCA1: ret 4 */
L_1101BCCF:
    esi = MEM32(ebp + (-0x18)); /* 0x1101BCCF: mov esi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101BCD2: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101BCD4: mov dword ptr [ebp - 4], ebx */
    edi = ebx; /* 0x1101BCD7: mov edi, ebx */
    RECOMP_BACKEDGE();
    goto L_1101BC84; /* 0x1101BCD9: jmp 0x1101bc84 */
    { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x1101BCCFu: goto L_1101BCCF;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_1101BCA4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101BCA4u);

L_1101BCA4:
    ecx = MEM32(ebp + (-0x18)); /* 0x1101BCA4: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101BCA7: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x1101BCA9: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x1101BCAB: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1101BCAE: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x1101BCB0: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101BCB3: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), ebx */ /* 0x1101BCB6: cmp dword ptr [edx + 0x38], ebx */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101BCBE; /* 0x1101BCB9: jne 0x1101bcbe */
L_1101BCBB:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101BCBB: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1101BCBE:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x1101BCBE: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x1101BCC1: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x1101BCC4: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1101BCDB; /* 0x1101BCC7: jne 0x1101bcdb */
L_1101BCC9:
    eax = 0x1101BCCFu; /* 0x1101BCC9: mov eax, 0x1101bccf */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101BCCE: ret  */
L_1101BCDB:
    PUSH32(esp, ebx); /* 0x1101BCDB: push ebx */
    PUSH32(esp, ebx); /* 0x1101BCDC: push ebx */
    RECOMP_CALL(sub_1103B33A); /* 0x1101BCDD: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1101BCE2u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1101BCCF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101BCCFu);

    goto L_1101BCCF;
L_1101BC84:
    eax = MEM32(esi); /* 0x1101BC84: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x1101BC86: push ebx */
    PUSH32(esp, edi); /* 0x1101BC87: push edi */
    ecx = MEM32(eax + 0x4); /* 0x1101BC88: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101BC8B: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1101BC8D: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x2C); /* 0x1101BC92: lea ecx, [ebp - 0x2c] */
    RECOMP_CALL(sub_11010E6E); /* 0x1101BC95: call 0x11010e6e */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1101BC9A: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101BC9C: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1101BCA1: ret 4 */
L_1101BCCF:
    esi = MEM32(ebp + (-0x18)); /* 0x1101BCCF: mov esi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101BCD2: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101BCD4: mov dword ptr [ebp - 4], ebx */
    edi = ebx; /* 0x1101BCD7: mov edi, ebx */
    RECOMP_BACKEDGE();
    goto L_1101BC84; /* 0x1101BCD9: jmp 0x1101bc84 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1101BCE3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101BCE3u);
    RECOMP_EH_ENTER();

L_1101BCE3:
    PUSH32(esp, 0x24u); /* 0x1101BCE3: push 0x24 */
    eax = 0x1103DF84u; /* 0x1101BCE5: mov eax, 0x1103df84 */
    RECOMP_CALL(sub_1103B3DB); /* 0x1101BCEA: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x1101BCEF: mov edi, ecx */
    MEM32(ebp + (-0x14)) = edi; /* 0x1101BCF1: mov dword ptr [ebp - 0x14], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101BCF4: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x28); /* 0x1101BCF6: lea ecx, [ebp - 0x28] */
    PUSH32(esp, edi); /* 0x1101BCF9: push edi */
    esi = ebx; /* 0x1101BCFA: mov esi, ebx */
    RECOMP_CALL(sub_11010E19); /* 0x1101BCFC: call 0x11010e19 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101BD01: mov dword ptr [ebp - 4], ebx */
    /* cmp MEM8(ebp + (-0x24)), LO8(ebx) */ /* 0x1101BD04: cmp byte ptr [ebp - 0x24], bl */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x24))) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101BD6D; /* 0x1101BD07: je 0x1101bd6d */
L_1101BD09:
    eax = ebp + (-0x18); /* 0x1101BD09: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x1101BD0C: push eax */
    eax = MEM32(edi); /* 0x1101BD0D: mov eax, dword ptr [edi] */
    ecx = MEM32(eax + 0x4); /* 0x1101BD0F: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x1101BD12: add ecx, edi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1100F94A); /* 0x1101BD14: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1101BD19: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1101BD1A: mov byte ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_11015AD7); /* 0x1101BD1E: call 0x11015ad7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101BD23: pop ecx */
    esi = eax; /* 0x1101BD24: mov esi, eax */
    ecx = ebp + (-0x18); /* 0x1101BD26: lea ecx, [ebp - 0x18] */
    MEM32(ebp + (-0x1C)) = esi; /* 0x1101BD29: mov dword ptr [ebp - 0x1c], esi */
    RECOMP_CALL(sub_1100E431); /* 0x1101BD2C: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi); /* 0x1101BD31: mov ecx, dword ptr [edi] */
    eax = MEM32(ebp + 0x8); /* 0x1101BD33: mov eax, dword ptr [ebp + 8] */
    esi = MEM32(esi); /* 0x1101BD36: mov esi, dword ptr [esi] */
    eax = (uint32_t)LO16(eax); /* 0x1101BD38: movzx eax, ax */
    edx = MEM32(ecx + 0x4); /* 0x1101BD3B: mov edx, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edi; /* 0x1101BD3E: add edx, edi */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x1101BD40: mov byte ptr [ebp - 4], 2 */
    PUSH32(esp, eax); /* 0x1101BD44: push eax */
    eax = ebp + (-0x30); /* 0x1101BD45: lea eax, [ebp - 0x30] */
    ecx = (uint32_t)MEM16(edx + 0x40); /* 0x1101BD48: movzx ecx, word ptr [edx + 0x40] */
    PUSH32(esp, ecx); /* 0x1101BD4C: push ecx */
    ecx = MEM32(ebp + (-0x1C)); /* 0x1101BD4D: mov ecx, dword ptr [ebp - 0x1c] */
    PUSH32(esp, edx); /* 0x1101BD50: push edx */
    MEM8(ebp + (-0x30)) = (uint8_t)(LO8(ebx)); /* 0x1101BD51: mov byte ptr [ebp - 0x30], bl */
    PUSH32(esp, MEM32(edx + 0x38)); /* 0x1101BD54: push dword ptr [edx + 0x38] */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x1101BD57: push dword ptr [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x1101BD5A: push eax */
    RECOMP_ICALL(MEM32(esi + 0x20)); /* 0x1101BD5B: call dword ptr [esi + 0x20] */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(ebp + (-0x30)), LO8(ebx) */ /* 0x1101BD5E: cmp byte ptr [ebp - 0x30], bl */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x30))) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101BD68; /* 0x1101BD61: je 0x1101bd68 */
L_1101BD63:
    PUSH32(esp, 4); /* 0x1101BD63: push 4 */
    esi = POP32_VAL(esp); /* 0x1101BD65: pop esi */
    goto L_1101BD6A; /* 0x1101BD66: jmp 0x1101bd6a */
L_1101BD68:
    esi = ebx; /* 0x1101BD68: mov esi, ebx */
L_1101BD6A:
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101BD6A: mov dword ptr [ebp - 4], ebx */
L_1101BD6D:
    eax = MEM32(edi); /* 0x1101BD6D: mov eax, dword ptr [edi] */
    PUSH32(esp, ebx); /* 0x1101BD6F: push ebx */
    PUSH32(esp, esi); /* 0x1101BD70: push esi */
    ecx = MEM32(eax + 0x4); /* 0x1101BD71: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x1101BD74: add ecx, edi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1101BD76: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x28); /* 0x1101BD7B: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_11010E6E); /* 0x1101BD7E: call 0x11010e6e */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x1101BD83: mov eax, edi */
    RECOMP_CALL(sub_1103B340); /* 0x1101BD85: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x1101BD8A: ret 4 */
L_1101BDB8:
    edi = MEM32(ebp + (-0x14)); /* 0x1101BDB8: mov edi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101BDBB: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101BDBD: mov dword ptr [ebp - 4], ebx */
    esi = ebx; /* 0x1101BDC0: mov esi, ebx */
    RECOMP_BACKEDGE();
    goto L_1101BD6D; /* 0x1101BDC2: jmp 0x1101bd6d */
    { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x1101BDB8u: goto L_1101BDB8;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_1101BD8D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101BD8Du);

L_1101BD8D:
    ecx = MEM32(ebp + (-0x14)); /* 0x1101BD8D: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101BD90: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x1101BD92: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x1101BD94: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1101BD97: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x1101BD99: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101BD9C: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), ebx */ /* 0x1101BD9F: cmp dword ptr [edx + 0x38], ebx */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101BDA7; /* 0x1101BDA2: jne 0x1101bda7 */
L_1101BDA4:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101BDA4: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1101BDA7:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x1101BDA7: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x1101BDAA: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x1101BDAD: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1101BDC4; /* 0x1101BDB0: jne 0x1101bdc4 */
L_1101BDB2:
    eax = 0x1101BDB8u; /* 0x1101BDB2: mov eax, 0x1101bdb8 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101BDB7: ret  */
L_1101BDC4:
    PUSH32(esp, ebx); /* 0x1101BDC4: push ebx */
    PUSH32(esp, ebx); /* 0x1101BDC5: push ebx */
    RECOMP_CALL(sub_1103B33A); /* 0x1101BDC6: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1101BDCBu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1101BDB8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101BDB8u);

    goto L_1101BDB8;
L_1101BD6D:
    eax = MEM32(edi); /* 0x1101BD6D: mov eax, dword ptr [edi] */
    PUSH32(esp, ebx); /* 0x1101BD6F: push ebx */
    PUSH32(esp, esi); /* 0x1101BD70: push esi */
    ecx = MEM32(eax + 0x4); /* 0x1101BD71: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x1101BD74: add ecx, edi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1101BD76: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x28); /* 0x1101BD7B: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_11010E6E); /* 0x1101BD7E: call 0x11010e6e */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x1101BD83: mov eax, edi */
    RECOMP_CALL(sub_1103B340); /* 0x1101BD85: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1101BD8A: ret 4 */
L_1101BDB8:
    edi = MEM32(ebp + (-0x14)); /* 0x1101BDB8: mov edi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101BDBB: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101BDBD: mov dword ptr [ebp - 4], ebx */
    esi = ebx; /* 0x1101BDC0: mov esi, ebx */
    RECOMP_BACKEDGE();
    goto L_1101BD6D; /* 0x1101BDC2: jmp 0x1101bd6d */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1101BDCC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101BDCCu);
    RECOMP_EH_ENTER();

L_1101BDCC:
    PUSH32(esp, 0x24u); /* 0x1101BDCC: push 0x24 */
    eax = 0x1103DFAFu; /* 0x1101BDCE: mov eax, 0x1103dfaf */
    RECOMP_CALL(sub_1103B3DB); /* 0x1101BDD3: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1101BDD8: mov esi, ecx */
    MEM32(ebp + (-0x18)) = esi; /* 0x1101BDDA: mov dword ptr [ebp - 0x18], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101BDDD: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x28); /* 0x1101BDDF: lea ecx, [ebp - 0x28] */
    PUSH32(esp, esi); /* 0x1101BDE2: push esi */
    edi = ebx; /* 0x1101BDE3: mov edi, ebx */
    RECOMP_CALL(sub_11010E19); /* 0x1101BDE5: call 0x11010e19 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101BDEA: mov dword ptr [ebp - 4], ebx */
    /* cmp MEM8(ebp + (-0x24)), LO8(ebx) */ /* 0x1101BDED: cmp byte ptr [ebp - 0x24], bl */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x24))) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101BE4F; /* 0x1101BDF0: je 0x1101be4f */
L_1101BDF2:
    eax = ebp + (-0x1C); /* 0x1101BDF2: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1101BDF5: push eax */
    eax = MEM32(esi); /* 0x1101BDF6: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x1101BDF8: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101BDFB: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1100F94A); /* 0x1101BDFD: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1101BE02: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1101BE03: mov byte ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_11015AD7); /* 0x1101BE07: call 0x11015ad7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101BE0C: pop ecx */
    ecx = ebp + (-0x1C); /* 0x1101BE0D: lea ecx, [ebp - 0x1c] */
    MEM32(ebp + (-0x14)) = eax; /* 0x1101BE10: mov dword ptr [ebp - 0x14], eax */
    RECOMP_CALL(sub_1100E431); /* 0x1101BE13: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi); /* 0x1101BE18: mov ecx, dword ptr [esi] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1101BE1A: push dword ptr [ebp + 8] */
    edx = MEM32(ebp + (-0x14)); /* 0x1101BE1D: mov edx, dword ptr [ebp - 0x14] */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x1101BE20: mov byte ptr [ebp - 4], 2 */
    ecx = MEM32(ecx + 0x4); /* 0x1101BE24: mov ecx, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101BE27: add ecx, esi */
    _flag_k = FK_ADD;
    edx = MEM32(edx); /* 0x1101BE29: mov edx, dword ptr [edx] */
    eax = (uint32_t)MEM16(ecx + 0x40); /* 0x1101BE2B: movzx eax, word ptr [ecx + 0x40] */
    PUSH32(esp, eax); /* 0x1101BE2F: push eax */
    PUSH32(esp, ecx); /* 0x1101BE30: push ecx */
    MEM8(ebp + (-0x30)) = (uint8_t)(LO8(ebx)); /* 0x1101BE31: mov byte ptr [ebp - 0x30], bl */
    eax = ebp + (-0x30); /* 0x1101BE34: lea eax, [ebp - 0x30] */
    PUSH32(esp, MEM32(ecx + 0x38)); /* 0x1101BE37: push dword ptr [ecx + 0x38] */
    ecx = MEM32(ebp + (-0x14)); /* 0x1101BE3A: mov ecx, dword ptr [ebp - 0x14] */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x1101BE3D: push dword ptr [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x1101BE40: push eax */
    RECOMP_ICALL(MEM32(edx + 0x24)); /* 0x1101BE41: call dword ptr [edx + 0x24] */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(ebp + (-0x30)), LO8(ebx) */ /* 0x1101BE44: cmp byte ptr [ebp - 0x30], bl */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x30))) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101BE4C; /* 0x1101BE47: je 0x1101be4c */
L_1101BE49:
    PUSH32(esp, 4); /* 0x1101BE49: push 4 */
    edi = POP32_VAL(esp); /* 0x1101BE4B: pop edi */
L_1101BE4C:
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101BE4C: mov dword ptr [ebp - 4], ebx */
L_1101BE4F:
    eax = MEM32(esi); /* 0x1101BE4F: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x1101BE51: push ebx */
    PUSH32(esp, edi); /* 0x1101BE52: push edi */
    ecx = MEM32(eax + 0x4); /* 0x1101BE53: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101BE56: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1101BE58: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x28); /* 0x1101BE5D: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_11010E6E); /* 0x1101BE60: call 0x11010e6e */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1101BE65: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101BE67: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x1101BE6C: ret 4 */
L_1101BE9A:
    esi = MEM32(ebp + (-0x18)); /* 0x1101BE9A: mov esi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101BE9D: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101BE9F: mov dword ptr [ebp - 4], ebx */
    edi = ebx; /* 0x1101BEA2: mov edi, ebx */
    RECOMP_BACKEDGE();
    goto L_1101BE4F; /* 0x1101BEA4: jmp 0x1101be4f */
    { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x1101BE9Au: goto L_1101BE9A;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_1101BE6F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101BE6Fu);

L_1101BE6F:
    ecx = MEM32(ebp + (-0x18)); /* 0x1101BE6F: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101BE72: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x1101BE74: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x1101BE76: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1101BE79: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x1101BE7B: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101BE7E: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), ebx */ /* 0x1101BE81: cmp dword ptr [edx + 0x38], ebx */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101BE89; /* 0x1101BE84: jne 0x1101be89 */
L_1101BE86:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101BE86: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1101BE89:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x1101BE89: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x1101BE8C: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x1101BE8F: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1101BEA6; /* 0x1101BE92: jne 0x1101bea6 */
L_1101BE94:
    eax = 0x1101BE9Au; /* 0x1101BE94: mov eax, 0x1101be9a */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101BE99: ret  */
L_1101BEA6:
    PUSH32(esp, ebx); /* 0x1101BEA6: push ebx */
    PUSH32(esp, ebx); /* 0x1101BEA7: push ebx */
    RECOMP_CALL(sub_1103B33A); /* 0x1101BEA8: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1101BEADu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1101BE9A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101BE9Au);

    goto L_1101BE9A;
L_1101BE4F:
    eax = MEM32(esi); /* 0x1101BE4F: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x1101BE51: push ebx */
    PUSH32(esp, edi); /* 0x1101BE52: push edi */
    ecx = MEM32(eax + 0x4); /* 0x1101BE53: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101BE56: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1101BE58: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x28); /* 0x1101BE5D: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_11010E6E); /* 0x1101BE60: call 0x11010e6e */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1101BE65: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101BE67: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1101BE6C: ret 4 */
L_1101BE9A:
    esi = MEM32(ebp + (-0x18)); /* 0x1101BE9A: mov esi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101BE9D: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101BE9F: mov dword ptr [ebp - 4], ebx */
    edi = ebx; /* 0x1101BEA2: mov edi, ebx */
    RECOMP_BACKEDGE();
    goto L_1101BE4F; /* 0x1101BEA4: jmp 0x1101be4f */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1101BEAE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101BEAEu);
    RECOMP_EH_ENTER();

L_1101BEAE:
    PUSH32(esp, 0x24u); /* 0x1101BEAE: push 0x24 */
    eax = 0x1103DFDAu; /* 0x1101BEB0: mov eax, 0x1103dfda */
    RECOMP_CALL(sub_1103B3DB); /* 0x1101BEB5: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1101BEBA: mov esi, ecx */
    MEM32(ebp + (-0x18)) = esi; /* 0x1101BEBC: mov dword ptr [ebp - 0x18], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101BEBF: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x28); /* 0x1101BEC1: lea ecx, [ebp - 0x28] */
    PUSH32(esp, esi); /* 0x1101BEC4: push esi */
    edi = ebx; /* 0x1101BEC5: mov edi, ebx */
    RECOMP_CALL(sub_11010E19); /* 0x1101BEC7: call 0x11010e19 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101BECC: mov dword ptr [ebp - 4], ebx */
    /* cmp MEM8(ebp + (-0x24)), LO8(ebx) */ /* 0x1101BECF: cmp byte ptr [ebp - 0x24], bl */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x24))) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101BF31; /* 0x1101BED2: je 0x1101bf31 */
L_1101BED4:
    eax = ebp + (-0x1C); /* 0x1101BED4: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1101BED7: push eax */
    eax = MEM32(esi); /* 0x1101BED8: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x1101BEDA: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101BEDD: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1100F94A); /* 0x1101BEDF: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1101BEE4: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1101BEE5: mov byte ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_11015AD7); /* 0x1101BEE9: call 0x11015ad7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101BEEE: pop ecx */
    ecx = ebp + (-0x1C); /* 0x1101BEEF: lea ecx, [ebp - 0x1c] */
    MEM32(ebp + (-0x14)) = eax; /* 0x1101BEF2: mov dword ptr [ebp - 0x14], eax */
    RECOMP_CALL(sub_1100E431); /* 0x1101BEF5: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi); /* 0x1101BEFA: mov ecx, dword ptr [esi] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1101BEFC: push dword ptr [ebp + 8] */
    edx = MEM32(ebp + (-0x14)); /* 0x1101BEFF: mov edx, dword ptr [ebp - 0x14] */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x1101BF02: mov byte ptr [ebp - 4], 2 */
    ecx = MEM32(ecx + 0x4); /* 0x1101BF06: mov ecx, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101BF09: add ecx, esi */
    _flag_k = FK_ADD;
    edx = MEM32(edx); /* 0x1101BF0B: mov edx, dword ptr [edx] */
    eax = (uint32_t)MEM16(ecx + 0x40); /* 0x1101BF0D: movzx eax, word ptr [ecx + 0x40] */
    PUSH32(esp, eax); /* 0x1101BF11: push eax */
    PUSH32(esp, ecx); /* 0x1101BF12: push ecx */
    MEM8(ebp + (-0x30)) = (uint8_t)(LO8(ebx)); /* 0x1101BF13: mov byte ptr [ebp - 0x30], bl */
    eax = ebp + (-0x30); /* 0x1101BF16: lea eax, [ebp - 0x30] */
    PUSH32(esp, MEM32(ecx + 0x38)); /* 0x1101BF19: push dword ptr [ecx + 0x38] */
    ecx = MEM32(ebp + (-0x14)); /* 0x1101BF1C: mov ecx, dword ptr [ebp - 0x14] */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x1101BF1F: push dword ptr [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x1101BF22: push eax */
    RECOMP_ICALL(MEM32(edx + 0x20)); /* 0x1101BF23: call dword ptr [edx + 0x20] */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(ebp + (-0x30)), LO8(ebx) */ /* 0x1101BF26: cmp byte ptr [ebp - 0x30], bl */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x30))) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101BF2E; /* 0x1101BF29: je 0x1101bf2e */
L_1101BF2B:
    PUSH32(esp, 4); /* 0x1101BF2B: push 4 */
    edi = POP32_VAL(esp); /* 0x1101BF2D: pop edi */
L_1101BF2E:
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101BF2E: mov dword ptr [ebp - 4], ebx */
L_1101BF31:
    eax = MEM32(esi); /* 0x1101BF31: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x1101BF33: push ebx */
    PUSH32(esp, edi); /* 0x1101BF34: push edi */
    ecx = MEM32(eax + 0x4); /* 0x1101BF35: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101BF38: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1101BF3A: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x28); /* 0x1101BF3F: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_11010E6E); /* 0x1101BF42: call 0x11010e6e */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1101BF47: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101BF49: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x1101BF4E: ret 4 */
L_1101BF7C:
    esi = MEM32(ebp + (-0x18)); /* 0x1101BF7C: mov esi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101BF7F: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101BF81: mov dword ptr [ebp - 4], ebx */
    edi = ebx; /* 0x1101BF84: mov edi, ebx */
    RECOMP_BACKEDGE();
    goto L_1101BF31; /* 0x1101BF86: jmp 0x1101bf31 */
    { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x1101BF7Cu: goto L_1101BF7C;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_1101BF51(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101BF51u);

L_1101BF51:
    ecx = MEM32(ebp + (-0x18)); /* 0x1101BF51: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101BF54: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x1101BF56: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x1101BF58: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1101BF5B: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x1101BF5D: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101BF60: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), ebx */ /* 0x1101BF63: cmp dword ptr [edx + 0x38], ebx */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101BF6B; /* 0x1101BF66: jne 0x1101bf6b */
L_1101BF68:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101BF68: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1101BF6B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x1101BF6B: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x1101BF6E: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x1101BF71: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1101BF88; /* 0x1101BF74: jne 0x1101bf88 */
L_1101BF76:
    eax = 0x1101BF7Cu; /* 0x1101BF76: mov eax, 0x1101bf7c */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101BF7B: ret  */
L_1101BF88:
    PUSH32(esp, ebx); /* 0x1101BF88: push ebx */
    PUSH32(esp, ebx); /* 0x1101BF89: push ebx */
    RECOMP_CALL(sub_1103B33A); /* 0x1101BF8A: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1101BF8Fu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1101BF7C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101BF7Cu);

    goto L_1101BF7C;
L_1101BF31:
    eax = MEM32(esi); /* 0x1101BF31: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x1101BF33: push ebx */
    PUSH32(esp, edi); /* 0x1101BF34: push edi */
    ecx = MEM32(eax + 0x4); /* 0x1101BF35: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101BF38: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1101BF3A: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x28); /* 0x1101BF3F: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_11010E6E); /* 0x1101BF42: call 0x11010e6e */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1101BF47: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101BF49: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1101BF4E: ret 4 */
L_1101BF7C:
    esi = MEM32(ebp + (-0x18)); /* 0x1101BF7C: mov esi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101BF7F: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101BF81: mov dword ptr [ebp - 4], ebx */
    edi = ebx; /* 0x1101BF84: mov edi, ebx */
    RECOMP_BACKEDGE();
    goto L_1101BF31; /* 0x1101BF86: jmp 0x1101bf31 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1101BF90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101BF90u);
    RECOMP_EH_ENTER();

L_1101BF90:
    PUSH32(esp, 0x24u); /* 0x1101BF90: push 0x24 */
    eax = 0x1103E005u; /* 0x1101BF92: mov eax, 0x1103e005 */
    RECOMP_CALL(sub_1103B3DB); /* 0x1101BF97: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1101BF9C: mov esi, ecx */
    MEM32(ebp + (-0x18)) = esi; /* 0x1101BF9E: mov dword ptr [ebp - 0x18], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101BFA1: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x28); /* 0x1101BFA3: lea ecx, [ebp - 0x28] */
    PUSH32(esp, esi); /* 0x1101BFA6: push esi */
    edi = ebx; /* 0x1101BFA7: mov edi, ebx */
    RECOMP_CALL(sub_11010E19); /* 0x1101BFA9: call 0x11010e19 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101BFAE: mov dword ptr [ebp - 4], ebx */
    /* cmp MEM8(ebp + (-0x24)), LO8(ebx) */ /* 0x1101BFB1: cmp byte ptr [ebp - 0x24], bl */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x24))) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101C018; /* 0x1101BFB4: je 0x1101c018 */
L_1101BFB6:
    eax = ebp + (-0x1C); /* 0x1101BFB6: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1101BFB9: push eax */
    eax = MEM32(esi); /* 0x1101BFBA: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x1101BFBC: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101BFBF: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1100F94A); /* 0x1101BFC1: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1101BFC6: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1101BFC7: mov byte ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_11015AD7); /* 0x1101BFCB: call 0x11015ad7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101BFD0: pop ecx */
    ecx = ebp + (-0x1C); /* 0x1101BFD1: lea ecx, [ebp - 0x1c] */
    MEM32(ebp + (-0x14)) = eax; /* 0x1101BFD4: mov dword ptr [ebp - 0x14], eax */
    RECOMP_CALL(sub_1100E431); /* 0x1101BFD7: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi); /* 0x1101BFDC: mov ecx, dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x1101BFDE: fld dword ptr [ebp + 8] */
    edx = MEM32(ebp + (-0x14)); /* 0x1101BFE1: mov edx, dword ptr [ebp - 0x14] */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x1101BFE4: mov byte ptr [ebp - 4], 2 */
    ecx = MEM32(ecx + 0x4); /* 0x1101BFE8: mov ecx, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101BFEB: add ecx, esi */
    _flag_k = FK_ADD;
    edx = MEM32(edx); /* 0x1101BFED: mov edx, dword ptr [edx] */
    PUSH32(esp, ecx); /* 0x1101BFEF: push ecx */
    PUSH32(esp, ecx); /* 0x1101BFF0: push ecx */
    eax = (uint32_t)MEM16(ecx + 0x40); /* 0x1101BFF1: movzx eax, word ptr [ecx + 0x40] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x1101BFF5: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x1101BFF8: push eax */
    PUSH32(esp, ecx); /* 0x1101BFF9: push ecx */
    MEM8(ebp + (-0x30)) = (uint8_t)(LO8(ebx)); /* 0x1101BFFA: mov byte ptr [ebp - 0x30], bl */
    eax = ebp + (-0x30); /* 0x1101BFFD: lea eax, [ebp - 0x30] */
    PUSH32(esp, MEM32(ecx + 0x38)); /* 0x1101C000: push dword ptr [ecx + 0x38] */
    ecx = MEM32(ebp + (-0x14)); /* 0x1101C003: mov ecx, dword ptr [ebp - 0x14] */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x1101C006: push dword ptr [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x1101C009: push eax */
    RECOMP_ICALL(MEM32(edx + 0x14)); /* 0x1101C00A: call dword ptr [edx + 0x14] */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(ebp + (-0x30)), LO8(ebx) */ /* 0x1101C00D: cmp byte ptr [ebp - 0x30], bl */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x30))) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101C015; /* 0x1101C010: je 0x1101c015 */
L_1101C012:
    PUSH32(esp, 4); /* 0x1101C012: push 4 */
    edi = POP32_VAL(esp); /* 0x1101C014: pop edi */
L_1101C015:
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101C015: mov dword ptr [ebp - 4], ebx */
L_1101C018:
    eax = MEM32(esi); /* 0x1101C018: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x1101C01A: push ebx */
    PUSH32(esp, edi); /* 0x1101C01B: push edi */
    ecx = MEM32(eax + 0x4); /* 0x1101C01C: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101C01F: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1101C021: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x28); /* 0x1101C026: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_11010E6E); /* 0x1101C029: call 0x11010e6e */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1101C02E: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101C030: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x1101C035: ret 4 */
L_1101C063:
    esi = MEM32(ebp + (-0x18)); /* 0x1101C063: mov esi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101C066: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101C068: mov dword ptr [ebp - 4], ebx */
    edi = ebx; /* 0x1101C06B: mov edi, ebx */
    RECOMP_BACKEDGE();
    goto L_1101C018; /* 0x1101C06D: jmp 0x1101c018 */
    { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x1101C063u: goto L_1101C063;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_1101C038(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101C038u);

L_1101C038:
    ecx = MEM32(ebp + (-0x18)); /* 0x1101C038: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101C03B: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x1101C03D: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x1101C03F: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1101C042: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x1101C044: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101C047: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), ebx */ /* 0x1101C04A: cmp dword ptr [edx + 0x38], ebx */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101C052; /* 0x1101C04D: jne 0x1101c052 */
L_1101C04F:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101C04F: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1101C052:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x1101C052: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x1101C055: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x1101C058: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1101C06F; /* 0x1101C05B: jne 0x1101c06f */
L_1101C05D:
    eax = 0x1101C063u; /* 0x1101C05D: mov eax, 0x1101c063 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101C062: ret  */
L_1101C06F:
    PUSH32(esp, ebx); /* 0x1101C06F: push ebx */
    PUSH32(esp, ebx); /* 0x1101C070: push ebx */
    RECOMP_CALL(sub_1103B33A); /* 0x1101C071: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1101C076u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1101C063(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101C063u);

    goto L_1101C063;
L_1101C018:
    eax = MEM32(esi); /* 0x1101C018: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x1101C01A: push ebx */
    PUSH32(esp, edi); /* 0x1101C01B: push edi */
    ecx = MEM32(eax + 0x4); /* 0x1101C01C: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101C01F: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1101C021: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x28); /* 0x1101C026: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_11010E6E); /* 0x1101C029: call 0x11010e6e */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1101C02E: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101C030: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1101C035: ret 4 */
L_1101C063:
    esi = MEM32(ebp + (-0x18)); /* 0x1101C063: mov esi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101C066: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101C068: mov dword ptr [ebp - 4], ebx */
    edi = ebx; /* 0x1101C06B: mov edi, ebx */
    RECOMP_BACKEDGE();
    goto L_1101C018; /* 0x1101C06D: jmp 0x1101c018 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1101C077(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101C077u);
    RECOMP_EH_ENTER();

L_1101C077:
    PUSH32(esp, 0x24u); /* 0x1101C077: push 0x24 */
    eax = 0x1103E030u; /* 0x1101C079: mov eax, 0x1103e030 */
    RECOMP_CALL(sub_1103B3DB); /* 0x1101C07E: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1101C083: mov esi, ecx */
    MEM32(ebp + (-0x18)) = esi; /* 0x1101C085: mov dword ptr [ebp - 0x18], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101C088: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x28); /* 0x1101C08A: lea ecx, [ebp - 0x28] */
    PUSH32(esp, esi); /* 0x1101C08D: push esi */
    edi = ebx; /* 0x1101C08E: mov edi, ebx */
    RECOMP_CALL(sub_11010E19); /* 0x1101C090: call 0x11010e19 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101C095: mov dword ptr [ebp - 4], ebx */
    /* cmp MEM8(ebp + (-0x24)), LO8(ebx) */ /* 0x1101C098: cmp byte ptr [ebp - 0x24], bl */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x24))) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101C0FF; /* 0x1101C09B: je 0x1101c0ff */
L_1101C09D:
    eax = ebp + (-0x1C); /* 0x1101C09D: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1101C0A0: push eax */
    eax = MEM32(esi); /* 0x1101C0A1: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x1101C0A3: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101C0A6: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1100F94A); /* 0x1101C0A8: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1101C0AD: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1101C0AE: mov byte ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_11015AD7); /* 0x1101C0B2: call 0x11015ad7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101C0B7: pop ecx */
    ecx = ebp + (-0x1C); /* 0x1101C0B8: lea ecx, [ebp - 0x1c] */
    MEM32(ebp + (-0x14)) = eax; /* 0x1101C0BB: mov dword ptr [ebp - 0x14], eax */
    RECOMP_CALL(sub_1100E431); /* 0x1101C0BE: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi); /* 0x1101C0C3: mov ecx, dword ptr [esi] */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x1101C0C5: fld qword ptr [ebp + 8] */
    edx = MEM32(ebp + (-0x14)); /* 0x1101C0C8: mov edx, dword ptr [ebp - 0x14] */
    MEM8(ebp + (-0x30)) = (uint8_t)(LO8(ebx)); /* 0x1101C0CB: mov byte ptr [ebp - 0x30], bl */
    ecx = MEM32(ecx + 0x4); /* 0x1101C0CE: mov ecx, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101C0D1: add ecx, esi */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x1101C0D3: mov byte ptr [ebp - 4], 2 */
    edx = MEM32(edx); /* 0x1101C0D7: mov edx, dword ptr [edx] */
    PUSH32(esp, ecx); /* 0x1101C0D9: push ecx */
    PUSH32(esp, ecx); /* 0x1101C0DA: push ecx */
    eax = (uint32_t)MEM16(ecx + 0x40); /* 0x1101C0DB: movzx eax, word ptr [ecx + 0x40] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x1101C0DF: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x1101C0E2: push eax */
    PUSH32(esp, ecx); /* 0x1101C0E3: push ecx */
    PUSH32(esp, MEM32(ecx + 0x38)); /* 0x1101C0E4: push dword ptr [ecx + 0x38] */
    ecx = MEM32(ebp + (-0x14)); /* 0x1101C0E7: mov ecx, dword ptr [ebp - 0x14] */
    eax = ebp + 0x8; /* 0x1101C0EA: lea eax, [ebp + 8] */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x1101C0ED: push dword ptr [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x1101C0F0: push eax */
    RECOMP_ICALL(MEM32(edx + 0x14)); /* 0x1101C0F1: call dword ptr [edx + 0x14] */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(ebp + 0x8), LO8(ebx) */ /* 0x1101C0F4: cmp byte ptr [ebp + 8], bl */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101C0FC; /* 0x1101C0F7: je 0x1101c0fc */
L_1101C0F9:
    PUSH32(esp, 4); /* 0x1101C0F9: push 4 */
    edi = POP32_VAL(esp); /* 0x1101C0FB: pop edi */
L_1101C0FC:
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101C0FC: mov dword ptr [ebp - 4], ebx */
L_1101C0FF:
    eax = MEM32(esi); /* 0x1101C0FF: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x1101C101: push ebx */
    PUSH32(esp, edi); /* 0x1101C102: push edi */
    ecx = MEM32(eax + 0x4); /* 0x1101C103: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101C106: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1101C108: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x28); /* 0x1101C10D: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_11010E6E); /* 0x1101C110: call 0x11010e6e */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1101C115: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101C117: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x1101C11C: ret 8 */
L_1101C14A:
    esi = MEM32(ebp + (-0x18)); /* 0x1101C14A: mov esi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101C14D: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101C14F: mov dword ptr [ebp - 4], ebx */
    edi = ebx; /* 0x1101C152: mov edi, ebx */
    RECOMP_BACKEDGE();
    goto L_1101C0FF; /* 0x1101C154: jmp 0x1101c0ff */
    { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x1101C14Au: goto L_1101C14A;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_1101C11F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101C11Fu);

L_1101C11F:
    ecx = MEM32(ebp + (-0x18)); /* 0x1101C11F: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101C122: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x1101C124: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x1101C126: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1101C129: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x1101C12B: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101C12E: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), ebx */ /* 0x1101C131: cmp dword ptr [edx + 0x38], ebx */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101C139; /* 0x1101C134: jne 0x1101c139 */
L_1101C136:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101C136: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1101C139:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x1101C139: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x1101C13C: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x1101C13F: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1101C156; /* 0x1101C142: jne 0x1101c156 */
L_1101C144:
    eax = 0x1101C14Au; /* 0x1101C144: mov eax, 0x1101c14a */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101C149: ret  */
L_1101C156:
    PUSH32(esp, ebx); /* 0x1101C156: push ebx */
    PUSH32(esp, ebx); /* 0x1101C157: push ebx */
    RECOMP_CALL(sub_1103B33A); /* 0x1101C158: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1101C15Du, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1101C14A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101C14Au);

    goto L_1101C14A;
L_1101C0FF:
    eax = MEM32(esi); /* 0x1101C0FF: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x1101C101: push ebx */
    PUSH32(esp, edi); /* 0x1101C102: push edi */
    ecx = MEM32(eax + 0x4); /* 0x1101C103: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101C106: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1101C108: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x28); /* 0x1101C10D: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_11010E6E); /* 0x1101C110: call 0x11010e6e */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1101C115: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101C117: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1101C11C: ret 8 */
L_1101C14A:
    esi = MEM32(ebp + (-0x18)); /* 0x1101C14A: mov esi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101C14D: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101C14F: mov dword ptr [ebp - 4], ebx */
    edi = ebx; /* 0x1101C152: mov edi, ebx */
    RECOMP_BACKEDGE();
    goto L_1101C0FF; /* 0x1101C154: jmp 0x1101c0ff */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1101C15E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101C15Eu);
    RECOMP_EH_ENTER();

L_1101C15E:
    PUSH32(esp, 0x24u); /* 0x1101C15E: push 0x24 */
    eax = 0x1103E05Bu; /* 0x1101C160: mov eax, 0x1103e05b */
    RECOMP_CALL(sub_1103B3DB); /* 0x1101C165: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1101C16A: mov esi, ecx */
    MEM32(ebp + (-0x18)) = esi; /* 0x1101C16C: mov dword ptr [ebp - 0x18], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101C16F: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x28); /* 0x1101C171: lea ecx, [ebp - 0x28] */
    PUSH32(esp, esi); /* 0x1101C174: push esi */
    edi = ebx; /* 0x1101C175: mov edi, ebx */
    RECOMP_CALL(sub_11010E19); /* 0x1101C177: call 0x11010e19 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101C17C: mov dword ptr [ebp - 4], ebx */
    /* cmp MEM8(ebp + (-0x24)), LO8(ebx) */ /* 0x1101C17F: cmp byte ptr [ebp - 0x24], bl */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x24))) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101C1E6; /* 0x1101C182: je 0x1101c1e6 */
L_1101C184:
    eax = ebp + (-0x1C); /* 0x1101C184: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1101C187: push eax */
    eax = MEM32(esi); /* 0x1101C188: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x1101C18A: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101C18D: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1100F94A); /* 0x1101C18F: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1101C194: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1101C195: mov byte ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_11015AD7); /* 0x1101C199: call 0x11015ad7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101C19E: pop ecx */
    ecx = ebp + (-0x1C); /* 0x1101C19F: lea ecx, [ebp - 0x1c] */
    MEM32(ebp + (-0x14)) = eax; /* 0x1101C1A2: mov dword ptr [ebp - 0x14], eax */
    RECOMP_CALL(sub_1100E431); /* 0x1101C1A5: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi); /* 0x1101C1AA: mov ecx, dword ptr [esi] */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x1101C1AC: fld qword ptr [ebp + 8] */
    edx = MEM32(ebp + (-0x14)); /* 0x1101C1AF: mov edx, dword ptr [ebp - 0x14] */
    MEM8(ebp + (-0x30)) = (uint8_t)(LO8(ebx)); /* 0x1101C1B2: mov byte ptr [ebp - 0x30], bl */
    ecx = MEM32(ecx + 0x4); /* 0x1101C1B5: mov ecx, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101C1B8: add ecx, esi */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x1101C1BA: mov byte ptr [ebp - 4], 2 */
    edx = MEM32(edx); /* 0x1101C1BE: mov edx, dword ptr [edx] */
    PUSH32(esp, ecx); /* 0x1101C1C0: push ecx */
    PUSH32(esp, ecx); /* 0x1101C1C1: push ecx */
    eax = (uint32_t)MEM16(ecx + 0x40); /* 0x1101C1C2: movzx eax, word ptr [ecx + 0x40] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x1101C1C6: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x1101C1C9: push eax */
    PUSH32(esp, ecx); /* 0x1101C1CA: push ecx */
    PUSH32(esp, MEM32(ecx + 0x38)); /* 0x1101C1CB: push dword ptr [ecx + 0x38] */
    ecx = MEM32(ebp + (-0x14)); /* 0x1101C1CE: mov ecx, dword ptr [ebp - 0x14] */
    eax = ebp + 0x8; /* 0x1101C1D1: lea eax, [ebp + 8] */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x1101C1D4: push dword ptr [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x1101C1D7: push eax */
    RECOMP_ICALL(MEM32(edx + 0x10)); /* 0x1101C1D8: call dword ptr [edx + 0x10] */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(ebp + 0x8), LO8(ebx) */ /* 0x1101C1DB: cmp byte ptr [ebp + 8], bl */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101C1E3; /* 0x1101C1DE: je 0x1101c1e3 */
L_1101C1E0:
    PUSH32(esp, 4); /* 0x1101C1E0: push 4 */
    edi = POP32_VAL(esp); /* 0x1101C1E2: pop edi */
L_1101C1E3:
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101C1E3: mov dword ptr [ebp - 4], ebx */
L_1101C1E6:
    eax = MEM32(esi); /* 0x1101C1E6: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x1101C1E8: push ebx */
    PUSH32(esp, edi); /* 0x1101C1E9: push edi */
    ecx = MEM32(eax + 0x4); /* 0x1101C1EA: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101C1ED: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1101C1EF: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x28); /* 0x1101C1F4: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_11010E6E); /* 0x1101C1F7: call 0x11010e6e */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1101C1FC: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101C1FE: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x1101C203: ret 8 */
L_1101C231:
    esi = MEM32(ebp + (-0x18)); /* 0x1101C231: mov esi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101C234: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101C236: mov dword ptr [ebp - 4], ebx */
    edi = ebx; /* 0x1101C239: mov edi, ebx */
    RECOMP_BACKEDGE();
    goto L_1101C1E6; /* 0x1101C23B: jmp 0x1101c1e6 */
    { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x1101C231u: goto L_1101C231;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_1101C206(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101C206u);

L_1101C206:
    ecx = MEM32(ebp + (-0x18)); /* 0x1101C206: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101C209: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x1101C20B: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x1101C20D: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1101C210: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x1101C212: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101C215: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), ebx */ /* 0x1101C218: cmp dword ptr [edx + 0x38], ebx */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101C220; /* 0x1101C21B: jne 0x1101c220 */
L_1101C21D:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101C21D: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1101C220:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x1101C220: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x1101C223: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x1101C226: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1101C23D; /* 0x1101C229: jne 0x1101c23d */
L_1101C22B:
    eax = 0x1101C231u; /* 0x1101C22B: mov eax, 0x1101c231 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101C230: ret  */
L_1101C23D:
    PUSH32(esp, ebx); /* 0x1101C23D: push ebx */
    PUSH32(esp, ebx); /* 0x1101C23E: push ebx */
    RECOMP_CALL(sub_1103B33A); /* 0x1101C23F: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1101C244u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1101C231(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101C231u);

    goto L_1101C231;
L_1101C1E6:
    eax = MEM32(esi); /* 0x1101C1E6: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x1101C1E8: push ebx */
    PUSH32(esp, edi); /* 0x1101C1E9: push edi */
    ecx = MEM32(eax + 0x4); /* 0x1101C1EA: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101C1ED: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1101C1EF: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x28); /* 0x1101C1F4: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_11010E6E); /* 0x1101C1F7: call 0x11010e6e */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1101C1FC: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101C1FE: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1101C203: ret 8 */
L_1101C231:
    esi = MEM32(ebp + (-0x18)); /* 0x1101C231: mov esi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101C234: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101C236: mov dword ptr [ebp - 4], ebx */
    edi = ebx; /* 0x1101C239: mov edi, ebx */
    RECOMP_BACKEDGE();
    goto L_1101C1E6; /* 0x1101C23B: jmp 0x1101c1e6 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1101C245(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101C245u);
    RECOMP_EH_ENTER();

L_1101C245:
    PUSH32(esp, 0x1Cu); /* 0x1101C245: push 0x1c */
    eax = 0x1103E07Eu; /* 0x1101C247: mov eax, 0x1103e07e */
    RECOMP_CALL(sub_1103B3DB); /* 0x1101C24C: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1101C251: mov esi, ecx */
    MEM32(ebp + (-0x18)) = esi; /* 0x1101C253: mov dword ptr [ebp - 0x18], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101C256: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x28); /* 0x1101C258: lea ecx, [ebp - 0x28] */
    edi = ebx; /* 0x1101C25B: mov edi, ebx */
    MEM8(ebp + (-0x11)) = (uint8_t)(LO8(ebx)); /* 0x1101C25D: mov byte ptr [ebp - 0x11], bl */
    PUSH32(esp, esi); /* 0x1101C260: push esi */
    MEM32(ebp + (-0x1C)) = edi; /* 0x1101C261: mov dword ptr [ebp - 0x1c], edi */
    RECOMP_CALL(sub_11010E19); /* 0x1101C264: call 0x11010e19 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101C269: mov dword ptr [ebp - 4], ebx */
    /* cmp MEM8(ebp + (-0x24)), LO8(ebx) */ /* 0x1101C26C: cmp byte ptr [ebp - 0x24], bl */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x24))) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101C35B; /* 0x1101C26F: je 0x1101c35b */
L_1101C275:
    eax = MEM32(ebp + 0x8); /* 0x1101C275: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x1101C278: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101C35B; /* 0x1101C27A: je 0x1101c35b */
L_1101C280:
    ecx = 0xFFFFu; /* 0x1101C280: mov ecx, 0xffff */
    edi = ecx; /* 0x1101C285: mov edi, ecx */
L_1101C287:
    /* cmp LO16(ecx), LO16(edi) */ /* 0x1101C287: cmp cx, di */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1101C28A: mov byte ptr [ebp - 4], 1 */
    ecx = eax; /* 0x1101C28E: mov ecx, eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101C299; /* 0x1101C290: jne 0x1101c299 */
L_1101C292:
    RECOMP_CALL(sub_11010398); /* 0x1101C292: call 0x11010398 */
    RECOMP_FLAGS_IN();
    goto L_1101C29E; /* 0x1101C297: jmp 0x1101c29e */
L_1101C299:
    RECOMP_CALL(sub_110103BB); /* 0x1101C299: call 0x110103bb */
    RECOMP_FLAGS_IN();
L_1101C29E:
    eax = (uint32_t)LO16(eax); /* 0x1101C29E: movzx eax, ax */
    edi = eax; /* 0x1101C2A1: mov edi, eax */
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101C2A3: mov dword ptr [ebp - 4], ebx */
    eax = 0xFFFFu; /* 0x1101C2A6: mov eax, 0xffff */
    MEM32(ebp + (-0x20)) = edi; /* 0x1101C2AB: mov dword ptr [ebp - 0x20], edi */
    /* cmp LO16(eax), LO16(edi) */ /* 0x1101C2AE: cmp ax, di */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101C358; /* 0x1101C2B1: je 0x1101c358 */
L_1101C2B7:
    eax = MEM32(esi); /* 0x1101C2B7: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x1101C2B9: push edi */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x1101C2BA: mov byte ptr [ebp - 4], 3 */
    eax = MEM32(eax + 0x4); /* 0x1101C2BE: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1101C2C1: mov ecx, dword ptr [eax + esi + 0x38] */
    RECOMP_CALL(sub_1102B3DC); /* 0x1101C2C5: call 0x1102b3dc */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO16(eax); /* 0x1101C2CA: movzx eax, ax */
    ecx = 0xFFFFu; /* 0x1101C2CD: mov ecx, 0xffff */
    /* cmp LO16(ecx), LO16(eax) */ /* 0x1101C2D2: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101C31D; /* 0x1101C2D5: jne 0x1101c31d */
L_1101C2D7:
    edi = MEM32(ebp + (-0x1C)); /* 0x1101C2D7: mov edi, dword ptr [ebp - 0x1c] */
    PUSH32(esp, 4); /* 0x1101C2DA: push 4 */
    ecx = POP32_VAL(esp); /* 0x1101C2DC: pop ecx */
    _flag_a = (uint32_t)((edi | ecx)); _flag_b = (uint32_t)((edi | ecx));
    edi = edi | ecx; /* 0x1101C2DD: or edi, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(ebx)); /* 0x1101C2DF: mov byte ptr [ebp - 4], bl */
    goto L_1101C35E; /* 0x1101C2E2: jmp 0x1101c35e */
L_1101C310:
    esi = MEM32(ebp + (-0x18)); /* 0x1101C310: mov esi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101C313: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(ebp + (-0x20)); /* 0x1101C315: mov edi, dword ptr [ebp - 0x20] */
    ecx = 0xFFFFu; /* 0x1101C318: mov ecx, 0xffff */
L_1101C31D:
    eax = MEM32(ebp + 0x8); /* 0x1101C31D: mov eax, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101C320: mov dword ptr [ebp - 4], ebx */
    MEM8(ebp + (-0x11)) = (uint8_t)(1); /* 0x1101C323: mov byte ptr [ebp - 0x11], 1 */
    RECOMP_BACKEDGE();
    goto L_1101C287; /* 0x1101C327: jmp 0x1101c287 */
L_1101C358:
    edi = MEM32(ebp + (-0x1C)); /* 0x1101C358: mov edi, dword ptr [ebp - 0x1c] */
L_1101C35B:
    PUSH32(esp, 4); /* 0x1101C35B: push 4 */
    ecx = POP32_VAL(esp); /* 0x1101C35D: pop ecx */
L_1101C35E:
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x1101C35E: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(esi); /* 0x1101C362: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x1101C364: mov eax, dword ptr [eax + 4] */
    MEM32(eax + esi + 0x20) = ebx; /* 0x1101C367: mov dword ptr [eax + esi + 0x20], ebx */
    MEM32(eax + esi + 0x24) = ebx; /* 0x1101C36B: mov dword ptr [eax + esi + 0x24], ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101C37C; /* 0x1101C36F: je 0x1101c37c */
L_1101C371:
    /* cmp MEM8(ebp + (-0x11)), 0 */ /* 0x1101C371: cmp byte ptr [ebp - 0x11], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x11))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ecx = edi; /* 0x1101C375: mov ecx, edi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101C37C; /* 0x1101C377: jne 0x1101c37c */
L_1101C379:
    _flag_a = (uint32_t)((ecx | 2)); _flag_b = (uint32_t)((ecx | 2));
    ecx = ecx | 2; /* 0x1101C379: or ecx, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1101C37C:
    eax = MEM32(esi); /* 0x1101C37C: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x1101C37E: push ebx */
    PUSH32(esp, ecx); /* 0x1101C37F: push ecx */
    ecx = MEM32(eax + 0x4); /* 0x1101C380: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101C383: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1101C385: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x28); /* 0x1101C38A: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_11010E6E); /* 0x1101C38D: call 0x11010e6e */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1101C392: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101C394: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x1101C399: ret 4 */
  _ljump:
    switch (_itail_tgt) {
      case 0x1101C310u: goto L_1101C310;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_1101C2E4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101C2E4u);

L_1101C2E4:
    ecx = MEM32(ebp + (-0x18)); /* 0x1101C2E4: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101C2E7: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x1101C2E9: push 4 */
    eax = MEM32(ecx); /* 0x1101C2EB: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x1101C2ED: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1101C2F0: add edx, ecx */
    _flag_k = FK_ADD;
    ecx = POP32_VAL(esp); /* 0x1101C2F2: pop ecx */
    eax = MEM32(edx + 0xC); /* 0x1101C2F3: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x1101C2F6: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), ebx */ /* 0x1101C2F8: cmp dword ptr [edx + 0x38], ebx */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101C2FF; /* 0x1101C2FB: jne 0x1101c2ff */
L_1101C2FD:
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x1101C2FD: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1101C2FF:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x1101C2FF: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x1101C302: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x1101C305: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1101C32C; /* 0x1101C308: jne 0x1101c32c */
L_1101C30A:
    eax = 0x1101C310u; /* 0x1101C30A: mov eax, 0x1101c310 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101C30F: ret  */
L_1101C32C:
    PUSH32(esp, ebx); /* 0x1101C32C: push ebx */
    PUSH32(esp, ebx); /* 0x1101C32D: push ebx */
    RECOMP_CALL(sub_1103B33A); /* 0x1101C32E: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x18)); /* 0x1101C333: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101C336: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x1101C338: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x1101C33A: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1101C33D: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x1101C33F: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 2)); _flag_b = (uint32_t)((eax | 2));
    eax = eax | 2; /* 0x1101C342: or eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), ebx */ /* 0x1101C345: cmp dword ptr [edx + 0x38], ebx */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101C34D; /* 0x1101C348: jne 0x1101c34d */
L_1101C34A:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101C34A: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1101C34D:
    PUSH32(esp, ebx); /* 0x1101C34D: push ebx */
    PUSH32(esp, eax); /* 0x1101C34E: push eax */
    ecx = edx; /* 0x1101C34F: mov ecx, edx */
    RECOMP_CALL(sub_1100F771); /* 0x1101C351: call 0x1100f771 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1101C32C; /* 0x1101C356: jmp 0x1101c32c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1101C310(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101C310u);

    goto L_1101C310;
L_1101C287:
    /* cmp LO16(ecx), LO16(edi) */ /* 0x1101C287: cmp cx, di */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1101C28A: mov byte ptr [ebp - 4], 1 */
    ecx = eax; /* 0x1101C28E: mov ecx, eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101C299; /* 0x1101C290: jne 0x1101c299 */
L_1101C292:
    RECOMP_CALL(sub_11010398); /* 0x1101C292: call 0x11010398 */
    RECOMP_FLAGS_IN();
    goto L_1101C29E; /* 0x1101C297: jmp 0x1101c29e */
L_1101C299:
    RECOMP_CALL(sub_110103BB); /* 0x1101C299: call 0x110103bb */
    RECOMP_FLAGS_IN();
L_1101C29E:
    eax = (uint32_t)LO16(eax); /* 0x1101C29E: movzx eax, ax */
    edi = eax; /* 0x1101C2A1: mov edi, eax */
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101C2A3: mov dword ptr [ebp - 4], ebx */
    eax = 0xFFFFu; /* 0x1101C2A6: mov eax, 0xffff */
    MEM32(ebp + (-0x20)) = edi; /* 0x1101C2AB: mov dword ptr [ebp - 0x20], edi */
    /* cmp LO16(eax), LO16(edi) */ /* 0x1101C2AE: cmp ax, di */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101C358; /* 0x1101C2B1: je 0x1101c358 */
L_1101C2B7:
    eax = MEM32(esi); /* 0x1101C2B7: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x1101C2B9: push edi */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x1101C2BA: mov byte ptr [ebp - 4], 3 */
    eax = MEM32(eax + 0x4); /* 0x1101C2BE: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1101C2C1: mov ecx, dword ptr [eax + esi + 0x38] */
    RECOMP_CALL(sub_1102B3DC); /* 0x1101C2C5: call 0x1102b3dc */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO16(eax); /* 0x1101C2CA: movzx eax, ax */
    ecx = 0xFFFFu; /* 0x1101C2CD: mov ecx, 0xffff */
    /* cmp LO16(ecx), LO16(eax) */ /* 0x1101C2D2: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101C31D; /* 0x1101C2D5: jne 0x1101c31d */
L_1101C2D7:
    edi = MEM32(ebp + (-0x1C)); /* 0x1101C2D7: mov edi, dword ptr [ebp - 0x1c] */
    PUSH32(esp, 4); /* 0x1101C2DA: push 4 */
    ecx = POP32_VAL(esp); /* 0x1101C2DC: pop ecx */
    _flag_a = (uint32_t)((edi | ecx)); _flag_b = (uint32_t)((edi | ecx));
    edi = edi | ecx; /* 0x1101C2DD: or edi, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(ebx)); /* 0x1101C2DF: mov byte ptr [ebp - 4], bl */
    goto L_1101C35E; /* 0x1101C2E2: jmp 0x1101c35e */
L_1101C310:
    esi = MEM32(ebp + (-0x18)); /* 0x1101C310: mov esi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101C313: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(ebp + (-0x20)); /* 0x1101C315: mov edi, dword ptr [ebp - 0x20] */
    ecx = 0xFFFFu; /* 0x1101C318: mov ecx, 0xffff */
L_1101C31D:
    eax = MEM32(ebp + 0x8); /* 0x1101C31D: mov eax, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101C320: mov dword ptr [ebp - 4], ebx */
    MEM8(ebp + (-0x11)) = (uint8_t)(1); /* 0x1101C323: mov byte ptr [ebp - 0x11], 1 */
    RECOMP_BACKEDGE();
    goto L_1101C287; /* 0x1101C327: jmp 0x1101c287 */
L_1101C358:
    edi = MEM32(ebp + (-0x1C)); /* 0x1101C358: mov edi, dword ptr [ebp - 0x1c] */
    PUSH32(esp, 4); /* 0x1101C35B: push 4 */
    ecx = POP32_VAL(esp); /* 0x1101C35D: pop ecx */
L_1101C35E:
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x1101C35E: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(esi); /* 0x1101C362: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x1101C364: mov eax, dword ptr [eax + 4] */
    MEM32(eax + esi + 0x20) = ebx; /* 0x1101C367: mov dword ptr [eax + esi + 0x20], ebx */
    MEM32(eax + esi + 0x24) = ebx; /* 0x1101C36B: mov dword ptr [eax + esi + 0x24], ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101C37C; /* 0x1101C36F: je 0x1101c37c */
L_1101C371:
    /* cmp MEM8(ebp + (-0x11)), 0 */ /* 0x1101C371: cmp byte ptr [ebp - 0x11], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x11))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ecx = edi; /* 0x1101C375: mov ecx, edi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101C37C; /* 0x1101C377: jne 0x1101c37c */
L_1101C379:
    _flag_a = (uint32_t)((ecx | 2)); _flag_b = (uint32_t)((ecx | 2));
    ecx = ecx | 2; /* 0x1101C379: or ecx, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1101C37C:
    eax = MEM32(esi); /* 0x1101C37C: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x1101C37E: push ebx */
    PUSH32(esp, ecx); /* 0x1101C37F: push ecx */
    ecx = MEM32(eax + 0x4); /* 0x1101C380: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101C383: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1101C385: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x28); /* 0x1101C38A: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_11010E6E); /* 0x1101C38D: call 0x11010e6e */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1101C392: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101C394: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1101C399: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1101C333(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101C333u);

    goto L_1101C333;
L_1101C32C:
    PUSH32(esp, ebx); /* 0x1101C32C: push ebx */
    PUSH32(esp, ebx); /* 0x1101C32D: push ebx */
    RECOMP_CALL(sub_1103B33A); /* 0x1101C32E: call 0x1103b33a */
    RECOMP_FLAGS_IN();
L_1101C333:
    ecx = MEM32(ebp + (-0x18)); /* 0x1101C333: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101C336: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x1101C338: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x1101C33A: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1101C33D: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x1101C33F: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 2)); _flag_b = (uint32_t)((eax | 2));
    eax = eax | 2; /* 0x1101C342: or eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), ebx */ /* 0x1101C345: cmp dword ptr [edx + 0x38], ebx */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101C34D; /* 0x1101C348: jne 0x1101c34d */
L_1101C34A:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101C34A: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1101C34D:
    PUSH32(esp, ebx); /* 0x1101C34D: push ebx */
    PUSH32(esp, eax); /* 0x1101C34E: push eax */
    ecx = edx; /* 0x1101C34F: mov ecx, edx */
    RECOMP_CALL(sub_1100F771); /* 0x1101C351: call 0x1100f771 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1101C32C; /* 0x1101C356: jmp 0x1101c32c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1101C39C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101C39Cu);
    RECOMP_EH_ENTER();

L_1101C39C:
    PUSH32(esp, 0x24u); /* 0x1101C39C: push 0x24 */
    eax = 0x1103E0A9u; /* 0x1101C39E: mov eax, 0x1103e0a9 */
    RECOMP_CALL(sub_1103B3DB); /* 0x1101C3A3: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1101C3A8: mov esi, ecx */
    MEM32(ebp + (-0x18)) = esi; /* 0x1101C3AA: mov dword ptr [ebp - 0x18], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101C3AD: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x28); /* 0x1101C3AF: lea ecx, [ebp - 0x28] */
    PUSH32(esp, esi); /* 0x1101C3B2: push esi */
    edi = ebx; /* 0x1101C3B3: mov edi, ebx */
    RECOMP_CALL(sub_11010E19); /* 0x1101C3B5: call 0x11010e19 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101C3BA: mov dword ptr [ebp - 4], ebx */
    /* cmp MEM8(ebp + (-0x24)), LO8(ebx) */ /* 0x1101C3BD: cmp byte ptr [ebp - 0x24], bl */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x24))) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101C41F; /* 0x1101C3C0: je 0x1101c41f */
L_1101C3C2:
    eax = ebp + (-0x1C); /* 0x1101C3C2: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1101C3C5: push eax */
    eax = MEM32(esi); /* 0x1101C3C6: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x1101C3C8: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101C3CB: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1100F94A); /* 0x1101C3CD: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1101C3D2: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1101C3D3: mov byte ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_11015AD7); /* 0x1101C3D7: call 0x11015ad7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101C3DC: pop ecx */
    ecx = ebp + (-0x1C); /* 0x1101C3DD: lea ecx, [ebp - 0x1c] */
    MEM32(ebp + (-0x14)) = eax; /* 0x1101C3E0: mov dword ptr [ebp - 0x14], eax */
    RECOMP_CALL(sub_1100E431); /* 0x1101C3E3: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi); /* 0x1101C3E8: mov ecx, dword ptr [esi] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1101C3EA: push dword ptr [ebp + 8] */
    edx = MEM32(ebp + (-0x14)); /* 0x1101C3ED: mov edx, dword ptr [ebp - 0x14] */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x1101C3F0: mov byte ptr [ebp - 4], 2 */
    ecx = MEM32(ecx + 0x4); /* 0x1101C3F4: mov ecx, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101C3F7: add ecx, esi */
    _flag_k = FK_ADD;
    edx = MEM32(edx); /* 0x1101C3F9: mov edx, dword ptr [edx] */
    eax = (uint32_t)MEM16(ecx + 0x40); /* 0x1101C3FB: movzx eax, word ptr [ecx + 0x40] */
    PUSH32(esp, eax); /* 0x1101C3FF: push eax */
    PUSH32(esp, ecx); /* 0x1101C400: push ecx */
    MEM8(ebp + (-0x30)) = (uint8_t)(LO8(ebx)); /* 0x1101C401: mov byte ptr [ebp - 0x30], bl */
    eax = ebp + (-0x30); /* 0x1101C404: lea eax, [ebp - 0x30] */
    PUSH32(esp, MEM32(ecx + 0x38)); /* 0x1101C407: push dword ptr [ecx + 0x38] */
    ecx = MEM32(ebp + (-0x14)); /* 0x1101C40A: mov ecx, dword ptr [ebp - 0x14] */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x1101C40D: push dword ptr [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x1101C410: push eax */
    RECOMP_ICALL(MEM32(edx + 0xC)); /* 0x1101C411: call dword ptr [edx + 0xc] */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(ebp + (-0x30)), LO8(ebx) */ /* 0x1101C414: cmp byte ptr [ebp - 0x30], bl */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x30))) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101C41C; /* 0x1101C417: je 0x1101c41c */
L_1101C419:
    PUSH32(esp, 4); /* 0x1101C419: push 4 */
    edi = POP32_VAL(esp); /* 0x1101C41B: pop edi */
L_1101C41C:
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101C41C: mov dword ptr [ebp - 4], ebx */
L_1101C41F:
    eax = MEM32(esi); /* 0x1101C41F: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x1101C421: push ebx */
    PUSH32(esp, edi); /* 0x1101C422: push edi */
    ecx = MEM32(eax + 0x4); /* 0x1101C423: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101C426: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1101C428: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x28); /* 0x1101C42D: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_11010E6E); /* 0x1101C430: call 0x11010e6e */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1101C435: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101C437: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x1101C43C: ret 4 */
L_1101C46A:
    esi = MEM32(ebp + (-0x18)); /* 0x1101C46A: mov esi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101C46D: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101C46F: mov dword ptr [ebp - 4], ebx */
    edi = ebx; /* 0x1101C472: mov edi, ebx */
    RECOMP_BACKEDGE();
    goto L_1101C41F; /* 0x1101C474: jmp 0x1101c41f */
    { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x1101C46Au: goto L_1101C46A;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_1101C43F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101C43Fu);

L_1101C43F:
    ecx = MEM32(ebp + (-0x18)); /* 0x1101C43F: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101C442: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x1101C444: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x1101C446: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1101C449: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x1101C44B: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101C44E: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), ebx */ /* 0x1101C451: cmp dword ptr [edx + 0x38], ebx */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101C459; /* 0x1101C454: jne 0x1101c459 */
L_1101C456:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101C456: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1101C459:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x1101C459: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x1101C45C: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x1101C45F: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1101C476; /* 0x1101C462: jne 0x1101c476 */
L_1101C464:
    eax = 0x1101C46Au; /* 0x1101C464: mov eax, 0x1101c46a */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101C469: ret  */
L_1101C476:
    PUSH32(esp, ebx); /* 0x1101C476: push ebx */
    PUSH32(esp, ebx); /* 0x1101C477: push ebx */
    RECOMP_CALL(sub_1103B33A); /* 0x1101C478: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1101C47Du, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1101C46A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101C46Au);

    goto L_1101C46A;
L_1101C41F:
    eax = MEM32(esi); /* 0x1101C41F: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x1101C421: push ebx */
    PUSH32(esp, edi); /* 0x1101C422: push edi */
    ecx = MEM32(eax + 0x4); /* 0x1101C423: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101C426: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1101C428: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x28); /* 0x1101C42D: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_11010E6E); /* 0x1101C430: call 0x11010e6e */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1101C435: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101C437: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1101C43C: ret 4 */
L_1101C46A:
    esi = MEM32(ebp + (-0x18)); /* 0x1101C46A: mov esi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101C46D: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101C46F: mov dword ptr [ebp - 4], ebx */
    edi = ebx; /* 0x1101C472: mov edi, ebx */
    RECOMP_BACKEDGE();
    goto L_1101C41F; /* 0x1101C474: jmp 0x1101c41f */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1101C47E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101C47Eu);
    RECOMP_EH_ENTER();

L_1101C47E:
    PUSH32(esp, 0x24u); /* 0x1101C47E: push 0x24 */
    eax = 0x1103E0D4u; /* 0x1101C480: mov eax, 0x1103e0d4 */
    RECOMP_CALL(sub_1103B3DB); /* 0x1101C485: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1101C48A: mov esi, ecx */
    MEM32(ebp + (-0x18)) = esi; /* 0x1101C48C: mov dword ptr [ebp - 0x18], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101C48F: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x28); /* 0x1101C491: lea ecx, [ebp - 0x28] */
    PUSH32(esp, esi); /* 0x1101C494: push esi */
    edi = ebx; /* 0x1101C495: mov edi, ebx */
    RECOMP_CALL(sub_11010E19); /* 0x1101C497: call 0x11010e19 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101C49C: mov dword ptr [ebp - 4], ebx */
    /* cmp MEM8(ebp + (-0x24)), LO8(ebx) */ /* 0x1101C49F: cmp byte ptr [ebp - 0x24], bl */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x24))) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101C504; /* 0x1101C4A2: je 0x1101c504 */
L_1101C4A4:
    eax = ebp + (-0x1C); /* 0x1101C4A4: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1101C4A7: push eax */
    eax = MEM32(esi); /* 0x1101C4A8: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x1101C4AA: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101C4AD: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1100F94A); /* 0x1101C4AF: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1101C4B4: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1101C4B5: mov byte ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_11015AD7); /* 0x1101C4B9: call 0x11015ad7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101C4BE: pop ecx */
    ecx = ebp + (-0x1C); /* 0x1101C4BF: lea ecx, [ebp - 0x1c] */
    MEM32(ebp + (-0x14)) = eax; /* 0x1101C4C2: mov dword ptr [ebp - 0x14], eax */
    RECOMP_CALL(sub_1100E431); /* 0x1101C4C5: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi); /* 0x1101C4CA: mov ecx, dword ptr [esi] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1101C4CC: push dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + (-0x14)); /* 0x1101C4CF: mov edx, dword ptr [ebp - 0x14] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1101C4D2: push dword ptr [ebp + 8] */
    ecx = MEM32(ecx + 0x4); /* 0x1101C4D5: mov ecx, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101C4D8: add ecx, esi */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x30)) = (uint8_t)(LO8(ebx)); /* 0x1101C4DA: mov byte ptr [ebp - 0x30], bl */
    edx = MEM32(edx); /* 0x1101C4DD: mov edx, dword ptr [edx] */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x1101C4DF: mov byte ptr [ebp - 4], 2 */
    eax = (uint32_t)MEM16(ecx + 0x40); /* 0x1101C4E3: movzx eax, word ptr [ecx + 0x40] */
    PUSH32(esp, eax); /* 0x1101C4E7: push eax */
    PUSH32(esp, ecx); /* 0x1101C4E8: push ecx */
    PUSH32(esp, MEM32(ecx + 0x38)); /* 0x1101C4E9: push dword ptr [ecx + 0x38] */
    ecx = MEM32(ebp + (-0x14)); /* 0x1101C4EC: mov ecx, dword ptr [ebp - 0x14] */
    eax = ebp + 0x8; /* 0x1101C4EF: lea eax, [ebp + 8] */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x1101C4F2: push dword ptr [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x1101C4F5: push eax */
    RECOMP_ICALL(MEM32(edx + 0x1C)); /* 0x1101C4F6: call dword ptr [edx + 0x1c] */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(ebp + 0x8), LO8(ebx) */ /* 0x1101C4F9: cmp byte ptr [ebp + 8], bl */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101C501; /* 0x1101C4FC: je 0x1101c501 */
L_1101C4FE:
    PUSH32(esp, 4); /* 0x1101C4FE: push 4 */
    edi = POP32_VAL(esp); /* 0x1101C500: pop edi */
L_1101C501:
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101C501: mov dword ptr [ebp - 4], ebx */
L_1101C504:
    eax = MEM32(esi); /* 0x1101C504: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x1101C506: push ebx */
    PUSH32(esp, edi); /* 0x1101C507: push edi */
    ecx = MEM32(eax + 0x4); /* 0x1101C508: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101C50B: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1101C50D: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x28); /* 0x1101C512: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_11010E6E); /* 0x1101C515: call 0x11010e6e */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1101C51A: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101C51C: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x1101C521: ret 8 */
L_1101C54F:
    esi = MEM32(ebp + (-0x18)); /* 0x1101C54F: mov esi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101C552: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101C554: mov dword ptr [ebp - 4], ebx */
    edi = ebx; /* 0x1101C557: mov edi, ebx */
    RECOMP_BACKEDGE();
    goto L_1101C504; /* 0x1101C559: jmp 0x1101c504 */
    { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x1101C54Fu: goto L_1101C54F;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_1101C524(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101C524u);

L_1101C524:
    ecx = MEM32(ebp + (-0x18)); /* 0x1101C524: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101C527: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x1101C529: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x1101C52B: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1101C52E: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x1101C530: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101C533: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), ebx */ /* 0x1101C536: cmp dword ptr [edx + 0x38], ebx */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101C53E; /* 0x1101C539: jne 0x1101c53e */
L_1101C53B:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101C53B: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1101C53E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x1101C53E: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x1101C541: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x1101C544: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1101C55B; /* 0x1101C547: jne 0x1101c55b */
L_1101C549:
    eax = 0x1101C54Fu; /* 0x1101C549: mov eax, 0x1101c54f */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101C54E: ret  */
L_1101C55B:
    PUSH32(esp, ebx); /* 0x1101C55B: push ebx */
    PUSH32(esp, ebx); /* 0x1101C55C: push ebx */
    RECOMP_CALL(sub_1103B33A); /* 0x1101C55D: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1101C562u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1101C54F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101C54Fu);

    goto L_1101C54F;
L_1101C504:
    eax = MEM32(esi); /* 0x1101C504: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x1101C506: push ebx */
    PUSH32(esp, edi); /* 0x1101C507: push edi */
    ecx = MEM32(eax + 0x4); /* 0x1101C508: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101C50B: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1101C50D: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x28); /* 0x1101C512: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_11010E6E); /* 0x1101C515: call 0x11010e6e */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1101C51A: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101C51C: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1101C521: ret 8 */
L_1101C54F:
    esi = MEM32(ebp + (-0x18)); /* 0x1101C54F: mov esi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101C552: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101C554: mov dword ptr [ebp - 4], ebx */
    edi = ebx; /* 0x1101C557: mov edi, ebx */
    RECOMP_BACKEDGE();
    goto L_1101C504; /* 0x1101C559: jmp 0x1101c504 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1101C563(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101C563u);
    RECOMP_EH_ENTER();

L_1101C563:
    PUSH32(esp, 0x24u); /* 0x1101C563: push 0x24 */
    eax = 0x1103E0FFu; /* 0x1101C565: mov eax, 0x1103e0ff */
    RECOMP_CALL(sub_1103B3DB); /* 0x1101C56A: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1101C56F: mov esi, ecx */
    MEM32(ebp + (-0x18)) = esi; /* 0x1101C571: mov dword ptr [ebp - 0x18], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101C574: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x28); /* 0x1101C576: lea ecx, [ebp - 0x28] */
    PUSH32(esp, esi); /* 0x1101C579: push esi */
    edi = ebx; /* 0x1101C57A: mov edi, ebx */
    RECOMP_CALL(sub_11010E19); /* 0x1101C57C: call 0x11010e19 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101C581: mov dword ptr [ebp - 4], ebx */
    /* cmp MEM8(ebp + (-0x24)), LO8(ebx) */ /* 0x1101C584: cmp byte ptr [ebp - 0x24], bl */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x24))) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101C5E9; /* 0x1101C587: je 0x1101c5e9 */
L_1101C589:
    eax = ebp + (-0x1C); /* 0x1101C589: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1101C58C: push eax */
    eax = MEM32(esi); /* 0x1101C58D: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x1101C58F: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101C592: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1100F94A); /* 0x1101C594: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1101C599: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1101C59A: mov byte ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_11015AD7); /* 0x1101C59E: call 0x11015ad7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101C5A3: pop ecx */
    ecx = ebp + (-0x1C); /* 0x1101C5A4: lea ecx, [ebp - 0x1c] */
    MEM32(ebp + (-0x14)) = eax; /* 0x1101C5A7: mov dword ptr [ebp - 0x14], eax */
    RECOMP_CALL(sub_1100E431); /* 0x1101C5AA: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi); /* 0x1101C5AF: mov ecx, dword ptr [esi] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1101C5B1: push dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + (-0x14)); /* 0x1101C5B4: mov edx, dword ptr [ebp - 0x14] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1101C5B7: push dword ptr [ebp + 8] */
    ecx = MEM32(ecx + 0x4); /* 0x1101C5BA: mov ecx, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101C5BD: add ecx, esi */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x30)) = (uint8_t)(LO8(ebx)); /* 0x1101C5BF: mov byte ptr [ebp - 0x30], bl */
    edx = MEM32(edx); /* 0x1101C5C2: mov edx, dword ptr [edx] */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x1101C5C4: mov byte ptr [ebp - 4], 2 */
    eax = (uint32_t)MEM16(ecx + 0x40); /* 0x1101C5C8: movzx eax, word ptr [ecx + 0x40] */
    PUSH32(esp, eax); /* 0x1101C5CC: push eax */
    PUSH32(esp, ecx); /* 0x1101C5CD: push ecx */
    PUSH32(esp, MEM32(ecx + 0x38)); /* 0x1101C5CE: push dword ptr [ecx + 0x38] */
    ecx = MEM32(ebp + (-0x14)); /* 0x1101C5D1: mov ecx, dword ptr [ebp - 0x14] */
    eax = ebp + 0x8; /* 0x1101C5D4: lea eax, [ebp + 8] */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x1101C5D7: push dword ptr [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x1101C5DA: push eax */
    RECOMP_ICALL(MEM32(edx + 0x18)); /* 0x1101C5DB: call dword ptr [edx + 0x18] */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(ebp + 0x8), LO8(ebx) */ /* 0x1101C5DE: cmp byte ptr [ebp + 8], bl */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101C5E6; /* 0x1101C5E1: je 0x1101c5e6 */
L_1101C5E3:
    PUSH32(esp, 4); /* 0x1101C5E3: push 4 */
    edi = POP32_VAL(esp); /* 0x1101C5E5: pop edi */
L_1101C5E6:
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101C5E6: mov dword ptr [ebp - 4], ebx */
L_1101C5E9:
    eax = MEM32(esi); /* 0x1101C5E9: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x1101C5EB: push ebx */
    PUSH32(esp, edi); /* 0x1101C5EC: push edi */
    ecx = MEM32(eax + 0x4); /* 0x1101C5ED: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101C5F0: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1101C5F2: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x28); /* 0x1101C5F7: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_11010E6E); /* 0x1101C5FA: call 0x11010e6e */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1101C5FF: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101C601: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x1101C606: ret 8 */
L_1101C634:
    esi = MEM32(ebp + (-0x18)); /* 0x1101C634: mov esi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101C637: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101C639: mov dword ptr [ebp - 4], ebx */
    edi = ebx; /* 0x1101C63C: mov edi, ebx */
    RECOMP_BACKEDGE();
    goto L_1101C5E9; /* 0x1101C63E: jmp 0x1101c5e9 */
    { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x1101C634u: goto L_1101C634;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_1101C609(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101C609u);

L_1101C609:
    ecx = MEM32(ebp + (-0x18)); /* 0x1101C609: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101C60C: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x1101C60E: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x1101C610: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1101C613: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x1101C615: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101C618: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), ebx */ /* 0x1101C61B: cmp dword ptr [edx + 0x38], ebx */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101C623; /* 0x1101C61E: jne 0x1101c623 */
L_1101C620:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101C620: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1101C623:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x1101C623: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x1101C626: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x1101C629: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1101C640; /* 0x1101C62C: jne 0x1101c640 */
L_1101C62E:
    eax = 0x1101C634u; /* 0x1101C62E: mov eax, 0x1101c634 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101C633: ret  */
L_1101C640:
    PUSH32(esp, ebx); /* 0x1101C640: push ebx */
    PUSH32(esp, ebx); /* 0x1101C641: push ebx */
    RECOMP_CALL(sub_1103B33A); /* 0x1101C642: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1101C647u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}
