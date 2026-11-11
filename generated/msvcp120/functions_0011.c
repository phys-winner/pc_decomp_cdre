#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_110116FF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110116FFu);

L_110116FF:
    PUSH32(esp, ebp); /* 0x110116FF: push ebp */
    ebp = esp; /* 0x11011700: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x11011702: push ebx */
    PUSH32(esp, esi); /* 0x11011703: push esi */
    esi = MEM32(ebp + 0x8); /* 0x11011704: mov esi, dword ptr [ebp + 8] */
    ebx = ecx; /* 0x11011707: mov ebx, ecx */
    eax = MEM32(ebx); /* 0x11011709: mov eax, dword ptr [ebx] */
    /* cmp eax, MEM32(esi) */ /* 0x1101170B: cmp eax, dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11011743; /* 0x1101170D: je 0x11011743 */
L_1101170F:
    PUSH32(esp, edi); /* 0x1101170F: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11011710: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x11011712: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101171F; /* 0x11011714: je 0x1101171f */
L_11011716:
    PUSH32(esp, eax); /* 0x11011716: push eax */
    RECOMP_CALL(sub_1101118B); /* 0x11011717: call 0x1101118b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101171C: pop ecx */
    MEM32(ebx) = edi; /* 0x1101171D: mov dword ptr [ebx], edi */
L_1101171F:
    /* cmp MEM32(esi), edi */ /* 0x1101171F: cmp dword ptr [esi], edi */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11011742; /* 0x11011721: je 0x11011742 */
L_11011723:
    PUSH32(esp, edi); /* 0x11011723: push edi */
    PUSH32(esp, 0x28u); /* 0x11011724: push 0x28 */
    PUSH32(esp, 1); /* 0x11011726: push 1 */
    RECOMP_CALL(sub_1101112B); /* 0x11011728: call 0x1101112b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1101172D: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebx) = eax; /* 0x11011730: mov dword ptr [ebx], eax */
    /* test eax, eax */ /* 0x11011732: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11011742; /* 0x11011734: je 0x11011742 */
L_11011736:
    esi = MEM32(esi); /* 0x11011736: mov esi, dword ptr [esi] */
    edi = eax; /* 0x11011738: mov edi, eax */
    PUSH32(esp, 0xAu); /* 0x1101173A: push 0xa */
    ecx = POP32_VAL(esp); /* 0x1101173C: pop ecx */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1101173D: rep movsd dword ptr es:[edi], dword ptr [esi] */
    esi = MEM32(ebp + 0x8); /* 0x1101173F: mov esi, dword ptr [ebp + 8] */
L_11011742:
    edi = POP32_VAL(esp); /* 0x11011742: pop edi */
L_11011743:
    eax = MEM32(esi + 0x4); /* 0x11011743: mov eax, dword ptr [esi + 4] */
    esi = POP32_VAL(esp); /* 0x11011746: pop esi */
    MEM32(ebx + 0x4) = eax; /* 0x11011747: mov dword ptr [ebx + 4], eax */
    ebx = POP32_VAL(esp); /* 0x1101174A: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1101174B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1101174C: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1101174F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101174Fu);

L_1101174F:
    PUSH32(esp, ebx); /* 0x1101174F: push ebx */
    PUSH32(esp, esi); /* 0x11011750: push esi */
    esi = ecx; /* 0x11011751: mov esi, ecx */
    PUSH32(esp, edi); /* 0x11011753: push edi */
    edi = MEM32(esi); /* 0x11011754: mov edi, dword ptr [esi] */
    eax = MEM32(edi + 0x4); /* 0x11011756: mov eax, dword ptr [edi + 4] */
    ebx = MEM32(edi); /* 0x11011759: mov ebx, dword ptr [edi] */
    edx = MEM32(eax + 0x8); /* 0x1101175B: mov edx, dword ptr [eax + 8] */
    eax = ebx; /* 0x1101175E: mov eax, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x11011760: dec edx */
    _flag_k = FK_DEC;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x11011761: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x11011761: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x11011764: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edx */ /* 0x11011766: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101177A; /* 0x11011768: jne 0x1101177a */
L_1101176A:
    ecx = (uint32_t)((int32_t)ebx * (int32_t)3); /* 0x1101176A: imul ecx, ebx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(7);
    ecx = ecx & 7; /* 0x1101176D: and ecx, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(edi + ecx * 4 + 0x8); /* 0x11011770: mov eax, dword ptr [edi + ecx*4 + 8] */
    eax = MEM32(eax); /* 0x11011774: mov eax, dword ptr [eax] */
    MEM32(edi + ecx * 4 + 0x8) = eax; /* 0x11011776: mov dword ptr [edi + ecx*4 + 8], eax */
L_1101177A:
    eax = MEM32(esi); /* 0x1101177A: mov eax, dword ptr [esi] */
    ecx = ebx + 0x1; /* 0x1101177C: lea ecx, [ebx + 1] */
    PUSH32(esp, ecx); /* 0x1101177F: push ecx */
    MEM32(eax) = ecx; /* 0x11011780: mov dword ptr [eax], ecx */
    ecx = MEM32(esi); /* 0x11011782: mov ecx, dword ptr [esi] */
    RECOMP_CALL(sub_1101166E); /* 0x11011784: call 0x1101166e */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x11011789: pop edi */
    MEM32(esi + 0x4) = eax; /* 0x1101178A: mov dword ptr [esi + 4], eax */
    esi = POP32_VAL(esp); /* 0x1101178D: pop esi */
    ebx = POP32_VAL(esp); /* 0x1101178E: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101178F: ret  */
    RECOMP_REGS_OUT();
}

void sub_11011790(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11011790u);

L_11011790:
    PUSH32(esp, esi); /* 0x11011790: push esi */
    esi = ecx; /* 0x11011791: mov esi, ecx */
    PUSH32(esp, MEM32(esi)); /* 0x11011793: push dword ptr [esi] */
    RECOMP_CALL(sub_1101118B); /* 0x11011795: call 0x1101118b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x1101179A: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1101179D: pop ecx */
    esi = POP32_VAL(esp); /* 0x1101179E: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101179F: ret  */
    RECOMP_REGS_OUT();
}

void sub_110117A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110117A0u);

L_110117A0:
    eax = MEM32(ecx); /* 0x110117A0: mov eax, dword ptr [ecx] */
    { _itail_tgt = (uint32_t)(MEM32(eax)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_110117A4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110117A4u);

L_110117A4:
    eax = MEM32(ecx); /* 0x110117A4: mov eax, dword ptr [ecx] */
    { _itail_tgt = (uint32_t)(MEM32(eax + 0x4)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_110117A9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110117A9u);

L_110117A9:
    PUSH32(esp, ebx); /* 0x110117A9: push ebx */
    PUSH32(esp, esi); /* 0x110117AA: push esi */
    esi = ecx; /* 0x110117AB: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x110117AD: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0); /* 0x110117AF: push 0 */
    ecx = POP32_VAL(esp); /* 0x110117B1: pop ecx */
    eax = MEM32(esi + 0x18); /* 0x110117B2: mov eax, dword ptr [esi + 0x18] */
    edx = esi + 0x4; /* 0x110117B5: lea edx, [esi + 4] */
    /* cmp eax, edx */ /* 0x110117B8: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(ebx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x110117BA: setne bl */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x110117BD: dec ebx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFE3u);
    ebx = ebx & 0xFFFFFFE3u; /* 0x110117BE: and ebx, 0xffffffe3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x20u; /* 0x110117C1: add ebx, 0x20 */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_110117D4; /* 0x110117C4: je 0x110117d4 */
L_110117C6:
    eax = MEM32(esi + 0x18); /* 0x110117C6: mov eax, dword ptr [esi + 0x18] */
    /* cmp MEM32(eax + ecx * 4), 0 */ /* 0x110117C9: cmp dword ptr [eax + ecx*4], 0 */
    _flag_a = (uint32_t)(MEM32(eax + ecx * 4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110117D4; /* 0x110117CD: je 0x110117d4 */
L_110117CF:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x110117CF: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, ebx */ /* 0x110117D0: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_110117C6; /* 0x110117D2: jb 0x110117c6 */
L_110117D4:
    esi = POP32_VAL(esp); /* 0x110117D4: pop esi */
    eax = ecx; /* 0x110117D5: mov eax, ecx */
    ebx = POP32_VAL(esp); /* 0x110117D7: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110117D8: ret  */
    RECOMP_REGS_OUT();
}

void sub_110117D9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110117D9u);

L_110117D9:
    PUSH32(esp, 0x40u); /* 0x110117D9: push 0x40 */
    eax = 0x1103CF1Au; /* 0x110117DB: mov eax, 0x1103cf1a */
    RECOMP_CALL(sub_1103B3DB); /* 0x110117E0: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    ebx = edx; /* 0x110117E5: mov ebx, edx */
    MEM32(ebp + (-0x20)) = ebx; /* 0x110117E7: mov dword ptr [ebp - 0x20], ebx */
    edi = ecx; /* 0x110117EA: mov edi, ecx */
    MEM32(ebp + (-0x18)) = edi; /* 0x110117EC: mov dword ptr [ebp - 0x18], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x110117EF: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ebx, ebx */ /* 0x110117F1: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11011842; /* 0x110117F3: jne 0x11011842 */
L_110117F5:
    ebx = edi + 0x10; /* 0x110117F5: lea ebx, [edi + 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x110117F8: inc edx */
    _flag_k = FK_INC;
    /* cmp MEM32(ebx), esi */ /* 0x110117F9: cmp dword ptr [ebx], esi */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11011805; /* 0x110117FB: jne 0x11011805 */
L_110117FD:
    ecx = edx; /* 0x110117FD: mov ecx, edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x110117FF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(ebx); if (eax == _d) { MEM32(ebx) = ecx; } else { eax = _d; } } /* 0x11011801: lock cmpxchg dword ptr [ebx], ecx */
    _flag_k = FK_CMP;
L_11011805:
    MEM32(ebp + (-0x4)) = esi; /* 0x11011805: mov dword ptr [ebp - 4], esi */
    ecx = MEM32(ebx); /* 0x11011808: mov ecx, dword ptr [ebx] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x1101180A: shl edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << ((LO8(ecx)) & 31); /* 0x1101180A: shl edx, cl */
    PUSH32(esp, edx); /* 0x1101180C: push edx */
    PUSH32(esp, edi); /* 0x1101180D: push edi */
    RECOMP_ICALL(MEM32(edi)); /* 0x1101180E: call dword ptr [edi] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11011810: pop ecx */
    ecx = POP32_VAL(esp); /* 0x11011811: pop ecx */
    ecx = eax; /* 0x11011812: mov ecx, eax */
    /* test ecx, ecx */ /* 0x11011814: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1101181F; /* 0x11011816: jne 0x1101181f */
L_11011818:
    RECOMP_CALL(sub_1101163C); /* 0x11011818: call 0x1101163c */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1101181D: mov ecx, eax */
L_1101181F:
    eax = MEM32(edi + 0x18); /* 0x1101181F: mov eax, dword ptr [edi + 0x18] */
    PUSH32(esp, 2); /* 0x11011822: push 2 */
    MEM32(eax) = ecx; /* 0x11011824: mov dword ptr [eax], ecx */
    eax = POP32_VAL(esp); /* 0x11011826: pop eax */
L_11011827:
    RECOMP_CALL(sub_1103B340); /* 0x11011827: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101182C: ret  */
L_1101183D:
    RECOMP_CALL(sub_1103B33A); /* 0x1101183D: call 0x1103b33a */
    RECOMP_FLAGS_IN();
L_11011842:
    edx = MEM32(0x11069230); /* 0x11011842: mov edx, dword ptr [0x11069230] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11011848: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1101184A: inc eax */
    _flag_k = FK_INC;
    ecx = ebx; /* 0x1101184B: mov ecx, ebx */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x1101184D: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x1101184D: shl eax, cl */
    MEM32(ebp + (-0x14)) = eax; /* 0x1101184F: mov dword ptr [ebp - 0x14], eax */
    /* cmp MEM32(edi + 0x10), esi */ /* 0x11011852: cmp dword ptr [edi + 0x10], esi */
    _flag_a = (uint32_t)(MEM32(edi + 0x10)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11011874; /* 0x11011855: jne 0x11011874 */
L_11011857:
    MEM32(ebp + (-0x34)) = esi; /* 0x11011857: mov dword ptr [ebp - 0x34], esi */
    MEM32(ebp + (-0x30)) = edx; /* 0x1101185A: mov dword ptr [ebp - 0x30], edx */
L_1101185D:
    ecx = ebp + (-0x3C); /* 0x1101185D: lea ecx, [ebp - 0x3c] */
    RECOMP_ICALL(MEM32(0x11069234)); /* 0x11011860: call dword ptr [0x11069234] */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(edi + 0x10), esi */ /* 0x11011866: cmp dword ptr [edi + 0x10], esi */
    _flag_a = (uint32_t)(MEM32(edi + 0x10)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101185D; /* 0x11011869: je 0x1101185d */
L_1101186B:
    eax = MEM32(ebp + (-0x14)); /* 0x1101186B: mov eax, dword ptr [ebp - 0x14] */
    edx = MEM32(0x11069230); /* 0x1101186E: mov edx, dword ptr [0x11069230] */
L_11011874:
    /* cmp ebx, MEM32(edi + 0x10) */ /* 0x11011874: cmp ebx, dword ptr [edi + 0x10] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(edi + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_110118E1; /* 0x11011877: jae 0x110118e1 */
L_11011879:
    edi = MEM32(edi + 0x18); /* 0x11011879: mov edi, dword ptr [edi + 0x18] */
    ecx = MEM32(edi); /* 0x1101187C: mov ecx, dword ptr [edi] */
    /* test ecx, ecx */ /* 0x1101187E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11011899; /* 0x11011880: jne 0x11011899 */
L_11011882:
    MEM32(ebp + (-0x44)) = esi; /* 0x11011882: mov dword ptr [ebp - 0x44], esi */
    MEM32(ebp + (-0x40)) = edx; /* 0x11011885: mov dword ptr [ebp - 0x40], edx */
    goto L_11011893; /* 0x11011888: jmp 0x11011893 */
L_1101188A:
    ecx = ebp + (-0x4C); /* 0x1101188A: lea ecx, [ebp - 0x4c] */
    RECOMP_ICALL(MEM32(0x11069234)); /* 0x1101188D: call dword ptr [0x11069234] */
    RECOMP_FLAGS_IN();
L_11011893:
    /* cmp MEM32(edi), esi */ /* 0x11011893: cmp dword ptr [edi], esi */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101188A; /* 0x11011895: je 0x1101188a */
L_11011897:
    ecx = MEM32(edi); /* 0x11011897: mov ecx, dword ptr [edi] */
L_11011899:
    PUSH32(esp, 0x3Fu); /* 0x11011899: push 0x3f */
    eax = POP32_VAL(esp); /* 0x1101189B: pop eax */
    /* cmp ecx, eax */ /* 0x1101189C: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_110118CE; /* 0x1101189E: ja 0x110118ce */
L_110118A0:
    MEM32(edi + ebx * 4) = eax; /* 0x110118A0: mov dword ptr [edi + ebx*4], eax */
    ecx = ebp + (-0x2C); /* 0x110118A3: lea ecx, [ebp - 0x2c] */
    PUSH32(esp, 1); /* 0x110118A6: push 1 */
    eax = ebp + (-0x1C); /* 0x110118A8: lea eax, [ebp - 0x1c] */
    MEM32(ebp + (-0x1C)) = 0x110049A0u; /* 0x110118AB: mov dword ptr [ebp - 0x1c], 0x110049a0 */
    PUSH32(esp, eax); /* 0x110118B2: push eax */
    RECOMP_ICALL(MEM32(0x110692E8)); /* 0x110118B3: call dword ptr [0x110692e8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x11045724u); /* 0x110118B9: push 0x11045724 */
    eax = ebp + (-0x2C); /* 0x110118BE: lea eax, [ebp - 0x2c] */
    MEM32(ebp + (-0x2C)) = 0x11001458u; /* 0x110118C1: mov dword ptr [ebp - 0x2c], 0x11001458 */
    PUSH32(esp, eax); /* 0x110118C8: push eax */
    RECOMP_BACKEDGE();
    goto L_1101183D; /* 0x110118C9: jmp 0x1101183d */
L_110118CE:
    edx = MEM32(ebp + (-0x14)); /* 0x110118CE: mov edx, dword ptr [ebp - 0x14] */
    eax = edx; /* 0x110118D1: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    eax = eax & 0xFFFFFFFEu; /* 0x110118D3: and eax, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x8)); /* 0x110118D6: imul eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x110118DA: add eax, ecx */
    _flag_k = FK_ADD;
    MEM32(edi + ebx * 4) = eax; /* 0x110118DC: mov dword ptr [edi + ebx*4], eax */
    goto L_11011900; /* 0x110118DF: jmp 0x11011900 */
L_110118E1:
    PUSH32(esp, eax); /* 0x110118E1: push eax */
    PUSH32(esp, edi); /* 0x110118E2: push edi */
    MEM32(ebp + (-0x4)) = 2; /* 0x110118E3: mov dword ptr [ebp - 4], 2 */
    RECOMP_ICALL(MEM32(edi)); /* 0x110118EA: call dword ptr [edi] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110118EC: pop ecx */
    ecx = POP32_VAL(esp); /* 0x110118ED: pop ecx */
    /* test eax, eax */ /* 0x110118EE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110118F7; /* 0x110118F0: jne 0x110118f7 */
L_110118F2:
    RECOMP_CALL(sub_1101163C); /* 0x110118F2: call 0x1101163c */
    RECOMP_FLAGS_IN();
L_110118F7:
    ecx = MEM32(edi + 0x18); /* 0x110118F7: mov ecx, dword ptr [edi + 0x18] */
    edx = MEM32(ebp + (-0x14)); /* 0x110118FA: mov edx, dword ptr [ebp - 0x14] */
    MEM32(ecx + ebx * 4) = eax; /* 0x110118FD: mov dword ptr [ecx + ebx*4], eax */
L_11011900:
    eax = edx; /* 0x11011900: mov eax, edx */
    RECOMP_BACKEDGE();
    goto L_11011827; /* 0x11011902: jmp 0x11011827 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1101191C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101191Cu);

L_1101191C:
    PUSH32(esp, ebp); /* 0x1101191C: push ebp */
    ebp = esp; /* 0x1101191D: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x1101191F: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x11011922: sub esp, 0x1c */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x11011925: push ebx */
    PUSH32(esp, esi); /* 0x11011926: push esi */
    PUSH32(esp, edi); /* 0x11011927: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x11011928: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ecx; /* 0x1101192A: mov edi, ecx */
    PUSH32(esp, esi); /* 0x1101192C: push esi */
    PUSH32(esp, 4); /* 0x1101192D: push 4 */
    PUSH32(esp, 0x20u); /* 0x1101192F: push 0x20 */
    MEM32(esp + 0x1C) = edi; /* 0x11011931: mov dword ptr [esp + 0x1c], edi */
    RECOMP_CALL(sub_1101112B); /* 0x11011935: call 0x1101112b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1101193A: add esp, 0xc */
    _flag_k = FK_ADD;
    ebx = eax; /* 0x1101193D: mov ebx, eax */
    MEM32(esp + 0x14) = ebx; /* 0x1101193F: mov dword ptr [esp + 0x14], ebx */
    PUSH32(esp, 0x80u); /* 0x11011943: push 0x80 */
    PUSH32(esp, esi); /* 0x11011948: push esi */
    PUSH32(esp, ebx); /* 0x11011949: push ebx */
    RECOMP_CALL(sub_1103B49A); /* 0x1101194A: call 0x1103b49a */
    RECOMP_FLAGS_IN();
    ebx = MEM32(0x11069230); /* 0x1101194F: mov ebx, dword ptr [0x11069230] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11011955: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x11011958: add edi, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, 3); /* 0x1101195B: push 3 */
    eax = POP32_VAL(esp); /* 0x1101195D: pop eax */
    MEM32(esp + 0xC) = eax; /* 0x1101195E: mov dword ptr [esp + 0xc], eax */
L_11011962:
    /* cmp MEM32(edi), esi */ /* 0x11011962: cmp dword ptr [edi], esi */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11011980; /* 0x11011964: jne 0x11011980 */
L_11011966:
    MEM32(esp + 0x20) = esi; /* 0x11011966: mov dword ptr [esp + 0x20], esi */
    MEM32(esp + 0x24) = ebx; /* 0x1101196A: mov dword ptr [esp + 0x24], ebx */
L_1101196E:
    ecx = esp + 0x18; /* 0x1101196E: lea ecx, [esp + 0x18] */
    RECOMP_ICALL(MEM32(0x11069234)); /* 0x11011972: call dword ptr [0x11069234] */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(edi), esi */ /* 0x11011978: cmp dword ptr [edi], esi */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101196E; /* 0x1101197A: je 0x1101196e */
L_1101197C:
    eax = MEM32(esp + 0xC); /* 0x1101197C: mov eax, dword ptr [esp + 0xc] */
L_11011980:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x11011980: add edi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x11011983: dec eax */
    _flag_k = FK_DEC;
    MEM32(esp + 0xC) = eax; /* 0x11011984: mov dword ptr [esp + 0xc], eax */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_11011962; /* 0x11011988: jne 0x11011962 */
L_1101198A:
    edi = MEM32(esp + 0x10); /* 0x1101198A: mov edi, dword ptr [esp + 0x10] */
    ebx = MEM32(esp + 0x14); /* 0x1101198E: mov ebx, dword ptr [esp + 0x14] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x11011992: add edi, 4 */
    _flag_k = FK_ADD;
    ecx = edi; /* 0x11011995: mov ecx, edi */
L_11011997:
    eax = MEM32(ecx); /* 0x11011997: mov eax, dword ptr [ecx] */
    ecx = ecx + 0x4; /* 0x11011999: lea ecx, [ecx + 4] */
    MEM32(ebx + esi * 4) = eax; /* 0x1101199C: mov dword ptr [ebx + esi*4], eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1101199F: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, 3 */ /* 0x110119A0: cmp esi, 3 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_11011997; /* 0x110119A3: jb 0x11011997 */
L_110119A5:
    ecx = MEM32(esp + 0x10); /* 0x110119A5: mov ecx, dword ptr [esp + 0x10] */
    edx = ebx; /* 0x110119A9: mov edx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x18u; /* 0x110119AB: add ecx, 0x18 */
    _flag_k = FK_ADD;
    eax = edi; /* 0x110119AE: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(ecx); if (eax == _d) { MEM32(ecx) = edx; } else { eax = _d; } } /* 0x110119B0: lock cmpxchg dword ptr [ecx], edx */
    _flag_k = FK_CMP;
    /* cmp eax, edi */ /* 0x110119B4: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110119BF; /* 0x110119B6: je 0x110119bf */
L_110119B8:
    PUSH32(esp, ebx); /* 0x110119B8: push ebx */
    RECOMP_CALL(sub_1101118B); /* 0x110119B9: call 0x1101118b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110119BE: pop ecx */
L_110119BF:
    edi = POP32_VAL(esp); /* 0x110119BF: pop edi */
    esi = POP32_VAL(esp); /* 0x110119C0: pop esi */
    ebx = POP32_VAL(esp); /* 0x110119C1: pop ebx */
    esp = ebp; /* 0x110119C2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x110119C4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110119C5: ret  */
    RECOMP_REGS_OUT();
}

void sub_110119C6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110119C6u);

L_110119C6:
    PUSH32(esp, esi); /* 0x110119C6: push esi */
    esi = MEM32(ecx + 0x18); /* 0x110119C7: mov esi, dword ptr [ecx + 0x18] */
    edx = ecx + 0x4; /* 0x110119CA: lea edx, [ecx + 4] */
    /* cmp esi, edx */ /* 0x110119CD: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110119E4; /* 0x110119CF: je 0x110119e4 */
L_110119D1:
    PUSH32(esp, edi); /* 0x110119D1: push edi */
    edi = edx; /* 0x110119D2: mov edi, edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x110119D4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x110119D6: push esi */
    MEM32(edi) = eax; edi += _df * 4; /* 0x110119D7: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x110119D8: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x110119D9: stosd dword ptr es:[edi], eax */
    MEM32(ecx + 0x18) = edx; /* 0x110119DA: mov dword ptr [ecx + 0x18], edx */
    RECOMP_CALL(sub_1101118B); /* 0x110119DD: call 0x1101118b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110119E2: pop ecx */
    edi = POP32_VAL(esp); /* 0x110119E3: pop edi */
L_110119E4:
    esi = POP32_VAL(esp); /* 0x110119E4: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110119E5: ret  */
    RECOMP_REGS_OUT();
}

void sub_110119E6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110119E6u);

L_110119E6:
    PUSH32(esp, ebp); /* 0x110119E6: push ebp */
    ebp = esp; /* 0x110119E7: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x110119E9: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x110119EC: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x110119EF: push eax */
    RECOMP_ICALL(MEM32(0x11069248)); /* 0x110119F0: call dword ptr [0x11069248] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110119F6: pop ecx */
    ebp = POP32_VAL(esp); /* 0x110119F7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110119F8: ret  */
    RECOMP_REGS_OUT();
}

void sub_110119F9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110119F9u);

L_110119F9:
    RECOMP_CALL(sub_110117A9); /* 0x110119F9: call 0x110117a9 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x110119FE: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = eax; /* 0x11011A00: mov ecx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x11011A02: inc edx */
    _flag_k = FK_INC;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x11011A03: shl edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << ((LO8(ecx)) & 31); /* 0x11011A03: shl edx, cl */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    edx = edx & 0xFFFFFFFEu; /* 0x11011A05: and edx, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edx; /* 0x11011A08: mov eax, edx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11011A0A: ret  */
    RECOMP_REGS_OUT();
}

void sub_11011A0B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11011A0Bu);

L_11011A0B:
    PUSH32(esp, ebp); /* 0x11011A0B: push ebp */
    ebp = esp; /* 0x11011A0C: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x11011A0E: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x24u; /* 0x11011A11: sub esp, 0x24 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x11011A14: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_11011A46; /* 0x11011A17: je 0x11011a46 */
L_11011A19:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x11011A19: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_11011A21; /* 0x11011A1A: je 0x11011a21 */
L_11011A1C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x11011A1C: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_11011A6B; /* 0x11011A1D: jne 0x11011a6b */
L_11011A1F:
    goto L_11011A71; /* 0x11011A1F: jmp 0x11011a71 */
L_11011A21:
    eax = ebp + 0x8; /* 0x11011A21: lea eax, [ebp + 8] */
    MEM32(ebp + 0x8) = 0x11004AE8u; /* 0x11011A24: mov dword ptr [ebp + 8], 0x11004ae8 */
    PUSH32(esp, eax); /* 0x11011A2B: push eax */
    ecx = ebp + (-0x18); /* 0x11011A2C: lea ecx, [ebp - 0x18] */
    RECOMP_ICALL(MEM32(0x110692EC)); /* 0x11011A2F: call dword ptr [0x110692ec] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x18)) = 0x11001488u; /* 0x11011A35: mov dword ptr [ebp - 0x18], 0x11001488 */
    eax = ebp + (-0x18); /* 0x11011A3C: lea eax, [ebp - 0x18] */
    PUSH32(esp, 0x11045734u); /* 0x11011A3F: push 0x11045734 */
    goto L_11011A94; /* 0x11011A44: jmp 0x11011a94 */
L_11011A46:
    eax = ebp + 0x8; /* 0x11011A46: lea eax, [ebp + 8] */
    MEM32(ebp + 0x8) = 0x11004AD4u; /* 0x11011A49: mov dword ptr [ebp + 8], 0x11004ad4 */
    PUSH32(esp, eax); /* 0x11011A50: push eax */
    ecx = ebp + (-0x24); /* 0x11011A51: lea ecx, [ebp - 0x24] */
    RECOMP_ICALL(MEM32(0x110692EC)); /* 0x11011A54: call dword ptr [0x110692ec] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x24)) = 0x11001488u; /* 0x11011A5A: mov dword ptr [ebp - 0x24], 0x11001488 */
    eax = ebp + (-0x24); /* 0x11011A61: lea eax, [ebp - 0x24] */
    PUSH32(esp, 0x11045734u); /* 0x11011A64: push 0x11045734 */
    goto L_11011A94; /* 0x11011A69: jmp 0x11011a94 */
L_11011A6B:
    esp = ebp; /* 0x11011A6B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x11011A6D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11011A6E: ret 4 */
L_11011A71:
    eax = ebp + 0x8; /* 0x11011A71: lea eax, [ebp + 8] */
    MEM32(ebp + 0x8) = 0x11004B0Cu; /* 0x11011A74: mov dword ptr [ebp + 8], 0x11004b0c */
    PUSH32(esp, eax); /* 0x11011A7B: push eax */
    ecx = ebp + (-0xC); /* 0x11011A7C: lea ecx, [ebp - 0xc] */
    RECOMP_ICALL(MEM32(0x110692EC)); /* 0x11011A7F: call dword ptr [0x110692ec] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0xC)) = 0x11004B9Cu; /* 0x11011A85: mov dword ptr [ebp - 0xc], 0x11004b9c */
    eax = ebp + (-0xC); /* 0x11011A8C: lea eax, [ebp - 0xc] */
    PUSH32(esp, 0x11045754u); /* 0x11011A8F: push 0x11045754 */
L_11011A94:
    PUSH32(esp, eax); /* 0x11011A94: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x11011A95: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x11011A9Au, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11011A9B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11011A9Bu);

L_11011A9B:
    PUSH32(esp, ebp); /* 0x11011A9B: push ebp */
    ebp = esp; /* 0x11011A9C: mov ebp, esp */
    PUSH32(esp, esi); /* 0x11011A9E: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11011A9F: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x11011AA2: mov esi, ecx */
    RECOMP_ICALL(MEM32(0x110692E4)); /* 0x11011AA4: call dword ptr [0x110692e4] */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x11001488u; /* 0x11011AAA: mov dword ptr [esi], 0x11001488 */
    eax = esi; /* 0x11011AB0: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x11011AB2: pop esi */
    ebp = POP32_VAL(esp); /* 0x11011AB3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11011AB4: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11011AD3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11011AD3u);

L_11011AD3:
    PUSH32(esp, 0x18u); /* 0x11011AD3: push 0x18 */
    eax = 0x1103CF35u; /* 0x11011AD5: mov eax, 0x1103cf35 */
    RECOMP_CALL(sub_1103B3DB); /* 0x11011ADA: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x11011ADF: mov edi, ecx */
    MEM32(ebp + (-0x18)) = edi; /* 0x11011AE1: mov dword ptr [ebp - 0x18], edi */
    eax = MEM32(ebp + 0x8); /* 0x11011AE4: mov eax, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(ebp + 0x10) */ /* 0x11011AE7: cmp eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_11011B15; /* 0x11011AEA: jbe 0x11011b15 */
L_11011AEC:
    eax = ebp + (-0x14); /* 0x11011AEC: lea eax, [ebp - 0x14] */
    MEM32(ebp + (-0x14)) = 0x11004B48u; /* 0x11011AEF: mov dword ptr [ebp - 0x14], 0x11004b48 */
    PUSH32(esp, eax); /* 0x11011AF6: push eax */
    ecx = ebp + (-0x24); /* 0x11011AF7: lea ecx, [ebp - 0x24] */
    RECOMP_ICALL(MEM32(0x110692EC)); /* 0x11011AFA: call dword ptr [0x110692ec] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x11045744u); /* 0x11011B00: push 0x11045744 */
    eax = ebp + (-0x24); /* 0x11011B05: lea eax, [ebp - 0x24] */
    MEM32(ebp + (-0x24)) = 0x1100147Cu; /* 0x11011B08: mov dword ptr [ebp - 0x24], 0x1100147c */
    PUSH32(esp, eax); /* 0x11011B0F: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x11011B10: call 0x1103b33a */
    RECOMP_FLAGS_IN();
L_11011B15:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x11011B15: dec eax */
    _flag_k = FK_DEC;
    PUSH32(esp, eax); /* 0x11011B16: push eax */
    RECOMP_CALL(sub_110119E6); /* 0x11011B17: call 0x110119e6 */
    RECOMP_FLAGS_IN();
    edx = edi + 0x10; /* 0x11011B1C: lea edx, [edi + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x11011B1F: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x11011B21: pop ecx */
    /* cmp MEM32(edx), ebx */ /* 0x11011B22: cmp dword ptr [edx], ebx */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11011B2F; /* 0x11011B24: jne 0x11011b2f */
L_11011B26:
    ecx = eax + 0x1; /* 0x11011B26: lea ecx, [eax + 1] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11011B29: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(edx); if (eax == _d) { MEM32(edx) = ecx; } else { eax = _d; } } /* 0x11011B2B: lock cmpxchg dword ptr [edx], ecx */
    _flag_k = FK_CMP;
L_11011B2F:
    ecx = edi; /* 0x11011B2F: mov ecx, edi */
    RECOMP_CALL(sub_110117A9); /* 0x11011B31: call 0x110117a9 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = ebx; /* 0x11011B36: mov dword ptr [ebp - 4], ebx */
    esi = eax; /* 0x11011B39: mov esi, eax */
    ebx = MEM32(ebp + 0x8); /* 0x11011B3B: mov ebx, dword ptr [ebp + 8] */
    MEM32(ebp + 0x10) = eax; /* 0x11011B3E: mov dword ptr [ebp + 0x10], eax */
L_11011B41:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x11011B41: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x11011B43: mov ecx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x11011B45: inc edx */
    _flag_k = FK_INC;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x11011B46: shl edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << ((LO8(ecx)) & 31); /* 0x11011B46: shl edx, cl */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    edx = edx & 0xFFFFFFFEu; /* 0x11011B48: and edx, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, ebx */ /* 0x11011B4B: cmp edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_11011B88; /* 0x11011B4D: jae 0x11011b88 */
L_11011B4F:
    /* cmp esi, 3 */ /* 0x11011B4F: cmp esi, 3 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_11011B63; /* 0x11011B52: jb 0x11011b63 */
L_11011B54:
    eax = edi + 0x4; /* 0x11011B54: lea eax, [edi + 4] */
    /* cmp MEM32(edi + 0x18), eax */ /* 0x11011B57: cmp dword ptr [edi + 0x18], eax */
    _flag_a = (uint32_t)(MEM32(edi + 0x18)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11011B63; /* 0x11011B5A: jne 0x11011b63 */
L_11011B5C:
    ecx = edi; /* 0x11011B5C: mov ecx, edi */
    RECOMP_CALL(sub_1101191C); /* 0x11011B5E: call 0x1101191c */
    RECOMP_FLAGS_IN();
L_11011B63:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11011B63: push dword ptr [ebp + 0xc] */
    edx = esi; /* 0x11011B66: mov edx, esi */
    ecx = edi; /* 0x11011B68: mov ecx, edi */
    RECOMP_CALL(sub_110117D9); /* 0x11011B6A: call 0x110117d9 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x11011B6F: inc esi */
    _flag_k = FK_INC;
    ecx = POP32_VAL(esp); /* 0x11011B70: pop ecx */
    MEM32(ebp + 0x10) = esi; /* 0x11011B71: mov dword ptr [ebp + 0x10], esi */
    RECOMP_BACKEDGE();
    goto L_11011B41; /* 0x11011B74: jmp 0x11011b41 */
L_11011B88:
    RECOMP_CALL(sub_1103B340); /* 0x11011B88: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x11011B8D: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_11011BAC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11011BACu);

L_11011BAC:
    PUSH32(esp, ebp); /* 0x11011BAC: push ebp */
    ebp = esp; /* 0x11011BAD: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x11011BAF: push ecx */
    eax = MEM32(ebp + 0x8); /* 0x11011BB0: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x11011BB3: push ebx */
    PUSH32(esp, esi); /* 0x11011BB4: push esi */
    esi = ecx; /* 0x11011BB5: mov esi, ecx */
    ebx = MEM32(eax + 0x14); /* 0x11011BB7: mov ebx, dword ptr [eax + 0x14] */
    MEM32(esi + 0x14) = ebx; /* 0x11011BBA: mov dword ptr [esi + 0x14], ebx */
    eax = esi + 0x4; /* 0x11011BBD: lea eax, [esi + 4] */
    MEM32(esi + 0x18) = eax; /* 0x11011BC0: mov dword ptr [esi + 0x18], eax */
    /* test ebx, ebx */ /* 0x11011BC3: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11011C69; /* 0x11011BC5: je 0x11011c69 */
L_11011BCB:
    PUSH32(esp, edi); /* 0x11011BCB: push edi */
    PUSH32(esp, ebx); /* 0x11011BCC: push ebx */
    RECOMP_CALL(sub_110119E6); /* 0x11011BCD: call 0x110119e6 */
    RECOMP_FLAGS_IN();
    edx = esi + 0x10; /* 0x11011BD2: lea edx, [esi + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11011BD5: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x11011BD7: pop ecx */
    /* cmp MEM32(edx), edi */ /* 0x11011BD8: cmp dword ptr [edx], edi */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11011BE5; /* 0x11011BDA: jne 0x11011be5 */
L_11011BDC:
    ecx = eax + 0x1; /* 0x11011BDC: lea ecx, [eax + 1] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11011BDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(edx); if (eax == _d) { MEM32(edx) = ecx; } else { eax = _d; } } /* 0x11011BE1: lock cmpxchg dword ptr [edx], ecx */
    _flag_k = FK_CMP;
L_11011BE5:
    edx = edi; /* 0x11011BE5: mov edx, edi */
    MEM32(ebp + (-0x4)) = edx; /* 0x11011BE7: mov dword ptr [ebp - 4], edx */
    /* test ebx, ebx */ /* 0x11011BEA: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11011C68; /* 0x11011BEC: je 0x11011c68 */
L_11011BEE:
    eax = MEM32(ebp + 0x8); /* 0x11011BEE: mov eax, dword ptr [ebp + 8] */
    ecx = eax + 0x4; /* 0x11011BF1: lea ecx, [eax + 4] */
L_11011BF4:
    /* cmp MEM32(eax + 0x18), ecx */ /* 0x11011BF4: cmp dword ptr [eax + 0x18], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x18)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11011BFE; /* 0x11011BF7: jne 0x11011bfe */
L_11011BF9:
    /* cmp edi, 3 */ /* 0x11011BF9: cmp edi, 3 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_11011C65; /* 0x11011BFC: jae 0x11011c65 */
L_11011BFE:
    eax = MEM32(eax + 0x18); /* 0x11011BFE: mov eax, dword ptr [eax + 0x18] */
    /* cmp MEM32(eax + edi * 4), 0x3Fu */ /* 0x11011C01: cmp dword ptr [eax + edi*4], 0x3f */
    _flag_a = (uint32_t)(MEM32(eax + edi * 4)); _flag_b = (uint32_t)(0x3Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_11011C65; /* 0x11011C05: jbe 0x11011c65 */
L_11011C07:
    /* cmp edi, 3 */ /* 0x11011C07: cmp edi, 3 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_11011C1B; /* 0x11011C0A: jb 0x11011c1b */
L_11011C0C:
    eax = esi + 0x4; /* 0x11011C0C: lea eax, [esi + 4] */
    /* cmp MEM32(esi + 0x18), eax */ /* 0x11011C0F: cmp dword ptr [esi + 0x18], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x18)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11011C1B; /* 0x11011C12: jne 0x11011c1b */
L_11011C14:
    ecx = esi; /* 0x11011C14: mov ecx, esi */
    RECOMP_CALL(sub_1101191C); /* 0x11011C16: call 0x1101191c */
    RECOMP_FLAGS_IN();
L_11011C1B:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11011C1B: push dword ptr [ebp + 0xc] */
    edx = edi; /* 0x11011C1E: mov edx, edi */
    ecx = esi; /* 0x11011C20: mov ecx, esi */
    RECOMP_CALL(sub_110117D9); /* 0x11011C22: call 0x110117d9 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11011C27: pop ecx */
    ecx = ebx; /* 0x11011C28: mov ecx, ebx */
    edx = eax; /* 0x11011C2A: mov edx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0x4)); /* 0x11011C2C: sub ecx, dword ptr [ebp - 4] */
    _flag_k = FK_CMP;
    /* cmp edx, ecx */ /* 0x11011C2F: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_11011C35; /* 0x11011C31: jbe 0x11011c35 */
L_11011C33:
    edx = ecx; /* 0x11011C33: mov edx, ecx */
L_11011C35:
    eax = MEM32(ebp + 0x8); /* 0x11011C35: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, edx); /* 0x11011C38: push edx */
    eax = MEM32(eax + 0x18); /* 0x11011C39: mov eax, dword ptr [eax + 0x18] */
    PUSH32(esp, MEM32(eax + edi * 4)); /* 0x11011C3C: push dword ptr [eax + edi*4] */
    eax = MEM32(esi + 0x18); /* 0x11011C3F: mov eax, dword ptr [esi + 0x18] */
    PUSH32(esp, MEM32(eax + edi * 4)); /* 0x11011C42: push dword ptr [eax + edi*4] */
    RECOMP_ICALL(MEM32(ebp + 0x10)); /* 0x11011C45: call dword ptr [ebp + 0x10] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x11011C48: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x11011C4B: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11011C4D: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x11011C50: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x11011C51: inc edi */
    _flag_k = FK_INC;
    ecx = edi; /* 0x11011C52: mov ecx, edi */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x11011C54: shl edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << ((LO8(ecx)) & 31); /* 0x11011C54: shl edx, cl */
    ecx = eax + 0x4; /* 0x11011C56: lea ecx, [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    edx = edx & 0xFFFFFFFEu; /* 0x11011C59: and edx, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = edx; /* 0x11011C5C: mov dword ptr [ebp - 4], edx */
    /* cmp edx, ebx */ /* 0x11011C5F: cmp edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_11011BF4; /* 0x11011C61: jb 0x11011bf4 */
L_11011C63:
    goto L_11011C68; /* 0x11011C63: jmp 0x11011c68 */
L_11011C65:
    MEM32(esi + 0x14) = edx; /* 0x11011C65: mov dword ptr [esi + 0x14], edx */
L_11011C68:
    edi = POP32_VAL(esp); /* 0x11011C68: pop edi */
L_11011C69:
    esi = POP32_VAL(esp); /* 0x11011C69: pop esi */
    ebx = POP32_VAL(esp); /* 0x11011C6A: pop ebx */
    esp = ebp; /* 0x11011C6B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x11011C6D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x11011C6E: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_11011C71(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11011C71u);

L_11011C71:
    PUSH32(esp, ebp); /* 0x11011C71: push ebp */
    ebp = esp; /* 0x11011C72: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x11011C74: sub esp, 0x1c */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x11011C77: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x11011C78: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x11011C7B: push esi */
    PUSH32(esp, edi); /* 0x11011C7C: push edi */
    esi = ecx; /* 0x11011C7D: mov esi, ecx */
    ebx = MEM32(ebx + 0x14); /* 0x11011C7F: mov ebx, dword ptr [ebx + 0x14] */
    MEM32(ebp + (-0x8)) = ebx; /* 0x11011C82: mov dword ptr [ebp - 8], ebx */
    goto L_11011CD4; /* 0x11011C85: jmp 0x11011cd4 */
L_11011C87:
    eax = MEM32(esi + 0x14); /* 0x11011C87: mov eax, dword ptr [esi + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x11011C8A: dec eax */
    _flag_k = FK_DEC;
    PUSH32(esp, eax); /* 0x11011C8B: push eax */
    RECOMP_CALL(sub_110119E6); /* 0x11011C8C: call 0x110119e6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x11011C91: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x11011C93: pop ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x11011C94: inc edx */
    _flag_k = FK_INC;
    ecx = eax; /* 0x11011C95: mov ecx, eax */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x11011C97: shl edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << ((LO8(ecx)) & 31); /* 0x11011C97: shl edx, cl */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    edx = edx & 0xFFFFFFFEu; /* 0x11011C99: and edx, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ecx; /* 0x11011C9C: mov dword ptr [ebp - 4], ecx */
    edi = edx; /* 0x11011C9F: mov edi, edx */
    /* cmp edx, ebx */ /* 0x11011CA1: cmp edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_11011CA7; /* 0x11011CA3: jae 0x11011ca7 */
L_11011CA5:
    edi = ebx; /* 0x11011CA5: mov edi, ebx */
L_11011CA7:
    eax = MEM32(esi + 0x18); /* 0x11011CA7: mov eax, dword ptr [esi + 0x18] */
    /* cmp MEM32(eax + ecx * 4), 0x3Fu */ /* 0x11011CAA: cmp dword ptr [eax + ecx*4], 0x3f */
    _flag_a = (uint32_t)(MEM32(eax + ecx * 4)); _flag_b = (uint32_t)(0x3Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_11011DF2; /* 0x11011CAE: jbe 0x11011df2 */
L_11011CB4:
    eax = MEM32(esi + 0x14); /* 0x11011CB4: mov eax, dword ptr [esi + 0x14] */
    ecx = edi; /* 0x11011CB7: mov ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x11011CB9: sub ecx, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x11011CBB: sub eax, edi */
    _flag_k = FK_CMP;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + 0xC)); /* 0x11011CBD: imul ecx, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + (-0x4)); /* 0x11011CC1: mov edx, dword ptr [ebp - 4] */
    PUSH32(esp, eax); /* 0x11011CC4: push eax */
    eax = MEM32(esi + 0x18); /* 0x11011CC5: mov eax, dword ptr [esi + 0x18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + edx * 4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax + edx * 4); /* 0x11011CC8: add ecx, dword ptr [eax + edx*4] */
    _flag_k = FK_ADD;
    PUSH32(esp, ecx); /* 0x11011CCB: push ecx */
    RECOMP_ICALL(MEM32(ebp + 0x10)); /* 0x11011CCC: call dword ptr [ebp + 0x10] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11011CCF: pop ecx */
    ecx = POP32_VAL(esp); /* 0x11011CD0: pop ecx */
    MEM32(esi + 0x14) = edi; /* 0x11011CD1: mov dword ptr [esi + 0x14], edi */
L_11011CD4:
    /* cmp MEM32(esi + 0x14), ebx */ /* 0x11011CD4: cmp dword ptr [esi + 0x14], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_11011C87; /* 0x11011CD7: ja 0x11011c87 */
L_11011CD9:
    eax = MEM32(esi + 0x14); /* 0x11011CD9: mov eax, dword ptr [esi + 0x14] */
    MEM32(esi + 0x14) = ebx; /* 0x11011CDC: mov dword ptr [esi + 0x14], ebx */
    PUSH32(esp, ebx); /* 0x11011CDF: push ebx */
    MEM32(ebp + (-0x10)) = eax; /* 0x11011CE0: mov dword ptr [ebp - 0x10], eax */
    RECOMP_CALL(sub_110119E6); /* 0x11011CE3: call 0x110119e6 */
    RECOMP_FLAGS_IN();
    edx = esi + 0x10; /* 0x11011CE8: lea edx, [esi + 0x10] */
    /* cmp MEM32(edx), 0 */ /* 0x11011CEB: cmp dword ptr [edx], 0 */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x11011CEE: pop ecx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_11011CFA; /* 0x11011CEF: jne 0x11011cfa */
L_11011CF1:
    ecx = eax + 0x1; /* 0x11011CF1: lea ecx, [eax + 1] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11011CF4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(edx); if (eax == _d) { MEM32(edx) = ecx; } else { eax = _d; } } /* 0x11011CF6: lock cmpxchg dword ptr [edx], ecx */
    _flag_k = FK_CMP;
L_11011CFA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x11011CFA: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11011CFC: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x8)), ebx */ /* 0x11011CFE: cmp dword ptr [ebp - 8], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_11011DE9; /* 0x11011D01: jbe 0x11011de9 */
L_11011D07:
    /* cmp edi, 3 */ /* 0x11011D07: cmp edi, 3 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_11011D1B; /* 0x11011D0A: jb 0x11011d1b */
L_11011D0C:
    eax = esi + 0x4; /* 0x11011D0C: lea eax, [esi + 4] */
    /* cmp MEM32(esi + 0x18), eax */ /* 0x11011D0F: cmp dword ptr [esi + 0x18], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x18)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11011D1B; /* 0x11011D12: jne 0x11011d1b */
L_11011D14:
    ecx = esi; /* 0x11011D14: mov ecx, esi */
    RECOMP_CALL(sub_1101191C); /* 0x11011D16: call 0x1101191c */
    RECOMP_FLAGS_IN();
L_11011D1B:
    eax = MEM32(esi + 0x18); /* 0x11011D1B: mov eax, dword ptr [esi + 0x18] */
    /* cmp MEM32(eax + edi * 4), 0 */ /* 0x11011D1E: cmp dword ptr [eax + edi*4], 0 */
    _flag_a = (uint32_t)(MEM32(eax + edi * 4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11011D31; /* 0x11011D22: jne 0x11011d31 */
L_11011D24:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11011D24: push dword ptr [ebp + 0xc] */
    edx = edi; /* 0x11011D27: mov edx, edi */
    ecx = esi; /* 0x11011D29: mov ecx, esi */
    RECOMP_CALL(sub_110117D9); /* 0x11011D2B: call 0x110117d9 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11011D30: pop ecx */
L_11011D31:
    ecx = MEM32(ebp + 0x8); /* 0x11011D31: mov ecx, dword ptr [ebp + 8] */
    eax = ecx + 0x4; /* 0x11011D34: lea eax, [ecx + 4] */
    /* cmp MEM32(ecx + 0x18), eax */ /* 0x11011D37: cmp dword ptr [ecx + 0x18], eax */
    _flag_a = (uint32_t)(MEM32(ecx + 0x18)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11011D45; /* 0x11011D3A: jne 0x11011d45 */
L_11011D3C:
    /* cmp edi, 3 */ /* 0x11011D3C: cmp edi, 3 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_11011DE6; /* 0x11011D3F: jae 0x11011de6 */
L_11011D45:
    eax = MEM32(ecx + 0x18); /* 0x11011D45: mov eax, dword ptr [ecx + 0x18] */
    /* cmp MEM32(eax + edi * 4), 0x3Fu */ /* 0x11011D48: cmp dword ptr [eax + edi*4], 0x3f */
    _flag_a = (uint32_t)(MEM32(eax + edi * 4)); _flag_b = (uint32_t)(0x3Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_11011DE6; /* 0x11011D4C: jbe 0x11011de6 */
L_11011D52:
    /* test edi, edi */ /* 0x11011D52: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11011D62; /* 0x11011D54: je 0x11011d62 */
L_11011D56:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x11011D56: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edi; /* 0x11011D58: mov ecx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x11011D5A: inc edx */
    _flag_k = FK_INC;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x11011D5B: shl edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << ((LO8(ecx)) & 31); /* 0x11011D5B: shl edx, cl */
    ecx = MEM32(ebp + 0x8); /* 0x11011D5D: mov ecx, dword ptr [ebp + 8] */
    goto L_11011D65; /* 0x11011D60: jmp 0x11011d65 */
L_11011D62:
    PUSH32(esp, 2); /* 0x11011D62: push 2 */
    edx = POP32_VAL(esp); /* 0x11011D64: pop edx */
L_11011D65:
    eax = MEM32(ebp + (-0x8)); /* 0x11011D65: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x11011D68: sub eax, ebx */
    _flag_k = FK_CMP;
    MEM32(ebp + 0x10) = edx; /* 0x11011D6A: mov dword ptr [ebp + 0x10], edx */
    /* cmp edx, eax */ /* 0x11011D6D: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_11011D76; /* 0x11011D6F: jbe 0x11011d76 */
L_11011D71:
    edx = eax; /* 0x11011D71: mov edx, eax */
    MEM32(ebp + 0x10) = edx; /* 0x11011D73: mov dword ptr [ebp + 0x10], edx */
L_11011D76:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11011D76: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x11011D78: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + (-0x10)); /* 0x11011D7B: mov eax, dword ptr [ebp - 0x10] */
    /* cmp eax, ebx */ /* 0x11011D7E: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_11011DAD; /* 0x11011D80: jbe 0x11011dad */
L_11011D82:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x11011D82: sub eax, ebx */
    _flag_k = FK_CMP;
    ebx = eax; /* 0x11011D84: mov ebx, eax */
    MEM32(ebp + (-0x4)) = eax; /* 0x11011D86: mov dword ptr [ebp - 4], eax */
    /* cmp ebx, edx */ /* 0x11011D89: cmp ebx, edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_11011D8F; /* 0x11011D8B: jbe 0x11011d8f */
L_11011D8D:
    ebx = edx; /* 0x11011D8D: mov ebx, edx */
L_11011D8F:
    eax = MEM32(ecx + 0x18); /* 0x11011D8F: mov eax, dword ptr [ecx + 0x18] */
    PUSH32(esp, ebx); /* 0x11011D92: push ebx */
    PUSH32(esp, MEM32(eax + edi * 4)); /* 0x11011D93: push dword ptr [eax + edi*4] */
    eax = MEM32(esi + 0x18); /* 0x11011D96: mov eax, dword ptr [esi + 0x18] */
    PUSH32(esp, MEM32(eax + edi * 4)); /* 0x11011D99: push dword ptr [eax + edi*4] */
    RECOMP_ICALL(MEM32(ebp + 0x14)); /* 0x11011D9C: call dword ptr [ebp + 0x14] */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0x10); /* 0x11011D9F: mov edx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11011DA2: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ebx; /* 0x11011DA5: sub edx, ebx */
    _flag_k = FK_CMP;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(ebp + 0xC)); /* 0x11011DA7: imul ebx, dword ptr [ebp + 0xc] */
    goto L_11011DB0; /* 0x11011DAB: jmp 0x11011db0 */
L_11011DAD:
    ebx = MEM32(ebp + (-0x4)); /* 0x11011DAD: mov ebx, dword ptr [ebp - 4] */
L_11011DB0:
    /* test edx, edx */ /* 0x11011DB0: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11011DD0; /* 0x11011DB2: je 0x11011dd0 */
L_11011DB4:
    eax = MEM32(ebp + 0x8); /* 0x11011DB4: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, edx); /* 0x11011DB7: push edx */
    eax = MEM32(eax + 0x18); /* 0x11011DB8: mov eax, dword ptr [eax + 0x18] */
    eax = MEM32(eax + edi * 4); /* 0x11011DBB: mov eax, dword ptr [eax + edi*4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x11011DBE: add eax, ebx */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x11011DC0: push eax */
    eax = MEM32(esi + 0x18); /* 0x11011DC1: mov eax, dword ptr [esi + 0x18] */
    eax = MEM32(eax + edi * 4); /* 0x11011DC4: mov eax, dword ptr [eax + edi*4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x11011DC7: add eax, ebx */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x11011DC9: push eax */
    RECOMP_ICALL(MEM32(ebp + 0x18)); /* 0x11011DCA: call dword ptr [ebp + 0x18] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11011DCD: add esp, 0xc */
    _flag_k = FK_ADD;
L_11011DD0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x11011DD0: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x11011DD2: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x11011DD3: inc ebx */
    _flag_k = FK_INC;
    ecx = edi; /* 0x11011DD4: mov ecx, edi */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((ebx) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x11011DD6: shl ebx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((ebx << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << ((LO8(ecx)) & 31); /* 0x11011DD6: shl ebx, cl */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    ebx = ebx & 0xFFFFFFFEu; /* 0x11011DD8: and ebx, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ebx, MEM32(ebp + (-0x8)) */ /* 0x11011DDB: cmp ebx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_11011D07; /* 0x11011DDE: jb 0x11011d07 */
L_11011DE4:
    goto L_11011DE9; /* 0x11011DE4: jmp 0x11011de9 */
L_11011DE6:
    MEM32(esi + 0x14) = ebx; /* 0x11011DE6: mov dword ptr [esi + 0x14], ebx */
L_11011DE9:
    edi = POP32_VAL(esp); /* 0x11011DE9: pop edi */
    esi = POP32_VAL(esp); /* 0x11011DEA: pop esi */
    ebx = POP32_VAL(esp); /* 0x11011DEB: pop ebx */
    esp = ebp; /* 0x11011DEC: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x11011DEE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x11011DEF: ret 0x14 */
L_11011DF2:
    PUSH32(esp, 1); /* 0x11011DF2: push 1 */
    eax = ebp + (-0xC); /* 0x11011DF4: lea eax, [ebp - 0xc] */
    MEM32(ebp + (-0xC)) = 0x110049A0u; /* 0x11011DF7: mov dword ptr [ebp - 0xc], 0x110049a0 */
    PUSH32(esp, eax); /* 0x11011DFE: push eax */
    ecx = ebp + (-0x1C); /* 0x11011DFF: lea ecx, [ebp - 0x1c] */
    RECOMP_ICALL(MEM32(0x110692E8)); /* 0x11011E02: call dword ptr [0x110692e8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x11045724u); /* 0x11011E08: push 0x11045724 */
    eax = ebp + (-0x1C); /* 0x11011E0D: lea eax, [ebp - 0x1c] */
    MEM32(ebp + (-0x1C)) = 0x11001458u; /* 0x11011E10: mov dword ptr [ebp - 0x1c], 0x11001458 */
    PUSH32(esp, eax); /* 0x11011E17: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x11011E18: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x11011E1Du, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11011E1E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11011E1Eu);

L_11011E1E:
    PUSH32(esp, ebp); /* 0x11011E1E: push ebp */
    ebp = esp; /* 0x11011E1F: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x11011E21: sub esp, 0x28 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x11011E24: push ebx */
    PUSH32(esp, esi); /* 0x11011E25: push esi */
    ebx = ecx; /* 0x11011E26: mov ebx, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x11011E28: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x11011E2A: push edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x11011E2B: inc esi */
    _flag_k = FK_INC;
    eax = ebx + 0x14; /* 0x11011E2C: lea eax, [ebx + 0x14] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + esi; esi = _old; MEM32(eax) = _sum; } /* 0x11011E2F: lock xadd dword ptr [eax], esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x11011E33: inc esi */
    _flag_k = FK_INC;
    eax = MEM32(ebp + 0xC); /* 0x11011E34: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x11011E37: dec esi */
    _flag_k = FK_DEC;
    PUSH32(esp, esi); /* 0x11011E38: push esi */
    MEM32(ebp + (-0x8)) = esi; /* 0x11011E39: mov dword ptr [ebp - 8], esi */
    MEM32(eax) = esi; /* 0x11011E3C: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_110119E6); /* 0x11011E3E: call 0x110119e6 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x11011E43: mov edi, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11011E45: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x11011E47: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x11011E48: inc eax */
    _flag_k = FK_INC;
    ecx = edi; /* 0x11011E49: mov ecx, edi */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x11011E4B: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x11011E4B: shl eax, cl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    eax = eax & 0xFFFFFFFEu; /* 0x11011E4D: and eax, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x11011E50: mov dword ptr [ebp - 4], eax */
    /* cmp edi, 3 */ /* 0x11011E53: cmp edi, 3 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_11011E6A; /* 0x11011E56: jb 0x11011e6a */
L_11011E58:
    eax = ebx + 0x4; /* 0x11011E58: lea eax, [ebx + 4] */
    /* cmp MEM32(ebx + 0x18), eax */ /* 0x11011E5B: cmp dword ptr [ebx + 0x18], eax */
    _flag_a = (uint32_t)(MEM32(ebx + 0x18)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11011E67; /* 0x11011E5E: jne 0x11011e67 */
L_11011E60:
    ecx = ebx; /* 0x11011E60: mov ecx, ebx */
    RECOMP_CALL(sub_1101191C); /* 0x11011E62: call 0x1101191c */
    RECOMP_FLAGS_IN();
L_11011E67:
    eax = MEM32(ebp + (-0x4)); /* 0x11011E67: mov eax, dword ptr [ebp - 4] */
L_11011E6A:
    ecx = MEM32(ebx + 0x18); /* 0x11011E6A: mov ecx, dword ptr [ebx + 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x11011E6D: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0xC) = ecx; /* 0x11011E6F: mov dword ptr [ebp + 0xc], ecx */
    /* cmp MEM32(ecx + edi * 4), edx */ /* 0x11011E72: cmp dword ptr [ecx + edi*4], edx */
    _flag_a = (uint32_t)(MEM32(ecx + edi * 4)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11011EB1; /* 0x11011E75: jne 0x11011eb1 */
L_11011E77:
    /* cmp eax, esi */ /* 0x11011E77: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11011E8A; /* 0x11011E79: jne 0x11011e8a */
L_11011E7B:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11011E7B: push dword ptr [ebp + 8] */
    edx = edi; /* 0x11011E7E: mov edx, edi */
    ecx = ebx; /* 0x11011E80: mov ecx, ebx */
    RECOMP_CALL(sub_110117D9); /* 0x11011E82: call 0x110117d9 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11011E87: pop ecx */
    goto L_11011EAE; /* 0x11011E88: jmp 0x11011eae */
L_11011E8A:
    eax = MEM32(0x11069230); /* 0x11011E8A: mov eax, dword ptr [0x11069230] */
    MEM32(ebp + (-0x20)) = edx; /* 0x11011E8F: mov dword ptr [ebp - 0x20], edx */
    MEM32(ebp + (-0x1C)) = eax; /* 0x11011E92: mov dword ptr [ebp - 0x1c], eax */
    /* cmp MEM32(ecx + edi * 4), edx */ /* 0x11011E95: cmp dword ptr [ecx + edi*4], edx */
    _flag_a = (uint32_t)(MEM32(ecx + edi * 4)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11011EB1; /* 0x11011E98: jne 0x11011eb1 */
L_11011E9A:
    esi = ecx; /* 0x11011E9A: mov esi, ecx */
L_11011E9C:
    ecx = ebp + (-0x28); /* 0x11011E9C: lea ecx, [ebp - 0x28] */
    RECOMP_ICALL(MEM32(0x11069234)); /* 0x11011E9F: call dword ptr [0x11069234] */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esi + edi * 4), 0 */ /* 0x11011EA5: cmp dword ptr [esi + edi*4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + edi * 4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11011E9C; /* 0x11011EA9: je 0x11011e9c */
L_11011EAB:
    esi = MEM32(ebp + (-0x8)); /* 0x11011EAB: mov esi, dword ptr [ebp - 8] */
L_11011EAE:
    ecx = MEM32(ebp + 0xC); /* 0x11011EAE: mov ecx, dword ptr [ebp + 0xc] */
L_11011EB1:
    eax = MEM32(ecx + edi * 4); /* 0x11011EB1: mov eax, dword ptr [ecx + edi*4] */
    /* cmp eax, 0x3Fu */ /* 0x11011EB4: cmp eax, 0x3f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_11011ECB; /* 0x11011EB7: jbe 0x11011ecb */
L_11011EB9:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(ebp + (-0x4)); /* 0x11011EB9: sub esi, dword ptr [ebp - 4] */
    _flag_k = FK_CMP;
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(ebp + 0x8)); /* 0x11011EBC: imul esi, dword ptr [ebp + 8] */
    edi = POP32_VAL(esp); /* 0x11011EC0: pop edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x11011EC1: add eax, esi */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x11011EC3: pop esi */
    ebx = POP32_VAL(esp); /* 0x11011EC4: pop ebx */
    esp = ebp; /* 0x11011EC5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x11011EC7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x11011EC8: ret 8 */
L_11011ECB:
    PUSH32(esp, 1); /* 0x11011ECB: push 1 */
    eax = ebp + (-0xC); /* 0x11011ECD: lea eax, [ebp - 0xc] */
    MEM32(ebp + (-0xC)) = 0x110049A0u; /* 0x11011ED0: mov dword ptr [ebp - 0xc], 0x110049a0 */
    PUSH32(esp, eax); /* 0x11011ED7: push eax */
    ecx = ebp + (-0x18); /* 0x11011ED8: lea ecx, [ebp - 0x18] */
    RECOMP_ICALL(MEM32(0x110692E8)); /* 0x11011EDB: call dword ptr [0x110692e8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x11045724u); /* 0x11011EE1: push 0x11045724 */
    eax = ebp + (-0x18); /* 0x11011EE6: lea eax, [ebp - 0x18] */
    MEM32(ebp + (-0x18)) = 0x11001458u; /* 0x11011EE9: mov dword ptr [ebp - 0x18], 0x11001458 */
    PUSH32(esp, eax); /* 0x11011EF0: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x11011EF1: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x11011EF6u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11011EF7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11011EF7u);

L_11011EF7:
    PUSH32(esp, ebp); /* 0x11011EF7: push ebp */
    ebp = esp; /* 0x11011EF8: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x11011EFA: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x34u; /* 0x11011EFD: sub esp, 0x34 */
    _flag_k = FK_CMP;
    edx = ecx; /* 0x11011F00: mov edx, ecx */
    PUSH32(esp, ebx); /* 0x11011F02: push ebx */
    PUSH32(esp, esi); /* 0x11011F03: push esi */
    esi = MEM32(ebp + 0x8); /* 0x11011F04: mov esi, dword ptr [ebp + 8] */
    ebx = edx + 0x14; /* 0x11011F07: lea ebx, [edx + 0x14] */
    MEM32(esp + 0xC) = edx; /* 0x11011F0A: mov dword ptr [esp + 0xc], edx */
    PUSH32(esp, edi); /* 0x11011F0E: push edi */
    edi = MEM32(ebx); /* 0x11011F0F: mov edi, dword ptr [ebx] */
    /* cmp edi, esi */ /* 0x11011F11: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_11011F25; /* 0x11011F13: jmp 0x11011f25 */
L_11011F15:
    ecx = esi; /* 0x11011F15: mov ecx, esi */
    eax = edi; /* 0x11011F17: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(ebx); if (eax == _d) { MEM32(ebx) = ecx; } else { eax = _d; } } /* 0x11011F19: lock cmpxchg dword ptr [ebx], ecx */
    _flag_k = FK_CMP;
    /* cmp eax, edi */ /* 0x11011F1D: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11011F2D; /* 0x11011F1F: je 0x11011f2d */
L_11011F21:
    edi = eax; /* 0x11011F21: mov edi, eax */
    /* cmp eax, esi */ /* 0x11011F23: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_11011F25:
    MEM32(esp + 0x14) = edi; /* 0x11011F25: mov dword ptr [esp + 0x14], edi */
    RECOMP_BACKEDGE();
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_B, _cf)) goto L_11011F15; /* 0x11011F29: jb 0x11011f15 */
L_11011F2B:
    goto L_11011F3F; /* 0x11011F2B: jmp 0x11011f3f */
L_11011F2D:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x11011F2D: push dword ptr [ebp + 0x14] */
    ecx = edx; /* 0x11011F30: mov ecx, edx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11011F32: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11011F35: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x11011F38: push esi */
    PUSH32(esp, edi); /* 0x11011F39: push edi */
    RECOMP_CALL(sub_1101210D); /* 0x11011F3A: call 0x1101210d */
    RECOMP_FLAGS_IN();
L_11011F3F:
    eax = esi + (-0x1); /* 0x11011F3F: lea eax, [esi - 1] */
    PUSH32(esp, eax); /* 0x11011F42: push eax */
    RECOMP_CALL(sub_110119E6); /* 0x11011F43: call 0x110119e6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11011F48: pop ecx */
    PUSH32(esp, 3); /* 0x11011F49: push 3 */
    edx = eax; /* 0x11011F4B: mov edx, eax */
    ebx = POP32_VAL(esp); /* 0x11011F4D: pop ebx */
    MEM32(esp + 0x18) = edx; /* 0x11011F4E: mov dword ptr [esp + 0x18], edx */
    /* cmp edx, ebx */ /* 0x11011F52: cmp edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_11011F9B; /* 0x11011F54: jb 0x11011f9b */
L_11011F56:
    eax = MEM32(esp + 0x10); /* 0x11011F56: mov eax, dword ptr [esp + 0x10] */
    ecx = eax + 0x4; /* 0x11011F5A: lea ecx, [eax + 4] */
    /* cmp MEM32(eax + 0x18), ecx */ /* 0x11011F5D: cmp dword ptr [eax + 0x18], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x18)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11011F9B; /* 0x11011F60: jne 0x11011f9b */
L_11011F62:
    edi = MEM32(0x11069230); /* 0x11011F62: mov edi, dword ptr [0x11069230] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x11011F68: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x2C) = edi; /* 0x11011F6A: mov dword ptr [esp + 0x2c], edi */
    edi = MEM32(esp + 0x14); /* 0x11011F6E: mov edi, dword ptr [esp + 0x14] */
    MEM32(esp + 0x28) = esi; /* 0x11011F72: mov dword ptr [esp + 0x28], esi */
    /* cmp MEM32(eax + 0x18), ecx */ /* 0x11011F76: cmp dword ptr [eax + 0x18], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x18)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11011F9F; /* 0x11011F79: jne 0x11011f9f */
L_11011F7B:
    ebx = eax; /* 0x11011F7B: mov ebx, eax */
    edi = ecx; /* 0x11011F7D: mov edi, ecx */
L_11011F7F:
    ecx = esp + 0x20; /* 0x11011F7F: lea ecx, [esp + 0x20] */
    RECOMP_ICALL(MEM32(0x11069234)); /* 0x11011F83: call dword ptr [0x11069234] */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebx + 0x18), edi */ /* 0x11011F89: cmp dword ptr [ebx + 0x18], edi */
    _flag_a = (uint32_t)(MEM32(ebx + 0x18)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11011F7F; /* 0x11011F8C: je 0x11011f7f */
L_11011F8E:
    edi = MEM32(esp + 0x14); /* 0x11011F8E: mov edi, dword ptr [esp + 0x14] */
    edx = MEM32(esp + 0x18); /* 0x11011F92: mov edx, dword ptr [esp + 0x18] */
    PUSH32(esp, 3); /* 0x11011F96: push 3 */
    ebx = POP32_VAL(esp); /* 0x11011F98: pop ebx */
    goto L_11011F9F; /* 0x11011F99: jmp 0x11011f9f */
L_11011F9B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x11011F9B: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = esi; /* 0x11011F9D: mov ebx, esi */
L_11011F9F:
    /* cmp ebx, edx */ /* 0x11011F9F: cmp ebx, edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_11011FE4; /* 0x11011FA1: ja 0x11011fe4 */
L_11011FA3:
    edi = MEM32(esp + 0x10); /* 0x11011FA3: mov edi, dword ptr [esp + 0x10] */
L_11011FA7:
    eax = MEM32(edi + 0x18); /* 0x11011FA7: mov eax, dword ptr [edi + 0x18] */
    eax = eax + ebx * 4; /* 0x11011FAA: lea eax, [eax + ebx*4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x11011FAD: inc ebx */
    _flag_k = FK_INC;
    MEM32(esp + 0x1C) = eax; /* 0x11011FAE: mov dword ptr [esp + 0x1c], eax */
    /* cmp MEM32(eax), esi */ /* 0x11011FB2: cmp dword ptr [eax], esi */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11011FDC; /* 0x11011FB4: jne 0x11011fdc */
L_11011FB6:
    ecx = MEM32(0x11069230); /* 0x11011FB6: mov ecx, dword ptr [0x11069230] */
    edi = eax; /* 0x11011FBC: mov edi, eax */
    MEM32(esp + 0x38) = esi; /* 0x11011FBE: mov dword ptr [esp + 0x38], esi */
    MEM32(esp + 0x3C) = ecx; /* 0x11011FC2: mov dword ptr [esp + 0x3c], ecx */
L_11011FC6:
    ecx = esp + 0x30; /* 0x11011FC6: lea ecx, [esp + 0x30] */
    RECOMP_ICALL(MEM32(0x11069234)); /* 0x11011FCA: call dword ptr [0x11069234] */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(edi), esi */ /* 0x11011FD0: cmp dword ptr [edi], esi */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11011FC6; /* 0x11011FD2: je 0x11011fc6 */
L_11011FD4:
    edi = MEM32(esp + 0x10); /* 0x11011FD4: mov edi, dword ptr [esp + 0x10] */
    edx = MEM32(esp + 0x18); /* 0x11011FD8: mov edx, dword ptr [esp + 0x18] */
L_11011FDC:
    /* cmp ebx, edx */ /* 0x11011FDC: cmp ebx, edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_11011FA7; /* 0x11011FDE: jbe 0x11011fa7 */
L_11011FE0:
    edi = MEM32(esp + 0x14); /* 0x11011FE0: mov edi, dword ptr [esp + 0x14] */
L_11011FE4:
    eax = edi; /* 0x11011FE4: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x11011FE6: pop edi */
    esi = POP32_VAL(esp); /* 0x11011FE7: pop esi */
    ebx = POP32_VAL(esp); /* 0x11011FE8: pop ebx */
    esp = ebp; /* 0x11011FE9: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x11011FEB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x11011FEC: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_11011FEF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11011FEFu);

L_11011FEF:
    PUSH32(esp, ebp); /* 0x11011FEF: push ebp */
    ebp = esp; /* 0x11011FF0: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x11011FF2: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x11011FF5: push esi */
    PUSH32(esp, edi); /* 0x11011FF6: push edi */
    edi = ecx; /* 0x11011FF7: mov edi, ecx */
    esi = edx; /* 0x11011FF9: mov esi, edx */
    eax = edi + 0x14; /* 0x11011FFB: lea eax, [edi + 0x14] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + esi; esi = _old; MEM32(eax) = _sum; } /* 0x11011FFE: lock xadd dword ptr [eax], esi */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x11012002: push dword ptr [ebp + 0x14] */
    ecx = esi + edx; /* 0x11012005: lea ecx, [esi + edx] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11012008: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1101200B: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x1101200E: push ecx */
    PUSH32(esp, esi); /* 0x1101200F: push esi */
    ecx = edi; /* 0x11012010: mov ecx, edi */
    RECOMP_CALL(sub_1101210D); /* 0x11012012: call 0x1101210d */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x11012017: pop edi */
    eax = esi; /* 0x11012018: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1101201A: pop esi */
    ebp = POP32_VAL(esp); /* 0x1101201B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1101201C: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1101201F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101201Fu);

L_1101201F:
    PUSH32(esp, ebp); /* 0x1101201F: push ebp */
    ebp = esp; /* 0x11012020: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2Cu; /* 0x11012022: sub esp, 0x2c */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x11012025: push ebx */
    PUSH32(esp, esi); /* 0x11012026: push esi */
    PUSH32(esp, edi); /* 0x11012027: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11012028: push dword ptr [ebp + 8] */
    ebx = ecx; /* 0x1101202B: mov ebx, ecx */
    RECOMP_CALL(sub_110119E6); /* 0x1101202D: call 0x110119e6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x11012032: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = eax; /* 0x11012034: mov dword ptr [ebp - 8], eax */
    ecx = POP32_VAL(esp); /* 0x11012037: pop ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x11012038: inc esi */
    _flag_k = FK_INC;
    ecx = eax; /* 0x11012039: mov ecx, eax */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((esi) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x1101203B: shl esi, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((esi << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << ((LO8(ecx)) & 31); /* 0x1101203B: shl esi, cl */
    edi = esi; /* 0x1101203D: mov edi, esi */
    MEM32(ebp + (-0xC)) = esi; /* 0x1101203F: mov dword ptr [ebp - 0xc], esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFEu);
    edi = edi & 0xFFFFFFFEu; /* 0x11012042: and edi, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 3 */ /* 0x11012045: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_11012059; /* 0x11012048: jb 0x11012059 */
L_1101204A:
    eax = ebx + 0x4; /* 0x1101204A: lea eax, [ebx + 4] */
    /* cmp MEM32(ebx + 0x18), eax */ /* 0x1101204D: cmp dword ptr [ebx + 0x18], eax */
    _flag_a = (uint32_t)(MEM32(ebx + 0x18)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11012059; /* 0x11012050: jne 0x11012059 */
L_11012052:
    ecx = ebx; /* 0x11012052: mov ecx, ebx */
    RECOMP_CALL(sub_1101191C); /* 0x11012054: call 0x1101191c */
    RECOMP_FLAGS_IN();
L_11012059:
    eax = MEM32(ebx + 0x18); /* 0x11012059: mov eax, dword ptr [ebx + 0x18] */
    ecx = MEM32(ebp + (-0x8)); /* 0x1101205C: mov ecx, dword ptr [ebp - 8] */
    edx = MEM32(ebp + 0x8); /* 0x1101205F: mov edx, dword ptr [ebp + 8] */
    ecx = eax + ecx * 4; /* 0x11012062: lea ecx, [eax + ecx*4] */
    /* cmp MEM32(ecx), 0 */ /* 0x11012065: cmp dword ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = ecx; /* 0x11012068: mov dword ptr [ebp - 4], ecx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_110120AB; /* 0x1101206B: jne 0x110120ab */
L_1101206D:
    /* cmp edi, edx */ /* 0x1101206D: cmp edi, edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11012081; /* 0x1101206F: jne 0x11012081 */
L_11012071:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11012071: push dword ptr [ebp + 0x10] */
    edx = MEM32(ebp + (-0x8)); /* 0x11012074: mov edx, dword ptr [ebp - 8] */
    ecx = ebx; /* 0x11012077: mov ecx, ebx */
    RECOMP_CALL(sub_110117D9); /* 0x11012079: call 0x110117d9 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101207E: pop ecx */
    goto L_110120A5; /* 0x1101207F: jmp 0x110120a5 */
L_11012081:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x24)) = MEM32(ebp + (-0x24)) & 0; /* 0x11012081: and dword ptr [ebp - 0x24], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx), 0 */ /* 0x11012085: cmp dword ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(0x11069230); /* 0x11012088: mov eax, dword ptr [0x11069230] */
    MEM32(ebp + (-0x20)) = eax; /* 0x1101208D: mov dword ptr [ebp - 0x20], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_110120AB; /* 0x11012090: jne 0x110120ab */
L_11012092:
    esi = ecx; /* 0x11012092: mov esi, ecx */
L_11012094:
    ecx = ebp + (-0x2C); /* 0x11012094: lea ecx, [ebp - 0x2c] */
    RECOMP_ICALL(MEM32(0x11069234)); /* 0x11012097: call dword ptr [0x11069234] */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esi), 0 */ /* 0x1101209D: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11012094; /* 0x110120A0: je 0x11012094 */
L_110120A2:
    esi = MEM32(ebp + (-0xC)); /* 0x110120A2: mov esi, dword ptr [ebp - 0xc] */
L_110120A5:
    edx = MEM32(ebp + 0x8); /* 0x110120A5: mov edx, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + (-0x4)); /* 0x110120A8: mov ecx, dword ptr [ebp - 4] */
L_110120AB:
    /* cmp MEM32(ecx), 0x3Fu */ /* 0x110120AB: cmp dword ptr [ecx], 0x3f */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0x3Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_110120E1; /* 0x110120AE: jbe 0x110120e1 */
L_110120B0:
    /* cmp MEM32(ebp + (-0x8)), 0 */ /* 0x110120B0: cmp dword ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_110120B9; /* 0x110120B4: jne 0x110120b9 */
L_110120B6:
    PUSH32(esp, 2); /* 0x110120B6: push 2 */
    esi = POP32_VAL(esp); /* 0x110120B8: pop esi */
L_110120B9:
    eax = MEM32(ebp + 0x14); /* 0x110120B9: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - edi; /* 0x110120BC: sub edx, edi */
    _flag_k = FK_CMP;
    MEM32(eax) = ecx; /* 0x110120BE: mov dword ptr [eax], ecx */
    eax = MEM32(ebp + 0x18); /* 0x110120C0: mov eax, dword ptr [ebp + 0x18] */
    ecx = MEM32(ebp + 0xC); /* 0x110120C3: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edi; /* 0x110120C6: sub ecx, edi */
    _flag_k = FK_CMP;
    MEM32(eax) = edx; /* 0x110120C8: mov dword ptr [eax], edx */
    /* cmp esi, ecx */ /* 0x110120CA: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_110120D0; /* 0x110120CC: ja 0x110120d0 */
L_110120CE:
    ecx = esi; /* 0x110120CE: mov ecx, esi */
L_110120D0:
    eax = MEM32(ebp + 0x1C); /* 0x110120D0: mov eax, dword ptr [ebp + 0x1c] */
    MEM32(eax) = ecx; /* 0x110120D3: mov dword ptr [eax], ecx */
    eax = ecx + edi; /* 0x110120D5: lea eax, [ecx + edi] */
    edi = POP32_VAL(esp); /* 0x110120D8: pop edi */
    esi = POP32_VAL(esp); /* 0x110120D9: pop esi */
    ebx = POP32_VAL(esp); /* 0x110120DA: pop ebx */
    esp = ebp; /* 0x110120DB: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x110120DD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x110120DE: ret 0x18 */
L_110120E1:
    PUSH32(esp, 1); /* 0x110120E1: push 1 */
    eax = ebp + (-0x10); /* 0x110120E3: lea eax, [ebp - 0x10] */
    MEM32(ebp + (-0x10)) = 0x110049A0u; /* 0x110120E6: mov dword ptr [ebp - 0x10], 0x110049a0 */
    PUSH32(esp, eax); /* 0x110120ED: push eax */
    ecx = ebp + (-0x1C); /* 0x110120EE: lea ecx, [ebp - 0x1c] */
    RECOMP_ICALL(MEM32(0x110692E8)); /* 0x110120F1: call dword ptr [0x110692e8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x11045724u); /* 0x110120F7: push 0x11045724 */
    eax = ebp + (-0x1C); /* 0x110120FC: lea eax, [ebp - 0x1c] */
    MEM32(ebp + (-0x1C)) = 0x11001458u; /* 0x110120FF: mov dword ptr [ebp - 0x1c], 0x11001458 */
    PUSH32(esp, eax); /* 0x11012106: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x11012107: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1101210Cu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1101210D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101210Du);

L_1101210D:
    PUSH32(esp, 0x18u); /* 0x1101210D: push 0x18 */
    eax = 0x1103CF50u; /* 0x1101210F: mov eax, 0x1103cf50 */
    RECOMP_CALL(sub_1103B3DB); /* 0x11012114: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    ebx = ecx; /* 0x11012119: mov ebx, ecx */
    MEM32(ebp + (-0x20)) = ebx; /* 0x1101211B: mov dword ptr [ebp - 0x20], ebx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1101211E: push dword ptr [ebp + 0xc] */
    edi = MEM32(ebp + 0x8); /* 0x11012121: mov edi, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_110119E6); /* 0x11012124: call 0x110119e6 */
    RECOMP_FLAGS_IN();
    edx = ebx + 0x10; /* 0x11012129: lea edx, [ebx + 0x10] */
    /* cmp MEM32(edx), 0 */ /* 0x1101212C: cmp dword ptr [edx], 0 */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1101212F: pop ecx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101213B; /* 0x11012130: jne 0x1101213b */
L_11012132:
    ecx = eax + 0x1; /* 0x11012132: lea ecx, [eax + 1] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11012135: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(edx); if (eax == _d) { MEM32(edx) = ecx; } else { eax = _d; } } /* 0x11012137: lock cmpxchg dword ptr [edx], ecx */
    _flag_k = FK_CMP;
L_1101213B:
    eax = ebp + 0x8; /* 0x1101213B: lea eax, [ebp + 8] */
    ecx = ebx; /* 0x1101213E: mov ecx, ebx */
    PUSH32(esp, eax); /* 0x11012140: push eax */
    eax = ebp + (-0x14); /* 0x11012141: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x11012144: push eax */
    eax = ebp + (-0x18); /* 0x11012145: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x11012148: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11012149: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1101214C: push dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1101214F: push edi */
    RECOMP_CALL(sub_1101201F); /* 0x11012150: call 0x1101201f */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11012155: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = eax; /* 0x11012159: mov edi, eax */
    ecx = MEM32(ebp + 0x8); /* 0x1101215B: mov ecx, dword ptr [ebp + 8] */
    edx = MEM32(ebp + (-0x14)); /* 0x1101215E: mov edx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x11012161: sub ecx, edx */
    _flag_k = FK_CMP;
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + 0x10)); /* 0x11012163: imul edx, dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + (-0x18)); /* 0x11012167: mov eax, dword ptr [ebp - 0x18] */
    PUSH32(esp, ecx); /* 0x1101216A: push ecx */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1101216B: push dword ptr [ebp + 0x18] */
    MEM32(ebp + (-0x1C)) = edi; /* 0x1101216E: mov dword ptr [ebp - 0x1c], edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(eax); /* 0x11012171: add edx, dword ptr [eax] */
    _flag_k = FK_ADD;
    PUSH32(esp, edx); /* 0x11012173: push edx */
    RECOMP_ICALL(MEM32(ebp + 0x14)); /* 0x11012174: call dword ptr [ebp + 0x14] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11012177: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1101217B: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp edi, MEM32(ebp + 0xC) */ /* 0x1101217E: cmp edi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1101213B; /* 0x11012181: jb 0x1101213b */
L_11012183:
    RECOMP_CALL(sub_1103B340); /* 0x11012183: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x11012188: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_110121DB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110121DBu);

L_110121DB:
    PUSH32(esp, ebp); /* 0x110121DB: push ebp */
    ebp = esp; /* 0x110121DC: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x24u; /* 0x110121DE: sub esp, 0x24 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x110121E1: push ebx */
    ebx = ecx; /* 0x110121E2: mov ebx, ecx */
    PUSH32(esp, esi); /* 0x110121E4: push esi */
    esi = MEM32(ebp + 0x8); /* 0x110121E5: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x110121E8: push edi */
    edi = MEM32(ebx + 0x14); /* 0x110121E9: mov edi, dword ptr [ebx + 0x14] */
    MEM32(ebp + (-0x4)) = ebx; /* 0x110121EC: mov dword ptr [ebp - 4], ebx */
    MEM32(ebx + 0x14) = esi; /* 0x110121EF: mov dword ptr [ebx + 0x14], esi */
    /* cmp esi, edi */ /* 0x110121F2: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_110122CB; /* 0x110121F4: jbe 0x110122cb */
L_110121FA:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x110121FA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x110121FD: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x11012200: push esi */
    RECOMP_CALL(sub_11011AD3); /* 0x11012201: call 0x11011ad3 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x11012206: push edi */
    RECOMP_CALL(sub_110119E6); /* 0x11012207: call 0x110119e6 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebx + 0x10); /* 0x1101220C: mov edx, dword ptr [ebx + 0x10] */
    /* cmp eax, edx */ /* 0x1101220F: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x11012211: pop ecx */
    { uint32_t _sa = ecx, _sb = ecx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x11012212: sbb ecx, ecx */
      ecx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM32(ebp + 0x8) = edx; /* 0x11012214: mov dword ptr [ebp + 8], edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x11012217: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ~ecx; /* 0x11012219: not ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    ecx = ecx & eax; /* 0x1101221B: and ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1101221D: inc ebx */
    _flag_k = FK_INC;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((ebx) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x1101221E: shl ebx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((ebx << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << ((LO8(ecx)) & 31); /* 0x1101221E: shl ebx, cl */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    ebx = ebx & 0xFFFFFFFEu; /* 0x11012220: and ebx, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x14) = ecx; /* 0x11012223: mov dword ptr [ebp + 0x14], ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ebx; /* 0x11012226: sub esi, ebx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ebx; /* 0x11012228: sub edi, ebx */
    _flag_k = FK_CMP;
    /* test ecx, ecx */ /* 0x1101222A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11012277; /* 0x1101222C: jne 0x11012277 */
L_1101222E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101222E: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edx; /* 0x11012230: mov ecx, edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x11012232: inc ebx */
    _flag_k = FK_INC;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((ebx) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x11012233: shl ebx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((ebx << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << ((LO8(ecx)) & 31); /* 0x11012233: shl ebx, cl */
    ecx = MEM32(ebp + 0x14); /* 0x11012235: mov ecx, dword ptr [ebp + 0x14] */
    goto L_11012277; /* 0x11012238: jmp 0x11012277 */
L_1101223A:
    eax = MEM32(ebp + (-0x4)); /* 0x1101223A: mov eax, dword ptr [ebp - 4] */
    eax = MEM32(eax + 0x18); /* 0x1101223D: mov eax, dword ptr [eax + 0x18] */
    ecx = MEM32(eax + ecx * 4); /* 0x11012240: mov ecx, dword ptr [eax + ecx*4] */
    /* cmp ecx, 0x3Fu */ /* 0x11012243: cmp ecx, 0x3f */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x3Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1101235D; /* 0x11012246: jbe 0x1101235d */
L_1101224C:
    eax = ebx; /* 0x1101224C: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x1101224E: sub eax, edi */
    _flag_k = FK_CMP;
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(ebp + 0xC)); /* 0x11012250: imul edi, dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11012254: push eax */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x11012255: push dword ptr [ebp + 0x1c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ecx; /* 0x11012258: add edi, ecx */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x1101225A: push edi */
    RECOMP_ICALL(MEM32(ebp + 0x18)); /* 0x1101225B: call dword ptr [ebp + 0x18] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x14); /* 0x1101225E: mov ecx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11012261: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ebx; /* 0x11012264: sub esi, ebx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11012266: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x11012268: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11012271; /* 0x1101226A: jne 0x11012271 */
L_1101226C:
    ecx = MEM32(ebp + 0x8); /* 0x1101226C: mov ecx, dword ptr [ebp + 8] */
    goto L_11012274; /* 0x1101226F: jmp 0x11012274 */
L_11012271:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x11012271: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ebx; /* 0x11012272: add ebx, ebx */
    _flag_k = FK_ADD;
L_11012274:
    MEM32(ebp + 0x14) = ecx; /* 0x11012274: mov dword ptr [ebp + 0x14], ecx */
L_11012277:
    /* cmp ebx, esi */ /* 0x11012277: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1101223A; /* 0x11012279: jb 0x1101223a */
L_1101227B:
    eax = MEM32(ebp + (-0x4)); /* 0x1101227B: mov eax, dword ptr [ebp - 4] */
    eax = MEM32(eax + 0x18); /* 0x1101227E: mov eax, dword ptr [eax + 0x18] */
    eax = MEM32(eax + ecx * 4); /* 0x11012281: mov eax, dword ptr [eax + ecx*4] */
    /* cmp eax, 0x3Fu */ /* 0x11012284: cmp eax, 0x3f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_110122B3; /* 0x11012287: ja 0x110122b3 */
L_11012289:
    PUSH32(esp, 1); /* 0x11012289: push 1 */
    eax = ebp + (-0xC); /* 0x1101228B: lea eax, [ebp - 0xc] */
    MEM32(ebp + (-0xC)) = 0x110049A0u; /* 0x1101228E: mov dword ptr [ebp - 0xc], 0x110049a0 */
    PUSH32(esp, eax); /* 0x11012295: push eax */
    ecx = ebp + (-0x24); /* 0x11012296: lea ecx, [ebp - 0x24] */
    RECOMP_ICALL(MEM32(0x110692E8)); /* 0x11012299: call dword ptr [0x110692e8] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x24)) = 0x11001458u; /* 0x1101229F: mov dword ptr [ebp - 0x24], 0x11001458 */
    eax = ebp + (-0x24); /* 0x110122A6: lea eax, [ebp - 0x24] */
    PUSH32(esp, 0x11045724u); /* 0x110122A9: push 0x11045724 */
    goto L_11012382; /* 0x110122AE: jmp 0x11012382 */
L_110122B3:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edi; /* 0x110122B3: sub esi, edi */
    _flag_k = FK_CMP;
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(ebp + 0xC)); /* 0x110122B5: imul edi, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x110122B9: push esi */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x110122BA: push dword ptr [ebp + 0x1c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x110122BD: add edi, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x110122BF: push edi */
    RECOMP_ICALL(MEM32(ebp + 0x18)); /* 0x110122C0: call dword ptr [ebp + 0x18] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x110122C3: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_11012354; /* 0x110122C6: jmp 0x11012354 */
L_110122CB:
    PUSH32(esp, esi); /* 0x110122CB: push esi */
    RECOMP_CALL(sub_110119E6); /* 0x110122CC: call 0x110119e6 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebx + 0x10); /* 0x110122D1: mov edx, dword ptr [ebx + 0x10] */
    /* cmp eax, edx */ /* 0x110122D4: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x110122D6: pop ecx */
    { uint32_t _sa = ecx, _sb = ecx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x110122D7: sbb ecx, ecx */
      ecx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM32(ebp + 0x8) = edx; /* 0x110122D9: mov dword ptr [ebp + 8], edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x110122DC: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ~ecx; /* 0x110122DE: not ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    ecx = ecx & eax; /* 0x110122E0: and ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x110122E2: inc ebx */
    _flag_k = FK_INC;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((ebx) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x110122E3: shl ebx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((ebx << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << ((LO8(ecx)) & 31); /* 0x110122E3: shl ebx, cl */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    ebx = ebx & 0xFFFFFFFEu; /* 0x110122E5: and ebx, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x1C) = ecx; /* 0x110122E8: mov dword ptr [ebp + 0x1c], ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ebx; /* 0x110122EB: sub esi, ebx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ebx; /* 0x110122ED: sub edi, ebx */
    _flag_k = FK_CMP;
    /* test ecx, ecx */ /* 0x110122EF: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11012334; /* 0x110122F1: jne 0x11012334 */
L_110122F3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x110122F3: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edx; /* 0x110122F5: mov ecx, edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x110122F7: inc ebx */
    _flag_k = FK_INC;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((ebx) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x110122F8: shl ebx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((ebx << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << ((LO8(ecx)) & 31); /* 0x110122F8: shl ebx, cl */
    ecx = MEM32(ebp + 0x1C); /* 0x110122FA: mov ecx, dword ptr [ebp + 0x1c] */
    goto L_11012334; /* 0x110122FD: jmp 0x11012334 */
L_110122FF:
    eax = MEM32(eax + ecx * 4); /* 0x110122FF: mov eax, dword ptr [eax + ecx*4] */
    MEM32(ebp + 0x18) = eax; /* 0x11012302: mov dword ptr [ebp + 0x18], eax */
    /* cmp eax, 0x3Fu */ /* 0x11012305: cmp eax, 0x3f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_11012322; /* 0x11012308: jbe 0x11012322 */
L_1101230A:
    eax = ebx; /* 0x1101230A: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x1101230C: sub eax, esi */
    _flag_k = FK_CMP;
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(ebp + 0xC)); /* 0x1101230E: imul esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11012312: push eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x18));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + 0x18); /* 0x11012313: add esi, dword ptr [ebp + 0x18] */
    _flag_k = FK_ADD;
    PUSH32(esp, esi); /* 0x11012316: push esi */
    RECOMP_ICALL(MEM32(ebp + 0x14)); /* 0x11012317: call dword ptr [ebp + 0x14] */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0x8); /* 0x1101231A: mov edx, dword ptr [ebp + 8] */
    ecx = POP32_VAL(esp); /* 0x1101231D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1101231E: pop ecx */
    ecx = MEM32(ebp + 0x1C); /* 0x1101231F: mov ecx, dword ptr [ebp + 0x1c] */
L_11012322:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ebx; /* 0x11012322: sub edi, ebx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x11012324: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x11012326: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1101232E; /* 0x11012328: jne 0x1101232e */
L_1101232A:
    ecx = edx; /* 0x1101232A: mov ecx, edx */
    goto L_11012331; /* 0x1101232C: jmp 0x11012331 */
L_1101232E:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1101232E: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ebx; /* 0x1101232F: add ebx, ebx */
    _flag_k = FK_ADD;
L_11012331:
    MEM32(ebp + 0x1C) = ecx; /* 0x11012331: mov dword ptr [ebp + 0x1c], ecx */
L_11012334:
    eax = MEM32(ebp + (-0x4)); /* 0x11012334: mov eax, dword ptr [ebp - 4] */
    eax = MEM32(eax + 0x18); /* 0x11012337: mov eax, dword ptr [eax + 0x18] */
    /* cmp ebx, edi */ /* 0x1101233A: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_110122FF; /* 0x1101233C: jb 0x110122ff */
L_1101233E:
    /* cmp MEM32(eax + ecx * 4), 0x3Fu */ /* 0x1101233E: cmp dword ptr [eax + ecx*4], 0x3f */
    _flag_a = (uint32_t)(MEM32(eax + ecx * 4)); _flag_b = (uint32_t)(0x3Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_11012354; /* 0x11012342: jbe 0x11012354 */
L_11012344:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - esi; /* 0x11012344: sub edi, esi */
    _flag_k = FK_CMP;
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(ebp + 0xC)); /* 0x11012346: imul esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1101234A: push edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax + ecx * 4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(eax + ecx * 4); /* 0x1101234B: add esi, dword ptr [eax + ecx*4] */
    _flag_k = FK_ADD;
    PUSH32(esp, esi); /* 0x1101234E: push esi */
    RECOMP_ICALL(MEM32(ebp + 0x14)); /* 0x1101234F: call dword ptr [ebp + 0x14] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11012352: pop ecx */
    ecx = POP32_VAL(esp); /* 0x11012353: pop ecx */
L_11012354:
    edi = POP32_VAL(esp); /* 0x11012354: pop edi */
    esi = POP32_VAL(esp); /* 0x11012355: pop esi */
    ebx = POP32_VAL(esp); /* 0x11012356: pop ebx */
    esp = ebp; /* 0x11012357: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x11012359: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x1101235A: ret 0x18 */
L_1101235D:
    PUSH32(esp, 1); /* 0x1101235D: push 1 */
    eax = ebp + (-0x8); /* 0x1101235F: lea eax, [ebp - 8] */
    MEM32(ebp + (-0x8)) = 0x110049A0u; /* 0x11012362: mov dword ptr [ebp - 8], 0x110049a0 */
    PUSH32(esp, eax); /* 0x11012369: push eax */
    ecx = ebp + (-0x18); /* 0x1101236A: lea ecx, [ebp - 0x18] */
    RECOMP_ICALL(MEM32(0x110692E8)); /* 0x1101236D: call dword ptr [0x110692e8] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x18)) = 0x11001458u; /* 0x11012373: mov dword ptr [ebp - 0x18], 0x11001458 */
    eax = ebp + (-0x18); /* 0x1101237A: lea eax, [ebp - 0x18] */
    PUSH32(esp, 0x11045724u); /* 0x1101237D: push 0x11045724 */
L_11012382:
    PUSH32(esp, eax); /* 0x11012382: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x11012383: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x11012388u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11012389(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11012389u);

L_11012389:
    PUSH32(esp, ebp); /* 0x11012389: push ebp */
    ebp = esp; /* 0x1101238A: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1101238C: push ecx */
    PUSH32(esp, ebx); /* 0x1101238D: push ebx */
    PUSH32(esp, edi); /* 0x1101238E: push edi */
    edi = ecx; /* 0x1101238F: mov edi, ecx */
    RECOMP_CALL(sub_110117A9); /* 0x11012391: call 0x110117a9 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(edi + 0x14); /* 0x11012396: mov ebx, dword ptr [edi + 0x14] */
    MEM32(ebp + (-0x4)) = eax; /* 0x11012399: mov dword ptr [ebp - 4], eax */
    MEM32(edi + 0x14) = 0; /* 0x1101239C: mov dword ptr [edi + 0x14], 0 */
    /* test ebx, ebx */ /* 0x110123A3: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110123E3; /* 0x110123A5: je 0x110123e3 */
L_110123A7:
    PUSH32(esp, esi); /* 0x110123A7: push esi */
L_110123A8:
    eax = ebx + (-0x1); /* 0x110123A8: lea eax, [ebx - 1] */
    PUSH32(esp, eax); /* 0x110123AB: push eax */
    RECOMP_CALL(sub_110119E6); /* 0x110123AC: call 0x110119e6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x110123B1: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x110123B3: pop ecx */
    ecx = eax; /* 0x110123B4: mov ecx, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x110123B6: inc esi */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x4)); /* 0x110123B7: mov eax, dword ptr [ebp - 4] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((esi) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x110123BA: shl esi, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((esi << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << ((LO8(ecx)) & 31); /* 0x110123BA: shl esi, cl */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFEu);
    esi = esi & 0xFFFFFFFEu; /* 0x110123BC: and esi, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - esi; /* 0x110123BF: sub ebx, esi */
    _flag_k = FK_CMP;
    edx = ebx; /* 0x110123C1: mov edx, ebx */
    ebx = esi; /* 0x110123C3: mov ebx, esi */
    /* cmp ecx, eax */ /* 0x110123C5: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_110123DE; /* 0x110123C7: ja 0x110123de */
L_110123C9:
    eax = MEM32(edi + 0x18); /* 0x110123C9: mov eax, dword ptr [edi + 0x18] */
    /* cmp MEM32(eax + ecx * 4), 0x3Fu */ /* 0x110123CC: cmp dword ptr [eax + ecx*4], 0x3f */
    _flag_a = (uint32_t)(MEM32(eax + ecx * 4)); _flag_b = (uint32_t)(0x3Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_110123DB; /* 0x110123D0: jbe 0x110123db */
L_110123D2:
    PUSH32(esp, edx); /* 0x110123D2: push edx */
    PUSH32(esp, MEM32(eax + ecx * 4)); /* 0x110123D3: push dword ptr [eax + ecx*4] */
    RECOMP_ICALL(MEM32(ebp + 0x8)); /* 0x110123D6: call dword ptr [ebp + 8] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110123D9: pop ecx */
    ecx = POP32_VAL(esp); /* 0x110123DA: pop ecx */
L_110123DB:
    eax = MEM32(ebp + (-0x4)); /* 0x110123DB: mov eax, dword ptr [ebp - 4] */
L_110123DE:
    /* test esi, esi */ /* 0x110123DE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110123A8; /* 0x110123E0: jne 0x110123a8 */
L_110123E2:
    esi = POP32_VAL(esp); /* 0x110123E2: pop esi */
L_110123E3:
    edi = POP32_VAL(esp); /* 0x110123E3: pop edi */
    ebx = POP32_VAL(esp); /* 0x110123E4: pop ebx */
    esp = ebp; /* 0x110123E5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x110123E7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x110123E8: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_110123EB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110123EBu);

L_110123EB:
    PUSH32(esp, ebp); /* 0x110123EB: push ebp */
    ebp = esp; /* 0x110123EC: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x110123EE: sub esp, 0x28 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x110123F1: push ebx */
    ebx = ecx; /* 0x110123F2: mov ebx, ecx */
    PUSH32(esp, esi); /* 0x110123F4: push esi */
    PUSH32(esp, edi); /* 0x110123F5: push edi */
    MEM32(ebp + (-0x10)) = ebx; /* 0x110123F6: mov dword ptr [ebp - 0x10], ebx */
    esi = MEM32(ebx + 0x14); /* 0x110123F9: mov esi, dword ptr [ebx + 0x14] */
    MEM32(ebp + (-0x4)) = esi; /* 0x110123FC: mov dword ptr [ebp - 4], esi */
    RECOMP_CALL(sub_110117A9); /* 0x110123FF: call 0x110117a9 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x20)) = eax; /* 0x11012404: mov dword ptr [ebp - 0x20], eax */
    /* test esi, esi */ /* 0x11012407: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101241A; /* 0x11012409: je 0x1101241a */
L_1101240B:
    ecx = esi + (-0x1); /* 0x1101240B: lea ecx, [esi - 1] */
    PUSH32(esp, ecx); /* 0x1101240E: push ecx */
    RECOMP_CALL(sub_110119E6); /* 0x1101240F: call 0x110119e6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11012414: pop ecx */
    edi = eax + 0x1; /* 0x11012415: lea edi, [eax + 1] */
    goto L_1101241C; /* 0x11012418: jmp 0x1101241c */
L_1101241A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1101241A: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1101241C:
    esi = MEM32(ebx + 0x10); /* 0x1101241C: mov esi, dword ptr [ebx + 0x10] */
    ebx = esi; /* 0x1101241F: mov ebx, esi */
    MEM32(ebp + (-0x8)) = edi; /* 0x11012421: mov dword ptr [ebp - 8], edi */
    /* cmp esi, edi */ /* 0x11012424: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1101242C; /* 0x11012426: jbe 0x1101242c */
L_11012428:
    ebx = edi; /* 0x11012428: mov ebx, edi */
    goto L_1101245D; /* 0x1101242A: jmp 0x1101245d */
L_1101242C:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_AE, _cf)) goto L_1101245D; /* 0x1101242C: jae 0x1101245d */
L_1101242E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1101242E: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebx; /* 0x11012430: mov ecx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x11012432: inc edx */
    _flag_k = FK_INC;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x11012433: shl edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << ((LO8(ecx)) & 31); /* 0x11012433: shl edx, cl */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + 0x8)); /* 0x11012435: imul edx, dword ptr [ebp + 8] */
    /* cmp edx, 0x1000u */ /* 0x11012439: cmp edx, 0x1000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x1000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_11012458; /* 0x1101243F: jb 0x11012458 */
L_11012441:
    eax = edx + (-0x1); /* 0x11012441: lea eax, [edx - 1] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFu);
    eax = eax & 0xFFFu; /* 0x11012444: and eax, 0xfff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x800u */ /* 0x11012449: cmp eax, 0x800 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x800u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1101245D; /* 0x1101244E: jae 0x1101245d */
L_11012450:
    /* cmp edx, 0x00080000u */ /* 0x11012450: cmp edx, 0x80000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x00080000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1101245D; /* 0x11012456: jae 0x1101245d */
L_11012458:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x11012458: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, edi */ /* 0x11012459: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1101242E; /* 0x1101245B: jb 0x1101242e */
L_1101245D:
    /* cmp edi, MEM32(ebp + (-0x20)) */ /* 0x1101245D: cmp edi, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x20)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101246D; /* 0x11012460: jne 0x1101246d */
L_11012462:
    /* cmp ebx, esi */ /* 0x11012462: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101246D; /* 0x11012464: jne 0x1101246d */
L_11012466:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11012466: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_11012613; /* 0x11012468: jmp 0x11012613 */
L_1101246D:
    eax = MEM32(ebp + (-0x10)); /* 0x1101246D: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, 0x84u); /* 0x11012470: push 0x84 */
    PUSH32(esp, 0); /* 0x11012475: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11012477: push dword ptr [ebp + 0xc] */
    eax = MEM32(eax + 0x18); /* 0x1101247A: mov eax, dword ptr [eax + 0x18] */
    MEM32(ebp + (-0xC)) = eax; /* 0x1101247D: mov dword ptr [ebp - 0xc], eax */
    RECOMP_CALL(sub_1103B49A); /* 0x11012480: call 0x1103b49a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11012485: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp ebx, esi */ /* 0x11012488: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110125D2; /* 0x1101248A: je 0x110125d2 */
L_11012490:
    /* test ebx, ebx */ /* 0x11012490: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110125D2; /* 0x11012492: je 0x110125d2 */
L_11012498:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11012498: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebx; /* 0x1101249A: mov ecx, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1101249C: inc eax */
    _flag_k = FK_INC;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x1101249D: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x1101249D: shl eax, cl */
    PUSH32(esp, eax); /* 0x1101249F: push eax */
    eax = MEM32(ebp + (-0x10)); /* 0x110124A0: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x110124A3: push eax */
    RECOMP_ICALL(MEM32(eax)); /* 0x110124A4: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110124A6: pop ecx */
    ecx = POP32_VAL(esp); /* 0x110124A7: pop ecx */
    ecx = eax; /* 0x110124A8: mov ecx, eax */
    MEM32(ebp + (-0x18)) = ecx; /* 0x110124AA: mov dword ptr [ebp - 0x18], ecx */
    /* test ecx, ecx */ /* 0x110124AD: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110124BB; /* 0x110124AF: jne 0x110124bb */
L_110124B1:
    RECOMP_CALL(sub_1101163C); /* 0x110124B1: call 0x1101163c */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x110124B6: mov ecx, eax */
    MEM32(ebp + (-0x18)) = eax; /* 0x110124B8: mov dword ptr [ebp - 0x18], eax */
L_110124BB:
    eax = MEM32(ebp + 0xC); /* 0x110124BB: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x24)) = MEM32(ebp + (-0x24)) & 0; /* 0x110124BE: and dword ptr [ebp - 0x24], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = eax + 0x4; /* 0x110124C2: lea edx, [eax + 4] */
    MEM32(eax) = ebx; /* 0x110124C5: mov dword ptr [eax], ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x110124C7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx) = ecx; /* 0x110124C9: mov dword ptr [edx], ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x110124CB: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x28)) = edx; /* 0x110124CC: mov dword ptr [ebp - 0x28], edx */
    ecx = esi; /* 0x110124CF: mov ecx, esi */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x110124D1: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x110124D1: shl eax, cl */
    MEM32(ebp + (-0x1C)) = eax; /* 0x110124D3: mov dword ptr [ebp - 0x1c], eax */
    edx = eax; /* 0x110124D6: mov edx, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x110124D8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = eax; /* 0x110124DA: mov dword ptr [ebp - 0x14], eax */
    /* test ebx, ebx */ /* 0x110124DD: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101253D; /* 0x110124DF: je 0x1101253d */
L_110124E1:
    edi = MEM32(ebp + (-0x24)); /* 0x110124E1: mov edi, dword ptr [ebp - 0x24] */
L_110124E4:
    /* cmp eax, MEM32(ebp + (-0x4)) */ /* 0x110124E4: cmp eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1101253A; /* 0x110124E7: jae 0x1101253a */
L_110124E9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x110124E9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edi; /* 0x110124EB: mov ecx, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x110124ED: inc eax */
    _flag_k = FK_INC;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x110124EE: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x110124EE: shl eax, cl */
    ecx = MEM32(ebp + (-0x4)); /* 0x110124F0: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    eax = eax & 0xFFFFFFFEu; /* 0x110124F3: and eax, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x8)); /* 0x110124F6: imul eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x18)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x18)); /* 0x110124FA: add eax, dword ptr [ebp - 0x18] */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x24)) = eax; /* 0x110124FD: mov dword ptr [ebp - 0x24], eax */
    eax = MEM32(ebp + (-0x14)); /* 0x11012500: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x11012503: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp eax, ecx */ /* 0x11012505: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1101250E; /* 0x11012507: jb 0x1101250e */
L_11012509:
    edx = ecx; /* 0x11012509: mov edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(ebp + (-0x14)); /* 0x1101250B: sub edx, dword ptr [ebp - 0x14] */
    _flag_k = FK_CMP;
L_1101250E:
    eax = MEM32(ebp + (-0xC)); /* 0x1101250E: mov eax, dword ptr [ebp - 0xc] */
    PUSH32(esp, edx); /* 0x11012511: push edx */
    PUSH32(esp, MEM32(eax + edi * 4)); /* 0x11012512: push dword ptr [eax + edi*4] */
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x11012515: push dword ptr [ebp - 0x24] */
    RECOMP_ICALL(MEM32(ebp + 0x14)); /* 0x11012518: call dword ptr [ebp + 0x14] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1101251B: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x1101251E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101252C; /* 0x11012520: je 0x1101252c */
L_11012522:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x11012522: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x11012523: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x11012525: inc edx */
    _flag_k = FK_INC;
    ecx = edi; /* 0x11012526: mov ecx, edi */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x11012528: shl edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << ((LO8(ecx)) & 31); /* 0x11012528: shl edx, cl */
    goto L_11012531; /* 0x1101252A: jmp 0x11012531 */
L_1101252C:
    edx = MEM32(ebp + (-0x1C)); /* 0x1101252C: mov edx, dword ptr [ebp - 0x1c] */
    edi = esi; /* 0x1101252F: mov edi, esi */
L_11012531:
    eax = edx; /* 0x11012531: mov eax, edx */
    MEM32(ebp + (-0x14)) = eax; /* 0x11012533: mov dword ptr [ebp - 0x14], eax */
    /* cmp edi, ebx */ /* 0x11012536: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_110124E4; /* 0x11012538: jb 0x110124e4 */
L_1101253A:
    edi = MEM32(ebp + (-0x8)); /* 0x1101253A: mov edi, dword ptr [ebp - 8] */
L_1101253D:
    eax = ebx; /* 0x1101253D: mov eax, ebx */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1101253F: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1101253F: shl eax, 2 */
    PUSH32(esp, eax); /* 0x11012542: push eax */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x11012543: push dword ptr [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x11012546: push dword ptr [ebp - 0x28] */
    RECOMP_CALL(sub_1103B300); /* 0x11012549: call 0x1103b300 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1101254E: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x11012551: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ebx, ebx */ /* 0x11012553: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11012576; /* 0x11012555: je 0x11012576 */
L_11012557:
    edx = MEM32(ebp + (-0x18)); /* 0x11012557: mov edx, dword ptr [ebp - 0x18] */
    edi = MEM32(ebp + (-0xC)); /* 0x1101255A: mov edi, dword ptr [ebp - 0xc] */
L_1101255D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1101255D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1101255F: inc eax */
    _flag_k = FK_INC;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x11012560: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x11012560: shl eax, cl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    eax = eax & 0xFFFFFFFEu; /* 0x11012562: and eax, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x8)); /* 0x11012565: imul eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x11012569: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(edi + ecx * 4) = eax; /* 0x1101256B: mov dword ptr [edi + ecx*4], eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1101256E: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, ebx */ /* 0x1101256F: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1101255D; /* 0x11012571: jb 0x1101255d */
L_11012573:
    edi = MEM32(ebp + (-0x8)); /* 0x11012573: mov edi, dword ptr [ebp - 8] */
L_11012576:
    ecx = MEM32(ebp + 0xC); /* 0x11012576: mov ecx, dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + (-0x10)); /* 0x11012579: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) & 0; /* 0x1101257C: and dword ptr [ebp + 0x14], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(ebp + (-0x1C)); /* 0x11012580: mov edx, dword ptr [ebp - 0x1c] */
    MEM32(ecx) = esi; /* 0x11012583: mov dword ptr [ecx], esi */
    MEM32(eax + 0x10) = ebx; /* 0x11012585: mov dword ptr [eax + 0x10], ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11012588: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x8) = eax; /* 0x1101258A: mov dword ptr [ebp + 8], eax */
    /* test ebx, ebx */ /* 0x1101258D: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110125D2; /* 0x1101258F: je 0x110125d2 */
L_11012591:
    edi = MEM32(ebp + 0x14); /* 0x11012591: mov edi, dword ptr [ebp + 0x14] */
L_11012594:
    /* cmp eax, MEM32(ebp + (-0x4)) */ /* 0x11012594: cmp eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_110125CF; /* 0x11012597: jae 0x110125cf */
L_11012599:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x11012599: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebp + (-0x4)) */ /* 0x1101259B: cmp eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_110125A6; /* 0x1101259E: jb 0x110125a6 */
L_110125A0:
    edx = MEM32(ebp + (-0x4)); /* 0x110125A0: mov edx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(ebp + 0x8); /* 0x110125A3: sub edx, dword ptr [ebp + 8] */
    _flag_k = FK_CMP;
L_110125A6:
    PUSH32(esp, edx); /* 0x110125A6: push edx */
    PUSH32(esp, MEM32(ecx + edi * 4 + 0x4)); /* 0x110125A7: push dword ptr [ecx + edi*4 + 4] */
    RECOMP_ICALL(MEM32(ebp + 0x10)); /* 0x110125AB: call dword ptr [ebp + 0x10] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110125AE: pop ecx */
    ecx = POP32_VAL(esp); /* 0x110125AF: pop ecx */
    /* test edi, edi */ /* 0x110125B0: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110125BE; /* 0x110125B2: je 0x110125be */
L_110125B4:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x110125B4: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x110125B5: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x110125B7: inc edx */
    _flag_k = FK_INC;
    ecx = edi; /* 0x110125B8: mov ecx, edi */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x110125BA: shl edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << ((LO8(ecx)) & 31); /* 0x110125BA: shl edx, cl */
    goto L_110125C3; /* 0x110125BC: jmp 0x110125c3 */
L_110125BE:
    edx = MEM32(ebp + (-0x1C)); /* 0x110125BE: mov edx, dword ptr [ebp - 0x1c] */
    edi = esi; /* 0x110125C1: mov edi, esi */
L_110125C3:
    ecx = MEM32(ebp + 0xC); /* 0x110125C3: mov ecx, dword ptr [ebp + 0xc] */
    eax = edx; /* 0x110125C6: mov eax, edx */
    MEM32(ebp + 0x8) = eax; /* 0x110125C8: mov dword ptr [ebp + 8], eax */
    /* cmp edi, ebx */ /* 0x110125CB: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_11012594; /* 0x110125CD: jb 0x11012594 */
L_110125CF:
    edi = MEM32(ebp + (-0x8)); /* 0x110125CF: mov edi, dword ptr [ebp - 8] */
L_110125D2:
    eax = MEM32(ebp + (-0x20)); /* 0x110125D2: mov eax, dword ptr [ebp - 0x20] */
    /* cmp edi, eax */ /* 0x110125D5: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_11012610; /* 0x110125D7: jae 0x11012610 */
L_110125D9:
    ecx = MEM32(ebp + 0xC); /* 0x110125D9: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x110125DC: sub eax, edi */
    _flag_k = FK_CMP;
    MEM32(ecx) = esi; /* 0x110125DE: mov dword ptr [ecx], esi */
    esi = eax; /* 0x110125E0: mov esi, eax */
    eax = MEM32(ebp + (-0xC)); /* 0x110125E2: mov eax, dword ptr [ebp - 0xc] */
    if (2u) _cf = (((esi) >> 30) & 1u); /* 0x110125E5: shl esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((esi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 2u; /* 0x110125E5: shl esi, 2 */
    PUSH32(esp, esi); /* 0x110125E8: push esi */
    edi = eax + edi * 4; /* 0x110125E9: lea edi, [eax + edi*4] */
    eax = MEM32(ebp + (-0x8)); /* 0x110125EC: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x110125EF: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, edi); /* 0x110125F0: push edi */
    eax = ecx + eax * 4; /* 0x110125F1: lea eax, [ecx + eax*4] */
    PUSH32(esp, eax); /* 0x110125F4: push eax */
    RECOMP_CALL(sub_1103B300); /* 0x110125F5: call 0x1103b300 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x110125FA: push esi */
    PUSH32(esp, 0); /* 0x110125FB: push 0 */
    PUSH32(esp, edi); /* 0x110125FD: push edi */
    RECOMP_CALL(sub_1103B49A); /* 0x110125FE: call 0x1103b49a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x11012603: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test ebx, ebx */ /* 0x11012606: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11012610; /* 0x11012608: jne 0x11012610 */
L_1101260A:
    eax = MEM32(ebp + (-0x10)); /* 0x1101260A: mov eax, dword ptr [ebp - 0x10] */
    MEM32(eax + 0x10) = ebx; /* 0x1101260D: mov dword ptr [eax + 0x10], ebx */
L_11012610:
    eax = MEM32(ebp + 0xC); /* 0x11012610: mov eax, dword ptr [ebp + 0xc] */
L_11012613:
    edi = POP32_VAL(esp); /* 0x11012613: pop edi */
    esi = POP32_VAL(esp); /* 0x11012614: pop esi */
    ebx = POP32_VAL(esp); /* 0x11012615: pop ebx */
    esp = ebp; /* 0x11012616: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x11012618: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x11012619: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1101261C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101261Cu);

L_1101261C:
    PUSH32(esp, ebp); /* 0x1101261C: push ebp */
    ebp = esp; /* 0x1101261D: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1101261F: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x11012622: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x11012623: mov ebx, dword ptr [ebp + 8] */
    edx = ecx; /* 0x11012626: mov edx, ecx */
    ecx = MEM32(edx + 0x14); /* 0x11012628: mov ecx, dword ptr [edx + 0x14] */
    eax = MEM32(ebx + 0x14); /* 0x1101262B: mov eax, dword ptr [ebx + 0x14] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x1101262E: mov dword ptr [ebp - 4], ecx */
    MEM32(ebp + 0x8) = eax; /* 0x11012631: mov dword ptr [ebp + 8], eax */
    /* test ecx, ecx */ /* 0x11012634: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11012640; /* 0x11012636: jne 0x11012640 */
L_11012638:
    /* test eax, eax */ /* 0x11012638: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110126C4; /* 0x1101263A: je 0x110126c4 */
L_11012640:
    ecx = MEM32(edx + 0x10); /* 0x11012640: mov ecx, dword ptr [edx + 0x10] */
    eax = MEM32(ebx + 0x10); /* 0x11012643: mov eax, dword ptr [ebx + 0x10] */
    MEM32(edx + 0x10) = eax; /* 0x11012646: mov dword ptr [edx + 0x10], eax */
    MEM32(ebx + 0x10) = ecx; /* 0x11012649: mov dword ptr [ebx + 0x10], ecx */
    ecx = edx + 0x4; /* 0x1101264C: lea ecx, [edx + 4] */
    /* cmp MEM32(edx + 0x18), ecx */ /* 0x1101264F: cmp dword ptr [edx + 0x18], ecx */
    _flag_a = (uint32_t)(MEM32(edx + 0x18)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x11012652: push esi */
    PUSH32(esp, edi); /* 0x11012653: push edi */
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x11012654: sete al */
    edi = ebx + 0x4; /* 0x11012657: lea edi, [ebx + 4] */
    /* cmp MEM32(ebx + 0x18), edi */ /* 0x1101265A: cmp dword ptr [ebx + 0x18], edi */
    _flag_a = (uint32_t)(MEM32(ebx + 0x18)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_HI8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1101265D: sete ah */
    /* test LO8(eax), LO8(eax) */ /* 0x11012660: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11012694; /* 0x11012662: je 0x11012694 */
L_11012664:
    esi = ecx; /* 0x11012664: mov esi, ecx */
    /* test HI8(eax), HI8(eax) */ /* 0x11012666: test ah, ah */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11012683; /* 0x11012668: je 0x11012683 */
L_1101266A:
    edi = ebp + (-0x10); /* 0x1101266A: lea edi, [ebp - 0x10] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1101266D: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1101266E: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1101266F: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = ecx; /* 0x11012670: mov edi, ecx */
    esi = ebx + 0x4; /* 0x11012672: lea esi, [ebx + 4] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x11012675: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x11012676: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x11012677: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = ebp + (-0x10); /* 0x11012678: lea esi, [ebp - 0x10] */
    edi = ebx + 0x4; /* 0x1101267B: lea edi, [ebx + 4] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1101267E: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1101267F: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x11012680: movsd dword ptr es:[edi], dword ptr [esi] */
    goto L_110126B6; /* 0x11012681: jmp 0x110126b6 */
L_11012683:
    eax = MEM32(ebx + 0x18); /* 0x11012683: mov eax, dword ptr [ebx + 0x18] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x11012686: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x11012687: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x11012688: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edx + 0x18) = eax; /* 0x11012689: mov dword ptr [edx + 0x18], eax */
    eax = ebx + 0x4; /* 0x1101268C: lea eax, [ebx + 4] */
    MEM32(ebx + 0x18) = eax; /* 0x1101268F: mov dword ptr [ebx + 0x18], eax */
    goto L_110126B6; /* 0x11012692: jmp 0x110126b6 */
L_11012694:
    /* test HI8(eax), HI8(eax) */ /* 0x11012694: test ah, ah */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_110126AA; /* 0x11012696: je 0x110126aa */
L_11012698:
    eax = MEM32(edx + 0x18); /* 0x11012698: mov eax, dword ptr [edx + 0x18] */
    esi = edi; /* 0x1101269B: mov esi, edi */
    edi = ecx; /* 0x1101269D: mov edi, ecx */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1101269F: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x110126A0: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x110126A1: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(ebx + 0x18) = eax; /* 0x110126A2: mov dword ptr [ebx + 0x18], eax */
    MEM32(edx + 0x18) = ecx; /* 0x110126A5: mov dword ptr [edx + 0x18], ecx */
    goto L_110126B6; /* 0x110126A8: jmp 0x110126b6 */
L_110126AA:
    ecx = MEM32(edx + 0x18); /* 0x110126AA: mov ecx, dword ptr [edx + 0x18] */
    eax = MEM32(ebx + 0x18); /* 0x110126AD: mov eax, dword ptr [ebx + 0x18] */
    MEM32(edx + 0x18) = eax; /* 0x110126B0: mov dword ptr [edx + 0x18], eax */
    MEM32(ebx + 0x18) = ecx; /* 0x110126B3: mov dword ptr [ebx + 0x18], ecx */
L_110126B6:
    eax = MEM32(ebp + 0x8); /* 0x110126B6: mov eax, dword ptr [ebp + 8] */
    MEM32(edx + 0x14) = eax; /* 0x110126B9: mov dword ptr [edx + 0x14], eax */
    eax = MEM32(ebp + (-0x4)); /* 0x110126BC: mov eax, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x110126BF: pop edi */
    MEM32(ebx + 0x14) = eax; /* 0x110126C0: mov dword ptr [ebx + 0x14], eax */
    esi = POP32_VAL(esp); /* 0x110126C3: pop esi */
L_110126C4:
    ebx = POP32_VAL(esp); /* 0x110126C4: pop ebx */
    esp = ebp; /* 0x110126C5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x110126C7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x110126C8: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_110126CB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110126CBu);

L_110126CB:
    eax = 0x11068E98u; /* 0x110126CB: mov eax, 0x11068e98 */
    /* bts MEM32(eax), ((0) & 31) */ /* 0x110126D0: lock bts dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(((0) & 31));
    MEM32(eax) = _flag_a | (1u << _flag_b); /* 0x110126D0: lock bts dword ptr [eax], 0 */
    _flag_k = FK_BT;
    RECOMP_BACKEDGE();
    if (BT_CF(_flag_a, _flag_b)) goto L_110126CB; /* 0x110126D5: jb 0x110126cb */
L_110126D7:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110126D7: ret  */
    RECOMP_REGS_OUT();
}

void sub_110126D8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110126D8u);

L_110126D8:
    eax = 0x11068E98u; /* 0x110126D8: mov eax, 0x11068e98 */
    /* btr MEM32(eax), ((0) & 31) */ /* 0x110126DD: lock btr dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(((0) & 31));
    MEM32(eax) = _flag_a & ~ (1u << _flag_b); /* 0x110126DD: lock btr dword ptr [eax], 0 */
    _flag_k = FK_BT;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110126E2: ret  */
    RECOMP_REGS_OUT();
}

void sub_110126E3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110126E3u);

L_110126E3:
    PUSH32(esp, ebp); /* 0x110126E3: push ebp */
    ebp = esp; /* 0x110126E4: mov ebp, esp */
    eax = ebp + 0x8; /* 0x110126E6: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x110126E9: push eax */
    RECOMP_CALL(sub_1101278A); /* 0x110126EA: call 0x1101278a */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x110126EF: cwde  */
    ecx = POP32_VAL(esp); /* 0x110126F0: pop ecx */
    /* test eax, eax */ /* 0x110126F1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11012785; /* 0x110126F3: je 0x11012785 */
L_110126F9:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x110126F9: dec eax */
    _flag_k = FK_DEC;
    /* cmp eax, 1 */ /* 0x110126FA: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_11012704; /* 0x110126FD: ja 0x11012704 */
L_110126FF:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x110126FF: fld qword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x11012702: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11012703: ret  */
L_11012704:
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x11012704: fld qword ptr [ebp + 0x10] */
    fp_push(0.0); /* 0x11012707: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x11012709: fucom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1101270B: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x1101270D: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_11012716; /* 0x11012710: jp 0x11012716 */
L_11012712:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x11012712: fstp st(0) */
    ebp = POP32_VAL(esp); /* 0x11012714: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11012715: ret  */
L_11012716:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x11012716: fld qword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x11012719: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1101271B: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1101271D: fstp st(1) */
    /* test HI8(eax), 5 */ /* 0x1101271F: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_11012729; /* 0x11012722: jp 0x11012729 */
L_11012724:
    _st[0] = -_st[0]; /* 0x11012724: fchs  */
    *(double*)ADDR(ebp + 0x8) = _st[0]; /* 0x11012726: fst qword ptr [ebp + 8] */
L_11012729:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x110630E8)); /* 0x11012729: fcomp qword ptr [0x110630e8] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1101272F: fnstsw ax */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x11012731: push -1 */
    PUSH32(esp, ecx); /* 0x11012733: push ecx */
    PUSH32(esp, ecx); /* 0x11012734: push ecx */
    /* test HI8(eax), 5 */ /* 0x11012735: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = ebp + 0x8; /* 0x11012738: lea eax, [ebp + 8] */
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1101275F; /* 0x1101273B: jp 0x1101275f */
L_1101273D:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1101273D: fstp st(0) */
    fp_push(1.0); /* 0x1101273F: fld1  */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x11012741: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x11012744: push eax */
    RECOMP_CALL(sub_110127FF); /* 0x11012745: call 0x110127ff */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(0x11001138)); /* 0x1101274A: fld qword ptr [0x11001138] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11012750: add esp, 0x10 */
    _flag_k = FK_ADD;
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x11012753: fld qword ptr [ebp + 8] */
    _st[1] /= _st[0]; /* 0x11012756: fdiv st(1), st(0) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x11012758: faddp st(1) */
    _st[0] *= *(double*)ADDR(ebp + 0x10); /* 0x1101275A: fmul qword ptr [ebp + 0x10] */
    ebp = POP32_VAL(esp); /* 0x1101275D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101275E: ret  */
L_1101275F:
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x1101275F: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x11012762: push eax */
    RECOMP_CALL(sub_110127FF); /* 0x11012763: call 0x110127ff */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x11012768: cwde  */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11012769: add esp, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x1101276C: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_11012778; /* 0x1101276F: je 0x11012778 */
L_11012771:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x11012771: dec eax */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_110126FF; /* 0x11012772: jne 0x110126ff */
L_11012774:
    PUSH32(esp, 8); /* 0x11012774: push 8 */
    goto L_1101277A; /* 0x11012776: jmp 0x1101277a */
L_11012778:
    PUSH32(esp, 0x10u); /* 0x11012778: push 0x10 */
L_1101277A:
    RECOMP_CALL(sub_1102F9F9); /* 0x1101277A: call 0x1102f9f9 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101277F: pop ecx */
    RECOMP_BACKEDGE();
    goto L_110126FF; /* 0x11012780: jmp 0x110126ff */
L_11012785:
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x11012785: fld qword ptr [ebp + 0x10] */
    ebp = POP32_VAL(esp); /* 0x11012788: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11012789: ret  */
    RECOMP_REGS_OUT();
}

void sub_1101278A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101278Au);

L_1101278A:
    PUSH32(esp, ebp); /* 0x1101278A: push ebp */
    ebp = esp; /* 0x1101278B: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x1101278D: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x11012790: push esi */
    esi = 0x7FF0u; /* 0x11012791: mov esi, 0x7ff0 */
    eax = (uint32_t)MEM16(ecx + 0x6); /* 0x11012796: movzx eax, word ptr [ecx + 6] */
    edx = eax; /* 0x1101279A: mov edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    edx = edx & esi; /* 0x1101279C: and edx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(edx), LO16(esi) */ /* 0x1101279E: cmp dx, si */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    esi = POP32_VAL(esp); /* 0x110127A1: pop esi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_110127C3; /* 0x110127A2: jne 0x110127c3 */
L_110127A4:
    /* test LO8(eax), 0xFu */ /* 0x110127A4: test al, 0xf */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xFu) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110127BE; /* 0x110127A6: jne 0x110127be */
L_110127A8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x110127A8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(ecx + 0x4), LO16(eax) */ /* 0x110127AA: cmp word ptr [ecx + 4], ax */
    _flag_a = (uint32_t)(MEM16(ecx + 0x4)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_110127BE; /* 0x110127AE: jne 0x110127be */
L_110127B0:
    /* cmp MEM16(ecx + 0x2), LO16(eax) */ /* 0x110127B0: cmp word ptr [ecx + 2], ax */
    _flag_a = (uint32_t)(MEM16(ecx + 0x2)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_110127BE; /* 0x110127B4: jne 0x110127be */
L_110127B6:
    /* cmp MEM16(ecx), LO16(eax) */ /* 0x110127B6: cmp word ptr [ecx], ax */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_110127BE; /* 0x110127B9: jne 0x110127be */
L_110127BB:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x110127BB: inc eax */
    _flag_k = FK_INC;
    ebp = POP32_VAL(esp); /* 0x110127BC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110127BD: ret  */
L_110127BE:
    PUSH32(esp, 2); /* 0x110127BE: push 2 */
    eax = POP32_VAL(esp); /* 0x110127C0: pop eax */
    ebp = POP32_VAL(esp); /* 0x110127C1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110127C2: ret  */
L_110127C3:
    /* test eax, 0xFFFF7FFFu */ /* 0x110127C3: test eax, 0xffff7fff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFF7FFFu);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110127DF; /* 0x110127C8: jne 0x110127df */
L_110127CA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x110127CA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(ecx + 0x4), LO16(eax) */ /* 0x110127CC: cmp word ptr [ecx + 4], ax */
    _flag_a = (uint32_t)(MEM16(ecx + 0x4)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_110127DF; /* 0x110127D0: jne 0x110127df */
L_110127D2:
    /* cmp MEM16(ecx + 0x2), LO16(eax) */ /* 0x110127D2: cmp word ptr [ecx + 2], ax */
    _flag_a = (uint32_t)(MEM16(ecx + 0x2)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_110127DF; /* 0x110127D6: jne 0x110127df */
L_110127D8:
    /* cmp MEM16(ecx), LO16(eax) */ /* 0x110127D8: cmp word ptr [ecx], ax */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_110127DF; /* 0x110127DB: jne 0x110127df */
L_110127DD:
    ebp = POP32_VAL(esp); /* 0x110127DD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110127DE: ret  */
L_110127DF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x110127DF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test LO16(edx), LO16(edx) */ /* 0x110127E1: test dx, dx */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x110127E4: setne al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 2; /* 0x110127E7: sub eax, 2 */
    _flag_k = FK_CMP;
    ebp = POP32_VAL(esp); /* 0x110127EA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110127EB: ret  */
    RECOMP_REGS_OUT();
}

void sub_110127EC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110127ECu);

L_110127EC:
    PUSH32(esp, ebp); /* 0x110127EC: push ebp */
    ebp = esp; /* 0x110127ED: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x110127EF: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x110127F2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110127F3: ret  */
    RECOMP_REGS_OUT();
}

void sub_110127F4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110127F4u);

L_110127F4:
    PUSH32(esp, ebp); /* 0x110127F4: push ebp */
    ebp = esp; /* 0x110127F5: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x110127F7: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 6; /* 0x110127FA: add eax, 6 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x110127FD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110127FE: ret  */
    RECOMP_REGS_OUT();
}

void sub_110127FF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110127FFu);

L_110127FF:
    PUSH32(esp, ebp); /* 0x110127FF: push ebp */
    ebp = esp; /* 0x11012800: mov ebp, esp */
    fp_push(*(double*)ADDR(0x110011E8)); /* 0x11012802: fld qword ptr [0x110011e8] */
    PUSH32(esp, esi); /* 0x11012808: push esi */
    esi = MEM32(ebp + 0x8); /* 0x11012809: mov esi, dword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(esi)); /* 0x1101280C: fcomp qword ptr [esi] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1101280E: fnstsw ax */
    fp_push(0.0); /* 0x11012810: fldz  */
    /* test HI8(eax), 0x41u */ /* 0x11012812: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101290D; /* 0x11012815: je 0x1101290d */
L_1101281B:
    fp_push(*(double*)ADDR(ebp + 0xC)); /* 0x1101281B: fld qword ptr [ebp + 0xc] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1101281E: fucom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11012820: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x11012822: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_1101290B; /* 0x11012825: jnp 0x1101290b */
L_1101282B:
    fp_push(*(double*)ADDR(esi)); /* 0x1101282B: fld qword ptr [esi] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x110011C0)); /* 0x1101282D: fcomp qword ptr [0x110011c0] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11012833: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x11012835: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1101284C; /* 0x11012838: jne 0x1101284c */
L_1101283A:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1101283A: fstp st(1) */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1101283C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1101283E: fstp st(0) */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x11012840: inc eax */
    _flag_k = FK_INC;
    fp_push(*(double*)ADDR(0x11063098)); /* 0x11012841: fld qword ptr [0x11063098] */
    goto L_1101290F; /* 0x11012847: jmp 0x1101290f */
L_1101284C:
    fp_push(*(double*)ADDR(esi)); /* 0x1101284C: fld qword ptr [esi] */
    _st[0] *= *(double*)ADDR(0x110011A8); /* 0x1101284E: fmul qword ptr [0x110011a8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x11012854: fcom st(2) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11012856: fnstsw ax */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x11012858: fstp st(2) */
    /* test HI8(eax), 5 */ /* 0x1101285A: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_11012867; /* 0x1101285D: jp 0x11012867 */
L_1101285F:
    fp_push(*(double*)ADDR(0x110011E0)); /* 0x1101285F: fld qword ptr [0x110011e0] */
    goto L_1101286D; /* 0x11012865: jmp 0x1101286d */
L_11012867:
    fp_push(*(double*)ADDR(0x11001198)); /* 0x11012867: fld qword ptr [0x11001198] */
L_1101286D:
    { double _v = fp_pop(); _st[1] += _v; } /* 0x1101286D: faddp st(2) */
    fp_xch(1); /* 0x1101286F: fxch st(1) */
    RECOMP_CALL(sub_1103AEE0); /* 0x11012871: call 0x1103aee0 */
    RECOMP_FLAGS_IN();
    ecx = (uint32_t)LO16(eax); /* 0x11012876: movzx ecx, ax */
    eax = (int32_t)(int16_t)LO16(ecx); /* 0x11012879: movsx eax, cx */
    MEM32(ebp + 0x8) = eax; /* 0x1101287C: mov dword ptr [ebp + 8], eax */
    fp_push((double)(int32_t)MEM32(ebp + 0x8)); /* 0x1101287F: fild dword ptr [ebp + 8] */
    fp_push(*(double*)ADDR(0x110011A0)); /* 0x11012882: fld qword ptr [0x110011a0] */
    _st[0] *= _st[1]; /* 0x11012888: fmul st(1) */
    _st[0] = *(double*)ADDR(esi) - _st[0]; /* 0x1101288A: fsubr qword ptr [esi] */
    fp_xch(1); /* 0x1101288C: fxch st(1) */
    _st[0] *= *(double*)ADDR(0x11001190); /* 0x1101288E: fmul qword ptr [0x11001190] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x11012894: fsubp st(1) */
    fp_push(*(double*)ADDR(0x110630C8)); /* 0x11012896: fld qword ptr [0x110630c8] */
    fp_push(_st[0]); /* 0x1101289C: fld st(0) */
    _st[0] = -_st[0]; /* 0x1101289E: fchs  */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x110128A0: fcomp st(2) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x110128A2: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x110128A4: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_110128B6; /* 0x110128A7: jp 0x110128b6 */
L_110128A9:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x110128A9: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x110128AB: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x110128AD: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110128B8; /* 0x110128B0: jne 0x110128b8 */
L_110128B2:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x110128B2: fstp st(0) */
    goto L_110128F5; /* 0x110128B4: jmp 0x110128f5 */
L_110128B6:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x110128B6: fstp st(0) */
L_110128B8:
    fp_push(_st[0]); /* 0x110128B8: fld st(0) */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x110128BA: dec ecx */
    _flag_k = FK_DEC;
    _st[0] *= _st[1]; /* 0x110128BB: fmul st(1) */
    fp_push(*(double*)ADDR(0x110011B0)); /* 0x110128BD: fld qword ptr [0x110011b0] */
    _st[0] *= _st[1]; /* 0x110128C3: fmul st(1) */
    _st[0] += *(double*)ADDR(0x110011C8); /* 0x110128C5: fadd qword ptr [0x110011c8] */
    _st[0] *= _st[1]; /* 0x110128CB: fmul st(1) */
    _st[0] += *(double*)ADDR(0x110011D8); /* 0x110128CD: fadd qword ptr [0x110011d8] */
    fp_push(_st[1]); /* 0x110128D3: fld st(1) */
    _st[0] += *(double*)ADDR(0x110011B8); /* 0x110128D5: fadd qword ptr [0x110011b8] */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x110128DB: fmulp st(2) */
    fp_xch(1); /* 0x110128DD: fxch st(1) */
    _st[0] += *(double*)ADDR(0x110011D0); /* 0x110128DF: fadd qword ptr [0x110011d0] */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x110128E5: fmulp st(2) */
    fp_push(_st[0]); /* 0x110128E7: fld st(0) */
    _st[0] += _st[2]; /* 0x110128E9: fadd st(2) */
    fp_xch(1); /* 0x110128EB: fxch st(1) */
    { double _v = fp_pop(); _st[1] = _v - _st[1]; } /* 0x110128ED: fsubrp st(2) */
    { double _v = fp_pop(); _st[0] = _st[0] == 0.0 ? _v : _v / _st[0]; } /* 0x110128EF: fdivrp st(1) */
    _st[0] += _st[0]; /* 0x110128F1: fadd st(0), st(0) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x110128F3: fmulp st(1) */
L_110128F5:
    eax = MEM32(ebp + 0x14); /* 0x110128F5: mov eax, dword ptr [ebp + 0x14] */
    ecx = (int32_t)(int16_t)LO16(ecx); /* 0x110128F8: movsx ecx, cx */
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x110128FB: cwde  */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x110128FC: add ecx, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, ecx); /* 0x110128FE: push ecx */
    PUSH32(esp, esi); /* 0x110128FF: push esi */
    { double _v = fp_pop(); *(double*)ADDR(esi) = _v; } /* 0x11012900: fstp qword ptr [esi] */
    RECOMP_CALL(sub_1102FA24); /* 0x11012902: call 0x1102fa24 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11012907: pop ecx */
    ecx = POP32_VAL(esp); /* 0x11012908: pop ecx */
    goto L_11012911; /* 0x11012909: jmp 0x11012911 */
L_1101290B:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1101290B: fstp st(0) */
L_1101290D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1101290D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1101290F:
    { double _v = fp_pop(); *(double*)ADDR(esi) = _v; } /* 0x1101290F: fstp qword ptr [esi] */
L_11012911:
    esi = POP32_VAL(esp); /* 0x11012911: pop esi */
    ebp = POP32_VAL(esp); /* 0x11012912: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11012913: ret  */
    RECOMP_REGS_OUT();
}

void sub_11012914(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11012914u);

L_11012914:
    PUSH32(esp, ebp); /* 0x11012914: push ebp */
    ebp = esp; /* 0x11012915: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x11012917: push ecx */
    eax = ebp + 0x8; /* 0x11012918: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x1101291B: push eax */
    RECOMP_CALL(sub_110129D2); /* 0x1101291C: call 0x110129d2 */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x11012921: cwde  */
    ecx = POP32_VAL(esp); /* 0x11012922: pop ecx */
    /* test eax, eax */ /* 0x11012923: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110129CB; /* 0x11012925: je 0x110129cb */
L_1101292B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1101292B: dec eax */
    _flag_k = FK_DEC;
    /* cmp eax, 1 */ /* 0x1101292C: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_11012939; /* 0x1101292F: ja 0x11012939 */
L_11012931:
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x11012931: fld dword ptr [ebp + 8] */
    goto L_110129CE; /* 0x11012934: jmp 0x110129ce */
L_11012939:
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x11012939: fld dword ptr [ebp + 0xc] */
    fp_push(0.0); /* 0x1101293C: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1101293E: fucom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11012940: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x11012942: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1101294E; /* 0x11012945: jp 0x1101294e */
L_11012947:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x11012947: fstp st(0) */
    goto L_110129CE; /* 0x11012949: jmp 0x110129ce */
L_1101294E:
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x1101294E: fld dword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x11012951: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11012953: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x11012955: fstp st(1) */
    /* test HI8(eax), 5 */ /* 0x11012957: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_11012964; /* 0x1101295A: jp 0x11012964 */
L_1101295C:
    _st[0] = -_st[0]; /* 0x1101295C: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x1101295E: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x11012961: fld dword ptr [ebp + 8] */
L_11012964:
    fp_push(*(float*)&MEM32(0x11063150)); /* 0x11012964: fld dword ptr [0x11063150] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1101296A: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1101296C: fnstsw ax */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1101296E: push -1 */
    PUSH32(esp, ecx); /* 0x11012970: push ecx */
    /* test HI8(eax), 0x41u */ /* 0x11012971: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = ebp + 0x8; /* 0x11012974: lea eax, [ebp + 8] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110129A1; /* 0x11012977: jne 0x110129a1 */
L_11012979:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x11012979: fstp st(0) */
    fp_push(1.0); /* 0x1101297B: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x1101297D: fstp dword ptr [esp] */
    PUSH32(esp, eax); /* 0x11012980: push eax */
    RECOMP_CALL(sub_11012A29); /* 0x11012981: call 0x11012a29 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x11012986: fld dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11012989: add esp, 0xc */
    _flag_k = FK_ADD;
    fp_push(_st[0]); /* 0x1101298C: fld st(0) */
    _st[0] = *(double*)ADDR(0x11001138) / _st[0]; /* 0x1101298E: fdivr qword ptr [0x11001138] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x11012994: faddp st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + 0xC); /* 0x11012996: fmul dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x11012999: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x1101299C: fld dword ptr [ebp - 4] */
    goto L_110129CE; /* 0x1101299F: jmp 0x110129ce */
L_110129A1:
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x110129A1: fstp dword ptr [esp] */
    PUSH32(esp, eax); /* 0x110129A4: push eax */
    RECOMP_CALL(sub_11012A29); /* 0x110129A5: call 0x11012a29 */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x110129AA: cwde  */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x110129AB: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x110129AE: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_110129BE; /* 0x110129B1: je 0x110129be */
L_110129B3:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x110129B3: dec eax */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_11012931; /* 0x110129B4: jne 0x11012931 */
L_110129BA:
    PUSH32(esp, 8); /* 0x110129BA: push 8 */
    goto L_110129C0; /* 0x110129BC: jmp 0x110129c0 */
L_110129BE:
    PUSH32(esp, 0x10u); /* 0x110129BE: push 0x10 */
L_110129C0:
    RECOMP_CALL(sub_1102F9F9); /* 0x110129C0: call 0x1102f9f9 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110129C5: pop ecx */
    RECOMP_BACKEDGE();
    goto L_11012931; /* 0x110129C6: jmp 0x11012931 */
L_110129CB:
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x110129CB: fld dword ptr [ebp + 0xc] */
L_110129CE:
    esp = ebp; /* 0x110129CE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x110129D0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110129D1: ret  */
    RECOMP_REGS_OUT();
}

void sub_110129D2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110129D2u);

L_110129D2:
    PUSH32(esp, ebp); /* 0x110129D2: push ebp */
    ebp = esp; /* 0x110129D3: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x110129D5: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x110129D8: push esi */
    esi = 0x7F80u; /* 0x110129D9: mov esi, 0x7f80 */
    eax = (uint32_t)MEM16(ecx + 0x2); /* 0x110129DE: movzx eax, word ptr [ecx + 2] */
    edx = eax; /* 0x110129E2: mov edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    edx = edx & esi; /* 0x110129E4: and edx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(edx), LO16(esi) */ /* 0x110129E6: cmp dx, si */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    esi = POP32_VAL(esp); /* 0x110129E9: pop esi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_11012A00; /* 0x110129EA: jne 0x11012a00 */
L_110129EC:
    /* test LO8(eax), 0x7Fu */ /* 0x110129EC: test al, 0x7f */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x7Fu) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110129FB; /* 0x110129EE: jne 0x110129fb */
L_110129F0:
    /* cmp MEM16(ecx), 0 */ /* 0x110129F0: cmp word ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_110129FB; /* 0x110129F4: jne 0x110129fb */
L_110129F6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x110129F6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x110129F8: inc eax */
    _flag_k = FK_INC;
    ebp = POP32_VAL(esp); /* 0x110129F9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110129FA: ret  */
L_110129FB:
    PUSH32(esp, 2); /* 0x110129FB: push 2 */
    eax = POP32_VAL(esp); /* 0x110129FD: pop eax */
    ebp = POP32_VAL(esp); /* 0x110129FE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110129FF: ret  */
L_11012A00:
    /* test eax, 0xFFFF7FFFu */ /* 0x11012A00: test eax, 0xffff7fff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFF7FFFu);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11012A11; /* 0x11012A05: jne 0x11012a11 */
L_11012A07:
    /* cmp MEM16(ecx), 0 */ /* 0x11012A07: cmp word ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11012A11; /* 0x11012A0B: jne 0x11012a11 */
L_11012A0D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11012A0D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x11012A0F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11012A10: ret  */
L_11012A11:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11012A11: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test LO16(edx), LO16(edx) */ /* 0x11012A13: test dx, dx */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x11012A16: setne al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 2; /* 0x11012A19: sub eax, 2 */
    _flag_k = FK_CMP;
    ebp = POP32_VAL(esp); /* 0x11012A1C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11012A1D: ret  */
    RECOMP_REGS_OUT();
}

void sub_11012A1E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11012A1Eu);

L_11012A1E:
    PUSH32(esp, ebp); /* 0x11012A1E: push ebp */
    ebp = esp; /* 0x11012A1F: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x11012A21: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x11012A24: add eax, 2 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x11012A27: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11012A28: ret  */
    RECOMP_REGS_OUT();
}

void sub_11012A29(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11012A29u);

L_11012A29:
    PUSH32(esp, ebp); /* 0x11012A29: push ebp */
    ebp = esp; /* 0x11012A2A: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x11012A2C: push ecx */
    PUSH32(esp, esi); /* 0x11012A2D: push esi */
    esi = MEM32(ebp + 0x8); /* 0x11012A2E: mov esi, dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(esi)); /* 0x11012A31: fld dword ptr [esi] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x11001250)); /* 0x11012A33: fcomp qword ptr [0x11001250] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11012A39: fnstsw ax */
    fp_push(0.0); /* 0x11012A3B: fldz  */
    /* test HI8(eax), 5 */ /* 0x11012A3D: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_11012B52; /* 0x11012A40: jnp 0x11012b52 */
L_11012A46:
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x11012A46: fld dword ptr [ebp + 0xc] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x11012A49: fucom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11012A4B: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x11012A4D: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_11012B50; /* 0x11012A50: jnp 0x11012b50 */
L_11012A56:
    fp_push(*(float*)&MEM32(esi)); /* 0x11012A56: fld dword ptr [esi] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x11001240)); /* 0x11012A58: fcomp qword ptr [0x11001240] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11012A5E: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x11012A60: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11012A77; /* 0x11012A63: jne 0x11012a77 */
L_11012A65:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x11012A65: fstp st(1) */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11012A67: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x11012A69: fstp st(0) */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x11012A6B: inc eax */
    _flag_k = FK_INC;
    fp_push(*(float*)&MEM32(0x11063100)); /* 0x11012A6C: fld dword ptr [0x11063100] */
    goto L_11012B54; /* 0x11012A72: jmp 0x11012b54 */
L_11012A77:
    fp_push(*(float*)&MEM32(esi)); /* 0x11012A77: fld dword ptr [esi] */
    _st[0] *= *(double*)ADDR(0x11001220); /* 0x11012A79: fmul qword ptr [0x11001220] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x11012A7F: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x11012A82: fld dword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x11012A85: fcom st(2) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11012A87: fnstsw ax */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x11012A89: fstp st(2) */
    /* test HI8(eax), 5 */ /* 0x11012A8B: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_11012A98; /* 0x11012A8E: jp 0x11012a98 */
L_11012A90:
    fp_push(*(float*)&MEM32(0x11001248)); /* 0x11012A90: fld dword ptr [0x11001248] */
    goto L_11012A9E; /* 0x11012A96: jmp 0x11012a9e */
L_11012A98:
    fp_push(*(float*)&MEM32(0x11001218)); /* 0x11012A98: fld dword ptr [0x11001218] */
L_11012A9E:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x11012A9E: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x11012AA1: fld dword ptr [ebp + 8] */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x11012AA4: faddp st(2) */
    fp_xch(1); /* 0x11012AA6: fxch st(1) */
    RECOMP_CALL(sub_1103AEE0); /* 0x11012AA8: call 0x1103aee0 */
    RECOMP_FLAGS_IN();
    ecx = (uint32_t)LO16(eax); /* 0x11012AAD: movzx ecx, ax */
    eax = (int32_t)(int16_t)LO16(ecx); /* 0x11012AB0: movsx eax, cx */
    MEM32(ebp + 0x8) = eax; /* 0x11012AB3: mov dword ptr [ebp + 8], eax */
    fp_push((double)(int32_t)MEM32(ebp + 0x8)); /* 0x11012AB6: fild dword ptr [ebp + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x11012AB9: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(esi)); /* 0x11012ABC: fld dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x11012ABE: fld dword ptr [ebp + 8] */
    fp_push(*(double*)ADDR(0x110011A0)); /* 0x11012AC1: fld qword ptr [0x110011a0] */
    _st[0] *= _st[1]; /* 0x11012AC7: fmul st(1) */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x11012AC9: fsubp st(2) */
    _st[0] *= *(double*)ADDR(0x11001210); /* 0x11012ACB: fmul qword ptr [0x11001210] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x11012AD1: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x11012AD3: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(0x11063130)); /* 0x11012AD6: fld dword ptr [0x11063130] */
    fp_push(_st[0]); /* 0x11012ADC: fld st(0) */
    _st[0] = -_st[0]; /* 0x11012ADE: fchs  */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x11012AE0: fld dword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x11012AE3: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11012AE5: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x11012AE7: fstp st(1) */
    /* test HI8(eax), 0x41u */ /* 0x11012AE9: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11012AFD; /* 0x11012AEC: jne 0x11012afd */
L_11012AEE:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x11012AEE: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11012AF0: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x11012AF2: fstp st(1) */
    /* test HI8(eax), 5 */ /* 0x11012AF4: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_11012AFF; /* 0x11012AF7: jp 0x11012aff */
L_11012AF9:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x11012AF9: fstp st(0) */
    goto L_11012B3A; /* 0x11012AFB: jmp 0x11012b3a */
L_11012AFD:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x11012AFD: fstp st(1) */
L_11012AFF:
    fp_push(_st[0]); /* 0x11012AFF: fld st(0) */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x11012B01: dec ecx */
    _flag_k = FK_DEC;
    _st[0] *= _st[1]; /* 0x11012B02: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x11012B04: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x11012B07: fld dword ptr [ebp + 8] */
    fp_push(*(double*)ADDR(0x11001228)); /* 0x11012B0A: fld qword ptr [0x11001228] */
    _st[0] *= _st[1]; /* 0x11012B10: fmul st(1) */
    _st[0] += *(double*)ADDR(0x11001238); /* 0x11012B12: fadd qword ptr [0x11001238] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x11012B18: fstp dword ptr [ebp - 4] */
    _st[0] += *(double*)ADDR(0x11001230); /* 0x11012B1B: fadd qword ptr [0x11001230] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x11012B21: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x11012B23: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x11012B26: fld dword ptr [ebp - 4] */
    fp_push(_st[0]); /* 0x11012B29: fld st(0) */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x11012B2B: fld dword ptr [ebp + 8] */
    fp_push(_st[0]); /* 0x11012B2E: fld st(0) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x11012B30: faddp st(2) */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x11012B32: fsubp st(2) */
    { double _v = fp_pop(); _st[0] = _st[0] == 0.0 ? _v : _v / _st[0]; } /* 0x11012B34: fdivrp st(1) */
    _st[0] += _st[0]; /* 0x11012B36: fadd st(0), st(0) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x11012B38: fmulp st(1) */
L_11012B3A:
    eax = MEM32(ebp + 0x10); /* 0x11012B3A: mov eax, dword ptr [ebp + 0x10] */
    ecx = (int32_t)(int16_t)LO16(ecx); /* 0x11012B3D: movsx ecx, cx */
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x11012B40: cwde  */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x11012B41: add ecx, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, ecx); /* 0x11012B43: push ecx */
    PUSH32(esp, esi); /* 0x11012B44: push esi */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x11012B45: fstp dword ptr [esi] */
    RECOMP_CALL(sub_1102FC8B); /* 0x11012B47: call 0x1102fc8b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11012B4C: pop ecx */
    ecx = POP32_VAL(esp); /* 0x11012B4D: pop ecx */
    goto L_11012B56; /* 0x11012B4E: jmp 0x11012b56 */
L_11012B50:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x11012B50: fstp st(0) */
L_11012B52:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11012B52: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_11012B54:
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x11012B54: fstp dword ptr [esi] */
L_11012B56:
    esi = POP32_VAL(esp); /* 0x11012B56: pop esi */
    esp = ebp; /* 0x11012B57: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x11012B59: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11012B5A: ret  */
    RECOMP_REGS_OUT();
}

void sub_11012B5B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11012B5Bu);

L_11012B5B:
    PUSH32(esp, ebp); /* 0x11012B5B: push ebp */
    ebp = esp; /* 0x11012B5C: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x11012B5E: push ecx */
    eax = ebp + 0x8; /* 0x11012B5F: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x11012B62: push eax */
    RECOMP_CALL(sub_110129D2); /* 0x11012B63: call 0x110129d2 */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x11012B68: cwde  */
    ecx = POP32_VAL(esp); /* 0x11012B69: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x11012B6A: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_11012CB3; /* 0x11012B6D: je 0x11012cb3 */
L_11012B73:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x11012B73: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_11012C87; /* 0x11012B74: je 0x11012c87 */
L_11012B7A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x11012B7A: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_11012C82; /* 0x11012B7B: je 0x11012c82 */
L_11012B81:
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x11012B81: fld dword ptr [ebp + 0xc] */
    fp_push(0.0); /* 0x11012B84: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x11012B86: fucom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11012B88: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x11012B8A: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_11012BA6; /* 0x11012B8D: jp 0x11012ba6 */
L_11012B8F:
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + 0x8)); /* 0x11012B8F: fcomp dword ptr [ebp + 8] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11012B92: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x11012B94: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11012B9B; /* 0x11012B97: jne 0x11012b9b */
L_11012B99:
    _st[0] = -_st[0]; /* 0x11012B99: fchs  */
L_11012B9B:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x11012B9B: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x11012B9E: fld dword ptr [ebp - 4] */
    goto L_11012CBF; /* 0x11012BA1: jmp 0x11012cbf */
L_11012BA6:
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x11012BA6: fld dword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x11012BA9: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11012BAB: fnstsw ax */
    PUSH32(esp, esi); /* 0x11012BAD: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x11012BAE: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x11012BB0: fstp st(1) */
    /* test HI8(eax), 5 */ /* 0x11012BB2: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_11012BC0; /* 0x11012BB5: jp 0x11012bc0 */
L_11012BB7:
    _st[0] = -_st[0]; /* 0x11012BB7: fchs  */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x11012BB9: inc esi */
    _flag_k = FK_INC;
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x11012BBA: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x11012BBD: fld dword ptr [ebp + 8] */
L_11012BC0:
    fp_push(*(float*)&MEM32(0x11063140)); /* 0x11012BC0: fld dword ptr [0x11063140] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x11012BC6: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11012BC8: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x11012BCA: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11012BD3; /* 0x11012BCD: jne 0x11012bd3 */
L_11012BCF:
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x11012BCF: fmulp st(1) */
    goto L_11012C47; /* 0x11012BD1: jmp 0x11012c47 */
L_11012BD3:
    fp_push(1.0); /* 0x11012BD3: fld1  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x11012BD5: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11012BD7: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x11012BD9: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11012C12; /* 0x11012BDC: jne 0x11012c12 */
L_11012BDE:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x11012BDE: fstp st(0) */
    fp_push(_st[0]); /* 0x11012BE0: fld st(0) */
    _st[0] *= _st[1]; /* 0x11012BE2: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x11012BE4: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x11012BE7: fld dword ptr [ebp - 4] */
    fp_push(*(double*)ADDR(0x11001268)); /* 0x11012BEA: fld qword ptr [0x11001268] */
    _st[0] *= _st[1]; /* 0x11012BF0: fmul st(1) */
    _st[0] += *(double*)ADDR(0x11001270); /* 0x11012BF2: fadd qword ptr [0x11001270] */
    fp_push(_st[1]); /* 0x11012BF8: fld st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x11012BFA: fmulp st(1) */
    _st[0] += *(double*)ADDR(0x11001278); /* 0x11012BFC: fadd qword ptr [0x11001278] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x11012C02: fmulp st(1) */
    fp_push(_st[1]); /* 0x11012C04: fld st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x11012C06: fmulp st(1) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x11012C08: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x11012C0A: fstp dword ptr [ebp - 4] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x11012C0D: fmul dword ptr [ebp - 4] */
    goto L_11012C47; /* 0x11012C10: jmp 0x11012c47 */
L_11012C12:
    fp_push(*(float*)&MEM32(0x11063150)); /* 0x11012C12: fld dword ptr [0x11063150] */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x11012C18: fcomp st(2) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11012C1A: fnstsw ax */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x11012C1C: push -1 */
    PUSH32(esp, ecx); /* 0x11012C1E: push ecx */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x11012C1F: fstp st(1) */
    /* test HI8(eax), 0x41u */ /* 0x11012C21: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = ebp + 0x8; /* 0x11012C24: lea eax, [ebp + 8] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11012C4C; /* 0x11012C27: jne 0x11012c4c */
L_11012C29:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x11012C29: fstp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x11012C2B: fstp dword ptr [esp] */
    PUSH32(esp, eax); /* 0x11012C2E: push eax */
    RECOMP_CALL(sub_11012A29); /* 0x11012C2F: call 0x11012a29 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x11012C34: fld dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11012C37: add esp, 0xc */
    _flag_k = FK_ADD;
    fp_push(*(double*)ADDR(0x11001138)); /* 0x11012C3A: fld qword ptr [0x11001138] */
    _st[0] /= _st[1]; /* 0x11012C40: fdiv st(1) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x11012C42: fsubp st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + 0xC); /* 0x11012C44: fmul dword ptr [ebp + 0xc] */
L_11012C47:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x11012C47: fstp dword ptr [ebp + 8] */
    goto L_11012C6F; /* 0x11012C4A: jmp 0x11012c6f */
L_11012C4C:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x11012C4C: fstp st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x11012C4E: fstp dword ptr [esp] */
    PUSH32(esp, eax); /* 0x11012C51: push eax */
    RECOMP_CALL(sub_11012A29); /* 0x11012C52: call 0x11012a29 */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x11012C57: cwde  */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11012C58: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x11012C5B: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_11012C67; /* 0x11012C5E: je 0x11012c67 */
L_11012C60:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x11012C60: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_11012C6F; /* 0x11012C61: jne 0x11012c6f */
L_11012C63:
    PUSH32(esp, 8); /* 0x11012C63: push 8 */
    goto L_11012C69; /* 0x11012C65: jmp 0x11012c69 */
L_11012C67:
    PUSH32(esp, 0x10u); /* 0x11012C67: push 0x10 */
L_11012C69:
    RECOMP_CALL(sub_1102F9F9); /* 0x11012C69: call 0x1102f9f9 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11012C6E: pop ecx */
L_11012C6F:
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x11012C6F: fld dword ptr [ebp + 8] */
    /* test LO16(esi), LO16(esi) */ /* 0x11012C72: test si, si */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    esi = POP32_VAL(esp); /* 0x11012C75: pop esi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_11012C7A; /* 0x11012C76: je 0x11012c7a */
L_11012C78:
    _st[0] = -_st[0]; /* 0x11012C78: fchs  */
L_11012C7A:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x11012C7A: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x11012C7D: fld dword ptr [ebp - 4] */
    goto L_11012CBF; /* 0x11012C80: jmp 0x11012cbf */
L_11012C82:
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x11012C82: fld dword ptr [ebp + 8] */
    goto L_11012CBF; /* 0x11012C85: jmp 0x11012cbf */
L_11012C87:
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x11012C87: fld dword ptr [ebp + 0xc] */
    fp_push(0.0); /* 0x11012C8A: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x11012C8C: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11012C8E: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x11012C90: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_11012C9C; /* 0x11012C93: jnp 0x11012c9c */
L_11012C95:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x11012C95: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x11012C97: fld dword ptr [ebp + 8] */
    goto L_11012CAB; /* 0x11012C9A: jmp 0x11012cab */
L_11012C9C:
    eax = MEM32(ebp + 0xA); /* 0x11012C9C: mov eax, dword ptr [ebp + 0xa] */
    eax = (uint32_t)LO16(eax); /* 0x11012C9F: movzx eax, ax */
    /* test eax, 0x8000u */ /* 0x11012CA2: test eax, 0x8000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11012CAB; /* 0x11012CA7: je 0x11012cab */
L_11012CA9:
    _st[0] = -_st[0]; /* 0x11012CA9: fchs  */
L_11012CAB:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x11012CAB: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x11012CAE: fld dword ptr [ebp - 4] */
    goto L_11012CBF; /* 0x11012CB1: jmp 0x11012cbf */
L_11012CB3:
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x11012CB3: fld dword ptr [ebp + 8] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0xC); /* 0x11012CB6: fmul dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x11012CB9: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x11012CBC: fld dword ptr [ebp - 4] */
L_11012CBF:
    esp = ebp; /* 0x11012CBF: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x11012CC1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11012CC2: ret  */
    RECOMP_REGS_OUT();
}

void sub_11012CC3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11012CC3u);

L_11012CC3:
    PUSH32(esp, ebp); /* 0x11012CC3: push ebp */
    ebp = esp; /* 0x11012CC4: mov ebp, esp */
    eax = ebp + 0x8; /* 0x11012CC6: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x11012CC9: push eax */
    RECOMP_CALL(sub_11012D6A); /* 0x11012CCA: call 0x11012d6a */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x11012CCF: cwde  */
    ecx = POP32_VAL(esp); /* 0x11012CD0: pop ecx */
    /* test eax, eax */ /* 0x11012CD1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11012D65; /* 0x11012CD3: je 0x11012d65 */
L_11012CD9:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x11012CD9: dec eax */
    _flag_k = FK_DEC;
    /* cmp eax, 1 */ /* 0x11012CDA: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_11012CE4; /* 0x11012CDD: ja 0x11012ce4 */
L_11012CDF:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x11012CDF: fld qword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x11012CE2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11012CE3: ret  */
L_11012CE4:
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x11012CE4: fld qword ptr [ebp + 0x10] */
    fp_push(0.0); /* 0x11012CE7: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x11012CE9: fucom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11012CEB: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x11012CED: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_11012CF6; /* 0x11012CF0: jp 0x11012cf6 */
L_11012CF2:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x11012CF2: fstp st(0) */
    ebp = POP32_VAL(esp); /* 0x11012CF4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11012CF5: ret  */
L_11012CF6:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x11012CF6: fld qword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x11012CF9: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11012CFB: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x11012CFD: fstp st(1) */
    /* test HI8(eax), 5 */ /* 0x11012CFF: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_11012D09; /* 0x11012D02: jp 0x11012d09 */
L_11012D04:
    _st[0] = -_st[0]; /* 0x11012D04: fchs  */
    *(double*)ADDR(ebp + 0x8) = _st[0]; /* 0x11012D06: fst qword ptr [ebp + 8] */
L_11012D09:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x110631B8)); /* 0x11012D09: fcomp qword ptr [0x110631b8] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11012D0F: fnstsw ax */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x11012D11: push -1 */
    PUSH32(esp, ecx); /* 0x11012D13: push ecx */
    PUSH32(esp, ecx); /* 0x11012D14: push ecx */
    /* test HI8(eax), 5 */ /* 0x11012D15: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = ebp + 0x8; /* 0x11012D18: lea eax, [ebp + 8] */
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_11012D3F; /* 0x11012D1B: jp 0x11012d3f */
L_11012D1D:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x11012D1D: fstp st(0) */
    fp_push(1.0); /* 0x11012D1F: fld1  */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x11012D21: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x11012D24: push eax */
    RECOMP_CALL(sub_11012D73); /* 0x11012D25: call 0x11012d73 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(0x11001138)); /* 0x11012D2A: fld qword ptr [0x11001138] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11012D30: add esp, 0x10 */
    _flag_k = FK_ADD;
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x11012D33: fld qword ptr [ebp + 8] */
    _st[1] /= _st[0]; /* 0x11012D36: fdiv st(1), st(0) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x11012D38: faddp st(1) */
    _st[0] *= *(double*)ADDR(ebp + 0x10); /* 0x11012D3A: fmul qword ptr [ebp + 0x10] */
    ebp = POP32_VAL(esp); /* 0x11012D3D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11012D3E: ret  */
L_11012D3F:
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x11012D3F: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x11012D42: push eax */
    RECOMP_CALL(sub_11012D73); /* 0x11012D43: call 0x11012d73 */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x11012D48: cwde  */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11012D49: add esp, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x11012D4C: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_11012D58; /* 0x11012D4F: je 0x11012d58 */
L_11012D51:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x11012D51: dec eax */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_11012CDF; /* 0x11012D52: jne 0x11012cdf */
L_11012D54:
    PUSH32(esp, 8); /* 0x11012D54: push 8 */
    goto L_11012D5A; /* 0x11012D56: jmp 0x11012d5a */
L_11012D58:
    PUSH32(esp, 0x10u); /* 0x11012D58: push 0x10 */
L_11012D5A:
    RECOMP_CALL(sub_1102F9F9); /* 0x11012D5A: call 0x1102f9f9 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11012D5F: pop ecx */
    RECOMP_BACKEDGE();
    goto L_11012CDF; /* 0x11012D60: jmp 0x11012cdf */
L_11012D65:
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x11012D65: fld qword ptr [ebp + 0x10] */
    ebp = POP32_VAL(esp); /* 0x11012D68: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11012D69: ret  */
    RECOMP_REGS_OUT();
}

void sub_11012D6A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11012D6Au);

    goto L_11012D6A;
L_1101278A:
    PUSH32(esp, ebp); /* 0x1101278A: push ebp */
    ebp = esp; /* 0x1101278B: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x1101278D: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x11012790: push esi */
    esi = 0x7FF0u; /* 0x11012791: mov esi, 0x7ff0 */
    eax = (uint32_t)MEM16(ecx + 0x6); /* 0x11012796: movzx eax, word ptr [ecx + 6] */
    edx = eax; /* 0x1101279A: mov edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    edx = edx & esi; /* 0x1101279C: and edx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(edx), LO16(esi) */ /* 0x1101279E: cmp dx, si */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    esi = POP32_VAL(esp); /* 0x110127A1: pop esi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_110127C3; /* 0x110127A2: jne 0x110127c3 */
L_110127A4:
    /* test LO8(eax), 0xFu */ /* 0x110127A4: test al, 0xf */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xFu) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110127BE; /* 0x110127A6: jne 0x110127be */
L_110127A8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x110127A8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(ecx + 0x4), LO16(eax) */ /* 0x110127AA: cmp word ptr [ecx + 4], ax */
    _flag_a = (uint32_t)(MEM16(ecx + 0x4)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_110127BE; /* 0x110127AE: jne 0x110127be */
L_110127B0:
    /* cmp MEM16(ecx + 0x2), LO16(eax) */ /* 0x110127B0: cmp word ptr [ecx + 2], ax */
    _flag_a = (uint32_t)(MEM16(ecx + 0x2)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_110127BE; /* 0x110127B4: jne 0x110127be */
L_110127B6:
    /* cmp MEM16(ecx), LO16(eax) */ /* 0x110127B6: cmp word ptr [ecx], ax */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_110127BE; /* 0x110127B9: jne 0x110127be */
L_110127BB:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x110127BB: inc eax */
    _flag_k = FK_INC;
    ebp = POP32_VAL(esp); /* 0x110127BC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110127BD: ret  */
L_110127BE:
    PUSH32(esp, 2); /* 0x110127BE: push 2 */
    eax = POP32_VAL(esp); /* 0x110127C0: pop eax */
    ebp = POP32_VAL(esp); /* 0x110127C1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110127C2: ret  */
L_110127C3:
    /* test eax, 0xFFFF7FFFu */ /* 0x110127C3: test eax, 0xffff7fff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFF7FFFu);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110127DF; /* 0x110127C8: jne 0x110127df */
L_110127CA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x110127CA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(ecx + 0x4), LO16(eax) */ /* 0x110127CC: cmp word ptr [ecx + 4], ax */
    _flag_a = (uint32_t)(MEM16(ecx + 0x4)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_110127DF; /* 0x110127D0: jne 0x110127df */
L_110127D2:
    /* cmp MEM16(ecx + 0x2), LO16(eax) */ /* 0x110127D2: cmp word ptr [ecx + 2], ax */
    _flag_a = (uint32_t)(MEM16(ecx + 0x2)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_110127DF; /* 0x110127D6: jne 0x110127df */
L_110127D8:
    /* cmp MEM16(ecx), LO16(eax) */ /* 0x110127D8: cmp word ptr [ecx], ax */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_110127DF; /* 0x110127DB: jne 0x110127df */
L_110127DD:
    ebp = POP32_VAL(esp); /* 0x110127DD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110127DE: ret  */
L_110127DF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x110127DF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test LO16(edx), LO16(edx) */ /* 0x110127E1: test dx, dx */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x110127E4: setne al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 2; /* 0x110127E7: sub eax, 2 */
    _flag_k = FK_CMP;
    ebp = POP32_VAL(esp); /* 0x110127EA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110127EB: ret  */
L_11012D6A:
    PUSH32(esp, ebp); /* 0x11012D6A: push ebp */
    ebp = esp; /* 0x11012D6B: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x11012D6D: pop ebp */
    RECOMP_BACKEDGE();
    goto L_1101278A; /* 0x11012D6E: jmp 0x1101278a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11012D73(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11012D73u);

L_11012D73:
    PUSH32(esp, ebp); /* 0x11012D73: push ebp */
    ebp = esp; /* 0x11012D74: mov ebp, esp */
    fp_push(*(double*)ADDR(0x11001310)); /* 0x11012D76: fld qword ptr [0x11001310] */
    PUSH32(esp, esi); /* 0x11012D7C: push esi */
    esi = MEM32(ebp + 0x8); /* 0x11012D7D: mov esi, dword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(esi)); /* 0x11012D80: fcomp qword ptr [esi] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11012D82: fnstsw ax */
    fp_push(0.0); /* 0x11012D84: fldz  */
    /* test HI8(eax), 0x41u */ /* 0x11012D86: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11012E89; /* 0x11012D89: je 0x11012e89 */
L_11012D8F:
    fp_push(*(double*)ADDR(ebp + 0xC)); /* 0x11012D8F: fld qword ptr [ebp + 0xc] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x11012D92: fucom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11012D94: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x11012D96: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_11012E87; /* 0x11012D99: jnp 0x11012e87 */
L_11012D9F:
    fp_push(*(double*)ADDR(esi)); /* 0x11012D9F: fld qword ptr [esi] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x110012F0)); /* 0x11012DA1: fcomp qword ptr [0x110012f0] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11012DA7: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x11012DA9: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11012DC0; /* 0x11012DAC: jne 0x11012dc0 */
L_11012DAE:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x11012DAE: fstp st(1) */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11012DB0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x11012DB2: fstp st(0) */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x11012DB4: inc eax */
    _flag_k = FK_INC;
    fp_push(*(double*)ADDR(0x11063168)); /* 0x11012DB5: fld qword ptr [0x11063168] */
    goto L_11012E8B; /* 0x11012DBB: jmp 0x11012e8b */
L_11012DC0:
    fp_push(*(double*)ADDR(esi)); /* 0x11012DC0: fld qword ptr [esi] */
    _st[0] *= *(double*)ADDR(0x110011A8); /* 0x11012DC2: fmul qword ptr [0x110011a8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x11012DC8: fcom st(2) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11012DCA: fnstsw ax */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x11012DCC: fstp st(2) */
    /* test HI8(eax), 5 */ /* 0x11012DCE: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_11012DDB; /* 0x11012DD1: jp 0x11012ddb */
L_11012DD3:
    fp_push(*(double*)ADDR(0x110011E0)); /* 0x11012DD3: fld qword ptr [0x110011e0] */
    goto L_11012DE1; /* 0x11012DD9: jmp 0x11012de1 */
L_11012DDB:
    fp_push(*(double*)ADDR(0x11001198)); /* 0x11012DDB: fld qword ptr [0x11001198] */
L_11012DE1:
    { double _v = fp_pop(); _st[1] += _v; } /* 0x11012DE1: faddp st(2) */
    fp_xch(1); /* 0x11012DE3: fxch st(1) */
    RECOMP_CALL(sub_1103AEE0); /* 0x11012DE5: call 0x1103aee0 */
    RECOMP_FLAGS_IN();
    ecx = (uint32_t)LO16(eax); /* 0x11012DEA: movzx ecx, ax */
    eax = (int32_t)(int16_t)LO16(ecx); /* 0x11012DED: movsx eax, cx */
    MEM32(ebp + 0x8) = eax; /* 0x11012DF0: mov dword ptr [ebp + 8], eax */
    fp_push((double)(int32_t)MEM32(ebp + 0x8)); /* 0x11012DF3: fild dword ptr [ebp + 8] */
    fp_push(*(double*)ADDR(0x110011A0)); /* 0x11012DF6: fld qword ptr [0x110011a0] */
    _st[0] *= _st[1]; /* 0x11012DFC: fmul st(1) */
    _st[0] = *(double*)ADDR(esi) - _st[0]; /* 0x11012DFE: fsubr qword ptr [esi] */
    fp_xch(1); /* 0x11012E00: fxch st(1) */
    _st[0] *= *(double*)ADDR(0x11001190); /* 0x11012E02: fmul qword ptr [0x11001190] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x11012E08: fsubp st(1) */
    fp_push(*(double*)ADDR(0x11063198)); /* 0x11012E0A: fld qword ptr [0x11063198] */
    fp_push(_st[0]); /* 0x11012E10: fld st(0) */
    _st[0] = -_st[0]; /* 0x11012E12: fchs  */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x11012E14: fcomp st(2) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11012E16: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x11012E18: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_11012E2A; /* 0x11012E1B: jp 0x11012e2a */
L_11012E1D:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x11012E1D: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11012E1F: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x11012E21: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11012E2C; /* 0x11012E24: jne 0x11012e2c */
L_11012E26:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x11012E26: fstp st(0) */
    goto L_11012E71; /* 0x11012E28: jmp 0x11012e71 */
L_11012E2A:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x11012E2A: fstp st(0) */
L_11012E2C:
    fp_push(_st[0]); /* 0x11012E2C: fld st(0) */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x11012E2E: dec ecx */
    _flag_k = FK_DEC;
    _st[0] *= _st[1]; /* 0x11012E2F: fmul st(1) */
    fp_push(*(double*)ADDR(0x110012E0)); /* 0x11012E31: fld qword ptr [0x110012e0] */
    _st[0] += _st[1]; /* 0x11012E37: fadd st(1) */
    _st[0] *= _st[1]; /* 0x11012E39: fmul st(1) */
    _st[0] += *(double*)ADDR(0x110012F8); /* 0x11012E3B: fadd qword ptr [0x110012f8] */
    _st[0] *= _st[1]; /* 0x11012E41: fmul st(1) */
    _st[0] += *(double*)ADDR(0x11001308); /* 0x11012E43: fadd qword ptr [0x11001308] */
    fp_push(_st[1]); /* 0x11012E49: fld st(1) */
    _st[0] *= *(double*)ADDR(0x110012D8); /* 0x11012E4B: fmul qword ptr [0x110012d8] */
    _st[0] += *(double*)ADDR(0x110012E8); /* 0x11012E51: fadd qword ptr [0x110012e8] */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x11012E57: fmulp st(2) */
    fp_xch(1); /* 0x11012E59: fxch st(1) */
    _st[0] += *(double*)ADDR(0x11001300); /* 0x11012E5B: fadd qword ptr [0x11001300] */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x11012E61: fmulp st(2) */
    fp_push(_st[0]); /* 0x11012E63: fld st(0) */
    _st[0] += _st[2]; /* 0x11012E65: fadd st(2) */
    fp_xch(1); /* 0x11012E67: fxch st(1) */
    { double _v = fp_pop(); _st[1] = _v - _st[1]; } /* 0x11012E69: fsubrp st(2) */
    { double _v = fp_pop(); _st[0] = _st[0] == 0.0 ? _v : _v / _st[0]; } /* 0x11012E6B: fdivrp st(1) */
    _st[0] += _st[0]; /* 0x11012E6D: fadd st(0), st(0) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x11012E6F: fmulp st(1) */
L_11012E71:
    eax = MEM32(ebp + 0x14); /* 0x11012E71: mov eax, dword ptr [ebp + 0x14] */
    ecx = (int32_t)(int16_t)LO16(ecx); /* 0x11012E74: movsx ecx, cx */
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x11012E77: cwde  */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x11012E78: add ecx, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, ecx); /* 0x11012E7A: push ecx */
    PUSH32(esp, esi); /* 0x11012E7B: push esi */
    { double _v = fp_pop(); *(double*)ADDR(esi) = _v; } /* 0x11012E7C: fstp qword ptr [esi] */
    RECOMP_CALL(sub_1102FE25); /* 0x11012E7E: call 0x1102fe25 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11012E83: pop ecx */
    ecx = POP32_VAL(esp); /* 0x11012E84: pop ecx */
    goto L_11012E8D; /* 0x11012E85: jmp 0x11012e8d */
L_11012E87:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x11012E87: fstp st(0) */
L_11012E89:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11012E89: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_11012E8B:
    { double _v = fp_pop(); *(double*)ADDR(esi) = _v; } /* 0x11012E8B: fstp qword ptr [esi] */
L_11012E8D:
    esi = POP32_VAL(esp); /* 0x11012E8D: pop esi */
    ebp = POP32_VAL(esp); /* 0x11012E8E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11012E8F: ret  */
    RECOMP_REGS_OUT();
}

void sub_11012E90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11012E90u);

L_11012E90:
    PUSH32(esp, ebp); /* 0x11012E90: push ebp */
    ebp = esp; /* 0x11012E91: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x11012E93: push ecx */
    PUSH32(esp, ecx); /* 0x11012E94: push ecx */
    eax = ebp + 0x8; /* 0x11012E95: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x11012E98: push eax */
    RECOMP_CALL(sub_11012D6A); /* 0x11012E99: call 0x11012d6a */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x11012E9E: cwde  */
    ecx = POP32_VAL(esp); /* 0x11012E9F: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x11012EA0: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_11012FC2; /* 0x11012EA3: je 0x11012fc2 */
L_11012EA9:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x11012EA9: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_11012F9C; /* 0x11012EAA: je 0x11012f9c */
L_11012EB0:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x11012EB0: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_11012FAC; /* 0x11012EB1: je 0x11012fac */
L_11012EB7:
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x11012EB7: fld qword ptr [ebp + 0x10] */
    fp_push(0.0); /* 0x11012EBA: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x11012EBC: fucom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11012EBE: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x11012EC0: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_11012ED8; /* 0x11012EC3: jp 0x11012ed8 */
L_11012EC5:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebp + 0x8)); /* 0x11012EC5: fcomp qword ptr [ebp + 8] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11012EC8: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x11012ECA: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11012FC8; /* 0x11012ECD: jne 0x11012fc8 */
L_11012ED3:
    goto L_11012FBE; /* 0x11012ED3: jmp 0x11012fbe */
L_11012ED8:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x11012ED8: fld qword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x11012EDB: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11012EDD: fnstsw ax */
    PUSH32(esp, esi); /* 0x11012EDF: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x11012EE0: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x11012EE2: fstp st(1) */
    /* test HI8(eax), 5 */ /* 0x11012EE4: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_11012EEF; /* 0x11012EE7: jp 0x11012eef */
L_11012EE9:
    _st[0] = -_st[0]; /* 0x11012EE9: fchs  */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x11012EEB: inc esi */
    _flag_k = FK_INC;
    *(double*)ADDR(ebp + 0x8) = _st[0]; /* 0x11012EEC: fst qword ptr [ebp + 8] */
L_11012EEF:
    fp_push(*(double*)ADDR(0x110631A8)); /* 0x11012EEF: fld qword ptr [0x110631a8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x11012EF5: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11012EF7: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x11012EF9: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11012F05; /* 0x11012EFC: jne 0x11012f05 */
L_11012EFE:
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x11012EFE: fmulp st(1) */
    goto L_11012F96; /* 0x11012F00: jmp 0x11012f96 */
L_11012F05:
    fp_push(1.0); /* 0x11012F05: fld1  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x11012F07: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11012F09: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x11012F0B: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11012F38; /* 0x11012F0E: jne 0x11012f38 */
L_11012F10:
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x11012F10: fstp st(2) */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x11012F12: fstp st(1) */
    _st[0] *= _st[0]; /* 0x11012F14: fmul st(0), st(0) */
    PUSH32(esp, 7); /* 0x11012F16: push 7 */
    PUSH32(esp, 0x11001318u); /* 0x11012F18: push 0x11001318 */
    PUSH32(esp, ecx); /* 0x11012F1D: push ecx */
    PUSH32(esp, ecx); /* 0x11012F1E: push ecx */
    *(double*)ADDR(ebp + (-0x8)) = _st[0]; /* 0x11012F1F: fst qword ptr [ebp - 8] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x11012F22: fstp qword ptr [esp] */
    RECOMP_CALL(sub_1102FE2E); /* 0x11012F25: call 0x1102fe2e */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x11012F2A: fld qword ptr [ebp + 8] */
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x11012F2D: fld qword ptr [ebp - 8] */
    _st[0] *= _st[1]; /* 0x11012F30: fmul st(1) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x11012F32: fmulp st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x11012F34: faddp st(1) */
    goto L_11012F68; /* 0x11012F36: jmp 0x11012f68 */
L_11012F38:
    fp_push(*(double*)ADDR(0x110631B8)); /* 0x11012F38: fld qword ptr [0x110631b8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x11012F3E: fcomp st(2) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11012F40: fnstsw ax */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x11012F42: push -1 */
    PUSH32(esp, ecx); /* 0x11012F44: push ecx */
    PUSH32(esp, ecx); /* 0x11012F45: push ecx */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x11012F46: fstp st(1) */
    /* test HI8(eax), 0x41u */ /* 0x11012F48: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = ebp + 0x8; /* 0x11012F4B: lea eax, [ebp + 8] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11012F70; /* 0x11012F4E: jne 0x11012f70 */
L_11012F50:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x11012F50: fstp st(1) */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x11012F52: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x11012F55: push eax */
    RECOMP_CALL(sub_11012D73); /* 0x11012F56: call 0x11012d73 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(0x11001138)); /* 0x11012F5B: fld qword ptr [0x11001138] */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x11012F61: fld qword ptr [ebp + 8] */
    _st[1] /= _st[0]; /* 0x11012F64: fdiv st(1), st(0) */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x11012F66: fsubrp st(1) */
L_11012F68:
    _st[0] *= *(double*)ADDR(ebp + 0x10); /* 0x11012F68: fmul qword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11012F6B: add esp, 0x10 */
    _flag_k = FK_ADD;
    goto L_11012F96; /* 0x11012F6E: jmp 0x11012f96 */
L_11012F70:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x11012F70: fstp st(0) */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x11012F72: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x11012F75: push eax */
    RECOMP_CALL(sub_11012D73); /* 0x11012F76: call 0x11012d73 */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x11012F7B: cwde  */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11012F7C: add esp, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x11012F7F: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_11012F8B; /* 0x11012F82: je 0x11012f8b */
L_11012F84:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x11012F84: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_11012F93; /* 0x11012F85: jne 0x11012f93 */
L_11012F87:
    PUSH32(esp, 8); /* 0x11012F87: push 8 */
    goto L_11012F8D; /* 0x11012F89: jmp 0x11012f8d */
L_11012F8B:
    PUSH32(esp, 0x10u); /* 0x11012F8B: push 0x10 */
L_11012F8D:
    RECOMP_CALL(sub_1102F9F9); /* 0x11012F8D: call 0x1102f9f9 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11012F92: pop ecx */
L_11012F93:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x11012F93: fld qword ptr [ebp + 8] */
L_11012F96:
    /* test LO16(esi), LO16(esi) */ /* 0x11012F96: test si, si */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    esi = POP32_VAL(esp); /* 0x11012F99: pop esi */
    goto L_11012FBC; /* 0x11012F9A: jmp 0x11012fbc */
L_11012F9C:
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x11012F9C: fld qword ptr [ebp + 0x10] */
    fp_push(0.0); /* 0x11012F9F: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x11012FA1: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11012FA3: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x11012FA5: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_11012FB1; /* 0x11012FA8: jnp 0x11012fb1 */
L_11012FAA:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x11012FAA: fstp st(0) */
L_11012FAC:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x11012FAC: fld qword ptr [ebp + 8] */
    goto L_11012FC8; /* 0x11012FAF: jmp 0x11012fc8 */
L_11012FB1:
    eax = MEM32(ebp + 0xE); /* 0x11012FB1: mov eax, dword ptr [ebp + 0xe] */
    eax = (uint32_t)LO16(eax); /* 0x11012FB4: movzx eax, ax */
    /* test eax, 0x8000u */ /* 0x11012FB7: test eax, 0x8000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    _cf = 0;
    _flag_k = FK_TEST;
L_11012FBC:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_11012FC8; /* 0x11012FBC: je 0x11012fc8 */
L_11012FBE:
    _st[0] = -_st[0]; /* 0x11012FBE: fchs  */
    goto L_11012FC8; /* 0x11012FC0: jmp 0x11012fc8 */
L_11012FC2:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x11012FC2: fld qword ptr [ebp + 8] */
    _st[0] *= *(double*)ADDR(ebp + 0x10); /* 0x11012FC5: fmul qword ptr [ebp + 0x10] */
L_11012FC8:
    esp = ebp; /* 0x11012FC8: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x11012FCA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11012FCB: ret  */
    RECOMP_REGS_OUT();
}

void sub_11012FCC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11012FCCu);

L_11012FCC:
    PUSH32(esp, ebp); /* 0x11012FCC: push ebp */
    ebp = esp; /* 0x11012FCD: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x11012FCF: push ecx */
    PUSH32(esp, ecx); /* 0x11012FD0: push ecx */
    eax = ebp + 0x8; /* 0x11012FD1: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x11012FD4: push eax */
    RECOMP_CALL(sub_1101278A); /* 0x11012FD5: call 0x1101278a */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x11012FDA: cwde  */
    ecx = POP32_VAL(esp); /* 0x11012FDB: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x11012FDC: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_110130FE; /* 0x11012FDF: je 0x110130fe */
L_11012FE5:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x11012FE5: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_110130D8; /* 0x11012FE6: je 0x110130d8 */
L_11012FEC:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x11012FEC: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_110130E8; /* 0x11012FED: je 0x110130e8 */
L_11012FF3:
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x11012FF3: fld qword ptr [ebp + 0x10] */
    fp_push(0.0); /* 0x11012FF6: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x11012FF8: fucom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11012FFA: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x11012FFC: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_11013014; /* 0x11012FFF: jp 0x11013014 */
L_11013001:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebp + 0x8)); /* 0x11013001: fcomp qword ptr [ebp + 8] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11013004: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x11013006: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11013104; /* 0x11013009: jne 0x11013104 */
L_1101300F:
    goto L_110130FA; /* 0x1101300F: jmp 0x110130fa */
L_11013014:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x11013014: fld qword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x11013017: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11013019: fnstsw ax */
    PUSH32(esp, esi); /* 0x1101301B: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1101301C: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1101301E: fstp st(1) */
    /* test HI8(eax), 5 */ /* 0x11013020: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1101302B; /* 0x11013023: jp 0x1101302b */
L_11013025:
    _st[0] = -_st[0]; /* 0x11013025: fchs  */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x11013027: inc esi */
    _flag_k = FK_INC;
    *(double*)ADDR(ebp + 0x8) = _st[0]; /* 0x11013028: fst qword ptr [ebp + 8] */
L_1101302B:
    fp_push(*(double*)ADDR(0x110630D8)); /* 0x1101302B: fld qword ptr [0x110630d8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x11013031: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11013033: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x11013035: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11013041; /* 0x11013038: jne 0x11013041 */
L_1101303A:
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x1101303A: fmulp st(1) */
    goto L_110130D2; /* 0x1101303C: jmp 0x110130d2 */
L_11013041:
    fp_push(1.0); /* 0x11013041: fld1  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x11013043: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11013045: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x11013047: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11013074; /* 0x1101304A: jne 0x11013074 */
L_1101304C:
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x1101304C: fstp st(2) */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1101304E: fstp st(1) */
    _st[0] *= _st[0]; /* 0x11013050: fmul st(0), st(0) */
    PUSH32(esp, 5); /* 0x11013052: push 5 */
    PUSH32(esp, 0x11001360u); /* 0x11013054: push 0x11001360 */
    PUSH32(esp, ecx); /* 0x11013059: push ecx */
    PUSH32(esp, ecx); /* 0x1101305A: push ecx */
    *(double*)ADDR(ebp + (-0x8)) = _st[0]; /* 0x1101305B: fst qword ptr [ebp - 8] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x1101305E: fstp qword ptr [esp] */
    RECOMP_CALL(sub_1102FE2E); /* 0x11013061: call 0x1102fe2e */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x11013066: fld qword ptr [ebp + 8] */
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x11013069: fld qword ptr [ebp - 8] */
    _st[0] *= _st[1]; /* 0x1101306C: fmul st(1) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x1101306E: fmulp st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x11013070: faddp st(1) */
    goto L_110130A4; /* 0x11013072: jmp 0x110130a4 */
L_11013074:
    fp_push(*(double*)ADDR(0x110630E8)); /* 0x11013074: fld qword ptr [0x110630e8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x1101307A: fcomp st(2) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1101307C: fnstsw ax */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1101307E: push -1 */
    PUSH32(esp, ecx); /* 0x11013080: push ecx */
    PUSH32(esp, ecx); /* 0x11013081: push ecx */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x11013082: fstp st(1) */
    /* test HI8(eax), 0x41u */ /* 0x11013084: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = ebp + 0x8; /* 0x11013087: lea eax, [ebp + 8] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110130AC; /* 0x1101308A: jne 0x110130ac */
L_1101308C:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1101308C: fstp st(1) */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x1101308E: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x11013091: push eax */
    RECOMP_CALL(sub_110127FF); /* 0x11013092: call 0x110127ff */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(0x11001138)); /* 0x11013097: fld qword ptr [0x11001138] */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x1101309D: fld qword ptr [ebp + 8] */
    _st[1] /= _st[0]; /* 0x110130A0: fdiv st(1), st(0) */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x110130A2: fsubrp st(1) */
L_110130A4:
    _st[0] *= *(double*)ADDR(ebp + 0x10); /* 0x110130A4: fmul qword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x110130A7: add esp, 0x10 */
    _flag_k = FK_ADD;
    goto L_110130D2; /* 0x110130AA: jmp 0x110130d2 */
L_110130AC:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x110130AC: fstp st(0) */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x110130AE: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x110130B1: push eax */
    RECOMP_CALL(sub_110127FF); /* 0x110130B2: call 0x110127ff */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x110130B7: cwde  */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x110130B8: add esp, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x110130BB: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_110130C7; /* 0x110130BE: je 0x110130c7 */
L_110130C0:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x110130C0: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_110130CF; /* 0x110130C1: jne 0x110130cf */
L_110130C3:
    PUSH32(esp, 8); /* 0x110130C3: push 8 */
    goto L_110130C9; /* 0x110130C5: jmp 0x110130c9 */
L_110130C7:
    PUSH32(esp, 0x10u); /* 0x110130C7: push 0x10 */
L_110130C9:
    RECOMP_CALL(sub_1102F9F9); /* 0x110130C9: call 0x1102f9f9 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110130CE: pop ecx */
L_110130CF:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x110130CF: fld qword ptr [ebp + 8] */
L_110130D2:
    /* test LO16(esi), LO16(esi) */ /* 0x110130D2: test si, si */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    esi = POP32_VAL(esp); /* 0x110130D5: pop esi */
    goto L_110130F8; /* 0x110130D6: jmp 0x110130f8 */
L_110130D8:
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x110130D8: fld qword ptr [ebp + 0x10] */
    fp_push(0.0); /* 0x110130DB: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x110130DD: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x110130DF: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x110130E1: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_110130ED; /* 0x110130E4: jnp 0x110130ed */
L_110130E6:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x110130E6: fstp st(0) */
L_110130E8:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x110130E8: fld qword ptr [ebp + 8] */
    goto L_11013104; /* 0x110130EB: jmp 0x11013104 */
L_110130ED:
    eax = MEM32(ebp + 0xE); /* 0x110130ED: mov eax, dword ptr [ebp + 0xe] */
    eax = (uint32_t)LO16(eax); /* 0x110130F0: movzx eax, ax */
    /* test eax, 0x8000u */ /* 0x110130F3: test eax, 0x8000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    _cf = 0;
    _flag_k = FK_TEST;
L_110130F8:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_11013104; /* 0x110130F8: je 0x11013104 */
L_110130FA:
    _st[0] = -_st[0]; /* 0x110130FA: fchs  */
    goto L_11013104; /* 0x110130FC: jmp 0x11013104 */
L_110130FE:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x110130FE: fld qword ptr [ebp + 8] */
    _st[0] *= *(double*)ADDR(ebp + 0x10); /* 0x11013101: fmul qword ptr [ebp + 0x10] */
L_11013104:
    esp = ebp; /* 0x11013104: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x11013106: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11013107: ret  */
    RECOMP_REGS_OUT();
}

void sub_11013108(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11013108u);

L_11013108:
    PUSH32(esp, ebp); /* 0x11013108: push ebp */
    ebp = esp; /* 0x11013109: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1101310B: sub esp, 0x10 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0xC); /* 0x1101310E: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & 0; /* 0x11013111: and dword ptr [ebp - 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11013115: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x11013119: mov dword ptr [ebp - 0x10], eax */
    eax = MEM32(ebp + 0x10); /* 0x1101311C: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x8)) = eax; /* 0x1101311F: mov dword ptr [ebp - 8], eax */
    eax = ebp + (-0x10); /* 0x11013122: lea eax, [ebp - 0x10] */
    PUSH32(esp, 2); /* 0x11013125: push 2 */
    PUSH32(esp, eax); /* 0x11013127: push eax */
    PUSH32(esp, 5); /* 0x11013128: push 5 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1101312A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_110134FB); /* 0x1101312D: call 0x110134fb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11013132: add esp, 0x10 */
    _flag_k = FK_ADD;
    esp = ebp; /* 0x11013135: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x11013137: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11013138: ret  */
    RECOMP_REGS_OUT();
}

void sub_11013139(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11013139u);

L_11013139:
    PUSH32(esp, ebp); /* 0x11013139: push ebp */
    ebp = esp; /* 0x1101313A: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1101313C: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1101313D: mov esi, dword ptr [ebp + 8] */
    SET_LO8(ecx, 0x20u); /* 0x11013140: mov cl, 0x20 */
    eax = MEM32(esi + 0x8); /* 0x11013142: mov eax, dword ptr [esi + 8] */
    edx = MEM32(esi + 0xC); /* 0x11013145: mov edx, dword ptr [esi + 0xc] */
    RECOMP_CALL(sub_1103AFD0); /* 0x11013148: call 0x1103afd0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esi); /* 0x1101314D: add eax, dword ptr [esi] */
    _flag_k = FK_ADD;
    { uint32_t _aa = edx, _ab = MEM32(esi + 0x4), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1101314F: adc edx, dword ptr [esi + 4] */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    esi = POP32_VAL(esp); /* 0x11013152: pop esi */
    ebp = POP32_VAL(esp); /* 0x11013153: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11013154: ret  */
    RECOMP_REGS_OUT();
}

void sub_11013155(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11013155u);

L_11013155:
    PUSH32(esp, ebp); /* 0x11013155: push ebp */
    ebp = esp; /* 0x11013156: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x34u; /* 0x11013158: sub esp, 0x34 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0xC); /* 0x1101315B: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1101315E: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x11013160: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x11013161: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x11013164: push esi */
    MEM32(ebp + (-0x24)) = eax; /* 0x11013165: mov dword ptr [ebp - 0x24], eax */
    esi = ebx; /* 0x11013168: mov esi, ebx */
    eax = MEM32(ebp + 0x10); /* 0x1101316A: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x1101316D: push edi */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1101316E: mov dword ptr [ebp - 0x1c], eax */
    edi = ebx + 0x8; /* 0x11013171: lea edi, [ebx + 8] */
    eax = MEM32(ebp + 0x14); /* 0x11013174: mov eax, dword ptr [ebp + 0x14] */
    MEM32(ebp + (-0x34)) = eax; /* 0x11013177: mov dword ptr [ebp - 0x34], eax */
    eax = MEM32(ebp + 0x18); /* 0x1101317A: mov eax, dword ptr [ebp + 0x18] */
    PUSH32(esp, 8); /* 0x1101317D: push 8 */
    MEM32(ebp + (-0x2C)) = eax; /* 0x1101317F: mov dword ptr [ebp - 0x2c], eax */
    eax = ebp + (-0x34); /* 0x11013182: lea eax, [ebp - 0x34] */
    ecx = POP32_VAL(esp); /* 0x11013185: pop ecx */
    MEM32(ebx) = edx; /* 0x11013186: mov dword ptr [ebx], edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x11013188: sub eax, ebx */
    _flag_k = FK_CMP;
    MEM32(ebx + 0x4) = edx; /* 0x1101318A: mov dword ptr [ebx + 4], edx */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1101318D: rep movsd dword ptr es:[edi], dword ptr [esi] */
    edi = edx; /* 0x1101318F: mov edi, edx */
    MEM32(ebp + (-0x20)) = edx; /* 0x11013191: mov dword ptr [ebp - 0x20], edx */
    esi = ebx; /* 0x11013194: mov esi, ebx */
    MEM32(ebp + (-0x18)) = edx; /* 0x11013196: mov dword ptr [ebp - 0x18], edx */
    MEM32(ebp + (-0x30)) = edx; /* 0x11013199: mov dword ptr [ebp - 0x30], edx */
    MEM32(ebp + (-0x28)) = edx; /* 0x1101319C: mov dword ptr [ebp - 0x28], edx */
    MEM32(ebp + (-0x4)) = edi; /* 0x1101319F: mov dword ptr [ebp - 4], edi */
    MEM32(ebp + (-0x8)) = esi; /* 0x110131A2: mov dword ptr [ebp - 8], esi */
    MEM32(ebp + (-0x14)) = eax; /* 0x110131A5: mov dword ptr [ebp - 0x14], eax */
L_110131A8:
    ecx = MEM32(eax + esi); /* 0x110131A8: mov ecx, dword ptr [eax + esi] */
    MEM32(ebp + (-0xC)) = ecx; /* 0x110131AB: mov dword ptr [ebp - 0xc], ecx */
    ecx = MEM32(eax + esi + 0x4); /* 0x110131AE: mov ecx, dword ptr [eax + esi + 4] */
    eax = MEM32(eax + esi); /* 0x110131B2: mov eax, dword ptr [eax + esi] */
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x110131B5: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = ecx; /* 0x110131B7: mov dword ptr [ebp - 0x10], ecx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110131C4; /* 0x110131BA: jne 0x110131c4 */
L_110131BC:
    MEM32(esi + 0x10) = edx; /* 0x110131BC: mov dword ptr [esi + 0x10], edx */
    MEM32(esi + 0x14) = edx; /* 0x110131BF: mov dword ptr [esi + 0x14], edx */
    goto L_11013227; /* 0x110131C2: jmp 0x11013227 */
L_110131C4:
    ebx = esi; /* 0x110131C4: mov ebx, esi */
    MEM32(ebp + 0x10) = edx; /* 0x110131C6: mov dword ptr [ebp + 0x10], edx */
    esi = MEM32(ebp + (-0xC)); /* 0x110131C9: mov esi, dword ptr [ebp - 0xc] */
    edi = edx; /* 0x110131CC: mov edi, edx */
    MEM32(ebp + 0x18) = edx; /* 0x110131CE: mov dword ptr [ebp + 0x18], edx */
L_110131D1:
    PUSH32(esp, ecx); /* 0x110131D1: push ecx */
    PUSH32(esp, esi); /* 0x110131D2: push esi */
    PUSH32(esp, MEM32(ebp + edi * 8 + (-0x20))); /* 0x110131D3: push dword ptr [ebp + edi*8 - 0x20] */
    PUSH32(esp, MEM32(ebp + edi * 8 + (-0x24))); /* 0x110131D7: push dword ptr [ebp + edi*8 - 0x24] */
    RECOMP_CALL(sub_1103AF90); /* 0x110131DB: call 0x1103af90 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0x10); /* 0x110131E0: add eax, dword ptr [ebp + 0x10] */
    _flag_k = FK_ADD;
    SET_LO8(ecx, 0x20u); /* 0x110131E3: mov cl, 0x20 */
    { uint32_t _aa = edx, _ab = MEM32(ebp + 0x18), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x110131E5: adc edx, dword ptr [ebp + 0x18] */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx) = MEM32(ebx) + eax; /* 0x110131E8: add dword ptr [ebx], eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebx); /* 0x110131EA: mov eax, dword ptr [ebx] */
    { uint32_t _aa = MEM32(ebx + 0x4), _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x110131EC: adc dword ptr [ebx + 4], edx */
      MEM32(ebx + 0x4) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    edx = MEM32(ebx + 0x4); /* 0x110131EF: mov edx, dword ptr [ebx + 4] */
    RECOMP_CALL(sub_1103B100); /* 0x110131F2: call 0x1103b100 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebx + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(ebx + 0x4) = MEM32(ebx + 0x4) & 0; /* 0x110131F7: and dword ptr [ebx + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = ebx + 0x8; /* 0x110131FB: lea ebx, [ebx + 8] */
    ecx = MEM32(ebp + (-0x10)); /* 0x110131FE: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x11013201: inc edi */
    _flag_k = FK_INC;
    MEM32(ebp + 0x10) = eax; /* 0x11013202: mov dword ptr [ebp + 0x10], eax */
    MEM32(ebp + 0x18) = edx; /* 0x11013205: mov dword ptr [ebp + 0x18], edx */
    /* cmp edi, 2 */ /* 0x11013208: cmp edi, 2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_110131D1; /* 0x1101320B: jl 0x110131d1 */
L_1101320D:
    ebx = MEM32(ebp + 0x8); /* 0x1101320D: mov ebx, dword ptr [ebp + 8] */
    esi = MEM32(ebp + (-0x8)); /* 0x11013210: mov esi, dword ptr [ebp - 8] */
    MEM32(ebp + 0x10) = edi; /* 0x11013213: mov dword ptr [ebp + 0x10], edi */
    ecx = MEM32(ebp + 0x10); /* 0x11013216: mov ecx, dword ptr [ebp + 0x10] */
    edi = MEM32(ebp + (-0x4)); /* 0x11013219: mov edi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x1101321C: add ecx, edi */
    _flag_k = FK_ADD;
    MEM32(ebx + ecx * 8 + 0x4) = edx; /* 0x1101321E: mov dword ptr [ebx + ecx*8 + 4], edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x11013222: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx + ecx * 8) = eax; /* 0x11013224: mov dword ptr [ebx + ecx*8], eax */
L_11013227:
    eax = MEM32(ebp + (-0x14)); /* 0x11013227: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1101322A: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 8; /* 0x1101322B: add esi, 8 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = edi; /* 0x1101322E: mov dword ptr [ebp - 4], edi */
    MEM32(ebp + (-0x8)) = esi; /* 0x11013231: mov dword ptr [ebp - 8], esi */
    /* cmp edi, 2 */ /* 0x11013234: cmp edi, 2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_110131A8; /* 0x11013237: jl 0x110131a8 */
L_1101323D:
    edi = POP32_VAL(esp); /* 0x1101323D: pop edi */
    esi = POP32_VAL(esp); /* 0x1101323E: pop esi */
    ebx = POP32_VAL(esp); /* 0x1101323F: pop ebx */
    esp = ebp; /* 0x11013240: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x11013242: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11013243: ret  */
    RECOMP_REGS_OUT();
}

void sub_11013244(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11013244u);

L_11013244:
    PUSH32(esp, ebp); /* 0x11013244: push ebp */
    ebp = esp; /* 0x11013245: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x40u; /* 0x11013247: sub esp, 0x40 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0xC); /* 0x1101324A: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x1101324D: push ebx */
    PUSH32(esp, esi); /* 0x1101324E: push esi */
    PUSH32(esp, edi); /* 0x1101324F: push edi */
    MEM32(ebp + (-0x40)) = eax; /* 0x11013250: mov dword ptr [ebp - 0x40], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11013253: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0x10); /* 0x11013255: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, 2); /* 0x11013258: push 2 */
    MEM32(ebp + (-0x38)) = eax; /* 0x1101325A: mov dword ptr [ebp - 0x38], eax */
    _flag_a = (uint32_t)((eax | edi)); _flag_b = (uint32_t)((eax | edi));
    eax = eax | edi; /* 0x1101325D: or eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1101325F: pop ebx */
    MEM32(ebp + (-0x3C)) = edi; /* 0x11013260: mov dword ptr [ebp - 0x3c], edi */
    MEM32(ebp + (-0x34)) = edi; /* 0x11013263: mov dword ptr [ebp - 0x34], edi */
    MEM32(ebp + (-0x4)) = ebx; /* 0x11013266: mov dword ptr [ebp - 4], ebx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1101327C; /* 0x11013269: jne 0x1101327c */
L_1101326B:
    ecx = ebp + (-0x38); /* 0x1101326B: lea ecx, [ebp - 0x38] */
L_1101326E:
    ecx = ecx + (-0x8); /* 0x1101326E: lea ecx, [ecx - 8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x11013271: dec ebx */
    _flag_k = FK_DEC;
    eax = MEM32(ecx); /* 0x11013272: mov eax, dword ptr [ecx] */
    _flag_a = (uint32_t)((eax | MEM32(ecx + 0x4))); _flag_b = (uint32_t)((eax | MEM32(ecx + 0x4)));
    eax = eax | MEM32(ecx + 0x4); /* 0x11013274: or eax, dword ptr [ecx + 4] */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101326E; /* 0x11013277: je 0x1101326e */
L_11013279:
    MEM32(ebp + (-0x4)) = ebx; /* 0x11013279: mov dword ptr [ebp - 4], ebx */
L_1101327C:
    PUSH32(esp, 5); /* 0x1101327C: push 5 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1101327E: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1101357B); /* 0x11013281: call 0x1101357b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11013286: pop ecx */
    ecx = POP32_VAL(esp); /* 0x11013287: pop ecx */
    ecx = MEM32(ebp + ebx * 8 + (-0x48)); /* 0x11013288: mov ecx, dword ptr [ebp + ebx*8 - 0x48] */
    esi = eax; /* 0x1101328C: mov esi, eax */
    eax = MEM32(ebp + ebx * 8 + (-0x44)); /* 0x1101328E: mov eax, dword ptr [ebp + ebx*8 - 0x44] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ebx; /* 0x11013292: sub esi, ebx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 1; /* 0x11013294: add ecx, 1 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1C)) = esi; /* 0x11013297: mov dword ptr [ebp - 0x1c], esi */
    { uint32_t _aa = eax, _ab = edi, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1101329A: adc eax, edi */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, eax); /* 0x1101329C: push eax */
    PUSH32(esp, ecx); /* 0x1101329D: push ecx */
    PUSH32(esp, 1); /* 0x1101329E: push 1 */
    PUSH32(esp, edi); /* 0x110132A0: push edi */
    RECOMP_CALL(sub_1103AFF0); /* 0x110132A1: call 0x1103aff0 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x110132A6: mov ecx, eax */
    eax = edx; /* 0x110132A8: mov eax, edx */
    MEM32(ebp + (-0x24)) = ecx; /* 0x110132AA: mov dword ptr [ebp - 0x24], ecx */
    MEM32(ebp + (-0x14)) = eax; /* 0x110132AD: mov dword ptr [ebp - 0x14], eax */
    /* cmp ecx, 1 */ /* 0x110132B0: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_110132B9; /* 0x110132B3: jne 0x110132b9 */
L_110132B5:
    /* cmp eax, edi */ /* 0x110132B5: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110132D8; /* 0x110132B7: je 0x110132d8 */
L_110132B9:
    PUSH32(esp, eax); /* 0x110132B9: push eax */
    PUSH32(esp, ecx); /* 0x110132BA: push ecx */
    PUSH32(esp, 5); /* 0x110132BB: push 5 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x110132BD: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_110135A2); /* 0x110132C0: call 0x110135a2 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x110132C5: push dword ptr [ebp - 0x14] */
    eax = ebp + (-0x40); /* 0x110132C8: lea eax, [ebp - 0x40] */
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x110132CB: push dword ptr [ebp - 0x24] */
    PUSH32(esp, ebx); /* 0x110132CE: push ebx */
    PUSH32(esp, eax); /* 0x110132CF: push eax */
    RECOMP_CALL(sub_110135A2); /* 0x110132D0: call 0x110135a2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x110132D5: add esp, 0x20 */
    _flag_k = FK_ADD;
L_110132D8:
    /* test esi, esi */ /* 0x110132D8: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_110134AA; /* 0x110132DA: js 0x110134aa */
L_110132E0:
    eax = MEM32(ebp + ebx * 8 + (-0x48)); /* 0x110132E0: mov eax, dword ptr [ebp + ebx*8 - 0x48] */
    ecx = MEM32(ebp + 0x8); /* 0x110132E4: mov ecx, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x30)) = eax; /* 0x110132E7: mov dword ptr [ebp - 0x30], eax */
    eax = MEM32(ebp + ebx * 8 + (-0x44)); /* 0x110132EA: mov eax, dword ptr [ebp + ebx*8 - 0x44] */
    MEM32(ebp + (-0x2C)) = eax; /* 0x110132EE: mov dword ptr [ebp - 0x2c], eax */
    eax = ecx + esi * 8; /* 0x110132F1: lea eax, [ecx + esi*8] */
    MEM32(ebp + (-0x10)) = eax; /* 0x110132F4: mov dword ptr [ebp - 0x10], eax */
    eax = ebx + esi; /* 0x110132F7: lea eax, [ebx + esi] */
    ebx = ecx + eax * 8; /* 0x110132FA: lea ebx, [ecx + eax*8] */
    MEM32(ebp + (-0x20)) = ebx; /* 0x110132FD: mov dword ptr [ebp - 0x20], ebx */
L_11013300:
    eax = MEM32(ebx); /* 0x11013300: mov eax, dword ptr [ebx] */
    SET_LO8(ecx, 0x20u); /* 0x11013302: mov cl, 0x20 */
    edx = MEM32(ebx + 0x4); /* 0x11013304: mov edx, dword ptr [ebx + 4] */
    RECOMP_CALL(sub_1103AFD0); /* 0x11013307: call 0x1103afd0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x1101330C: push dword ptr [ebp - 0x2c] */
    ecx = MEM32(ebx + (-0x8)); /* 0x1101330F: mov ecx, dword ptr [ebx - 8] */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x11013312: push dword ptr [ebp - 0x30] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x11013315: add ecx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebx + (-0x4)); /* 0x11013317: mov eax, dword ptr [ebx - 4] */
    { uint32_t _aa = eax, _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1101331A: adc eax, edx */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, eax); /* 0x1101331C: push eax */
    PUSH32(esp, ecx); /* 0x1101331D: push ecx */
    RECOMP_CALL(sub_1103B060); /* 0x1101331E: call 0x1103b060 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x8)) = ebx; /* 0x11013323: mov dword ptr [ebp - 8], ebx */
    ebx = eax; /* 0x11013326: mov ebx, eax */
    esi = ebx; /* 0x11013328: mov esi, ebx */
    MEM32(ebp + (-0x18)) = ecx; /* 0x1101332A: mov dword ptr [ebp - 0x18], ecx */
    _flag_a = (uint32_t)((esi | edx)); _flag_b = (uint32_t)((esi | edx));
    esi = esi | edx; /* 0x1101332D: or esi, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x10) = ebx; /* 0x1101332F: mov dword ptr [ebp + 0x10], ebx */
    MEM32(ebp + (-0xC)) = edx; /* 0x11013332: mov dword ptr [ebp - 0xc], edx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101348E; /* 0x11013335: je 0x1101348e */
L_1101333B:
    eax = MEM32(ebp + (-0x8)); /* 0x1101333B: mov eax, dword ptr [ebp - 8] */
    goto L_11013343; /* 0x1101333E: jmp 0x11013343 */
L_11013340:
    ebx = MEM32(ebp + 0x10); /* 0x11013340: mov ebx, dword ptr [ebp + 0x10] */
L_11013343:
    /* cmp edx, 1 */ /* 0x11013343: cmp edx, 1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_110134F3; /* 0x11013346: ja 0x110134f3 */
L_1101334C:
    if (CMP_B(_flag_a, _flag_b)) goto L_11013356; /* 0x1101334C: jb 0x11013356 */
L_1101334E:
    /* cmp ebx, edi */ /* 0x1101334E: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_110134F3; /* 0x11013350: jae 0x110134f3 */
L_11013356:
    PUSH32(esp, edx); /* 0x11013356: push edx */
    PUSH32(esp, ebx); /* 0x11013357: push ebx */
    ebx = MEM32(ebp + (-0x4)); /* 0x11013358: mov ebx, dword ptr [ebp - 4] */
    esi = ecx; /* 0x1101335B: mov esi, ecx */
    ecx = MEM32(ebp + (-0x20)); /* 0x1101335D: mov ecx, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11013360: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + ebx * 8 + (-0x4C))); /* 0x11013362: push dword ptr [ebp + ebx*8 - 0x4c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + (-0x10)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + (-0x10)); /* 0x11013366: add eax, dword ptr [ecx - 0x10] */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(ebp + ebx * 8 + (-0x50))); /* 0x11013369: push dword ptr [ebp + ebx*8 - 0x50] */
    { uint32_t _aa = esi, _ab = MEM32(ecx + (-0xC)), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1101336D: adc esi, dword ptr [ecx - 0xc] */
      esi = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM32(ebp + (-0x28)) = eax; /* 0x11013370: mov dword ptr [ebp - 0x28], eax */
    RECOMP_CALL(sub_1103AF90); /* 0x11013373: call 0x1103af90 */
    RECOMP_FLAGS_IN();
    /* cmp edx, esi */ /* 0x11013378: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_110133AF; /* 0x1101337A: jb 0x110133af */
L_1101337C:
    if (CMP_A(_flag_a, _flag_b)) goto L_11013383; /* 0x1101337C: ja 0x11013383 */
L_1101337E:
    /* cmp eax, MEM32(ebp + (-0x28)) */ /* 0x1101337E: cmp eax, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x28)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_110133AF; /* 0x11013381: jbe 0x110133af */
L_11013383:
    eax = MEM32(ebp + (-0x8)); /* 0x11013383: mov eax, dword ptr [ebp - 8] */
    edx = MEM32(ebp + (-0xC)); /* 0x11013386: mov edx, dword ptr [ebp - 0xc] */
    ecx = MEM32(ebp + (-0x18)); /* 0x11013389: mov ecx, dword ptr [ebp - 0x18] */
L_1101338C:
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 0xFFFFFFFFu; /* 0x1101338C: add dword ptr [ebp + 0x10], -1 */
    _flag_k = FK_ADD;
    { uint32_t _aa = edx, _ab = 0xFFFFFFFFu, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11013390: adc edx, -1 */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + ebx * 8 + (-0x48)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + ebx * 8 + (-0x48)); /* 0x11013393: add ecx, dword ptr [ebp + ebx*8 - 0x48] */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xC)) = edx; /* 0x11013397: mov dword ptr [ebp - 0xc], edx */
    { uint32_t _aa = eax, _ab = MEM32(ebp + ebx * 8 + (-0x44)), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1101339A: adc eax, dword ptr [ebp + ebx*8 - 0x44] */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM32(ebp + (-0x18)) = ecx; /* 0x1101339E: mov dword ptr [ebp - 0x18], ecx */
    MEM32(ebp + (-0x8)) = eax; /* 0x110133A1: mov dword ptr [ebp - 8], eax */
    /* cmp eax, 1 */ /* 0x110133A4: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_11013340; /* 0x110133A7: jb 0x11013340 */
L_110133A9:
    if (CMP_A(_flag_a, _flag_b)) goto L_110133AF; /* 0x110133A9: ja 0x110133af */
L_110133AB:
    /* cmp ecx, edi */ /* 0x110133AB: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_11013340; /* 0x110133AD: jb 0x11013340 */
L_110133AF:
    MEM32(ebp + (-0x18)) = edi; /* 0x110133AF: mov dword ptr [ebp - 0x18], edi */
    ecx = edi; /* 0x110133B2: mov ecx, edi */
    MEM32(ebp + (-0x28)) = ecx; /* 0x110133B4: mov dword ptr [ebp - 0x28], ecx */
    esi = edi; /* 0x110133B7: mov esi, edi */
    /* test ebx, ebx */ /* 0x110133B9: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1101348E; /* 0x110133BB: jle 0x1101348e */
L_110133C1:
    eax = MEM32(ebp + (-0x10)); /* 0x110133C1: mov eax, dword ptr [ebp - 0x10] */
    MEM32(ebp + (-0x8)) = eax; /* 0x110133C4: mov dword ptr [ebp - 8], eax */
L_110133C7:
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x110133C7: push dword ptr [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x110133CA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + ecx * 8 + (-0x3C))); /* 0x110133CD: push dword ptr [ebp + ecx*8 - 0x3c] */
    PUSH32(esp, MEM32(ebp + ecx * 8 + (-0x40))); /* 0x110133D1: push dword ptr [ebp + ecx*8 - 0x40] */
    RECOMP_CALL(sub_1103AF90); /* 0x110133D5: call 0x1103af90 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x8)); /* 0x110133DA: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x110133DD: add eax, esi */
    _flag_k = FK_ADD;
    { uint32_t _aa = edx, _ab = MEM32(ebp + (-0x18)), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x110133DF: adc edx, dword ptr [ebp - 0x18] */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ecx) = MEM32(ecx) - eax; /* 0x110133E2: sub dword ptr [ecx], eax */
    _flag_k = FK_CMP;
    eax = MEM32(ecx); /* 0x110133E4: mov eax, dword ptr [ecx] */
    { uint32_t _sa = MEM32(ecx + 0x4), _sb = edx, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x110133E6: sbb dword ptr [ecx + 4], edx */
      MEM32(ecx + 0x4) = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    edx = MEM32(ecx + 0x4); /* 0x110133E9: mov edx, dword ptr [ecx + 4] */
    SET_LO8(ecx, 0x20u); /* 0x110133EC: mov cl, 0x20 */
    RECOMP_CALL(sub_1103B100); /* 0x110133EE: call 0x1103b100 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x110133F3: mov esi, eax */
    MEM32(ebp + (-0x18)) = edx; /* 0x110133F5: mov dword ptr [ebp - 0x18], edx */
    ecx = esi; /* 0x110133F8: mov ecx, esi */
    _flag_a = (uint32_t)((ecx | edx)); _flag_b = (uint32_t)((ecx | edx));
    ecx = ecx | edx; /* 0x110133FA: or ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101340E; /* 0x110133FC: je 0x1101340e */
L_110133FE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x110133FE: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x11013400: sub ecx, esi */
    _flag_k = FK_CMP;
    PUSH32(esp, 1); /* 0x11013402: push 1 */
    eax = POP32_VAL(esp); /* 0x11013404: pop eax */
    { uint32_t _sa = eax, _sb = edx, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11013405: sbb eax, edx */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    esi = ecx; /* 0x11013407: mov esi, ecx */
    edx = eax; /* 0x11013409: mov edx, eax */
    MEM32(ebp + (-0x18)) = eax; /* 0x1101340B: mov dword ptr [ebp - 0x18], eax */
L_1101340E:
    eax = MEM32(ebp + (-0x8)); /* 0x1101340E: mov eax, dword ptr [ebp - 8] */
    ecx = MEM32(ebp + (-0x28)); /* 0x11013411: mov ecx, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x11013414: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x28)) = ecx; /* 0x11013415: mov dword ptr [ebp - 0x28], ecx */
    MEM32(eax + 0x4) = edi; /* 0x11013418: mov dword ptr [eax + 4], edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1101341B: add eax, 8 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x1101341E: mov dword ptr [ebp - 8], eax */
    /* cmp ecx, ebx */ /* 0x11013421: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_110133C7; /* 0x11013423: jl 0x110133c7 */
L_11013425:
    eax = esi; /* 0x11013425: mov eax, esi */
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x11013427: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101348E; /* 0x11013429: je 0x1101348e */
L_1101342B:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x1C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + (-0x1C)); /* 0x1101342B: add ecx, dword ptr [ebp - 0x1c] */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x8); /* 0x1101342E: mov eax, dword ptr [ebp + 8] */
    MEM32(ebp + 0x10) = ecx; /* 0x11013431: mov dword ptr [ebp + 0x10], ecx */
    ebx = eax + ecx * 8; /* 0x11013434: lea ebx, [eax + ecx*8] */
L_11013437:
    /* cmp ecx, 5 */ /* 0x11013437: cmp ecx, 5 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_11013473; /* 0x1101343A: jge 0x11013473 */
L_1101343C:
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebx) = MEM32(ebx) - esi; /* 0x1101343C: sub dword ptr [ebx], esi */
    _flag_k = FK_CMP;
    SET_LO8(ecx, 0x20u); /* 0x1101343E: mov cl, 0x20 */
    eax = MEM32(ebx); /* 0x11013440: mov eax, dword ptr [ebx] */
    { uint32_t _sa = MEM32(ebx + 0x4), _sb = edx, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11013442: sbb dword ptr [ebx + 4], edx */
      MEM32(ebx + 0x4) = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    edx = MEM32(ebx + 0x4); /* 0x11013445: mov edx, dword ptr [ebx + 4] */
    RECOMP_CALL(sub_1103B100); /* 0x11013448: call 0x1103b100 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1101344D: mov esi, eax */
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x1101344F: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11013460; /* 0x11013451: je 0x11013460 */
L_11013453:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x11013453: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x11013455: sub ecx, esi */
    _flag_k = FK_CMP;
    PUSH32(esp, 1); /* 0x11013457: push 1 */
    eax = POP32_VAL(esp); /* 0x11013459: pop eax */
    { uint32_t _sa = eax, _sb = edx, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1101345A: sbb eax, edx */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    esi = ecx; /* 0x1101345C: mov esi, ecx */
    edx = eax; /* 0x1101345E: mov edx, eax */
L_11013460:
    ecx = MEM32(ebp + 0x10); /* 0x11013460: mov ecx, dword ptr [ebp + 0x10] */
    eax = esi; /* 0x11013463: mov eax, esi */
    MEM32(ebx + 0x4) = edi; /* 0x11013465: mov dword ptr [ebx + 4], edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 8; /* 0x11013468: add ebx, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1101346B: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x1101346C: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x10) = ecx; /* 0x1101346E: mov dword ptr [ebp + 0x10], ecx */
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11013437; /* 0x11013471: jne 0x11013437 */
L_11013473:
    _flag_a = (uint32_t)((esi | edx)); _flag_b = (uint32_t)((esi | edx));
    esi = esi | edx; /* 0x11013473: or esi, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = MEM32(ebp + (-0x4)); /* 0x11013475: mov ebx, dword ptr [ebp - 4] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101348E; /* 0x11013478: je 0x1101348e */
L_1101347A:
    PUSH32(esp, ebx); /* 0x1101347A: push ebx */
    eax = ebp + (-0x40); /* 0x1101347B: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x1101347E: push eax */
    eax = ebx + 0x1; /* 0x1101347F: lea eax, [ebx + 1] */
    PUSH32(esp, eax); /* 0x11013482: push eax */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x11013483: push dword ptr [ebp - 0x10] */
    RECOMP_CALL(sub_110134FB); /* 0x11013486: call 0x110134fb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1101348B: add esp, 0x10 */
    _flag_k = FK_ADD;
L_1101348E:
    eax = MEM32(ebp + (-0x1C)); /* 0x1101348E: mov eax, dword ptr [ebp - 0x1c] */
    ebx = MEM32(ebp + (-0x20)); /* 0x11013491: mov ebx, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x11013494: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) - 8; /* 0x11013495: sub dword ptr [ebp - 0x10], 8 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 8; /* 0x11013499: sub ebx, 8 */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x1C)) = eax; /* 0x1101349C: mov dword ptr [ebp - 0x1c], eax */
    MEM32(ebp + (-0x20)) = ebx; /* 0x1101349F: mov dword ptr [ebp - 0x20], ebx */
    /* test eax, eax */ /* 0x110134A2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_11013300; /* 0x110134A4: jns 0x11013300 */
L_110134AA:
    ebx = MEM32(ebp + (-0x24)); /* 0x110134AA: mov ebx, dword ptr [ebp - 0x24] */
    edx = MEM32(ebp + (-0x14)); /* 0x110134AD: mov edx, dword ptr [ebp - 0x14] */
    /* cmp ebx, 1 */ /* 0x110134B0: cmp ebx, 1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_110134B9; /* 0x110134B3: jne 0x110134b9 */
L_110134B5:
    /* cmp edx, edi */ /* 0x110134B5: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110134EC; /* 0x110134B7: je 0x110134ec */
L_110134B9:
    ecx = MEM32(ebp + 0x8); /* 0x110134B9: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, 4); /* 0x110134BC: push 4 */
    MEM32(ebp + 0x10) = edi; /* 0x110134BE: mov dword ptr [ebp + 0x10], edi */
    esi = POP32_VAL(esp); /* 0x110134C1: pop esi */
L_110134C2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x110134C2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + esi * 8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + esi * 8); /* 0x110134C4: add eax, dword ptr [ecx + esi*8] */
    _flag_k = FK_ADD;
    PUSH32(esp, edx); /* 0x110134C7: push edx */
    { uint32_t _aa = edi, _ab = MEM32(ecx + esi * 8 + 0x4), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x110134C8: adc edi, dword ptr [ecx + esi*8 + 4] */
      edi = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, ebx); /* 0x110134CC: push ebx */
    PUSH32(esp, edi); /* 0x110134CD: push edi */
    PUSH32(esp, eax); /* 0x110134CE: push eax */
    RECOMP_CALL(sub_1103B060); /* 0x110134CF: call 0x1103b060 */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x110134D4: mov edi, ecx */
    MEM32(ebp + 0x10) = ebx; /* 0x110134D6: mov dword ptr [ebp + 0x10], ebx */
    ecx = MEM32(ebp + 0x8); /* 0x110134D9: mov ecx, dword ptr [ebp + 8] */
    ebx = MEM32(ebp + (-0x24)); /* 0x110134DC: mov ebx, dword ptr [ebp - 0x24] */
    MEM32(ecx + esi * 8 + 0x4) = edx; /* 0x110134DF: mov dword ptr [ecx + esi*8 + 4], edx */
    edx = MEM32(ebp + (-0x14)); /* 0x110134E3: mov edx, dword ptr [ebp - 0x14] */
    MEM32(ecx + esi * 8) = eax; /* 0x110134E6: mov dword ptr [ecx + esi*8], eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x110134E9: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NS(_flag_a, _flag_b)) goto L_110134C2; /* 0x110134EA: jns 0x110134c2 */
L_110134EC:
    edi = POP32_VAL(esp); /* 0x110134EC: pop edi */
    esi = POP32_VAL(esp); /* 0x110134ED: pop esi */
    ebx = POP32_VAL(esp); /* 0x110134EE: pop ebx */
    esp = ebp; /* 0x110134EF: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x110134F1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110134F2: ret  */
L_110134F3:
    ebx = MEM32(ebp + (-0x4)); /* 0x110134F3: mov ebx, dword ptr [ebp - 4] */
    RECOMP_BACKEDGE();
    goto L_1101338C; /* 0x110134F6: jmp 0x1101338c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_110134FB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110134FBu);

L_110134FB:
    PUSH32(esp, ebp); /* 0x110134FB: push ebp */
    ebp = esp; /* 0x110134FC: mov ebp, esp */
    PUSH32(esp, edi); /* 0x110134FE: push edi */
    edi = MEM32(ebp + 0x14); /* 0x110134FF: mov edi, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11013502: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x11013504: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x11013506: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_11013578; /* 0x11013508: jle 0x11013578 */
L_1101350A:
    PUSH32(esp, ebx); /* 0x1101350A: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1101350B: mov ebx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - ebx; /* 0x1101350E: sub dword ptr [ebp + 0x10], ebx */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x11013511: push esi */
    esi = ebx; /* 0x11013512: mov esi, ebx */
    MEM32(ebp + 0x14) = edi; /* 0x11013514: mov dword ptr [ebp + 0x14], edi */
    ebx = MEM32(ebp + 0x10); /* 0x11013517: mov ebx, dword ptr [ebp + 0x10] */
L_1101351A:
    ecx = MEM32(ebx + esi); /* 0x1101351A: mov ecx, dword ptr [ebx + esi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x1101351D: add ecx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebx + esi + 0x4); /* 0x1101351F: mov eax, dword ptr [ebx + esi + 4] */
    { uint32_t _aa = eax, _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11013523: adc eax, edx */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi) = MEM32(esi) + ecx; /* 0x11013525: add dword ptr [esi], ecx */
    _flag_k = FK_ADD;
    SET_LO8(ecx, 0x20u); /* 0x11013527: mov cl, 0x20 */
    { uint32_t _aa = MEM32(esi + 0x4), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11013529: adc dword ptr [esi + 4], eax */
      MEM32(esi + 0x4) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = MEM32(esi); /* 0x1101352C: mov eax, dword ptr [esi] */
    edx = MEM32(esi + 0x4); /* 0x1101352E: mov edx, dword ptr [esi + 4] */
    RECOMP_CALL(sub_1103B100); /* 0x11013531: call 0x1103b100 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x11013536: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = esi + 0x8; /* 0x1101353A: lea esi, [esi + 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1101353D: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1101351A; /* 0x1101353E: jne 0x1101351a */
L_11013540:
    ebx = MEM32(ebp + 0x8); /* 0x11013540: mov ebx, dword ptr [ebp + 8] */
    ecx = eax; /* 0x11013543: mov ecx, eax */
    _flag_a = (uint32_t)((ecx | edx)); _flag_b = (uint32_t)((ecx | edx));
    ecx = ecx | edx; /* 0x11013545: or ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11013576; /* 0x11013547: je 0x11013576 */
L_11013549:
    esi = MEM32(ebp + 0x14); /* 0x11013549: mov esi, dword ptr [ebp + 0x14] */
L_1101354C:
    /* cmp esi, MEM32(ebp + 0xC) */ /* 0x1101354C: cmp esi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_11013576; /* 0x1101354F: jge 0x11013576 */
L_11013551:
    _flag_a = (uint32_t)(MEM32(ebx + esi * 8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx + esi * 8) = MEM32(ebx + esi * 8) + eax; /* 0x11013551: add dword ptr [ebx + esi*8], eax */
    _flag_k = FK_ADD;
    SET_LO8(ecx, 0x20u); /* 0x11013554: mov cl, 0x20 */
    eax = MEM32(ebx + esi * 8); /* 0x11013556: mov eax, dword ptr [ebx + esi*8] */
    { uint32_t _aa = MEM32(ebx + esi * 8 + 0x4), _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11013559: adc dword ptr [ebx + esi*8 + 4], edx */
      MEM32(ebx + esi * 8 + 0x4) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    edx = MEM32(ebx + esi * 8 + 0x4); /* 0x1101355D: mov edx, dword ptr [ebx + esi*8 + 4] */
    RECOMP_CALL(sub_1103B100); /* 0x11013561: call 0x1103b100 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebx + esi * 8 + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(ebx + esi * 8 + 0x4) = MEM32(ebx + esi * 8 + 0x4) & 0; /* 0x11013566: and dword ptr [ebx + esi*8 + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1101356B: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + 0x14) = eax; /* 0x1101356C: mov dword ptr [ebp + 0x14], eax */
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x1101356F: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0x14); /* 0x11013571: mov eax, dword ptr [ebp + 0x14] */
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1101354C; /* 0x11013574: jne 0x1101354c */
L_11013576:
    esi = POP32_VAL(esp); /* 0x11013576: pop esi */
    ebx = POP32_VAL(esp); /* 0x11013577: pop ebx */
L_11013578:
    edi = POP32_VAL(esp); /* 0x11013578: pop edi */
    ebp = POP32_VAL(esp); /* 0x11013579: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101357A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1101357B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101357Bu);

L_1101357B:
    PUSH32(esp, ebp); /* 0x1101357B: push ebp */
    ebp = esp; /* 0x1101357C: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x1101357E: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x11013581: push esi */
    esi = MEM32(ebp + 0xC); /* 0x11013582: mov esi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFF8u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0xFFFFFFF8u; /* 0x11013585: add edx, -8 */
    _flag_k = FK_ADD;
    edx = edx + esi * 8; /* 0x11013588: lea edx, [edx + esi*8] */
    eax = MEM32(edx); /* 0x1101358B: mov eax, dword ptr [edx] */
    _flag_a = (uint32_t)((eax | MEM32(edx + 0x4))); _flag_b = (uint32_t)((eax | MEM32(edx + 0x4)));
    eax = eax | MEM32(edx + 0x4); /* 0x1101358D: or eax, dword ptr [edx + 4] */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1101359D; /* 0x11013590: jne 0x1101359d */
L_11013592:
    edx = edx + (-0x8); /* 0x11013592: lea edx, [edx - 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x11013595: dec esi */
    _flag_k = FK_DEC;
    ecx = MEM32(edx); /* 0x11013596: mov ecx, dword ptr [edx] */
    _flag_a = (uint32_t)((ecx | MEM32(edx + 0x4))); _flag_b = (uint32_t)((ecx | MEM32(edx + 0x4)));
    ecx = ecx | MEM32(edx + 0x4); /* 0x11013598: or ecx, dword ptr [edx + 4] */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_11013592; /* 0x1101359B: je 0x11013592 */
L_1101359D:
    eax = esi; /* 0x1101359D: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1101359F: pop esi */
    ebp = POP32_VAL(esp); /* 0x110135A0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110135A1: ret  */
    RECOMP_REGS_OUT();
}

void sub_110135A2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110135A2u);

L_110135A2:
    PUSH32(esp, ebp); /* 0x110135A2: push ebp */
    ebp = esp; /* 0x110135A3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x110135A5: push ecx */
    PUSH32(esp, ebx); /* 0x110135A6: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x110135A7: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(ebx);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & ebx; /* 0x110135A9: and dword ptr [ebp - 4], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x110135AC: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x110135AD: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0xC), ebx */ /* 0x110135AF: cmp dword ptr [ebp + 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_110135EE; /* 0x110135B2: jle 0x110135ee */
L_110135B4:
    PUSH32(esp, edi); /* 0x110135B4: push edi */
    edi = MEM32(ebp + 0x8); /* 0x110135B5: mov edi, dword ptr [ebp + 8] */
L_110135B8:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x110135B8: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x110135BB: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(edi + esi * 8 + 0x4)); /* 0x110135BE: push dword ptr [edi + esi*8 + 4] */
    PUSH32(esp, MEM32(edi + esi * 8)); /* 0x110135C2: push dword ptr [edi + esi*8] */
    RECOMP_CALL(sub_1103AF90); /* 0x110135C5: call 0x1103af90 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x110135CA: add eax, ebx */
    _flag_k = FK_ADD;
    SET_LO8(ecx, 0x20u); /* 0x110135CC: mov cl, 0x20 */
    MEM32(edi + esi * 8) = eax; /* 0x110135CE: mov dword ptr [edi + esi*8], eax */
    { uint32_t _aa = edx, _ab = MEM32(ebp + (-0x4)), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x110135D1: adc edx, dword ptr [ebp - 4] */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM32(edi + esi * 8 + 0x4) = edx; /* 0x110135D4: mov dword ptr [edi + esi*8 + 4], edx */
    RECOMP_CALL(sub_1103B100); /* 0x110135D8: call 0x1103b100 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(edi + esi * 8 + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(edi + esi * 8 + 0x4) = MEM32(edi + esi * 8 + 0x4) & 0; /* 0x110135DD: and dword ptr [edi + esi*8 + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = eax; /* 0x110135E2: mov ebx, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x110135E4: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = edx; /* 0x110135E5: mov dword ptr [ebp - 4], edx */
    /* cmp esi, MEM32(ebp + 0xC) */ /* 0x110135E8: cmp esi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_110135B8; /* 0x110135EB: jl 0x110135b8 */
L_110135ED:
    edi = POP32_VAL(esp); /* 0x110135ED: pop edi */
L_110135EE:
    esi = POP32_VAL(esp); /* 0x110135EE: pop esi */
    ebx = POP32_VAL(esp); /* 0x110135EF: pop ebx */
    esp = ebp; /* 0x110135F0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x110135F2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110135F3: ret  */
    RECOMP_REGS_OUT();
}

void sub_110135F4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110135F4u);

L_110135F4:
    PUSH32(esp, ebp); /* 0x110135F4: push ebp */
    ebp = esp; /* 0x110135F5: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x110135F7: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x11069070)); /* 0x110135FA: call dword ptr [0x11069070] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x11013600: pop ebp */
    goto L_1103B126; /* 0x11013601: jmp 0x1103b126 */
L_1103B126:
    { _itail_tgt = (uint32_t)(MEM32(0x1106932C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_11013606(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11013606u);

L_11013606:
    PUSH32(esp, ebp); /* 0x11013606: push ebp */
    ebp = esp; /* 0x11013607: mov ebp, esp */
    PUSH32(esp, 0x18u); /* 0x11013609: push 0x18 */
    RECOMP_CALL(sub_1103B120); /* 0x1101360B: call 0x1103b120 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x11013610: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, 0); /* 0x11013613: push 0 */
    PUSH32(esp, 0xFA0u); /* 0x11013615: push 0xfa0 */
    PUSH32(esp, eax); /* 0x1101361A: push eax */
    MEM32(ecx) = eax; /* 0x1101361B: mov dword ptr [ecx], eax */
    RECOMP_ICALL(MEM32(0x11069328)); /* 0x1101361D: call dword ptr [0x11069328] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11013623: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x11013626: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11013627: ret  */
    RECOMP_REGS_OUT();
}

void sub_11013628(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11013628u);

L_11013628:
    PUSH32(esp, ebp); /* 0x11013628: push ebp */
    ebp = esp; /* 0x11013629: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1101362B: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x11069074)); /* 0x1101362E: call dword ptr [0x11069074] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x11013634: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11013635: ret  */
    RECOMP_REGS_OUT();
}

void sub_11013636(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11013636u);

L_11013636:
    PUSH32(esp, ebp); /* 0x11013636: push ebp */
    ebp = esp; /* 0x11013637: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x11013639: sub esp, 0xc */
    _flag_k = FK_CMP;
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x1101363C: fld dword ptr [ebp + 8] */
    _st[0] += *(double*)ADDR(0x11001428); /* 0x1101363F: fadd qword ptr [0x11001428] */
    PUSH32(esp, ecx); /* 0x11013645: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x11013646: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x11013649: fld dword ptr [ebp - 4] */
    *(double*)ADDR(ebp + (-0xC)) = _st[0]; /* 0x1101364C: fst qword ptr [ebp - 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x1101364F: fstp dword ptr [esp] */
    RECOMP_CALL(sub_110137BC); /* 0x11013652: call 0x110137bc */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x11013657: fld dword ptr [ebp + 8] */
    eax = 0x11001398u; /* 0x1101365A: mov eax, 0x11001398 */
    fp_push(*(double*)ADDR(0x11001198)); /* 0x1101365F: fld qword ptr [0x11001198] */
    _st[0] += _st[1]; /* 0x11013665: fadd st(1) */
    ecx = POP32_VAL(esp); /* 0x11013667: pop ecx */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x11013668: fmulp st(2) */
    fp_push(*(double*)ADDR(ebp + (-0xC))); /* 0x1101366A: fld qword ptr [ebp - 0xc] */
    { double _v = fp_pop(); _st[1] = _v - _st[1]; } /* 0x1101366D: fsubrp st(2) */
    fp_xch(1); /* 0x1101366F: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x11013671: fstp dword ptr [ebp - 4] */
    fp_push(1.0); /* 0x11013674: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x11013676: fstp dword ptr [ebp + 8] */
    fp_push(_st[0]); /* 0x11013679: fld st(0) */
    fp_push(1.0); /* 0x1101367B: fld1  */
    _st[1] += _st[0]; /* 0x1101367D: fadd st(1), st(0) */
    fp_xch(1); /* 0x1101367F: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x11013681: fstp dword ptr [ebp - 8] */
L_11013684:
    fp_push(*(float*)&MEM32(eax)); /* 0x11013684: fld dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x11013686: add eax, 4 */
    _flag_k = FK_ADD;
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x11013689: fld dword ptr [ebp - 8] */
    fp_push(_st[0]); /* 0x1101368C: fld st(0) */
    { double _v = fp_pop(); _st[1] = _v == 0.0 ? _st[1] : _st[1] / _v; } /* 0x1101368E: fdivp st(2) */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x11013690: fld dword ptr [ebp + 8] */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x11013693: faddp st(2) */
    fp_xch(1); /* 0x11013695: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x11013697: fstp dword ptr [ebp + 8] */
    _st[0] += _st[1]; /* 0x1101369A: fadd st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x1101369C: fstp dword ptr [ebp - 8] */
    /* cmp eax, 0x110013B0u */ /* 0x1101369F: cmp eax, 0x110013b0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x110013B0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_11013684; /* 0x110136A4: jl 0x11013684 */
L_110136A6:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x110136A6: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x110136A8: fld dword ptr [ebp + 8] */
    _st[0] *= *(double*)ADDR(0x11001420); /* 0x110136AB: fmul qword ptr [0x11001420] */
    PUSH32(esp, ecx); /* 0x110136B1: push ecx */
    { double _v = fp_pop(); _st[0] = _st[0] == 0.0 ? _v : _v / _st[0]; } /* 0x110136B2: fdivrp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x110136B4: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x110136B7: fld dword ptr [ebp + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x110136BA: fstp dword ptr [esp] */
    RECOMP_CALL(sub_110137BC); /* 0x110136BD: call 0x110137bc */
    RECOMP_FLAGS_IN();
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x110136C2: fsub dword ptr [ebp - 4] */
    ecx = POP32_VAL(esp); /* 0x110136C5: pop ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x110136C6: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x110136C9: fld dword ptr [ebp + 8] */
    esp = ebp; /* 0x110136CC: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x110136CE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110136CF: ret  */
    RECOMP_REGS_OUT();
}

void sub_110136D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110136D0u);

L_110136D0:
    PUSH32(esp, ebp); /* 0x110136D0: push ebp */
    ebp = esp; /* 0x110136D1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x110136D3: push ecx */
    PUSH32(esp, ecx); /* 0x110136D4: push ecx */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x110136D5: fld qword ptr [ebp + 8] */
    _st[0] += *(double*)ADDR(0x11001428); /* 0x110136D8: fadd qword ptr [0x11001428] */
    PUSH32(esp, ecx); /* 0x110136DE: push ecx */
    PUSH32(esp, ecx); /* 0x110136DF: push ecx */
    *(double*)ADDR(ebp + (-0x8)) = _st[0]; /* 0x110136E0: fst qword ptr [ebp - 8] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x110136E3: fstp qword ptr [esp] */
    RECOMP_CALL(sub_1103B12C); /* 0x110136E6: call 0x1103b12c */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x110136EB: fld qword ptr [ebp + 8] */
    eax = 0x110013B0u; /* 0x110136EE: mov eax, 0x110013b0 */
    fp_push(*(double*)ADDR(0x11001198)); /* 0x110136F3: fld qword ptr [0x11001198] */
    _st[0] += _st[1]; /* 0x110136F9: fadd st(1) */
    ecx = POP32_VAL(esp); /* 0x110136FB: pop ecx */
    ecx = POP32_VAL(esp); /* 0x110136FC: pop ecx */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x110136FD: fmulp st(2) */
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x110136FF: fld qword ptr [ebp - 8] */
    { double _v = fp_pop(); _st[1] = _v - _st[1]; } /* 0x11013702: fsubrp st(2) */
    fp_xch(1); /* 0x11013704: fxch st(1) */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x11013706: fstp qword ptr [ebp - 8] */
    fp_push(*(double*)ADDR(0x11001410)); /* 0x11013709: fld qword ptr [0x11001410] */
    fp_push(_st[1]); /* 0x1101370F: fld st(1) */
    fp_push(1.0); /* 0x11013711: fld1  */
    _st[1] += _st[0]; /* 0x11013713: fadd st(1), st(0) */
L_11013715:
    fp_push(*(double*)ADDR(eax)); /* 0x11013715: fld qword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x11013717: add eax, 8 */
    _flag_k = FK_ADD;
    _st[0] /= _st[2]; /* 0x1101371A: fdiv st(2) */
    { double _v = fp_pop(); _st[2] += _v; } /* 0x1101371C: faddp st(3) */
    _st[1] += _st[0]; /* 0x1101371E: fadd st(1), st(0) */
    /* cmp eax, 0x110013E0u */ /* 0x11013720: cmp eax, 0x110013e0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x110013E0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_11013715; /* 0x11013725: jl 0x11013715 */
L_11013727:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x11013727: fstp st(1) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x11013729: fstp st(0) */
    _st[0] *= *(double*)ADDR(0x11001418); /* 0x1101372B: fmul qword ptr [0x11001418] */
    PUSH32(esp, ecx); /* 0x11013731: push ecx */
    PUSH32(esp, ecx); /* 0x11013732: push ecx */
    { double _v = fp_pop(); _st[0] = _st[0] == 0.0 ? _v : _v / _st[0]; } /* 0x11013733: fdivrp st(1) */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x11013735: fstp qword ptr [esp] */
    RECOMP_CALL(sub_1103B12C); /* 0x11013738: call 0x1103b12c */
    RECOMP_FLAGS_IN();
    _st[0] -= *(double*)ADDR(ebp + (-0x8)); /* 0x1101373D: fsub qword ptr [ebp - 8] */
    ecx = POP32_VAL(esp); /* 0x11013740: pop ecx */
    ecx = POP32_VAL(esp); /* 0x11013741: pop ecx */
    esp = ebp; /* 0x11013742: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x11013744: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11013745: ret  */
    RECOMP_REGS_OUT();
}

void sub_11013746(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11013746u);

L_11013746:
    PUSH32(esp, ebp); /* 0x11013746: push ebp */
    ebp = esp; /* 0x11013747: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x11013749: push ecx */
    PUSH32(esp, ecx); /* 0x1101374A: push ecx */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x1101374B: fld qword ptr [ebp + 8] */
    _st[0] += *(double*)ADDR(0x11001428); /* 0x1101374E: fadd qword ptr [0x11001428] */
    PUSH32(esp, ecx); /* 0x11013754: push ecx */
    PUSH32(esp, ecx); /* 0x11013755: push ecx */
    *(double*)ADDR(ebp + (-0x8)) = _st[0]; /* 0x11013756: fst qword ptr [ebp - 8] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x11013759: fstp qword ptr [esp] */
    RECOMP_CALL(sub_1103B12C); /* 0x1101375C: call 0x1103b12c */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x11013761: fld qword ptr [ebp + 8] */
    eax = 0x110013E0u; /* 0x11013764: mov eax, 0x110013e0 */
    fp_push(*(double*)ADDR(0x11001198)); /* 0x11013769: fld qword ptr [0x11001198] */
    _st[0] += _st[1]; /* 0x1101376F: fadd st(1) */
    ecx = POP32_VAL(esp); /* 0x11013771: pop ecx */
    ecx = POP32_VAL(esp); /* 0x11013772: pop ecx */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x11013773: fmulp st(2) */
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x11013775: fld qword ptr [ebp - 8] */
    { double _v = fp_pop(); _st[1] = _v - _st[1]; } /* 0x11013778: fsubrp st(2) */
    fp_xch(1); /* 0x1101377A: fxch st(1) */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x1101377C: fstp qword ptr [ebp - 8] */
    fp_push(*(double*)ADDR(0x11001410)); /* 0x1101377F: fld qword ptr [0x11001410] */
    fp_push(_st[1]); /* 0x11013785: fld st(1) */
    fp_push(1.0); /* 0x11013787: fld1  */
    _st[1] += _st[0]; /* 0x11013789: fadd st(1), st(0) */
L_1101378B:
    fp_push(*(double*)ADDR(eax)); /* 0x1101378B: fld qword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1101378D: add eax, 8 */
    _flag_k = FK_ADD;
    _st[0] /= _st[2]; /* 0x11013790: fdiv st(2) */
    { double _v = fp_pop(); _st[2] += _v; } /* 0x11013792: faddp st(3) */
    _st[1] += _st[0]; /* 0x11013794: fadd st(1), st(0) */
    /* cmp eax, 0x11001410u */ /* 0x11013796: cmp eax, 0x11001410 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x11001410u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1101378B; /* 0x1101379B: jl 0x1101378b */
L_1101379D:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1101379D: fstp st(1) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1101379F: fstp st(0) */
    _st[0] *= *(double*)ADDR(0x11001418); /* 0x110137A1: fmul qword ptr [0x11001418] */
    PUSH32(esp, ecx); /* 0x110137A7: push ecx */
    PUSH32(esp, ecx); /* 0x110137A8: push ecx */
    { double _v = fp_pop(); _st[0] = _st[0] == 0.0 ? _v : _v / _st[0]; } /* 0x110137A9: fdivrp st(1) */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x110137AB: fstp qword ptr [esp] */
    RECOMP_CALL(sub_1103B12C); /* 0x110137AE: call 0x1103b12c */
    RECOMP_FLAGS_IN();
    _st[0] -= *(double*)ADDR(ebp + (-0x8)); /* 0x110137B3: fsub qword ptr [ebp - 8] */
    ecx = POP32_VAL(esp); /* 0x110137B6: pop ecx */
    ecx = POP32_VAL(esp); /* 0x110137B7: pop ecx */
    esp = ebp; /* 0x110137B8: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x110137BA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110137BB: ret  */
    RECOMP_REGS_OUT();
}

void sub_110137BC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110137BCu);

L_110137BC:
    PUSH32(esp, ebp); /* 0x110137BC: push ebp */
    ebp = esp; /* 0x110137BD: mov ebp, esp */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x110137BF: fld dword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x110137C2: push ecx */
    PUSH32(esp, ecx); /* 0x110137C3: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x110137C4: fstp qword ptr [esp] */
    RECOMP_CALL(sub_1103B12C); /* 0x110137C7: call 0x1103b12c */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x110137CC: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x110137CF: fld dword ptr [ebp + 8] */
    ecx = POP32_VAL(esp); /* 0x110137D2: pop ecx */
    ecx = POP32_VAL(esp); /* 0x110137D3: pop ecx */
    ebp = POP32_VAL(esp); /* 0x110137D4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110137D5: ret  */
    RECOMP_REGS_OUT();
}

void sub_110137D6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110137D6u);

L_110137D6:
    PUSH32(esp, ebp); /* 0x110137D6: push ebp */
    ebp = esp; /* 0x110137D7: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x110137D9: push ecx */
    eax = ebp + (-0x4); /* 0x110137DA: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x110137DD: push eax */
    RECOMP_ICALL(MEM32(0x11069310)); /* 0x110137DE: call dword ptr [0x11069310] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110137E4: pop ecx */
    /* test eax, eax */ /* 0x110137E5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110137F0; /* 0x110137E7: jne 0x110137f0 */
L_110137E9:
    eax = MEM32(ebp + (-0x4)); /* 0x110137E9: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x110137EC: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x110137EE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110137EF: ret  */
L_110137F0:
    PUSH32(esp, 0x11001430u); /* 0x110137F0: push 0x11001430 */
    RECOMP_CALL(sub_11013A0C); /* 0x110137F5: call 0x11013a0c */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x110137FAu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_110137FB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110137FBu);

L_110137FB:
    PUSH32(esp, ebp); /* 0x110137FB: push ebp */
    ebp = esp; /* 0x110137FC: mov ebp, esp */
    PUSH32(esp, esi); /* 0x110137FE: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x110137FF: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x11013802: mov esi, ecx */
    RECOMP_ICALL(MEM32(0x110692E4)); /* 0x11013804: call dword ptr [0x110692e4] */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x110014ACu; /* 0x1101380A: mov dword ptr [esi], 0x110014ac */
    eax = esi; /* 0x11013810: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x11013812: pop esi */
    ebp = POP32_VAL(esp); /* 0x11013813: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11013814: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11013858(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11013858u);

L_11013858:
    PUSH32(esp, ebp); /* 0x11013858: push ebp */
    ebp = esp; /* 0x11013859: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1101385B: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1101385C: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1101385F: push edi */
    PUSH32(esp, esi); /* 0x11013860: push esi */
    edi = ecx; /* 0x11013861: mov edi, ecx */
    RECOMP_CALL(sub_110138C9); /* 0x11013863: call 0x110138c9 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11013868: pop ecx */
    MEM32(ebp + 0x8) = eax; /* 0x11013869: mov dword ptr [ebp + 8], eax */
    ecx = edi; /* 0x1101386C: mov ecx, edi */
    eax = ebp + 0x8; /* 0x1101386E: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x11013871: push eax */
    RECOMP_ICALL(MEM32(0x110692EC)); /* 0x11013872: call dword ptr [0x110692ec] */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0xC) = esi; /* 0x11013878: mov dword ptr [edi + 0xc], esi */
    eax = edi; /* 0x1101387B: mov eax, edi */
    MEM32(edi) = 0x110016DCu; /* 0x1101387D: mov dword ptr [edi], 0x110016dc */
    edi = POP32_VAL(esp); /* 0x11013883: pop edi */
    esi = POP32_VAL(esp); /* 0x11013884: pop esi */
    ebp = POP32_VAL(esp); /* 0x11013885: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11013886: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11013889(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11013889u);

L_11013889:
    PUSH32(esp, ebp); /* 0x11013889: push ebp */
    ebp = esp; /* 0x1101388A: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1101388C: mov eax, dword ptr [ebp + 8] */
    MEM32(ecx + 0x4) = eax; /* 0x1101388F: mov dword ptr [ecx + 4], eax */
    eax = ecx; /* 0x11013892: mov eax, ecx */
    MEM32(ecx) = 0x110016CCu; /* 0x11013894: mov dword ptr [ecx], 0x110016cc */
    ebp = POP32_VAL(esp); /* 0x1101389A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1101389B: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1101389E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101389Eu);

L_1101389E:
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) & 0; /* 0x1101389E: and dword ptr [ecx + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx) = 0x110016CCu; /* 0x110138A2: mov dword ptr [ecx], 0x110016cc */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110138A8: ret  */
    RECOMP_REGS_OUT();
}

void sub_110138A9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110138A9u);

L_110138A9:
    PUSH32(esp, ebp); /* 0x110138A9: push ebp */
    ebp = esp; /* 0x110138AA: mov ebp, esp */
    PUSH32(esp, esi); /* 0x110138AC: push esi */
    esi = ecx; /* 0x110138AD: mov esi, ecx */
    RECOMP_ICALL(MEM32(0x110692E0)); /* 0x110138AF: call dword ptr [0x110692e0] */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x110138B5: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_110138C2; /* 0x110138B9: je 0x110138c2 */
L_110138BB:
    PUSH32(esp, esi); /* 0x110138BB: push esi */
    RECOMP_CALL(sub_1103B126); /* 0x110138BC: call 0x1103b126 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110138C1: pop ecx */
L_110138C2:
    eax = esi; /* 0x110138C2: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x110138C4: pop esi */
    ebp = POP32_VAL(esp); /* 0x110138C5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x110138C6: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_110138C9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110138C9u);

L_110138C9:
    PUSH32(esp, ebp); /* 0x110138C9: push ebp */
    ebp = esp; /* 0x110138CA: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x110138CC: mov eax, dword ptr [ebp + 8] */
    /* cmp eax, 0xEu */ /* 0x110138CF: cmp eax, 0xe */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_11013944; /* 0x110138D2: ja 0x11013944 */
L_110138D4:
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x1101394D)); goto _ljump; }
L_110138DB:
    eax = 0x110016E8u; /* 0x110138DB: mov eax, 0x110016e8 */
    ebp = POP32_VAL(esp); /* 0x110138E0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110138E1: ret  */
L_110138E2:
    eax = 0x11001740u; /* 0x110138E2: mov eax, 0x11001740 */
    ebp = POP32_VAL(esp); /* 0x110138E7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110138E8: ret  */
L_110138E9:
    eax = 0x11001798u; /* 0x110138E9: mov eax, 0x11001798 */
    ebp = POP32_VAL(esp); /* 0x110138EE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110138EF: ret  */
L_110138F0:
    eax = 0x11001800u; /* 0x110138F0: mov eax, 0x11001800 */
    ebp = POP32_VAL(esp); /* 0x110138F5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110138F6: ret  */
L_110138F7:
    eax = 0x11001850u; /* 0x110138F7: mov eax, 0x11001850 */
    ebp = POP32_VAL(esp); /* 0x110138FC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110138FD: ret  */
L_110138FE:
    eax = 0x11001898u; /* 0x110138FE: mov eax, 0x11001898 */
    ebp = POP32_VAL(esp); /* 0x11013903: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11013904: ret  */
L_11013905:
    eax = 0x110018E0u; /* 0x11013905: mov eax, 0x110018e0 */
    ebp = POP32_VAL(esp); /* 0x1101390A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101390B: ret  */
L_1101390C:
    eax = 0x11001928u; /* 0x1101390C: mov eax, 0x11001928 */
    ebp = POP32_VAL(esp); /* 0x11013911: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11013912: ret  */
L_11013913:
    eax = 0x11001988u; /* 0x11013913: mov eax, 0x11001988 */
    ebp = POP32_VAL(esp); /* 0x11013918: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11013919: ret  */
L_1101391A:
    eax = 0x110019F8u; /* 0x1101391A: mov eax, 0x110019f8 */
    ebp = POP32_VAL(esp); /* 0x1101391F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11013920: ret  */
L_11013921:
    eax = 0x11001A68u; /* 0x11013921: mov eax, 0x11001a68 */
    ebp = POP32_VAL(esp); /* 0x11013926: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11013927: ret  */
L_11013928:
    eax = 0x11001AC8u; /* 0x11013928: mov eax, 0x11001ac8 */
    ebp = POP32_VAL(esp); /* 0x1101392D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101392E: ret  */
L_1101392F:
    eax = 0x11001B48u; /* 0x1101392F: mov eax, 0x11001b48 */
    ebp = POP32_VAL(esp); /* 0x11013934: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11013935: ret  */
L_11013936:
    eax = 0x11001BDCu; /* 0x11013936: mov eax, 0x11001bdc */
    ebp = POP32_VAL(esp); /* 0x1101393B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101393C: ret  */
L_1101393D:
    eax = 0x11001BF8u; /* 0x1101393D: mov eax, 0x11001bf8 */
    ebp = POP32_VAL(esp); /* 0x11013942: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11013943: ret  */
L_11013944:
    eax = 0x11001C14u; /* 0x11013944: mov eax, 0x11001c14 */
    ebp = POP32_VAL(esp); /* 0x11013949: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101394A: ret  */
  _ljump:
    switch (_itail_tgt) {
      case 0x110138DBu: goto L_110138DB;
      case 0x110138E2u: goto L_110138E2;
      case 0x110138E9u: goto L_110138E9;
      case 0x110138F0u: goto L_110138F0;
      case 0x110138F7u: goto L_110138F7;
      case 0x110138FEu: goto L_110138FE;
      case 0x11013905u: goto L_11013905;
      case 0x1101390Cu: goto L_1101390C;
      case 0x11013913u: goto L_11013913;
      case 0x1101391Au: goto L_1101391A;
      case 0x11013921u: goto L_11013921;
      case 0x11013928u: goto L_11013928;
      case 0x1101392Fu: goto L_1101392F;
      case 0x11013936u: goto L_11013936;
      case 0x1101393Du: goto L_1101393D;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_11013989(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11013989u);

L_11013989:
    PUSH32(esp, ebp); /* 0x11013989: push ebp */
    ebp = esp; /* 0x1101398A: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1101398C: sub esp, 0xc */
    _flag_k = FK_CMP;
    ecx = ebp + (-0xC); /* 0x1101398F: lea ecx, [ebp - 0xc] */
    RECOMP_ICALL(MEM32(0x110692F0)); /* 0x11013992: call dword ptr [0x110692f0] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x11040D38u); /* 0x11013998: push 0x11040d38 */
    eax = ebp + (-0xC); /* 0x1101399D: lea eax, [ebp - 0xc] */
    MEM32(ebp + (-0xC)) = 0x110014ACu; /* 0x110139A0: mov dword ptr [ebp - 0xc], 0x110014ac */
    PUSH32(esp, eax); /* 0x110139A7: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x110139A8: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x110139ADu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_110139AE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110139AEu);

L_110139AE:
    PUSH32(esp, ebp); /* 0x110139AE: push ebp */
    ebp = esp; /* 0x110139AF: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x110139B1: sub esp, 0xc */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x110139B4: mov eax, dword ptr [ebp + 8] */
    ecx = ebp + (-0xC); /* 0x110139B7: lea ecx, [ebp - 0xc] */
    MEM32(ebp + 0x8) = eax; /* 0x110139BA: mov dword ptr [ebp + 8], eax */
    eax = ebp + 0x8; /* 0x110139BD: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x110139C0: push eax */
    RECOMP_ICALL(MEM32(0x110692EC)); /* 0x110139C1: call dword ptr [0x110692ec] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x11045568u); /* 0x110139C7: push 0x11045568 */
    eax = ebp + (-0xC); /* 0x110139CC: lea eax, [ebp - 0xc] */
    MEM32(ebp + (-0xC)) = 0x11001470u; /* 0x110139CF: mov dword ptr [ebp - 0xc], 0x11001470 */
    PUSH32(esp, eax); /* 0x110139D6: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x110139D7: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x110139DCu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_110139DD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110139DDu);

L_110139DD:
    PUSH32(esp, ebp); /* 0x110139DD: push ebp */
    ebp = esp; /* 0x110139DE: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x110139E0: sub esp, 0xc */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x110139E3: mov eax, dword ptr [ebp + 8] */
    ecx = ebp + (-0xC); /* 0x110139E6: lea ecx, [ebp - 0xc] */
    MEM32(ebp + 0x8) = eax; /* 0x110139E9: mov dword ptr [ebp + 8], eax */
    eax = ebp + 0x8; /* 0x110139EC: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x110139EF: push eax */
    RECOMP_ICALL(MEM32(0x110692EC)); /* 0x110139F0: call dword ptr [0x110692ec] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x11045744u); /* 0x110139F6: push 0x11045744 */
    eax = ebp + (-0xC); /* 0x110139FB: lea eax, [ebp - 0xc] */
    MEM32(ebp + (-0xC)) = 0x1100147Cu; /* 0x110139FE: mov dword ptr [ebp - 0xc], 0x1100147c */
    PUSH32(esp, eax); /* 0x11013A05: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x11013A06: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x11013A0Bu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11013A0C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11013A0Cu);

L_11013A0C:
    PUSH32(esp, ebp); /* 0x11013A0C: push ebp */
    ebp = esp; /* 0x11013A0D: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x11013A0F: sub esp, 0xc */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x11013A12: mov eax, dword ptr [ebp + 8] */
    ecx = ebp + (-0xC); /* 0x11013A15: lea ecx, [ebp - 0xc] */
    MEM32(ebp + 0x8) = eax; /* 0x11013A18: mov dword ptr [ebp + 8], eax */
    eax = ebp + 0x8; /* 0x11013A1B: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x11013A1E: push eax */
    RECOMP_ICALL(MEM32(0x110692EC)); /* 0x11013A1F: call dword ptr [0x110692ec] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x11045734u); /* 0x11013A25: push 0x11045734 */
    eax = ebp + (-0xC); /* 0x11013A2A: lea eax, [ebp - 0xc] */
    MEM32(ebp + (-0xC)) = 0x11001488u; /* 0x11013A2D: mov dword ptr [ebp - 0xc], 0x11001488 */
    PUSH32(esp, eax); /* 0x11013A34: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x11013A35: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x11013A3Au, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11013A3B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11013A3Bu);

L_11013A3B:
    PUSH32(esp, ebp); /* 0x11013A3B: push ebp */
    ebp = esp; /* 0x11013A3C: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x11013A3E: sub esp, 0xc */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x11013A41: mov eax, dword ptr [ebp + 8] */
    ecx = ebp + (-0xC); /* 0x11013A44: lea ecx, [ebp - 0xc] */
    MEM32(ebp + 0x8) = eax; /* 0x11013A47: mov dword ptr [ebp + 8], eax */
    eax = ebp + 0x8; /* 0x11013A4A: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x11013A4D: push eax */
    RECOMP_ICALL(MEM32(0x110692EC)); /* 0x11013A4E: call dword ptr [0x110692ec] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x11040CFCu); /* 0x11013A54: push 0x11040cfc */
    eax = ebp + (-0xC); /* 0x11013A59: lea eax, [ebp - 0xc] */
    MEM32(ebp + (-0xC)) = 0x110014A0u; /* 0x11013A5C: mov dword ptr [ebp - 0xc], 0x110014a0 */
    PUSH32(esp, eax); /* 0x11013A63: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x11013A64: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x11013A69u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11013A6A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11013A6Au);

L_11013A6A:
    PUSH32(esp, ebp); /* 0x11013A6A: push ebp */
    ebp = esp; /* 0x11013A6B: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x11013A6D: sub esp, 0x10 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x10); /* 0x11013A70: lea ecx, [ebp - 0x10] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11013A73: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_11013858); /* 0x11013A76: call 0x11013858 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x11040D70u); /* 0x11013A7B: push 0x11040d70 */
    eax = ebp + (-0x10); /* 0x11013A80: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x11013A83: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x11013A84: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x11013A89u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11013A8A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11013A8Au);

L_11013A8A:
    PUSH32(esp, ebp); /* 0x11013A8A: push ebp */
    ebp = esp; /* 0x11013A8B: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x11013A8D: sub esp, 0xc */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x11013A90: mov eax, dword ptr [ebp + 8] */
    ecx = ebp + (-0xC); /* 0x11013A93: lea ecx, [ebp - 0xc] */
    MEM32(ebp + 0x8) = eax; /* 0x11013A96: mov dword ptr [ebp + 8], eax */
    eax = ebp + 0x8; /* 0x11013A99: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x11013A9C: push eax */
    RECOMP_ICALL(MEM32(0x110692EC)); /* 0x11013A9D: call dword ptr [0x110692ec] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x11045658u); /* 0x11013AA3: push 0x11045658 */
    eax = ebp + (-0xC); /* 0x11013AA8: lea eax, [ebp - 0xc] */
    MEM32(ebp + (-0xC)) = 0x11001494u; /* 0x11013AAB: mov dword ptr [ebp - 0xc], 0x11001494 */
    PUSH32(esp, eax); /* 0x11013AB2: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x11013AB3: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x11013AB8u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11013AB9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11013AB9u);

L_11013AB9:
    eax = 0x110014B4u; /* 0x11013AB9: mov eax, 0x110014b4 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11013ABE: ret  */
    RECOMP_REGS_OUT();
}

void sub_11013ABF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11013ABFu);

L_11013ABF:
    PUSH32(esp, ebp); /* 0x11013ABF: push ebp */
    ebp = esp; /* 0x11013AC0: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11013AC2: push dword ptr [ebp + 0xc] */
    RECOMP_ICALL(MEM32(0x11069098)); /* 0x11013AC5: call dword ptr [0x11069098] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11013ACB: pop ecx */
    ecx = eax; /* 0x11013ACC: mov ecx, eax */
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x11013ACE: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11013AD7; /* 0x11013AD1: jne 0x11013ad7 */
L_11013AD3:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x11013AD3: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebp = POP32_VAL(esp); /* 0x11013AD5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11013AD6: ret  */
L_11013AD7:
    eax = MEM32(ebp + 0x8); /* 0x11013AD7: mov eax, dword ptr [ebp + 8] */
    MEM8(eax) = (uint8_t)(LO8(ecx)); /* 0x11013ADA: mov byte ptr [eax], cl */
    SET_LO8(eax, 1); /* 0x11013ADC: mov al, 1 */
    ebp = POP32_VAL(esp); /* 0x11013ADE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11013ADF: ret  */
    RECOMP_REGS_OUT();
}

void sub_11013AE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11013AE0u);

L_11013AE0:
    PUSH32(esp, ebp); /* 0x11013AE0: push ebp */
    ebp = esp; /* 0x11013AE1: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x11013AE3: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11013AE6: push dword ptr [ebp + 0xc] */
    eax = (int32_t)(int8_t)LO8(eax); /* 0x11013AE9: movsx eax, al */
    PUSH32(esp, eax); /* 0x11013AEC: push eax */
    RECOMP_ICALL(MEM32(0x11069318)); /* 0x11013AED: call dword ptr [0x11069318] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11013AF3: pop ecx */
    ecx = POP32_VAL(esp); /* 0x11013AF4: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x11013AF5: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x11013AF7: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x11013AFA: setne al */
    ebp = POP32_VAL(esp); /* 0x11013AFD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11013AFE: ret  */
    RECOMP_REGS_OUT();
}

void sub_11013AFF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11013AFFu);

L_11013AFF:
    PUSH32(esp, ebp); /* 0x11013AFF: push ebp */
    ebp = esp; /* 0x11013B00: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x11013B02: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11013B05: push dword ptr [ebp + 0xc] */
    eax = (uint32_t)MEM8(eax); /* 0x11013B08: movzx eax, byte ptr [eax] */
    PUSH32(esp, eax); /* 0x11013B0B: push eax */
    RECOMP_ICALL(MEM32(0x110690B0)); /* 0x11013B0C: call dword ptr [0x110690b0] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11013B12: pop ecx */
    ecx = POP32_VAL(esp); /* 0x11013B13: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x11013B14: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x11013B16: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x11013B19: setne al */
    ebp = POP32_VAL(esp); /* 0x11013B1C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11013B1D: ret  */
    RECOMP_REGS_OUT();
}

void sub_11013B1E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11013B1Eu);

L_11013B1E:
    PUSH32(esp, 0x14u); /* 0x11013B1E: push 0x14 */
    eax = 0x1103EFF4u; /* 0x11013B20: mov eax, 0x1103eff4 */
    RECOMP_CALL(sub_1103B372); /* 0x11013B25: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x11013B2A: push 0 */
    ecx = ebp + (-0x14); /* 0x11013B2C: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1102FE81); /* 0x11013B2F: call 0x1102fe81 */
    RECOMP_FLAGS_IN();
    edi = MEM32(0x11065FC8); /* 0x11013B34: mov edi, dword ptr [0x11065fc8] */
    ecx = 0x11065FC0u; /* 0x11013B3A: mov ecx, 0x11065fc0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11013B3F: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = edi; /* 0x11013B43: mov dword ptr [ebp - 0x10], edi */
    RECOMP_CALL(sub_1100E2D9); /* 0x11013B46: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x11013B4B: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x11013B4E: push eax */
    RECOMP_CALL(sub_1100E492); /* 0x11013B4F: call 0x1100e492 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x11013B54: mov esi, eax */
    /* test esi, esi */ /* 0x11013B56: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11013BA8; /* 0x11013B58: jne 0x11013ba8 */
L_11013B5A:
    /* test edi, edi */ /* 0x11013B5A: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11013B62; /* 0x11013B5C: je 0x11013b62 */
L_11013B5E:
    esi = edi; /* 0x11013B5E: mov esi, edi */
    goto L_11013BA8; /* 0x11013B60: jmp 0x11013ba8 */
L_11013B62:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11013B62: push dword ptr [ebp + 8] */
    eax = ebp + (-0x10); /* 0x11013B65: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x11013B68: push eax */
    RECOMP_CALL(sub_11013E94); /* 0x11013B69: call 0x11013e94 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11013B6E: pop ecx */
    ecx = POP32_VAL(esp); /* 0x11013B6F: pop ecx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x11013B70: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11013B91; /* 0x11013B73: jne 0x11013b91 */
L_11013B75:
    PUSH32(esp, 0x11004970u); /* 0x11013B75: push 0x11004970 */
    ecx = ebp + (-0x20); /* 0x11013B7A: lea ecx, [ebp - 0x20] */
    RECOMP_ICALL(MEM32(0x110692D8)); /* 0x11013B7D: call dword ptr [0x110692d8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1104562Cu); /* 0x11013B83: push 0x1104562c */
    eax = ebp + (-0x20); /* 0x11013B88: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x11013B8B: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x11013B8C: call 0x1103b33a */
    RECOMP_FLAGS_IN();
L_11013B91:
    esi = MEM32(ebp + (-0x10)); /* 0x11013B91: mov esi, dword ptr [ebp - 0x10] */
    ecx = esi; /* 0x11013B94: mov ecx, esi */
    MEM32(0x11065FC8) = esi; /* 0x11013B96: mov dword ptr [0x11065fc8], esi */
    eax = MEM32(esi); /* 0x11013B9C: mov eax, dword ptr [esi] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x11013B9E: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x11013BA1: push esi */
    RECOMP_CALL(sub_110303F3); /* 0x11013BA2: call 0x110303f3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11013BA7: pop ecx */
L_11013BA8:
    ecx = ebp + (-0x14); /* 0x11013BA8: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1102FEC6); /* 0x11013BAB: call 0x1102fec6 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x11013BB0: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11013BB2: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11013BB7: ret  */
    RECOMP_REGS_OUT();
}

void sub_11013BB8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11013BB8u);

L_11013BB8:
    MEM32(ecx) = 0x11001C24u; /* 0x11013BB8: mov dword ptr [ecx], 0x11001c24 */
    eax = ecx; /* 0x11013BBE: mov eax, ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11013BC0: ret  */
    RECOMP_REGS_OUT();
}

void sub_11013BC1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11013BC1u);

L_11013BC1:
    PUSH32(esp, 8); /* 0x11013BC1: push 8 */
    eax = 0x1103D251u; /* 0x11013BC3: mov eax, 0x1103d251 */
    RECOMP_CALL(sub_1103B372); /* 0x11013BC8: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x11013BCD: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x11013BCF: mov dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0; /* 0x11013BD2: and dword ptr [ebp - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x11013BD6: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11013BF4; /* 0x11013BDA: je 0x11013bf4 */
L_11013BDC:
    MEM32(esi) = 0x11001C70u; /* 0x11013BDC: mov dword ptr [esi], 0x11001c70 */
    MEM32(esi + 0x8) = 0x11001C24u; /* 0x11013BE2: mov dword ptr [esi + 8], 0x11001c24 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11013BE9: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = 1; /* 0x11013BED: mov dword ptr [ebp - 0x10], 1 */
L_11013BF4:
    eax = MEM32(esi); /* 0x11013BF4: mov eax, dword ptr [esi] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11013BF6: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11013BF9: push dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x4); /* 0x11013BFC: mov eax, dword ptr [eax + 4] */
    MEM32(esi + eax) = 0x11001C6Cu; /* 0x11013BFF: mov dword ptr [esi + eax], 0x11001c6c */
    eax = MEM32(esi); /* 0x11013C06: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x11013C08: mov ecx, dword ptr [eax + 4] */
    eax = ecx + (-0x8); /* 0x11013C0B: lea eax, [ecx - 8] */
    MEM32(ecx + esi + (-0x4)) = eax; /* 0x11013C0E: mov dword ptr [ecx + esi - 4], eax */
    eax = MEM32(esi); /* 0x11013C12: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x11013C14: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11013C17: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110141A4); /* 0x11013C19: call 0x110141a4 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x11013C1E: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11013C20: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x11013C25: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_11013C28(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11013C28u);

L_11013C28:
    PUSH32(esp, esi); /* 0x11013C28: push esi */
    PUSH32(esp, edi); /* 0x11013C29: push edi */
    edi = ecx; /* 0x11013C2A: mov edi, ecx */
    PUSH32(esp, 4); /* 0x11013C2C: push 4 */
    MEM32(edi) = 0x11001C2Cu; /* 0x11013C2E: mov dword ptr [edi], 0x11001c2c */
    RECOMP_CALL(sub_1103B120); /* 0x11013C34: call 0x1103b120 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x11013C39: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x11013C3B: pop ecx */
    /* test esi, esi */ /* 0x11013C3C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11013C4C; /* 0x11013C3E: je 0x11013c4c */
L_11013C40:
    PUSH32(esp, 1); /* 0x11013C40: push 1 */
    RECOMP_CALL(sub_11030421); /* 0x11013C42: call 0x11030421 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11013C47: pop ecx */
    MEM32(esi) = eax; /* 0x11013C48: mov dword ptr [esi], eax */
    goto L_11013C4E; /* 0x11013C4A: jmp 0x11013c4e */
L_11013C4C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x11013C4C: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_11013C4E:
    ecx = edi; /* 0x11013C4E: mov ecx, edi */
    MEM32(edi + 0x34) = esi; /* 0x11013C50: mov dword ptr [edi + 0x34], esi */
    RECOMP_CALL(sub_1102185F); /* 0x11013C53: call 0x1102185f */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x11013C58: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x11013C5A: pop edi */
    esi = POP32_VAL(esp); /* 0x11013C5B: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11013C5C: ret  */
    RECOMP_REGS_OUT();
}

void sub_11013C5D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11013C5Du);

L_11013C5D:
    PUSH32(esp, ebp); /* 0x11013C5D: push ebp */
    ebp = esp; /* 0x11013C5E: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x11013C60: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ecx + 0x4) = eax; /* 0x11013C63: mov dword ptr [ecx + 4], eax */
    eax = ecx; /* 0x11013C66: mov eax, ecx */
    MEM32(ecx) = 0x11001CBCu; /* 0x11013C68: mov dword ptr [ecx], 0x11001cbc */
    ebp = POP32_VAL(esp); /* 0x11013C6E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x11013C6F: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_11013CA2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11013CA2u);

L_11013CA2:
    PUSH32(esp, esi); /* 0x11013CA2: push esi */
    esi = ecx; /* 0x11013CA3: mov esi, ecx */
    /* cmp MEM32(esi + 0x50), 0 */ /* 0x11013CA5: cmp dword ptr [esi + 0x50], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x50)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi) = 0x11001C7Cu; /* 0x11013CA9: mov dword ptr [esi], 0x11001c7c */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11013CB6; /* 0x11013CAF: je 0x11013cb6 */
L_11013CB1:
    RECOMP_CALL(sub_11013FBC); /* 0x11013CB1: call 0x11013fbc */
    RECOMP_FLAGS_IN();
L_11013CB6:
    /* cmp MEM8(esi + 0x4C), 0 */ /* 0x11013CB6: cmp byte ptr [esi + 0x4c], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x4C)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11013CC3; /* 0x11013CBA: je 0x11013cc3 */
L_11013CBC:
    ecx = esi; /* 0x11013CBC: mov ecx, esi */
    RECOMP_CALL(sub_110140C4); /* 0x11013CBE: call 0x110140c4 */
    RECOMP_FLAGS_IN();
L_11013CC3:
    ecx = esi; /* 0x11013CC3: mov ecx, esi */
    esi = POP32_VAL(esp); /* 0x11013CC5: pop esi */
    goto L_11013CE7; /* 0x11013CC6: jmp 0x11013ce7 */
L_11013CE7:
    PUSH32(esp, esi); /* 0x11013CE7: push esi */
    esi = MEM32(ecx + 0x34); /* 0x11013CE8: mov esi, dword ptr [ecx + 0x34] */
    MEM32(ecx) = 0x11001C2Cu; /* 0x11013CEB: mov dword ptr [ecx], 0x11001c2c */
    /* test esi, esi */ /* 0x11013CF1: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11013D03; /* 0x11013CF3: je 0x11013d03 */
L_11013CF5:
    ecx = esi; /* 0x11013CF5: mov ecx, esi */
    RECOMP_CALL(sub_1100E431); /* 0x11013CF7: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x11013CFC: push esi */
    RECOMP_CALL(sub_1103B126); /* 0x11013CFD: call 0x1103b126 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11013D02: pop ecx */
L_11013D03:
    esi = POP32_VAL(esp); /* 0x11013D03: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11013D04: ret  */
    RECOMP_REGS_OUT();
}

void sub_11013CCB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11013CCBu);

L_11013CCB:
    eax = MEM32(ecx + (-0x8)); /* 0x11013CCB: mov eax, dword ptr [ecx - 8] */
    eax = MEM32(eax + 0x4); /* 0x11013CCE: mov eax, dword ptr [eax + 4] */
    MEM32(eax + ecx + (-0x8)) = 0x11001C6Cu; /* 0x11013CD1: mov dword ptr [eax + ecx - 8], 0x11001c6c */
    eax = MEM32(ecx + (-0x8)); /* 0x11013CD9: mov eax, dword ptr [ecx - 8] */
    edx = MEM32(eax + 0x4); /* 0x11013CDC: mov edx, dword ptr [eax + 4] */
    eax = edx + (-0x8); /* 0x11013CDF: lea eax, [edx - 8] */
    MEM32(edx + ecx + (-0xC)) = eax; /* 0x11013CE2: mov dword ptr [edx + ecx - 0xc], eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11013CE6: ret  */
    RECOMP_REGS_OUT();
}

void sub_11013CE7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11013CE7u);

L_11013CE7:
    PUSH32(esp, esi); /* 0x11013CE7: push esi */
    esi = MEM32(ecx + 0x34); /* 0x11013CE8: mov esi, dword ptr [ecx + 0x34] */
    MEM32(ecx) = 0x11001C2Cu; /* 0x11013CEB: mov dword ptr [ecx], 0x11001c2c */
    /* test esi, esi */ /* 0x11013CF1: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11013D03; /* 0x11013CF3: je 0x11013d03 */
L_11013CF5:
    ecx = esi; /* 0x11013CF5: mov ecx, esi */
    RECOMP_CALL(sub_1100E431); /* 0x11013CF7: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x11013CFC: push esi */
    RECOMP_CALL(sub_1103B126); /* 0x11013CFD: call 0x1103b126 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11013D02: pop ecx */
L_11013D03:
    esi = POP32_VAL(esp); /* 0x11013D03: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11013D04: ret  */
    RECOMP_REGS_OUT();
}

void sub_11013D05(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11013D05u);

L_11013D05:
    edx = ecx + 0x8; /* 0x11013D05: lea edx, [ecx + 8] */
    eax = MEM32(edx + (-0x8)); /* 0x11013D08: mov eax, dword ptr [edx - 8] */
    PUSH32(esp, edx); /* 0x11013D0B: push edx */
    eax = MEM32(eax + 0x4); /* 0x11013D0C: mov eax, dword ptr [eax + 4] */
    MEM32(eax + edx + (-0x8)) = 0x11001C6Cu; /* 0x11013D0F: mov dword ptr [eax + edx - 8], 0x11001c6c */
    eax = MEM32(edx + (-0x8)); /* 0x11013D17: mov eax, dword ptr [edx - 8] */
    ecx = MEM32(eax + 0x4); /* 0x11013D1A: mov ecx, dword ptr [eax + 4] */
    eax = ecx + (-0x8); /* 0x11013D1D: lea eax, [ecx - 8] */
    MEM32(ecx + edx + (-0xC)) = eax; /* 0x11013D20: mov dword ptr [ecx + edx - 0xc], eax */
    MEM32(edx) = 0x110016C4u; /* 0x11013D24: mov dword ptr [edx], 0x110016c4 */
    RECOMP_CALL(sub_110306AB); /* 0x11013D2A: call 0x110306ab */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11013D2F: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11013D30: ret  */
    RECOMP_REGS_OUT();
}

void sub_11013D31(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11013D31u);

L_11013D31:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ecx + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ecx + (-0x4)); /* 0x11013D31: sub ecx, dword ptr [ecx - 4] */
    _flag_k = FK_CMP;
    goto L_1101CA64; /* 0x11013D34: jmp 0x1101ca64 */
L_1101CA64:
    PUSH32(esp, ebp); /* 0x1101CA64: push ebp */
    ebp = esp; /* 0x1101CA65: mov ebp, esp */
    /* test MEM8(ebp + 0x8), 2 */ /* 0x1101CA67: test byte ptr [ebp + 8], 2 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, esi); /* 0x1101CA6B: push esi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101CA91; /* 0x1101CA6C: je 0x1101ca91 */
L_1101CA6E:
    PUSH32(esp, 0x11013D05u); /* 0x1101CA6E: push 0x11013d05 */
    esi = ecx + (-0xC); /* 0x1101CA73: lea esi, [ecx - 0xc] */
    PUSH32(esp, MEM32(esi)); /* 0x1101CA76: push dword ptr [esi] */
    eax = ecx + (-0x8); /* 0x1101CA78: lea eax, [ecx - 8] */
    PUSH32(esp, 0x50u); /* 0x1101CA7B: push 0x50 */
    PUSH32(esp, eax); /* 0x1101CA7D: push eax */
    RECOMP_CALL(sub_1103B132); /* 0x1101CA7E: call 0x1103b132 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1101CA83: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101CAA8; /* 0x1101CA87: je 0x1101caa8 */
L_1101CA89:
    PUSH32(esp, esi); /* 0x1101CA89: push esi */
    RECOMP_CALL(sub_1103B312); /* 0x1101CA8A: call 0x1103b312 */
    RECOMP_FLAGS_IN();
    goto L_1101CAA7; /* 0x1101CA8F: jmp 0x1101caa7 */
L_1101CA91:
    esi = ecx + (-0x8); /* 0x1101CA91: lea esi, [ecx - 8] */
    ecx = esi; /* 0x1101CA94: mov ecx, esi */
    RECOMP_CALL(sub_11013D05); /* 0x1101CA96: call 0x11013d05 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1101CA9B: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101CAA8; /* 0x1101CA9F: je 0x1101caa8 */
L_1101CAA1:
    PUSH32(esp, esi); /* 0x1101CAA1: push esi */
    RECOMP_CALL(sub_1103B126); /* 0x1101CAA2: call 0x1103b126 */
    RECOMP_FLAGS_IN();
L_1101CAA7:
    ecx = POP32_VAL(esp); /* 0x1101CAA7: pop ecx */
L_1101CAA8:
    eax = esi; /* 0x1101CAA8: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1101CAAA: pop esi */
    ebp = POP32_VAL(esp); /* 0x1101CAAB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1101CAAC: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11013D39(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11013D39u);

L_11013D39:
    PUSH32(esp, ebp); /* 0x11013D39: push ebp */
    ebp = esp; /* 0x11013D3A: mov ebp, esp */
    PUSH32(esp, esi); /* 0x11013D3C: push esi */
    esi = ecx; /* 0x11013D3D: mov esi, ecx */
    RECOMP_CALL(sub_11013CA2); /* 0x11013D3F: call 0x11013ca2 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x11013D44: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11013D51; /* 0x11013D48: je 0x11013d51 */
L_11013D4A:
    PUSH32(esp, esi); /* 0x11013D4A: push esi */
    RECOMP_CALL(sub_1103B126); /* 0x11013D4B: call 0x1103b126 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11013D50: pop ecx */
L_11013D51:
    eax = esi; /* 0x11013D51: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x11013D53: pop esi */
    ebp = POP32_VAL(esp); /* 0x11013D54: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11013D55: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11013D58(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11013D58u);

L_11013D58:
    PUSH32(esp, ebp); /* 0x11013D58: push ebp */
    ebp = esp; /* 0x11013D59: mov ebp, esp */
    /* cmp MEM32(ebp + 0xC), 1 */ /* 0x11013D5B: cmp dword ptr [ebp + 0xc], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = ecx; /* 0x11013D5F: mov edx, ecx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_11013D76; /* 0x11013D61: jne 0x11013d76 */
L_11013D63:
    /* cmp MEM32(edx + 0x14), 0x10u */ /* 0x11013D63: cmp dword ptr [edx + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(edx + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_11013D6B; /* 0x11013D67: jb 0x11013d6b */
L_11013D69:
    edx = MEM32(edx); /* 0x11013D69: mov edx, dword ptr [edx] */
L_11013D6B:
    eax = MEM32(ebp + 0x8); /* 0x11013D6B: mov eax, dword ptr [ebp + 8] */
    SET_LO8(ecx, MEM8(ebp + 0x10)); /* 0x11013D6E: mov cl, byte ptr [ebp + 0x10] */
    MEM8(edx + eax) = (uint8_t)(LO8(ecx)); /* 0x11013D71: mov byte ptr [edx + eax], cl */
    goto L_11013D96; /* 0x11013D74: jmp 0x11013d96 */
L_11013D76:
    /* cmp MEM32(edx + 0x14), 0x10u */ /* 0x11013D76: cmp dword ptr [edx + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(edx + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_11013D7E; /* 0x11013D7A: jb 0x11013d7e */
L_11013D7C:
    edx = MEM32(edx); /* 0x11013D7C: mov edx, dword ptr [edx] */
L_11013D7E:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11013D7E: push dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x10); /* 0x11013D81: mov eax, dword ptr [ebp + 0x10] */
    eax = (int32_t)(int8_t)LO8(eax); /* 0x11013D84: movsx eax, al */
    PUSH32(esp, eax); /* 0x11013D87: push eax */
    eax = MEM32(ebp + 0x8); /* 0x11013D88: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x11013D8B: add eax, edx */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x11013D8D: push eax */
    RECOMP_CALL(sub_1103B49A); /* 0x11013D8E: call 0x1103b49a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11013D93: add esp, 0xc */
    _flag_k = FK_ADD;
L_11013D96:
    ebp = POP32_VAL(esp); /* 0x11013D96: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x11013D97: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_11013D9A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11013D9Au);

L_11013D9A:
    PUSH32(esp, 0x20u); /* 0x11013D9A: push 0x20 */
    eax = 0x1103EE55u; /* 0x11013D9C: mov eax, 0x1103ee55 */
    RECOMP_CALL(sub_1103B3A5); /* 0x11013DA1: call 0x1103b3a5 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x11013DA6: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x11013DA8: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x40), ebx */ /* 0x11013DAA: cmp dword ptr [esi + 0x40], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x40)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11013E8C; /* 0x11013DAD: je 0x11013e8c */
L_11013DB3:
    /* cmp MEM8(esi + 0x45), LO8(ebx) */ /* 0x11013DB3: cmp byte ptr [esi + 0x45], bl */
    _flag_a = (uint32_t)(MEM8(esi + 0x45)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11013E8C; /* 0x11013DB6: je 0x11013e8c */
L_11013DBC:
    eax = MEM32(esi); /* 0x11013DBC: mov eax, dword ptr [esi] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x11013DBE: push -1 */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x11013DC0: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xFFFFFFFFu */ /* 0x11013DC3: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11013DCF; /* 0x11013DC6: jne 0x11013dcf */
L_11013DC8:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x11013DC8: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_11013E8E; /* 0x11013DCA: jmp 0x11013e8e */
L_11013DCF:
    PUSH32(esp, ebx); /* 0x11013DCF: push ebx */
    PUSH32(esp, 8); /* 0x11013DD0: push 8 */
    ecx = ebp + (-0x28); /* 0x11013DD2: lea ecx, [ebp - 0x28] */
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x11013DD5: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = ebx; /* 0x11013DDC: mov dword ptr [ebp - 0x18], ebx */
    MEM8(ebp + (-0x28)) = (uint8_t)(LO8(ebx)); /* 0x11013DDF: mov byte ptr [ebp - 0x28], bl */
    RECOMP_CALL(sub_11014076); /* 0x11013DE2: call 0x11014076 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = ebx; /* 0x11013DE7: mov dword ptr [ebp - 4], ebx */
L_11013DEA:
    edi = MEM32(ebp + (-0x28)); /* 0x11013DEA: mov edi, dword ptr [ebp - 0x28] */
    eax = MEM32(ebp + (-0x14)); /* 0x11013DED: mov eax, dword ptr [ebp - 0x14] */
L_11013DF0:
    ebx = edi; /* 0x11013DF0: mov ebx, edi */
    /* cmp eax, 0x10u */ /* 0x11013DF2: cmp eax, 0x10 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_11013DFC; /* 0x11013DF5: jae 0x11013dfc */
L_11013DF7:
    ebx = ebp + (-0x28); /* 0x11013DF7: lea ebx, [ebp - 0x28] */
    edi = ebx; /* 0x11013DFA: mov edi, ebx */
L_11013DFC:
    ecx = MEM32(esi + 0x40); /* 0x11013DFC: mov ecx, dword ptr [esi + 0x40] */
    eax = ebp + (-0x2C); /* 0x11013DFF: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x11013E02: push eax */
    eax = MEM32(ebp + (-0x18)); /* 0x11013E03: mov eax, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x11013E06: add eax, ebx */
    _flag_k = FK_ADD;
    edx = MEM32(ecx); /* 0x11013E08: mov edx, dword ptr [ecx] */
    PUSH32(esp, eax); /* 0x11013E0A: push eax */
    PUSH32(esp, edi); /* 0x11013E0B: push edi */
    eax = esi + 0x48; /* 0x11013E0C: lea eax, [esi + 0x48] */
    PUSH32(esp, eax); /* 0x11013E0F: push eax */
    RECOMP_ICALL(MEM32(edx + 0x20)); /* 0x11013E10: call dword ptr [edx + 0x20] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x11013E13: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_11013E23; /* 0x11013E16: je 0x11013e23 */
L_11013E18:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x11013E18: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_11013E27; /* 0x11013E19: je 0x11013e27 */
L_11013E1B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x11013E1B: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x11013E1C: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_11013E7A; /* 0x11013E1D: je 0x11013e7a */
L_11013E1F:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ebx, 0); /* 0x11013E1F: xor bl, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_11013E7C; /* 0x11013E21: jmp 0x11013e7c */
L_11013E23:
    MEM8(esi + 0x45) = (uint8_t)(0); /* 0x11013E23: mov byte ptr [esi + 0x45], 0 */
L_11013E27:
    eax = MEM32(ebp + (-0x14)); /* 0x11013E27: mov eax, dword ptr [ebp - 0x14] */
    edi = MEM32(ebp + (-0x28)); /* 0x11013E2A: mov edi, dword ptr [ebp - 0x28] */
    ecx = edi; /* 0x11013E2D: mov ecx, edi */
    /* cmp eax, 0x10u */ /* 0x11013E2F: cmp eax, 0x10 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_11013E37; /* 0x11013E32: jae 0x11013e37 */
L_11013E34:
    ecx = ebp + (-0x28); /* 0x11013E34: lea ecx, [ebp - 0x28] */
L_11013E37:
    ebx = MEM32(ebp + (-0x2C)); /* 0x11013E37: mov ebx, dword ptr [ebp - 0x2c] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - ecx; /* 0x11013E3A: sub ebx, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_11013E60; /* 0x11013E3C: je 0x11013e60 */
L_11013E3E:
    /* cmp eax, 0x10u */ /* 0x11013E3E: cmp eax, 0x10 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_11013E46; /* 0x11013E41: jae 0x11013e46 */
L_11013E43:
    edi = ebp + (-0x28); /* 0x11013E43: lea edi, [ebp - 0x28] */
L_11013E46:
    PUSH32(esp, MEM32(esi + 0x50)); /* 0x11013E46: push dword ptr [esi + 0x50] */
    PUSH32(esp, ebx); /* 0x11013E49: push ebx */
    PUSH32(esp, 1); /* 0x11013E4A: push 1 */
    PUSH32(esp, edi); /* 0x11013E4C: push edi */
    RECOMP_ICALL(MEM32(0x110690A8)); /* 0x11013E4D: call dword ptr [0x110690a8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11013E53: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* cmp ebx, eax */ /* 0x11013E56: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_11013E1F; /* 0x11013E58: jne 0x11013e1f */
L_11013E5A:
    eax = MEM32(ebp + (-0x14)); /* 0x11013E5A: mov eax, dword ptr [ebp - 0x14] */
    edi = MEM32(ebp + (-0x28)); /* 0x11013E5D: mov edi, dword ptr [ebp - 0x28] */
L_11013E60:
    /* cmp MEM8(esi + 0x45), 0 */ /* 0x11013E60: cmp byte ptr [esi + 0x45], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x45)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11013E7A; /* 0x11013E64: je 0x11013e7a */
L_11013E66:
    /* test ebx, ebx */ /* 0x11013E66: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11013DF0; /* 0x11013E68: jne 0x11013df0 */
L_11013E6A:
    PUSH32(esp, ebx); /* 0x11013E6A: push ebx */
    PUSH32(esp, 8); /* 0x11013E6B: push 8 */
    ecx = ebp + (-0x28); /* 0x11013E6D: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_11014015); /* 0x11013E70: call 0x11014015 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_11013DEA; /* 0x11013E75: jmp 0x11013dea */
L_11013E7A:
    SET_LO8(ebx, 1); /* 0x11013E7A: mov bl, 1 */
L_11013E7C:
    PUSH32(esp, 0); /* 0x11013E7C: push 0 */
    PUSH32(esp, 1); /* 0x11013E7E: push 1 */
    ecx = ebp + (-0x28); /* 0x11013E80: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_11010630); /* 0x11013E83: call 0x11010630 */
    RECOMP_FLAGS_IN();
    SET_LO8(eax, LO8(ebx)); /* 0x11013E88: mov al, bl */
    goto L_11013E8E; /* 0x11013E8A: jmp 0x11013e8e */
L_11013E8C:
    SET_LO8(eax, 1); /* 0x11013E8C: mov al, 1 */
L_11013E8E:
    RECOMP_CALL(sub_1103B354); /* 0x11013E8E: call 0x1103b354 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11013E93: ret  */
    RECOMP_REGS_OUT();
}

void sub_11013E94(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11013E94u);

L_11013E94:
    PUSH32(esp, 0x38u); /* 0x11013E94: push 0x38 */
    eax = 0x1103F019u; /* 0x11013E96: mov eax, 0x1103f019 */
    RECOMP_CALL(sub_1103B372); /* 0x11013E9B: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x11013EA0: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x11013EA3: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = ebx; /* 0x11013EA5: mov dword ptr [ebp - 0x10], ebx */
    /* test edi, edi */ /* 0x11013EA8: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11013EF3; /* 0x11013EAA: je 0x11013ef3 */
L_11013EAC:
    /* cmp MEM32(edi), ebx */ /* 0x11013EAC: cmp dword ptr [edi], ebx */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11013EF3; /* 0x11013EAE: jne 0x11013ef3 */
L_11013EB0:
    PUSH32(esp, 8); /* 0x11013EB0: push 8 */
    RECOMP_CALL(sub_1103B120); /* 0x11013EB2: call 0x1103b120 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x11013EB7: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x11013EB9: pop ecx */
    MEM32(ebp + 0x8) = esi; /* 0x11013EBA: mov dword ptr [ebp + 8], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(ebx);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & ebx; /* 0x11013EBD: and dword ptr [ebp - 4], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x11013EC0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11013EE2; /* 0x11013EC2: je 0x11013ee2 */
L_11013EC4:
    ecx = MEM32(ebp + 0xC); /* 0x11013EC4: mov ecx, dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1100E47B); /* 0x11013EC7: call 0x1100e47b */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x11013ECC: push eax */
    ecx = ebp + (-0x44); /* 0x11013ECD: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100DEDB); /* 0x11013ED0: call 0x1100dedb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x11013ED5: inc ebx */
    _flag_k = FK_INC;
    MEM32(esi) = 0x11001CBCu; /* 0x11013ED6: mov dword ptr [esi], 0x11001cbc */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x11013EDC: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_11013EE4; /* 0x11013EE0: jmp 0x11013ee4 */
L_11013EE2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x11013EE2: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_11013EE4:
    MEM32(edi) = esi; /* 0x11013EE4: mov dword ptr [edi], esi */
    /* test LO8(ebx), 1 */ /* 0x11013EE6: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11013EF3; /* 0x11013EE9: je 0x11013ef3 */
L_11013EEB:
    ecx = ebp + (-0x44); /* 0x11013EEB: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100DFF5); /* 0x11013EEE: call 0x1100dff5 */
    RECOMP_FLAGS_IN();
L_11013EF3:
    PUSH32(esp, 2); /* 0x11013EF3: push 2 */
    eax = POP32_VAL(esp); /* 0x11013EF5: pop eax */
    RECOMP_CALL(sub_1103B340); /* 0x11013EF6: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11013EFB: ret  */
    RECOMP_REGS_OUT();
}

void sub_11013EFC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11013EFCu);

L_11013EFC:
    eax = MEM32(ecx + 0x2C); /* 0x11013EFC: mov eax, dword ptr [ecx + 0x2c] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) + 1; /* 0x11013EFF: inc dword ptr [eax] */
    _flag_k = FK_INC;
    ecx = MEM32(ecx + 0x1C); /* 0x11013F01: mov ecx, dword ptr [ecx + 0x1c] */
    eax = MEM32(ecx); /* 0x11013F04: mov eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x11013F06: dec eax */
    _flag_k = FK_DEC;
    MEM32(ecx) = eax; /* 0x11013F07: mov dword ptr [ecx], eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11013F09: ret  */
    RECOMP_REGS_OUT();
}

void sub_11013F0A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11013F0Au);

L_11013F0A:
    PUSH32(esp, ebp); /* 0x11013F0A: push ebp */
    ebp = esp; /* 0x11013F0B: mov ebp, esp */
    /* cmp MEM32(ebp + 0xC), 1 */ /* 0x11013F0D: cmp dword ptr [ebp + 0xc], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x11013F11: push esi */
    esi = ecx; /* 0x11013F12: mov esi, ecx */
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x11013F14: sete al */
    MEM8(esi + 0x4C) = (uint8_t)(LO8(eax)); /* 0x11013F17: mov byte ptr [esi + 0x4c], al */
    MEM8(esi + 0x45) = (uint8_t)(0); /* 0x11013F1A: mov byte ptr [esi + 0x45], 0 */
    RECOMP_CALL(sub_1102185F); /* 0x11013F1E: call 0x1102185f */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x11013F23: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x11013F26: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11013F42; /* 0x11013F28: je 0x11013f42 */
L_11013F2A:
    eax = ecx + 0x8; /* 0x11013F2A: lea eax, [ecx + 8] */
    MEM32(esi + 0x1C) = ecx; /* 0x11013F2D: mov dword ptr [esi + 0x1c], ecx */
    MEM32(esi + 0xC) = eax; /* 0x11013F30: mov dword ptr [esi + 0xc], eax */
    MEM32(esi + 0x10) = eax; /* 0x11013F33: mov dword ptr [esi + 0x10], eax */
    eax = ecx + 0x4; /* 0x11013F36: lea eax, [ecx + 4] */
    MEM32(esi + 0x20) = ecx; /* 0x11013F39: mov dword ptr [esi + 0x20], ecx */
    MEM32(esi + 0x2C) = eax; /* 0x11013F3C: mov dword ptr [esi + 0x2c], eax */
    MEM32(esi + 0x30) = eax; /* 0x11013F3F: mov dword ptr [esi + 0x30], eax */
L_11013F42:
    MEM32(esi + 0x50) = ecx; /* 0x11013F42: mov dword ptr [esi + 0x50], ecx */
    eax = MEM32(0x11065FC4); /* 0x11013F45: mov eax, dword ptr [0x11065fc4] */
    _flag_a = (uint32_t)(MEM32(esi + 0x40)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x40) = MEM32(esi + 0x40) & 0; /* 0x11013F4A: and dword ptr [esi + 0x40], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x48) = eax; /* 0x11013F4E: mov dword ptr [esi + 0x48], eax */
    esi = POP32_VAL(esp); /* 0x11013F51: pop esi */
    ebp = POP32_VAL(esp); /* 0x11013F52: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x11013F53: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_11013F56(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11013F56u);

L_11013F56:
    PUSH32(esp, ebp); /* 0x11013F56: push ebp */
    ebp = esp; /* 0x11013F57: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x11013F59: mov eax, dword ptr [ebp + 8] */
    MEM32(ecx + 0xC) = eax; /* 0x11013F5C: mov dword ptr [ecx + 0xc], eax */
    eax = MEM32(ebp + 0x14); /* 0x11013F5F: mov eax, dword ptr [ebp + 0x14] */
    MEM32(ecx + 0x10) = eax; /* 0x11013F62: mov dword ptr [ecx + 0x10], eax */
    eax = MEM32(ebp + 0xC); /* 0x11013F65: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ecx + 0x1C) = eax; /* 0x11013F68: mov dword ptr [ecx + 0x1c], eax */
    eax = MEM32(ebp + 0x18); /* 0x11013F6B: mov eax, dword ptr [ebp + 0x18] */
    MEM32(ecx + 0x20) = eax; /* 0x11013F6E: mov dword ptr [ecx + 0x20], eax */
    eax = MEM32(ebp + 0x10); /* 0x11013F71: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ecx + 0x2C) = eax; /* 0x11013F74: mov dword ptr [ecx + 0x2c], eax */
    eax = MEM32(ebp + 0x1C); /* 0x11013F77: mov eax, dword ptr [ebp + 0x1c] */
    MEM32(ecx + 0x30) = eax; /* 0x11013F7A: mov dword ptr [ecx + 0x30], eax */
    ebp = POP32_VAL(esp); /* 0x11013F7D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x11013F7E: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_11013F81(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11013F81u);

L_11013F81:
    PUSH32(esp, ebp); /* 0x11013F81: push ebp */
    ebp = esp; /* 0x11013F82: mov ebp, esp */
    PUSH32(esp, esi); /* 0x11013F84: push esi */
    PUSH32(esp, edi); /* 0x11013F85: push edi */
    edi = MEM32(ebp + 0x8); /* 0x11013F86: mov edi, dword ptr [ebp + 8] */
    esi = ecx; /* 0x11013F89: mov esi, ecx */
    ecx = edi; /* 0x11013F8B: mov ecx, edi */
    eax = MEM32(edi); /* 0x11013F8D: mov eax, dword ptr [edi] */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x11013F8F: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11013F92: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11013F9C; /* 0x11013F94: je 0x11013f9c */
L_11013F96:
    _flag_a = (uint32_t)(MEM32(esi + 0x40)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x40) = MEM32(esi + 0x40) & 0; /* 0x11013F96: and dword ptr [esi + 0x40], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_11013FA6; /* 0x11013F9A: jmp 0x11013fa6 */
L_11013F9C:
    ecx = esi; /* 0x11013F9C: mov ecx, esi */
    MEM32(esi + 0x40) = edi; /* 0x11013F9E: mov dword ptr [esi + 0x40], edi */
    RECOMP_CALL(sub_1102185F); /* 0x11013FA1: call 0x1102185f */
    RECOMP_FLAGS_IN();
L_11013FA6:
    edi = POP32_VAL(esp); /* 0x11013FA6: pop edi */
    esi = POP32_VAL(esp); /* 0x11013FA7: pop esi */
    ebp = POP32_VAL(esp); /* 0x11013FA8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11013FA9: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11013FAC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11013FACu);

L_11013FAC:
    eax = MEM32(ecx + 0x30); /* 0x11013FAC: mov eax, dword ptr [ecx + 0x30] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) - 1; /* 0x11013FAF: dec dword ptr [eax] */
    _flag_k = FK_DEC;
    edx = MEM32(ecx + 0x20); /* 0x11013FB1: mov edx, dword ptr [ecx + 0x20] */
    eax = MEM32(edx); /* 0x11013FB4: mov eax, dword ptr [edx] */
    ecx = eax + 0x1; /* 0x11013FB6: lea ecx, [eax + 1] */
    MEM32(edx) = ecx; /* 0x11013FB9: mov dword ptr [edx], ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11013FBB: ret  */
    RECOMP_REGS_OUT();
}

void sub_11013FBC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11013FBCu);

L_11013FBC:
    PUSH32(esp, edi); /* 0x11013FBC: push edi */
    edi = MEM32(ecx + 0xC); /* 0x11013FBD: mov edi, dword ptr [ecx + 0xc] */
    eax = ecx + 0x44; /* 0x11013FC0: lea eax, [ecx + 0x44] */
    /* cmp MEM32(edi), eax */ /* 0x11013FC3: cmp dword ptr [edi], eax */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11013FDD; /* 0x11013FC5: jne 0x11013fdd */
L_11013FC7:
    edx = MEM32(ecx + 0x38); /* 0x11013FC7: mov edx, dword ptr [ecx + 0x38] */
    PUSH32(esp, esi); /* 0x11013FCA: push esi */
    esi = MEM32(ecx + 0x3C); /* 0x11013FCB: mov esi, dword ptr [ecx + 0x3c] */
    MEM32(edi) = edx; /* 0x11013FCE: mov dword ptr [edi], edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edx; /* 0x11013FD0: sub esi, edx */
    _flag_k = FK_CMP;
    eax = MEM32(ecx + 0x1C); /* 0x11013FD2: mov eax, dword ptr [ecx + 0x1c] */
    MEM32(eax) = edx; /* 0x11013FD5: mov dword ptr [eax], edx */
    eax = MEM32(ecx + 0x2C); /* 0x11013FD7: mov eax, dword ptr [ecx + 0x2c] */
    MEM32(eax) = esi; /* 0x11013FDA: mov dword ptr [eax], esi */
    esi = POP32_VAL(esp); /* 0x11013FDC: pop esi */
L_11013FDD:
    edi = POP32_VAL(esp); /* 0x11013FDD: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11013FDE: ret  */
    RECOMP_REGS_OUT();
}

void sub_11013FDF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11013FDFu);

L_11013FDF:
    edx = ecx; /* 0x11013FDF: mov edx, ecx */
    PUSH32(esp, esi); /* 0x11013FE1: push esi */
    PUSH32(esp, edi); /* 0x11013FE2: push edi */
    edi = MEM32(edx + 0xC); /* 0x11013FE3: mov edi, dword ptr [edx + 0xc] */
    esi = edx + 0x44; /* 0x11013FE6: lea esi, [edx + 0x44] */
    eax = MEM32(edi); /* 0x11013FE9: mov eax, dword ptr [edi] */
    /* cmp eax, esi */ /* 0x11013FEB: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11013FFF; /* 0x11013FED: je 0x11013fff */
L_11013FEF:
    ecx = MEM32(edx + 0x1C); /* 0x11013FEF: mov ecx, dword ptr [edx + 0x1c] */
    MEM32(edx + 0x38) = eax; /* 0x11013FF2: mov dword ptr [edx + 0x38], eax */
    eax = MEM32(edx + 0x2C); /* 0x11013FF5: mov eax, dword ptr [edx + 0x2c] */
    eax = MEM32(eax); /* 0x11013FF8: mov eax, dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx); /* 0x11013FFA: add eax, dword ptr [ecx] */
    _flag_k = FK_ADD;
    MEM32(edx + 0x3C) = eax; /* 0x11013FFC: mov dword ptr [edx + 0x3c], eax */
L_11013FFF:
    MEM32(edi) = esi; /* 0x11013FFF: mov dword ptr [edi], esi */
    ecx = edx; /* 0x11014001: mov ecx, edx */
    eax = MEM32(edx + 0x1C); /* 0x11014003: mov eax, dword ptr [edx + 0x1c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x11014006: sub ecx, esi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x45u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x45u; /* 0x11014008: add ecx, 0x45 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x1101400B: pop edi */
    MEM32(eax) = esi; /* 0x1101400C: mov dword ptr [eax], esi */
    eax = MEM32(edx + 0x2C); /* 0x1101400E: mov eax, dword ptr [edx + 0x2c] */
    esi = POP32_VAL(esp); /* 0x11014011: pop esi */
    MEM32(eax) = ecx; /* 0x11014012: mov dword ptr [eax], ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11014014: ret  */
    RECOMP_REGS_OUT();
}

void sub_11014015(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11014015u);

L_11014015:
    PUSH32(esp, ebp); /* 0x11014015: push ebp */
    ebp = esp; /* 0x11014016: mov ebp, esp */
    PUSH32(esp, esi); /* 0x11014018: push esi */
    esi = ecx; /* 0x11014019: mov esi, ecx */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1101401B: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1101401E: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1101401F: mov edi, dword ptr [ebp + 8] */
    ecx = MEM32(esi + 0x10); /* 0x11014022: mov ecx, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x11014025: sub eax, ecx */
    _flag_k = FK_CMP;
    /* cmp eax, edi */ /* 0x11014027: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1101406B; /* 0x11014029: jbe 0x1101406b */
L_1101402B:
    /* test edi, edi */ /* 0x1101402B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11014063; /* 0x1101402D: je 0x11014063 */
L_1101402F:
    PUSH32(esp, ebx); /* 0x1101402F: push ebx */
    ebx = ecx + edi; /* 0x11014030: lea ebx, [ecx + edi] */
    ecx = esi; /* 0x11014033: mov ecx, esi */
    PUSH32(esp, 0); /* 0x11014035: push 0 */
    PUSH32(esp, ebx); /* 0x11014037: push ebx */
    RECOMP_CALL(sub_11010BDF); /* 0x11014038: call 0x11010bdf */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1101403D: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11014062; /* 0x1101403F: je 0x11014062 */
L_11014041:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11014041: push dword ptr [ebp + 0xc] */
    ecx = esi; /* 0x11014044: mov ecx, esi */
    PUSH32(esp, edi); /* 0x11014046: push edi */
    PUSH32(esp, MEM32(esi + 0x10)); /* 0x11014047: push dword ptr [esi + 0x10] */
    RECOMP_CALL(sub_11013D58); /* 0x1101404A: call 0x11013d58 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esi + 0x14), 0x10u */ /* 0x1101404F: cmp dword ptr [esi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi + 0x10) = ebx; /* 0x11014053: mov dword ptr [esi + 0x10], ebx */
    if (CMP_B(_flag_a, _flag_b)) goto L_1101405C; /* 0x11014056: jb 0x1101405c */
L_11014058:
    eax = MEM32(esi); /* 0x11014058: mov eax, dword ptr [esi] */
    goto L_1101405E; /* 0x1101405A: jmp 0x1101405e */
L_1101405C:
    eax = esi; /* 0x1101405C: mov eax, esi */
L_1101405E:
    MEM8(eax + ebx) = (uint8_t)(0); /* 0x1101405E: mov byte ptr [eax + ebx], 0 */
L_11014062:
    ebx = POP32_VAL(esp); /* 0x11014062: pop ebx */
L_11014063:
    edi = POP32_VAL(esp); /* 0x11014063: pop edi */
    eax = esi; /* 0x11014064: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x11014066: pop esi */
    ebp = POP32_VAL(esp); /* 0x11014067: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x11014068: ret 8 */
L_1101406B:
    PUSH32(esp, 0x11004948u); /* 0x1101406B: push 0x11004948 */
    RECOMP_CALL(sub_110139DD); /* 0x11014070: call 0x110139dd */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x11014075u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11014076(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11014076u);

L_11014076:
    PUSH32(esp, ebp); /* 0x11014076: push ebp */
    ebp = esp; /* 0x11014077: mov ebp, esp */
    PUSH32(esp, esi); /* 0x11014079: push esi */
    PUSH32(esp, edi); /* 0x1101407A: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1101407B: mov edi, dword ptr [ebp + 8] */
    esi = ecx; /* 0x1101407E: mov esi, ecx */
    /* cmp edi, 0xFFFFFFFFu */ /* 0x11014080: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110140B9; /* 0x11014083: je 0x110140b9 */
L_11014085:
    PUSH32(esp, 0); /* 0x11014085: push 0 */
    PUSH32(esp, edi); /* 0x11014087: push edi */
    RECOMP_CALL(sub_11010BDF); /* 0x11014088: call 0x11010bdf */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1101408D: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_110140B1; /* 0x1101408F: je 0x110140b1 */
L_11014091:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11014091: push dword ptr [ebp + 0xc] */
    ecx = esi; /* 0x11014094: mov ecx, esi */
    PUSH32(esp, edi); /* 0x11014096: push edi */
    PUSH32(esp, 0); /* 0x11014097: push 0 */
    RECOMP_CALL(sub_11013D58); /* 0x11014099: call 0x11013d58 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esi + 0x14), 0x10u */ /* 0x1101409E: cmp dword ptr [esi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi + 0x10) = edi; /* 0x110140A2: mov dword ptr [esi + 0x10], edi */
    if (CMP_B(_flag_a, _flag_b)) goto L_110140AB; /* 0x110140A5: jb 0x110140ab */
L_110140A7:
    eax = MEM32(esi); /* 0x110140A7: mov eax, dword ptr [esi] */
    goto L_110140AD; /* 0x110140A9: jmp 0x110140ad */
L_110140AB:
    eax = esi; /* 0x110140AB: mov eax, esi */
L_110140AD:
    MEM8(eax + edi) = (uint8_t)(0); /* 0x110140AD: mov byte ptr [eax + edi], 0 */
L_110140B1:
    edi = POP32_VAL(esp); /* 0x110140B1: pop edi */
    eax = esi; /* 0x110140B2: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x110140B4: pop esi */
    ebp = POP32_VAL(esp); /* 0x110140B5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x110140B6: ret 8 */
L_110140B9:
    PUSH32(esp, 0x11004948u); /* 0x110140B9: push 0x11004948 */
    RECOMP_CALL(sub_110139DD); /* 0x110140BE: call 0x110139dd */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x110140C3u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_110140C4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110140C4u);

L_110140C4:
    PUSH32(esp, ebx); /* 0x110140C4: push ebx */
    PUSH32(esp, edi); /* 0x110140C5: push edi */
    edi = ecx; /* 0x110140C6: mov edi, ecx */
    /* cmp MEM32(edi + 0x50), 0 */ /* 0x110140C8: cmp dword ptr [edi + 0x50], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x50)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_110140D2; /* 0x110140CC: jne 0x110140d2 */
L_110140CE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x110140CE: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_110140F6; /* 0x110140D0: jmp 0x110140f6 */
L_110140D2:
    PUSH32(esp, esi); /* 0x110140D2: push esi */
    RECOMP_CALL(sub_11013D9A); /* 0x110140D3: call 0x11013d9a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(edi + 0x50)); /* 0x110140D8: push dword ptr [edi + 0x50] */
    esi = (uint32_t)LO8(eax); /* 0x110140DB: movzx esi, al */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(esi);
    _cf = (esi) != 0;
    esi = (uint32_t)(-(int32_t)esi); /* 0x110140DE: neg esi */
    _flag_k = FK_CMP;
    { uint32_t _sa = esi, _sb = esi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x110140E0: sbb esi, esi */
      esi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    esi = esi & edi; /* 0x110140E2: and esi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ICALL(MEM32(0x11069090)); /* 0x110140E4: call dword ptr [0x11069090] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x110140EA: mov ebx, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ebx);
    _cf = (ebx) != 0;
    ebx = (uint32_t)(-(int32_t)ebx); /* 0x110140EC: neg ebx */
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x110140EE: pop ecx */
    { uint32_t _sa = ebx, _sb = ebx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x110140EF: sbb ebx, ebx */
      ebx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    ebx = ~ebx; /* 0x110140F1: not ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    ebx = ebx & esi; /* 0x110140F3: and ebx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x110140F5: pop esi */
L_110140F6:
    ecx = edi; /* 0x110140F6: mov ecx, edi */
    MEM8(edi + 0x4C) = (uint8_t)(0); /* 0x110140F8: mov byte ptr [edi + 0x4c], 0 */
    MEM8(edi + 0x45) = (uint8_t)(0); /* 0x110140FC: mov byte ptr [edi + 0x45], 0 */
    RECOMP_CALL(sub_1102185F); /* 0x11014100: call 0x1102185f */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(edi + 0x50)); _flag_b = (uint32_t)(0);
    MEM32(edi + 0x50) = MEM32(edi + 0x50) & 0; /* 0x11014105: and dword ptr [edi + 0x50], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebx; /* 0x11014109: mov eax, ebx */
    ecx = MEM32(0x11065FC4); /* 0x1101410B: mov ecx, dword ptr [0x11065fc4] */
    _flag_a = (uint32_t)(MEM32(edi + 0x40)); _flag_b = (uint32_t)(0);
    MEM32(edi + 0x40) = MEM32(edi + 0x40) & 0; /* 0x11014111: and dword ptr [edi + 0x40], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x48) = ecx; /* 0x11014115: mov dword ptr [edi + 0x48], ecx */
    edi = POP32_VAL(esp); /* 0x11014118: pop edi */
    ebx = POP32_VAL(esp); /* 0x11014119: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101411A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1101411B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101411Bu);

L_1101411B:
    PUSH32(esp, ebp); /* 0x1101411B: push ebp */
    ebp = esp; /* 0x1101411C: mov ebp, esp */
    ecx = MEM32(ebp + 0x14); /* 0x1101411E: mov ecx, dword ptr [ebp + 0x14] */
    eax = MEM32(ebp + 0xC); /* 0x11014121: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, 3); /* 0x11014124: push 3 */
    MEM32(ecx) = eax; /* 0x11014126: mov dword ptr [ecx], eax */
    ecx = MEM32(ebp + 0x20); /* 0x11014128: mov ecx, dword ptr [ebp + 0x20] */
    eax = MEM32(ebp + 0x18); /* 0x1101412B: mov eax, dword ptr [ebp + 0x18] */
    MEM32(ecx) = eax; /* 0x1101412E: mov dword ptr [ecx], eax */
    eax = POP32_VAL(esp); /* 0x11014130: pop eax */
    ebp = POP32_VAL(esp); /* 0x11014131: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x11014132: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_11014135(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11014135u);

L_11014135:
    PUSH32(esp, ebp); /* 0x11014135: push ebp */
    ebp = esp; /* 0x11014136: mov ebp, esp */
    eax = MEM32(ebp + 0x10); /* 0x11014138: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + 0xC); /* 0x1101413B: sub eax, dword ptr [ebp + 0xc] */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x14); /* 0x1101413E: mov ecx, dword ptr [ebp + 0x14] */
    /* cmp ecx, eax */ /* 0x11014141: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_11014147; /* 0x11014143: jb 0x11014147 */
L_11014145:
    ecx = eax; /* 0x11014145: mov ecx, eax */
L_11014147:
    eax = ecx; /* 0x11014147: mov eax, ecx */
    ebp = POP32_VAL(esp); /* 0x11014149: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1101414A: ret 0x10 */
    RECOMP_REGS_OUT();
}
