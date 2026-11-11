#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_110184C1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110184C1u);

L_110184C1:
    ecx = MEM32(ebp + (-0x14)); /* 0x110184C1: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x110184C4: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x110184C6: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x110184C8: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x110184CB: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x110184CD: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x110184D0: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), edi */ /* 0x110184D3: cmp dword ptr [edx + 0x38], edi */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_110184DB; /* 0x110184D6: jne 0x110184db */
L_110184D8:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x110184D8: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_110184DB:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x110184DB: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x110184DE: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x110184E1: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110184FA; /* 0x110184E4: jne 0x110184fa */
L_110184E6:
    eax = 0x110184ECu; /* 0x110184E6: mov eax, 0x110184ec */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110184EB: ret  */
L_110184FA:
    PUSH32(esp, edi); /* 0x110184FA: push edi */
    PUSH32(esp, edi); /* 0x110184FB: push edi */
    RECOMP_CALL(sub_1103B33A); /* 0x110184FC: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x11018501u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_110184EC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110184ECu);

    goto L_110184EC;
L_11018491:
    eax = MEM32(esi); /* 0x11018491: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x11018493: push edi */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x11018494: push dword ptr [ebp - 0x18] */
    ecx = MEM32(eax + 0x4); /* 0x11018497: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101849A: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1101849C: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x110184A1: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x110184A3: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x110184A7: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x110184AA: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x110184AE: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110184B7; /* 0x110184B0: je 0x110184b7 */
L_110184B2:
    eax = MEM32(ecx); /* 0x110184B2: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x110184B4: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_110184B7:
    eax = esi; /* 0x110184B7: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x110184B9: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x110184BE: ret 4 */
L_110184EC:
    esi = MEM32(ebp + (-0x14)); /* 0x110184EC: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x110184EF: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x110184F1: mov dword ptr [ebp - 4], 1 */
    RECOMP_BACKEDGE();
    goto L_11018491; /* 0x110184F8: jmp 0x11018491 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11018502(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11018502u);
    RECOMP_EH_ENTER();

L_11018502:
    PUSH32(esp, 0x28u); /* 0x11018502: push 0x28 */
    eax = 0x1103D5AAu; /* 0x11018504: mov eax, 0x1103d5aa */
    RECOMP_CALL(sub_1103B3DB); /* 0x11018509: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1101850E: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x11018510: mov dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11018513: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x24)) = esi; /* 0x11018515: mov dword ptr [ebp - 0x24], esi */
    MEM32(ebp + (-0x18)) = edi; /* 0x11018518: mov dword ptr [ebp - 0x18], edi */
    eax = MEM32(esi); /* 0x1101851B: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x1101851D: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11018520: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x11018524: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101852D; /* 0x11018526: je 0x1101852d */
L_11018528:
    eax = MEM32(ecx); /* 0x11018528: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1101852A: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_1101852D:
    PUSH32(esp, edi); /* 0x1101852D: push edi */
    ecx = esi; /* 0x1101852E: mov ecx, esi */
    MEM32(ebp + (-0x4)) = edi; /* 0x11018530: mov dword ptr [ebp - 4], edi */
    RECOMP_CALL(sub_11010675); /* 0x11018533: call 0x11010675 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x20)) = (uint8_t)(LO8(eax)); /* 0x11018538: mov byte ptr [ebp - 0x20], al */
    MEM32(ebp + (-0x4)) = 1; /* 0x1101853B: mov dword ptr [ebp - 4], 1 */
    /* test LO8(eax), LO8(eax) */ /* 0x11018542: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_110185A6; /* 0x11018544: je 0x110185a6 */
L_11018546:
    eax = ebp + (-0x1C); /* 0x11018546: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x11018549: push eax */
    eax = MEM32(esi); /* 0x1101854A: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x1101854C: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101854F: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1100F94A); /* 0x11018551: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x11018556: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x11018557: mov byte ptr [ebp - 4], 2 */
    RECOMP_CALL(sub_110157D5); /* 0x1101855B: call 0x110157d5 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11018560: pop ecx */
    ecx = ebp + (-0x1C); /* 0x11018561: lea ecx, [ebp - 0x1c] */
    ebx = eax; /* 0x11018564: mov ebx, eax */
    RECOMP_CALL(sub_1100E431); /* 0x11018566: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1101856B: push dword ptr [ebp + 8] */
    ecx = MEM32(esi); /* 0x1101856E: mov ecx, dword ptr [esi] */
    edx = ebp + (-0x18); /* 0x11018570: lea edx, [ebp - 0x18] */
    eax = MEM32(ebx); /* 0x11018573: mov eax, dword ptr [ebx] */
    PUSH32(esp, edx); /* 0x11018575: push edx */
    MEM8(ebp + (-0x28)) = (uint8_t)(1); /* 0x11018576: mov byte ptr [ebp - 0x28], 1 */
    ecx = MEM32(ecx + 0x4); /* 0x1101857A: mov ecx, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101857D: add ecx, esi */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x1101857F: mov byte ptr [ebp - 4], 3 */
    PUSH32(esp, ecx); /* 0x11018583: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x11018584: push dword ptr [ebp - 0x28] */
    /* cmp MEM32(ecx + 0x38), 0 */ /* 0x11018587: cmp dword ptr [ecx + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x1101858B: push edi */
    MEM8(ebp + (-0x30)) = (uint8_t)((CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1101858C: sete byte ptr [ebp - 0x30] */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x11018590: push dword ptr [ebp - 0x30] */
    PUSH32(esp, MEM32(ecx + 0x38)); /* 0x11018593: push dword ptr [ecx + 0x38] */
    ecx = ebp + (-0x34); /* 0x11018596: lea ecx, [ebp - 0x34] */
    PUSH32(esp, ecx); /* 0x11018599: push ecx */
    ecx = ebx; /* 0x1101859A: mov ecx, ebx */
    RECOMP_ICALL(MEM32(eax + 0x34)); /* 0x1101859C: call dword ptr [eax + 0x34] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 1; /* 0x1101859F: mov dword ptr [ebp - 4], 1 */
L_110185A6:
    eax = MEM32(esi); /* 0x110185A6: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x110185A8: push edi */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x110185A9: push dword ptr [ebp - 0x18] */
    ecx = MEM32(eax + 0x4); /* 0x110185AC: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x110185AF: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x110185B1: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x110185B6: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x110185B8: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x110185BC: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x110185BF: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x110185C3: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110185CC; /* 0x110185C5: je 0x110185cc */
L_110185C7:
    eax = MEM32(ecx); /* 0x110185C7: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x110185C9: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_110185CC:
    eax = esi; /* 0x110185CC: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x110185CE: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x110185D3: ret 4 */
L_11018601:
    esi = MEM32(ebp + (-0x14)); /* 0x11018601: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11018604: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x11018606: mov dword ptr [ebp - 4], 1 */
    RECOMP_BACKEDGE();
    goto L_110185A6; /* 0x1101860D: jmp 0x110185a6 */
    { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x11018601u: goto L_11018601;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_110185D6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110185D6u);

L_110185D6:
    ecx = MEM32(ebp + (-0x14)); /* 0x110185D6: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x110185D9: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x110185DB: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x110185DD: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x110185E0: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x110185E2: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x110185E5: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), edi */ /* 0x110185E8: cmp dword ptr [edx + 0x38], edi */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_110185F0; /* 0x110185EB: jne 0x110185f0 */
L_110185ED:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x110185ED: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_110185F0:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x110185F0: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x110185F3: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x110185F6: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1101860F; /* 0x110185F9: jne 0x1101860f */
L_110185FB:
    eax = 0x11018601u; /* 0x110185FB: mov eax, 0x11018601 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11018600: ret  */
L_1101860F:
    PUSH32(esp, edi); /* 0x1101860F: push edi */
    PUSH32(esp, edi); /* 0x11018610: push edi */
    RECOMP_CALL(sub_1103B33A); /* 0x11018611: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x11018616u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11018601(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11018601u);

    goto L_11018601;
L_110185A6:
    eax = MEM32(esi); /* 0x110185A6: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x110185A8: push edi */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x110185A9: push dword ptr [ebp - 0x18] */
    ecx = MEM32(eax + 0x4); /* 0x110185AC: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x110185AF: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x110185B1: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x110185B6: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x110185B8: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x110185BC: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x110185BF: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x110185C3: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110185CC; /* 0x110185C5: je 0x110185cc */
L_110185C7:
    eax = MEM32(ecx); /* 0x110185C7: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x110185C9: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_110185CC:
    eax = esi; /* 0x110185CC: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x110185CE: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x110185D3: ret 4 */
L_11018601:
    esi = MEM32(ebp + (-0x14)); /* 0x11018601: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11018604: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x11018606: mov dword ptr [ebp - 4], 1 */
    RECOMP_BACKEDGE();
    goto L_110185A6; /* 0x1101860D: jmp 0x110185a6 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11018617(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11018617u);
    RECOMP_EH_ENTER();

L_11018617:
    PUSH32(esp, 0x18u); /* 0x11018617: push 0x18 */
    eax = 0x1103D5D5u; /* 0x11018619: mov eax, 0x1103d5d5 */
    RECOMP_CALL(sub_1103B3DB); /* 0x1101861E: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x11018623: mov esi, ecx */
    MEM32(ebp + (-0x18)) = esi; /* 0x11018625: mov dword ptr [ebp - 0x18], esi */
    eax = MEM32(esi); /* 0x11018628: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1101862A: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = edi; /* 0x1101862C: mov dword ptr [ebp - 0x1c], edi */
    MEM8(ebp + (-0x11)) = (uint8_t)(0); /* 0x1101862F: mov byte ptr [ebp - 0x11], 0 */
    MEM32(ebp + (-0x24)) = esi; /* 0x11018633: mov dword ptr [ebp - 0x24], esi */
    eax = MEM32(eax + 0x4); /* 0x11018636: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11018639: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x1101863D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11018646; /* 0x1101863F: je 0x11018646 */
L_11018641:
    eax = MEM32(ecx); /* 0x11018641: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x11018643: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_11018646:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11018646: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x1101864A: mov ecx, esi */
    PUSH32(esp, 0); /* 0x1101864C: push 0 */
    RECOMP_CALL(sub_11010675); /* 0x1101864E: call 0x11010675 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x20)) = (uint8_t)(LO8(eax)); /* 0x11018653: mov byte ptr [ebp - 0x20], al */
    MEM32(ebp + (-0x4)) = 1; /* 0x11018656: mov dword ptr [ebp - 4], 1 */
    /* test LO8(eax), LO8(eax) */ /* 0x1101865D: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_110186C9; /* 0x1101865F: je 0x110186c9 */
L_11018661:
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x11018661: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110186C9; /* 0x11018665: je 0x110186c9 */
L_11018667:
    eax = MEM32(esi); /* 0x11018667: mov eax, dword ptr [esi] */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x11018669: mov byte ptr [ebp - 4], 2 */
    eax = MEM32(eax + 0x4); /* 0x1101866D: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11018670: mov ecx, dword ptr [eax + esi + 0x38] */
    RECOMP_CALL(sub_11010336); /* 0x11018674: call 0x11010336 */
    RECOMP_FLAGS_IN();
L_11018679:
    /* cmp eax, 0xFFFFFFFFu */ /* 0x11018679: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11018683; /* 0x1101867C: jne 0x11018683 */
L_1101867E:
    _flag_a = (uint32_t)((edi | 1)); _flag_b = (uint32_t)((edi | 1));
    edi = edi | 1; /* 0x1101867E: or edi, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_110186BC; /* 0x11018681: jmp 0x110186bc */
L_11018683:
    ecx = MEM32(ebp + 0x8); /* 0x11018683: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x11018686: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x11018687: mov byte ptr [ebp - 4], 3 */
    RECOMP_CALL(sub_1102B39E); /* 0x1101868B: call 0x1102b39e */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xFFFFFFFFu */ /* 0x11018690: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110186BC; /* 0x11018693: je 0x110186bc */
L_11018695:
    eax = MEM32(esi); /* 0x11018695: mov eax, dword ptr [esi] */
    MEM32(ebp + (-0x4)) = 2; /* 0x11018697: mov dword ptr [ebp - 4], 2 */
    MEM8(ebp + (-0x11)) = (uint8_t)(1); /* 0x1101869E: mov byte ptr [ebp - 0x11], 1 */
    eax = MEM32(eax + 0x4); /* 0x110186A2: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x110186A5: mov ecx, dword ptr [eax + esi + 0x38] */
    RECOMP_CALL(sub_11010355); /* 0x110186A9: call 0x11010355 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_11018679; /* 0x110186AE: jmp 0x11018679 */
L_110186B6:
    esi = MEM32(ebp + (-0x18)); /* 0x110186B6: mov esi, dword ptr [ebp - 0x18] */
    edi = MEM32(ebp + (-0x1C)); /* 0x110186B9: mov edi, dword ptr [ebp - 0x1c] */
L_110186BC:
    /* cmp MEM8(ebp + (-0x11)), 0 */ /* 0x110186BC: cmp byte ptr [ebp - 0x11], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x11))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(ebp + (-0x4)) = 1; /* 0x110186C0: mov dword ptr [ebp - 4], 1 */
    if (CMP_NE(_flag_a, _flag_b)) goto L_110186CC; /* 0x110186C7: jne 0x110186cc */
L_110186C9:
    _flag_a = (uint32_t)((edi | 2)); _flag_b = (uint32_t)((edi | 2));
    edi = edi | 2; /* 0x110186C9: or edi, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_110186CC:
    eax = MEM32(esi); /* 0x110186CC: mov eax, dword ptr [esi] */
    PUSH32(esp, 0); /* 0x110186CE: push 0 */
    PUSH32(esp, edi); /* 0x110186D0: push edi */
    ecx = MEM32(eax + 0x4); /* 0x110186D1: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x110186D4: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x110186D6: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x24)); /* 0x110186DB: mov ecx, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x110186DE: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x110186E2: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x4); /* 0x110186E4: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + ecx + 0x38); /* 0x110186E7: mov ecx, dword ptr [eax + ecx + 0x38] */
    /* test ecx, ecx */ /* 0x110186EB: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110186F4; /* 0x110186ED: je 0x110186f4 */
L_110186EF:
    eax = MEM32(ecx); /* 0x110186EF: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x110186F1: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_110186F4:
    eax = esi; /* 0x110186F4: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x110186F6: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x110186FB: ret 4 */
  _ljump:
    switch (_itail_tgt) {
      case 0x110186B6u: goto L_110186B6;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_110186B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110186B0u);

L_110186B0:
    eax = 0x110186B6u; /* 0x110186B0: mov eax, 0x110186b6 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110186B5: ret  */
    RECOMP_REGS_OUT();
}

void sub_110186B6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110186B6u);

L_110186B6:
    esi = MEM32(ebp + (-0x18)); /* 0x110186B6: mov esi, dword ptr [ebp - 0x18] */
    edi = MEM32(ebp + (-0x1C)); /* 0x110186B9: mov edi, dword ptr [ebp - 0x1c] */
    /* cmp MEM8(ebp + (-0x11)), 0 */ /* 0x110186BC: cmp byte ptr [ebp - 0x11], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x11))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(ebp + (-0x4)) = 1; /* 0x110186C0: mov dword ptr [ebp - 4], 1 */
    if (CMP_NE(_flag_a, _flag_b)) goto L_110186CC; /* 0x110186C7: jne 0x110186cc */
L_110186C9:
    _flag_a = (uint32_t)((edi | 2)); _flag_b = (uint32_t)((edi | 2));
    edi = edi | 2; /* 0x110186C9: or edi, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_110186CC:
    eax = MEM32(esi); /* 0x110186CC: mov eax, dword ptr [esi] */
    PUSH32(esp, 0); /* 0x110186CE: push 0 */
    PUSH32(esp, edi); /* 0x110186D0: push edi */
    ecx = MEM32(eax + 0x4); /* 0x110186D1: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x110186D4: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x110186D6: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x24)); /* 0x110186DB: mov ecx, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x110186DE: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x110186E2: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x4); /* 0x110186E4: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + ecx + 0x38); /* 0x110186E7: mov ecx, dword ptr [eax + ecx + 0x38] */
    /* test ecx, ecx */ /* 0x110186EB: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110186F4; /* 0x110186ED: je 0x110186f4 */
L_110186EF:
    eax = MEM32(ecx); /* 0x110186EF: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x110186F1: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_110186F4:
    eax = esi; /* 0x110186F4: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x110186F6: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x110186FB: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_110186FE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110186FEu);

L_110186FE:
    ecx = MEM32(ebp + (-0x18)); /* 0x110186FE: mov ecx, dword ptr [ebp - 0x18] */
    eax = MEM32(ecx); /* 0x11018701: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x11018703: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x11018706: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x11018708: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101870B: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), 0 */ /* 0x1101870E: cmp dword ptr [edx + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11018717; /* 0x11018712: jne 0x11018717 */
L_11018714:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11018714: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11018717:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x11018717: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x1101871A: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x1101871D: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11018728; /* 0x11018720: jne 0x11018728 */
L_11018722:
    eax = 0x110186B6u; /* 0x11018722: mov eax, 0x110186b6 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11018727: ret  */
L_11018728:
    PUSH32(esp, 0); /* 0x11018728: push 0 */
    PUSH32(esp, 0); /* 0x1101872A: push 0 */
    RECOMP_CALL(sub_1103B33A); /* 0x1101872C: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x11018731u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11018732(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11018732u);
    RECOMP_EH_ENTER();

L_11018732:
    PUSH32(esp, 0x2Cu); /* 0x11018732: push 0x2c */
    eax = 0x1103D608u; /* 0x11018734: mov eax, 0x1103d608 */
    RECOMP_CALL(sub_1103B3DB); /* 0x11018739: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1101873E: mov esi, ecx */
    MEM32(ebp + (-0x18)) = esi; /* 0x11018740: mov dword ptr [ebp - 0x18], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11018743: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x28)) = esi; /* 0x11018745: mov dword ptr [ebp - 0x28], esi */
    MEM32(ebp + (-0x14)) = edi; /* 0x11018748: mov dword ptr [ebp - 0x14], edi */
    eax = MEM32(esi); /* 0x1101874B: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x1101874D: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11018750: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x11018754: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101875D; /* 0x11018756: je 0x1101875d */
L_11018758:
    eax = MEM32(ecx); /* 0x11018758: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1101875A: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_1101875D:
    PUSH32(esp, edi); /* 0x1101875D: push edi */
    ecx = esi; /* 0x1101875E: mov ecx, esi */
    MEM32(ebp + (-0x4)) = edi; /* 0x11018760: mov dword ptr [ebp - 4], edi */
    RECOMP_CALL(sub_11010989); /* 0x11018763: call 0x11010989 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x24)) = (uint8_t)(LO8(eax)); /* 0x11018768: mov byte ptr [ebp - 0x24], al */
    MEM32(ebp + (-0x4)) = 1; /* 0x1101876B: mov dword ptr [ebp - 4], 1 */
    /* test LO8(eax), LO8(eax) */ /* 0x11018772: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101883F; /* 0x11018774: je 0x1101883f */
L_1101877A:
    eax = ebp + (-0x20); /* 0x1101877A: lea eax, [ebp - 0x20] */
    MEM32(ebp + (-0x1C)) = edi; /* 0x1101877D: mov dword ptr [ebp - 0x1c], edi */
    PUSH32(esp, eax); /* 0x11018780: push eax */
    eax = MEM32(esi); /* 0x11018781: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x11018783: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11018786: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1100F94A); /* 0x11018788: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1101878D: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x1101878E: mov byte ptr [ebp - 4], 2 */
    RECOMP_CALL(sub_1101586F); /* 0x11018792: call 0x1101586f */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11018797: pop ecx */
    ecx = ebp + (-0x20); /* 0x11018798: lea ecx, [ebp - 0x20] */
    ebx = eax; /* 0x1101879B: mov ebx, eax */
    RECOMP_CALL(sub_1100E431); /* 0x1101879D: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi); /* 0x110187A2: mov ecx, dword ptr [esi] */
    edx = ebp + (-0x1C); /* 0x110187A4: lea edx, [ebp - 0x1c] */
    eax = MEM32(ebx); /* 0x110187A7: mov eax, dword ptr [ebx] */
    PUSH32(esp, edx); /* 0x110187A9: push edx */
    edx = ebp + (-0x14); /* 0x110187AA: lea edx, [ebp - 0x14] */
    MEM8(ebp + (-0x2C)) = (uint8_t)(1); /* 0x110187AD: mov byte ptr [ebp - 0x2c], 1 */
    ecx = MEM32(ecx + 0x4); /* 0x110187B1: mov ecx, dword ptr [ecx + 4] */
    PUSH32(esp, edx); /* 0x110187B4: push edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x110187B5: add ecx, esi */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x110187B7: mov byte ptr [ebp - 4], 3 */
    PUSH32(esp, ecx); /* 0x110187BB: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x110187BC: push dword ptr [ebp - 0x2c] */
    /* cmp MEM32(ecx + 0x38), 0 */ /* 0x110187BF: cmp dword ptr [ecx + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x110187C3: push edi */
    MEM8(ebp + (-0x34)) = (uint8_t)((CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x110187C4: sete byte ptr [ebp - 0x34] */
    PUSH32(esp, MEM32(ebp + (-0x34))); /* 0x110187C8: push dword ptr [ebp - 0x34] */
    PUSH32(esp, MEM32(ecx + 0x38)); /* 0x110187CB: push dword ptr [ecx + 0x38] */
    ecx = ebp + (-0x38); /* 0x110187CE: lea ecx, [ebp - 0x38] */
    PUSH32(esp, ecx); /* 0x110187D1: push ecx */
    ecx = ebx; /* 0x110187D2: mov ecx, ebx */
    RECOMP_ICALL(MEM32(eax + 0x28)); /* 0x110187D4: call dword ptr [eax + 0x28] */
    RECOMP_FLAGS_IN();
    goto L_11018809; /* 0x110187D7: jmp 0x11018809 */
L_11018804:
    esi = MEM32(ebp + (-0x18)); /* 0x11018804: mov esi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11018807: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_11018809:
    ecx = MEM32(ebp + (-0x14)); /* 0x11018809: mov ecx, dword ptr [ebp - 0x14] */
    MEM32(ebp + (-0x4)) = 1; /* 0x1101880C: mov dword ptr [ebp - 4], 1 */
    /* test LO8(ecx), 2 */ /* 0x11018813: test cl, 2 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11018830; /* 0x11018816: jne 0x11018830 */
L_11018818:
    edx = MEM32(ebp + (-0x1C)); /* 0x11018818: mov edx, dword ptr [ebp - 0x1c] */
    eax = edx + 0x8000; /* 0x1101881B: lea eax, [edx + 0x8000] */
    /* cmp eax, 0xFFFFu */ /* 0x11018821: cmp eax, 0xffff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_11018830; /* 0x11018826: ja 0x11018830 */
L_11018828:
    eax = MEM32(ebp + 0x8); /* 0x11018828: mov eax, dword ptr [ebp + 8] */
    MEM16(eax) = (uint16_t)(LO16(edx)); /* 0x1101882B: mov word ptr [eax], dx */
    goto L_11018842; /* 0x1101882E: jmp 0x11018842 */
L_11018830:
    _flag_a = (uint32_t)((ecx | 2)); _flag_b = (uint32_t)((ecx | 2));
    ecx = ecx | 2; /* 0x11018830: or ecx, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = ecx; /* 0x11018833: mov dword ptr [ebp - 0x14], ecx */
    goto L_11018842; /* 0x11018836: jmp 0x11018842 */
L_1101883F:
    ecx = MEM32(ebp + (-0x14)); /* 0x1101883F: mov ecx, dword ptr [ebp - 0x14] */
L_11018842:
    eax = MEM32(esi); /* 0x11018842: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x11018844: push edi */
    PUSH32(esp, ecx); /* 0x11018845: push ecx */
    ecx = MEM32(eax + 0x4); /* 0x11018846: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11018849: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1101884B: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x11018850: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11018852: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x11018856: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11018859: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x1101885D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11018866; /* 0x1101885F: je 0x11018866 */
L_11018861:
    eax = MEM32(ecx); /* 0x11018861: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x11018863: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_11018866:
    eax = esi; /* 0x11018866: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11018868: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x1101886D: ret 4 */
  _ljump:
    switch (_itail_tgt) {
      case 0x11018804u: goto L_11018804;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_110187D9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110187D9u);

L_110187D9:
    ecx = MEM32(ebp + (-0x18)); /* 0x110187D9: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x110187DC: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x110187DE: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x110187E0: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x110187E3: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x110187E5: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x110187E8: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), edi */ /* 0x110187EB: cmp dword ptr [edx + 0x38], edi */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_110187F3; /* 0x110187EE: jne 0x110187f3 */
L_110187F0:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x110187F0: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_110187F3:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x110187F3: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x110187F6: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x110187F9: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11018838; /* 0x110187FC: jne 0x11018838 */
L_110187FE:
    eax = 0x11018804u; /* 0x110187FE: mov eax, 0x11018804 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11018803: ret  */
L_11018838:
    PUSH32(esp, edi); /* 0x11018838: push edi */
    PUSH32(esp, edi); /* 0x11018839: push edi */
    RECOMP_CALL(sub_1103B33A); /* 0x1101883A: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x14)); /* 0x1101883F: mov ecx, dword ptr [ebp - 0x14] */
    eax = MEM32(esi); /* 0x11018842: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x11018844: push edi */
    PUSH32(esp, ecx); /* 0x11018845: push ecx */
    ecx = MEM32(eax + 0x4); /* 0x11018846: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11018849: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1101884B: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x11018850: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11018852: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x11018856: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11018859: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x1101885D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11018866; /* 0x1101885F: je 0x11018866 */
L_11018861:
    eax = MEM32(ecx); /* 0x11018861: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x11018863: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_11018866:
    eax = esi; /* 0x11018866: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11018868: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1101886D: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11018804(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11018804u);

L_11018804:
    esi = MEM32(ebp + (-0x18)); /* 0x11018804: mov esi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11018807: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x14)); /* 0x11018809: mov ecx, dword ptr [ebp - 0x14] */
    MEM32(ebp + (-0x4)) = 1; /* 0x1101880C: mov dword ptr [ebp - 4], 1 */
    /* test LO8(ecx), 2 */ /* 0x11018813: test cl, 2 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11018830; /* 0x11018816: jne 0x11018830 */
L_11018818:
    edx = MEM32(ebp + (-0x1C)); /* 0x11018818: mov edx, dword ptr [ebp - 0x1c] */
    eax = edx + 0x8000; /* 0x1101881B: lea eax, [edx + 0x8000] */
    /* cmp eax, 0xFFFFu */ /* 0x11018821: cmp eax, 0xffff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_11018830; /* 0x11018826: ja 0x11018830 */
L_11018828:
    eax = MEM32(ebp + 0x8); /* 0x11018828: mov eax, dword ptr [ebp + 8] */
    MEM16(eax) = (uint16_t)(LO16(edx)); /* 0x1101882B: mov word ptr [eax], dx */
    goto L_11018842; /* 0x1101882E: jmp 0x11018842 */
L_11018830:
    _flag_a = (uint32_t)((ecx | 2)); _flag_b = (uint32_t)((ecx | 2));
    ecx = ecx | 2; /* 0x11018830: or ecx, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = ecx; /* 0x11018833: mov dword ptr [ebp - 0x14], ecx */
    goto L_11018842; /* 0x11018836: jmp 0x11018842 */
L_11018842:
    eax = MEM32(esi); /* 0x11018842: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x11018844: push edi */
    PUSH32(esp, ecx); /* 0x11018845: push ecx */
    ecx = MEM32(eax + 0x4); /* 0x11018846: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11018849: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1101884B: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x11018850: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11018852: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x11018856: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11018859: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x1101885D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11018866; /* 0x1101885F: je 0x11018866 */
L_11018861:
    eax = MEM32(ecx); /* 0x11018861: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x11018863: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_11018866:
    eax = esi; /* 0x11018866: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11018868: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1101886D: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11018870(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11018870u);
    RECOMP_EH_ENTER();

L_11018870:
    PUSH32(esp, 0x28u); /* 0x11018870: push 0x28 */
    eax = 0x1103D63Bu; /* 0x11018872: mov eax, 0x1103d63b */
    RECOMP_CALL(sub_1103B3DB); /* 0x11018877: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1101887C: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x1101887E: mov dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11018881: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x24)) = esi; /* 0x11018883: mov dword ptr [ebp - 0x24], esi */
    MEM32(ebp + (-0x18)) = edi; /* 0x11018886: mov dword ptr [ebp - 0x18], edi */
    eax = MEM32(esi); /* 0x11018889: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x1101888B: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1101888E: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x11018892: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101889B; /* 0x11018894: je 0x1101889b */
L_11018896:
    eax = MEM32(ecx); /* 0x11018896: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x11018898: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_1101889B:
    PUSH32(esp, edi); /* 0x1101889B: push edi */
    ecx = esi; /* 0x1101889C: mov ecx, esi */
    MEM32(ebp + (-0x4)) = edi; /* 0x1101889E: mov dword ptr [ebp - 4], edi */
    RECOMP_CALL(sub_11010989); /* 0x110188A1: call 0x11010989 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x20)) = (uint8_t)(LO8(eax)); /* 0x110188A6: mov byte ptr [ebp - 0x20], al */
    MEM32(ebp + (-0x4)) = 1; /* 0x110188A9: mov dword ptr [ebp - 4], 1 */
    /* test LO8(eax), LO8(eax) */ /* 0x110188B0: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11018914; /* 0x110188B2: je 0x11018914 */
L_110188B4:
    eax = ebp + (-0x1C); /* 0x110188B4: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x110188B7: push eax */
    eax = MEM32(esi); /* 0x110188B8: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x110188BA: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x110188BD: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1100F94A); /* 0x110188BF: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x110188C4: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x110188C5: mov byte ptr [ebp - 4], 2 */
    RECOMP_CALL(sub_1101586F); /* 0x110188C9: call 0x1101586f */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110188CE: pop ecx */
    ecx = ebp + (-0x1C); /* 0x110188CF: lea ecx, [ebp - 0x1c] */
    ebx = eax; /* 0x110188D2: mov ebx, eax */
    RECOMP_CALL(sub_1100E431); /* 0x110188D4: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x110188D9: push dword ptr [ebp + 8] */
    ecx = MEM32(esi); /* 0x110188DC: mov ecx, dword ptr [esi] */
    edx = ebp + (-0x18); /* 0x110188DE: lea edx, [ebp - 0x18] */
    eax = MEM32(ebx); /* 0x110188E1: mov eax, dword ptr [ebx] */
    PUSH32(esp, edx); /* 0x110188E3: push edx */
    MEM8(ebp + (-0x28)) = (uint8_t)(1); /* 0x110188E4: mov byte ptr [ebp - 0x28], 1 */
    ecx = MEM32(ecx + 0x4); /* 0x110188E8: mov ecx, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x110188EB: add ecx, esi */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x110188ED: mov byte ptr [ebp - 4], 3 */
    PUSH32(esp, ecx); /* 0x110188F1: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x110188F2: push dword ptr [ebp - 0x28] */
    /* cmp MEM32(ecx + 0x38), 0 */ /* 0x110188F5: cmp dword ptr [ecx + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x110188F9: push edi */
    MEM8(ebp + (-0x30)) = (uint8_t)((CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x110188FA: sete byte ptr [ebp - 0x30] */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x110188FE: push dword ptr [ebp - 0x30] */
    PUSH32(esp, MEM32(ecx + 0x38)); /* 0x11018901: push dword ptr [ecx + 0x38] */
    ecx = ebp + (-0x34); /* 0x11018904: lea ecx, [ebp - 0x34] */
    PUSH32(esp, ecx); /* 0x11018907: push ecx */
    ecx = ebx; /* 0x11018908: mov ecx, ebx */
    RECOMP_ICALL(MEM32(eax + 0x30)); /* 0x1101890A: call dword ptr [eax + 0x30] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 1; /* 0x1101890D: mov dword ptr [ebp - 4], 1 */
L_11018914:
    eax = MEM32(esi); /* 0x11018914: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x11018916: push edi */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x11018917: push dword ptr [ebp - 0x18] */
    ecx = MEM32(eax + 0x4); /* 0x1101891A: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101891D: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1101891F: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x11018924: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11018926: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x1101892A: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1101892D: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x11018931: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101893A; /* 0x11018933: je 0x1101893a */
L_11018935:
    eax = MEM32(ecx); /* 0x11018935: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x11018937: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_1101893A:
    eax = esi; /* 0x1101893A: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101893C: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x11018941: ret 4 */
L_1101896F:
    esi = MEM32(ebp + (-0x14)); /* 0x1101896F: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11018972: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x11018974: mov dword ptr [ebp - 4], 1 */
    RECOMP_BACKEDGE();
    goto L_11018914; /* 0x1101897B: jmp 0x11018914 */
    { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x1101896Fu: goto L_1101896F;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_11018944(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11018944u);

L_11018944:
    ecx = MEM32(ebp + (-0x14)); /* 0x11018944: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11018947: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x11018949: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x1101894B: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1101894E: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x11018950: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11018953: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), edi */ /* 0x11018956: cmp dword ptr [edx + 0x38], edi */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101895E; /* 0x11018959: jne 0x1101895e */
L_1101895B:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101895B: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1101895E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x1101895E: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x11018961: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x11018964: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1101897D; /* 0x11018967: jne 0x1101897d */
L_11018969:
    eax = 0x1101896Fu; /* 0x11018969: mov eax, 0x1101896f */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101896E: ret  */
L_1101897D:
    PUSH32(esp, edi); /* 0x1101897D: push edi */
    PUSH32(esp, edi); /* 0x1101897E: push edi */
    RECOMP_CALL(sub_1103B33A); /* 0x1101897F: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x11018984u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1101896F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101896Fu);

    goto L_1101896F;
L_11018914:
    eax = MEM32(esi); /* 0x11018914: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x11018916: push edi */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x11018917: push dword ptr [ebp - 0x18] */
    ecx = MEM32(eax + 0x4); /* 0x1101891A: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101891D: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1101891F: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x11018924: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11018926: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x1101892A: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1101892D: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x11018931: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101893A; /* 0x11018933: je 0x1101893a */
L_11018935:
    eax = MEM32(ecx); /* 0x11018935: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x11018937: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_1101893A:
    eax = esi; /* 0x1101893A: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101893C: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11018941: ret 4 */
L_1101896F:
    esi = MEM32(ebp + (-0x14)); /* 0x1101896F: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11018972: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x11018974: mov dword ptr [ebp - 4], 1 */
    RECOMP_BACKEDGE();
    goto L_11018914; /* 0x1101897B: jmp 0x11018914 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11018985(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11018985u);
    RECOMP_EH_ENTER();

L_11018985:
    PUSH32(esp, 0x2Cu); /* 0x11018985: push 0x2c */
    eax = 0x1103D66Eu; /* 0x11018987: mov eax, 0x1103d66e */
    RECOMP_CALL(sub_1103B3DB); /* 0x1101898C: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x11018991: mov esi, ecx */
    MEM32(ebp + (-0x18)) = esi; /* 0x11018993: mov dword ptr [ebp - 0x18], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11018996: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x28)) = esi; /* 0x11018998: mov dword ptr [ebp - 0x28], esi */
    MEM32(ebp + (-0x14)) = edi; /* 0x1101899B: mov dword ptr [ebp - 0x14], edi */
    eax = MEM32(esi); /* 0x1101899E: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x110189A0: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x110189A3: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x110189A7: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110189B0; /* 0x110189A9: je 0x110189b0 */
L_110189AB:
    eax = MEM32(ecx); /* 0x110189AB: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x110189AD: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_110189B0:
    PUSH32(esp, edi); /* 0x110189B0: push edi */
    ecx = esi; /* 0x110189B1: mov ecx, esi */
    MEM32(ebp + (-0x4)) = edi; /* 0x110189B3: mov dword ptr [ebp - 4], edi */
    RECOMP_CALL(sub_11010989); /* 0x110189B6: call 0x11010989 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x24)) = (uint8_t)(LO8(eax)); /* 0x110189BB: mov byte ptr [ebp - 0x24], al */
    MEM32(ebp + (-0x4)) = 1; /* 0x110189BE: mov dword ptr [ebp - 4], 1 */
    /* test LO8(eax), LO8(eax) */ /* 0x110189C5: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11018A8F; /* 0x110189C7: je 0x11018a8f */
L_110189CD:
    eax = ebp + (-0x20); /* 0x110189CD: lea eax, [ebp - 0x20] */
    MEM32(ebp + (-0x1C)) = edi; /* 0x110189D0: mov dword ptr [ebp - 0x1c], edi */
    PUSH32(esp, eax); /* 0x110189D3: push eax */
    eax = MEM32(esi); /* 0x110189D4: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x110189D6: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x110189D9: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1100F94A); /* 0x110189DB: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x110189E0: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x110189E1: mov byte ptr [ebp - 4], 2 */
    RECOMP_CALL(sub_1101586F); /* 0x110189E5: call 0x1101586f */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110189EA: pop ecx */
    ecx = ebp + (-0x20); /* 0x110189EB: lea ecx, [ebp - 0x20] */
    ebx = eax; /* 0x110189EE: mov ebx, eax */
    RECOMP_CALL(sub_1100E431); /* 0x110189F0: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi); /* 0x110189F5: mov ecx, dword ptr [esi] */
    edx = ebp + (-0x1C); /* 0x110189F7: lea edx, [ebp - 0x1c] */
    eax = MEM32(ebx); /* 0x110189FA: mov eax, dword ptr [ebx] */
    PUSH32(esp, edx); /* 0x110189FC: push edx */
    edx = ebp + (-0x14); /* 0x110189FD: lea edx, [ebp - 0x14] */
    MEM8(ebp + (-0x2C)) = (uint8_t)(1); /* 0x11018A00: mov byte ptr [ebp - 0x2c], 1 */
    ecx = MEM32(ecx + 0x4); /* 0x11018A04: mov ecx, dword ptr [ecx + 4] */
    PUSH32(esp, edx); /* 0x11018A07: push edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11018A08: add ecx, esi */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x11018A0A: mov byte ptr [ebp - 4], 3 */
    PUSH32(esp, ecx); /* 0x11018A0E: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x11018A0F: push dword ptr [ebp - 0x2c] */
    /* cmp MEM32(ecx + 0x38), 0 */ /* 0x11018A12: cmp dword ptr [ecx + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x11018A16: push edi */
    MEM8(ebp + (-0x34)) = (uint8_t)((CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x11018A17: sete byte ptr [ebp - 0x34] */
    PUSH32(esp, MEM32(ebp + (-0x34))); /* 0x11018A1B: push dword ptr [ebp - 0x34] */
    PUSH32(esp, MEM32(ecx + 0x38)); /* 0x11018A1E: push dword ptr [ecx + 0x38] */
    ecx = ebp + (-0x38); /* 0x11018A21: lea ecx, [ebp - 0x38] */
    PUSH32(esp, ecx); /* 0x11018A24: push ecx */
    ecx = ebx; /* 0x11018A25: mov ecx, ebx */
    RECOMP_ICALL(MEM32(eax + 0x28)); /* 0x11018A27: call dword ptr [eax + 0x28] */
    RECOMP_FLAGS_IN();
    goto L_11018A5C; /* 0x11018A2A: jmp 0x11018a5c */
L_11018A57:
    esi = MEM32(ebp + (-0x18)); /* 0x11018A57: mov esi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11018A5A: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_11018A5C:
    ecx = MEM32(ebp + (-0x14)); /* 0x11018A5C: mov ecx, dword ptr [ebp - 0x14] */
    MEM32(ebp + (-0x4)) = 1; /* 0x11018A5F: mov dword ptr [ebp - 4], 1 */
    /* test LO8(ecx), 2 */ /* 0x11018A66: test cl, 2 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11018A80; /* 0x11018A69: jne 0x11018a80 */
L_11018A6B:
    edx = MEM32(ebp + (-0x1C)); /* 0x11018A6B: mov edx, dword ptr [ebp - 0x1c] */
    eax = edx + (-0x80000000); /* 0x11018A6E: lea eax, [edx - 0x80000000] */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x11018A74: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_11018A80; /* 0x11018A77: ja 0x11018a80 */
L_11018A79:
    eax = MEM32(ebp + 0x8); /* 0x11018A79: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = edx; /* 0x11018A7C: mov dword ptr [eax], edx */
    goto L_11018A92; /* 0x11018A7E: jmp 0x11018a92 */
L_11018A80:
    _flag_a = (uint32_t)((ecx | 2)); _flag_b = (uint32_t)((ecx | 2));
    ecx = ecx | 2; /* 0x11018A80: or ecx, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = ecx; /* 0x11018A83: mov dword ptr [ebp - 0x14], ecx */
    goto L_11018A92; /* 0x11018A86: jmp 0x11018a92 */
L_11018A8F:
    ecx = MEM32(ebp + (-0x14)); /* 0x11018A8F: mov ecx, dword ptr [ebp - 0x14] */
L_11018A92:
    eax = MEM32(esi); /* 0x11018A92: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x11018A94: push edi */
    PUSH32(esp, ecx); /* 0x11018A95: push ecx */
    ecx = MEM32(eax + 0x4); /* 0x11018A96: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11018A99: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x11018A9B: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x11018AA0: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11018AA2: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x11018AA6: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11018AA9: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x11018AAD: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11018AB6; /* 0x11018AAF: je 0x11018ab6 */
L_11018AB1:
    eax = MEM32(ecx); /* 0x11018AB1: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x11018AB3: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_11018AB6:
    eax = esi; /* 0x11018AB6: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11018AB8: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x11018ABD: ret 4 */
  _ljump:
    switch (_itail_tgt) {
      case 0x11018A57u: goto L_11018A57;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_11018A2C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11018A2Cu);

L_11018A2C:
    ecx = MEM32(ebp + (-0x18)); /* 0x11018A2C: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11018A2F: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x11018A31: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x11018A33: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x11018A36: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x11018A38: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11018A3B: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), edi */ /* 0x11018A3E: cmp dword ptr [edx + 0x38], edi */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11018A46; /* 0x11018A41: jne 0x11018a46 */
L_11018A43:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11018A43: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11018A46:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x11018A46: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x11018A49: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x11018A4C: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11018A88; /* 0x11018A4F: jne 0x11018a88 */
L_11018A51:
    eax = 0x11018A57u; /* 0x11018A51: mov eax, 0x11018a57 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11018A56: ret  */
L_11018A88:
    PUSH32(esp, edi); /* 0x11018A88: push edi */
    PUSH32(esp, edi); /* 0x11018A89: push edi */
    RECOMP_CALL(sub_1103B33A); /* 0x11018A8A: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x14)); /* 0x11018A8F: mov ecx, dword ptr [ebp - 0x14] */
    eax = MEM32(esi); /* 0x11018A92: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x11018A94: push edi */
    PUSH32(esp, ecx); /* 0x11018A95: push ecx */
    ecx = MEM32(eax + 0x4); /* 0x11018A96: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11018A99: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x11018A9B: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x11018AA0: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11018AA2: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x11018AA6: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11018AA9: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x11018AAD: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11018AB6; /* 0x11018AAF: je 0x11018ab6 */
L_11018AB1:
    eax = MEM32(ecx); /* 0x11018AB1: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x11018AB3: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_11018AB6:
    eax = esi; /* 0x11018AB6: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11018AB8: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11018ABD: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11018A57(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11018A57u);

L_11018A57:
    esi = MEM32(ebp + (-0x18)); /* 0x11018A57: mov esi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11018A5A: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x14)); /* 0x11018A5C: mov ecx, dword ptr [ebp - 0x14] */
    MEM32(ebp + (-0x4)) = 1; /* 0x11018A5F: mov dword ptr [ebp - 4], 1 */
    /* test LO8(ecx), 2 */ /* 0x11018A66: test cl, 2 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11018A80; /* 0x11018A69: jne 0x11018a80 */
L_11018A6B:
    edx = MEM32(ebp + (-0x1C)); /* 0x11018A6B: mov edx, dword ptr [ebp - 0x1c] */
    eax = edx + (-0x80000000); /* 0x11018A6E: lea eax, [edx - 0x80000000] */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x11018A74: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_11018A80; /* 0x11018A77: ja 0x11018a80 */
L_11018A79:
    eax = MEM32(ebp + 0x8); /* 0x11018A79: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = edx; /* 0x11018A7C: mov dword ptr [eax], edx */
    goto L_11018A92; /* 0x11018A7E: jmp 0x11018a92 */
L_11018A80:
    _flag_a = (uint32_t)((ecx | 2)); _flag_b = (uint32_t)((ecx | 2));
    ecx = ecx | 2; /* 0x11018A80: or ecx, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = ecx; /* 0x11018A83: mov dword ptr [ebp - 0x14], ecx */
    goto L_11018A92; /* 0x11018A86: jmp 0x11018a92 */
L_11018A92:
    eax = MEM32(esi); /* 0x11018A92: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x11018A94: push edi */
    PUSH32(esp, ecx); /* 0x11018A95: push ecx */
    ecx = MEM32(eax + 0x4); /* 0x11018A96: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11018A99: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x11018A9B: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x11018AA0: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11018AA2: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x11018AA6: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11018AA9: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x11018AAD: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11018AB6; /* 0x11018AAF: je 0x11018ab6 */
L_11018AB1:
    eax = MEM32(ecx); /* 0x11018AB1: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x11018AB3: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_11018AB6:
    eax = esi; /* 0x11018AB6: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11018AB8: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11018ABD: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11018AC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11018AC0u);
    RECOMP_EH_ENTER();

L_11018AC0:
    PUSH32(esp, 0x28u); /* 0x11018AC0: push 0x28 */
    eax = 0x1103D6A1u; /* 0x11018AC2: mov eax, 0x1103d6a1 */
    RECOMP_CALL(sub_1103B3DB); /* 0x11018AC7: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x11018ACC: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x11018ACE: mov dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11018AD1: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x24)) = esi; /* 0x11018AD3: mov dword ptr [ebp - 0x24], esi */
    MEM32(ebp + (-0x18)) = edi; /* 0x11018AD6: mov dword ptr [ebp - 0x18], edi */
    eax = MEM32(esi); /* 0x11018AD9: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x11018ADB: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11018ADE: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x11018AE2: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11018AEB; /* 0x11018AE4: je 0x11018aeb */
L_11018AE6:
    eax = MEM32(ecx); /* 0x11018AE6: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x11018AE8: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_11018AEB:
    PUSH32(esp, edi); /* 0x11018AEB: push edi */
    ecx = esi; /* 0x11018AEC: mov ecx, esi */
    MEM32(ebp + (-0x4)) = edi; /* 0x11018AEE: mov dword ptr [ebp - 4], edi */
    RECOMP_CALL(sub_11010989); /* 0x11018AF1: call 0x11010989 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x20)) = (uint8_t)(LO8(eax)); /* 0x11018AF6: mov byte ptr [ebp - 0x20], al */
    MEM32(ebp + (-0x4)) = 1; /* 0x11018AF9: mov dword ptr [ebp - 4], 1 */
    /* test LO8(eax), LO8(eax) */ /* 0x11018B00: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11018B64; /* 0x11018B02: je 0x11018b64 */
L_11018B04:
    eax = ebp + (-0x1C); /* 0x11018B04: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x11018B07: push eax */
    eax = MEM32(esi); /* 0x11018B08: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x11018B0A: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11018B0D: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1100F94A); /* 0x11018B0F: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x11018B14: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x11018B15: mov byte ptr [ebp - 4], 2 */
    RECOMP_CALL(sub_1101586F); /* 0x11018B19: call 0x1101586f */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11018B1E: pop ecx */
    ecx = ebp + (-0x1C); /* 0x11018B1F: lea ecx, [ebp - 0x1c] */
    ebx = eax; /* 0x11018B22: mov ebx, eax */
    RECOMP_CALL(sub_1100E431); /* 0x11018B24: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11018B29: push dword ptr [ebp + 8] */
    ecx = MEM32(esi); /* 0x11018B2C: mov ecx, dword ptr [esi] */
    edx = ebp + (-0x18); /* 0x11018B2E: lea edx, [ebp - 0x18] */
    eax = MEM32(ebx); /* 0x11018B31: mov eax, dword ptr [ebx] */
    PUSH32(esp, edx); /* 0x11018B33: push edx */
    MEM8(ebp + (-0x28)) = (uint8_t)(1); /* 0x11018B34: mov byte ptr [ebp - 0x28], 1 */
    ecx = MEM32(ecx + 0x4); /* 0x11018B38: mov ecx, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11018B3B: add ecx, esi */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x11018B3D: mov byte ptr [ebp - 4], 3 */
    PUSH32(esp, ecx); /* 0x11018B41: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x11018B42: push dword ptr [ebp - 0x28] */
    /* cmp MEM32(ecx + 0x38), 0 */ /* 0x11018B45: cmp dword ptr [ecx + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x11018B49: push edi */
    MEM8(ebp + (-0x30)) = (uint8_t)((CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x11018B4A: sete byte ptr [ebp - 0x30] */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x11018B4E: push dword ptr [ebp - 0x30] */
    PUSH32(esp, MEM32(ecx + 0x38)); /* 0x11018B51: push dword ptr [ecx + 0x38] */
    ecx = ebp + (-0x34); /* 0x11018B54: lea ecx, [ebp - 0x34] */
    PUSH32(esp, ecx); /* 0x11018B57: push ecx */
    ecx = ebx; /* 0x11018B58: mov ecx, ebx */
    RECOMP_ICALL(MEM32(eax + 0x2C)); /* 0x11018B5A: call dword ptr [eax + 0x2c] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 1; /* 0x11018B5D: mov dword ptr [ebp - 4], 1 */
L_11018B64:
    eax = MEM32(esi); /* 0x11018B64: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x11018B66: push edi */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x11018B67: push dword ptr [ebp - 0x18] */
    ecx = MEM32(eax + 0x4); /* 0x11018B6A: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11018B6D: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x11018B6F: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x11018B74: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11018B76: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x11018B7A: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11018B7D: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x11018B81: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11018B8A; /* 0x11018B83: je 0x11018b8a */
L_11018B85:
    eax = MEM32(ecx); /* 0x11018B85: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x11018B87: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_11018B8A:
    eax = esi; /* 0x11018B8A: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11018B8C: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x11018B91: ret 4 */
L_11018BBF:
    esi = MEM32(ebp + (-0x14)); /* 0x11018BBF: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11018BC2: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x11018BC4: mov dword ptr [ebp - 4], 1 */
    RECOMP_BACKEDGE();
    goto L_11018B64; /* 0x11018BCB: jmp 0x11018b64 */
    { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x11018BBFu: goto L_11018BBF;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_11018B94(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11018B94u);

L_11018B94:
    ecx = MEM32(ebp + (-0x14)); /* 0x11018B94: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11018B97: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x11018B99: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x11018B9B: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x11018B9E: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x11018BA0: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11018BA3: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), edi */ /* 0x11018BA6: cmp dword ptr [edx + 0x38], edi */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11018BAE; /* 0x11018BA9: jne 0x11018bae */
L_11018BAB:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11018BAB: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11018BAE:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x11018BAE: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x11018BB1: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x11018BB4: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11018BCD; /* 0x11018BB7: jne 0x11018bcd */
L_11018BB9:
    eax = 0x11018BBFu; /* 0x11018BB9: mov eax, 0x11018bbf */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11018BBE: ret  */
L_11018BCD:
    PUSH32(esp, edi); /* 0x11018BCD: push edi */
    PUSH32(esp, edi); /* 0x11018BCE: push edi */
    RECOMP_CALL(sub_1103B33A); /* 0x11018BCF: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x11018BD4u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11018BBF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11018BBFu);

    goto L_11018BBF;
L_11018B64:
    eax = MEM32(esi); /* 0x11018B64: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x11018B66: push edi */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x11018B67: push dword ptr [ebp - 0x18] */
    ecx = MEM32(eax + 0x4); /* 0x11018B6A: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11018B6D: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x11018B6F: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x11018B74: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11018B76: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x11018B7A: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11018B7D: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x11018B81: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11018B8A; /* 0x11018B83: je 0x11018b8a */
L_11018B85:
    eax = MEM32(ecx); /* 0x11018B85: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x11018B87: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_11018B8A:
    eax = esi; /* 0x11018B8A: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11018B8C: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11018B91: ret 4 */
L_11018BBF:
    esi = MEM32(ebp + (-0x14)); /* 0x11018BBF: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11018BC2: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x11018BC4: mov dword ptr [ebp - 4], 1 */
    RECOMP_BACKEDGE();
    goto L_11018B64; /* 0x11018BCB: jmp 0x11018b64 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11018BD5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11018BD5u);
    RECOMP_EH_ENTER();

L_11018BD5:
    PUSH32(esp, 0x28u); /* 0x11018BD5: push 0x28 */
    eax = 0x1103D6D4u; /* 0x11018BD7: mov eax, 0x1103d6d4 */
    RECOMP_CALL(sub_1103B3DB); /* 0x11018BDC: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x11018BE1: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x11018BE3: mov dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11018BE6: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x24)) = esi; /* 0x11018BE8: mov dword ptr [ebp - 0x24], esi */
    MEM32(ebp + (-0x18)) = edi; /* 0x11018BEB: mov dword ptr [ebp - 0x18], edi */
    eax = MEM32(esi); /* 0x11018BEE: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x11018BF0: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11018BF3: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x11018BF7: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11018C00; /* 0x11018BF9: je 0x11018c00 */
L_11018BFB:
    eax = MEM32(ecx); /* 0x11018BFB: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x11018BFD: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_11018C00:
    PUSH32(esp, edi); /* 0x11018C00: push edi */
    ecx = esi; /* 0x11018C01: mov ecx, esi */
    MEM32(ebp + (-0x4)) = edi; /* 0x11018C03: mov dword ptr [ebp - 4], edi */
    RECOMP_CALL(sub_11010989); /* 0x11018C06: call 0x11010989 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x20)) = (uint8_t)(LO8(eax)); /* 0x11018C0B: mov byte ptr [ebp - 0x20], al */
    MEM32(ebp + (-0x4)) = 1; /* 0x11018C0E: mov dword ptr [ebp - 4], 1 */
    /* test LO8(eax), LO8(eax) */ /* 0x11018C15: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11018C79; /* 0x11018C17: je 0x11018c79 */
L_11018C19:
    eax = ebp + (-0x1C); /* 0x11018C19: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x11018C1C: push eax */
    eax = MEM32(esi); /* 0x11018C1D: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x11018C1F: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11018C22: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1100F94A); /* 0x11018C24: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x11018C29: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x11018C2A: mov byte ptr [ebp - 4], 2 */
    RECOMP_CALL(sub_1101586F); /* 0x11018C2E: call 0x1101586f */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11018C33: pop ecx */
    ecx = ebp + (-0x1C); /* 0x11018C34: lea ecx, [ebp - 0x1c] */
    ebx = eax; /* 0x11018C37: mov ebx, eax */
    RECOMP_CALL(sub_1100E431); /* 0x11018C39: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11018C3E: push dword ptr [ebp + 8] */
    ecx = MEM32(esi); /* 0x11018C41: mov ecx, dword ptr [esi] */
    edx = ebp + (-0x18); /* 0x11018C43: lea edx, [ebp - 0x18] */
    eax = MEM32(ebx); /* 0x11018C46: mov eax, dword ptr [ebx] */
    PUSH32(esp, edx); /* 0x11018C48: push edx */
    MEM8(ebp + (-0x28)) = (uint8_t)(1); /* 0x11018C49: mov byte ptr [ebp - 0x28], 1 */
    ecx = MEM32(ecx + 0x4); /* 0x11018C4D: mov ecx, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11018C50: add ecx, esi */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x11018C52: mov byte ptr [ebp - 4], 3 */
    PUSH32(esp, ecx); /* 0x11018C56: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x11018C57: push dword ptr [ebp - 0x28] */
    /* cmp MEM32(ecx + 0x38), 0 */ /* 0x11018C5A: cmp dword ptr [ecx + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x11018C5E: push edi */
    MEM8(ebp + (-0x30)) = (uint8_t)((CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x11018C5F: sete byte ptr [ebp - 0x30] */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x11018C63: push dword ptr [ebp - 0x30] */
    PUSH32(esp, MEM32(ecx + 0x38)); /* 0x11018C66: push dword ptr [ecx + 0x38] */
    ecx = ebp + (-0x34); /* 0x11018C69: lea ecx, [ebp - 0x34] */
    PUSH32(esp, ecx); /* 0x11018C6C: push ecx */
    ecx = ebx; /* 0x11018C6D: mov ecx, ebx */
    RECOMP_ICALL(MEM32(eax + 0x28)); /* 0x11018C6F: call dword ptr [eax + 0x28] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 1; /* 0x11018C72: mov dword ptr [ebp - 4], 1 */
L_11018C79:
    eax = MEM32(esi); /* 0x11018C79: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x11018C7B: push edi */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x11018C7C: push dword ptr [ebp - 0x18] */
    ecx = MEM32(eax + 0x4); /* 0x11018C7F: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11018C82: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x11018C84: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x11018C89: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11018C8B: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x11018C8F: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11018C92: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x11018C96: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11018C9F; /* 0x11018C98: je 0x11018c9f */
L_11018C9A:
    eax = MEM32(ecx); /* 0x11018C9A: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x11018C9C: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_11018C9F:
    eax = esi; /* 0x11018C9F: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11018CA1: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x11018CA6: ret 4 */
L_11018CD4:
    esi = MEM32(ebp + (-0x14)); /* 0x11018CD4: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11018CD7: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x11018CD9: mov dword ptr [ebp - 4], 1 */
    RECOMP_BACKEDGE();
    goto L_11018C79; /* 0x11018CE0: jmp 0x11018c79 */
    { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x11018CD4u: goto L_11018CD4;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_11018CA9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11018CA9u);

L_11018CA9:
    ecx = MEM32(ebp + (-0x14)); /* 0x11018CA9: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11018CAC: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x11018CAE: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x11018CB0: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x11018CB3: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x11018CB5: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11018CB8: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), edi */ /* 0x11018CBB: cmp dword ptr [edx + 0x38], edi */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11018CC3; /* 0x11018CBE: jne 0x11018cc3 */
L_11018CC0:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11018CC0: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11018CC3:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x11018CC3: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x11018CC6: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x11018CC9: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11018CE2; /* 0x11018CCC: jne 0x11018ce2 */
L_11018CCE:
    eax = 0x11018CD4u; /* 0x11018CCE: mov eax, 0x11018cd4 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11018CD3: ret  */
L_11018CE2:
    PUSH32(esp, edi); /* 0x11018CE2: push edi */
    PUSH32(esp, edi); /* 0x11018CE3: push edi */
    RECOMP_CALL(sub_1103B33A); /* 0x11018CE4: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x11018CE9u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11018CD4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11018CD4u);

    goto L_11018CD4;
L_11018C79:
    eax = MEM32(esi); /* 0x11018C79: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x11018C7B: push edi */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x11018C7C: push dword ptr [ebp - 0x18] */
    ecx = MEM32(eax + 0x4); /* 0x11018C7F: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11018C82: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x11018C84: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x11018C89: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11018C8B: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x11018C8F: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11018C92: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x11018C96: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11018C9F; /* 0x11018C98: je 0x11018c9f */
L_11018C9A:
    eax = MEM32(ecx); /* 0x11018C9A: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x11018C9C: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_11018C9F:
    eax = esi; /* 0x11018C9F: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11018CA1: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11018CA6: ret 4 */
L_11018CD4:
    esi = MEM32(ebp + (-0x14)); /* 0x11018CD4: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11018CD7: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x11018CD9: mov dword ptr [ebp - 4], 1 */
    RECOMP_BACKEDGE();
    goto L_11018C79; /* 0x11018CE0: jmp 0x11018c79 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11018CEA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11018CEAu);
    RECOMP_EH_ENTER();

L_11018CEA:
    PUSH32(esp, 0x28u); /* 0x11018CEA: push 0x28 */
    eax = 0x1103D707u; /* 0x11018CEC: mov eax, 0x1103d707 */
    RECOMP_CALL(sub_1103B3DB); /* 0x11018CF1: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x11018CF6: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x11018CF8: mov dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11018CFB: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x24)) = esi; /* 0x11018CFD: mov dword ptr [ebp - 0x24], esi */
    MEM32(ebp + (-0x18)) = edi; /* 0x11018D00: mov dword ptr [ebp - 0x18], edi */
    eax = MEM32(esi); /* 0x11018D03: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x11018D05: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11018D08: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x11018D0C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11018D15; /* 0x11018D0E: je 0x11018d15 */
L_11018D10:
    eax = MEM32(ecx); /* 0x11018D10: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x11018D12: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_11018D15:
    PUSH32(esp, edi); /* 0x11018D15: push edi */
    ecx = esi; /* 0x11018D16: mov ecx, esi */
    MEM32(ebp + (-0x4)) = edi; /* 0x11018D18: mov dword ptr [ebp - 4], edi */
    RECOMP_CALL(sub_11010989); /* 0x11018D1B: call 0x11010989 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x20)) = (uint8_t)(LO8(eax)); /* 0x11018D20: mov byte ptr [ebp - 0x20], al */
    MEM32(ebp + (-0x4)) = 1; /* 0x11018D23: mov dword ptr [ebp - 4], 1 */
    /* test LO8(eax), LO8(eax) */ /* 0x11018D2A: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11018D8E; /* 0x11018D2C: je 0x11018d8e */
L_11018D2E:
    eax = ebp + (-0x1C); /* 0x11018D2E: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x11018D31: push eax */
    eax = MEM32(esi); /* 0x11018D32: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x11018D34: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11018D37: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1100F94A); /* 0x11018D39: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x11018D3E: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x11018D3F: mov byte ptr [ebp - 4], 2 */
    RECOMP_CALL(sub_1101586F); /* 0x11018D43: call 0x1101586f */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11018D48: pop ecx */
    ecx = ebp + (-0x1C); /* 0x11018D49: lea ecx, [ebp - 0x1c] */
    ebx = eax; /* 0x11018D4C: mov ebx, eax */
    RECOMP_CALL(sub_1100E431); /* 0x11018D4E: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11018D53: push dword ptr [ebp + 8] */
    ecx = MEM32(esi); /* 0x11018D56: mov ecx, dword ptr [esi] */
    edx = ebp + (-0x18); /* 0x11018D58: lea edx, [ebp - 0x18] */
    eax = MEM32(ebx); /* 0x11018D5B: mov eax, dword ptr [ebx] */
    PUSH32(esp, edx); /* 0x11018D5D: push edx */
    MEM8(ebp + (-0x28)) = (uint8_t)(1); /* 0x11018D5E: mov byte ptr [ebp - 0x28], 1 */
    ecx = MEM32(ecx + 0x4); /* 0x11018D62: mov ecx, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11018D65: add ecx, esi */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x11018D67: mov byte ptr [ebp - 4], 3 */
    PUSH32(esp, ecx); /* 0x11018D6B: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x11018D6C: push dword ptr [ebp - 0x28] */
    /* cmp MEM32(ecx + 0x38), 0 */ /* 0x11018D6F: cmp dword ptr [ecx + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x11018D73: push edi */
    MEM8(ebp + (-0x30)) = (uint8_t)((CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x11018D74: sete byte ptr [ebp - 0x30] */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x11018D78: push dword ptr [ebp - 0x30] */
    PUSH32(esp, MEM32(ecx + 0x38)); /* 0x11018D7B: push dword ptr [ecx + 0x38] */
    ecx = ebp + (-0x34); /* 0x11018D7E: lea ecx, [ebp - 0x34] */
    PUSH32(esp, ecx); /* 0x11018D81: push ecx */
    ecx = ebx; /* 0x11018D82: mov ecx, ebx */
    RECOMP_ICALL(MEM32(eax + 0x24)); /* 0x11018D84: call dword ptr [eax + 0x24] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 1; /* 0x11018D87: mov dword ptr [ebp - 4], 1 */
L_11018D8E:
    eax = MEM32(esi); /* 0x11018D8E: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x11018D90: push edi */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x11018D91: push dword ptr [ebp - 0x18] */
    ecx = MEM32(eax + 0x4); /* 0x11018D94: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11018D97: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x11018D99: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x11018D9E: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11018DA0: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x11018DA4: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11018DA7: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x11018DAB: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11018DB4; /* 0x11018DAD: je 0x11018db4 */
L_11018DAF:
    eax = MEM32(ecx); /* 0x11018DAF: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x11018DB1: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_11018DB4:
    eax = esi; /* 0x11018DB4: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11018DB6: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x11018DBB: ret 4 */
L_11018DE9:
    esi = MEM32(ebp + (-0x14)); /* 0x11018DE9: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11018DEC: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x11018DEE: mov dword ptr [ebp - 4], 1 */
    RECOMP_BACKEDGE();
    goto L_11018D8E; /* 0x11018DF5: jmp 0x11018d8e */
    { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x11018DE9u: goto L_11018DE9;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_11018DBE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11018DBEu);

L_11018DBE:
    ecx = MEM32(ebp + (-0x14)); /* 0x11018DBE: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11018DC1: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x11018DC3: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x11018DC5: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x11018DC8: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x11018DCA: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11018DCD: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), edi */ /* 0x11018DD0: cmp dword ptr [edx + 0x38], edi */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11018DD8; /* 0x11018DD3: jne 0x11018dd8 */
L_11018DD5:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11018DD5: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11018DD8:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x11018DD8: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x11018DDB: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x11018DDE: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11018DF7; /* 0x11018DE1: jne 0x11018df7 */
L_11018DE3:
    eax = 0x11018DE9u; /* 0x11018DE3: mov eax, 0x11018de9 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11018DE8: ret  */
L_11018DF7:
    PUSH32(esp, edi); /* 0x11018DF7: push edi */
    PUSH32(esp, edi); /* 0x11018DF8: push edi */
    RECOMP_CALL(sub_1103B33A); /* 0x11018DF9: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x11018DFEu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11018DE9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11018DE9u);

    goto L_11018DE9;
L_11018D8E:
    eax = MEM32(esi); /* 0x11018D8E: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x11018D90: push edi */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x11018D91: push dword ptr [ebp - 0x18] */
    ecx = MEM32(eax + 0x4); /* 0x11018D94: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11018D97: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x11018D99: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x11018D9E: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11018DA0: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x11018DA4: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11018DA7: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x11018DAB: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11018DB4; /* 0x11018DAD: je 0x11018db4 */
L_11018DAF:
    eax = MEM32(ecx); /* 0x11018DAF: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x11018DB1: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_11018DB4:
    eax = esi; /* 0x11018DB4: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11018DB6: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11018DBB: ret 4 */
L_11018DE9:
    esi = MEM32(ebp + (-0x14)); /* 0x11018DE9: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11018DEC: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x11018DEE: mov dword ptr [ebp - 4], 1 */
    RECOMP_BACKEDGE();
    goto L_11018D8E; /* 0x11018DF5: jmp 0x11018d8e */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11018DFF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11018DFFu);
    RECOMP_EH_ENTER();

L_11018DFF:
    PUSH32(esp, 0x28u); /* 0x11018DFF: push 0x28 */
    eax = 0x1103D73Au; /* 0x11018E01: mov eax, 0x1103d73a */
    RECOMP_CALL(sub_1103B3DB); /* 0x11018E06: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x11018E0B: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x11018E0D: mov dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11018E10: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x24)) = esi; /* 0x11018E12: mov dword ptr [ebp - 0x24], esi */
    MEM32(ebp + (-0x18)) = edi; /* 0x11018E15: mov dword ptr [ebp - 0x18], edi */
    eax = MEM32(esi); /* 0x11018E18: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x11018E1A: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11018E1D: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x11018E21: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11018E2A; /* 0x11018E23: je 0x11018e2a */
L_11018E25:
    eax = MEM32(ecx); /* 0x11018E25: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x11018E27: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_11018E2A:
    PUSH32(esp, edi); /* 0x11018E2A: push edi */
    ecx = esi; /* 0x11018E2B: mov ecx, esi */
    MEM32(ebp + (-0x4)) = edi; /* 0x11018E2D: mov dword ptr [ebp - 4], edi */
    RECOMP_CALL(sub_11010989); /* 0x11018E30: call 0x11010989 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x20)) = (uint8_t)(LO8(eax)); /* 0x11018E35: mov byte ptr [ebp - 0x20], al */
    MEM32(ebp + (-0x4)) = 1; /* 0x11018E38: mov dword ptr [ebp - 4], 1 */
    /* test LO8(eax), LO8(eax) */ /* 0x11018E3F: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11018EA3; /* 0x11018E41: je 0x11018ea3 */
L_11018E43:
    eax = ebp + (-0x1C); /* 0x11018E43: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x11018E46: push eax */
    eax = MEM32(esi); /* 0x11018E47: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x11018E49: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11018E4C: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1100F94A); /* 0x11018E4E: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x11018E53: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x11018E54: mov byte ptr [ebp - 4], 2 */
    RECOMP_CALL(sub_1101586F); /* 0x11018E58: call 0x1101586f */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11018E5D: pop ecx */
    ecx = ebp + (-0x1C); /* 0x11018E5E: lea ecx, [ebp - 0x1c] */
    ebx = eax; /* 0x11018E61: mov ebx, eax */
    RECOMP_CALL(sub_1100E431); /* 0x11018E63: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11018E68: push dword ptr [ebp + 8] */
    ecx = MEM32(esi); /* 0x11018E6B: mov ecx, dword ptr [esi] */
    edx = ebp + (-0x18); /* 0x11018E6D: lea edx, [ebp - 0x18] */
    eax = MEM32(ebx); /* 0x11018E70: mov eax, dword ptr [ebx] */
    PUSH32(esp, edx); /* 0x11018E72: push edx */
    MEM8(ebp + (-0x28)) = (uint8_t)(1); /* 0x11018E73: mov byte ptr [ebp - 0x28], 1 */
    ecx = MEM32(ecx + 0x4); /* 0x11018E77: mov ecx, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11018E7A: add ecx, esi */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x11018E7C: mov byte ptr [ebp - 4], 3 */
    PUSH32(esp, ecx); /* 0x11018E80: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x11018E81: push dword ptr [ebp - 0x28] */
    /* cmp MEM32(ecx + 0x38), 0 */ /* 0x11018E84: cmp dword ptr [ecx + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x11018E88: push edi */
    MEM8(ebp + (-0x30)) = (uint8_t)((CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x11018E89: sete byte ptr [ebp - 0x30] */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x11018E8D: push dword ptr [ebp - 0x30] */
    PUSH32(esp, MEM32(ecx + 0x38)); /* 0x11018E90: push dword ptr [ecx + 0x38] */
    ecx = ebp + (-0x34); /* 0x11018E93: lea ecx, [ebp - 0x34] */
    PUSH32(esp, ecx); /* 0x11018E96: push ecx */
    ecx = ebx; /* 0x11018E97: mov ecx, ebx */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x11018E99: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 1; /* 0x11018E9C: mov dword ptr [ebp - 4], 1 */
L_11018EA3:
    eax = MEM32(esi); /* 0x11018EA3: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x11018EA5: push edi */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x11018EA6: push dword ptr [ebp - 0x18] */
    ecx = MEM32(eax + 0x4); /* 0x11018EA9: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11018EAC: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x11018EAE: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x11018EB3: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11018EB5: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x11018EB9: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11018EBC: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x11018EC0: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11018EC9; /* 0x11018EC2: je 0x11018ec9 */
L_11018EC4:
    eax = MEM32(ecx); /* 0x11018EC4: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x11018EC6: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_11018EC9:
    eax = esi; /* 0x11018EC9: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11018ECB: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x11018ED0: ret 4 */
L_11018EFE:
    esi = MEM32(ebp + (-0x14)); /* 0x11018EFE: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11018F01: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x11018F03: mov dword ptr [ebp - 4], 1 */
    RECOMP_BACKEDGE();
    goto L_11018EA3; /* 0x11018F0A: jmp 0x11018ea3 */
    { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x11018EFEu: goto L_11018EFE;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_11018ED3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11018ED3u);

L_11018ED3:
    ecx = MEM32(ebp + (-0x14)); /* 0x11018ED3: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11018ED6: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x11018ED8: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x11018EDA: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x11018EDD: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x11018EDF: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11018EE2: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), edi */ /* 0x11018EE5: cmp dword ptr [edx + 0x38], edi */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11018EED; /* 0x11018EE8: jne 0x11018eed */
L_11018EEA:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11018EEA: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11018EED:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x11018EED: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x11018EF0: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x11018EF3: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11018F0C; /* 0x11018EF6: jne 0x11018f0c */
L_11018EF8:
    eax = 0x11018EFEu; /* 0x11018EF8: mov eax, 0x11018efe */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11018EFD: ret  */
L_11018F0C:
    PUSH32(esp, edi); /* 0x11018F0C: push edi */
    PUSH32(esp, edi); /* 0x11018F0D: push edi */
    RECOMP_CALL(sub_1103B33A); /* 0x11018F0E: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x11018F13u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11018EFE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11018EFEu);

    goto L_11018EFE;
L_11018EA3:
    eax = MEM32(esi); /* 0x11018EA3: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x11018EA5: push edi */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x11018EA6: push dword ptr [ebp - 0x18] */
    ecx = MEM32(eax + 0x4); /* 0x11018EA9: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11018EAC: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x11018EAE: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x11018EB3: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11018EB5: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x11018EB9: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11018EBC: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x11018EC0: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11018EC9; /* 0x11018EC2: je 0x11018ec9 */
L_11018EC4:
    eax = MEM32(ecx); /* 0x11018EC4: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x11018EC6: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_11018EC9:
    eax = esi; /* 0x11018EC9: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11018ECB: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11018ED0: ret 4 */
L_11018EFE:
    esi = MEM32(ebp + (-0x14)); /* 0x11018EFE: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11018F01: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x11018F03: mov dword ptr [ebp - 4], 1 */
    RECOMP_BACKEDGE();
    goto L_11018EA3; /* 0x11018F0A: jmp 0x11018ea3 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11018F14(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11018F14u);
    RECOMP_EH_ENTER();

L_11018F14:
    PUSH32(esp, 0x28u); /* 0x11018F14: push 0x28 */
    eax = 0x1103D76Du; /* 0x11018F16: mov eax, 0x1103d76d */
    RECOMP_CALL(sub_1103B3DB); /* 0x11018F1B: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x11018F20: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x11018F22: mov dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11018F25: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x24)) = esi; /* 0x11018F27: mov dword ptr [ebp - 0x24], esi */
    MEM32(ebp + (-0x18)) = edi; /* 0x11018F2A: mov dword ptr [ebp - 0x18], edi */
    eax = MEM32(esi); /* 0x11018F2D: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x11018F2F: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11018F32: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x11018F36: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11018F3F; /* 0x11018F38: je 0x11018f3f */
L_11018F3A:
    eax = MEM32(ecx); /* 0x11018F3A: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x11018F3C: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_11018F3F:
    PUSH32(esp, edi); /* 0x11018F3F: push edi */
    ecx = esi; /* 0x11018F40: mov ecx, esi */
    MEM32(ebp + (-0x4)) = edi; /* 0x11018F42: mov dword ptr [ebp - 4], edi */
    RECOMP_CALL(sub_11010989); /* 0x11018F45: call 0x11010989 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x20)) = (uint8_t)(LO8(eax)); /* 0x11018F4A: mov byte ptr [ebp - 0x20], al */
    MEM32(ebp + (-0x4)) = 1; /* 0x11018F4D: mov dword ptr [ebp - 4], 1 */
    /* test LO8(eax), LO8(eax) */ /* 0x11018F54: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11018FB8; /* 0x11018F56: je 0x11018fb8 */
L_11018F58:
    eax = ebp + (-0x1C); /* 0x11018F58: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x11018F5B: push eax */
    eax = MEM32(esi); /* 0x11018F5C: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x11018F5E: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11018F61: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1100F94A); /* 0x11018F63: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x11018F68: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x11018F69: mov byte ptr [ebp - 4], 2 */
    RECOMP_CALL(sub_1101586F); /* 0x11018F6D: call 0x1101586f */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11018F72: pop ecx */
    ecx = ebp + (-0x1C); /* 0x11018F73: lea ecx, [ebp - 0x1c] */
    ebx = eax; /* 0x11018F76: mov ebx, eax */
    RECOMP_CALL(sub_1100E431); /* 0x11018F78: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11018F7D: push dword ptr [ebp + 8] */
    ecx = MEM32(esi); /* 0x11018F80: mov ecx, dword ptr [esi] */
    edx = ebp + (-0x18); /* 0x11018F82: lea edx, [ebp - 0x18] */
    eax = MEM32(ebx); /* 0x11018F85: mov eax, dword ptr [ebx] */
    PUSH32(esp, edx); /* 0x11018F87: push edx */
    MEM8(ebp + (-0x28)) = (uint8_t)(1); /* 0x11018F88: mov byte ptr [ebp - 0x28], 1 */
    ecx = MEM32(ecx + 0x4); /* 0x11018F8C: mov ecx, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11018F8F: add ecx, esi */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x11018F91: mov byte ptr [ebp - 4], 3 */
    PUSH32(esp, ecx); /* 0x11018F95: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x11018F96: push dword ptr [ebp - 0x28] */
    /* cmp MEM32(ecx + 0x38), 0 */ /* 0x11018F99: cmp dword ptr [ecx + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x11018F9D: push edi */
    MEM8(ebp + (-0x30)) = (uint8_t)((CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x11018F9E: sete byte ptr [ebp - 0x30] */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x11018FA2: push dword ptr [ebp - 0x30] */
    PUSH32(esp, MEM32(ecx + 0x38)); /* 0x11018FA5: push dword ptr [ecx + 0x38] */
    ecx = ebp + (-0x34); /* 0x11018FA8: lea ecx, [ebp - 0x34] */
    PUSH32(esp, ecx); /* 0x11018FAB: push ecx */
    ecx = ebx; /* 0x11018FAC: mov ecx, ebx */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x11018FAE: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 1; /* 0x11018FB1: mov dword ptr [ebp - 4], 1 */
L_11018FB8:
    eax = MEM32(esi); /* 0x11018FB8: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x11018FBA: push edi */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x11018FBB: push dword ptr [ebp - 0x18] */
    ecx = MEM32(eax + 0x4); /* 0x11018FBE: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11018FC1: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x11018FC3: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x11018FC8: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11018FCA: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x11018FCE: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11018FD1: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x11018FD5: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11018FDE; /* 0x11018FD7: je 0x11018fde */
L_11018FD9:
    eax = MEM32(ecx); /* 0x11018FD9: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x11018FDB: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_11018FDE:
    eax = esi; /* 0x11018FDE: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11018FE0: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x11018FE5: ret 4 */
L_11019013:
    esi = MEM32(ebp + (-0x14)); /* 0x11019013: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11019016: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x11019018: mov dword ptr [ebp - 4], 1 */
    RECOMP_BACKEDGE();
    goto L_11018FB8; /* 0x1101901F: jmp 0x11018fb8 */
    { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x11019013u: goto L_11019013;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_11018FE8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11018FE8u);

L_11018FE8:
    ecx = MEM32(ebp + (-0x14)); /* 0x11018FE8: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11018FEB: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x11018FED: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x11018FEF: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x11018FF2: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x11018FF4: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11018FF7: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), edi */ /* 0x11018FFA: cmp dword ptr [edx + 0x38], edi */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11019002; /* 0x11018FFD: jne 0x11019002 */
L_11018FFF:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11018FFF: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11019002:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x11019002: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x11019005: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x11019008: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11019021; /* 0x1101900B: jne 0x11019021 */
L_1101900D:
    eax = 0x11019013u; /* 0x1101900D: mov eax, 0x11019013 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11019012: ret  */
L_11019021:
    PUSH32(esp, edi); /* 0x11019021: push edi */
    PUSH32(esp, edi); /* 0x11019022: push edi */
    RECOMP_CALL(sub_1103B33A); /* 0x11019023: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x11019028u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11019013(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11019013u);

    goto L_11019013;
L_11018FB8:
    eax = MEM32(esi); /* 0x11018FB8: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x11018FBA: push edi */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x11018FBB: push dword ptr [ebp - 0x18] */
    ecx = MEM32(eax + 0x4); /* 0x11018FBE: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11018FC1: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x11018FC3: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x11018FC8: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11018FCA: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x11018FCE: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11018FD1: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x11018FD5: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11018FDE; /* 0x11018FD7: je 0x11018fde */
L_11018FD9:
    eax = MEM32(ecx); /* 0x11018FD9: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x11018FDB: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_11018FDE:
    eax = esi; /* 0x11018FDE: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11018FE0: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11018FE5: ret 4 */
L_11019013:
    esi = MEM32(ebp + (-0x14)); /* 0x11019013: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11019016: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x11019018: mov dword ptr [ebp - 4], 1 */
    RECOMP_BACKEDGE();
    goto L_11018FB8; /* 0x1101901F: jmp 0x11018fb8 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11019029(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11019029u);
    RECOMP_EH_ENTER();

L_11019029:
    PUSH32(esp, 0x28u); /* 0x11019029: push 0x28 */
    eax = 0x1103D7A0u; /* 0x1101902B: mov eax, 0x1103d7a0 */
    RECOMP_CALL(sub_1103B3DB); /* 0x11019030: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x11019035: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x11019037: mov dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1101903A: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x24)) = esi; /* 0x1101903C: mov dword ptr [ebp - 0x24], esi */
    MEM32(ebp + (-0x18)) = edi; /* 0x1101903F: mov dword ptr [ebp - 0x18], edi */
    eax = MEM32(esi); /* 0x11019042: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x11019044: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11019047: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x1101904B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11019054; /* 0x1101904D: je 0x11019054 */
L_1101904F:
    eax = MEM32(ecx); /* 0x1101904F: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x11019051: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_11019054:
    PUSH32(esp, edi); /* 0x11019054: push edi */
    ecx = esi; /* 0x11019055: mov ecx, esi */
    MEM32(ebp + (-0x4)) = edi; /* 0x11019057: mov dword ptr [ebp - 4], edi */
    RECOMP_CALL(sub_11010989); /* 0x1101905A: call 0x11010989 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x20)) = (uint8_t)(LO8(eax)); /* 0x1101905F: mov byte ptr [ebp - 0x20], al */
    MEM32(ebp + (-0x4)) = 1; /* 0x11019062: mov dword ptr [ebp - 4], 1 */
    /* test LO8(eax), LO8(eax) */ /* 0x11019069: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_110190CD; /* 0x1101906B: je 0x110190cd */
L_1101906D:
    eax = ebp + (-0x1C); /* 0x1101906D: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x11019070: push eax */
    eax = MEM32(esi); /* 0x11019071: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x11019073: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11019076: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1100F94A); /* 0x11019078: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1101907D: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x1101907E: mov byte ptr [ebp - 4], 2 */
    RECOMP_CALL(sub_1101586F); /* 0x11019082: call 0x1101586f */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11019087: pop ecx */
    ecx = ebp + (-0x1C); /* 0x11019088: lea ecx, [ebp - 0x1c] */
    ebx = eax; /* 0x1101908B: mov ebx, eax */
    RECOMP_CALL(sub_1100E431); /* 0x1101908D: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11019092: push dword ptr [ebp + 8] */
    ecx = MEM32(esi); /* 0x11019095: mov ecx, dword ptr [esi] */
    edx = ebp + (-0x18); /* 0x11019097: lea edx, [ebp - 0x18] */
    eax = MEM32(ebx); /* 0x1101909A: mov eax, dword ptr [ebx] */
    PUSH32(esp, edx); /* 0x1101909C: push edx */
    MEM8(ebp + (-0x28)) = (uint8_t)(1); /* 0x1101909D: mov byte ptr [ebp - 0x28], 1 */
    ecx = MEM32(ecx + 0x4); /* 0x110190A1: mov ecx, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x110190A4: add ecx, esi */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x110190A6: mov byte ptr [ebp - 4], 3 */
    PUSH32(esp, ecx); /* 0x110190AA: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x110190AB: push dword ptr [ebp - 0x28] */
    /* cmp MEM32(ecx + 0x38), 0 */ /* 0x110190AE: cmp dword ptr [ecx + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x110190B2: push edi */
    MEM8(ebp + (-0x30)) = (uint8_t)((CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x110190B3: sete byte ptr [ebp - 0x30] */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x110190B7: push dword ptr [ebp - 0x30] */
    PUSH32(esp, MEM32(ecx + 0x38)); /* 0x110190BA: push dword ptr [ecx + 0x38] */
    ecx = ebp + (-0x34); /* 0x110190BD: lea ecx, [ebp - 0x34] */
    PUSH32(esp, ecx); /* 0x110190C0: push ecx */
    ecx = ebx; /* 0x110190C1: mov ecx, ebx */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x110190C3: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 1; /* 0x110190C6: mov dword ptr [ebp - 4], 1 */
L_110190CD:
    eax = MEM32(esi); /* 0x110190CD: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x110190CF: push edi */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x110190D0: push dword ptr [ebp - 0x18] */
    ecx = MEM32(eax + 0x4); /* 0x110190D3: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x110190D6: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x110190D8: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x110190DD: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x110190DF: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x110190E3: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x110190E6: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x110190EA: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110190F3; /* 0x110190EC: je 0x110190f3 */
L_110190EE:
    eax = MEM32(ecx); /* 0x110190EE: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x110190F0: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_110190F3:
    eax = esi; /* 0x110190F3: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x110190F5: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x110190FA: ret 4 */
L_11019128:
    esi = MEM32(ebp + (-0x14)); /* 0x11019128: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1101912B: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x1101912D: mov dword ptr [ebp - 4], 1 */
    RECOMP_BACKEDGE();
    goto L_110190CD; /* 0x11019134: jmp 0x110190cd */
    { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x11019128u: goto L_11019128;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_110190FD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110190FDu);

L_110190FD:
    ecx = MEM32(ebp + (-0x14)); /* 0x110190FD: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11019100: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x11019102: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x11019104: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x11019107: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x11019109: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101910C: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), edi */ /* 0x1101910F: cmp dword ptr [edx + 0x38], edi */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11019117; /* 0x11019112: jne 0x11019117 */
L_11019114:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11019114: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11019117:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x11019117: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x1101911A: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x1101911D: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11019136; /* 0x11019120: jne 0x11019136 */
L_11019122:
    eax = 0x11019128u; /* 0x11019122: mov eax, 0x11019128 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11019127: ret  */
L_11019136:
    PUSH32(esp, edi); /* 0x11019136: push edi */
    PUSH32(esp, edi); /* 0x11019137: push edi */
    RECOMP_CALL(sub_1103B33A); /* 0x11019138: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1101913Du, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11019128(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11019128u);

    goto L_11019128;
L_110190CD:
    eax = MEM32(esi); /* 0x110190CD: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x110190CF: push edi */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x110190D0: push dword ptr [ebp - 0x18] */
    ecx = MEM32(eax + 0x4); /* 0x110190D3: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x110190D6: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x110190D8: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x110190DD: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x110190DF: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x110190E3: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x110190E6: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x110190EA: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110190F3; /* 0x110190EC: je 0x110190f3 */
L_110190EE:
    eax = MEM32(ecx); /* 0x110190EE: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x110190F0: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_110190F3:
    eax = esi; /* 0x110190F3: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x110190F5: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x110190FA: ret 4 */
L_11019128:
    esi = MEM32(ebp + (-0x14)); /* 0x11019128: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1101912B: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x1101912D: mov dword ptr [ebp - 4], 1 */
    RECOMP_BACKEDGE();
    goto L_110190CD; /* 0x11019134: jmp 0x110190cd */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1101913E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101913Eu);
    RECOMP_EH_ENTER();

L_1101913E:
    PUSH32(esp, 0x28u); /* 0x1101913E: push 0x28 */
    eax = 0x1103D7D3u; /* 0x11019140: mov eax, 0x1103d7d3 */
    RECOMP_CALL(sub_1103B3DB); /* 0x11019145: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1101914A: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x1101914C: mov dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1101914F: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x24)) = esi; /* 0x11019151: mov dword ptr [ebp - 0x24], esi */
    MEM32(ebp + (-0x18)) = edi; /* 0x11019154: mov dword ptr [ebp - 0x18], edi */
    eax = MEM32(esi); /* 0x11019157: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x11019159: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1101915C: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x11019160: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11019169; /* 0x11019162: je 0x11019169 */
L_11019164:
    eax = MEM32(ecx); /* 0x11019164: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x11019166: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_11019169:
    PUSH32(esp, edi); /* 0x11019169: push edi */
    ecx = esi; /* 0x1101916A: mov ecx, esi */
    MEM32(ebp + (-0x4)) = edi; /* 0x1101916C: mov dword ptr [ebp - 4], edi */
    RECOMP_CALL(sub_11010989); /* 0x1101916F: call 0x11010989 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x20)) = (uint8_t)(LO8(eax)); /* 0x11019174: mov byte ptr [ebp - 0x20], al */
    MEM32(ebp + (-0x4)) = 1; /* 0x11019177: mov dword ptr [ebp - 4], 1 */
    /* test LO8(eax), LO8(eax) */ /* 0x1101917E: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_110191E2; /* 0x11019180: je 0x110191e2 */
L_11019182:
    eax = ebp + (-0x1C); /* 0x11019182: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x11019185: push eax */
    eax = MEM32(esi); /* 0x11019186: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x11019188: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101918B: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1100F94A); /* 0x1101918D: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x11019192: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x11019193: mov byte ptr [ebp - 4], 2 */
    RECOMP_CALL(sub_1101586F); /* 0x11019197: call 0x1101586f */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101919C: pop ecx */
    ecx = ebp + (-0x1C); /* 0x1101919D: lea ecx, [ebp - 0x1c] */
    ebx = eax; /* 0x110191A0: mov ebx, eax */
    RECOMP_CALL(sub_1100E431); /* 0x110191A2: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x110191A7: push dword ptr [ebp + 8] */
    ecx = MEM32(esi); /* 0x110191AA: mov ecx, dword ptr [esi] */
    edx = ebp + (-0x18); /* 0x110191AC: lea edx, [ebp - 0x18] */
    eax = MEM32(ebx); /* 0x110191AF: mov eax, dword ptr [ebx] */
    PUSH32(esp, edx); /* 0x110191B1: push edx */
    MEM8(ebp + (-0x28)) = (uint8_t)(1); /* 0x110191B2: mov byte ptr [ebp - 0x28], 1 */
    ecx = MEM32(ecx + 0x4); /* 0x110191B6: mov ecx, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x110191B9: add ecx, esi */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x110191BB: mov byte ptr [ebp - 4], 3 */
    PUSH32(esp, ecx); /* 0x110191BF: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x110191C0: push dword ptr [ebp - 0x28] */
    /* cmp MEM32(ecx + 0x38), 0 */ /* 0x110191C3: cmp dword ptr [ecx + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x110191C7: push edi */
    MEM8(ebp + (-0x30)) = (uint8_t)((CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x110191C8: sete byte ptr [ebp - 0x30] */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x110191CC: push dword ptr [ebp - 0x30] */
    PUSH32(esp, MEM32(ecx + 0x38)); /* 0x110191CF: push dword ptr [ecx + 0x38] */
    ecx = ebp + (-0x34); /* 0x110191D2: lea ecx, [ebp - 0x34] */
    PUSH32(esp, ecx); /* 0x110191D5: push ecx */
    ecx = ebx; /* 0x110191D6: mov ecx, ebx */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x110191D8: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 1; /* 0x110191DB: mov dword ptr [ebp - 4], 1 */
L_110191E2:
    eax = MEM32(esi); /* 0x110191E2: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x110191E4: push edi */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x110191E5: push dword ptr [ebp - 0x18] */
    ecx = MEM32(eax + 0x4); /* 0x110191E8: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x110191EB: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x110191ED: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x110191F2: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x110191F4: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x110191F8: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x110191FB: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x110191FF: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11019208; /* 0x11019201: je 0x11019208 */
L_11019203:
    eax = MEM32(ecx); /* 0x11019203: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x11019205: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_11019208:
    eax = esi; /* 0x11019208: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101920A: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x1101920F: ret 4 */
L_1101923D:
    esi = MEM32(ebp + (-0x14)); /* 0x1101923D: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11019240: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x11019242: mov dword ptr [ebp - 4], 1 */
    RECOMP_BACKEDGE();
    goto L_110191E2; /* 0x11019249: jmp 0x110191e2 */
    { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x1101923Du: goto L_1101923D;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_11019212(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11019212u);

L_11019212:
    ecx = MEM32(ebp + (-0x14)); /* 0x11019212: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11019215: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x11019217: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x11019219: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1101921C: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x1101921E: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11019221: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), edi */ /* 0x11019224: cmp dword ptr [edx + 0x38], edi */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101922C; /* 0x11019227: jne 0x1101922c */
L_11019229:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11019229: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1101922C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x1101922C: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x1101922F: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x11019232: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1101924B; /* 0x11019235: jne 0x1101924b */
L_11019237:
    eax = 0x1101923Du; /* 0x11019237: mov eax, 0x1101923d */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101923C: ret  */
L_1101924B:
    PUSH32(esp, edi); /* 0x1101924B: push edi */
    PUSH32(esp, edi); /* 0x1101924C: push edi */
    RECOMP_CALL(sub_1103B33A); /* 0x1101924D: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x11019252u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1101923D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101923Du);

    goto L_1101923D;
L_110191E2:
    eax = MEM32(esi); /* 0x110191E2: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x110191E4: push edi */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x110191E5: push dword ptr [ebp - 0x18] */
    ecx = MEM32(eax + 0x4); /* 0x110191E8: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x110191EB: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x110191ED: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x110191F2: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x110191F4: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x110191F8: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x110191FB: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x110191FF: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11019208; /* 0x11019201: je 0x11019208 */
L_11019203:
    eax = MEM32(ecx); /* 0x11019203: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x11019205: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_11019208:
    eax = esi; /* 0x11019208: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101920A: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1101920F: ret 4 */
L_1101923D:
    esi = MEM32(ebp + (-0x14)); /* 0x1101923D: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11019240: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x11019242: mov dword ptr [ebp - 4], 1 */
    RECOMP_BACKEDGE();
    goto L_110191E2; /* 0x11019249: jmp 0x110191e2 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11019253(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11019253u);
    RECOMP_EH_ENTER();

L_11019253:
    PUSH32(esp, 0x28u); /* 0x11019253: push 0x28 */
    eax = 0x1103D806u; /* 0x11019255: mov eax, 0x1103d806 */
    RECOMP_CALL(sub_1103B3DB); /* 0x1101925A: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1101925F: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x11019261: mov dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11019264: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x24)) = esi; /* 0x11019266: mov dword ptr [ebp - 0x24], esi */
    MEM32(ebp + (-0x18)) = edi; /* 0x11019269: mov dword ptr [ebp - 0x18], edi */
    eax = MEM32(esi); /* 0x1101926C: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x1101926E: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11019271: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x11019275: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101927E; /* 0x11019277: je 0x1101927e */
L_11019279:
    eax = MEM32(ecx); /* 0x11019279: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1101927B: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_1101927E:
    PUSH32(esp, edi); /* 0x1101927E: push edi */
    ecx = esi; /* 0x1101927F: mov ecx, esi */
    MEM32(ebp + (-0x4)) = edi; /* 0x11019281: mov dword ptr [ebp - 4], edi */
    RECOMP_CALL(sub_11010989); /* 0x11019284: call 0x11010989 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x20)) = (uint8_t)(LO8(eax)); /* 0x11019289: mov byte ptr [ebp - 0x20], al */
    MEM32(ebp + (-0x4)) = 1; /* 0x1101928C: mov dword ptr [ebp - 4], 1 */
    /* test LO8(eax), LO8(eax) */ /* 0x11019293: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_110192F7; /* 0x11019295: je 0x110192f7 */
L_11019297:
    eax = ebp + (-0x1C); /* 0x11019297: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1101929A: push eax */
    eax = MEM32(esi); /* 0x1101929B: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x1101929D: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x110192A0: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1100F94A); /* 0x110192A2: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x110192A7: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x110192A8: mov byte ptr [ebp - 4], 2 */
    RECOMP_CALL(sub_1101586F); /* 0x110192AC: call 0x1101586f */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110192B1: pop ecx */
    ecx = ebp + (-0x1C); /* 0x110192B2: lea ecx, [ebp - 0x1c] */
    ebx = eax; /* 0x110192B5: mov ebx, eax */
    RECOMP_CALL(sub_1100E431); /* 0x110192B7: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x110192BC: push dword ptr [ebp + 8] */
    ecx = MEM32(esi); /* 0x110192BF: mov ecx, dword ptr [esi] */
    edx = ebp + (-0x18); /* 0x110192C1: lea edx, [ebp - 0x18] */
    eax = MEM32(ebx); /* 0x110192C4: mov eax, dword ptr [ebx] */
    PUSH32(esp, edx); /* 0x110192C6: push edx */
    MEM8(ebp + (-0x28)) = (uint8_t)(1); /* 0x110192C7: mov byte ptr [ebp - 0x28], 1 */
    ecx = MEM32(ecx + 0x4); /* 0x110192CB: mov ecx, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x110192CE: add ecx, esi */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x110192D0: mov byte ptr [ebp - 4], 3 */
    PUSH32(esp, ecx); /* 0x110192D4: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x110192D5: push dword ptr [ebp - 0x28] */
    /* cmp MEM32(ecx + 0x38), 0 */ /* 0x110192D8: cmp dword ptr [ecx + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x110192DC: push edi */
    MEM8(ebp + (-0x30)) = (uint8_t)((CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x110192DD: sete byte ptr [ebp - 0x30] */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x110192E1: push dword ptr [ebp - 0x30] */
    PUSH32(esp, MEM32(ecx + 0x38)); /* 0x110192E4: push dword ptr [ecx + 0x38] */
    ecx = ebp + (-0x34); /* 0x110192E7: lea ecx, [ebp - 0x34] */
    PUSH32(esp, ecx); /* 0x110192EA: push ecx */
    ecx = ebx; /* 0x110192EB: mov ecx, ebx */
    RECOMP_ICALL(MEM32(eax + 0x20)); /* 0x110192ED: call dword ptr [eax + 0x20] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 1; /* 0x110192F0: mov dword ptr [ebp - 4], 1 */
L_110192F7:
    eax = MEM32(esi); /* 0x110192F7: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x110192F9: push edi */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x110192FA: push dword ptr [ebp - 0x18] */
    ecx = MEM32(eax + 0x4); /* 0x110192FD: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11019300: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x11019302: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x11019307: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11019309: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x1101930D: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11019310: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x11019314: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101931D; /* 0x11019316: je 0x1101931d */
L_11019318:
    eax = MEM32(ecx); /* 0x11019318: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1101931A: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_1101931D:
    eax = esi; /* 0x1101931D: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101931F: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x11019324: ret 4 */
L_11019352:
    esi = MEM32(ebp + (-0x14)); /* 0x11019352: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11019355: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x11019357: mov dword ptr [ebp - 4], 1 */
    RECOMP_BACKEDGE();
    goto L_110192F7; /* 0x1101935E: jmp 0x110192f7 */
    { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x11019352u: goto L_11019352;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_11019327(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11019327u);

L_11019327:
    ecx = MEM32(ebp + (-0x14)); /* 0x11019327: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1101932A: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x1101932C: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x1101932E: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x11019331: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x11019333: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11019336: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), edi */ /* 0x11019339: cmp dword ptr [edx + 0x38], edi */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11019341; /* 0x1101933C: jne 0x11019341 */
L_1101933E:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101933E: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11019341:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x11019341: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x11019344: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x11019347: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11019360; /* 0x1101934A: jne 0x11019360 */
L_1101934C:
    eax = 0x11019352u; /* 0x1101934C: mov eax, 0x11019352 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11019351: ret  */
L_11019360:
    PUSH32(esp, edi); /* 0x11019360: push edi */
    PUSH32(esp, edi); /* 0x11019361: push edi */
    RECOMP_CALL(sub_1103B33A); /* 0x11019362: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x11019367u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11019352(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11019352u);

    goto L_11019352;
L_110192F7:
    eax = MEM32(esi); /* 0x110192F7: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x110192F9: push edi */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x110192FA: push dword ptr [ebp - 0x18] */
    ecx = MEM32(eax + 0x4); /* 0x110192FD: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11019300: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x11019302: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x11019307: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11019309: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x1101930D: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11019310: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x11019314: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101931D; /* 0x11019316: je 0x1101931d */
L_11019318:
    eax = MEM32(ecx); /* 0x11019318: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1101931A: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_1101931D:
    eax = esi; /* 0x1101931D: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101931F: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11019324: ret 4 */
L_11019352:
    esi = MEM32(ebp + (-0x14)); /* 0x11019352: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11019355: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x11019357: mov dword ptr [ebp - 4], 1 */
    RECOMP_BACKEDGE();
    goto L_110192F7; /* 0x1101935E: jmp 0x110192f7 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11019368(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11019368u);
    RECOMP_EH_ENTER();

L_11019368:
    PUSH32(esp, 0x28u); /* 0x11019368: push 0x28 */
    eax = 0x1103D839u; /* 0x1101936A: mov eax, 0x1103d839 */
    RECOMP_CALL(sub_1103B3DB); /* 0x1101936F: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x11019374: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x11019376: mov dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11019379: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x24)) = esi; /* 0x1101937B: mov dword ptr [ebp - 0x24], esi */
    MEM32(ebp + (-0x18)) = edi; /* 0x1101937E: mov dword ptr [ebp - 0x18], edi */
    eax = MEM32(esi); /* 0x11019381: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x11019383: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11019386: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x1101938A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11019393; /* 0x1101938C: je 0x11019393 */
L_1101938E:
    eax = MEM32(ecx); /* 0x1101938E: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x11019390: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_11019393:
    PUSH32(esp, edi); /* 0x11019393: push edi */
    ecx = esi; /* 0x11019394: mov ecx, esi */
    MEM32(ebp + (-0x4)) = edi; /* 0x11019396: mov dword ptr [ebp - 4], edi */
    RECOMP_CALL(sub_11010989); /* 0x11019399: call 0x11010989 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x20)) = (uint8_t)(LO8(eax)); /* 0x1101939E: mov byte ptr [ebp - 0x20], al */
    MEM32(ebp + (-0x4)) = 1; /* 0x110193A1: mov dword ptr [ebp - 4], 1 */
    /* test LO8(eax), LO8(eax) */ /* 0x110193A8: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101940C; /* 0x110193AA: je 0x1101940c */
L_110193AC:
    eax = ebp + (-0x1C); /* 0x110193AC: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x110193AF: push eax */
    eax = MEM32(esi); /* 0x110193B0: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x110193B2: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x110193B5: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1100F94A); /* 0x110193B7: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x110193BC: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x110193BD: mov byte ptr [ebp - 4], 2 */
    RECOMP_CALL(sub_1101586F); /* 0x110193C1: call 0x1101586f */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110193C6: pop ecx */
    ecx = ebp + (-0x1C); /* 0x110193C7: lea ecx, [ebp - 0x1c] */
    ebx = eax; /* 0x110193CA: mov ebx, eax */
    RECOMP_CALL(sub_1100E431); /* 0x110193CC: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x110193D1: push dword ptr [ebp + 8] */
    ecx = MEM32(esi); /* 0x110193D4: mov ecx, dword ptr [esi] */
    edx = ebp + (-0x18); /* 0x110193D6: lea edx, [ebp - 0x18] */
    eax = MEM32(ebx); /* 0x110193D9: mov eax, dword ptr [ebx] */
    PUSH32(esp, edx); /* 0x110193DB: push edx */
    MEM8(ebp + (-0x28)) = (uint8_t)(1); /* 0x110193DC: mov byte ptr [ebp - 0x28], 1 */
    ecx = MEM32(ecx + 0x4); /* 0x110193E0: mov ecx, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x110193E3: add ecx, esi */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x110193E5: mov byte ptr [ebp - 4], 3 */
    PUSH32(esp, ecx); /* 0x110193E9: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x110193EA: push dword ptr [ebp - 0x28] */
    /* cmp MEM32(ecx + 0x38), 0 */ /* 0x110193ED: cmp dword ptr [ecx + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x110193F1: push edi */
    MEM8(ebp + (-0x30)) = (uint8_t)((CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x110193F2: sete byte ptr [ebp - 0x30] */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x110193F6: push dword ptr [ebp - 0x30] */
    PUSH32(esp, MEM32(ecx + 0x38)); /* 0x110193F9: push dword ptr [ecx + 0x38] */
    ecx = ebp + (-0x34); /* 0x110193FC: lea ecx, [ebp - 0x34] */
    PUSH32(esp, ecx); /* 0x110193FF: push ecx */
    ecx = ebx; /* 0x11019400: mov ecx, ebx */
    RECOMP_ICALL(MEM32(eax + 0x1C)); /* 0x11019402: call dword ptr [eax + 0x1c] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 1; /* 0x11019405: mov dword ptr [ebp - 4], 1 */
L_1101940C:
    eax = MEM32(esi); /* 0x1101940C: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x1101940E: push edi */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x1101940F: push dword ptr [ebp - 0x18] */
    ecx = MEM32(eax + 0x4); /* 0x11019412: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11019415: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x11019417: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x1101941C: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1101941E: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x11019422: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11019425: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x11019429: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11019432; /* 0x1101942B: je 0x11019432 */
L_1101942D:
    eax = MEM32(ecx); /* 0x1101942D: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1101942F: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_11019432:
    eax = esi; /* 0x11019432: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11019434: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x11019439: ret 4 */
L_11019467:
    esi = MEM32(ebp + (-0x14)); /* 0x11019467: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1101946A: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x1101946C: mov dword ptr [ebp - 4], 1 */
    RECOMP_BACKEDGE();
    goto L_1101940C; /* 0x11019473: jmp 0x1101940c */
    { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x11019467u: goto L_11019467;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_1101943C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101943Cu);

L_1101943C:
    ecx = MEM32(ebp + (-0x14)); /* 0x1101943C: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1101943F: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x11019441: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x11019443: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x11019446: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x11019448: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101944B: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), edi */ /* 0x1101944E: cmp dword ptr [edx + 0x38], edi */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11019456; /* 0x11019451: jne 0x11019456 */
L_11019453:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11019453: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11019456:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x11019456: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x11019459: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x1101945C: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11019475; /* 0x1101945F: jne 0x11019475 */
L_11019461:
    eax = 0x11019467u; /* 0x11019461: mov eax, 0x11019467 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11019466: ret  */
L_11019475:
    PUSH32(esp, edi); /* 0x11019475: push edi */
    PUSH32(esp, edi); /* 0x11019476: push edi */
    RECOMP_CALL(sub_1103B33A); /* 0x11019477: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1101947Cu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11019467(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11019467u);

    goto L_11019467;
L_1101940C:
    eax = MEM32(esi); /* 0x1101940C: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x1101940E: push edi */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x1101940F: push dword ptr [ebp - 0x18] */
    ecx = MEM32(eax + 0x4); /* 0x11019412: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11019415: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x11019417: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x1101941C: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1101941E: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x11019422: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11019425: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x11019429: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11019432; /* 0x1101942B: je 0x11019432 */
L_1101942D:
    eax = MEM32(ecx); /* 0x1101942D: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1101942F: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_11019432:
    eax = esi; /* 0x11019432: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11019434: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11019439: ret 4 */
L_11019467:
    esi = MEM32(ebp + (-0x14)); /* 0x11019467: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1101946A: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x1101946C: mov dword ptr [ebp - 4], 1 */
    RECOMP_BACKEDGE();
    goto L_1101940C; /* 0x11019473: jmp 0x1101940c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1101947D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101947Du);
    RECOMP_EH_ENTER();

L_1101947D:
    PUSH32(esp, 0x28u); /* 0x1101947D: push 0x28 */
    eax = 0x1103D86Cu; /* 0x1101947F: mov eax, 0x1103d86c */
    RECOMP_CALL(sub_1103B3DB); /* 0x11019484: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x11019489: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x1101948B: mov dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1101948E: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x24)) = esi; /* 0x11019490: mov dword ptr [ebp - 0x24], esi */
    MEM32(ebp + (-0x18)) = edi; /* 0x11019493: mov dword ptr [ebp - 0x18], edi */
    eax = MEM32(esi); /* 0x11019496: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x11019498: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1101949B: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x1101949F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110194A8; /* 0x110194A1: je 0x110194a8 */
L_110194A3:
    eax = MEM32(ecx); /* 0x110194A3: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x110194A5: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_110194A8:
    PUSH32(esp, edi); /* 0x110194A8: push edi */
    ecx = esi; /* 0x110194A9: mov ecx, esi */
    MEM32(ebp + (-0x4)) = edi; /* 0x110194AB: mov dword ptr [ebp - 4], edi */
    RECOMP_CALL(sub_11010989); /* 0x110194AE: call 0x11010989 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x20)) = (uint8_t)(LO8(eax)); /* 0x110194B3: mov byte ptr [ebp - 0x20], al */
    MEM32(ebp + (-0x4)) = 1; /* 0x110194B6: mov dword ptr [ebp - 4], 1 */
    /* test LO8(eax), LO8(eax) */ /* 0x110194BD: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11019521; /* 0x110194BF: je 0x11019521 */
L_110194C1:
    eax = ebp + (-0x1C); /* 0x110194C1: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x110194C4: push eax */
    eax = MEM32(esi); /* 0x110194C5: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x110194C7: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x110194CA: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1100F94A); /* 0x110194CC: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x110194D1: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x110194D2: mov byte ptr [ebp - 4], 2 */
    RECOMP_CALL(sub_1101586F); /* 0x110194D6: call 0x1101586f */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110194DB: pop ecx */
    ecx = ebp + (-0x1C); /* 0x110194DC: lea ecx, [ebp - 0x1c] */
    ebx = eax; /* 0x110194DF: mov ebx, eax */
    RECOMP_CALL(sub_1100E431); /* 0x110194E1: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x110194E6: push dword ptr [ebp + 8] */
    ecx = MEM32(esi); /* 0x110194E9: mov ecx, dword ptr [esi] */
    edx = ebp + (-0x18); /* 0x110194EB: lea edx, [ebp - 0x18] */
    eax = MEM32(ebx); /* 0x110194EE: mov eax, dword ptr [ebx] */
    PUSH32(esp, edx); /* 0x110194F0: push edx */
    MEM8(ebp + (-0x28)) = (uint8_t)(1); /* 0x110194F1: mov byte ptr [ebp - 0x28], 1 */
    ecx = MEM32(ecx + 0x4); /* 0x110194F5: mov ecx, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x110194F8: add ecx, esi */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x110194FA: mov byte ptr [ebp - 4], 3 */
    PUSH32(esp, ecx); /* 0x110194FE: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x110194FF: push dword ptr [ebp - 0x28] */
    /* cmp MEM32(ecx + 0x38), 0 */ /* 0x11019502: cmp dword ptr [ecx + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x11019506: push edi */
    MEM8(ebp + (-0x30)) = (uint8_t)((CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x11019507: sete byte ptr [ebp - 0x30] */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x1101950B: push dword ptr [ebp - 0x30] */
    PUSH32(esp, MEM32(ecx + 0x38)); /* 0x1101950E: push dword ptr [ecx + 0x38] */
    ecx = ebp + (-0x34); /* 0x11019511: lea ecx, [ebp - 0x34] */
    PUSH32(esp, ecx); /* 0x11019514: push ecx */
    ecx = ebx; /* 0x11019515: mov ecx, ebx */
    RECOMP_ICALL(MEM32(eax + 0x34)); /* 0x11019517: call dword ptr [eax + 0x34] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 1; /* 0x1101951A: mov dword ptr [ebp - 4], 1 */
L_11019521:
    eax = MEM32(esi); /* 0x11019521: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x11019523: push edi */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x11019524: push dword ptr [ebp - 0x18] */
    ecx = MEM32(eax + 0x4); /* 0x11019527: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101952A: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1101952C: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x11019531: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11019533: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x11019537: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1101953A: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x1101953E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11019547; /* 0x11019540: je 0x11019547 */
L_11019542:
    eax = MEM32(ecx); /* 0x11019542: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x11019544: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_11019547:
    eax = esi; /* 0x11019547: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11019549: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x1101954E: ret 4 */
L_1101957C:
    esi = MEM32(ebp + (-0x14)); /* 0x1101957C: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1101957F: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x11019581: mov dword ptr [ebp - 4], 1 */
    RECOMP_BACKEDGE();
    goto L_11019521; /* 0x11019588: jmp 0x11019521 */
    { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x1101957Cu: goto L_1101957C;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_11019551(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11019551u);

L_11019551:
    ecx = MEM32(ebp + (-0x14)); /* 0x11019551: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11019554: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x11019556: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x11019558: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1101955B: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x1101955D: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11019560: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), edi */ /* 0x11019563: cmp dword ptr [edx + 0x38], edi */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101956B; /* 0x11019566: jne 0x1101956b */
L_11019568:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11019568: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1101956B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x1101956B: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x1101956E: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x11019571: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1101958A; /* 0x11019574: jne 0x1101958a */
L_11019576:
    eax = 0x1101957Cu; /* 0x11019576: mov eax, 0x1101957c */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101957B: ret  */
L_1101958A:
    PUSH32(esp, edi); /* 0x1101958A: push edi */
    PUSH32(esp, edi); /* 0x1101958B: push edi */
    RECOMP_CALL(sub_1103B33A); /* 0x1101958C: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x11019591u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1101957C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101957Cu);

    goto L_1101957C;
L_11019521:
    eax = MEM32(esi); /* 0x11019521: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x11019523: push edi */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x11019524: push dword ptr [ebp - 0x18] */
    ecx = MEM32(eax + 0x4); /* 0x11019527: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101952A: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1101952C: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x11019531: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11019533: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x11019537: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1101953A: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x1101953E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11019547; /* 0x11019540: je 0x11019547 */
L_11019542:
    eax = MEM32(ecx); /* 0x11019542: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x11019544: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_11019547:
    eax = esi; /* 0x11019547: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11019549: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1101954E: ret 4 */
L_1101957C:
    esi = MEM32(ebp + (-0x14)); /* 0x1101957C: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1101957F: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x11019581: mov dword ptr [ebp - 4], 1 */
    RECOMP_BACKEDGE();
    goto L_11019521; /* 0x11019588: jmp 0x11019521 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11019592(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11019592u);
    RECOMP_EH_ENTER();

L_11019592:
    PUSH32(esp, 0x18u); /* 0x11019592: push 0x18 */
    eax = 0x1103D897u; /* 0x11019594: mov eax, 0x1103d897 */
    RECOMP_CALL(sub_1103B3DB); /* 0x11019599: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1101959E: mov esi, ecx */
    MEM32(ebp + (-0x18)) = esi; /* 0x110195A0: mov dword ptr [ebp - 0x18], esi */
    eax = MEM32(esi); /* 0x110195A3: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x110195A5: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = edi; /* 0x110195A7: mov dword ptr [ebp - 0x1c], edi */
    MEM8(ebp + (-0x11)) = (uint8_t)(0); /* 0x110195AA: mov byte ptr [ebp - 0x11], 0 */
    MEM32(ebp + (-0x24)) = esi; /* 0x110195AE: mov dword ptr [ebp - 0x24], esi */
    eax = MEM32(eax + 0x4); /* 0x110195B1: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x110195B4: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x110195B8: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110195C1; /* 0x110195BA: je 0x110195c1 */
L_110195BC:
    eax = MEM32(ecx); /* 0x110195BC: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x110195BE: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_110195C1:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x110195C1: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x110195C5: mov ecx, esi */
    PUSH32(esp, 0); /* 0x110195C7: push 0 */
    RECOMP_CALL(sub_11010989); /* 0x110195C9: call 0x11010989 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x20)) = (uint8_t)(LO8(eax)); /* 0x110195CE: mov byte ptr [ebp - 0x20], al */
    MEM32(ebp + (-0x4)) = 1; /* 0x110195D1: mov dword ptr [ebp - 4], 1 */
    /* test LO8(eax), LO8(eax) */ /* 0x110195D8: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11019654; /* 0x110195DA: je 0x11019654 */
L_110195DC:
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x110195DC: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11019654; /* 0x110195E0: je 0x11019654 */
L_110195E2:
    eax = MEM32(esi); /* 0x110195E2: mov eax, dword ptr [esi] */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x110195E4: mov byte ptr [ebp - 4], 2 */
    eax = MEM32(eax + 0x4); /* 0x110195E8: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x110195EB: mov ecx, dword ptr [eax + esi + 0x38] */
    RECOMP_CALL(sub_11010398); /* 0x110195EF: call 0x11010398 */
    RECOMP_FLAGS_IN();
L_110195F4:
    ecx = 0xFFFFu; /* 0x110195F4: mov ecx, 0xffff */
    eax = (uint32_t)LO16(eax); /* 0x110195F9: movzx eax, ax */
    /* cmp LO16(ecx), LO16(eax) */ /* 0x110195FC: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11019606; /* 0x110195FF: jne 0x11019606 */
L_11019601:
    _flag_a = (uint32_t)((edi | 1)); _flag_b = (uint32_t)((edi | 1));
    edi = edi | 1; /* 0x11019601: or edi, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_11019647; /* 0x11019604: jmp 0x11019647 */
L_11019606:
    ecx = MEM32(ebp + 0x8); /* 0x11019606: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x11019609: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x1101960A: mov byte ptr [ebp - 4], 3 */
    RECOMP_CALL(sub_1102B3DC); /* 0x1101960E: call 0x1102b3dc */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO16(eax); /* 0x11019613: movzx eax, ax */
    ecx = 0xFFFFu; /* 0x11019616: mov ecx, 0xffff */
    /* cmp LO16(ecx), LO16(eax) */ /* 0x1101961B: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11019647; /* 0x1101961E: je 0x11019647 */
L_11019620:
    eax = MEM32(esi); /* 0x11019620: mov eax, dword ptr [esi] */
    MEM32(ebp + (-0x4)) = 2; /* 0x11019622: mov dword ptr [ebp - 4], 2 */
    MEM8(ebp + (-0x11)) = (uint8_t)(1); /* 0x11019629: mov byte ptr [ebp - 0x11], 1 */
    eax = MEM32(eax + 0x4); /* 0x1101962D: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11019630: mov ecx, dword ptr [eax + esi + 0x38] */
    RECOMP_CALL(sub_110103BB); /* 0x11019634: call 0x110103bb */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_110195F4; /* 0x11019639: jmp 0x110195f4 */
L_11019641:
    esi = MEM32(ebp + (-0x18)); /* 0x11019641: mov esi, dword ptr [ebp - 0x18] */
    edi = MEM32(ebp + (-0x1C)); /* 0x11019644: mov edi, dword ptr [ebp - 0x1c] */
L_11019647:
    /* cmp MEM8(ebp + (-0x11)), 0 */ /* 0x11019647: cmp byte ptr [ebp - 0x11], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x11))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(ebp + (-0x4)) = 1; /* 0x1101964B: mov dword ptr [ebp - 4], 1 */
    if (CMP_NE(_flag_a, _flag_b)) goto L_11019657; /* 0x11019652: jne 0x11019657 */
L_11019654:
    _flag_a = (uint32_t)((edi | 2)); _flag_b = (uint32_t)((edi | 2));
    edi = edi | 2; /* 0x11019654: or edi, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11019657:
    eax = MEM32(esi); /* 0x11019657: mov eax, dword ptr [esi] */
    PUSH32(esp, 0); /* 0x11019659: push 0 */
    PUSH32(esp, edi); /* 0x1101965B: push edi */
    ecx = MEM32(eax + 0x4); /* 0x1101965C: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101965F: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x11019661: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x24)); /* 0x11019666: mov ecx, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11019669: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x1101966D: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x4); /* 0x1101966F: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + ecx + 0x38); /* 0x11019672: mov ecx, dword ptr [eax + ecx + 0x38] */
    /* test ecx, ecx */ /* 0x11019676: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101967F; /* 0x11019678: je 0x1101967f */
L_1101967A:
    eax = MEM32(ecx); /* 0x1101967A: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1101967C: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_1101967F:
    eax = esi; /* 0x1101967F: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11019681: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x11019686: ret 4 */
  _ljump:
    switch (_itail_tgt) {
      case 0x11019641u: goto L_11019641;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_1101963B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101963Bu);

L_1101963B:
    eax = 0x11019641u; /* 0x1101963B: mov eax, 0x11019641 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11019640: ret  */
    RECOMP_REGS_OUT();
}

void sub_11019641(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11019641u);

L_11019641:
    esi = MEM32(ebp + (-0x18)); /* 0x11019641: mov esi, dword ptr [ebp - 0x18] */
    edi = MEM32(ebp + (-0x1C)); /* 0x11019644: mov edi, dword ptr [ebp - 0x1c] */
    /* cmp MEM8(ebp + (-0x11)), 0 */ /* 0x11019647: cmp byte ptr [ebp - 0x11], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x11))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(ebp + (-0x4)) = 1; /* 0x1101964B: mov dword ptr [ebp - 4], 1 */
    if (CMP_NE(_flag_a, _flag_b)) goto L_11019657; /* 0x11019652: jne 0x11019657 */
L_11019654:
    _flag_a = (uint32_t)((edi | 2)); _flag_b = (uint32_t)((edi | 2));
    edi = edi | 2; /* 0x11019654: or edi, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11019657:
    eax = MEM32(esi); /* 0x11019657: mov eax, dword ptr [esi] */
    PUSH32(esp, 0); /* 0x11019659: push 0 */
    PUSH32(esp, edi); /* 0x1101965B: push edi */
    ecx = MEM32(eax + 0x4); /* 0x1101965C: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101965F: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x11019661: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x24)); /* 0x11019666: mov ecx, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11019669: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x1101966D: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x4); /* 0x1101966F: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + ecx + 0x38); /* 0x11019672: mov ecx, dword ptr [eax + ecx + 0x38] */
    /* test ecx, ecx */ /* 0x11019676: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101967F; /* 0x11019678: je 0x1101967f */
L_1101967A:
    eax = MEM32(ecx); /* 0x1101967A: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1101967C: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_1101967F:
    eax = esi; /* 0x1101967F: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11019681: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11019686: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11019689(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11019689u);

L_11019689:
    ecx = MEM32(ebp + (-0x18)); /* 0x11019689: mov ecx, dword ptr [ebp - 0x18] */
    eax = MEM32(ecx); /* 0x1101968C: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x1101968E: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x11019691: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x11019693: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11019696: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), 0 */ /* 0x11019699: cmp dword ptr [edx + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_110196A2; /* 0x1101969D: jne 0x110196a2 */
L_1101969F:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101969F: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_110196A2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x110196A2: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x110196A5: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x110196A8: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110196B3; /* 0x110196AB: jne 0x110196b3 */
L_110196AD:
    eax = 0x11019641u; /* 0x110196AD: mov eax, 0x11019641 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110196B2: ret  */
L_110196B3:
    PUSH32(esp, 0); /* 0x110196B3: push 0 */
    PUSH32(esp, 0); /* 0x110196B5: push 0 */
    RECOMP_CALL(sub_1103B33A); /* 0x110196B7: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x110196BCu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_110196BD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110196BDu);
    RECOMP_EH_ENTER();

L_110196BD:
    PUSH32(esp, 0x2Cu); /* 0x110196BD: push 0x2c */
    eax = 0x1103D8CAu; /* 0x110196BF: mov eax, 0x1103d8ca */
    RECOMP_CALL(sub_1103B3DB); /* 0x110196C4: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x110196C9: mov esi, ecx */
    MEM32(ebp + (-0x18)) = esi; /* 0x110196CB: mov dword ptr [ebp - 0x18], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x110196CE: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x28)) = esi; /* 0x110196D0: mov dword ptr [ebp - 0x28], esi */
    MEM32(ebp + (-0x14)) = edi; /* 0x110196D3: mov dword ptr [ebp - 0x14], edi */
    eax = MEM32(esi); /* 0x110196D6: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x110196D8: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x110196DB: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x110196DF: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110196E8; /* 0x110196E1: je 0x110196e8 */
L_110196E3:
    eax = MEM32(ecx); /* 0x110196E3: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x110196E5: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_110196E8:
    PUSH32(esp, edi); /* 0x110196E8: push edi */
    ecx = esi; /* 0x110196E9: mov ecx, esi */
    MEM32(ebp + (-0x4)) = edi; /* 0x110196EB: mov dword ptr [ebp - 4], edi */
    RECOMP_CALL(sub_11010810); /* 0x110196EE: call 0x11010810 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x24)) = (uint8_t)(LO8(eax)); /* 0x110196F3: mov byte ptr [ebp - 0x24], al */
    MEM32(ebp + (-0x4)) = 1; /* 0x110196F6: mov dword ptr [ebp - 4], 1 */
    /* test LO8(eax), LO8(eax) */ /* 0x110196FD: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_110197CA; /* 0x110196FF: je 0x110197ca */
L_11019705:
    eax = ebp + (-0x20); /* 0x11019705: lea eax, [ebp - 0x20] */
    MEM32(ebp + (-0x1C)) = edi; /* 0x11019708: mov dword ptr [ebp - 0x1c], edi */
    PUSH32(esp, eax); /* 0x1101970B: push eax */
    eax = MEM32(esi); /* 0x1101970C: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x1101970E: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11019711: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1100F94A); /* 0x11019713: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x11019718: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x11019719: mov byte ptr [ebp - 4], 2 */
    RECOMP_CALL(sub_11015909); /* 0x1101971D: call 0x11015909 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11019722: pop ecx */
    ecx = ebp + (-0x20); /* 0x11019723: lea ecx, [ebp - 0x20] */
    ebx = eax; /* 0x11019726: mov ebx, eax */
    RECOMP_CALL(sub_1100E431); /* 0x11019728: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi); /* 0x1101972D: mov ecx, dword ptr [esi] */
    edx = ebp + (-0x1C); /* 0x1101972F: lea edx, [ebp - 0x1c] */
    eax = MEM32(ebx); /* 0x11019732: mov eax, dword ptr [ebx] */
    PUSH32(esp, edx); /* 0x11019734: push edx */
    edx = ebp + (-0x14); /* 0x11019735: lea edx, [ebp - 0x14] */
    MEM8(ebp + (-0x2C)) = (uint8_t)(1); /* 0x11019738: mov byte ptr [ebp - 0x2c], 1 */
    ecx = MEM32(ecx + 0x4); /* 0x1101973C: mov ecx, dword ptr [ecx + 4] */
    PUSH32(esp, edx); /* 0x1101973F: push edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11019740: add ecx, esi */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x11019742: mov byte ptr [ebp - 4], 3 */
    PUSH32(esp, ecx); /* 0x11019746: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x11019747: push dword ptr [ebp - 0x2c] */
    /* cmp MEM32(ecx + 0x38), 0 */ /* 0x1101974A: cmp dword ptr [ecx + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x1101974E: push edi */
    MEM8(ebp + (-0x34)) = (uint8_t)((CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1101974F: sete byte ptr [ebp - 0x34] */
    PUSH32(esp, MEM32(ebp + (-0x34))); /* 0x11019753: push dword ptr [ebp - 0x34] */
    PUSH32(esp, MEM32(ecx + 0x38)); /* 0x11019756: push dword ptr [ecx + 0x38] */
    ecx = ebp + (-0x38); /* 0x11019759: lea ecx, [ebp - 0x38] */
    PUSH32(esp, ecx); /* 0x1101975C: push ecx */
    ecx = ebx; /* 0x1101975D: mov ecx, ebx */
    RECOMP_ICALL(MEM32(eax + 0x28)); /* 0x1101975F: call dword ptr [eax + 0x28] */
    RECOMP_FLAGS_IN();
    goto L_11019794; /* 0x11019762: jmp 0x11019794 */
L_1101978F:
    esi = MEM32(ebp + (-0x18)); /* 0x1101978F: mov esi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11019792: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_11019794:
    ecx = MEM32(ebp + (-0x14)); /* 0x11019794: mov ecx, dword ptr [ebp - 0x14] */
    MEM32(ebp + (-0x4)) = 1; /* 0x11019797: mov dword ptr [ebp - 4], 1 */
    /* test LO8(ecx), 2 */ /* 0x1101979E: test cl, 2 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110197BB; /* 0x110197A1: jne 0x110197bb */
L_110197A3:
    edx = MEM32(ebp + (-0x1C)); /* 0x110197A3: mov edx, dword ptr [ebp - 0x1c] */
    eax = edx + 0x8000; /* 0x110197A6: lea eax, [edx + 0x8000] */
    /* cmp eax, 0xFFFFu */ /* 0x110197AC: cmp eax, 0xffff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_110197BB; /* 0x110197B1: ja 0x110197bb */
L_110197B3:
    eax = MEM32(ebp + 0x8); /* 0x110197B3: mov eax, dword ptr [ebp + 8] */
    MEM16(eax) = (uint16_t)(LO16(edx)); /* 0x110197B6: mov word ptr [eax], dx */
    goto L_110197CD; /* 0x110197B9: jmp 0x110197cd */
L_110197BB:
    _flag_a = (uint32_t)((ecx | 2)); _flag_b = (uint32_t)((ecx | 2));
    ecx = ecx | 2; /* 0x110197BB: or ecx, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = ecx; /* 0x110197BE: mov dword ptr [ebp - 0x14], ecx */
    goto L_110197CD; /* 0x110197C1: jmp 0x110197cd */
L_110197CA:
    ecx = MEM32(ebp + (-0x14)); /* 0x110197CA: mov ecx, dword ptr [ebp - 0x14] */
L_110197CD:
    eax = MEM32(esi); /* 0x110197CD: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x110197CF: push edi */
    PUSH32(esp, ecx); /* 0x110197D0: push ecx */
    ecx = MEM32(eax + 0x4); /* 0x110197D1: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x110197D4: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x110197D6: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x110197DB: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x110197DD: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x110197E1: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x110197E4: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x110197E8: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110197F1; /* 0x110197EA: je 0x110197f1 */
L_110197EC:
    eax = MEM32(ecx); /* 0x110197EC: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x110197EE: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_110197F1:
    eax = esi; /* 0x110197F1: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x110197F3: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x110197F8: ret 4 */
  _ljump:
    switch (_itail_tgt) {
      case 0x1101978Fu: goto L_1101978F;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_11019764(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11019764u);

L_11019764:
    ecx = MEM32(ebp + (-0x18)); /* 0x11019764: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11019767: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x11019769: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x1101976B: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1101976E: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x11019770: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11019773: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), edi */ /* 0x11019776: cmp dword ptr [edx + 0x38], edi */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101977E; /* 0x11019779: jne 0x1101977e */
L_1101977B:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101977B: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1101977E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x1101977E: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x11019781: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x11019784: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110197C3; /* 0x11019787: jne 0x110197c3 */
L_11019789:
    eax = 0x1101978Fu; /* 0x11019789: mov eax, 0x1101978f */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101978E: ret  */
L_110197C3:
    PUSH32(esp, edi); /* 0x110197C3: push edi */
    PUSH32(esp, edi); /* 0x110197C4: push edi */
    RECOMP_CALL(sub_1103B33A); /* 0x110197C5: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x14)); /* 0x110197CA: mov ecx, dword ptr [ebp - 0x14] */
    eax = MEM32(esi); /* 0x110197CD: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x110197CF: push edi */
    PUSH32(esp, ecx); /* 0x110197D0: push ecx */
    ecx = MEM32(eax + 0x4); /* 0x110197D1: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x110197D4: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x110197D6: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x110197DB: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x110197DD: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x110197E1: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x110197E4: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x110197E8: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110197F1; /* 0x110197EA: je 0x110197f1 */
L_110197EC:
    eax = MEM32(ecx); /* 0x110197EC: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x110197EE: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_110197F1:
    eax = esi; /* 0x110197F1: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x110197F3: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x110197F8: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1101978F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101978Fu);

L_1101978F:
    esi = MEM32(ebp + (-0x18)); /* 0x1101978F: mov esi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11019792: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x14)); /* 0x11019794: mov ecx, dword ptr [ebp - 0x14] */
    MEM32(ebp + (-0x4)) = 1; /* 0x11019797: mov dword ptr [ebp - 4], 1 */
    /* test LO8(ecx), 2 */ /* 0x1101979E: test cl, 2 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110197BB; /* 0x110197A1: jne 0x110197bb */
L_110197A3:
    edx = MEM32(ebp + (-0x1C)); /* 0x110197A3: mov edx, dword ptr [ebp - 0x1c] */
    eax = edx + 0x8000; /* 0x110197A6: lea eax, [edx + 0x8000] */
    /* cmp eax, 0xFFFFu */ /* 0x110197AC: cmp eax, 0xffff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_110197BB; /* 0x110197B1: ja 0x110197bb */
L_110197B3:
    eax = MEM32(ebp + 0x8); /* 0x110197B3: mov eax, dword ptr [ebp + 8] */
    MEM16(eax) = (uint16_t)(LO16(edx)); /* 0x110197B6: mov word ptr [eax], dx */
    goto L_110197CD; /* 0x110197B9: jmp 0x110197cd */
L_110197BB:
    _flag_a = (uint32_t)((ecx | 2)); _flag_b = (uint32_t)((ecx | 2));
    ecx = ecx | 2; /* 0x110197BB: or ecx, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = ecx; /* 0x110197BE: mov dword ptr [ebp - 0x14], ecx */
    goto L_110197CD; /* 0x110197C1: jmp 0x110197cd */
L_110197CD:
    eax = MEM32(esi); /* 0x110197CD: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x110197CF: push edi */
    PUSH32(esp, ecx); /* 0x110197D0: push ecx */
    ecx = MEM32(eax + 0x4); /* 0x110197D1: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x110197D4: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x110197D6: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x110197DB: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x110197DD: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x110197E1: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x110197E4: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x110197E8: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110197F1; /* 0x110197EA: je 0x110197f1 */
L_110197EC:
    eax = MEM32(ecx); /* 0x110197EC: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x110197EE: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_110197F1:
    eax = esi; /* 0x110197F1: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x110197F3: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x110197F8: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_110197FB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110197FBu);
    RECOMP_EH_ENTER();

L_110197FB:
    PUSH32(esp, 0x28u); /* 0x110197FB: push 0x28 */
    eax = 0x1103D8FDu; /* 0x110197FD: mov eax, 0x1103d8fd */
    RECOMP_CALL(sub_1103B3DB); /* 0x11019802: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x11019807: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x11019809: mov dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1101980C: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x24)) = esi; /* 0x1101980E: mov dword ptr [ebp - 0x24], esi */
    MEM32(ebp + (-0x18)) = edi; /* 0x11019811: mov dword ptr [ebp - 0x18], edi */
    eax = MEM32(esi); /* 0x11019814: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x11019816: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11019819: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x1101981D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11019826; /* 0x1101981F: je 0x11019826 */
L_11019821:
    eax = MEM32(ecx); /* 0x11019821: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x11019823: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_11019826:
    PUSH32(esp, edi); /* 0x11019826: push edi */
    ecx = esi; /* 0x11019827: mov ecx, esi */
    MEM32(ebp + (-0x4)) = edi; /* 0x11019829: mov dword ptr [ebp - 4], edi */
    RECOMP_CALL(sub_11010810); /* 0x1101982C: call 0x11010810 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x20)) = (uint8_t)(LO8(eax)); /* 0x11019831: mov byte ptr [ebp - 0x20], al */
    MEM32(ebp + (-0x4)) = 1; /* 0x11019834: mov dword ptr [ebp - 4], 1 */
    /* test LO8(eax), LO8(eax) */ /* 0x1101983B: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101989F; /* 0x1101983D: je 0x1101989f */
L_1101983F:
    eax = ebp + (-0x1C); /* 0x1101983F: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x11019842: push eax */
    eax = MEM32(esi); /* 0x11019843: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x11019845: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11019848: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1100F94A); /* 0x1101984A: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1101984F: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x11019850: mov byte ptr [ebp - 4], 2 */
    RECOMP_CALL(sub_11015909); /* 0x11019854: call 0x11015909 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11019859: pop ecx */
    ecx = ebp + (-0x1C); /* 0x1101985A: lea ecx, [ebp - 0x1c] */
    ebx = eax; /* 0x1101985D: mov ebx, eax */
    RECOMP_CALL(sub_1100E431); /* 0x1101985F: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11019864: push dword ptr [ebp + 8] */
    ecx = MEM32(esi); /* 0x11019867: mov ecx, dword ptr [esi] */
    edx = ebp + (-0x18); /* 0x11019869: lea edx, [ebp - 0x18] */
    eax = MEM32(ebx); /* 0x1101986C: mov eax, dword ptr [ebx] */
    PUSH32(esp, edx); /* 0x1101986E: push edx */
    MEM8(ebp + (-0x28)) = (uint8_t)(1); /* 0x1101986F: mov byte ptr [ebp - 0x28], 1 */
    ecx = MEM32(ecx + 0x4); /* 0x11019873: mov ecx, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11019876: add ecx, esi */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x11019878: mov byte ptr [ebp - 4], 3 */
    PUSH32(esp, ecx); /* 0x1101987C: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x1101987D: push dword ptr [ebp - 0x28] */
    /* cmp MEM32(ecx + 0x38), 0 */ /* 0x11019880: cmp dword ptr [ecx + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x11019884: push edi */
    MEM8(ebp + (-0x30)) = (uint8_t)((CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x11019885: sete byte ptr [ebp - 0x30] */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x11019889: push dword ptr [ebp - 0x30] */
    PUSH32(esp, MEM32(ecx + 0x38)); /* 0x1101988C: push dword ptr [ecx + 0x38] */
    ecx = ebp + (-0x34); /* 0x1101988F: lea ecx, [ebp - 0x34] */
    PUSH32(esp, ecx); /* 0x11019892: push ecx */
    ecx = ebx; /* 0x11019893: mov ecx, ebx */
    RECOMP_ICALL(MEM32(eax + 0x30)); /* 0x11019895: call dword ptr [eax + 0x30] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 1; /* 0x11019898: mov dword ptr [ebp - 4], 1 */
L_1101989F:
    eax = MEM32(esi); /* 0x1101989F: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x110198A1: push edi */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x110198A2: push dword ptr [ebp - 0x18] */
    ecx = MEM32(eax + 0x4); /* 0x110198A5: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x110198A8: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x110198AA: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x110198AF: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x110198B1: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x110198B5: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x110198B8: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x110198BC: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110198C5; /* 0x110198BE: je 0x110198c5 */
L_110198C0:
    eax = MEM32(ecx); /* 0x110198C0: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x110198C2: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_110198C5:
    eax = esi; /* 0x110198C5: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x110198C7: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x110198CC: ret 4 */
L_110198FA:
    esi = MEM32(ebp + (-0x14)); /* 0x110198FA: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x110198FD: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x110198FF: mov dword ptr [ebp - 4], 1 */
    RECOMP_BACKEDGE();
    goto L_1101989F; /* 0x11019906: jmp 0x1101989f */
    { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x110198FAu: goto L_110198FA;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_110198CF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110198CFu);

L_110198CF:
    ecx = MEM32(ebp + (-0x14)); /* 0x110198CF: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x110198D2: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x110198D4: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x110198D6: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x110198D9: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x110198DB: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x110198DE: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), edi */ /* 0x110198E1: cmp dword ptr [edx + 0x38], edi */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_110198E9; /* 0x110198E4: jne 0x110198e9 */
L_110198E6:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x110198E6: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_110198E9:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x110198E9: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x110198EC: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x110198EF: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11019908; /* 0x110198F2: jne 0x11019908 */
L_110198F4:
    eax = 0x110198FAu; /* 0x110198F4: mov eax, 0x110198fa */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110198F9: ret  */
L_11019908:
    PUSH32(esp, edi); /* 0x11019908: push edi */
    PUSH32(esp, edi); /* 0x11019909: push edi */
    RECOMP_CALL(sub_1103B33A); /* 0x1101990A: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1101990Fu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_110198FA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110198FAu);

    goto L_110198FA;
L_1101989F:
    eax = MEM32(esi); /* 0x1101989F: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x110198A1: push edi */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x110198A2: push dword ptr [ebp - 0x18] */
    ecx = MEM32(eax + 0x4); /* 0x110198A5: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x110198A8: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x110198AA: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x110198AF: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x110198B1: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x110198B5: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x110198B8: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x110198BC: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110198C5; /* 0x110198BE: je 0x110198c5 */
L_110198C0:
    eax = MEM32(ecx); /* 0x110198C0: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x110198C2: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_110198C5:
    eax = esi; /* 0x110198C5: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x110198C7: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x110198CC: ret 4 */
L_110198FA:
    esi = MEM32(ebp + (-0x14)); /* 0x110198FA: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x110198FD: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x110198FF: mov dword ptr [ebp - 4], 1 */
    RECOMP_BACKEDGE();
    goto L_1101989F; /* 0x11019906: jmp 0x1101989f */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11019910(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11019910u);
    RECOMP_EH_ENTER();

L_11019910:
    PUSH32(esp, 0x2Cu); /* 0x11019910: push 0x2c */
    eax = 0x1103D930u; /* 0x11019912: mov eax, 0x1103d930 */
    RECOMP_CALL(sub_1103B3DB); /* 0x11019917: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1101991C: mov esi, ecx */
    MEM32(ebp + (-0x18)) = esi; /* 0x1101991E: mov dword ptr [ebp - 0x18], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11019921: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x28)) = esi; /* 0x11019923: mov dword ptr [ebp - 0x28], esi */
    MEM32(ebp + (-0x14)) = edi; /* 0x11019926: mov dword ptr [ebp - 0x14], edi */
    eax = MEM32(esi); /* 0x11019929: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x1101992B: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1101992E: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x11019932: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101993B; /* 0x11019934: je 0x1101993b */
L_11019936:
    eax = MEM32(ecx); /* 0x11019936: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x11019938: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_1101993B:
    PUSH32(esp, edi); /* 0x1101993B: push edi */
    ecx = esi; /* 0x1101993C: mov ecx, esi */
    MEM32(ebp + (-0x4)) = edi; /* 0x1101993E: mov dword ptr [ebp - 4], edi */
    RECOMP_CALL(sub_11010810); /* 0x11019941: call 0x11010810 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x24)) = (uint8_t)(LO8(eax)); /* 0x11019946: mov byte ptr [ebp - 0x24], al */
    MEM32(ebp + (-0x4)) = 1; /* 0x11019949: mov dword ptr [ebp - 4], 1 */
    /* test LO8(eax), LO8(eax) */ /* 0x11019950: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11019A1A; /* 0x11019952: je 0x11019a1a */
L_11019958:
    eax = ebp + (-0x20); /* 0x11019958: lea eax, [ebp - 0x20] */
    MEM32(ebp + (-0x1C)) = edi; /* 0x1101995B: mov dword ptr [ebp - 0x1c], edi */
    PUSH32(esp, eax); /* 0x1101995E: push eax */
    eax = MEM32(esi); /* 0x1101995F: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x11019961: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11019964: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1100F94A); /* 0x11019966: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1101996B: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x1101996C: mov byte ptr [ebp - 4], 2 */
    RECOMP_CALL(sub_11015909); /* 0x11019970: call 0x11015909 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11019975: pop ecx */
    ecx = ebp + (-0x20); /* 0x11019976: lea ecx, [ebp - 0x20] */
    ebx = eax; /* 0x11019979: mov ebx, eax */
    RECOMP_CALL(sub_1100E431); /* 0x1101997B: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi); /* 0x11019980: mov ecx, dword ptr [esi] */
    edx = ebp + (-0x1C); /* 0x11019982: lea edx, [ebp - 0x1c] */
    eax = MEM32(ebx); /* 0x11019985: mov eax, dword ptr [ebx] */
    PUSH32(esp, edx); /* 0x11019987: push edx */
    edx = ebp + (-0x14); /* 0x11019988: lea edx, [ebp - 0x14] */
    MEM8(ebp + (-0x2C)) = (uint8_t)(1); /* 0x1101998B: mov byte ptr [ebp - 0x2c], 1 */
    ecx = MEM32(ecx + 0x4); /* 0x1101998F: mov ecx, dword ptr [ecx + 4] */
    PUSH32(esp, edx); /* 0x11019992: push edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11019993: add ecx, esi */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x11019995: mov byte ptr [ebp - 4], 3 */
    PUSH32(esp, ecx); /* 0x11019999: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x1101999A: push dword ptr [ebp - 0x2c] */
    /* cmp MEM32(ecx + 0x38), 0 */ /* 0x1101999D: cmp dword ptr [ecx + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x110199A1: push edi */
    MEM8(ebp + (-0x34)) = (uint8_t)((CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x110199A2: sete byte ptr [ebp - 0x34] */
    PUSH32(esp, MEM32(ebp + (-0x34))); /* 0x110199A6: push dword ptr [ebp - 0x34] */
    PUSH32(esp, MEM32(ecx + 0x38)); /* 0x110199A9: push dword ptr [ecx + 0x38] */
    ecx = ebp + (-0x38); /* 0x110199AC: lea ecx, [ebp - 0x38] */
    PUSH32(esp, ecx); /* 0x110199AF: push ecx */
    ecx = ebx; /* 0x110199B0: mov ecx, ebx */
    RECOMP_ICALL(MEM32(eax + 0x28)); /* 0x110199B2: call dword ptr [eax + 0x28] */
    RECOMP_FLAGS_IN();
    goto L_110199E7; /* 0x110199B5: jmp 0x110199e7 */
L_110199E2:
    esi = MEM32(ebp + (-0x18)); /* 0x110199E2: mov esi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x110199E5: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_110199E7:
    ecx = MEM32(ebp + (-0x14)); /* 0x110199E7: mov ecx, dword ptr [ebp - 0x14] */
    MEM32(ebp + (-0x4)) = 1; /* 0x110199EA: mov dword ptr [ebp - 4], 1 */
    /* test LO8(ecx), 2 */ /* 0x110199F1: test cl, 2 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11019A0B; /* 0x110199F4: jne 0x11019a0b */
L_110199F6:
    edx = MEM32(ebp + (-0x1C)); /* 0x110199F6: mov edx, dword ptr [ebp - 0x1c] */
    eax = edx + (-0x80000000); /* 0x110199F9: lea eax, [edx - 0x80000000] */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x110199FF: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_11019A0B; /* 0x11019A02: ja 0x11019a0b */
L_11019A04:
    eax = MEM32(ebp + 0x8); /* 0x11019A04: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = edx; /* 0x11019A07: mov dword ptr [eax], edx */
    goto L_11019A1D; /* 0x11019A09: jmp 0x11019a1d */
L_11019A0B:
    _flag_a = (uint32_t)((ecx | 2)); _flag_b = (uint32_t)((ecx | 2));
    ecx = ecx | 2; /* 0x11019A0B: or ecx, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = ecx; /* 0x11019A0E: mov dword ptr [ebp - 0x14], ecx */
    goto L_11019A1D; /* 0x11019A11: jmp 0x11019a1d */
L_11019A1A:
    ecx = MEM32(ebp + (-0x14)); /* 0x11019A1A: mov ecx, dword ptr [ebp - 0x14] */
L_11019A1D:
    eax = MEM32(esi); /* 0x11019A1D: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x11019A1F: push edi */
    PUSH32(esp, ecx); /* 0x11019A20: push ecx */
    ecx = MEM32(eax + 0x4); /* 0x11019A21: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11019A24: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x11019A26: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x11019A2B: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11019A2D: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x11019A31: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11019A34: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x11019A38: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11019A41; /* 0x11019A3A: je 0x11019a41 */
L_11019A3C:
    eax = MEM32(ecx); /* 0x11019A3C: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x11019A3E: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_11019A41:
    eax = esi; /* 0x11019A41: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11019A43: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x11019A48: ret 4 */
  _ljump:
    switch (_itail_tgt) {
      case 0x110199E2u: goto L_110199E2;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_110199B7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110199B7u);

L_110199B7:
    ecx = MEM32(ebp + (-0x18)); /* 0x110199B7: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x110199BA: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x110199BC: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x110199BE: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x110199C1: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x110199C3: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x110199C6: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), edi */ /* 0x110199C9: cmp dword ptr [edx + 0x38], edi */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_110199D1; /* 0x110199CC: jne 0x110199d1 */
L_110199CE:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x110199CE: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_110199D1:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x110199D1: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x110199D4: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x110199D7: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11019A13; /* 0x110199DA: jne 0x11019a13 */
L_110199DC:
    eax = 0x110199E2u; /* 0x110199DC: mov eax, 0x110199e2 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110199E1: ret  */
L_11019A13:
    PUSH32(esp, edi); /* 0x11019A13: push edi */
    PUSH32(esp, edi); /* 0x11019A14: push edi */
    RECOMP_CALL(sub_1103B33A); /* 0x11019A15: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x14)); /* 0x11019A1A: mov ecx, dword ptr [ebp - 0x14] */
    eax = MEM32(esi); /* 0x11019A1D: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x11019A1F: push edi */
    PUSH32(esp, ecx); /* 0x11019A20: push ecx */
    ecx = MEM32(eax + 0x4); /* 0x11019A21: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11019A24: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x11019A26: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x11019A2B: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11019A2D: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x11019A31: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11019A34: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x11019A38: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11019A41; /* 0x11019A3A: je 0x11019a41 */
L_11019A3C:
    eax = MEM32(ecx); /* 0x11019A3C: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x11019A3E: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_11019A41:
    eax = esi; /* 0x11019A41: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11019A43: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11019A48: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_110199E2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110199E2u);

L_110199E2:
    esi = MEM32(ebp + (-0x18)); /* 0x110199E2: mov esi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x110199E5: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x14)); /* 0x110199E7: mov ecx, dword ptr [ebp - 0x14] */
    MEM32(ebp + (-0x4)) = 1; /* 0x110199EA: mov dword ptr [ebp - 4], 1 */
    /* test LO8(ecx), 2 */ /* 0x110199F1: test cl, 2 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11019A0B; /* 0x110199F4: jne 0x11019a0b */
L_110199F6:
    edx = MEM32(ebp + (-0x1C)); /* 0x110199F6: mov edx, dword ptr [ebp - 0x1c] */
    eax = edx + (-0x80000000); /* 0x110199F9: lea eax, [edx - 0x80000000] */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x110199FF: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_11019A0B; /* 0x11019A02: ja 0x11019a0b */
L_11019A04:
    eax = MEM32(ebp + 0x8); /* 0x11019A04: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = edx; /* 0x11019A07: mov dword ptr [eax], edx */
    goto L_11019A1D; /* 0x11019A09: jmp 0x11019a1d */
L_11019A0B:
    _flag_a = (uint32_t)((ecx | 2)); _flag_b = (uint32_t)((ecx | 2));
    ecx = ecx | 2; /* 0x11019A0B: or ecx, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = ecx; /* 0x11019A0E: mov dword ptr [ebp - 0x14], ecx */
    goto L_11019A1D; /* 0x11019A11: jmp 0x11019a1d */
L_11019A1D:
    eax = MEM32(esi); /* 0x11019A1D: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x11019A1F: push edi */
    PUSH32(esp, ecx); /* 0x11019A20: push ecx */
    ecx = MEM32(eax + 0x4); /* 0x11019A21: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11019A24: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x11019A26: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x11019A2B: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11019A2D: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x11019A31: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11019A34: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x11019A38: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11019A41; /* 0x11019A3A: je 0x11019a41 */
L_11019A3C:
    eax = MEM32(ecx); /* 0x11019A3C: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x11019A3E: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_11019A41:
    eax = esi; /* 0x11019A41: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11019A43: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11019A48: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11019A4B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11019A4Bu);
    RECOMP_EH_ENTER();

L_11019A4B:
    PUSH32(esp, 0x28u); /* 0x11019A4B: push 0x28 */
    eax = 0x1103D963u; /* 0x11019A4D: mov eax, 0x1103d963 */
    RECOMP_CALL(sub_1103B3DB); /* 0x11019A52: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x11019A57: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x11019A59: mov dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11019A5C: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x24)) = esi; /* 0x11019A5E: mov dword ptr [ebp - 0x24], esi */
    MEM32(ebp + (-0x18)) = edi; /* 0x11019A61: mov dword ptr [ebp - 0x18], edi */
    eax = MEM32(esi); /* 0x11019A64: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x11019A66: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11019A69: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x11019A6D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11019A76; /* 0x11019A6F: je 0x11019a76 */
L_11019A71:
    eax = MEM32(ecx); /* 0x11019A71: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x11019A73: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_11019A76:
    PUSH32(esp, edi); /* 0x11019A76: push edi */
    ecx = esi; /* 0x11019A77: mov ecx, esi */
    MEM32(ebp + (-0x4)) = edi; /* 0x11019A79: mov dword ptr [ebp - 4], edi */
    RECOMP_CALL(sub_11010810); /* 0x11019A7C: call 0x11010810 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x20)) = (uint8_t)(LO8(eax)); /* 0x11019A81: mov byte ptr [ebp - 0x20], al */
    MEM32(ebp + (-0x4)) = 1; /* 0x11019A84: mov dword ptr [ebp - 4], 1 */
    /* test LO8(eax), LO8(eax) */ /* 0x11019A8B: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11019AEF; /* 0x11019A8D: je 0x11019aef */
L_11019A8F:
    eax = ebp + (-0x1C); /* 0x11019A8F: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x11019A92: push eax */
    eax = MEM32(esi); /* 0x11019A93: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x11019A95: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11019A98: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1100F94A); /* 0x11019A9A: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x11019A9F: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x11019AA0: mov byte ptr [ebp - 4], 2 */
    RECOMP_CALL(sub_11015909); /* 0x11019AA4: call 0x11015909 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11019AA9: pop ecx */
    ecx = ebp + (-0x1C); /* 0x11019AAA: lea ecx, [ebp - 0x1c] */
    ebx = eax; /* 0x11019AAD: mov ebx, eax */
    RECOMP_CALL(sub_1100E431); /* 0x11019AAF: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11019AB4: push dword ptr [ebp + 8] */
    ecx = MEM32(esi); /* 0x11019AB7: mov ecx, dword ptr [esi] */
    edx = ebp + (-0x18); /* 0x11019AB9: lea edx, [ebp - 0x18] */
    eax = MEM32(ebx); /* 0x11019ABC: mov eax, dword ptr [ebx] */
    PUSH32(esp, edx); /* 0x11019ABE: push edx */
    MEM8(ebp + (-0x28)) = (uint8_t)(1); /* 0x11019ABF: mov byte ptr [ebp - 0x28], 1 */
    ecx = MEM32(ecx + 0x4); /* 0x11019AC3: mov ecx, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11019AC6: add ecx, esi */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x11019AC8: mov byte ptr [ebp - 4], 3 */
    PUSH32(esp, ecx); /* 0x11019ACC: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x11019ACD: push dword ptr [ebp - 0x28] */
    /* cmp MEM32(ecx + 0x38), 0 */ /* 0x11019AD0: cmp dword ptr [ecx + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x11019AD4: push edi */
    MEM8(ebp + (-0x30)) = (uint8_t)((CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x11019AD5: sete byte ptr [ebp - 0x30] */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x11019AD9: push dword ptr [ebp - 0x30] */
    PUSH32(esp, MEM32(ecx + 0x38)); /* 0x11019ADC: push dword ptr [ecx + 0x38] */
    ecx = ebp + (-0x34); /* 0x11019ADF: lea ecx, [ebp - 0x34] */
    PUSH32(esp, ecx); /* 0x11019AE2: push ecx */
    ecx = ebx; /* 0x11019AE3: mov ecx, ebx */
    RECOMP_ICALL(MEM32(eax + 0x2C)); /* 0x11019AE5: call dword ptr [eax + 0x2c] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 1; /* 0x11019AE8: mov dword ptr [ebp - 4], 1 */
L_11019AEF:
    eax = MEM32(esi); /* 0x11019AEF: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x11019AF1: push edi */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x11019AF2: push dword ptr [ebp - 0x18] */
    ecx = MEM32(eax + 0x4); /* 0x11019AF5: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11019AF8: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x11019AFA: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x11019AFF: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11019B01: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x11019B05: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11019B08: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x11019B0C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11019B15; /* 0x11019B0E: je 0x11019b15 */
L_11019B10:
    eax = MEM32(ecx); /* 0x11019B10: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x11019B12: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_11019B15:
    eax = esi; /* 0x11019B15: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11019B17: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x11019B1C: ret 4 */
L_11019B4A:
    esi = MEM32(ebp + (-0x14)); /* 0x11019B4A: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11019B4D: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x11019B4F: mov dword ptr [ebp - 4], 1 */
    RECOMP_BACKEDGE();
    goto L_11019AEF; /* 0x11019B56: jmp 0x11019aef */
    { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x11019B4Au: goto L_11019B4A;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_11019B1F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11019B1Fu);

L_11019B1F:
    ecx = MEM32(ebp + (-0x14)); /* 0x11019B1F: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11019B22: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x11019B24: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x11019B26: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x11019B29: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x11019B2B: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11019B2E: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), edi */ /* 0x11019B31: cmp dword ptr [edx + 0x38], edi */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11019B39; /* 0x11019B34: jne 0x11019b39 */
L_11019B36:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11019B36: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11019B39:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x11019B39: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x11019B3C: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x11019B3F: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11019B58; /* 0x11019B42: jne 0x11019b58 */
L_11019B44:
    eax = 0x11019B4Au; /* 0x11019B44: mov eax, 0x11019b4a */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11019B49: ret  */
L_11019B58:
    PUSH32(esp, edi); /* 0x11019B58: push edi */
    PUSH32(esp, edi); /* 0x11019B59: push edi */
    RECOMP_CALL(sub_1103B33A); /* 0x11019B5A: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x11019B5Fu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11019B4A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11019B4Au);

    goto L_11019B4A;
L_11019AEF:
    eax = MEM32(esi); /* 0x11019AEF: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x11019AF1: push edi */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x11019AF2: push dword ptr [ebp - 0x18] */
    ecx = MEM32(eax + 0x4); /* 0x11019AF5: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11019AF8: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x11019AFA: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x11019AFF: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11019B01: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x11019B05: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11019B08: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x11019B0C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11019B15; /* 0x11019B0E: je 0x11019b15 */
L_11019B10:
    eax = MEM32(ecx); /* 0x11019B10: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x11019B12: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_11019B15:
    eax = esi; /* 0x11019B15: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11019B17: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11019B1C: ret 4 */
L_11019B4A:
    esi = MEM32(ebp + (-0x14)); /* 0x11019B4A: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11019B4D: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x11019B4F: mov dword ptr [ebp - 4], 1 */
    RECOMP_BACKEDGE();
    goto L_11019AEF; /* 0x11019B56: jmp 0x11019aef */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11019B60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11019B60u);
    RECOMP_EH_ENTER();

L_11019B60:
    PUSH32(esp, 0x28u); /* 0x11019B60: push 0x28 */
    eax = 0x1103D996u; /* 0x11019B62: mov eax, 0x1103d996 */
    RECOMP_CALL(sub_1103B3DB); /* 0x11019B67: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x11019B6C: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x11019B6E: mov dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11019B71: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x24)) = esi; /* 0x11019B73: mov dword ptr [ebp - 0x24], esi */
    MEM32(ebp + (-0x18)) = edi; /* 0x11019B76: mov dword ptr [ebp - 0x18], edi */
    eax = MEM32(esi); /* 0x11019B79: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x11019B7B: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11019B7E: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x11019B82: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11019B8B; /* 0x11019B84: je 0x11019b8b */
L_11019B86:
    eax = MEM32(ecx); /* 0x11019B86: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x11019B88: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_11019B8B:
    PUSH32(esp, edi); /* 0x11019B8B: push edi */
    ecx = esi; /* 0x11019B8C: mov ecx, esi */
    MEM32(ebp + (-0x4)) = edi; /* 0x11019B8E: mov dword ptr [ebp - 4], edi */
    RECOMP_CALL(sub_11010810); /* 0x11019B91: call 0x11010810 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x20)) = (uint8_t)(LO8(eax)); /* 0x11019B96: mov byte ptr [ebp - 0x20], al */
    MEM32(ebp + (-0x4)) = 1; /* 0x11019B99: mov dword ptr [ebp - 4], 1 */
    /* test LO8(eax), LO8(eax) */ /* 0x11019BA0: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11019C04; /* 0x11019BA2: je 0x11019c04 */
L_11019BA4:
    eax = ebp + (-0x1C); /* 0x11019BA4: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x11019BA7: push eax */
    eax = MEM32(esi); /* 0x11019BA8: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x11019BAA: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11019BAD: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1100F94A); /* 0x11019BAF: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x11019BB4: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x11019BB5: mov byte ptr [ebp - 4], 2 */
    RECOMP_CALL(sub_11015909); /* 0x11019BB9: call 0x11015909 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11019BBE: pop ecx */
    ecx = ebp + (-0x1C); /* 0x11019BBF: lea ecx, [ebp - 0x1c] */
    ebx = eax; /* 0x11019BC2: mov ebx, eax */
    RECOMP_CALL(sub_1100E431); /* 0x11019BC4: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11019BC9: push dword ptr [ebp + 8] */
    ecx = MEM32(esi); /* 0x11019BCC: mov ecx, dword ptr [esi] */
    edx = ebp + (-0x18); /* 0x11019BCE: lea edx, [ebp - 0x18] */
    eax = MEM32(ebx); /* 0x11019BD1: mov eax, dword ptr [ebx] */
    PUSH32(esp, edx); /* 0x11019BD3: push edx */
    MEM8(ebp + (-0x28)) = (uint8_t)(1); /* 0x11019BD4: mov byte ptr [ebp - 0x28], 1 */
    ecx = MEM32(ecx + 0x4); /* 0x11019BD8: mov ecx, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11019BDB: add ecx, esi */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x11019BDD: mov byte ptr [ebp - 4], 3 */
    PUSH32(esp, ecx); /* 0x11019BE1: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x11019BE2: push dword ptr [ebp - 0x28] */
    /* cmp MEM32(ecx + 0x38), 0 */ /* 0x11019BE5: cmp dword ptr [ecx + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x11019BE9: push edi */
    MEM8(ebp + (-0x30)) = (uint8_t)((CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x11019BEA: sete byte ptr [ebp - 0x30] */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x11019BEE: push dword ptr [ebp - 0x30] */
    PUSH32(esp, MEM32(ecx + 0x38)); /* 0x11019BF1: push dword ptr [ecx + 0x38] */
    ecx = ebp + (-0x34); /* 0x11019BF4: lea ecx, [ebp - 0x34] */
    PUSH32(esp, ecx); /* 0x11019BF7: push ecx */
    ecx = ebx; /* 0x11019BF8: mov ecx, ebx */
    RECOMP_ICALL(MEM32(eax + 0x28)); /* 0x11019BFA: call dword ptr [eax + 0x28] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 1; /* 0x11019BFD: mov dword ptr [ebp - 4], 1 */
L_11019C04:
    eax = MEM32(esi); /* 0x11019C04: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x11019C06: push edi */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x11019C07: push dword ptr [ebp - 0x18] */
    ecx = MEM32(eax + 0x4); /* 0x11019C0A: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11019C0D: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x11019C0F: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x11019C14: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11019C16: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x11019C1A: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11019C1D: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x11019C21: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11019C2A; /* 0x11019C23: je 0x11019c2a */
L_11019C25:
    eax = MEM32(ecx); /* 0x11019C25: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x11019C27: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_11019C2A:
    eax = esi; /* 0x11019C2A: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11019C2C: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x11019C31: ret 4 */
L_11019C5F:
    esi = MEM32(ebp + (-0x14)); /* 0x11019C5F: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11019C62: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x11019C64: mov dword ptr [ebp - 4], 1 */
    RECOMP_BACKEDGE();
    goto L_11019C04; /* 0x11019C6B: jmp 0x11019c04 */
    { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x11019C5Fu: goto L_11019C5F;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_11019C34(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11019C34u);

L_11019C34:
    ecx = MEM32(ebp + (-0x14)); /* 0x11019C34: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11019C37: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x11019C39: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x11019C3B: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x11019C3E: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x11019C40: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11019C43: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), edi */ /* 0x11019C46: cmp dword ptr [edx + 0x38], edi */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11019C4E; /* 0x11019C49: jne 0x11019c4e */
L_11019C4B:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11019C4B: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11019C4E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x11019C4E: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x11019C51: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x11019C54: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11019C6D; /* 0x11019C57: jne 0x11019c6d */
L_11019C59:
    eax = 0x11019C5Fu; /* 0x11019C59: mov eax, 0x11019c5f */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11019C5E: ret  */
L_11019C6D:
    PUSH32(esp, edi); /* 0x11019C6D: push edi */
    PUSH32(esp, edi); /* 0x11019C6E: push edi */
    RECOMP_CALL(sub_1103B33A); /* 0x11019C6F: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x11019C74u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11019C5F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11019C5Fu);

    goto L_11019C5F;
L_11019C04:
    eax = MEM32(esi); /* 0x11019C04: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x11019C06: push edi */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x11019C07: push dword ptr [ebp - 0x18] */
    ecx = MEM32(eax + 0x4); /* 0x11019C0A: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11019C0D: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x11019C0F: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x11019C14: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11019C16: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x11019C1A: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11019C1D: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x11019C21: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11019C2A; /* 0x11019C23: je 0x11019c2a */
L_11019C25:
    eax = MEM32(ecx); /* 0x11019C25: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x11019C27: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_11019C2A:
    eax = esi; /* 0x11019C2A: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11019C2C: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11019C31: ret 4 */
L_11019C5F:
    esi = MEM32(ebp + (-0x14)); /* 0x11019C5F: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11019C62: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x11019C64: mov dword ptr [ebp - 4], 1 */
    RECOMP_BACKEDGE();
    goto L_11019C04; /* 0x11019C6B: jmp 0x11019c04 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11019C75(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11019C75u);
    RECOMP_EH_ENTER();

L_11019C75:
    PUSH32(esp, 0x28u); /* 0x11019C75: push 0x28 */
    eax = 0x1103D9C9u; /* 0x11019C77: mov eax, 0x1103d9c9 */
    RECOMP_CALL(sub_1103B3DB); /* 0x11019C7C: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x11019C81: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x11019C83: mov dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11019C86: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x24)) = esi; /* 0x11019C88: mov dword ptr [ebp - 0x24], esi */
    MEM32(ebp + (-0x18)) = edi; /* 0x11019C8B: mov dword ptr [ebp - 0x18], edi */
    eax = MEM32(esi); /* 0x11019C8E: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x11019C90: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11019C93: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x11019C97: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11019CA0; /* 0x11019C99: je 0x11019ca0 */
L_11019C9B:
    eax = MEM32(ecx); /* 0x11019C9B: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x11019C9D: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_11019CA0:
    PUSH32(esp, edi); /* 0x11019CA0: push edi */
    ecx = esi; /* 0x11019CA1: mov ecx, esi */
    MEM32(ebp + (-0x4)) = edi; /* 0x11019CA3: mov dword ptr [ebp - 4], edi */
    RECOMP_CALL(sub_11010810); /* 0x11019CA6: call 0x11010810 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x20)) = (uint8_t)(LO8(eax)); /* 0x11019CAB: mov byte ptr [ebp - 0x20], al */
    MEM32(ebp + (-0x4)) = 1; /* 0x11019CAE: mov dword ptr [ebp - 4], 1 */
    /* test LO8(eax), LO8(eax) */ /* 0x11019CB5: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11019D19; /* 0x11019CB7: je 0x11019d19 */
L_11019CB9:
    eax = ebp + (-0x1C); /* 0x11019CB9: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x11019CBC: push eax */
    eax = MEM32(esi); /* 0x11019CBD: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x11019CBF: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11019CC2: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1100F94A); /* 0x11019CC4: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x11019CC9: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x11019CCA: mov byte ptr [ebp - 4], 2 */
    RECOMP_CALL(sub_11015909); /* 0x11019CCE: call 0x11015909 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11019CD3: pop ecx */
    ecx = ebp + (-0x1C); /* 0x11019CD4: lea ecx, [ebp - 0x1c] */
    ebx = eax; /* 0x11019CD7: mov ebx, eax */
    RECOMP_CALL(sub_1100E431); /* 0x11019CD9: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11019CDE: push dword ptr [ebp + 8] */
    ecx = MEM32(esi); /* 0x11019CE1: mov ecx, dword ptr [esi] */
    edx = ebp + (-0x18); /* 0x11019CE3: lea edx, [ebp - 0x18] */
    eax = MEM32(ebx); /* 0x11019CE6: mov eax, dword ptr [ebx] */
    PUSH32(esp, edx); /* 0x11019CE8: push edx */
    MEM8(ebp + (-0x28)) = (uint8_t)(1); /* 0x11019CE9: mov byte ptr [ebp - 0x28], 1 */
    ecx = MEM32(ecx + 0x4); /* 0x11019CED: mov ecx, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11019CF0: add ecx, esi */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x11019CF2: mov byte ptr [ebp - 4], 3 */
    PUSH32(esp, ecx); /* 0x11019CF6: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x11019CF7: push dword ptr [ebp - 0x28] */
    /* cmp MEM32(ecx + 0x38), 0 */ /* 0x11019CFA: cmp dword ptr [ecx + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x11019CFE: push edi */
    MEM8(ebp + (-0x30)) = (uint8_t)((CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x11019CFF: sete byte ptr [ebp - 0x30] */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x11019D03: push dword ptr [ebp - 0x30] */
    PUSH32(esp, MEM32(ecx + 0x38)); /* 0x11019D06: push dword ptr [ecx + 0x38] */
    ecx = ebp + (-0x34); /* 0x11019D09: lea ecx, [ebp - 0x34] */
    PUSH32(esp, ecx); /* 0x11019D0C: push ecx */
    ecx = ebx; /* 0x11019D0D: mov ecx, ebx */
    RECOMP_ICALL(MEM32(eax + 0x24)); /* 0x11019D0F: call dword ptr [eax + 0x24] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 1; /* 0x11019D12: mov dword ptr [ebp - 4], 1 */
L_11019D19:
    eax = MEM32(esi); /* 0x11019D19: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x11019D1B: push edi */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x11019D1C: push dword ptr [ebp - 0x18] */
    ecx = MEM32(eax + 0x4); /* 0x11019D1F: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11019D22: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x11019D24: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x11019D29: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11019D2B: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x11019D2F: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11019D32: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x11019D36: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11019D3F; /* 0x11019D38: je 0x11019d3f */
L_11019D3A:
    eax = MEM32(ecx); /* 0x11019D3A: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x11019D3C: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_11019D3F:
    eax = esi; /* 0x11019D3F: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11019D41: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x11019D46: ret 4 */
L_11019D74:
    esi = MEM32(ebp + (-0x14)); /* 0x11019D74: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11019D77: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x11019D79: mov dword ptr [ebp - 4], 1 */
    RECOMP_BACKEDGE();
    goto L_11019D19; /* 0x11019D80: jmp 0x11019d19 */
    { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x11019D74u: goto L_11019D74;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_11019D49(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11019D49u);

L_11019D49:
    ecx = MEM32(ebp + (-0x14)); /* 0x11019D49: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11019D4C: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x11019D4E: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x11019D50: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x11019D53: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x11019D55: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11019D58: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), edi */ /* 0x11019D5B: cmp dword ptr [edx + 0x38], edi */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11019D63; /* 0x11019D5E: jne 0x11019d63 */
L_11019D60:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11019D60: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11019D63:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x11019D63: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x11019D66: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x11019D69: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11019D82; /* 0x11019D6C: jne 0x11019d82 */
L_11019D6E:
    eax = 0x11019D74u; /* 0x11019D6E: mov eax, 0x11019d74 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11019D73: ret  */
L_11019D82:
    PUSH32(esp, edi); /* 0x11019D82: push edi */
    PUSH32(esp, edi); /* 0x11019D83: push edi */
    RECOMP_CALL(sub_1103B33A); /* 0x11019D84: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x11019D89u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11019D74(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11019D74u);

    goto L_11019D74;
L_11019D19:
    eax = MEM32(esi); /* 0x11019D19: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x11019D1B: push edi */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x11019D1C: push dword ptr [ebp - 0x18] */
    ecx = MEM32(eax + 0x4); /* 0x11019D1F: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11019D22: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x11019D24: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x11019D29: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11019D2B: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x11019D2F: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11019D32: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x11019D36: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11019D3F; /* 0x11019D38: je 0x11019d3f */
L_11019D3A:
    eax = MEM32(ecx); /* 0x11019D3A: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x11019D3C: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_11019D3F:
    eax = esi; /* 0x11019D3F: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11019D41: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11019D46: ret 4 */
L_11019D74:
    esi = MEM32(ebp + (-0x14)); /* 0x11019D74: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11019D77: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x11019D79: mov dword ptr [ebp - 4], 1 */
    RECOMP_BACKEDGE();
    goto L_11019D19; /* 0x11019D80: jmp 0x11019d19 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11019D8A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11019D8Au);
    RECOMP_EH_ENTER();

L_11019D8A:
    PUSH32(esp, 0x28u); /* 0x11019D8A: push 0x28 */
    eax = 0x1103D9FCu; /* 0x11019D8C: mov eax, 0x1103d9fc */
    RECOMP_CALL(sub_1103B3DB); /* 0x11019D91: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x11019D96: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x11019D98: mov dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11019D9B: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x24)) = esi; /* 0x11019D9D: mov dword ptr [ebp - 0x24], esi */
    MEM32(ebp + (-0x18)) = edi; /* 0x11019DA0: mov dword ptr [ebp - 0x18], edi */
    eax = MEM32(esi); /* 0x11019DA3: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x11019DA5: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11019DA8: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x11019DAC: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11019DB5; /* 0x11019DAE: je 0x11019db5 */
L_11019DB0:
    eax = MEM32(ecx); /* 0x11019DB0: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x11019DB2: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_11019DB5:
    PUSH32(esp, edi); /* 0x11019DB5: push edi */
    ecx = esi; /* 0x11019DB6: mov ecx, esi */
    MEM32(ebp + (-0x4)) = edi; /* 0x11019DB8: mov dword ptr [ebp - 4], edi */
    RECOMP_CALL(sub_11010810); /* 0x11019DBB: call 0x11010810 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x20)) = (uint8_t)(LO8(eax)); /* 0x11019DC0: mov byte ptr [ebp - 0x20], al */
    MEM32(ebp + (-0x4)) = 1; /* 0x11019DC3: mov dword ptr [ebp - 4], 1 */
    /* test LO8(eax), LO8(eax) */ /* 0x11019DCA: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11019E2E; /* 0x11019DCC: je 0x11019e2e */
L_11019DCE:
    eax = ebp + (-0x1C); /* 0x11019DCE: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x11019DD1: push eax */
    eax = MEM32(esi); /* 0x11019DD2: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x11019DD4: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11019DD7: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1100F94A); /* 0x11019DD9: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x11019DDE: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x11019DDF: mov byte ptr [ebp - 4], 2 */
    RECOMP_CALL(sub_11015909); /* 0x11019DE3: call 0x11015909 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11019DE8: pop ecx */
    ecx = ebp + (-0x1C); /* 0x11019DE9: lea ecx, [ebp - 0x1c] */
    ebx = eax; /* 0x11019DEC: mov ebx, eax */
    RECOMP_CALL(sub_1100E431); /* 0x11019DEE: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11019DF3: push dword ptr [ebp + 8] */
    ecx = MEM32(esi); /* 0x11019DF6: mov ecx, dword ptr [esi] */
    edx = ebp + (-0x18); /* 0x11019DF8: lea edx, [ebp - 0x18] */
    eax = MEM32(ebx); /* 0x11019DFB: mov eax, dword ptr [ebx] */
    PUSH32(esp, edx); /* 0x11019DFD: push edx */
    MEM8(ebp + (-0x28)) = (uint8_t)(1); /* 0x11019DFE: mov byte ptr [ebp - 0x28], 1 */
    ecx = MEM32(ecx + 0x4); /* 0x11019E02: mov ecx, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11019E05: add ecx, esi */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x11019E07: mov byte ptr [ebp - 4], 3 */
    PUSH32(esp, ecx); /* 0x11019E0B: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x11019E0C: push dword ptr [ebp - 0x28] */
    /* cmp MEM32(ecx + 0x38), 0 */ /* 0x11019E0F: cmp dword ptr [ecx + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x11019E13: push edi */
    MEM8(ebp + (-0x30)) = (uint8_t)((CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x11019E14: sete byte ptr [ebp - 0x30] */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x11019E18: push dword ptr [ebp - 0x30] */
    PUSH32(esp, MEM32(ecx + 0x38)); /* 0x11019E1B: push dword ptr [ecx + 0x38] */
    ecx = ebp + (-0x34); /* 0x11019E1E: lea ecx, [ebp - 0x34] */
    PUSH32(esp, ecx); /* 0x11019E21: push ecx */
    ecx = ebx; /* 0x11019E22: mov ecx, ebx */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x11019E24: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 1; /* 0x11019E27: mov dword ptr [ebp - 4], 1 */
L_11019E2E:
    eax = MEM32(esi); /* 0x11019E2E: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x11019E30: push edi */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x11019E31: push dword ptr [ebp - 0x18] */
    ecx = MEM32(eax + 0x4); /* 0x11019E34: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11019E37: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x11019E39: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x11019E3E: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11019E40: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x11019E44: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11019E47: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x11019E4B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11019E54; /* 0x11019E4D: je 0x11019e54 */
L_11019E4F:
    eax = MEM32(ecx); /* 0x11019E4F: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x11019E51: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_11019E54:
    eax = esi; /* 0x11019E54: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11019E56: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x11019E5B: ret 4 */
L_11019E89:
    esi = MEM32(ebp + (-0x14)); /* 0x11019E89: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11019E8C: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x11019E8E: mov dword ptr [ebp - 4], 1 */
    RECOMP_BACKEDGE();
    goto L_11019E2E; /* 0x11019E95: jmp 0x11019e2e */
    { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x11019E89u: goto L_11019E89;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_11019E5E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11019E5Eu);

L_11019E5E:
    ecx = MEM32(ebp + (-0x14)); /* 0x11019E5E: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11019E61: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x11019E63: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x11019E65: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x11019E68: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x11019E6A: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11019E6D: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), edi */ /* 0x11019E70: cmp dword ptr [edx + 0x38], edi */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11019E78; /* 0x11019E73: jne 0x11019e78 */
L_11019E75:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11019E75: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11019E78:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x11019E78: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x11019E7B: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x11019E7E: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11019E97; /* 0x11019E81: jne 0x11019e97 */
L_11019E83:
    eax = 0x11019E89u; /* 0x11019E83: mov eax, 0x11019e89 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11019E88: ret  */
L_11019E97:
    PUSH32(esp, edi); /* 0x11019E97: push edi */
    PUSH32(esp, edi); /* 0x11019E98: push edi */
    RECOMP_CALL(sub_1103B33A); /* 0x11019E99: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x11019E9Eu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11019E89(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11019E89u);

    goto L_11019E89;
L_11019E2E:
    eax = MEM32(esi); /* 0x11019E2E: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x11019E30: push edi */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x11019E31: push dword ptr [ebp - 0x18] */
    ecx = MEM32(eax + 0x4); /* 0x11019E34: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11019E37: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x11019E39: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x11019E3E: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11019E40: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x11019E44: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11019E47: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x11019E4B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11019E54; /* 0x11019E4D: je 0x11019e54 */
L_11019E4F:
    eax = MEM32(ecx); /* 0x11019E4F: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x11019E51: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_11019E54:
    eax = esi; /* 0x11019E54: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11019E56: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11019E5B: ret 4 */
L_11019E89:
    esi = MEM32(ebp + (-0x14)); /* 0x11019E89: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11019E8C: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x11019E8E: mov dword ptr [ebp - 4], 1 */
    RECOMP_BACKEDGE();
    goto L_11019E2E; /* 0x11019E95: jmp 0x11019e2e */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11019E9F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11019E9Fu);
    RECOMP_EH_ENTER();

L_11019E9F:
    PUSH32(esp, 0x28u); /* 0x11019E9F: push 0x28 */
    eax = 0x1103DA2Fu; /* 0x11019EA1: mov eax, 0x1103da2f */
    RECOMP_CALL(sub_1103B3DB); /* 0x11019EA6: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x11019EAB: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x11019EAD: mov dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11019EB0: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x24)) = esi; /* 0x11019EB2: mov dword ptr [ebp - 0x24], esi */
    MEM32(ebp + (-0x18)) = edi; /* 0x11019EB5: mov dword ptr [ebp - 0x18], edi */
    eax = MEM32(esi); /* 0x11019EB8: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x11019EBA: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11019EBD: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x11019EC1: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11019ECA; /* 0x11019EC3: je 0x11019eca */
L_11019EC5:
    eax = MEM32(ecx); /* 0x11019EC5: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x11019EC7: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_11019ECA:
    PUSH32(esp, edi); /* 0x11019ECA: push edi */
    ecx = esi; /* 0x11019ECB: mov ecx, esi */
    MEM32(ebp + (-0x4)) = edi; /* 0x11019ECD: mov dword ptr [ebp - 4], edi */
    RECOMP_CALL(sub_11010810); /* 0x11019ED0: call 0x11010810 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x20)) = (uint8_t)(LO8(eax)); /* 0x11019ED5: mov byte ptr [ebp - 0x20], al */
    MEM32(ebp + (-0x4)) = 1; /* 0x11019ED8: mov dword ptr [ebp - 4], 1 */
    /* test LO8(eax), LO8(eax) */ /* 0x11019EDF: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11019F43; /* 0x11019EE1: je 0x11019f43 */
L_11019EE3:
    eax = ebp + (-0x1C); /* 0x11019EE3: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x11019EE6: push eax */
    eax = MEM32(esi); /* 0x11019EE7: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x11019EE9: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11019EEC: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1100F94A); /* 0x11019EEE: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x11019EF3: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x11019EF4: mov byte ptr [ebp - 4], 2 */
    RECOMP_CALL(sub_11015909); /* 0x11019EF8: call 0x11015909 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11019EFD: pop ecx */
    ecx = ebp + (-0x1C); /* 0x11019EFE: lea ecx, [ebp - 0x1c] */
    ebx = eax; /* 0x11019F01: mov ebx, eax */
    RECOMP_CALL(sub_1100E431); /* 0x11019F03: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11019F08: push dword ptr [ebp + 8] */
    ecx = MEM32(esi); /* 0x11019F0B: mov ecx, dword ptr [esi] */
    edx = ebp + (-0x18); /* 0x11019F0D: lea edx, [ebp - 0x18] */
    eax = MEM32(ebx); /* 0x11019F10: mov eax, dword ptr [ebx] */
    PUSH32(esp, edx); /* 0x11019F12: push edx */
    MEM8(ebp + (-0x28)) = (uint8_t)(1); /* 0x11019F13: mov byte ptr [ebp - 0x28], 1 */
    ecx = MEM32(ecx + 0x4); /* 0x11019F17: mov ecx, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11019F1A: add ecx, esi */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x11019F1C: mov byte ptr [ebp - 4], 3 */
    PUSH32(esp, ecx); /* 0x11019F20: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x11019F21: push dword ptr [ebp - 0x28] */
    /* cmp MEM32(ecx + 0x38), 0 */ /* 0x11019F24: cmp dword ptr [ecx + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x11019F28: push edi */
    MEM8(ebp + (-0x30)) = (uint8_t)((CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x11019F29: sete byte ptr [ebp - 0x30] */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x11019F2D: push dword ptr [ebp - 0x30] */
    PUSH32(esp, MEM32(ecx + 0x38)); /* 0x11019F30: push dword ptr [ecx + 0x38] */
    ecx = ebp + (-0x34); /* 0x11019F33: lea ecx, [ebp - 0x34] */
    PUSH32(esp, ecx); /* 0x11019F36: push ecx */
    ecx = ebx; /* 0x11019F37: mov ecx, ebx */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x11019F39: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 1; /* 0x11019F3C: mov dword ptr [ebp - 4], 1 */
L_11019F43:
    eax = MEM32(esi); /* 0x11019F43: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x11019F45: push edi */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x11019F46: push dword ptr [ebp - 0x18] */
    ecx = MEM32(eax + 0x4); /* 0x11019F49: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11019F4C: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x11019F4E: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x11019F53: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11019F55: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x11019F59: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11019F5C: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x11019F60: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11019F69; /* 0x11019F62: je 0x11019f69 */
L_11019F64:
    eax = MEM32(ecx); /* 0x11019F64: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x11019F66: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_11019F69:
    eax = esi; /* 0x11019F69: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11019F6B: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x11019F70: ret 4 */
L_11019F9E:
    esi = MEM32(ebp + (-0x14)); /* 0x11019F9E: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11019FA1: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x11019FA3: mov dword ptr [ebp - 4], 1 */
    RECOMP_BACKEDGE();
    goto L_11019F43; /* 0x11019FAA: jmp 0x11019f43 */
    { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x11019F9Eu: goto L_11019F9E;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_11019F73(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11019F73u);

L_11019F73:
    ecx = MEM32(ebp + (-0x14)); /* 0x11019F73: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11019F76: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x11019F78: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x11019F7A: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x11019F7D: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x11019F7F: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11019F82: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), edi */ /* 0x11019F85: cmp dword ptr [edx + 0x38], edi */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11019F8D; /* 0x11019F88: jne 0x11019f8d */
L_11019F8A:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11019F8A: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11019F8D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x11019F8D: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x11019F90: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x11019F93: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11019FAC; /* 0x11019F96: jne 0x11019fac */
L_11019F98:
    eax = 0x11019F9Eu; /* 0x11019F98: mov eax, 0x11019f9e */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11019F9D: ret  */
L_11019FAC:
    PUSH32(esp, edi); /* 0x11019FAC: push edi */
    PUSH32(esp, edi); /* 0x11019FAD: push edi */
    RECOMP_CALL(sub_1103B33A); /* 0x11019FAE: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x11019FB3u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11019F9E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11019F9Eu);

    goto L_11019F9E;
L_11019F43:
    eax = MEM32(esi); /* 0x11019F43: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x11019F45: push edi */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x11019F46: push dword ptr [ebp - 0x18] */
    ecx = MEM32(eax + 0x4); /* 0x11019F49: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11019F4C: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x11019F4E: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x11019F53: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11019F55: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x11019F59: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11019F5C: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x11019F60: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11019F69; /* 0x11019F62: je 0x11019f69 */
L_11019F64:
    eax = MEM32(ecx); /* 0x11019F64: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x11019F66: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_11019F69:
    eax = esi; /* 0x11019F69: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11019F6B: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11019F70: ret 4 */
L_11019F9E:
    esi = MEM32(ebp + (-0x14)); /* 0x11019F9E: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11019FA1: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x11019FA3: mov dword ptr [ebp - 4], 1 */
    RECOMP_BACKEDGE();
    goto L_11019F43; /* 0x11019FAA: jmp 0x11019f43 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11019FB4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11019FB4u);
    RECOMP_EH_ENTER();

L_11019FB4:
    PUSH32(esp, 0x28u); /* 0x11019FB4: push 0x28 */
    eax = 0x1103DA62u; /* 0x11019FB6: mov eax, 0x1103da62 */
    RECOMP_CALL(sub_1103B3DB); /* 0x11019FBB: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x11019FC0: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x11019FC2: mov dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11019FC5: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x24)) = esi; /* 0x11019FC7: mov dword ptr [ebp - 0x24], esi */
    MEM32(ebp + (-0x18)) = edi; /* 0x11019FCA: mov dword ptr [ebp - 0x18], edi */
    eax = MEM32(esi); /* 0x11019FCD: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x11019FCF: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11019FD2: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x11019FD6: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11019FDF; /* 0x11019FD8: je 0x11019fdf */
L_11019FDA:
    eax = MEM32(ecx); /* 0x11019FDA: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x11019FDC: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_11019FDF:
    PUSH32(esp, edi); /* 0x11019FDF: push edi */
    ecx = esi; /* 0x11019FE0: mov ecx, esi */
    MEM32(ebp + (-0x4)) = edi; /* 0x11019FE2: mov dword ptr [ebp - 4], edi */
    RECOMP_CALL(sub_11010810); /* 0x11019FE5: call 0x11010810 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x20)) = (uint8_t)(LO8(eax)); /* 0x11019FEA: mov byte ptr [ebp - 0x20], al */
    MEM32(ebp + (-0x4)) = 1; /* 0x11019FED: mov dword ptr [ebp - 4], 1 */
    /* test LO8(eax), LO8(eax) */ /* 0x11019FF4: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101A058; /* 0x11019FF6: je 0x1101a058 */
L_11019FF8:
    eax = ebp + (-0x1C); /* 0x11019FF8: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x11019FFB: push eax */
    eax = MEM32(esi); /* 0x11019FFC: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x11019FFE: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101A001: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1100F94A); /* 0x1101A003: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1101A008: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x1101A009: mov byte ptr [ebp - 4], 2 */
    RECOMP_CALL(sub_11015909); /* 0x1101A00D: call 0x11015909 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101A012: pop ecx */
    ecx = ebp + (-0x1C); /* 0x1101A013: lea ecx, [ebp - 0x1c] */
    ebx = eax; /* 0x1101A016: mov ebx, eax */
    RECOMP_CALL(sub_1100E431); /* 0x1101A018: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1101A01D: push dword ptr [ebp + 8] */
    ecx = MEM32(esi); /* 0x1101A020: mov ecx, dword ptr [esi] */
    edx = ebp + (-0x18); /* 0x1101A022: lea edx, [ebp - 0x18] */
    eax = MEM32(ebx); /* 0x1101A025: mov eax, dword ptr [ebx] */
    PUSH32(esp, edx); /* 0x1101A027: push edx */
    MEM8(ebp + (-0x28)) = (uint8_t)(1); /* 0x1101A028: mov byte ptr [ebp - 0x28], 1 */
    ecx = MEM32(ecx + 0x4); /* 0x1101A02C: mov ecx, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101A02F: add ecx, esi */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x1101A031: mov byte ptr [ebp - 4], 3 */
    PUSH32(esp, ecx); /* 0x1101A035: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x1101A036: push dword ptr [ebp - 0x28] */
    /* cmp MEM32(ecx + 0x38), 0 */ /* 0x1101A039: cmp dword ptr [ecx + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x1101A03D: push edi */
    MEM8(ebp + (-0x30)) = (uint8_t)((CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1101A03E: sete byte ptr [ebp - 0x30] */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x1101A042: push dword ptr [ebp - 0x30] */
    PUSH32(esp, MEM32(ecx + 0x38)); /* 0x1101A045: push dword ptr [ecx + 0x38] */
    ecx = ebp + (-0x34); /* 0x1101A048: lea ecx, [ebp - 0x34] */
    PUSH32(esp, ecx); /* 0x1101A04B: push ecx */
    ecx = ebx; /* 0x1101A04C: mov ecx, ebx */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x1101A04E: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 1; /* 0x1101A051: mov dword ptr [ebp - 4], 1 */
L_1101A058:
    eax = MEM32(esi); /* 0x1101A058: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x1101A05A: push edi */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x1101A05B: push dword ptr [ebp - 0x18] */
    ecx = MEM32(eax + 0x4); /* 0x1101A05E: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101A061: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1101A063: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x1101A068: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1101A06A: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x1101A06E: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1101A071: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x1101A075: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101A07E; /* 0x1101A077: je 0x1101a07e */
L_1101A079:
    eax = MEM32(ecx); /* 0x1101A079: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1101A07B: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_1101A07E:
    eax = esi; /* 0x1101A07E: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101A080: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x1101A085: ret 4 */
L_1101A0B3:
    esi = MEM32(ebp + (-0x14)); /* 0x1101A0B3: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1101A0B6: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x1101A0B8: mov dword ptr [ebp - 4], 1 */
    RECOMP_BACKEDGE();
    goto L_1101A058; /* 0x1101A0BF: jmp 0x1101a058 */
    { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x1101A0B3u: goto L_1101A0B3;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_1101A088(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101A088u);

L_1101A088:
    ecx = MEM32(ebp + (-0x14)); /* 0x1101A088: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1101A08B: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x1101A08D: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x1101A08F: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1101A092: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x1101A094: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101A097: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), edi */ /* 0x1101A09A: cmp dword ptr [edx + 0x38], edi */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101A0A2; /* 0x1101A09D: jne 0x1101a0a2 */
L_1101A09F:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101A09F: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1101A0A2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x1101A0A2: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x1101A0A5: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x1101A0A8: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1101A0C1; /* 0x1101A0AB: jne 0x1101a0c1 */
L_1101A0AD:
    eax = 0x1101A0B3u; /* 0x1101A0AD: mov eax, 0x1101a0b3 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101A0B2: ret  */
L_1101A0C1:
    PUSH32(esp, edi); /* 0x1101A0C1: push edi */
    PUSH32(esp, edi); /* 0x1101A0C2: push edi */
    RECOMP_CALL(sub_1103B33A); /* 0x1101A0C3: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1101A0C8u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1101A0B3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101A0B3u);

    goto L_1101A0B3;
L_1101A058:
    eax = MEM32(esi); /* 0x1101A058: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x1101A05A: push edi */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x1101A05B: push dword ptr [ebp - 0x18] */
    ecx = MEM32(eax + 0x4); /* 0x1101A05E: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101A061: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1101A063: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x1101A068: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1101A06A: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x1101A06E: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1101A071: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x1101A075: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101A07E; /* 0x1101A077: je 0x1101a07e */
L_1101A079:
    eax = MEM32(ecx); /* 0x1101A079: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1101A07B: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_1101A07E:
    eax = esi; /* 0x1101A07E: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101A080: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1101A085: ret 4 */
L_1101A0B3:
    esi = MEM32(ebp + (-0x14)); /* 0x1101A0B3: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1101A0B6: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x1101A0B8: mov dword ptr [ebp - 4], 1 */
    RECOMP_BACKEDGE();
    goto L_1101A058; /* 0x1101A0BF: jmp 0x1101a058 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1101A0C9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101A0C9u);
    RECOMP_EH_ENTER();

L_1101A0C9:
    PUSH32(esp, 0x28u); /* 0x1101A0C9: push 0x28 */
    eax = 0x1103DA95u; /* 0x1101A0CB: mov eax, 0x1103da95 */
    RECOMP_CALL(sub_1103B3DB); /* 0x1101A0D0: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1101A0D5: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x1101A0D7: mov dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1101A0DA: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x24)) = esi; /* 0x1101A0DC: mov dword ptr [ebp - 0x24], esi */
    MEM32(ebp + (-0x18)) = edi; /* 0x1101A0DF: mov dword ptr [ebp - 0x18], edi */
    eax = MEM32(esi); /* 0x1101A0E2: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x1101A0E4: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1101A0E7: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x1101A0EB: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101A0F4; /* 0x1101A0ED: je 0x1101a0f4 */
L_1101A0EF:
    eax = MEM32(ecx); /* 0x1101A0EF: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1101A0F1: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_1101A0F4:
    PUSH32(esp, edi); /* 0x1101A0F4: push edi */
    ecx = esi; /* 0x1101A0F5: mov ecx, esi */
    MEM32(ebp + (-0x4)) = edi; /* 0x1101A0F7: mov dword ptr [ebp - 4], edi */
    RECOMP_CALL(sub_11010810); /* 0x1101A0FA: call 0x11010810 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x20)) = (uint8_t)(LO8(eax)); /* 0x1101A0FF: mov byte ptr [ebp - 0x20], al */
    MEM32(ebp + (-0x4)) = 1; /* 0x1101A102: mov dword ptr [ebp - 4], 1 */
    /* test LO8(eax), LO8(eax) */ /* 0x1101A109: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101A16D; /* 0x1101A10B: je 0x1101a16d */
L_1101A10D:
    eax = ebp + (-0x1C); /* 0x1101A10D: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1101A110: push eax */
    eax = MEM32(esi); /* 0x1101A111: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x1101A113: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101A116: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1100F94A); /* 0x1101A118: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1101A11D: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x1101A11E: mov byte ptr [ebp - 4], 2 */
    RECOMP_CALL(sub_11015909); /* 0x1101A122: call 0x11015909 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101A127: pop ecx */
    ecx = ebp + (-0x1C); /* 0x1101A128: lea ecx, [ebp - 0x1c] */
    ebx = eax; /* 0x1101A12B: mov ebx, eax */
    RECOMP_CALL(sub_1100E431); /* 0x1101A12D: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1101A132: push dword ptr [ebp + 8] */
    ecx = MEM32(esi); /* 0x1101A135: mov ecx, dword ptr [esi] */
    edx = ebp + (-0x18); /* 0x1101A137: lea edx, [ebp - 0x18] */
    eax = MEM32(ebx); /* 0x1101A13A: mov eax, dword ptr [ebx] */
    PUSH32(esp, edx); /* 0x1101A13C: push edx */
    MEM8(ebp + (-0x28)) = (uint8_t)(1); /* 0x1101A13D: mov byte ptr [ebp - 0x28], 1 */
    ecx = MEM32(ecx + 0x4); /* 0x1101A141: mov ecx, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101A144: add ecx, esi */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x1101A146: mov byte ptr [ebp - 4], 3 */
    PUSH32(esp, ecx); /* 0x1101A14A: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x1101A14B: push dword ptr [ebp - 0x28] */
    /* cmp MEM32(ecx + 0x38), 0 */ /* 0x1101A14E: cmp dword ptr [ecx + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x1101A152: push edi */
    MEM8(ebp + (-0x30)) = (uint8_t)((CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1101A153: sete byte ptr [ebp - 0x30] */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x1101A157: push dword ptr [ebp - 0x30] */
    PUSH32(esp, MEM32(ecx + 0x38)); /* 0x1101A15A: push dword ptr [ecx + 0x38] */
    ecx = ebp + (-0x34); /* 0x1101A15D: lea ecx, [ebp - 0x34] */
    PUSH32(esp, ecx); /* 0x1101A160: push ecx */
    ecx = ebx; /* 0x1101A161: mov ecx, ebx */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x1101A163: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 1; /* 0x1101A166: mov dword ptr [ebp - 4], 1 */
L_1101A16D:
    eax = MEM32(esi); /* 0x1101A16D: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x1101A16F: push edi */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x1101A170: push dword ptr [ebp - 0x18] */
    ecx = MEM32(eax + 0x4); /* 0x1101A173: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101A176: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1101A178: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x1101A17D: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1101A17F: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x1101A183: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1101A186: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x1101A18A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101A193; /* 0x1101A18C: je 0x1101a193 */
L_1101A18E:
    eax = MEM32(ecx); /* 0x1101A18E: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1101A190: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_1101A193:
    eax = esi; /* 0x1101A193: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101A195: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x1101A19A: ret 4 */
L_1101A1C8:
    esi = MEM32(ebp + (-0x14)); /* 0x1101A1C8: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1101A1CB: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x1101A1CD: mov dword ptr [ebp - 4], 1 */
    RECOMP_BACKEDGE();
    goto L_1101A16D; /* 0x1101A1D4: jmp 0x1101a16d */
    { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x1101A1C8u: goto L_1101A1C8;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_1101A19D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101A19Du);

L_1101A19D:
    ecx = MEM32(ebp + (-0x14)); /* 0x1101A19D: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1101A1A0: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x1101A1A2: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x1101A1A4: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1101A1A7: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x1101A1A9: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101A1AC: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), edi */ /* 0x1101A1AF: cmp dword ptr [edx + 0x38], edi */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101A1B7; /* 0x1101A1B2: jne 0x1101a1b7 */
L_1101A1B4:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101A1B4: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1101A1B7:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x1101A1B7: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x1101A1BA: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x1101A1BD: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1101A1D6; /* 0x1101A1C0: jne 0x1101a1d6 */
L_1101A1C2:
    eax = 0x1101A1C8u; /* 0x1101A1C2: mov eax, 0x1101a1c8 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101A1C7: ret  */
L_1101A1D6:
    PUSH32(esp, edi); /* 0x1101A1D6: push edi */
    PUSH32(esp, edi); /* 0x1101A1D7: push edi */
    RECOMP_CALL(sub_1103B33A); /* 0x1101A1D8: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1101A1DDu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1101A1C8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101A1C8u);

    goto L_1101A1C8;
L_1101A16D:
    eax = MEM32(esi); /* 0x1101A16D: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x1101A16F: push edi */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x1101A170: push dword ptr [ebp - 0x18] */
    ecx = MEM32(eax + 0x4); /* 0x1101A173: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101A176: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1101A178: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x1101A17D: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1101A17F: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x1101A183: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1101A186: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x1101A18A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101A193; /* 0x1101A18C: je 0x1101a193 */
L_1101A18E:
    eax = MEM32(ecx); /* 0x1101A18E: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1101A190: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_1101A193:
    eax = esi; /* 0x1101A193: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101A195: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1101A19A: ret 4 */
L_1101A1C8:
    esi = MEM32(ebp + (-0x14)); /* 0x1101A1C8: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1101A1CB: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x1101A1CD: mov dword ptr [ebp - 4], 1 */
    RECOMP_BACKEDGE();
    goto L_1101A16D; /* 0x1101A1D4: jmp 0x1101a16d */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1101A1DE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101A1DEu);
    RECOMP_EH_ENTER();

L_1101A1DE:
    PUSH32(esp, 0x28u); /* 0x1101A1DE: push 0x28 */
    eax = 0x1103DAC8u; /* 0x1101A1E0: mov eax, 0x1103dac8 */
    RECOMP_CALL(sub_1103B3DB); /* 0x1101A1E5: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1101A1EA: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x1101A1EC: mov dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1101A1EF: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x24)) = esi; /* 0x1101A1F1: mov dword ptr [ebp - 0x24], esi */
    MEM32(ebp + (-0x18)) = edi; /* 0x1101A1F4: mov dword ptr [ebp - 0x18], edi */
    eax = MEM32(esi); /* 0x1101A1F7: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x1101A1F9: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1101A1FC: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x1101A200: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101A209; /* 0x1101A202: je 0x1101a209 */
L_1101A204:
    eax = MEM32(ecx); /* 0x1101A204: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1101A206: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_1101A209:
    PUSH32(esp, edi); /* 0x1101A209: push edi */
    ecx = esi; /* 0x1101A20A: mov ecx, esi */
    MEM32(ebp + (-0x4)) = edi; /* 0x1101A20C: mov dword ptr [ebp - 4], edi */
    RECOMP_CALL(sub_11010810); /* 0x1101A20F: call 0x11010810 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x20)) = (uint8_t)(LO8(eax)); /* 0x1101A214: mov byte ptr [ebp - 0x20], al */
    MEM32(ebp + (-0x4)) = 1; /* 0x1101A217: mov dword ptr [ebp - 4], 1 */
    /* test LO8(eax), LO8(eax) */ /* 0x1101A21E: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101A282; /* 0x1101A220: je 0x1101a282 */
L_1101A222:
    eax = ebp + (-0x1C); /* 0x1101A222: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1101A225: push eax */
    eax = MEM32(esi); /* 0x1101A226: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x1101A228: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101A22B: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1100F94A); /* 0x1101A22D: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1101A232: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x1101A233: mov byte ptr [ebp - 4], 2 */
    RECOMP_CALL(sub_11015909); /* 0x1101A237: call 0x11015909 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101A23C: pop ecx */
    ecx = ebp + (-0x1C); /* 0x1101A23D: lea ecx, [ebp - 0x1c] */
    ebx = eax; /* 0x1101A240: mov ebx, eax */
    RECOMP_CALL(sub_1100E431); /* 0x1101A242: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1101A247: push dword ptr [ebp + 8] */
    ecx = MEM32(esi); /* 0x1101A24A: mov ecx, dword ptr [esi] */
    edx = ebp + (-0x18); /* 0x1101A24C: lea edx, [ebp - 0x18] */
    eax = MEM32(ebx); /* 0x1101A24F: mov eax, dword ptr [ebx] */
    PUSH32(esp, edx); /* 0x1101A251: push edx */
    MEM8(ebp + (-0x28)) = (uint8_t)(1); /* 0x1101A252: mov byte ptr [ebp - 0x28], 1 */
    ecx = MEM32(ecx + 0x4); /* 0x1101A256: mov ecx, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101A259: add ecx, esi */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x1101A25B: mov byte ptr [ebp - 4], 3 */
    PUSH32(esp, ecx); /* 0x1101A25F: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x1101A260: push dword ptr [ebp - 0x28] */
    /* cmp MEM32(ecx + 0x38), 0 */ /* 0x1101A263: cmp dword ptr [ecx + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x1101A267: push edi */
    MEM8(ebp + (-0x30)) = (uint8_t)((CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1101A268: sete byte ptr [ebp - 0x30] */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x1101A26C: push dword ptr [ebp - 0x30] */
    PUSH32(esp, MEM32(ecx + 0x38)); /* 0x1101A26F: push dword ptr [ecx + 0x38] */
    ecx = ebp + (-0x34); /* 0x1101A272: lea ecx, [ebp - 0x34] */
    PUSH32(esp, ecx); /* 0x1101A275: push ecx */
    ecx = ebx; /* 0x1101A276: mov ecx, ebx */
    RECOMP_ICALL(MEM32(eax + 0x20)); /* 0x1101A278: call dword ptr [eax + 0x20] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 1; /* 0x1101A27B: mov dword ptr [ebp - 4], 1 */
L_1101A282:
    eax = MEM32(esi); /* 0x1101A282: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x1101A284: push edi */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x1101A285: push dword ptr [ebp - 0x18] */
    ecx = MEM32(eax + 0x4); /* 0x1101A288: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101A28B: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1101A28D: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x1101A292: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1101A294: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x1101A298: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1101A29B: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x1101A29F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101A2A8; /* 0x1101A2A1: je 0x1101a2a8 */
L_1101A2A3:
    eax = MEM32(ecx); /* 0x1101A2A3: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1101A2A5: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_1101A2A8:
    eax = esi; /* 0x1101A2A8: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101A2AA: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x1101A2AF: ret 4 */
L_1101A2DD:
    esi = MEM32(ebp + (-0x14)); /* 0x1101A2DD: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1101A2E0: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x1101A2E2: mov dword ptr [ebp - 4], 1 */
    RECOMP_BACKEDGE();
    goto L_1101A282; /* 0x1101A2E9: jmp 0x1101a282 */
    { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x1101A2DDu: goto L_1101A2DD;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_1101A2B2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101A2B2u);

L_1101A2B2:
    ecx = MEM32(ebp + (-0x14)); /* 0x1101A2B2: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1101A2B5: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x1101A2B7: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x1101A2B9: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1101A2BC: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x1101A2BE: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101A2C1: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), edi */ /* 0x1101A2C4: cmp dword ptr [edx + 0x38], edi */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101A2CC; /* 0x1101A2C7: jne 0x1101a2cc */
L_1101A2C9:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101A2C9: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1101A2CC:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x1101A2CC: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x1101A2CF: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x1101A2D2: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1101A2EB; /* 0x1101A2D5: jne 0x1101a2eb */
L_1101A2D7:
    eax = 0x1101A2DDu; /* 0x1101A2D7: mov eax, 0x1101a2dd */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101A2DC: ret  */
L_1101A2EB:
    PUSH32(esp, edi); /* 0x1101A2EB: push edi */
    PUSH32(esp, edi); /* 0x1101A2EC: push edi */
    RECOMP_CALL(sub_1103B33A); /* 0x1101A2ED: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1101A2F2u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1101A2DD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101A2DDu);

    goto L_1101A2DD;
L_1101A282:
    eax = MEM32(esi); /* 0x1101A282: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x1101A284: push edi */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x1101A285: push dword ptr [ebp - 0x18] */
    ecx = MEM32(eax + 0x4); /* 0x1101A288: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101A28B: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1101A28D: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x1101A292: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1101A294: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x1101A298: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1101A29B: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x1101A29F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101A2A8; /* 0x1101A2A1: je 0x1101a2a8 */
L_1101A2A3:
    eax = MEM32(ecx); /* 0x1101A2A3: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1101A2A5: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_1101A2A8:
    eax = esi; /* 0x1101A2A8: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101A2AA: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1101A2AF: ret 4 */
L_1101A2DD:
    esi = MEM32(ebp + (-0x14)); /* 0x1101A2DD: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1101A2E0: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x1101A2E2: mov dword ptr [ebp - 4], 1 */
    RECOMP_BACKEDGE();
    goto L_1101A282; /* 0x1101A2E9: jmp 0x1101a282 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1101A2F3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101A2F3u);
    RECOMP_EH_ENTER();

L_1101A2F3:
    PUSH32(esp, 0x28u); /* 0x1101A2F3: push 0x28 */
    eax = 0x1103DAFBu; /* 0x1101A2F5: mov eax, 0x1103dafb */
    RECOMP_CALL(sub_1103B3DB); /* 0x1101A2FA: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1101A2FF: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x1101A301: mov dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1101A304: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x24)) = esi; /* 0x1101A306: mov dword ptr [ebp - 0x24], esi */
    MEM32(ebp + (-0x18)) = edi; /* 0x1101A309: mov dword ptr [ebp - 0x18], edi */
    eax = MEM32(esi); /* 0x1101A30C: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x1101A30E: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1101A311: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x1101A315: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101A31E; /* 0x1101A317: je 0x1101a31e */
L_1101A319:
    eax = MEM32(ecx); /* 0x1101A319: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1101A31B: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_1101A31E:
    PUSH32(esp, edi); /* 0x1101A31E: push edi */
    ecx = esi; /* 0x1101A31F: mov ecx, esi */
    MEM32(ebp + (-0x4)) = edi; /* 0x1101A321: mov dword ptr [ebp - 4], edi */
    RECOMP_CALL(sub_11010810); /* 0x1101A324: call 0x11010810 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x20)) = (uint8_t)(LO8(eax)); /* 0x1101A329: mov byte ptr [ebp - 0x20], al */
    MEM32(ebp + (-0x4)) = 1; /* 0x1101A32C: mov dword ptr [ebp - 4], 1 */
    /* test LO8(eax), LO8(eax) */ /* 0x1101A333: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101A397; /* 0x1101A335: je 0x1101a397 */
L_1101A337:
    eax = ebp + (-0x1C); /* 0x1101A337: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1101A33A: push eax */
    eax = MEM32(esi); /* 0x1101A33B: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x1101A33D: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101A340: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1100F94A); /* 0x1101A342: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1101A347: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x1101A348: mov byte ptr [ebp - 4], 2 */
    RECOMP_CALL(sub_11015909); /* 0x1101A34C: call 0x11015909 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101A351: pop ecx */
    ecx = ebp + (-0x1C); /* 0x1101A352: lea ecx, [ebp - 0x1c] */
    ebx = eax; /* 0x1101A355: mov ebx, eax */
    RECOMP_CALL(sub_1100E431); /* 0x1101A357: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1101A35C: push dword ptr [ebp + 8] */
    ecx = MEM32(esi); /* 0x1101A35F: mov ecx, dword ptr [esi] */
    edx = ebp + (-0x18); /* 0x1101A361: lea edx, [ebp - 0x18] */
    eax = MEM32(ebx); /* 0x1101A364: mov eax, dword ptr [ebx] */
    PUSH32(esp, edx); /* 0x1101A366: push edx */
    MEM8(ebp + (-0x28)) = (uint8_t)(1); /* 0x1101A367: mov byte ptr [ebp - 0x28], 1 */
    ecx = MEM32(ecx + 0x4); /* 0x1101A36B: mov ecx, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101A36E: add ecx, esi */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x1101A370: mov byte ptr [ebp - 4], 3 */
    PUSH32(esp, ecx); /* 0x1101A374: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x1101A375: push dword ptr [ebp - 0x28] */
    /* cmp MEM32(ecx + 0x38), 0 */ /* 0x1101A378: cmp dword ptr [ecx + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x1101A37C: push edi */
    MEM8(ebp + (-0x30)) = (uint8_t)((CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1101A37D: sete byte ptr [ebp - 0x30] */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x1101A381: push dword ptr [ebp - 0x30] */
    PUSH32(esp, MEM32(ecx + 0x38)); /* 0x1101A384: push dword ptr [ecx + 0x38] */
    ecx = ebp + (-0x34); /* 0x1101A387: lea ecx, [ebp - 0x34] */
    PUSH32(esp, ecx); /* 0x1101A38A: push ecx */
    ecx = ebx; /* 0x1101A38B: mov ecx, ebx */
    RECOMP_ICALL(MEM32(eax + 0x1C)); /* 0x1101A38D: call dword ptr [eax + 0x1c] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 1; /* 0x1101A390: mov dword ptr [ebp - 4], 1 */
L_1101A397:
    eax = MEM32(esi); /* 0x1101A397: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x1101A399: push edi */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x1101A39A: push dword ptr [ebp - 0x18] */
    ecx = MEM32(eax + 0x4); /* 0x1101A39D: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101A3A0: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1101A3A2: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x1101A3A7: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1101A3A9: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x1101A3AD: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1101A3B0: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x1101A3B4: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101A3BD; /* 0x1101A3B6: je 0x1101a3bd */
L_1101A3B8:
    eax = MEM32(ecx); /* 0x1101A3B8: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1101A3BA: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_1101A3BD:
    eax = esi; /* 0x1101A3BD: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101A3BF: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x1101A3C4: ret 4 */
L_1101A3F2:
    esi = MEM32(ebp + (-0x14)); /* 0x1101A3F2: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1101A3F5: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x1101A3F7: mov dword ptr [ebp - 4], 1 */
    RECOMP_BACKEDGE();
    goto L_1101A397; /* 0x1101A3FE: jmp 0x1101a397 */
    { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x1101A3F2u: goto L_1101A3F2;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_1101A3C7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101A3C7u);

L_1101A3C7:
    ecx = MEM32(ebp + (-0x14)); /* 0x1101A3C7: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1101A3CA: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x1101A3CC: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x1101A3CE: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1101A3D1: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x1101A3D3: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101A3D6: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), edi */ /* 0x1101A3D9: cmp dword ptr [edx + 0x38], edi */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101A3E1; /* 0x1101A3DC: jne 0x1101a3e1 */
L_1101A3DE:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101A3DE: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1101A3E1:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x1101A3E1: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x1101A3E4: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x1101A3E7: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1101A400; /* 0x1101A3EA: jne 0x1101a400 */
L_1101A3EC:
    eax = 0x1101A3F2u; /* 0x1101A3EC: mov eax, 0x1101a3f2 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101A3F1: ret  */
L_1101A400:
    PUSH32(esp, edi); /* 0x1101A400: push edi */
    PUSH32(esp, edi); /* 0x1101A401: push edi */
    RECOMP_CALL(sub_1103B33A); /* 0x1101A402: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1101A407u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1101A3F2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101A3F2u);

    goto L_1101A3F2;
L_1101A397:
    eax = MEM32(esi); /* 0x1101A397: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x1101A399: push edi */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x1101A39A: push dword ptr [ebp - 0x18] */
    ecx = MEM32(eax + 0x4); /* 0x1101A39D: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101A3A0: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1101A3A2: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x1101A3A7: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1101A3A9: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x1101A3AD: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1101A3B0: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x1101A3B4: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101A3BD; /* 0x1101A3B6: je 0x1101a3bd */
L_1101A3B8:
    eax = MEM32(ecx); /* 0x1101A3B8: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1101A3BA: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_1101A3BD:
    eax = esi; /* 0x1101A3BD: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101A3BF: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1101A3C4: ret 4 */
L_1101A3F2:
    esi = MEM32(ebp + (-0x14)); /* 0x1101A3F2: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1101A3F5: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x1101A3F7: mov dword ptr [ebp - 4], 1 */
    RECOMP_BACKEDGE();
    goto L_1101A397; /* 0x1101A3FE: jmp 0x1101a397 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1101A408(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101A408u);
    RECOMP_EH_ENTER();

L_1101A408:
    PUSH32(esp, 0x28u); /* 0x1101A408: push 0x28 */
    eax = 0x1103DB2Eu; /* 0x1101A40A: mov eax, 0x1103db2e */
    RECOMP_CALL(sub_1103B3DB); /* 0x1101A40F: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1101A414: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x1101A416: mov dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1101A419: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x24)) = esi; /* 0x1101A41B: mov dword ptr [ebp - 0x24], esi */
    MEM32(ebp + (-0x18)) = edi; /* 0x1101A41E: mov dword ptr [ebp - 0x18], edi */
    eax = MEM32(esi); /* 0x1101A421: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x1101A423: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1101A426: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x1101A42A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101A433; /* 0x1101A42C: je 0x1101a433 */
L_1101A42E:
    eax = MEM32(ecx); /* 0x1101A42E: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1101A430: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_1101A433:
    PUSH32(esp, edi); /* 0x1101A433: push edi */
    ecx = esi; /* 0x1101A434: mov ecx, esi */
    MEM32(ebp + (-0x4)) = edi; /* 0x1101A436: mov dword ptr [ebp - 4], edi */
    RECOMP_CALL(sub_11010810); /* 0x1101A439: call 0x11010810 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x20)) = (uint8_t)(LO8(eax)); /* 0x1101A43E: mov byte ptr [ebp - 0x20], al */
    MEM32(ebp + (-0x4)) = 1; /* 0x1101A441: mov dword ptr [ebp - 4], 1 */
    /* test LO8(eax), LO8(eax) */ /* 0x1101A448: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101A4AC; /* 0x1101A44A: je 0x1101a4ac */
L_1101A44C:
    eax = ebp + (-0x1C); /* 0x1101A44C: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1101A44F: push eax */
    eax = MEM32(esi); /* 0x1101A450: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x1101A452: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101A455: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1100F94A); /* 0x1101A457: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1101A45C: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x1101A45D: mov byte ptr [ebp - 4], 2 */
    RECOMP_CALL(sub_11015909); /* 0x1101A461: call 0x11015909 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101A466: pop ecx */
    ecx = ebp + (-0x1C); /* 0x1101A467: lea ecx, [ebp - 0x1c] */
    ebx = eax; /* 0x1101A46A: mov ebx, eax */
    RECOMP_CALL(sub_1100E431); /* 0x1101A46C: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1101A471: push dword ptr [ebp + 8] */
    ecx = MEM32(esi); /* 0x1101A474: mov ecx, dword ptr [esi] */
    edx = ebp + (-0x18); /* 0x1101A476: lea edx, [ebp - 0x18] */
    eax = MEM32(ebx); /* 0x1101A479: mov eax, dword ptr [ebx] */
    PUSH32(esp, edx); /* 0x1101A47B: push edx */
    MEM8(ebp + (-0x28)) = (uint8_t)(1); /* 0x1101A47C: mov byte ptr [ebp - 0x28], 1 */
    ecx = MEM32(ecx + 0x4); /* 0x1101A480: mov ecx, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101A483: add ecx, esi */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x1101A485: mov byte ptr [ebp - 4], 3 */
    PUSH32(esp, ecx); /* 0x1101A489: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x1101A48A: push dword ptr [ebp - 0x28] */
    /* cmp MEM32(ecx + 0x38), 0 */ /* 0x1101A48D: cmp dword ptr [ecx + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x1101A491: push edi */
    MEM8(ebp + (-0x30)) = (uint8_t)((CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1101A492: sete byte ptr [ebp - 0x30] */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x1101A496: push dword ptr [ebp - 0x30] */
    PUSH32(esp, MEM32(ecx + 0x38)); /* 0x1101A499: push dword ptr [ecx + 0x38] */
    ecx = ebp + (-0x34); /* 0x1101A49C: lea ecx, [ebp - 0x34] */
    PUSH32(esp, ecx); /* 0x1101A49F: push ecx */
    ecx = ebx; /* 0x1101A4A0: mov ecx, ebx */
    RECOMP_ICALL(MEM32(eax + 0x34)); /* 0x1101A4A2: call dword ptr [eax + 0x34] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 1; /* 0x1101A4A5: mov dword ptr [ebp - 4], 1 */
L_1101A4AC:
    eax = MEM32(esi); /* 0x1101A4AC: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x1101A4AE: push edi */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x1101A4AF: push dword ptr [ebp - 0x18] */
    ecx = MEM32(eax + 0x4); /* 0x1101A4B2: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101A4B5: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1101A4B7: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x1101A4BC: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1101A4BE: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x1101A4C2: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1101A4C5: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x1101A4C9: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101A4D2; /* 0x1101A4CB: je 0x1101a4d2 */
L_1101A4CD:
    eax = MEM32(ecx); /* 0x1101A4CD: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1101A4CF: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_1101A4D2:
    eax = esi; /* 0x1101A4D2: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101A4D4: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x1101A4D9: ret 4 */
L_1101A507:
    esi = MEM32(ebp + (-0x14)); /* 0x1101A507: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1101A50A: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x1101A50C: mov dword ptr [ebp - 4], 1 */
    RECOMP_BACKEDGE();
    goto L_1101A4AC; /* 0x1101A513: jmp 0x1101a4ac */
    { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x1101A507u: goto L_1101A507;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_1101A4DC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101A4DCu);

L_1101A4DC:
    ecx = MEM32(ebp + (-0x14)); /* 0x1101A4DC: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1101A4DF: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x1101A4E1: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x1101A4E3: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1101A4E6: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x1101A4E8: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101A4EB: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), edi */ /* 0x1101A4EE: cmp dword ptr [edx + 0x38], edi */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101A4F6; /* 0x1101A4F1: jne 0x1101a4f6 */
L_1101A4F3:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101A4F3: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1101A4F6:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x1101A4F6: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x1101A4F9: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x1101A4FC: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1101A515; /* 0x1101A4FF: jne 0x1101a515 */
L_1101A501:
    eax = 0x1101A507u; /* 0x1101A501: mov eax, 0x1101a507 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101A506: ret  */
L_1101A515:
    PUSH32(esp, edi); /* 0x1101A515: push edi */
    PUSH32(esp, edi); /* 0x1101A516: push edi */
    RECOMP_CALL(sub_1103B33A); /* 0x1101A517: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1101A51Cu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1101A507(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101A507u);

    goto L_1101A507;
L_1101A4AC:
    eax = MEM32(esi); /* 0x1101A4AC: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x1101A4AE: push edi */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x1101A4AF: push dword ptr [ebp - 0x18] */
    ecx = MEM32(eax + 0x4); /* 0x1101A4B2: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101A4B5: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1101A4B7: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x1101A4BC: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1101A4BE: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x1101A4C2: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1101A4C5: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x1101A4C9: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101A4D2; /* 0x1101A4CB: je 0x1101a4d2 */
L_1101A4CD:
    eax = MEM32(ecx); /* 0x1101A4CD: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1101A4CF: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_1101A4D2:
    eax = esi; /* 0x1101A4D2: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101A4D4: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1101A4D9: ret 4 */
L_1101A507:
    esi = MEM32(ebp + (-0x14)); /* 0x1101A507: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1101A50A: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x1101A50C: mov dword ptr [ebp - 4], 1 */
    RECOMP_BACKEDGE();
    goto L_1101A4AC; /* 0x1101A513: jmp 0x1101a4ac */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1101A51D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101A51Du);

L_1101A51D:
    PUSH32(esp, ebp); /* 0x1101A51D: push ebp */
    ebp = esp; /* 0x1101A51E: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1101A520: push ecx */
    RECOMP_ICALL(MEM32(ebp + 0x8)); /* 0x1101A521: call dword ptr [ebp + 8] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101A524: pop ecx */
    ebp = POP32_VAL(esp); /* 0x1101A525: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1101A526: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1101A529(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101A529u);
    RECOMP_EH_ENTER();

L_1101A529:
    PUSH32(esp, 0x18u); /* 0x1101A529: push 0x18 */
    eax = 0x1103DB59u; /* 0x1101A52B: mov eax, 0x1103db59 */
    RECOMP_CALL(sub_1103B3DB); /* 0x1101A530: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1101A535: mov esi, ecx */
    MEM32(ebp + (-0x18)) = esi; /* 0x1101A537: mov dword ptr [ebp - 0x18], esi */
    eax = MEM32(esi); /* 0x1101A53A: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1101A53C: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = edi; /* 0x1101A53E: mov dword ptr [ebp - 0x1c], edi */
    MEM8(ebp + (-0x11)) = (uint8_t)(0); /* 0x1101A541: mov byte ptr [ebp - 0x11], 0 */
    MEM32(ebp + (-0x24)) = esi; /* 0x1101A545: mov dword ptr [ebp - 0x24], esi */
    eax = MEM32(eax + 0x4); /* 0x1101A548: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1101A54B: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x1101A54F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101A558; /* 0x1101A551: je 0x1101a558 */
L_1101A553:
    eax = MEM32(ecx); /* 0x1101A553: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1101A555: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_1101A558:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1101A558: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x1101A55C: mov ecx, esi */
    PUSH32(esp, 0); /* 0x1101A55E: push 0 */
    RECOMP_CALL(sub_11010810); /* 0x1101A560: call 0x11010810 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x20)) = (uint8_t)(LO8(eax)); /* 0x1101A565: mov byte ptr [ebp - 0x20], al */
    MEM32(ebp + (-0x4)) = 1; /* 0x1101A568: mov dword ptr [ebp - 4], 1 */
    /* test LO8(eax), LO8(eax) */ /* 0x1101A56F: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101A5EB; /* 0x1101A571: je 0x1101a5eb */
L_1101A573:
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x1101A573: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101A5EB; /* 0x1101A577: je 0x1101a5eb */
L_1101A579:
    eax = MEM32(esi); /* 0x1101A579: mov eax, dword ptr [esi] */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x1101A57B: mov byte ptr [ebp - 4], 2 */
    eax = MEM32(eax + 0x4); /* 0x1101A57F: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1101A582: mov ecx, dword ptr [eax + esi + 0x38] */
    RECOMP_CALL(sub_11010398); /* 0x1101A586: call 0x11010398 */
    RECOMP_FLAGS_IN();
L_1101A58B:
    ecx = 0xFFFFu; /* 0x1101A58B: mov ecx, 0xffff */
    eax = (uint32_t)LO16(eax); /* 0x1101A590: movzx eax, ax */
    /* cmp LO16(ecx), LO16(eax) */ /* 0x1101A593: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101A59D; /* 0x1101A596: jne 0x1101a59d */
L_1101A598:
    _flag_a = (uint32_t)((edi | 1)); _flag_b = (uint32_t)((edi | 1));
    edi = edi | 1; /* 0x1101A598: or edi, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1101A5DE; /* 0x1101A59B: jmp 0x1101a5de */
L_1101A59D:
    ecx = MEM32(ebp + 0x8); /* 0x1101A59D: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x1101A5A0: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x1101A5A1: mov byte ptr [ebp - 4], 3 */
    RECOMP_CALL(sub_1102B3DC); /* 0x1101A5A5: call 0x1102b3dc */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO16(eax); /* 0x1101A5AA: movzx eax, ax */
    ecx = 0xFFFFu; /* 0x1101A5AD: mov ecx, 0xffff */
    /* cmp LO16(ecx), LO16(eax) */ /* 0x1101A5B2: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101A5DE; /* 0x1101A5B5: je 0x1101a5de */
L_1101A5B7:
    eax = MEM32(esi); /* 0x1101A5B7: mov eax, dword ptr [esi] */
    MEM32(ebp + (-0x4)) = 2; /* 0x1101A5B9: mov dword ptr [ebp - 4], 2 */
    MEM8(ebp + (-0x11)) = (uint8_t)(1); /* 0x1101A5C0: mov byte ptr [ebp - 0x11], 1 */
    eax = MEM32(eax + 0x4); /* 0x1101A5C4: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1101A5C7: mov ecx, dword ptr [eax + esi + 0x38] */
    RECOMP_CALL(sub_110103BB); /* 0x1101A5CB: call 0x110103bb */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1101A58B; /* 0x1101A5D0: jmp 0x1101a58b */
L_1101A5D8:
    esi = MEM32(ebp + (-0x18)); /* 0x1101A5D8: mov esi, dword ptr [ebp - 0x18] */
    edi = MEM32(ebp + (-0x1C)); /* 0x1101A5DB: mov edi, dword ptr [ebp - 0x1c] */
L_1101A5DE:
    /* cmp MEM8(ebp + (-0x11)), 0 */ /* 0x1101A5DE: cmp byte ptr [ebp - 0x11], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x11))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(ebp + (-0x4)) = 1; /* 0x1101A5E2: mov dword ptr [ebp - 4], 1 */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101A5EE; /* 0x1101A5E9: jne 0x1101a5ee */
L_1101A5EB:
    _flag_a = (uint32_t)((edi | 2)); _flag_b = (uint32_t)((edi | 2));
    edi = edi | 2; /* 0x1101A5EB: or edi, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1101A5EE:
    eax = MEM32(esi); /* 0x1101A5EE: mov eax, dword ptr [esi] */
    PUSH32(esp, 0); /* 0x1101A5F0: push 0 */
    PUSH32(esp, edi); /* 0x1101A5F2: push edi */
    ecx = MEM32(eax + 0x4); /* 0x1101A5F3: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101A5F6: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1101A5F8: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x24)); /* 0x1101A5FD: mov ecx, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1101A600: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x1101A604: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x4); /* 0x1101A606: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + ecx + 0x38); /* 0x1101A609: mov ecx, dword ptr [eax + ecx + 0x38] */
    /* test ecx, ecx */ /* 0x1101A60D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101A616; /* 0x1101A60F: je 0x1101a616 */
L_1101A611:
    eax = MEM32(ecx); /* 0x1101A611: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1101A613: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_1101A616:
    eax = esi; /* 0x1101A616: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101A618: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x1101A61D: ret 4 */
  _ljump:
    switch (_itail_tgt) {
      case 0x1101A5D8u: goto L_1101A5D8;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_1101A5D2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101A5D2u);

L_1101A5D2:
    eax = 0x1101A5D8u; /* 0x1101A5D2: mov eax, 0x1101a5d8 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101A5D7: ret  */
    RECOMP_REGS_OUT();
}

void sub_1101A5D8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101A5D8u);

L_1101A5D8:
    esi = MEM32(ebp + (-0x18)); /* 0x1101A5D8: mov esi, dword ptr [ebp - 0x18] */
    edi = MEM32(ebp + (-0x1C)); /* 0x1101A5DB: mov edi, dword ptr [ebp - 0x1c] */
    /* cmp MEM8(ebp + (-0x11)), 0 */ /* 0x1101A5DE: cmp byte ptr [ebp - 0x11], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x11))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(ebp + (-0x4)) = 1; /* 0x1101A5E2: mov dword ptr [ebp - 4], 1 */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101A5EE; /* 0x1101A5E9: jne 0x1101a5ee */
L_1101A5EB:
    _flag_a = (uint32_t)((edi | 2)); _flag_b = (uint32_t)((edi | 2));
    edi = edi | 2; /* 0x1101A5EB: or edi, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1101A5EE:
    eax = MEM32(esi); /* 0x1101A5EE: mov eax, dword ptr [esi] */
    PUSH32(esp, 0); /* 0x1101A5F0: push 0 */
    PUSH32(esp, edi); /* 0x1101A5F2: push edi */
    ecx = MEM32(eax + 0x4); /* 0x1101A5F3: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101A5F6: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1101A5F8: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x24)); /* 0x1101A5FD: mov ecx, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1101A600: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x1101A604: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x4); /* 0x1101A606: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + ecx + 0x38); /* 0x1101A609: mov ecx, dword ptr [eax + ecx + 0x38] */
    /* test ecx, ecx */ /* 0x1101A60D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101A616; /* 0x1101A60F: je 0x1101a616 */
L_1101A611:
    eax = MEM32(ecx); /* 0x1101A611: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1101A613: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_1101A616:
    eax = esi; /* 0x1101A616: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101A618: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1101A61D: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1101A620(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101A620u);

L_1101A620:
    ecx = MEM32(ebp + (-0x18)); /* 0x1101A620: mov ecx, dword ptr [ebp - 0x18] */
    eax = MEM32(ecx); /* 0x1101A623: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x1101A625: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1101A628: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x1101A62A: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101A62D: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), 0 */ /* 0x1101A630: cmp dword ptr [edx + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101A639; /* 0x1101A634: jne 0x1101a639 */
L_1101A636:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101A636: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1101A639:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x1101A639: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x1101A63C: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x1101A63F: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1101A64A; /* 0x1101A642: jne 0x1101a64a */
L_1101A644:
    eax = 0x1101A5D8u; /* 0x1101A644: mov eax, 0x1101a5d8 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101A649: ret  */
L_1101A64A:
    PUSH32(esp, 0); /* 0x1101A64A: push 0 */
    PUSH32(esp, 0); /* 0x1101A64C: push 0 */
    RECOMP_CALL(sub_1103B33A); /* 0x1101A64E: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1101A653u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1101A654(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101A654u);
    RECOMP_EH_ENTER();

L_1101A654:
    PUSH32(esp, 0x24u); /* 0x1101A654: push 0x24 */
    eax = 0x1103DB84u; /* 0x1101A656: mov eax, 0x1103db84 */
    RECOMP_CALL(sub_1103B3DB); /* 0x1101A65B: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1101A660: mov esi, ecx */
    MEM32(ebp + (-0x18)) = esi; /* 0x1101A662: mov dword ptr [ebp - 0x18], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101A665: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x28); /* 0x1101A667: lea ecx, [ebp - 0x28] */
    PUSH32(esp, esi); /* 0x1101A66A: push esi */
    edi = ebx; /* 0x1101A66B: mov edi, ebx */
    RECOMP_CALL(sub_11010E19); /* 0x1101A66D: call 0x11010e19 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101A672: mov dword ptr [ebp - 4], ebx */
    /* cmp MEM8(ebp + (-0x24)), LO8(ebx) */ /* 0x1101A675: cmp byte ptr [ebp - 0x24], bl */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x24))) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101A705; /* 0x1101A678: je 0x1101a705 */
L_1101A67E:
    eax = ebp + (-0x1C); /* 0x1101A67E: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1101A681: push eax */
    eax = MEM32(esi); /* 0x1101A682: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x1101A684: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101A687: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1100F94A); /* 0x1101A689: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1101A68E: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1101A68F: mov byte ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_110159A3); /* 0x1101A693: call 0x110159a3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101A698: pop ecx */
    ecx = ebp + (-0x1C); /* 0x1101A699: lea ecx, [ebp - 0x1c] */
    MEM32(ebp + (-0x14)) = eax; /* 0x1101A69C: mov dword ptr [ebp - 0x14], eax */
    RECOMP_CALL(sub_1100E431); /* 0x1101A69F: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi); /* 0x1101A6A4: mov ecx, dword ptr [esi] */
    edx = MEM32(ecx + 0x4); /* 0x1101A6A6: mov edx, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x1101A6A9: add edx, esi */
    _flag_k = FK_ADD;
    ecx = MEM32(edx + 0x14); /* 0x1101A6AB: mov ecx, dword ptr [edx + 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xE00u);
    ecx = ecx & 0xE00u; /* 0x1101A6AE: and ecx, 0xe00 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, 0x400u */ /* 0x1101A6B4: cmp ecx, 0x400 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x400u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101A6CC; /* 0x1101A6BA: je 0x1101a6cc */
L_1101A6BC:
    /* cmp ecx, 0x800u */ /* 0x1101A6BC: cmp ecx, 0x800 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x800u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101A6CC; /* 0x1101A6C2: je 0x1101a6cc */
L_1101A6C4:
    eax = MEM32(ebp + 0x8); /* 0x1101A6C4: mov eax, dword ptr [ebp + 8] */
    ecx = (int32_t)(int16_t)LO16(eax); /* 0x1101A6C7: movsx ecx, ax */
    goto L_1101A6D2; /* 0x1101A6CA: jmp 0x1101a6d2 */
L_1101A6CC:
    eax = MEM32(ebp + 0x8); /* 0x1101A6CC: mov eax, dword ptr [ebp + 8] */
    ecx = (uint32_t)LO16(eax); /* 0x1101A6CF: movzx ecx, ax */
L_1101A6D2:
    SET_LO8(eax, MEM8(edx + 0x40)); /* 0x1101A6D2: mov al, byte ptr [edx + 0x40] */
    PUSH32(esp, ecx); /* 0x1101A6D5: push ecx */
    MEM8(ebp + 0x8) = (uint8_t)(LO8(eax)); /* 0x1101A6D6: mov byte ptr [ebp + 8], al */
    ecx = ebp + (-0x30); /* 0x1101A6D9: lea ecx, [ebp - 0x30] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1101A6DC: push dword ptr [ebp + 8] */
    eax = MEM32(ebp + (-0x14)); /* 0x1101A6DF: mov eax, dword ptr [ebp - 0x14] */
    PUSH32(esp, edx); /* 0x1101A6E2: push edx */
    MEM8(ebp + (-0x30)) = (uint8_t)(LO8(ebx)); /* 0x1101A6E3: mov byte ptr [ebp - 0x30], bl */
    PUSH32(esp, MEM32(edx + 0x38)); /* 0x1101A6E6: push dword ptr [edx + 0x38] */
    eax = MEM32(eax); /* 0x1101A6E9: mov eax, dword ptr [eax] */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x1101A6EB: push dword ptr [ebp - 0x30] */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x1101A6EE: mov byte ptr [ebp - 4], 2 */
    PUSH32(esp, ecx); /* 0x1101A6F2: push ecx */
    ecx = MEM32(ebp + (-0x14)); /* 0x1101A6F3: mov ecx, dword ptr [ebp - 0x14] */
    RECOMP_ICALL(MEM32(eax + 0x24)); /* 0x1101A6F6: call dword ptr [eax + 0x24] */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(ebp + (-0x30)), 0 */ /* 0x1101A6F9: cmp byte ptr [ebp - 0x30], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x30))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101A702; /* 0x1101A6FD: je 0x1101a702 */
L_1101A6FF:
    PUSH32(esp, 4); /* 0x1101A6FF: push 4 */
    edi = POP32_VAL(esp); /* 0x1101A701: pop edi */
L_1101A702:
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101A702: mov dword ptr [ebp - 4], ebx */
L_1101A705:
    eax = MEM32(esi); /* 0x1101A705: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x1101A707: push ebx */
    PUSH32(esp, edi); /* 0x1101A708: push edi */
    ecx = MEM32(eax + 0x4); /* 0x1101A709: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101A70C: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1101A70E: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x28); /* 0x1101A713: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_11010E6E); /* 0x1101A716: call 0x11010e6e */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1101A71B: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101A71D: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x1101A722: ret 4 */
L_1101A750:
    esi = MEM32(ebp + (-0x18)); /* 0x1101A750: mov esi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101A753: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101A755: mov dword ptr [ebp - 4], ebx */
    edi = ebx; /* 0x1101A758: mov edi, ebx */
    RECOMP_BACKEDGE();
    goto L_1101A705; /* 0x1101A75A: jmp 0x1101a705 */
    { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x1101A750u: goto L_1101A750;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_1101A725(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101A725u);

L_1101A725:
    ecx = MEM32(ebp + (-0x18)); /* 0x1101A725: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101A728: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x1101A72A: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x1101A72C: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1101A72F: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x1101A731: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101A734: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), ebx */ /* 0x1101A737: cmp dword ptr [edx + 0x38], ebx */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101A73F; /* 0x1101A73A: jne 0x1101a73f */
L_1101A73C:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101A73C: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1101A73F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x1101A73F: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x1101A742: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x1101A745: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1101A75C; /* 0x1101A748: jne 0x1101a75c */
L_1101A74A:
    eax = 0x1101A750u; /* 0x1101A74A: mov eax, 0x1101a750 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101A74F: ret  */
L_1101A75C:
    PUSH32(esp, ebx); /* 0x1101A75C: push ebx */
    PUSH32(esp, ebx); /* 0x1101A75D: push ebx */
    RECOMP_CALL(sub_1103B33A); /* 0x1101A75E: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1101A763u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1101A750(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101A750u);

    goto L_1101A750;
L_1101A705:
    eax = MEM32(esi); /* 0x1101A705: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x1101A707: push ebx */
    PUSH32(esp, edi); /* 0x1101A708: push edi */
    ecx = MEM32(eax + 0x4); /* 0x1101A709: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101A70C: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1101A70E: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x28); /* 0x1101A713: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_11010E6E); /* 0x1101A716: call 0x11010e6e */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1101A71B: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101A71D: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1101A722: ret 4 */
L_1101A750:
    esi = MEM32(ebp + (-0x18)); /* 0x1101A750: mov esi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101A753: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101A755: mov dword ptr [ebp - 4], ebx */
    edi = ebx; /* 0x1101A758: mov edi, ebx */
    RECOMP_BACKEDGE();
    goto L_1101A705; /* 0x1101A75A: jmp 0x1101a705 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1101A764(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101A764u);
    RECOMP_EH_ENTER();

L_1101A764:
    PUSH32(esp, 0x28u); /* 0x1101A764: push 0x28 */
    eax = 0x1103DBAFu; /* 0x1101A766: mov eax, 0x1103dbaf */
    RECOMP_CALL(sub_1103B3DB); /* 0x1101A76B: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1101A770: mov esi, ecx */
    MEM32(ebp + (-0x18)) = esi; /* 0x1101A772: mov dword ptr [ebp - 0x18], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101A775: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x2C); /* 0x1101A777: lea ecx, [ebp - 0x2c] */
    PUSH32(esp, esi); /* 0x1101A77A: push esi */
    edi = ebx; /* 0x1101A77B: mov edi, ebx */
    RECOMP_CALL(sub_11010E19); /* 0x1101A77D: call 0x11010e19 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101A782: mov dword ptr [ebp - 4], ebx */
    /* cmp MEM8(ebp + (-0x28)), LO8(ebx) */ /* 0x1101A785: cmp byte ptr [ebp - 0x28], bl */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x28))) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101A7EF; /* 0x1101A788: je 0x1101a7ef */
L_1101A78A:
    eax = ebp + (-0x1C); /* 0x1101A78A: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1101A78D: push eax */
    eax = MEM32(esi); /* 0x1101A78E: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x1101A790: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101A793: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1100F94A); /* 0x1101A795: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1101A79A: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1101A79B: mov byte ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_110159A3); /* 0x1101A79F: call 0x110159a3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101A7A4: pop ecx */
    ecx = ebp + (-0x1C); /* 0x1101A7A5: lea ecx, [ebp - 0x1c] */
    MEM32(ebp + (-0x14)) = eax; /* 0x1101A7A8: mov dword ptr [ebp - 0x14], eax */
    RECOMP_CALL(sub_1100E431); /* 0x1101A7AB: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi); /* 0x1101A7B0: mov ecx, dword ptr [esi] */
    edx = MEM32(ebp + (-0x14)); /* 0x1101A7B2: mov edx, dword ptr [ebp - 0x14] */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x1101A7B5: mov byte ptr [ebp - 4], 2 */
    ecx = MEM32(ecx + 0x4); /* 0x1101A7B9: mov ecx, dword ptr [ecx + 4] */
    edx = MEM32(edx); /* 0x1101A7BC: mov edx, dword ptr [edx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101A7BE: add ecx, esi */
    _flag_k = FK_ADD;
    SET_LO8(eax, MEM8(ecx + 0x40)); /* 0x1101A7C0: mov al, byte ptr [ecx + 0x40] */
    MEM8(ebp + (-0x20)) = (uint8_t)(LO8(eax)); /* 0x1101A7C3: mov byte ptr [ebp - 0x20], al */
    eax = MEM32(ebp + 0x8); /* 0x1101A7C6: mov eax, dword ptr [ebp + 8] */
    eax = (uint32_t)LO16(eax); /* 0x1101A7C9: movzx eax, ax */
    PUSH32(esp, eax); /* 0x1101A7CC: push eax */
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x1101A7CD: push dword ptr [ebp - 0x20] */
    MEM8(ebp + (-0x34)) = (uint8_t)(LO8(ebx)); /* 0x1101A7D0: mov byte ptr [ebp - 0x34], bl */
    eax = ebp + (-0x34); /* 0x1101A7D3: lea eax, [ebp - 0x34] */
    PUSH32(esp, ecx); /* 0x1101A7D6: push ecx */
    PUSH32(esp, MEM32(ecx + 0x38)); /* 0x1101A7D7: push dword ptr [ecx + 0x38] */
    ecx = MEM32(ebp + (-0x14)); /* 0x1101A7DA: mov ecx, dword ptr [ebp - 0x14] */
    PUSH32(esp, MEM32(ebp + (-0x34))); /* 0x1101A7DD: push dword ptr [ebp - 0x34] */
    PUSH32(esp, eax); /* 0x1101A7E0: push eax */
    RECOMP_ICALL(MEM32(edx + 0x20)); /* 0x1101A7E1: call dword ptr [edx + 0x20] */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(ebp + (-0x34)), LO8(ebx) */ /* 0x1101A7E4: cmp byte ptr [ebp - 0x34], bl */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x34))) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101A7EC; /* 0x1101A7E7: je 0x1101a7ec */
L_1101A7E9:
    PUSH32(esp, 4); /* 0x1101A7E9: push 4 */
    edi = POP32_VAL(esp); /* 0x1101A7EB: pop edi */
L_1101A7EC:
    MEM32(ebp + (-0x4)) = ebx; /* 0x1101A7EC: mov dword ptr [ebp - 4], ebx */
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
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x1101A80C: ret 4 */
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
    { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x1101A83Au: goto L_1101A83A;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}
