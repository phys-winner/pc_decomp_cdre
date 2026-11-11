#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_150517E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150517E0u);

L_150517E0:
    edi = edi; /* 0x150517E0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150517E2: push ebp */
    ebp = esp; /* 0x150517E3: mov ebp, esp */
    PUSH32(esp, 0); /* 0x150517E5: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150517E7: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15051800); /* 0x150517EA: call 0x15051800 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150517EF: pop ecx */
    ecx = POP32_VAL(esp); /* 0x150517F0: pop ecx */
    ebp = POP32_VAL(esp); /* 0x150517F1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150517F2: ret  */
    RECOMP_REGS_OUT();
}

void sub_15051800(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15051800u);

L_15051800:
    edi = edi; /* 0x15051800: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15051802: push ebp */
    ebp = esp; /* 0x15051803: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x15051805: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15051808: push dword ptr [ebp + 0xc] */
    ecx = ebp + (-0x10); /* 0x1505180B: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1502F870); /* 0x1505180E: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0xC)); /* 0x15051813: mov edx, dword ptr [ebp - 0xc] */
    /* cmp MEM32(edx + 0x4), 0x3A4u */ /* 0x15051816: cmp dword ptr [edx + 4], 0x3a4 */
    _flag_a = (uint32_t)(MEM32(edx + 0x4)); _flag_b = (uint32_t)(0x3A4u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15051827; /* 0x1505181D: je 0x15051827 */
L_1505181F:
    edx = MEM32(ebp + 0x8); /* 0x1505181F: mov edx, dword ptr [ebp + 8] */
    goto L_150518AA; /* 0x15051822: jmp 0x150518aa */
L_15051827:
    ecx = MEM32(ebp + 0x8); /* 0x15051827: mov ecx, dword ptr [ebp + 8] */
    eax = ecx; /* 0x1505182A: mov eax, ecx */
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x1505182C: shr eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 8u; /* 0x1505182C: shr eax, 8 */
    PUSH32(esp, esi); /* 0x1505182F: push esi */
    esi = (uint32_t)LO8(eax); /* 0x15051830: movzx esi, al */
    ecx = (uint32_t)LO8(ecx); /* 0x15051833: movzx ecx, cl */
    /* test MEM8(esi + edx + 0x1D), 4 */ /* 0x15051836: test byte ptr [esi + edx + 0x1d], 4 */
    _flag_a = (uint32_t)(MEM8(esi + edx + 0x1D)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505189C; /* 0x1505183B: je 0x1505189c */
L_1505183D:
    /* test MEM8(ecx + edx + 0x1D), 8 */ /* 0x1505183D: test byte ptr [ecx + edx + 0x1d], 8 */
    _flag_a = (uint32_t)(MEM8(ecx + edx + 0x1D)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505189C; /* 0x15051842: je 0x1505189c */
L_15051844:
    /* cmp esi, 0xA0u */ /* 0x15051844: cmp esi, 0xa0 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xA0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1505184A: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFC0u);
    eax = eax & 0xFFFFFFC0u; /* 0x1505184C: and eax, 0xffffffc0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xC1u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xC1u; /* 0x1505184F: add eax, 0xc1 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x15051854: sub esi, eax */
    _flag_k = FK_CMP;
    if (9u) _cf = (((esi) >> 23) & 1u); /* 0x15051856: shl esi, 9 */
    if (9u) { _flag_a = recomp_flags_pack((esi << 9u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 9u; /* 0x15051856: shl esi, 9 */
    /* cmp ecx, 0x9Fu */ /* 0x15051859: cmp ecx, 0x9f */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x9Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1505186C; /* 0x1505185F: jb 0x1505186c */
L_15051861:
    edx = esi + 0x2200; /* 0x15051861: lea edx, [esi + 0x2200] */
    eax = ecx + (-0x7E); /* 0x15051867: lea eax, [ecx - 0x7e] */
    goto L_15051882; /* 0x1505186A: jmp 0x15051882 */
L_1505186C:
    PUSH32(esp, 0x7Eu); /* 0x1505186C: push 0x7e */
    eax = POP32_VAL(esp); /* 0x1505186E: pop eax */
    /* cmp eax, ecx */ /* 0x1505186F: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = ecx; /* 0x15051871: mov edx, ecx */
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x15051873: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x15051875: neg eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x1Fu; /* 0x15051877: add eax, 0x1f */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x1505187A: sub edx, eax */
    _flag_k = FK_CMP;
    eax = esi + 0x2100; /* 0x1505187C: lea eax, [esi + 0x2100] */
L_15051882:
    _flag_a = (uint32_t)((edx | eax)); _flag_b = (uint32_t)((edx | eax));
    edx = edx | eax; /* 0x15051882: or edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edx + (-0x2121); /* 0x15051884: lea eax, [edx - 0x2121] */
    /* cmp eax, 0x5D5Du */ /* 0x1505188A: cmp eax, 0x5d5d */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x5D5Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1505189C; /* 0x1505188F: ja 0x1505189c */
L_15051891:
    eax = (uint32_t)LO8(edx); /* 0x15051891: movzx eax, dl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x21u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x21u; /* 0x15051894: sub eax, 0x21 */
    _flag_k = FK_CMP;
    /* cmp eax, 0x5Du */ /* 0x15051897: cmp eax, 0x5d */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x5Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_150518A9; /* 0x1505189A: jbe 0x150518a9 */
L_1505189C:
    RECOMP_CALL(sub_15036430); /* 0x1505189C: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x150518A1: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = 0x2Au; /* 0x150518A3: mov dword ptr [eax], 0x2a */
L_150518A9:
    esi = POP32_VAL(esp); /* 0x150518A9: pop esi */
L_150518AA:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x150518AA: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150518B7; /* 0x150518AE: je 0x150518b7 */
L_150518B0:
    ecx = MEM32(ebp + (-0x8)); /* 0x150518B0: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x150518B3: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_150518B7:
    eax = edx; /* 0x150518B7: mov eax, edx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150518B9: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150518BA: ret  */
    RECOMP_REGS_OUT();
}

void sub_150518D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150518D0u);

L_150518D0:
    edi = edi; /* 0x150518D0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150518D2: push ebp */
    ebp = esp; /* 0x150518D3: mov ebp, esp */
    PUSH32(esp, esi); /* 0x150518D5: push esi */
    esi = MEM32(ebp + 0x8); /* 0x150518D6: mov esi, dword ptr [ebp + 8] */
    eax = (uint32_t)MEM8(esi); /* 0x150518D9: movzx eax, byte ptr [esi] */
    PUSH32(esp, eax); /* 0x150518DC: push eax */
    RECOMP_CALL(sub_15050550); /* 0x150518DD: call 0x15050550 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150518E2: pop ecx */
    /* test eax, eax */ /* 0x150518E3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150518F2; /* 0x150518E5: je 0x150518f2 */
L_150518E7:
    /* cmp MEM8(esi + 0x1), 0 */ /* 0x150518E7: cmp byte ptr [esi + 1], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x1)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150518F2; /* 0x150518EB: je 0x150518f2 */
L_150518ED:
    PUSH32(esp, 2); /* 0x150518ED: push 2 */
    eax = POP32_VAL(esp); /* 0x150518EF: pop eax */
    goto L_150518F5; /* 0x150518F0: jmp 0x150518f5 */
L_150518F2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150518F2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x150518F4: inc eax */
    _flag_k = FK_INC;
L_150518F5:
    esi = POP32_VAL(esp); /* 0x150518F5: pop esi */
    ebp = POP32_VAL(esp); /* 0x150518F6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150518F7: ret  */
    RECOMP_REGS_OUT();
}

void sub_15051900(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15051900u);

L_15051900:
    edi = edi; /* 0x15051900: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15051902: push ebp */
    ebp = esp; /* 0x15051903: mov ebp, esp */
    PUSH32(esp, esi); /* 0x15051905: push esi */
    esi = MEM32(ebp + 0x8); /* 0x15051906: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15051909: push dword ptr [ebp + 0xc] */
    eax = (uint32_t)MEM8(esi); /* 0x1505190C: movzx eax, byte ptr [esi] */
    PUSH32(esp, eax); /* 0x1505190F: push eax */
    RECOMP_CALL(sub_15050570); /* 0x15051910: call 0x15050570 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15051915: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15051916: pop ecx */
    /* test eax, eax */ /* 0x15051917: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15051926; /* 0x15051919: je 0x15051926 */
L_1505191B:
    /* cmp MEM8(esi + 0x1), 0 */ /* 0x1505191B: cmp byte ptr [esi + 1], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x1)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15051926; /* 0x1505191F: je 0x15051926 */
L_15051921:
    PUSH32(esp, 2); /* 0x15051921: push 2 */
    eax = POP32_VAL(esp); /* 0x15051923: pop eax */
    goto L_15051929; /* 0x15051924: jmp 0x15051929 */
L_15051926:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15051926: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15051928: inc eax */
    _flag_k = FK_INC;
L_15051929:
    esi = POP32_VAL(esp); /* 0x15051929: pop esi */
    ebp = POP32_VAL(esp); /* 0x1505192A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505192B: ret  */
    RECOMP_REGS_OUT();
}

void sub_15051940(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15051940u);

L_15051940:
    edi = edi; /* 0x15051940: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15051942: push ebp */
    ebp = esp; /* 0x15051943: mov ebp, esp */
    PUSH32(esp, 0); /* 0x15051945: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15051947: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15051960); /* 0x1505194A: call 0x15051960 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505194F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15051950: pop ecx */
    ebp = POP32_VAL(esp); /* 0x15051951: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15051952: ret  */
    RECOMP_REGS_OUT();
}

void sub_15051960(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15051960u);

L_15051960:
    edi = edi; /* 0x15051960: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15051962: push ebp */
    ebp = esp; /* 0x15051963: mov ebp, esp */
    PUSH32(esp, esi); /* 0x15051965: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15051966: push dword ptr [ebp + 0xc] */
    esi = MEM32(ebp + 0x8); /* 0x15051969: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1505196C: push esi */
    RECOMP_CALL(sub_15050A50); /* 0x1505196D: call 0x15050a50 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15051972: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15051973: pop ecx */
    /* test eax, eax */ /* 0x15051974: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15051996; /* 0x15051976: je 0x15051996 */
L_15051978:
    /* cmp esi, 0x8393u */ /* 0x15051978: cmp esi, 0x8393 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x8393u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_15051996; /* 0x1505197E: ja 0x15051996 */
L_15051980:
    /* cmp esi, 0x837Fu */ /* 0x15051980: cmp esi, 0x837f */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x837Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_15051990; /* 0x15051986: jae 0x15051990 */
L_15051988:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xA1u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 0xA1u; /* 0x15051988: sub esi, 0xa1 */
    _flag_k = FK_CMP;
    goto L_15051996; /* 0x1505198E: jmp 0x15051996 */
L_15051990:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xA2u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 0xA2u; /* 0x15051990: sub esi, 0xa2 */
    _flag_k = FK_CMP;
L_15051996:
    eax = esi; /* 0x15051996: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x15051998: pop esi */
    ebp = POP32_VAL(esp); /* 0x15051999: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505199A: ret  */
    RECOMP_REGS_OUT();
}

void sub_150519B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150519B0u);

L_150519B0:
    edi = edi; /* 0x150519B0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150519B2: push ebp */
    ebp = esp; /* 0x150519B3: mov ebp, esp */
    PUSH32(esp, 0); /* 0x150519B5: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150519B7: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_150519D0); /* 0x150519BA: call 0x150519d0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150519BF: pop ecx */
    ecx = POP32_VAL(esp); /* 0x150519C0: pop ecx */
    ebp = POP32_VAL(esp); /* 0x150519C1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150519C2: ret  */
    RECOMP_REGS_OUT();
}

void sub_150519D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150519D0u);

L_150519D0:
    edi = edi; /* 0x150519D0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150519D2: push ebp */
    ebp = esp; /* 0x150519D3: mov ebp, esp */
    PUSH32(esp, esi); /* 0x150519D5: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150519D6: push dword ptr [ebp + 0xc] */
    esi = MEM32(ebp + 0x8); /* 0x150519D9: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x150519DC: push esi */
    RECOMP_CALL(sub_150509E0); /* 0x150519DD: call 0x150509e0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150519E2: pop ecx */
    ecx = POP32_VAL(esp); /* 0x150519E3: pop ecx */
    /* test eax, eax */ /* 0x150519E4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150519F7; /* 0x150519E6: je 0x150519f7 */
L_150519E8:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xA1u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0xA1u; /* 0x150519E8: add esi, 0xa1 */
    _flag_k = FK_ADD;
    /* cmp esi, 0x837Fu */ /* 0x150519EE: cmp esi, 0x837f */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x837Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_150519F7; /* 0x150519F4: jb 0x150519f7 */
L_150519F6:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x150519F6: inc esi */
    _flag_k = FK_INC;
L_150519F7:
    eax = esi; /* 0x150519F7: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x150519F9: pop esi */
    ebp = POP32_VAL(esp); /* 0x150519FA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150519FB: ret  */
    RECOMP_REGS_OUT();
}

void sub_15051A10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15051A10u);

L_15051A10:
    edi = edi; /* 0x15051A10: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15051A12: push ebp */
    ebp = esp; /* 0x15051A13: mov ebp, esp */
    PUSH32(esp, 0); /* 0x15051A15: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15051A17: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15051A30); /* 0x15051A1A: call 0x15051a30 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15051A1F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15051A20: pop ecx */
    ebp = POP32_VAL(esp); /* 0x15051A21: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15051A22: ret  */
    RECOMP_REGS_OUT();
}

void sub_15051A30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15051A30u);

L_15051A30:
    edi = edi; /* 0x15051A30: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15051A32: push ebp */
    ebp = esp; /* 0x15051A33: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x15051A35: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x18); /* 0x15051A38: lea ecx, [ebp - 0x18] */
    PUSH32(esp, ebx); /* 0x15051A3B: push ebx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15051A3C: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1502F870); /* 0x15051A3F: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + 0x8); /* 0x15051A44: mov ebx, dword ptr [ebp + 8] */
    /* cmp ebx, 0xFFu */ /* 0x15051A47: cmp ebx, 0xff */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_15051AA0; /* 0x15051A4D: jbe 0x15051aa0 */
L_15051A4F:
    ecx = MEM32(ebp + (-0x14)); /* 0x15051A4F: mov ecx, dword ptr [ebp - 0x14] */
    eax = ebx; /* 0x15051A52: mov eax, ebx */
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x15051A54: shr eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 8u; /* 0x15051A54: shr eax, 8 */
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(eax)); /* 0x15051A57: mov byte ptr [ebp - 4], al */
    eax = (uint32_t)LO8(eax); /* 0x15051A5A: movzx eax, al */
    MEM8(ebp + (-0x3)) = (uint8_t)(LO8(ebx)); /* 0x15051A5D: mov byte ptr [ebp - 3], bl */
    /* test MEM8(eax + ecx + 0x1D), 4 */ /* 0x15051A60: test byte ptr [eax + ecx + 0x1d], 4 */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x1D)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15051AB2; /* 0x15051A65: je 0x15051ab2 */
L_15051A67:
    PUSH32(esp, 1); /* 0x15051A67: push 1 */
    PUSH32(esp, MEM32(ecx + 0x4)); /* 0x15051A69: push dword ptr [ecx + 4] */
    eax = ebp + (-0x8); /* 0x15051A6C: lea eax, [ebp - 8] */
    PUSH32(esp, 2); /* 0x15051A6F: push 2 */
    PUSH32(esp, eax); /* 0x15051A71: push eax */
    PUSH32(esp, 2); /* 0x15051A72: push 2 */
    eax = ebp + (-0x4); /* 0x15051A74: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x15051A77: push eax */
    PUSH32(esp, 0x100u); /* 0x15051A78: push 0x100 */
    PUSH32(esp, MEM32(ecx + 0xC)); /* 0x15051A7D: push dword ptr [ecx + 0xc] */
    eax = ebp + (-0x18); /* 0x15051A80: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x15051A83: push eax */
    RECOMP_CALL(sub_15058910); /* 0x15051A84: call 0x15058910 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x24u; /* 0x15051A89: add esp, 0x24 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15051A8C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15051AB2; /* 0x15051A8E: je 0x15051ab2 */
L_15051A90:
    eax = MEM32(ebp + (-0x8)); /* 0x15051A90: mov eax, dword ptr [ebp - 8] */
    ebx = (uint32_t)LO8(eax); /* 0x15051A93: movzx ebx, al */
    if (8u) _cf = (((ebx) >> 24) & 1u); /* 0x15051A96: shl ebx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ebx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 8u; /* 0x15051A96: shl ebx, 8 */
    eax = (uint32_t)HI8(eax); /* 0x15051A99: movzx eax, ah */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x15051A9C: add ebx, eax */
    _flag_k = FK_ADD;
    goto L_15051AB2; /* 0x15051A9E: jmp 0x15051ab2 */
L_15051AA0:
    eax = MEM32(ebp + (-0x14)); /* 0x15051AA0: mov eax, dword ptr [ebp - 0x14] */
    /* test MEM8(eax + ebx + 0x1D), 0x10u */ /* 0x15051AA3: test byte ptr [eax + ebx + 0x1d], 0x10 */
    _flag_a = (uint32_t)(MEM8(eax + ebx + 0x1D)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15051AB2; /* 0x15051AA8: je 0x15051ab2 */
L_15051AAA:
    ebx = (uint32_t)MEM8(eax + ebx + 0x11D); /* 0x15051AAA: movzx ebx, byte ptr [eax + ebx + 0x11d] */
L_15051AB2:
    /* cmp MEM8(ebp + (-0xC)), 0 */ /* 0x15051AB2: cmp byte ptr [ebp - 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0xC))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15051ABF; /* 0x15051AB6: je 0x15051abf */
L_15051AB8:
    ecx = MEM32(ebp + (-0x10)); /* 0x15051AB8: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x15051ABB: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_15051ABF:
    eax = ebx; /* 0x15051ABF: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x15051AC1: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15051AC2: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15051AC3: ret  */
    RECOMP_REGS_OUT();
}

void sub_15051AD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15051AD0u);

L_15051AD0:
    edi = edi; /* 0x15051AD0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15051AD2: push ebp */
    ebp = esp; /* 0x15051AD3: mov ebp, esp */
    PUSH32(esp, 0); /* 0x15051AD5: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15051AD7: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15051AF0); /* 0x15051ADA: call 0x15051af0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15051ADF: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15051AE0: pop ecx */
    ebp = POP32_VAL(esp); /* 0x15051AE1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15051AE2: ret  */
    RECOMP_REGS_OUT();
}

void sub_15051AF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15051AF0u);

L_15051AF0:
    edi = edi; /* 0x15051AF0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15051AF2: push ebp */
    ebp = esp; /* 0x15051AF3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x15051AF5: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x18); /* 0x15051AF8: lea ecx, [ebp - 0x18] */
    PUSH32(esp, ebx); /* 0x15051AFB: push ebx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15051AFC: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1502F870); /* 0x15051AFF: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + 0x8); /* 0x15051B04: mov ebx, dword ptr [ebp + 8] */
    /* cmp ebx, 0xFFu */ /* 0x15051B07: cmp ebx, 0xff */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_15051B60; /* 0x15051B0D: jbe 0x15051b60 */
L_15051B0F:
    ecx = MEM32(ebp + (-0x14)); /* 0x15051B0F: mov ecx, dword ptr [ebp - 0x14] */
    eax = ebx; /* 0x15051B12: mov eax, ebx */
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x15051B14: shr eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 8u; /* 0x15051B14: shr eax, 8 */
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(eax)); /* 0x15051B17: mov byte ptr [ebp - 4], al */
    eax = (uint32_t)LO8(eax); /* 0x15051B1A: movzx eax, al */
    MEM8(ebp + (-0x3)) = (uint8_t)(LO8(ebx)); /* 0x15051B1D: mov byte ptr [ebp - 3], bl */
    /* test MEM8(eax + ecx + 0x1D), 4 */ /* 0x15051B20: test byte ptr [eax + ecx + 0x1d], 4 */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x1D)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15051B72; /* 0x15051B25: je 0x15051b72 */
L_15051B27:
    PUSH32(esp, 1); /* 0x15051B27: push 1 */
    PUSH32(esp, MEM32(ecx + 0x4)); /* 0x15051B29: push dword ptr [ecx + 4] */
    eax = ebp + (-0x8); /* 0x15051B2C: lea eax, [ebp - 8] */
    PUSH32(esp, 2); /* 0x15051B2F: push 2 */
    PUSH32(esp, eax); /* 0x15051B31: push eax */
    PUSH32(esp, 2); /* 0x15051B32: push 2 */
    eax = ebp + (-0x4); /* 0x15051B34: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x15051B37: push eax */
    PUSH32(esp, 0x200u); /* 0x15051B38: push 0x200 */
    PUSH32(esp, MEM32(ecx + 0xC)); /* 0x15051B3D: push dword ptr [ecx + 0xc] */
    eax = ebp + (-0x18); /* 0x15051B40: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x15051B43: push eax */
    RECOMP_CALL(sub_15058910); /* 0x15051B44: call 0x15058910 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x24u; /* 0x15051B49: add esp, 0x24 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15051B4C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15051B72; /* 0x15051B4E: je 0x15051b72 */
L_15051B50:
    eax = MEM32(ebp + (-0x8)); /* 0x15051B50: mov eax, dword ptr [ebp - 8] */
    ebx = (uint32_t)LO8(eax); /* 0x15051B53: movzx ebx, al */
    if (8u) _cf = (((ebx) >> 24) & 1u); /* 0x15051B56: shl ebx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ebx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 8u; /* 0x15051B56: shl ebx, 8 */
    eax = (uint32_t)HI8(eax); /* 0x15051B59: movzx eax, ah */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x15051B5C: add ebx, eax */
    _flag_k = FK_ADD;
    goto L_15051B72; /* 0x15051B5E: jmp 0x15051b72 */
L_15051B60:
    eax = MEM32(ebp + (-0x14)); /* 0x15051B60: mov eax, dword ptr [ebp - 0x14] */
    /* test MEM8(eax + ebx + 0x1D), 0x20u */ /* 0x15051B63: test byte ptr [eax + ebx + 0x1d], 0x20 */
    _flag_a = (uint32_t)(MEM8(eax + ebx + 0x1D)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15051B72; /* 0x15051B68: je 0x15051b72 */
L_15051B6A:
    ebx = (uint32_t)MEM8(eax + ebx + 0x11D); /* 0x15051B6A: movzx ebx, byte ptr [eax + ebx + 0x11d] */
L_15051B72:
    /* cmp MEM8(ebp + (-0xC)), 0 */ /* 0x15051B72: cmp byte ptr [ebp - 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0xC))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15051B7F; /* 0x15051B76: je 0x15051b7f */
L_15051B78:
    ecx = MEM32(ebp + (-0x10)); /* 0x15051B78: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x15051B7B: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_15051B7F:
    eax = ebx; /* 0x15051B7F: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x15051B81: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15051B82: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15051B83: ret  */
    RECOMP_REGS_OUT();
}

void sub_15051B90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15051B90u);

L_15051B90:
    edi = edi; /* 0x15051B90: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15051B92: push ebp */
    ebp = esp; /* 0x15051B93: mov ebp, esp */
    PUSH32(esp, 0); /* 0x15051B95: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15051B97: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15051B9A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15051BB0); /* 0x15051B9D: call 0x15051bb0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15051BA2: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15051BA5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15051BA6: ret  */
    RECOMP_REGS_OUT();
}

void sub_15051BB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15051BB0u);

L_15051BB0:
    edi = edi; /* 0x15051BB0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15051BB2: push ebp */
    ebp = esp; /* 0x15051BB3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x15051BB5: sub esp, 0x10 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x10); /* 0x15051BB8: lea ecx, [ebp - 0x10] */
    PUSH32(esp, ebx); /* 0x15051BBB: push ebx */
    PUSH32(esp, esi); /* 0x15051BBC: push esi */
    PUSH32(esp, edi); /* 0x15051BBD: push edi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15051BBE: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1502F870); /* 0x15051BC1: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x15051BC6: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x15051BC9: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15051BD6; /* 0x15051BCB: jne 0x15051bd6 */
L_15051BCD:
    RECOMP_CALL(sub_15036430); /* 0x15051BCD: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15051BD2: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15051C19; /* 0x15051BD4: jmp 0x15051c19 */
L_15051BD6:
    eax = MEM32(ebp + (-0xC)); /* 0x15051BD6: mov eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15051BD9: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(eax + 0x8), esi */ /* 0x15051BDB: cmp dword ptr [eax + 8], esi */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15051C2F; /* 0x15051BDE: je 0x15051c2f */
L_15051BE0:
    ebx = MEM32(ebp + 0xC); /* 0x15051BE0: mov ebx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)((edx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edx | 0xFFFFFFFFu));
    edx = edx | 0xFFFFFFFFu; /* 0x15051BE3: or edx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_15051BE6:
    /* test ebx, ebx */ /* 0x15051BE6: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15051BF2; /* 0x15051BE8: jne 0x15051bf2 */
L_15051BEA:
    /* cmp MEM8(edi), LO8(ebx) */ /* 0x15051BEA: cmp byte ptr [edi], bl */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15051C2C; /* 0x15051BEC: je 0x15051c2c */
L_15051BEE:
    SET_LO8(ecx, MEM8(edi)); /* 0x15051BEE: mov cl, byte ptr [edi] */
    goto L_15051BFA; /* 0x15051BF0: jmp 0x15051bfa */
L_15051BF2:
    SET_LO8(eax, MEM8(edi)); /* 0x15051BF2: mov al, byte ptr [edi] */
    SET_LO8(ecx, LO8(eax)); /* 0x15051BF4: mov cl, al */
    /* test LO8(eax), LO8(eax) */ /* 0x15051BF6: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15051C14; /* 0x15051BF8: je 0x15051c14 */
L_15051BFA:
    eax = ebp + (-0x10); /* 0x15051BFA: lea eax, [ebp - 0x10] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x15051BFD: inc edi */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x15051BFE: push eax */
    PUSH32(esp, edx); /* 0x15051BFF: push edx */
    PUSH32(esp, ecx); /* 0x15051C00: push ecx */
    RECOMP_CALL(sub_1505146D); /* 0x15051C01: call 0x1505146d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15051C06: add esp, 0xc */
    _flag_k = FK_ADD;
    edx = eax; /* 0x15051C09: mov edx, eax */
    eax = ebx; /* 0x15051C0B: mov eax, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x15051C0D: dec ebx */
    _flag_k = FK_DEC;
    /* test eax, eax */ /* 0x15051C0E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15051BE6; /* 0x15051C10: jne 0x15051be6 */
L_15051C12:
    goto L_15051C31; /* 0x15051C12: jmp 0x15051c31 */
L_15051C14:
    RECOMP_CALL(sub_15036430); /* 0x15051C14: call 0x15036430 */
    RECOMP_FLAGS_IN();
L_15051C19:
    PUSH32(esp, esi); /* 0x15051C19: push esi */
    PUSH32(esp, esi); /* 0x15051C1A: push esi */
    PUSH32(esp, esi); /* 0x15051C1B: push esi */
    PUSH32(esp, esi); /* 0x15051C1C: push esi */
    PUSH32(esp, esi); /* 0x15051C1D: push esi */
    MEM32(eax) = 0x16u; /* 0x15051C1E: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x15051C24: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15051C29: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15051C2C:
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x15051C2C: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_15051C2F:
    edx = esi; /* 0x15051C2F: mov edx, esi */
L_15051C31:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x15051C31: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    edi = POP32_VAL(esp); /* 0x15051C35: pop edi */
    esi = POP32_VAL(esp); /* 0x15051C36: pop esi */
    ebx = POP32_VAL(esp); /* 0x15051C37: pop ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15051C41; /* 0x15051C38: je 0x15051c41 */
L_15051C3A:
    ecx = MEM32(ebp + (-0x8)); /* 0x15051C3A: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x15051C3D: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_15051C41:
    eax = edx; /* 0x15051C41: mov eax, edx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15051C43: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15051C44: ret  */
    RECOMP_REGS_OUT();
}

void sub_15051C50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15051C50u);

L_15051C50:
    edi = edi; /* 0x15051C50: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15051C52: push ebp */
    ebp = esp; /* 0x15051C53: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x15051C55: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x15051C58: push ebx */
    PUSH32(esp, esi); /* 0x15051C59: push esi */
    esi = MEM32(ebp + 0x8); /* 0x15051C5A: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x15051C5D: push edi */
    /* test esi, esi */ /* 0x15051C5E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15051D82; /* 0x15051C60: je 0x15051d82 */
L_15051C66:
    ecx = MEM32(ebp + 0xC); /* 0x15051C66: mov ecx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x15051C69: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15051D82; /* 0x15051C6B: je 0x15051d82 */
L_15051C71:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15051C71: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x10), ebx */ /* 0x15051C73: cmp dword ptr [ebp + 0x10], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15051C84; /* 0x15051C76: jne 0x15051c84 */
L_15051C78:
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x15051C78: mov byte ptr [esi], bl */
    RECOMP_CALL(sub_15036430); /* 0x15051C7A: call 0x15036430 */
    RECOMP_FLAGS_IN();
    goto L_15051D89; /* 0x15051C7F: jmp 0x15051d89 */
L_15051C84:
    MEM32(ebp + (-0xC)) = ebx; /* 0x15051C84: mov dword ptr [ebp - 0xc], ebx */
    edi = esi; /* 0x15051C87: mov edi, esi */
L_15051C89:
    /* cmp MEM8(edi), LO8(ebx) */ /* 0x15051C89: cmp byte ptr [edi], bl */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15051C95; /* 0x15051C8B: je 0x15051c95 */
L_15051C8D:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x15051C8D: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x15051C8E: sub ecx, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_15051C89; /* 0x15051C91: jne 0x15051c89 */
L_15051C93:
    RECOMP_BACKEDGE();
    goto L_15051C78; /* 0x15051C93: jmp 0x15051c78 */
L_15051C95:
    eax = edi + (-0x1); /* 0x15051C95: lea eax, [edi - 1] */
    MEM32(ebp + (-0x8)) = eax; /* 0x15051C98: mov dword ptr [ebp - 8], eax */
    edx = eax; /* 0x15051C9B: mov edx, eax */
    MEM32(ebp + (-0x4)) = edx; /* 0x15051C9D: mov dword ptr [ebp - 4], edx */
    /* cmp eax, esi */ /* 0x15051CA0: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_15051CCA; /* 0x15051CA2: jb 0x15051cca */
L_15051CA4:
    MEM32(ebp + 0xC) = ecx; /* 0x15051CA4: mov dword ptr [ebp + 0xc], ecx */
    ebx = eax; /* 0x15051CA7: mov ebx, eax */
L_15051CA9:
    eax = (uint32_t)MEM8(ebx); /* 0x15051CA9: movzx eax, byte ptr [ebx] */
    PUSH32(esp, eax); /* 0x15051CAC: push eax */
    RECOMP_CALL(sub_15050550); /* 0x15051CAD: call 0x15050550 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15051CB2: pop ecx */
    /* test eax, eax */ /* 0x15051CB3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15051CBC; /* 0x15051CB5: je 0x15051cbc */
L_15051CB7:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x15051CB7: dec ebx */
    _flag_k = FK_DEC;
    /* cmp ebx, esi */ /* 0x15051CB8: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_15051CA9; /* 0x15051CBA: jae 0x15051ca9 */
L_15051CBC:
    ecx = MEM32(ebp + 0xC); /* 0x15051CBC: mov ecx, dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + (-0x8)); /* 0x15051CBF: mov eax, dword ptr [ebp - 8] */
    MEM32(ebp + (-0x4)) = ebx; /* 0x15051CC2: mov dword ptr [ebp - 4], ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15051CC5: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(ebp + (-0x4)); /* 0x15051CC7: mov edx, dword ptr [ebp - 4] */
L_15051CCA:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x15051CCA: sub eax, edx */
    _flag_k = FK_CMP;
    /* test LO8(eax), 1 */ /* 0x15051CCC: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15051CDD; /* 0x15051CCE: je 0x15051cdd */
L_15051CD0:
    edi = MEM32(ebp + (-0x8)); /* 0x15051CD0: mov edi, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15051CD3: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0xC)) = 1; /* 0x15051CD4: mov dword ptr [ebp - 0xc], 1 */
    MEM8(edi) = (uint8_t)(LO8(ebx)); /* 0x15051CDB: mov byte ptr [edi], bl */
L_15051CDD:
    esi = MEM32(ebp + 0x10); /* 0x15051CDD: mov esi, dword ptr [ebp + 0x10] */
L_15051CE0:
    SET_LO8(eax, MEM8(esi)); /* 0x15051CE0: mov al, byte ptr [esi] */
    edx = edi; /* 0x15051CE2: mov edx, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15051CE4: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = edi; /* 0x15051CE5: mov dword ptr [ebp - 4], edi */
    MEM8(edi) = (uint8_t)(LO8(eax)); /* 0x15051CE8: mov byte ptr [edi], al */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x15051CEA: inc edi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x8)) = edx; /* 0x15051CEB: mov dword ptr [ebp - 8], edx */
    /* test LO8(eax), LO8(eax) */ /* 0x15051CEE: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15051CF7; /* 0x15051CF0: je 0x15051cf7 */
L_15051CF2:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x15051CF2: sub ecx, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_15051CE0; /* 0x15051CF5: jne 0x15051ce0 */
L_15051CF7:
    MEM32(ebp + 0x10) = esi; /* 0x15051CF7: mov dword ptr [ebp + 0x10], esi */
    esi = MEM32(ebp + 0x8); /* 0x15051CFA: mov esi, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x15051CFD: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15051D4A; /* 0x15051CFF: jne 0x15051d4a */
L_15051D01:
    eax = MEM32(ebp + 0x10); /* 0x15051D01: mov eax, dword ptr [ebp + 0x10] */
    /* cmp MEM8(eax), 0 */ /* 0x15051D04: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15051D3F; /* 0x15051D07: jne 0x15051d3f */
L_15051D09:
    edi = edx; /* 0x15051D09: mov edi, edx */
    /* cmp edx, esi */ /* 0x15051D0B: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_15051D25; /* 0x15051D0D: jb 0x15051d25 */
L_15051D0F:
    eax = (uint32_t)MEM8(edi); /* 0x15051D0F: movzx eax, byte ptr [edi] */
    PUSH32(esp, eax); /* 0x15051D12: push eax */
    RECOMP_CALL(sub_15050550); /* 0x15051D13: call 0x15050550 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15051D18: pop ecx */
    /* test eax, eax */ /* 0x15051D19: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15051D22; /* 0x15051D1B: je 0x15051d22 */
L_15051D1D:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x15051D1D: dec edi */
    _flag_k = FK_DEC;
    /* cmp edi, esi */ /* 0x15051D1E: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_15051D0F; /* 0x15051D20: jae 0x15051d0f */
L_15051D22:
    edx = MEM32(ebp + (-0x8)); /* 0x15051D22: mov edx, dword ptr [ebp - 8] */
L_15051D25:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - edi; /* 0x15051D25: sub edx, edi */
    _flag_k = FK_CMP;
    /* test LO8(edx), 1 */ /* 0x15051D27: test dl, 1 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15051D3F; /* 0x15051D2A: je 0x15051d3f */
L_15051D2C:
    eax = MEM32(ebp + (-0x4)); /* 0x15051D2C: mov eax, dword ptr [ebp - 4] */
    MEM8(eax) = (uint8_t)(LO8(ebx)); /* 0x15051D2F: mov byte ptr [eax], bl */
L_15051D31:
    RECOMP_CALL(sub_15036430); /* 0x15051D31: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x2Au); /* 0x15051D36: push 0x2a */
    ecx = POP32_VAL(esp); /* 0x15051D38: pop ecx */
    MEM32(eax) = ecx; /* 0x15051D39: mov dword ptr [eax], ecx */
    eax = ecx; /* 0x15051D3B: mov eax, ecx */
    goto L_15051D9D; /* 0x15051D3D: jmp 0x15051d9d */
L_15051D3F:
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x15051D3F: mov byte ptr [esi], bl */
    RECOMP_CALL(sub_15036430); /* 0x15051D41: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x22u); /* 0x15051D46: push 0x22 */
    goto L_15051D8B; /* 0x15051D48: jmp 0x15051d8b */
L_15051D4A:
    ecx = edi + (-0x2); /* 0x15051D4A: lea ecx, [edi - 2] */
    MEM32(ebp + (-0x8)) = ecx; /* 0x15051D4D: mov dword ptr [ebp - 8], ecx */
    edi = ecx; /* 0x15051D50: mov edi, ecx */
    /* cmp ecx, esi */ /* 0x15051D52: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_15051D6C; /* 0x15051D54: jb 0x15051d6c */
L_15051D56:
    eax = (uint32_t)MEM8(edi); /* 0x15051D56: movzx eax, byte ptr [edi] */
    PUSH32(esp, eax); /* 0x15051D59: push eax */
    RECOMP_CALL(sub_15050550); /* 0x15051D5A: call 0x15050550 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15051D5F: pop ecx */
    /* test eax, eax */ /* 0x15051D60: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15051D69; /* 0x15051D62: je 0x15051d69 */
L_15051D64:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x15051D64: dec edi */
    _flag_k = FK_DEC;
    /* cmp edi, esi */ /* 0x15051D65: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_15051D56; /* 0x15051D67: jae 0x15051d56 */
L_15051D69:
    ecx = MEM32(ebp + (-0x8)); /* 0x15051D69: mov ecx, dword ptr [ebp - 8] */
L_15051D6C:
    eax = ecx; /* 0x15051D6C: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x15051D6E: sub eax, edi */
    _flag_k = FK_CMP;
    /* test LO8(eax), 1 */ /* 0x15051D70: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15051D78; /* 0x15051D72: je 0x15051d78 */
L_15051D74:
    MEM8(ecx) = (uint8_t)(LO8(ebx)); /* 0x15051D74: mov byte ptr [ecx], bl */
    RECOMP_BACKEDGE();
    goto L_15051D31; /* 0x15051D76: jmp 0x15051d31 */
L_15051D78:
    /* cmp MEM32(ebp + (-0xC)), 0 */ /* 0x15051D78: cmp dword ptr [ebp - 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15051D31; /* 0x15051D7C: jne 0x15051d31 */
L_15051D7E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15051D7E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15051D9D; /* 0x15051D80: jmp 0x15051d9d */
L_15051D82:
    RECOMP_CALL(sub_15036430); /* 0x15051D82: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15051D87: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_15051D89:
    PUSH32(esp, 0x16u); /* 0x15051D89: push 0x16 */
L_15051D8B:
    esi = POP32_VAL(esp); /* 0x15051D8B: pop esi */
    PUSH32(esp, ebx); /* 0x15051D8C: push ebx */
    PUSH32(esp, ebx); /* 0x15051D8D: push ebx */
    PUSH32(esp, ebx); /* 0x15051D8E: push ebx */
    PUSH32(esp, ebx); /* 0x15051D8F: push ebx */
    PUSH32(esp, ebx); /* 0x15051D90: push ebx */
    MEM32(eax) = esi; /* 0x15051D91: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1505A110); /* 0x15051D93: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15051D98: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x15051D9B: mov eax, esi */
L_15051D9D:
    edi = POP32_VAL(esp); /* 0x15051D9D: pop edi */
    esi = POP32_VAL(esp); /* 0x15051D9E: pop esi */
    ebx = POP32_VAL(esp); /* 0x15051D9F: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15051DA0: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15051DA1: ret  */
    RECOMP_REGS_OUT();
}

void sub_15051DB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15051DB0u);

L_15051DB0:
    edi = edi; /* 0x15051DB0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15051DB2: push ebp */
    ebp = esp; /* 0x15051DB3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x15051DB5: sub esp, 0x1c */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x15051DB8: push ebx */
    PUSH32(esp, esi); /* 0x15051DB9: push esi */
    esi = MEM32(ebp + 0x8); /* 0x15051DBA: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x15051DBD: push edi */
    /* test esi, esi */ /* 0x15051DBE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15051F41; /* 0x15051DC0: je 0x15051f41 */
L_15051DC6:
    edi = MEM32(ebp + 0xC); /* 0x15051DC6: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x15051DC9: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15051F41; /* 0x15051DCB: je 0x15051f41 */
L_15051DD1:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x15051DD1: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15051DE5; /* 0x15051DD5: jne 0x15051de5 */
L_15051DD7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15051DD7: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x15051DD9: mov byte ptr [esi], bl */
    RECOMP_CALL(sub_15036430); /* 0x15051DDB: call 0x15036430 */
    RECOMP_FLAGS_IN();
    goto L_15051F48; /* 0x15051DE0: jmp 0x15051f48 */
L_15051DE5:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15051DE5: push dword ptr [ebp + 0x14] */
    ecx = ebp + (-0x1C); /* 0x15051DE8: lea ecx, [ebp - 0x1c] */
    RECOMP_CALL(sub_1502F870); /* 0x15051DEB: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x18)); /* 0x15051DF0: mov eax, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15051DF3: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(eax + 0x8), ebx */ /* 0x15051DF5: cmp dword ptr [eax + 8], ebx */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15051E0E; /* 0x15051DF8: jne 0x15051e0e */
L_15051DFA:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15051DFA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x15051DFD: push edi */
    PUSH32(esp, esi); /* 0x15051DFE: push esi */
    RECOMP_CALL(sub_1508E450); /* 0x15051DFF: call 0x1508e450 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15051E04: add esp, 0xc */
    _flag_k = FK_ADD;
    esi = eax; /* 0x15051E07: mov esi, eax */
    goto L_15051F32; /* 0x15051E09: jmp 0x15051f32 */
L_15051E0E:
    eax = MEM32(ebp + 0xC); /* 0x15051E0E: mov eax, dword ptr [ebp + 0xc] */
    edi = esi; /* 0x15051E11: mov edi, esi */
    MEM32(ebp + (-0x8)) = ebx; /* 0x15051E13: mov dword ptr [ebp - 8], ebx */
L_15051E16:
    /* cmp MEM8(edi), LO8(ebx) */ /* 0x15051E16: cmp byte ptr [edi], bl */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15051E31; /* 0x15051E18: je 0x15051e31 */
L_15051E1A:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x15051E1A: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x15051E1B: sub eax, 1 */
    _flag_k = FK_CMP;
    MEM32(ebp + 0xC) = eax; /* 0x15051E1E: mov dword ptr [ebp + 0xc], eax */
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_15051E16; /* 0x15051E21: jne 0x15051e16 */
L_15051E23:
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x15051E23: mov byte ptr [esi], bl */
    RECOMP_CALL(sub_15036430); /* 0x15051E25: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x15051E2A: push 0x16 */
    goto L_15051ED9; /* 0x15051E2C: jmp 0x15051ed9 */
L_15051E31:
    edx = edi + (-0x1); /* 0x15051E31: lea edx, [edi - 1] */
    MEM32(ebp + (-0xC)) = edx; /* 0x15051E34: mov dword ptr [ebp - 0xc], edx */
    ecx = edx; /* 0x15051E37: mov ecx, edx */
    MEM32(ebp + (-0x4)) = ecx; /* 0x15051E39: mov dword ptr [ebp - 4], ecx */
    /* cmp edx, esi */ /* 0x15051E3C: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_15051E68; /* 0x15051E3E: jb 0x15051e68 */
L_15051E40:
    MEM32(ebp + 0xC) = eax; /* 0x15051E40: mov dword ptr [ebp + 0xc], eax */
    ebx = edx; /* 0x15051E43: mov ebx, edx */
L_15051E45:
    eax = (uint32_t)MEM8(ebx); /* 0x15051E45: movzx eax, byte ptr [ebx] */
    ecx = ebp + (-0x1C); /* 0x15051E48: lea ecx, [ebp - 0x1c] */
    PUSH32(esp, ecx); /* 0x15051E4B: push ecx */
    PUSH32(esp, eax); /* 0x15051E4C: push eax */
    RECOMP_CALL(sub_15050570); /* 0x15051E4D: call 0x15050570 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15051E52: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15051E53: pop ecx */
    /* test eax, eax */ /* 0x15051E54: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15051E5D; /* 0x15051E56: je 0x15051e5d */
L_15051E58:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x15051E58: dec ebx */
    _flag_k = FK_DEC;
    /* cmp ebx, esi */ /* 0x15051E59: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_15051E45; /* 0x15051E5B: jae 0x15051e45 */
L_15051E5D:
    edx = MEM32(ebp + (-0xC)); /* 0x15051E5D: mov edx, dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x4)) = ebx; /* 0x15051E60: mov dword ptr [ebp - 4], ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15051E63: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x4)); /* 0x15051E65: mov ecx, dword ptr [ebp - 4] */
L_15051E68:
    eax = edx; /* 0x15051E68: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x15051E6A: sub eax, ecx */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0xC); /* 0x15051E6C: mov ecx, dword ptr [ebp + 0xc] */
    /* test LO8(eax), 1 */ /* 0x15051E6F: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15051E7F; /* 0x15051E71: je 0x15051e7f */
L_15051E73:
    edi = edx; /* 0x15051E73: mov edi, edx */
    MEM32(ebp + (-0x8)) = 1; /* 0x15051E75: mov dword ptr [ebp - 8], 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15051E7C: inc ecx */
    _flag_k = FK_INC;
    MEM8(edi) = (uint8_t)(LO8(ebx)); /* 0x15051E7D: mov byte ptr [edi], bl */
L_15051E7F:
    edx = MEM32(ebp + 0x10); /* 0x15051E7F: mov edx, dword ptr [ebp + 0x10] */
L_15051E82:
    SET_LO8(eax, MEM8(edx)); /* 0x15051E82: mov al, byte ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x15051E84: inc edx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0xC)) = edi; /* 0x15051E85: mov dword ptr [ebp - 0xc], edi */
    MEM32(ebp + (-0x4)) = edi; /* 0x15051E88: mov dword ptr [ebp - 4], edi */
    MEM8(edi) = (uint8_t)(LO8(eax)); /* 0x15051E8B: mov byte ptr [edi], al */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x15051E8D: inc edi */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x15051E8E: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15051E97; /* 0x15051E90: je 0x15051e97 */
L_15051E92:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x15051E92: sub ecx, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_15051E82; /* 0x15051E95: jne 0x15051e82 */
L_15051E97:
    /* test ecx, ecx */ /* 0x15051E97: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15051EEB; /* 0x15051E99: jne 0x15051eeb */
L_15051E9B:
    /* cmp MEM8(edx), LO8(ecx) */ /* 0x15051E9B: cmp byte ptr [edx], cl */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15051ED0; /* 0x15051E9D: jne 0x15051ed0 */
L_15051E9F:
    eax = MEM32(ebp + (-0x4)); /* 0x15051E9F: mov eax, dword ptr [ebp - 4] */
    edi = eax; /* 0x15051EA2: mov edi, eax */
    /* cmp eax, esi */ /* 0x15051EA4: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_15051EC3; /* 0x15051EA6: jb 0x15051ec3 */
L_15051EA8:
    eax = (uint32_t)MEM8(edi); /* 0x15051EA8: movzx eax, byte ptr [edi] */
    ecx = ebp + (-0x1C); /* 0x15051EAB: lea ecx, [ebp - 0x1c] */
    PUSH32(esp, ecx); /* 0x15051EAE: push ecx */
    PUSH32(esp, eax); /* 0x15051EAF: push eax */
    RECOMP_CALL(sub_15050570); /* 0x15051EB0: call 0x15050570 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15051EB5: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15051EB6: pop ecx */
    /* test eax, eax */ /* 0x15051EB7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15051EC0; /* 0x15051EB9: je 0x15051ec0 */
L_15051EBB:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x15051EBB: dec edi */
    _flag_k = FK_DEC;
    /* cmp edi, esi */ /* 0x15051EBC: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_15051EA8; /* 0x15051EBE: jae 0x15051ea8 */
L_15051EC0:
    eax = MEM32(ebp + (-0x4)); /* 0x15051EC0: mov eax, dword ptr [ebp - 4] */
L_15051EC3:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x15051EC3: sub eax, edi */
    _flag_k = FK_CMP;
    /* test LO8(eax), 1 */ /* 0x15051EC5: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15051ED0; /* 0x15051EC7: je 0x15051ed0 */
L_15051EC9:
    eax = MEM32(ebp + (-0xC)); /* 0x15051EC9: mov eax, dword ptr [ebp - 0xc] */
    MEM8(eax) = (uint8_t)(LO8(ebx)); /* 0x15051ECC: mov byte ptr [eax], bl */
    goto L_15051F24; /* 0x15051ECE: jmp 0x15051f24 */
L_15051ED0:
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x15051ED0: mov byte ptr [esi], bl */
    RECOMP_CALL(sub_15036430); /* 0x15051ED2: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x22u); /* 0x15051ED7: push 0x22 */
L_15051ED9:
    esi = POP32_VAL(esp); /* 0x15051ED9: pop esi */
    PUSH32(esp, ebx); /* 0x15051EDA: push ebx */
    PUSH32(esp, ebx); /* 0x15051EDB: push ebx */
    PUSH32(esp, ebx); /* 0x15051EDC: push ebx */
    PUSH32(esp, ebx); /* 0x15051EDD: push ebx */
    PUSH32(esp, ebx); /* 0x15051EDE: push ebx */
    MEM32(eax) = esi; /* 0x15051EDF: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1505A110); /* 0x15051EE1: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15051EE6: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_15051F32; /* 0x15051EE9: jmp 0x15051f32 */
L_15051EEB:
    ecx = edi + (-0x2); /* 0x15051EEB: lea ecx, [edi - 2] */
    MEM32(ebp + (-0xC)) = ecx; /* 0x15051EEE: mov dword ptr [ebp - 0xc], ecx */
    edi = ecx; /* 0x15051EF1: mov edi, ecx */
    /* cmp ecx, esi */ /* 0x15051EF3: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_15051F12; /* 0x15051EF5: jb 0x15051f12 */
L_15051EF7:
    eax = (uint32_t)MEM8(edi); /* 0x15051EF7: movzx eax, byte ptr [edi] */
    ecx = ebp + (-0x1C); /* 0x15051EFA: lea ecx, [ebp - 0x1c] */
    PUSH32(esp, ecx); /* 0x15051EFD: push ecx */
    PUSH32(esp, eax); /* 0x15051EFE: push eax */
    RECOMP_CALL(sub_15050570); /* 0x15051EFF: call 0x15050570 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15051F04: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15051F05: pop ecx */
    /* test eax, eax */ /* 0x15051F06: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15051F0F; /* 0x15051F08: je 0x15051f0f */
L_15051F0A:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x15051F0A: dec edi */
    _flag_k = FK_DEC;
    /* cmp edi, esi */ /* 0x15051F0B: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_15051EF7; /* 0x15051F0D: jae 0x15051ef7 */
L_15051F0F:
    ecx = MEM32(ebp + (-0xC)); /* 0x15051F0F: mov ecx, dword ptr [ebp - 0xc] */
L_15051F12:
    eax = ecx; /* 0x15051F12: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x15051F14: sub eax, edi */
    _flag_k = FK_CMP;
    /* test LO8(eax), 1 */ /* 0x15051F16: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15051F1E; /* 0x15051F18: je 0x15051f1e */
L_15051F1A:
    MEM8(ecx) = (uint8_t)(LO8(ebx)); /* 0x15051F1A: mov byte ptr [ecx], bl */
    goto L_15051F24; /* 0x15051F1C: jmp 0x15051f24 */
L_15051F1E:
    /* cmp MEM32(ebp + (-0x8)), 0 */ /* 0x15051F1E: cmp dword ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15051F30; /* 0x15051F22: je 0x15051f30 */
L_15051F24:
    RECOMP_CALL(sub_15036430); /* 0x15051F24: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x2Au); /* 0x15051F29: push 0x2a */
    esi = POP32_VAL(esp); /* 0x15051F2B: pop esi */
    MEM32(eax) = esi; /* 0x15051F2C: mov dword ptr [eax], esi */
    goto L_15051F32; /* 0x15051F2E: jmp 0x15051f32 */
L_15051F30:
    esi = ebx; /* 0x15051F30: mov esi, ebx */
L_15051F32:
    /* cmp MEM8(ebp + (-0x10)), 0 */ /* 0x15051F32: cmp byte ptr [ebp - 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x10))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15051F5A; /* 0x15051F36: je 0x15051f5a */
L_15051F38:
    ecx = MEM32(ebp + (-0x14)); /* 0x15051F38: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x15051F3B: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15051F5A; /* 0x15051F3F: jmp 0x15051f5a */
L_15051F41:
    RECOMP_CALL(sub_15036430); /* 0x15051F41: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15051F46: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_15051F48:
    PUSH32(esp, 0x16u); /* 0x15051F48: push 0x16 */
    esi = POP32_VAL(esp); /* 0x15051F4A: pop esi */
    PUSH32(esp, ebx); /* 0x15051F4B: push ebx */
    PUSH32(esp, ebx); /* 0x15051F4C: push ebx */
    PUSH32(esp, ebx); /* 0x15051F4D: push ebx */
    PUSH32(esp, ebx); /* 0x15051F4E: push ebx */
    PUSH32(esp, ebx); /* 0x15051F4F: push ebx */
    MEM32(eax) = esi; /* 0x15051F50: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1505A110); /* 0x15051F52: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15051F57: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15051F5A:
    edi = POP32_VAL(esp); /* 0x15051F5A: pop edi */
    eax = esi; /* 0x15051F5B: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x15051F5D: pop esi */
    ebx = POP32_VAL(esp); /* 0x15051F5E: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15051F5F: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15051F60: ret  */
    RECOMP_REGS_OUT();
}

void sub_15051F70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15051F70u);

L_15051F70:
    edi = edi; /* 0x15051F70: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15051F72: push ebp */
    ebp = esp; /* 0x15051F73: mov ebp, esp */
    PUSH32(esp, 0); /* 0x15051F75: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15051F77: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15051F7A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15051F90); /* 0x15051F7D: call 0x15051f90 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15051F82: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15051F85: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15051F86: ret  */
    RECOMP_REGS_OUT();
}

void sub_15051F90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15051F90u);

L_15051F90:
    edi = edi; /* 0x15051F90: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15051F92: push ebp */
    ebp = esp; /* 0x15051F93: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x15051F95: sub esp, 0x10 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x10); /* 0x15051F98: lea ecx, [ebp - 0x10] */
    PUSH32(esp, ebx); /* 0x15051F9B: push ebx */
    PUSH32(esp, esi); /* 0x15051F9C: push esi */
    PUSH32(esp, edi); /* 0x15051F9D: push edi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15051F9E: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1502F870); /* 0x15051FA1: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x15051FA6: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x15051FA9: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15051FC9; /* 0x15051FAB: jne 0x15051fc9 */
L_15051FAD:
    RECOMP_CALL(sub_15036430); /* 0x15051FAD: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15051FB2: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x15051FB4: push esi */
    PUSH32(esp, esi); /* 0x15051FB5: push esi */
    PUSH32(esp, esi); /* 0x15051FB6: push esi */
    PUSH32(esp, esi); /* 0x15051FB7: push esi */
    PUSH32(esp, esi); /* 0x15051FB8: push esi */
    MEM32(eax) = 0x16u; /* 0x15051FB9: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x15051FBF: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15051FC4: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_1505201C; /* 0x15051FC7: jmp 0x1505201c */
L_15051FC9:
    ebx = MEM32(ebp + (-0xC)); /* 0x15051FC9: mov ebx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15051FCC: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebx + 0x8), esi */ /* 0x15051FCE: cmp dword ptr [ebx + 8], esi */
    _flag_a = (uint32_t)(MEM32(ebx + 0x8)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505200A; /* 0x15051FD1: jne 0x1505200a */
L_15051FD3:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15051FD3: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x15051FD6: push ecx */
    RECOMP_CALL(sub_1508E4E0); /* 0x15051FD7: call 0x1508e4e0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15051FDC: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15051FDD: pop ecx */
    esi = eax; /* 0x15051FDE: mov esi, eax */
    goto L_1505201C; /* 0x15051FE0: jmp 0x1505201c */
L_15051FE2:
    edi = (uint32_t)LO16(eax); /* 0x15051FE2: movzx edi, ax */
    edx = ecx; /* 0x15051FE5: mov edx, ecx */
    /* test MEM8(edi + ebx + 0x1D), 4 */ /* 0x15051FE7: test byte ptr [edi + ebx + 0x1d], 4 */
    _flag_a = (uint32_t)(MEM8(edi + ebx + 0x1D)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15052004; /* 0x15051FEC: je 0x15052004 */
L_15051FEE:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15051FEE: inc ecx */
    _flag_k = FK_INC;
    SET_LO8(eax, MEM8(ecx)); /* 0x15051FEF: mov al, byte ptr [ecx] */
    /* test LO8(eax), LO8(eax) */ /* 0x15051FF1: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505201C; /* 0x15051FF3: je 0x1505201c */
L_15051FF5:
    if (8u) _cf = (((edi) >> 24) & 1u); /* 0x15051FF5: shl edi, 8 */
    if (8u) { _flag_a = recomp_flags_pack((edi << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 8u; /* 0x15051FF5: shl edi, 8 */
    eax = (uint32_t)LO8(eax); /* 0x15051FF8: movzx eax, al */
    _flag_a = (uint32_t)((edi | eax)); _flag_b = (uint32_t)((edi | eax));
    edi = edi | eax; /* 0x15051FFB: or edi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0xC), edi */ /* 0x15051FFD: cmp dword ptr [ebp + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505201E; /* 0x15052000: je 0x1505201e */
L_15052002:
    goto L_15052009; /* 0x15052002: jmp 0x15052009 */
L_15052004:
    /* cmp MEM32(ebp + 0xC), edi */ /* 0x15052004: cmp dword ptr [ebp + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15052012; /* 0x15052007: je 0x15052012 */
L_15052009:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15052009: inc ecx */
    _flag_k = FK_INC;
L_1505200A:
    eax = (uint32_t)MEM8(ecx); /* 0x1505200A: movzx eax, byte ptr [ecx] */
    /* test LO16(eax), LO16(eax) */ /* 0x1505200D: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15051FE2; /* 0x15052010: jne 0x15051fe2 */
L_15052012:
    eax = (uint32_t)LO16(eax); /* 0x15052012: movzx eax, ax */
    edx = ecx; /* 0x15052015: mov edx, ecx */
    /* cmp MEM32(ebp + 0xC), eax */ /* 0x15052017: cmp dword ptr [ebp + 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505201E; /* 0x1505201A: je 0x1505201e */
L_1505201C:
    edx = esi; /* 0x1505201C: mov edx, esi */
L_1505201E:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x1505201E: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    edi = POP32_VAL(esp); /* 0x15052022: pop edi */
    esi = POP32_VAL(esp); /* 0x15052023: pop esi */
    ebx = POP32_VAL(esp); /* 0x15052024: pop ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505202E; /* 0x15052025: je 0x1505202e */
L_15052027:
    ecx = MEM32(ebp + (-0x8)); /* 0x15052027: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1505202A: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1505202E:
    eax = edx; /* 0x1505202E: mov eax, edx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15052030: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15052031: ret  */
    RECOMP_REGS_OUT();
}

void sub_15052040(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15052040u);

L_15052040:
    edi = edi; /* 0x15052040: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15052042: push ebp */
    ebp = esp; /* 0x15052043: mov ebp, esp */
    PUSH32(esp, 0); /* 0x15052045: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15052047: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1505204A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15052060); /* 0x1505204D: call 0x15052060 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15052052: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15052055: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15052056: ret  */
    RECOMP_REGS_OUT();
}

void sub_15052060(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15052060u);

L_15052060:
    edi = edi; /* 0x15052060: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15052062: push ebp */
    ebp = esp; /* 0x15052063: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x15052065: sub esp, 0x14 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x14); /* 0x15052068: lea ecx, [ebp - 0x14] */
    PUSH32(esp, ebx); /* 0x1505206B: push ebx */
    PUSH32(esp, esi); /* 0x1505206C: push esi */
    PUSH32(esp, edi); /* 0x1505206D: push edi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1505206E: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1502F870); /* 0x15052071: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x8); /* 0x15052076: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x15052079: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15052084; /* 0x1505207B: je 0x15052084 */
L_1505207D:
    edi = MEM32(ebp + 0xC); /* 0x1505207D: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x15052080: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150520A8; /* 0x15052082: jne 0x150520a8 */
L_15052084:
    RECOMP_CALL(sub_15036430); /* 0x15052084: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x15052089: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edx); /* 0x1505208B: push edx */
    PUSH32(esp, edx); /* 0x1505208C: push edx */
    PUSH32(esp, edx); /* 0x1505208D: push edx */
    PUSH32(esp, edx); /* 0x1505208E: push edx */
    PUSH32(esp, edx); /* 0x1505208F: push edx */
    MEM32(eax) = 0x16u; /* 0x15052090: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x15052096: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505209B: add esp, 0x14 */
    _flag_k = FK_ADD;
    edx = 0x7FFFFFFFu; /* 0x1505209E: mov edx, 0x7fffffff */
    goto L_1505214C; /* 0x150520A3: jmp 0x1505214c */
L_150520A8:
    eax = MEM32(ebp + (-0x10)); /* 0x150520A8: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x150520AB: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(eax + 0x8), edx */ /* 0x150520AD: cmp dword ptr [eax + 8], edx */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150520DB; /* 0x150520B0: jne 0x150520db */
L_150520B2:
    SET_LO8(eax, MEM8(esi)); /* 0x150520B2: mov al, byte ptr [esi] */
    /* cmp LO8(eax), MEM8(edi) */ /* 0x150520B4: cmp al, byte ptr [edi] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(edi)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_150520D4; /* 0x150520B6: jne 0x150520d4 */
L_150520B8:
    /* test LO8(eax), LO8(eax) */ /* 0x150520B8: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505214C; /* 0x150520BA: je 0x1505214c */
L_150520C0:
    SET_LO8(eax, MEM8(esi + 0x1)); /* 0x150520C0: mov al, byte ptr [esi + 1] */
    /* cmp LO8(eax), MEM8(edi + 0x1) */ /* 0x150520C3: cmp al, byte ptr [edi + 1] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(edi + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_150520D4; /* 0x150520C6: jne 0x150520d4 */
L_150520C8:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x150520C8: add esi, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x150520CB: add edi, 2 */
    _flag_k = FK_ADD;
    /* test LO8(eax), LO8(eax) */ /* 0x150520CE: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150520B2; /* 0x150520D0: jne 0x150520b2 */
L_150520D2:
    goto L_1505214C; /* 0x150520D2: jmp 0x1505214c */
L_150520D4:
    { uint32_t _sa = edx, _sb = edx, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x150520D4: sbb edx, edx */
      edx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((edx | 1)); _flag_b = (uint32_t)((edx | 1));
    edx = edx | 1; /* 0x150520D6: or edx, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1505214C; /* 0x150520D9: jmp 0x1505214c */
L_150520DB:
    SET_LO8(ecx, MEM8(esi)); /* 0x150520DB: mov cl, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x150520DD: inc esi */
    _flag_k = FK_INC;
    eax = (uint32_t)LO8(ecx); /* 0x150520DE: movzx eax, cl */
    ebx = (uint32_t)LO8(ecx); /* 0x150520E1: movzx ebx, cl */
    ecx = MEM32(ebp + (-0x10)); /* 0x150520E4: mov ecx, dword ptr [ebp - 0x10] */
    /* test MEM8(eax + ecx + 0x1D), 4 */ /* 0x150520E7: test byte ptr [eax + ecx + 0x1d], 4 */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x1D)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15052105; /* 0x150520EC: je 0x15052105 */
L_150520EE:
    SET_LO8(eax, MEM8(esi)); /* 0x150520EE: mov al, byte ptr [esi] */
    /* test LO8(eax), LO8(eax) */ /* 0x150520F0: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150520F8; /* 0x150520F2: jne 0x150520f8 */
L_150520F4:
    ebx = edx; /* 0x150520F4: mov ebx, edx */
    goto L_15052105; /* 0x150520F6: jmp 0x15052105 */
L_150520F8:
    if (8u) _cf = (((ebx) >> 24) & 1u); /* 0x150520F8: shl ebx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ebx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 8u; /* 0x150520F8: shl ebx, 8 */
    eax = (uint32_t)LO8(eax); /* 0x150520FB: movzx eax, al */
    _flag_a = (uint32_t)((LO16(ebx) | LO16(eax))) << 16; _flag_b = (uint32_t)((LO16(ebx) | LO16(eax))) << 16;
    SET_LO16(ebx, LO16(ebx) | LO16(eax)); /* 0x150520FE: or bx, ax */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15052101: inc esi */
    _flag_k = FK_INC;
    ebx = (uint32_t)LO16(ebx); /* 0x15052102: movzx ebx, bx */
L_15052105:
    SET_LO8(ecx, MEM8(edi)); /* 0x15052105: mov cl, byte ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x15052107: inc edi */
    _flag_k = FK_INC;
    eax = (uint32_t)LO8(ecx); /* 0x15052108: movzx eax, cl */
    MEM32(ebp + (-0x4)) = eax; /* 0x1505210B: mov dword ptr [ebp - 4], eax */
    eax = (uint32_t)LO8(ecx); /* 0x1505210E: movzx eax, cl */
    ecx = MEM32(ebp + (-0x10)); /* 0x15052111: mov ecx, dword ptr [ebp - 0x10] */
    /* test MEM8(eax + ecx + 0x1D), 4 */ /* 0x15052114: test byte ptr [eax + ecx + 0x1d], 4 */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x1D)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15052137; /* 0x15052119: je 0x15052137 */
L_1505211B:
    SET_LO8(eax, MEM8(edi)); /* 0x1505211B: mov al, byte ptr [edi] */
    /* test LO8(eax), LO8(eax) */ /* 0x1505211D: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15052125; /* 0x1505211F: jne 0x15052125 */
L_15052121:
    ecx = edx; /* 0x15052121: mov ecx, edx */
    goto L_1505213A; /* 0x15052123: jmp 0x1505213a */
L_15052125:
    ecx = MEM32(ebp + (-0x4)); /* 0x15052125: mov ecx, dword ptr [ebp - 4] */
    if (8u) _cf = (((ecx) >> 24) & 1u); /* 0x15052128: shl ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 8u; /* 0x15052128: shl ecx, 8 */
    eax = (uint32_t)LO8(eax); /* 0x1505212B: movzx eax, al */
    _flag_a = (uint32_t)((LO16(ecx) | LO16(eax))) << 16; _flag_b = (uint32_t)((LO16(ecx) | LO16(eax))) << 16;
    SET_LO16(ecx, LO16(ecx) | LO16(eax)); /* 0x1505212E: or cx, ax */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x15052131: inc edi */
    _flag_k = FK_INC;
    ecx = (uint32_t)LO16(ecx); /* 0x15052132: movzx ecx, cx */
    goto L_1505213A; /* 0x15052135: jmp 0x1505213a */
L_15052137:
    ecx = MEM32(ebp + (-0x4)); /* 0x15052137: mov ecx, dword ptr [ebp - 4] */
L_1505213A:
    /* cmp LO16(ecx), LO16(ebx) */ /* 0x1505213A: cmp cx, bx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15052146; /* 0x1505213D: jne 0x15052146 */
L_1505213F:
    /* test LO16(ebx), LO16(ebx) */ /* 0x1505213F: test bx, bx */
    _flag_a = (uint32_t)(LO16(ebx)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150520DB; /* 0x15052142: jne 0x150520db */
L_15052144:
    goto L_1505214C; /* 0x15052144: jmp 0x1505214c */
L_15052146:
    { uint32_t _sa = edx, _sb = edx, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x15052146: sbb edx, edx */
      edx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    edx = edx & 2; /* 0x15052148: and edx, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1505214B: dec edx */
    _flag_k = FK_DEC;
L_1505214C:
    /* cmp MEM8(ebp + (-0x8)), 0 */ /* 0x1505214C: cmp byte ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x8))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    edi = POP32_VAL(esp); /* 0x15052150: pop edi */
    esi = POP32_VAL(esp); /* 0x15052151: pop esi */
    ebx = POP32_VAL(esp); /* 0x15052152: pop ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505215C; /* 0x15052153: je 0x1505215c */
L_15052155:
    ecx = MEM32(ebp + (-0xC)); /* 0x15052155: mov ecx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x15052158: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1505215C:
    eax = edx; /* 0x1505215C: mov eax, edx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1505215E: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505215F: ret  */
    RECOMP_REGS_OUT();
}

void sub_15052170(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15052170u);

L_15052170:
    edi = edi; /* 0x15052170: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15052172: push ebp */
    ebp = esp; /* 0x15052173: mov ebp, esp */
    PUSH32(esp, 0); /* 0x15052175: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15052177: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1505217A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15052190); /* 0x1505217D: call 0x15052190 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15052182: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15052185: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15052186: ret  */
    RECOMP_REGS_OUT();
}

void sub_15052190(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15052190u);

L_15052190:
    edi = edi; /* 0x15052190: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15052192: push ebp */
    ebp = esp; /* 0x15052193: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x15052195: sub esp, 0x10 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x10); /* 0x15052198: lea ecx, [ebp - 0x10] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1505219B: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1502F870); /* 0x1505219E: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x150521A3: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x150521A6: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150521B1; /* 0x150521A8: je 0x150521b1 */
L_150521AA:
    eax = MEM32(ebp + 0xC); /* 0x150521AA: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x150521AD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150521CD; /* 0x150521AF: jne 0x150521cd */
L_150521B1:
    RECOMP_CALL(sub_15036430); /* 0x150521B1: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x150521B6: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150521BC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x150521BE: push eax */
    PUSH32(esp, eax); /* 0x150521BF: push eax */
    PUSH32(esp, eax); /* 0x150521C0: push eax */
    PUSH32(esp, eax); /* 0x150521C1: push eax */
    PUSH32(esp, eax); /* 0x150521C2: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x150521C3: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150521C8: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_15052211; /* 0x150521CB: jmp 0x15052211 */
L_150521CD:
    edx = MEM32(ebp + (-0xC)); /* 0x150521CD: mov edx, dword ptr [ebp - 0xc] */
    /* cmp MEM32(edx + 0x8), 0 */ /* 0x150521D0: cmp dword ptr [edx + 8], 0 */
    _flag_a = (uint32_t)(MEM32(edx + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150521E5; /* 0x150521D4: jne 0x150521e5 */
L_150521D6:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x150521D6: push dword ptr [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x150521D9: push eax */
    PUSH32(esp, ecx); /* 0x150521DA: push ecx */
    RECOMP_CALL(sub_1508B9F0); /* 0x150521DB: call 0x1508b9f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x150521E0: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_1505221B; /* 0x150521E3: jmp 0x1505221b */
L_150521E5:
    PUSH32(esp, MEM32(edx + 0x4)); /* 0x150521E5: push dword ptr [edx + 4] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x150521E8: push -1 */
    PUSH32(esp, eax); /* 0x150521EA: push eax */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x150521EB: push -1 */
    PUSH32(esp, ecx); /* 0x150521ED: push ecx */
    PUSH32(esp, 0x1000u); /* 0x150521EE: push 0x1000 */
    PUSH32(esp, MEM32(edx + 0xC)); /* 0x150521F3: push dword ptr [edx + 0xc] */
    eax = ebp + (-0x10); /* 0x150521F6: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x150521F9: push eax */
    RECOMP_CALL(sub_150584C0); /* 0x150521FA: call 0x150584c0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x150521FF: add esp, 0x20 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15052202: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15052218; /* 0x15052204: jne 0x15052218 */
L_15052206:
    RECOMP_CALL(sub_15036430); /* 0x15052206: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1505220B: mov dword ptr [eax], 0x16 */
L_15052211:
    eax = 0x7FFFFFFFu; /* 0x15052211: mov eax, 0x7fffffff */
    goto L_1505221B; /* 0x15052216: jmp 0x1505221b */
L_15052218:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFFEu; /* 0x15052218: add eax, -2 */
    _flag_k = FK_ADD;
L_1505221B:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x1505221B: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15052228; /* 0x1505221F: je 0x15052228 */
L_15052221:
    ecx = MEM32(ebp + (-0x8)); /* 0x15052221: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x15052224: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_15052228:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15052228: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15052229: ret  */
    RECOMP_REGS_OUT();
}

void sub_15052230(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15052230u);

L_15052230:
    edi = edi; /* 0x15052230: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15052232: push ebp */
    ebp = esp; /* 0x15052233: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x15052235: push ecx */
    PUSH32(esp, ebx); /* 0x15052236: push ebx */
    PUSH32(esp, esi); /* 0x15052237: push esi */
    esi = MEM32(ebp + 0x8); /* 0x15052238: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1505223B: push edi */
    /* test esi, esi */ /* 0x1505223C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150522F4; /* 0x1505223E: je 0x150522f4 */
L_15052244:
    edx = MEM32(ebp + 0xC); /* 0x15052244: mov edx, dword ptr [ebp + 0xc] */
    /* test edx, edx */ /* 0x15052247: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150522F4; /* 0x15052249: je 0x150522f4 */
L_1505224F:
    ecx = MEM32(ebp + 0x10); /* 0x1505224F: mov ecx, dword ptr [ebp + 0x10] */
    /* test ecx, ecx */ /* 0x15052252: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15052264; /* 0x15052254: jne 0x15052264 */
L_15052256:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15052256: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x15052258: mov byte ptr [esi], bl */
    RECOMP_CALL(sub_15036430); /* 0x1505225A: call 0x15036430 */
    RECOMP_FLAGS_IN();
    goto L_150522FB; /* 0x1505225F: jmp 0x150522fb */
L_15052264:
    edi = esi; /* 0x15052264: mov edi, esi */
L_15052266:
    SET_LO8(eax, MEM8(ecx)); /* 0x15052266: mov al, byte ptr [ecx] */
    ebx = edi; /* 0x15052268: mov ebx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1505226A: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = edi; /* 0x1505226B: mov dword ptr [ebp - 4], edi */
    MEM8(edi) = (uint8_t)(LO8(eax)); /* 0x1505226E: mov byte ptr [edi], al */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x15052270: inc edi */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x15052271: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_150522C3; /* 0x15052273: je 0x150522c3 */
L_15052275:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 1; /* 0x15052275: sub edx, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_15052266; /* 0x15052278: jne 0x15052266 */
L_1505227A:
    /* test edx, edx */ /* 0x1505227A: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150522C3; /* 0x1505227C: jne 0x150522c3 */
L_1505227E:
    /* cmp MEM8(ecx), LO8(edx) */ /* 0x1505227E: cmp byte ptr [ecx], dl */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_150522B6; /* 0x15052280: jne 0x150522b6 */
L_15052282:
    edi = ebx; /* 0x15052282: mov edi, ebx */
    /* cmp ebx, esi */ /* 0x15052284: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1505229B; /* 0x15052286: jb 0x1505229b */
L_15052288:
    eax = (uint32_t)MEM8(edi); /* 0x15052288: movzx eax, byte ptr [edi] */
    PUSH32(esp, eax); /* 0x1505228B: push eax */
    RECOMP_CALL(sub_15050550); /* 0x1505228C: call 0x15050550 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15052291: pop ecx */
    /* test eax, eax */ /* 0x15052292: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505229B; /* 0x15052294: je 0x1505229b */
L_15052296:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x15052296: dec edi */
    _flag_k = FK_DEC;
    /* cmp edi, esi */ /* 0x15052297: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_15052288; /* 0x15052299: jae 0x15052288 */
L_1505229B:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - edi; /* 0x1505229B: sub ebx, edi */
    _flag_k = FK_CMP;
    /* test LO8(ebx), 1 */ /* 0x1505229D: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_150522B6; /* 0x150522A0: je 0x150522b6 */
L_150522A2:
    eax = MEM32(ebp + (-0x4)); /* 0x150522A2: mov eax, dword ptr [ebp - 4] */
    MEM8(eax) = (uint8_t)(0); /* 0x150522A5: mov byte ptr [eax], 0 */
L_150522A8:
    RECOMP_CALL(sub_15036430); /* 0x150522A8: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x2Au); /* 0x150522AD: push 0x2a */
    ecx = POP32_VAL(esp); /* 0x150522AF: pop ecx */
    MEM32(eax) = ecx; /* 0x150522B0: mov dword ptr [eax], ecx */
    eax = ecx; /* 0x150522B2: mov eax, ecx */
    goto L_1505230F; /* 0x150522B4: jmp 0x1505230f */
L_150522B6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x150522B6: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x150522B8: mov byte ptr [esi], bl */
    RECOMP_CALL(sub_15036430); /* 0x150522BA: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x22u); /* 0x150522BF: push 0x22 */
    goto L_150522FD; /* 0x150522C1: jmp 0x150522fd */
L_150522C3:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0xFFFFFFFEu; /* 0x150522C3: add edi, -2 */
    _flag_k = FK_ADD;
    ebx = edi; /* 0x150522C6: mov ebx, edi */
    /* cmp edi, esi */ /* 0x150522C8: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_150522DF; /* 0x150522CA: jb 0x150522df */
L_150522CC:
    eax = (uint32_t)MEM8(ebx); /* 0x150522CC: movzx eax, byte ptr [ebx] */
    PUSH32(esp, eax); /* 0x150522CF: push eax */
    RECOMP_CALL(sub_15050550); /* 0x150522D0: call 0x15050550 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150522D5: pop ecx */
    /* test eax, eax */ /* 0x150522D6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150522DF; /* 0x150522D8: je 0x150522df */
L_150522DA:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x150522DA: dec ebx */
    _flag_k = FK_DEC;
    /* cmp ebx, esi */ /* 0x150522DB: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_150522CC; /* 0x150522DD: jae 0x150522cc */
L_150522DF:
    eax = edi; /* 0x150522DF: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x150522E1: sub eax, ebx */
    _flag_k = FK_CMP;
    /* test LO8(eax), 1 */ /* 0x150522E3: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_150522F0; /* 0x150522E5: je 0x150522f0 */
L_150522E7:
    /* cmp edi, esi */ /* 0x150522E7: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_150522F0; /* 0x150522E9: jb 0x150522f0 */
L_150522EB:
    MEM8(edi) = (uint8_t)(0); /* 0x150522EB: mov byte ptr [edi], 0 */
    RECOMP_BACKEDGE();
    goto L_150522A8; /* 0x150522EE: jmp 0x150522a8 */
L_150522F0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150522F0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1505230F; /* 0x150522F2: jmp 0x1505230f */
L_150522F4:
    RECOMP_CALL(sub_15036430); /* 0x150522F4: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x150522F9: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_150522FB:
    PUSH32(esp, 0x16u); /* 0x150522FB: push 0x16 */
L_150522FD:
    esi = POP32_VAL(esp); /* 0x150522FD: pop esi */
    PUSH32(esp, ebx); /* 0x150522FE: push ebx */
    PUSH32(esp, ebx); /* 0x150522FF: push ebx */
    PUSH32(esp, ebx); /* 0x15052300: push ebx */
    PUSH32(esp, ebx); /* 0x15052301: push ebx */
    PUSH32(esp, ebx); /* 0x15052302: push ebx */
    MEM32(eax) = esi; /* 0x15052303: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1505A110); /* 0x15052305: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1505230A: mov eax, esi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505230C: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1505230F:
    edi = POP32_VAL(esp); /* 0x1505230F: pop edi */
    esi = POP32_VAL(esp); /* 0x15052310: pop esi */
    ebx = POP32_VAL(esp); /* 0x15052311: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15052312: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15052313: ret  */
    RECOMP_REGS_OUT();
}

void sub_15052320(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15052320u);

L_15052320:
    edi = edi; /* 0x15052320: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15052322: push ebp */
    ebp = esp; /* 0x15052323: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x15052325: sub esp, 0x18 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x15052328: push ebx */
    PUSH32(esp, esi); /* 0x15052329: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1505232A: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1505232D: push edi */
    /* test esi, esi */ /* 0x1505232E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15052445; /* 0x15052330: je 0x15052445 */
L_15052336:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x15052336: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_15052445; /* 0x1505233A: jbe 0x15052445 */
L_15052340:
    edi = MEM32(ebp + 0x10); /* 0x15052340: mov edi, dword ptr [ebp + 0x10] */
    /* test edi, edi */ /* 0x15052343: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15052355; /* 0x15052345: jne 0x15052355 */
L_15052347:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15052347: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x15052349: mov byte ptr [esi], bl */
    RECOMP_CALL(sub_15036430); /* 0x1505234B: call 0x15036430 */
    RECOMP_FLAGS_IN();
    goto L_1505244C; /* 0x15052350: jmp 0x1505244c */
L_15052355:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15052355: push dword ptr [ebp + 0x14] */
    ecx = ebp + (-0x18); /* 0x15052358: lea ecx, [ebp - 0x18] */
    RECOMP_CALL(sub_1502F870); /* 0x1505235B: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x14)); /* 0x15052360: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15052363: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(eax + 0x8), ebx */ /* 0x15052365: cmp dword ptr [eax + 8], ebx */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505237E; /* 0x15052368: jne 0x1505237e */
L_1505236A:
    PUSH32(esp, edi); /* 0x1505236A: push edi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1505236B: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1505236E: push esi */
    RECOMP_CALL(sub_1508E640); /* 0x1505236F: call 0x1508e640 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15052374: add esp, 0xc */
    _flag_k = FK_ADD;
    esi = eax; /* 0x15052377: mov esi, eax */
    goto L_15052436; /* 0x15052379: jmp 0x15052436 */
L_1505237E:
    ecx = esi; /* 0x1505237E: mov ecx, esi */
L_15052380:
    SET_LO8(eax, MEM8(edi)); /* 0x15052380: mov al, byte ptr [edi] */
    edx = ecx; /* 0x15052382: mov edx, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x15052384: inc edi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x8)) = ecx; /* 0x15052385: mov dword ptr [ebp - 8], ecx */
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x15052388: mov byte ptr [ecx], al */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1505238A: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = edx; /* 0x1505238B: mov dword ptr [ebp - 4], edx */
    /* test LO8(eax), LO8(eax) */ /* 0x1505238E: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_150523EF; /* 0x15052390: je 0x150523ef */
L_15052392:
    eax = MEM32(ebp + 0xC); /* 0x15052392: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x15052395: sub eax, 1 */
    _flag_k = FK_CMP;
    MEM32(ebp + 0xC) = eax; /* 0x15052398: mov dword ptr [ebp + 0xc], eax */
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_15052380; /* 0x1505239B: jne 0x15052380 */
L_1505239D:
    /* test eax, eax */ /* 0x1505239D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150523EF; /* 0x1505239F: jne 0x150523ef */
L_150523A1:
    /* cmp MEM8(edi), LO8(ebx) */ /* 0x150523A1: cmp byte ptr [edi], bl */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_150523D4; /* 0x150523A3: jne 0x150523d4 */
L_150523A5:
    edi = edx; /* 0x150523A5: mov edi, edx */
    /* cmp edx, esi */ /* 0x150523A7: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_150523C6; /* 0x150523A9: jb 0x150523c6 */
L_150523AB:
    eax = (uint32_t)MEM8(edi); /* 0x150523AB: movzx eax, byte ptr [edi] */
    ecx = ebp + (-0x18); /* 0x150523AE: lea ecx, [ebp - 0x18] */
    PUSH32(esp, ecx); /* 0x150523B1: push ecx */
    PUSH32(esp, eax); /* 0x150523B2: push eax */
    RECOMP_CALL(sub_15050570); /* 0x150523B3: call 0x15050570 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150523B8: pop ecx */
    ecx = POP32_VAL(esp); /* 0x150523B9: pop ecx */
    /* test eax, eax */ /* 0x150523BA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150523C3; /* 0x150523BC: je 0x150523c3 */
L_150523BE:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x150523BE: dec edi */
    _flag_k = FK_DEC;
    /* cmp edi, esi */ /* 0x150523BF: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_150523AB; /* 0x150523C1: jae 0x150523ab */
L_150523C3:
    edx = MEM32(ebp + (-0x4)); /* 0x150523C3: mov edx, dword ptr [ebp - 4] */
L_150523C6:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - edi; /* 0x150523C6: sub edx, edi */
    _flag_k = FK_CMP;
    /* test LO8(edx), 1 */ /* 0x150523C8: test dl, 1 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_150523D4; /* 0x150523CB: je 0x150523d4 */
L_150523CD:
    eax = MEM32(ebp + (-0x8)); /* 0x150523CD: mov eax, dword ptr [ebp - 8] */
    MEM8(eax) = (uint8_t)(LO8(ebx)); /* 0x150523D0: mov byte ptr [eax], bl */
    goto L_15052428; /* 0x150523D2: jmp 0x15052428 */
L_150523D4:
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x150523D4: mov byte ptr [esi], bl */
    RECOMP_CALL(sub_15036430); /* 0x150523D6: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x22u); /* 0x150523DB: push 0x22 */
    esi = POP32_VAL(esp); /* 0x150523DD: pop esi */
    PUSH32(esp, ebx); /* 0x150523DE: push ebx */
    PUSH32(esp, ebx); /* 0x150523DF: push ebx */
    PUSH32(esp, ebx); /* 0x150523E0: push ebx */
    PUSH32(esp, ebx); /* 0x150523E1: push ebx */
    PUSH32(esp, ebx); /* 0x150523E2: push ebx */
    MEM32(eax) = esi; /* 0x150523E3: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1505A110); /* 0x150523E5: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150523EA: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_15052436; /* 0x150523ED: jmp 0x15052436 */
L_150523EF:
    edi = ecx + (-0x2); /* 0x150523EF: lea edi, [ecx - 2] */
    ecx = edi; /* 0x150523F2: mov ecx, edi */
    /* cmp edi, esi */ /* 0x150523F4: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1505241A; /* 0x150523F6: jb 0x1505241a */
L_150523F8:
    ebx = edi; /* 0x150523F8: mov ebx, edi */
L_150523FA:
    eax = (uint32_t)MEM8(ebx); /* 0x150523FA: movzx eax, byte ptr [ebx] */
    ecx = ebp + (-0x18); /* 0x150523FD: lea ecx, [ebp - 0x18] */
    PUSH32(esp, ecx); /* 0x15052400: push ecx */
    PUSH32(esp, eax); /* 0x15052401: push eax */
    RECOMP_CALL(sub_15050570); /* 0x15052402: call 0x15050570 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15052407: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15052408: pop ecx */
    /* test eax, eax */ /* 0x15052409: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15052412; /* 0x1505240B: je 0x15052412 */
L_1505240D:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x1505240D: dec ebx */
    _flag_k = FK_DEC;
    /* cmp ebx, esi */ /* 0x1505240E: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_150523FA; /* 0x15052410: jae 0x150523fa */
L_15052412:
    MEM32(ebp + (-0x4)) = ebx; /* 0x15052412: mov dword ptr [ebp - 4], ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15052415: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x4)); /* 0x15052417: mov ecx, dword ptr [ebp - 4] */
L_1505241A:
    eax = edi; /* 0x1505241A: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1505241C: sub eax, ecx */
    _flag_k = FK_CMP;
    /* test LO8(eax), 1 */ /* 0x1505241E: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15052434; /* 0x15052420: je 0x15052434 */
L_15052422:
    /* cmp edi, esi */ /* 0x15052422: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_15052434; /* 0x15052424: jb 0x15052434 */
L_15052426:
    MEM8(edi) = (uint8_t)(LO8(ebx)); /* 0x15052426: mov byte ptr [edi], bl */
L_15052428:
    RECOMP_CALL(sub_15036430); /* 0x15052428: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x2Au); /* 0x1505242D: push 0x2a */
    esi = POP32_VAL(esp); /* 0x1505242F: pop esi */
    MEM32(eax) = esi; /* 0x15052430: mov dword ptr [eax], esi */
    goto L_15052436; /* 0x15052432: jmp 0x15052436 */
L_15052434:
    esi = ebx; /* 0x15052434: mov esi, ebx */
L_15052436:
    /* cmp MEM8(ebp + (-0xC)), 0 */ /* 0x15052436: cmp byte ptr [ebp - 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0xC))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505245E; /* 0x1505243A: je 0x1505245e */
L_1505243C:
    ecx = MEM32(ebp + (-0x10)); /* 0x1505243C: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1505243F: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1505245E; /* 0x15052443: jmp 0x1505245e */
L_15052445:
    RECOMP_CALL(sub_15036430); /* 0x15052445: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1505244A: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1505244C:
    PUSH32(esp, 0x16u); /* 0x1505244C: push 0x16 */
    esi = POP32_VAL(esp); /* 0x1505244E: pop esi */
    PUSH32(esp, ebx); /* 0x1505244F: push ebx */
    PUSH32(esp, ebx); /* 0x15052450: push ebx */
    PUSH32(esp, ebx); /* 0x15052451: push ebx */
    PUSH32(esp, ebx); /* 0x15052452: push ebx */
    PUSH32(esp, ebx); /* 0x15052453: push ebx */
    MEM32(eax) = esi; /* 0x15052454: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1505A110); /* 0x15052456: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505245B: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1505245E:
    edi = POP32_VAL(esp); /* 0x1505245E: pop edi */
    eax = esi; /* 0x1505245F: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x15052461: pop esi */
    ebx = POP32_VAL(esp); /* 0x15052462: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15052463: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15052464: ret  */
    RECOMP_REGS_OUT();
}

void sub_15052470(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15052470u);

L_15052470:
    edi = edi; /* 0x15052470: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15052472: push ebp */
    ebp = esp; /* 0x15052473: mov ebp, esp */
    PUSH32(esp, 0); /* 0x15052475: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15052477: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1505247A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15052490); /* 0x1505247D: call 0x15052490 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15052482: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15052485: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15052486: ret  */
    RECOMP_REGS_OUT();
}

void sub_15052490(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15052490u);

L_15052490:
    edi = edi; /* 0x15052490: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15052492: push ebp */
    ebp = esp; /* 0x15052493: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x15052495: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x15052498: push ebx */
    PUSH32(esp, esi); /* 0x15052499: push esi */
    PUSH32(esp, edi); /* 0x1505249A: push edi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1505249B: push dword ptr [ebp + 0x10] */
    ecx = ebp + (-0x10); /* 0x1505249E: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1502F870); /* 0x150524A1: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0xC)); /* 0x150524A6: mov ebx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x150524A9: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebx + 0x8), esi */ /* 0x150524AB: cmp dword ptr [ebx + 8], esi */
    _flag_a = (uint32_t)(MEM32(ebx + 0x8)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150524C4; /* 0x150524AE: jne 0x150524c4 */
L_150524B0:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150524B0: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150524B3: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1508E6C0); /* 0x150524B6: call 0x1508e6c0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150524BB: pop ecx */
    ecx = POP32_VAL(esp); /* 0x150524BC: pop ecx */
    esi = eax; /* 0x150524BD: mov esi, eax */
    goto L_15052555; /* 0x150524BF: jmp 0x15052555 */
L_150524C4:
    edi = MEM32(ebp + 0x8); /* 0x150524C4: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x150524C7: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150524D0; /* 0x150524C9: je 0x150524d0 */
L_150524CB:
    /* cmp MEM32(ebp + 0xC), esi */ /* 0x150524CB: cmp dword ptr [ebp + 0xc], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150524EA; /* 0x150524CE: jne 0x150524ea */
L_150524D0:
    RECOMP_CALL(sub_15036430); /* 0x150524D0: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x150524D5: push esi */
    PUSH32(esp, esi); /* 0x150524D6: push esi */
    PUSH32(esp, esi); /* 0x150524D7: push esi */
    PUSH32(esp, esi); /* 0x150524D8: push esi */
    PUSH32(esp, esi); /* 0x150524D9: push esi */
    MEM32(eax) = 0x16u; /* 0x150524DA: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x150524E0: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150524E5: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_15052555; /* 0x150524E8: jmp 0x15052555 */
L_150524EA:
    /* cmp MEM8(edi), 0 */ /* 0x150524EA: cmp byte ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    esi = edi; /* 0x150524ED: mov esi, edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15052553; /* 0x150524EF: je 0x15052553 */
L_150524F1:
    edi = MEM32(ebp + 0xC); /* 0x150524F1: mov edi, dword ptr [ebp + 0xc] */
    SET_HI8(edx, MEM8(edi)); /* 0x150524F4: mov dh, byte ptr [edi] */
L_150524F6:
    ecx = edi; /* 0x150524F6: mov ecx, edi */
    SET_LO8(edx, HI8(edx)); /* 0x150524F8: mov dl, dh */
    /* test HI8(edx), HI8(edx) */ /* 0x150524FA: test dh, dh */
    _flag_a = (uint32_t)(HI8(edx)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15052537; /* 0x150524FC: je 0x15052537 */
L_150524FE:
    SET_HI8(ebx, MEM8(esi)); /* 0x150524FE: mov bh, byte ptr [esi] */
    SET_LO8(ebx, HI8(edx)); /* 0x15052500: mov bl, dh */
    edi = MEM32(ebp + (-0xC)); /* 0x15052502: mov edi, dword ptr [ebp - 0xc] */
L_15052505:
    eax = (uint32_t)LO8(ebx); /* 0x15052505: movzx eax, bl */
    /* test MEM8(eax + edi + 0x1D), 4 */ /* 0x15052508: test byte ptr [eax + edi + 0x1d], 4 */
    _flag_a = (uint32_t)(MEM8(eax + edi + 0x1D)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15052522; /* 0x1505250D: je 0x15052522 */
L_1505250F:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1505250F: inc ecx */
    _flag_k = FK_INC;
    /* cmp LO8(ebx), HI8(ebx) */ /* 0x15052510: cmp bl, bh */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505251D; /* 0x15052512: jne 0x1505251d */
L_15052514:
    SET_LO8(eax, MEM8(ecx)); /* 0x15052514: mov al, byte ptr [ecx] */
    SET_LO8(edx, LO8(ebx)); /* 0x15052516: mov dl, bl */
    /* cmp LO8(eax), MEM8(esi + 0x1) */ /* 0x15052518: cmp al, byte ptr [esi + 1] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(esi + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15052531; /* 0x1505251B: je 0x15052531 */
L_1505251D:
    /* cmp MEM8(ecx), 0 */ /* 0x1505251D: cmp byte ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    goto L_15052524; /* 0x15052520: jmp 0x15052524 */
L_15052522:
    /* cmp LO8(ebx), HI8(ebx) */ /* 0x15052522: cmp bl, bh */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
L_15052524:
    SET_LO8(edx, LO8(ebx)); /* 0x15052524: mov dl, bl */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_15052531; /* 0x15052526: je 0x15052531 */
L_15052528:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15052528: inc ecx */
    _flag_k = FK_INC;
    SET_LO8(edx, MEM8(ecx)); /* 0x15052529: mov dl, byte ptr [ecx] */
    SET_LO8(ebx, LO8(edx)); /* 0x1505252B: mov bl, dl */
    /* test LO8(edx), LO8(edx) */ /* 0x1505252D: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15052505; /* 0x1505252F: jne 0x15052505 */
L_15052531:
    edi = MEM32(ebp + 0xC); /* 0x15052531: mov edi, dword ptr [ebp + 0xc] */
    ebx = MEM32(ebp + (-0xC)); /* 0x15052534: mov ebx, dword ptr [ebp - 0xc] */
L_15052537:
    /* test LO8(edx), LO8(edx) */ /* 0x15052537: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15052550; /* 0x15052539: jne 0x15052550 */
L_1505253B:
    eax = (uint32_t)MEM8(esi); /* 0x1505253B: movzx eax, byte ptr [esi] */
    /* test MEM8(eax + ebx + 0x1D), 4 */ /* 0x1505253E: test byte ptr [eax + ebx + 0x1d], 4 */
    _flag_a = (uint32_t)(MEM8(eax + ebx + 0x1D)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505254A; /* 0x15052543: je 0x1505254a */
L_15052545:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15052545: inc esi */
    _flag_k = FK_INC;
    /* cmp MEM8(esi), LO8(edx) */ /* 0x15052546: cmp byte ptr [esi], dl */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15052550; /* 0x15052548: je 0x15052550 */
L_1505254A:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1505254A: inc esi */
    _flag_k = FK_INC;
    /* cmp MEM8(esi), 0 */ /* 0x1505254B: cmp byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_150524F6; /* 0x1505254E: jne 0x150524f6 */
L_15052550:
    edi = MEM32(ebp + 0x8); /* 0x15052550: mov edi, dword ptr [ebp + 8] */
L_15052553:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edi; /* 0x15052553: sub esi, edi */
    _flag_k = FK_CMP;
L_15052555:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x15052555: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15052562; /* 0x15052559: je 0x15052562 */
L_1505255B:
    ecx = MEM32(ebp + (-0x8)); /* 0x1505255B: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1505255E: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_15052562:
    edi = POP32_VAL(esp); /* 0x15052562: pop edi */
    eax = esi; /* 0x15052563: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x15052565: pop esi */
    ebx = POP32_VAL(esp); /* 0x15052566: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15052567: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15052568: ret  */
    RECOMP_REGS_OUT();
}

void sub_15052570(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15052570u);

L_15052570:
    edi = edi; /* 0x15052570: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15052572: push ebp */
    ebp = esp; /* 0x15052573: mov ebp, esp */
    PUSH32(esp, 0); /* 0x15052575: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15052577: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1505257A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15052590); /* 0x1505257D: call 0x15052590 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15052582: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15052585: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15052586: ret  */
    RECOMP_REGS_OUT();
}

void sub_15052590(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15052590u);

L_15052590:
    edi = edi; /* 0x15052590: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15052592: push ebp */
    ebp = esp; /* 0x15052593: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x15052595: sub esp, 0x10 */
    _flag_k = FK_CMP;
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x15052598: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150525BC; /* 0x1505259C: jne 0x150525bc */
L_1505259E:
    RECOMP_CALL(sub_15036430); /* 0x1505259E: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x150525A3: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150525A9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x150525AB: push eax */
    PUSH32(esp, eax); /* 0x150525AC: push eax */
    PUSH32(esp, eax); /* 0x150525AD: push eax */
    PUSH32(esp, eax); /* 0x150525AE: push eax */
    PUSH32(esp, eax); /* 0x150525AF: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x150525B0: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150525B5: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150525B8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150525BA: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150525BB: ret  */
L_150525BC:
    PUSH32(esp, esi); /* 0x150525BC: push esi */
    esi = MEM32(ebp + 0xC); /* 0x150525BD: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x150525C0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150525E0; /* 0x150525C2: jne 0x150525e0 */
L_150525C4:
    RECOMP_CALL(sub_15036430); /* 0x150525C4: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x150525C9: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150525CF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x150525D1: push eax */
    PUSH32(esp, eax); /* 0x150525D2: push eax */
    PUSH32(esp, eax); /* 0x150525D3: push eax */
    PUSH32(esp, eax); /* 0x150525D4: push eax */
    PUSH32(esp, eax); /* 0x150525D5: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x150525D6: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150525DB: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_150525E5; /* 0x150525DE: jmp 0x150525e5 */
L_150525E0:
    /* cmp MEM32(ebp + 0x8), esi */ /* 0x150525E0: cmp dword ptr [ebp + 8], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_150525E9; /* 0x150525E3: jb 0x150525e9 */
L_150525E5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150525E5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1505262B; /* 0x150525E7: jmp 0x1505262b */
L_150525E9:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x150525E9: push dword ptr [ebp + 0x10] */
    ecx = ebp + (-0x10); /* 0x150525EC: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1502F870); /* 0x150525EF: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC)); /* 0x150525F4: mov ecx, dword ptr [ebp - 0xc] */
    edx = esi + (-0x1); /* 0x150525F7: lea edx, [esi - 1] */
    /* cmp MEM32(ecx + 0x8), 0 */ /* 0x150525FA: cmp dword ptr [ecx + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505261C; /* 0x150525FE: je 0x1505261c */
L_15052600:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x15052600: dec edx */
    _flag_k = FK_DEC;
    /* cmp MEM32(ebp + 0x8), edx */ /* 0x15052601: cmp dword ptr [ebp + 8], edx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_15052610; /* 0x15052604: ja 0x15052610 */
L_15052606:
    eax = (uint32_t)MEM8(edx); /* 0x15052606: movzx eax, byte ptr [edx] */
    /* test MEM8(eax + ecx + 0x1D), 4 */ /* 0x15052609: test byte ptr [eax + ecx + 0x1d], 4 */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x1D)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15052600; /* 0x1505260E: jne 0x15052600 */
L_15052610:
    eax = esi; /* 0x15052610: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x15052612: sub eax, edx */
    _flag_k = FK_CMP;
    edx = esi; /* 0x15052614: mov edx, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x15052616: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x15052619: sub edx, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1505261B: dec edx */
    _flag_k = FK_DEC;
L_1505261C:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x1505261C: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15052629; /* 0x15052620: je 0x15052629 */
L_15052622:
    ecx = MEM32(ebp + (-0x8)); /* 0x15052622: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x15052625: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_15052629:
    eax = edx; /* 0x15052629: mov eax, edx */
L_1505262B:
    esi = POP32_VAL(esp); /* 0x1505262B: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1505262C: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505262D: ret  */
    RECOMP_REGS_OUT();
}

void sub_15052640(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15052640u);

L_15052640:
    edi = edi; /* 0x15052640: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15052642: push ebp */
    ebp = esp; /* 0x15052643: mov ebp, esp */
    PUSH32(esp, 0); /* 0x15052645: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15052647: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1505264A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15052660); /* 0x1505264D: call 0x15052660 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15052652: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15052655: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15052656: ret  */
    RECOMP_REGS_OUT();
}

void sub_15052660(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15052660u);

L_15052660:
    edi = edi; /* 0x15052660: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15052662: push ebp */
    ebp = esp; /* 0x15052663: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x15052665: sub esp, 0x20 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x20); /* 0x15052668: lea ecx, [ebp - 0x20] */
    PUSH32(esp, ebx); /* 0x1505266B: push ebx */
    PUSH32(esp, esi); /* 0x1505266C: push esi */
    PUSH32(esp, edi); /* 0x1505266D: push edi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1505266E: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1502F870); /* 0x15052671: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + 0x8); /* 0x15052676: mov ebx, dword ptr [ebp + 8] */
    /* test ebx, ebx */ /* 0x15052679: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15052684; /* 0x1505267B: je 0x15052684 */
L_1505267D:
    edi = MEM32(ebp + 0xC); /* 0x1505267D: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x15052680: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150526A3; /* 0x15052682: jne 0x150526a3 */
L_15052684:
    RECOMP_CALL(sub_15036430); /* 0x15052684: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15052689: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1505268B: push esi */
    PUSH32(esp, esi); /* 0x1505268C: push esi */
    PUSH32(esp, esi); /* 0x1505268D: push esi */
    PUSH32(esp, esi); /* 0x1505268E: push esi */
    PUSH32(esp, esi); /* 0x1505268F: push esi */
    MEM32(eax) = 0x16u; /* 0x15052690: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x15052696: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505269B: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_150527F2; /* 0x1505269E: jmp 0x150527f2 */
L_150526A3:
    edx = MEM32(ebp + (-0x1C)); /* 0x150526A3: mov edx, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x150526A6: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x8), esi */ /* 0x150526A8: cmp dword ptr [edx + 8], esi */
    _flag_a = (uint32_t)(MEM32(edx + 0x8)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150526C2; /* 0x150526AB: jne 0x150526c2 */
L_150526AD:
    eax = ebp + (-0x20); /* 0x150526AD: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x150526B0: push eax */
    PUSH32(esp, edi); /* 0x150526B1: push edi */
    PUSH32(esp, ebx); /* 0x150526B2: push ebx */
    RECOMP_CALL(sub_1508B940); /* 0x150526B3: call 0x1508b940 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x150526B8: add esp, 0xc */
    _flag_k = FK_ADD;
    esi = eax; /* 0x150526BB: mov esi, eax */
    goto L_150527FF; /* 0x150526BD: jmp 0x150527ff */
L_150526C2:
    SET_LO8(ecx, MEM8(ebx)); /* 0x150526C2: mov cl, byte ptr [ebx] */
    eax = (uint32_t)LO8(ecx); /* 0x150526C4: movzx eax, cl */
    MEM32(ebp + (-0x4)) = eax; /* 0x150526C7: mov dword ptr [ebp - 4], eax */
    eax = (uint32_t)LO8(ecx); /* 0x150526CA: movzx eax, cl */
    MEM32(ebp + (-0xC)) = ebx; /* 0x150526CD: mov dword ptr [ebp - 0xc], ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x150526D0: inc ebx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x10)) = edi; /* 0x150526D1: mov dword ptr [ebp - 0x10], edi */
    /* test MEM8(eax + edx + 0x1D), 4 */ /* 0x150526D4: test byte ptr [eax + edx + 0x1d], 4 */
    _flag_a = (uint32_t)(MEM8(eax + edx + 0x1D)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505273A; /* 0x150526D9: je 0x1505273a */
L_150526DB:
    /* cmp MEM8(ebx), 0 */ /* 0x150526DB: cmp byte ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_150526E5; /* 0x150526DE: jne 0x150526e5 */
L_150526E0:
    MEM32(ebp + (-0x4)) = esi; /* 0x150526E0: mov dword ptr [ebp - 4], esi */
    goto L_15052752; /* 0x150526E3: jmp 0x15052752 */
L_150526E5:
    PUSH32(esp, 1); /* 0x150526E5: push 1 */
    PUSH32(esp, MEM32(edx + 0x4)); /* 0x150526E7: push dword ptr [edx + 4] */
    eax = ebp + (-0x8); /* 0x150526EA: lea eax, [ebp - 8] */
    PUSH32(esp, 2); /* 0x150526ED: push 2 */
    PUSH32(esp, eax); /* 0x150526EF: push eax */
    PUSH32(esp, 2); /* 0x150526F0: push 2 */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x150526F2: push dword ptr [ebp - 0xc] */
    eax = ebp + (-0x20); /* 0x150526F5: lea eax, [ebp - 0x20] */
    PUSH32(esp, 0x200u); /* 0x150526F8: push 0x200 */
    PUSH32(esp, MEM32(edx + 0xC)); /* 0x150526FD: push dword ptr [edx + 0xc] */
    PUSH32(esp, eax); /* 0x15052700: push eax */
    RECOMP_CALL(sub_15058910); /* 0x15052701: call 0x15058910 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x24u; /* 0x15052706: add esp, 0x24 */
    _flag_k = FK_ADD;
    /* cmp eax, 1 */ /* 0x15052709: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15052714; /* 0x1505270C: jne 0x15052714 */
L_1505270E:
    eax = (uint32_t)MEM8(ebp + (-0x8)); /* 0x1505270E: movzx eax, byte ptr [ebp - 8] */
    goto L_15052734; /* 0x15052712: jmp 0x15052734 */
L_15052714:
    /* cmp eax, 2 */ /* 0x15052714: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150527E7; /* 0x15052717: jne 0x150527e7 */
L_1505271D:
    eax = MEM32(ebp + (-0x8)); /* 0x1505271D: mov eax, dword ptr [ebp - 8] */
    ecx = 0x100u; /* 0x15052720: mov ecx, 0x100 */
    edx = (uint32_t)LO8(eax); /* 0x15052725: movzx edx, al */
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx); /* 0x15052728: imul edx, ecx */
    eax = (uint32_t)HI8(eax); /* 0x1505272B: movzx eax, ah */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO16(edx, LO16(edx) + LO16(eax)); /* 0x1505272E: add dx, ax */
    _flag_k = FK_NARROW(FK_ADD, 16);
    eax = (uint32_t)LO16(edx); /* 0x15052731: movzx eax, dx */
L_15052734:
    edx = MEM32(ebp + (-0x1C)); /* 0x15052734: mov edx, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x15052737: inc ebx */
    _flag_k = FK_INC;
    goto L_1505274F; /* 0x15052738: jmp 0x1505274f */
L_1505273A:
    eax = MEM32(ebp + (-0x4)); /* 0x1505273A: mov eax, dword ptr [ebp - 4] */
    eax = (uint32_t)LO16(eax); /* 0x1505273D: movzx eax, ax */
    /* test MEM8(eax + edx + 0x1D), 0x10u */ /* 0x15052740: test byte ptr [eax + edx + 0x1d], 0x10 */
    _flag_a = (uint32_t)(MEM8(eax + edx + 0x1D)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15052752; /* 0x15052745: je 0x15052752 */
L_15052747:
    eax = (uint32_t)MEM8(eax + edx + 0x11D); /* 0x15052747: movzx eax, byte ptr [eax + edx + 0x11d] */
L_1505274F:
    MEM32(ebp + (-0x4)) = eax; /* 0x1505274F: mov dword ptr [ebp - 4], eax */
L_15052752:
    SET_LO8(ecx, MEM8(edi)); /* 0x15052752: mov cl, byte ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x15052754: inc edi */
    _flag_k = FK_INC;
    eax = (uint32_t)LO8(ecx); /* 0x15052755: movzx eax, cl */
    MEM32(ebp + (-0xC)) = eax; /* 0x15052758: mov dword ptr [ebp - 0xc], eax */
    eax = (uint32_t)LO8(ecx); /* 0x1505275B: movzx eax, cl */
    /* test MEM8(eax + edx + 0x1D), 4 */ /* 0x1505275E: test byte ptr [eax + edx + 0x1d], 4 */
    _flag_a = (uint32_t)(MEM8(eax + edx + 0x1D)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_150527BF; /* 0x15052763: je 0x150527bf */
L_15052765:
    /* cmp MEM8(edi), 0 */ /* 0x15052765: cmp byte ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505276E; /* 0x15052768: jne 0x1505276e */
L_1505276A:
    eax = esi; /* 0x1505276A: mov eax, esi */
    goto L_150527D4; /* 0x1505276C: jmp 0x150527d4 */
L_1505276E:
    PUSH32(esp, 1); /* 0x1505276E: push 1 */
    PUSH32(esp, MEM32(edx + 0x4)); /* 0x15052770: push dword ptr [edx + 4] */
    eax = ebp + (-0x8); /* 0x15052773: lea eax, [ebp - 8] */
    PUSH32(esp, 2); /* 0x15052776: push 2 */
    PUSH32(esp, eax); /* 0x15052778: push eax */
    PUSH32(esp, 2); /* 0x15052779: push 2 */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x1505277B: push dword ptr [ebp - 0x10] */
    eax = ebp + (-0x20); /* 0x1505277E: lea eax, [ebp - 0x20] */
    PUSH32(esp, 0x200u); /* 0x15052781: push 0x200 */
    PUSH32(esp, MEM32(edx + 0xC)); /* 0x15052786: push dword ptr [edx + 0xc] */
    PUSH32(esp, eax); /* 0x15052789: push eax */
    RECOMP_CALL(sub_15058910); /* 0x1505278A: call 0x15058910 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x24u; /* 0x1505278F: add esp, 0x24 */
    _flag_k = FK_ADD;
    /* cmp eax, 1 */ /* 0x15052792: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505279D; /* 0x15052795: jne 0x1505279d */
L_15052797:
    eax = (uint32_t)MEM8(ebp + (-0x8)); /* 0x15052797: movzx eax, byte ptr [ebp - 8] */
    goto L_150527B9; /* 0x1505279B: jmp 0x150527b9 */
L_1505279D:
    /* cmp eax, 2 */ /* 0x1505279D: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150527E7; /* 0x150527A0: jne 0x150527e7 */
L_150527A2:
    eax = MEM32(ebp + (-0x8)); /* 0x150527A2: mov eax, dword ptr [ebp - 8] */
    ecx = 0x100u; /* 0x150527A5: mov ecx, 0x100 */
    edx = (uint32_t)LO8(eax); /* 0x150527AA: movzx edx, al */
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx); /* 0x150527AD: imul edx, ecx */
    eax = (uint32_t)HI8(eax); /* 0x150527B0: movzx eax, ah */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO16(edx, LO16(edx) + LO16(eax)); /* 0x150527B3: add dx, ax */
    _flag_k = FK_NARROW(FK_ADD, 16);
    eax = (uint32_t)LO16(edx); /* 0x150527B6: movzx eax, dx */
L_150527B9:
    edx = MEM32(ebp + (-0x1C)); /* 0x150527B9: mov edx, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x150527BC: inc edi */
    _flag_k = FK_INC;
    goto L_150527D4; /* 0x150527BD: jmp 0x150527d4 */
L_150527BF:
    eax = MEM32(ebp + (-0xC)); /* 0x150527BF: mov eax, dword ptr [ebp - 0xc] */
    ecx = (uint32_t)LO16(eax); /* 0x150527C2: movzx ecx, ax */
    /* test MEM8(ecx + edx + 0x1D), 0x10u */ /* 0x150527C5: test byte ptr [ecx + edx + 0x1d], 0x10 */
    _flag_a = (uint32_t)(MEM8(ecx + edx + 0x1D)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_150527D4; /* 0x150527CA: je 0x150527d4 */
L_150527CC:
    eax = (uint32_t)MEM8(ecx + edx + 0x11D); /* 0x150527CC: movzx eax, byte ptr [ecx + edx + 0x11d] */
L_150527D4:
    ecx = MEM32(ebp + (-0x4)); /* 0x150527D4: mov ecx, dword ptr [ebp - 4] */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x150527D7: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_150527F9; /* 0x150527DA: jne 0x150527f9 */
L_150527DC:
    /* test LO16(ecx), LO16(ecx) */ /* 0x150527DC: test cx, cx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150526C2; /* 0x150527DF: jne 0x150526c2 */
L_150527E5:
    goto L_150527FF; /* 0x150527E5: jmp 0x150527ff */
L_150527E7:
    RECOMP_CALL(sub_15036430); /* 0x150527E7: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x150527EC: mov dword ptr [eax], 0x16 */
L_150527F2:
    esi = 0x7FFFFFFFu; /* 0x150527F2: mov esi, 0x7fffffff */
    goto L_150527FF; /* 0x150527F7: jmp 0x150527ff */
L_150527F9:
    { uint32_t _sa = esi, _sb = esi, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x150527F9: sbb esi, esi */
      esi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    esi = esi & 2; /* 0x150527FB: and esi, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x150527FE: dec esi */
    _flag_k = FK_DEC;
L_150527FF:
    /* cmp MEM8(ebp + (-0x14)), 0 */ /* 0x150527FF: cmp byte ptr [ebp - 0x14], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x14))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505280C; /* 0x15052803: je 0x1505280c */
L_15052805:
    ecx = MEM32(ebp + (-0x18)); /* 0x15052805: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x15052808: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1505280C:
    edi = POP32_VAL(esp); /* 0x1505280C: pop edi */
    eax = esi; /* 0x1505280D: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1505280F: pop esi */
    ebx = POP32_VAL(esp); /* 0x15052810: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15052811: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15052812: ret  */
    RECOMP_REGS_OUT();
}

void sub_15052820(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15052820u);

L_15052820:
    edi = edi; /* 0x15052820: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15052822: push ebp */
    ebp = esp; /* 0x15052823: mov ebp, esp */
    PUSH32(esp, 0); /* 0x15052825: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15052827: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1505282A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15052840); /* 0x1505282D: call 0x15052840 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15052832: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15052835: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15052836: ret  */
    RECOMP_REGS_OUT();
}

void sub_15052840(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15052840u);

L_15052840:
    edi = edi; /* 0x15052840: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15052842: push ebp */
    ebp = esp; /* 0x15052843: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x15052845: sub esp, 0x10 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x10); /* 0x15052848: lea ecx, [ebp - 0x10] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1505284B: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1502F870); /* 0x1505284E: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x15052853: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x15052856: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15052861; /* 0x15052858: je 0x15052861 */
L_1505285A:
    eax = MEM32(ebp + 0xC); /* 0x1505285A: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x1505285D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505287D; /* 0x1505285F: jne 0x1505287d */
L_15052861:
    RECOMP_CALL(sub_15036430); /* 0x15052861: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x15052866: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505286C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1505286E: push eax */
    PUSH32(esp, eax); /* 0x1505286F: push eax */
    PUSH32(esp, eax); /* 0x15052870: push eax */
    PUSH32(esp, eax); /* 0x15052871: push eax */
    PUSH32(esp, eax); /* 0x15052872: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x15052873: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15052878: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_150528C1; /* 0x1505287B: jmp 0x150528c1 */
L_1505287D:
    edx = MEM32(ebp + (-0xC)); /* 0x1505287D: mov edx, dword ptr [ebp - 0xc] */
    /* cmp MEM32(edx + 0x8), 0 */ /* 0x15052880: cmp dword ptr [edx + 8], 0 */
    _flag_a = (uint32_t)(MEM32(edx + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15052895; /* 0x15052884: jne 0x15052895 */
L_15052886:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15052886: push dword ptr [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x15052889: push eax */
    PUSH32(esp, ecx); /* 0x1505288A: push ecx */
    RECOMP_CALL(sub_1508BB00); /* 0x1505288B: call 0x1508bb00 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15052890: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_150528CB; /* 0x15052893: jmp 0x150528cb */
L_15052895:
    PUSH32(esp, MEM32(edx + 0x4)); /* 0x15052895: push dword ptr [edx + 4] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x15052898: push -1 */
    PUSH32(esp, eax); /* 0x1505289A: push eax */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1505289B: push -1 */
    PUSH32(esp, ecx); /* 0x1505289D: push ecx */
    PUSH32(esp, 0x1001u); /* 0x1505289E: push 0x1001 */
    PUSH32(esp, MEM32(edx + 0xC)); /* 0x150528A3: push dword ptr [edx + 0xc] */
    eax = ebp + (-0x10); /* 0x150528A6: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x150528A9: push eax */
    RECOMP_CALL(sub_150584C0); /* 0x150528AA: call 0x150584c0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x150528AF: add esp, 0x20 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x150528B2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150528C8; /* 0x150528B4: jne 0x150528c8 */
L_150528B6:
    RECOMP_CALL(sub_15036430); /* 0x150528B6: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x150528BB: mov dword ptr [eax], 0x16 */
L_150528C1:
    eax = 0x7FFFFFFFu; /* 0x150528C1: mov eax, 0x7fffffff */
    goto L_150528CB; /* 0x150528C6: jmp 0x150528cb */
L_150528C8:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFFEu; /* 0x150528C8: add eax, -2 */
    _flag_k = FK_ADD;
L_150528CB:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x150528CB: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150528D8; /* 0x150528CF: je 0x150528d8 */
L_150528D1:
    ecx = MEM32(ebp + (-0x8)); /* 0x150528D1: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x150528D4: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_150528D8:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150528D8: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150528D9: ret  */
    RECOMP_REGS_OUT();
}

void sub_150528E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150528E0u);

L_150528E0:
    edi = edi; /* 0x150528E0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150528E2: push ebp */
    ebp = esp; /* 0x150528E3: mov ebp, esp */
    PUSH32(esp, esi); /* 0x150528E5: push esi */
    esi = MEM32(ebp + 0x8); /* 0x150528E6: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x150528E9: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505290B; /* 0x150528EB: jne 0x1505290b */
L_150528ED:
    RECOMP_CALL(sub_15036430); /* 0x150528ED: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x150528F2: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150528F8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x150528FA: push eax */
    PUSH32(esp, eax); /* 0x150528FB: push eax */
    PUSH32(esp, eax); /* 0x150528FC: push eax */
    PUSH32(esp, eax); /* 0x150528FD: push eax */
    PUSH32(esp, eax); /* 0x150528FE: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x150528FF: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15052904: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15052907: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15052922; /* 0x15052909: jmp 0x15052922 */
L_1505290B:
    eax = (uint32_t)MEM8(esi); /* 0x1505290B: movzx eax, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1505290E: inc esi */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x1505290F: push eax */
    RECOMP_CALL(sub_15050550); /* 0x15052910: call 0x15050550 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15052915: pop ecx */
    /* test eax, eax */ /* 0x15052916: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15052920; /* 0x15052918: je 0x15052920 */
L_1505291A:
    /* cmp MEM8(esi), 0 */ /* 0x1505291A: cmp byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15052920; /* 0x1505291D: je 0x15052920 */
L_1505291F:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1505291F: inc esi */
    _flag_k = FK_INC;
L_15052920:
    eax = esi; /* 0x15052920: mov eax, esi */
L_15052922:
    esi = POP32_VAL(esp); /* 0x15052922: pop esi */
    ebp = POP32_VAL(esp); /* 0x15052923: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15052924: ret  */
    RECOMP_REGS_OUT();
}

void sub_15052930(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15052930u);

L_15052930:
    edi = edi; /* 0x15052930: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15052932: push ebp */
    ebp = esp; /* 0x15052933: mov ebp, esp */
    PUSH32(esp, esi); /* 0x15052935: push esi */
    esi = MEM32(ebp + 0x8); /* 0x15052936: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15052939: push dword ptr [ebp + 0xc] */
    eax = (uint32_t)MEM8(esi); /* 0x1505293C: movzx eax, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1505293F: inc esi */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x15052940: push eax */
    RECOMP_CALL(sub_15050570); /* 0x15052941: call 0x15050570 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15052946: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15052947: pop ecx */
    /* test eax, eax */ /* 0x15052948: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15052952; /* 0x1505294A: je 0x15052952 */
L_1505294C:
    /* cmp MEM8(esi), 0 */ /* 0x1505294C: cmp byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15052952; /* 0x1505294F: je 0x15052952 */
L_15052951:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15052951: inc esi */
    _flag_k = FK_INC;
L_15052952:
    eax = esi; /* 0x15052952: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x15052954: pop esi */
    ebp = POP32_VAL(esp); /* 0x15052955: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15052956: ret  */
    RECOMP_REGS_OUT();
}

void sub_15052960(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15052960u);

L_15052960:
    edi = edi; /* 0x15052960: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15052962: push ebp */
    ebp = esp; /* 0x15052963: mov ebp, esp */
    PUSH32(esp, 0); /* 0x15052965: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15052967: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15052980); /* 0x1505296A: call 0x15052980 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505296F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15052970: pop ecx */
    ebp = POP32_VAL(esp); /* 0x15052971: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15052972: ret  */
    RECOMP_REGS_OUT();
}

void sub_15052980(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15052980u);

L_15052980:
    edi = edi; /* 0x15052980: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15052982: push ebp */
    ebp = esp; /* 0x15052983: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x15052985: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x15052988: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15052989: push dword ptr [ebp + 0xc] */
    ecx = ebp + (-0x10); /* 0x1505298C: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1502F870); /* 0x1505298F: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0xC)); /* 0x15052994: mov esi, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x15052997: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x8), edx */ /* 0x15052999: cmp dword ptr [esi + 8], edx */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150529AF; /* 0x1505299C: jne 0x150529af */
L_1505299E:
    edx = MEM32(ebp + 0x8); /* 0x1505299E: mov edx, dword ptr [ebp + 8] */
    ecx = edx + 0x1; /* 0x150529A1: lea ecx, [edx + 1] */
L_150529A4:
    SET_LO8(eax, MEM8(edx)); /* 0x150529A4: mov al, byte ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x150529A6: inc edx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x150529A7: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150529A4; /* 0x150529A9: jne 0x150529a4 */
L_150529AB:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x150529AB: sub edx, ecx */
    _flag_k = FK_CMP;
    goto L_150529CC; /* 0x150529AD: jmp 0x150529cc */
L_150529AF:
    ecx = MEM32(ebp + 0x8); /* 0x150529AF: mov ecx, dword ptr [ebp + 8] */
    goto L_150529C6; /* 0x150529B2: jmp 0x150529c6 */
L_150529B4:
    eax = (uint32_t)LO8(eax); /* 0x150529B4: movzx eax, al */
    /* test MEM8(eax + esi + 0x1D), 4 */ /* 0x150529B7: test byte ptr [eax + esi + 0x1d], 4 */
    _flag_a = (uint32_t)(MEM8(eax + esi + 0x1D)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_150529C4; /* 0x150529BC: je 0x150529c4 */
L_150529BE:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x150529BE: inc ecx */
    _flag_k = FK_INC;
    /* cmp MEM8(ecx), 0 */ /* 0x150529BF: cmp byte ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150529CC; /* 0x150529C2: je 0x150529cc */
L_150529C4:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x150529C4: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x150529C5: inc ecx */
    _flag_k = FK_INC;
L_150529C6:
    SET_LO8(eax, MEM8(ecx)); /* 0x150529C6: mov al, byte ptr [ecx] */
    /* test LO8(eax), LO8(eax) */ /* 0x150529C8: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150529B4; /* 0x150529CA: jne 0x150529b4 */
L_150529CC:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x150529CC: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    esi = POP32_VAL(esp); /* 0x150529D0: pop esi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150529DA; /* 0x150529D1: je 0x150529da */
L_150529D3:
    ecx = MEM32(ebp + (-0x8)); /* 0x150529D3: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x150529D6: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_150529DA:
    eax = edx; /* 0x150529DA: mov eax, edx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150529DC: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150529DD: ret  */
    RECOMP_REGS_OUT();
}

void sub_150529F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150529F0u);

L_150529F0:
    edi = edi; /* 0x150529F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150529F2: push ebp */
    ebp = esp; /* 0x150529F3: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x150529F5: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x150529F8: neg eax */
    _flag_k = FK_CMP;
    PUSH32(esp, 0); /* 0x150529FA: push 0 */
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x150529FC: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, eax); /* 0x150529FE: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150529FF: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15052A70); /* 0x15052A02: call 0x15052a70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15052A07: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15052A09: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15052A0C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) { ecx = MEM32(ebp + 0x8); } /* 0x15052A0E: cmove ecx, dword ptr [ebp + 8] */
    eax = ecx; /* 0x15052A12: mov eax, ecx */
    ebp = POP32_VAL(esp); /* 0x15052A14: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15052A15: ret  */
    RECOMP_REGS_OUT();
}

void sub_15052A20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15052A20u);

L_15052A20:
    edi = edi; /* 0x15052A20: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15052A22: push ebp */
    ebp = esp; /* 0x15052A23: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x15052A25: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15052A28: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x15052A2B: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x15052A2D: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, eax); /* 0x15052A2F: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15052A30: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15052A70); /* 0x15052A33: call 0x15052a70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15052A38: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15052A3A: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15052A3D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) { ecx = MEM32(ebp + 0x8); } /* 0x15052A3F: cmove ecx, dword ptr [ebp + 8] */
    eax = ecx; /* 0x15052A43: mov eax, ecx */
    ebp = POP32_VAL(esp); /* 0x15052A45: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15052A46: ret  */
    RECOMP_REGS_OUT();
}

void sub_15052A50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15052A50u);

L_15052A50:
    edi = edi; /* 0x15052A50: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15052A52: push ebp */
    ebp = esp; /* 0x15052A53: mov ebp, esp */
    PUSH32(esp, 0); /* 0x15052A55: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15052A57: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15052A5A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15052A70); /* 0x15052A5D: call 0x15052a70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15052A62: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15052A65: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15052A66: ret  */
    RECOMP_REGS_OUT();
}

void sub_15052A70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15052A70u);

L_15052A70:
    edi = edi; /* 0x15052A70: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15052A72: push ebp */
    ebp = esp; /* 0x15052A73: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x15052A75: sub esp, 0x18 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x15052A78: push ebx */
    PUSH32(esp, esi); /* 0x15052A79: push esi */
    PUSH32(esp, edi); /* 0x15052A7A: push edi */
    edi = MEM32(ebp + 0x8); /* 0x15052A7B: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x15052A7E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15052B4E; /* 0x15052A80: je 0x15052b4e */
L_15052A86:
    esi = MEM32(ebp + 0xC); /* 0x15052A86: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x15052A89: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15052B58; /* 0x15052A8B: je 0x15052b58 */
L_15052A91:
    PUSH32(esp, esi); /* 0x15052A91: push esi */
    PUSH32(esp, edi); /* 0x15052A92: push edi */
    RECOMP_CALL(sub_1508ECC0); /* 0x15052A93: call 0x1508ecc0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15052A98: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15052A99: pop ecx */
    /* cmp eax, esi */ /* 0x15052A9A: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_15052AAC; /* 0x15052A9C: jb 0x15052aac */
L_15052A9E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15052A9E: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(edi) = (uint8_t)(LO8(ebx)); /* 0x15052AA0: mov byte ptr [edi], bl */
    RECOMP_CALL(sub_15036430); /* 0x15052AA2: call 0x15036430 */
    RECOMP_FLAGS_IN();
    goto L_15052B5F; /* 0x15052AA7: jmp 0x15052b5f */
L_15052AAC:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15052AAC: push dword ptr [ebp + 0x10] */
    ecx = ebp + (-0x18); /* 0x15052AAF: lea ecx, [ebp - 0x18] */
    RECOMP_CALL(sub_1502F870); /* 0x15052AB2: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    SET_LO8(eax, MEM8(edi)); /* 0x15052AB7: mov al, byte ptr [edi] */
    ebx = edi; /* 0x15052AB9: mov ebx, edi */
    esi = edi; /* 0x15052ABB: mov esi, edi */
    /* test LO8(eax), LO8(eax) */ /* 0x15052ABD: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15052B2A; /* 0x15052ABF: je 0x15052b2a */
L_15052AC1:
    ecx = MEM32(ebp + (-0x14)); /* 0x15052AC1: mov ecx, dword ptr [ebp - 0x14] */
L_15052AC4:
    edx = (uint32_t)LO8(eax); /* 0x15052AC4: movzx edx, al */
    MEM32(ebp + (-0x8)) = edx; /* 0x15052AC7: mov dword ptr [ebp - 8], edx */
    SET_LO8(edx, MEM8(edx + ecx + 0x1D)); /* 0x15052ACA: mov dl, byte ptr [edx + ecx + 0x1d] */
    /* test LO8(edx), 4 */ /* 0x15052ACE: test dl, 4 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15052B11; /* 0x15052AD1: je 0x15052b11 */
L_15052AD3:
    PUSH32(esp, 1); /* 0x15052AD3: push 1 */
    PUSH32(esp, MEM32(ecx + 0x4)); /* 0x15052AD5: push dword ptr [ecx + 4] */
    eax = ebp + (-0x4); /* 0x15052AD8: lea eax, [ebp - 4] */
    PUSH32(esp, 2); /* 0x15052ADB: push 2 */
    PUSH32(esp, eax); /* 0x15052ADD: push eax */
    PUSH32(esp, 2); /* 0x15052ADE: push 2 */
    PUSH32(esp, ebx); /* 0x15052AE0: push ebx */
    PUSH32(esp, 0x100u); /* 0x15052AE1: push 0x100 */
    PUSH32(esp, MEM32(ecx + 0xC)); /* 0x15052AE6: push dword ptr [ecx + 0xc] */
    eax = ebp + (-0x18); /* 0x15052AE9: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x15052AEC: push eax */
    RECOMP_CALL(sub_15058910); /* 0x15052AED: call 0x15058910 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x24u; /* 0x15052AF2: add esp, 0x24 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15052AF5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15052B3F; /* 0x15052AF7: je 0x15052b3f */
L_15052AF9:
    ecx = MEM32(ebp + (-0x4)); /* 0x15052AF9: mov ecx, dword ptr [ebp - 4] */
    MEM8(esi) = (uint8_t)(LO8(ecx)); /* 0x15052AFC: mov byte ptr [esi], cl */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15052AFE: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x15052AFF: inc ebx */
    _flag_k = FK_INC;
    /* cmp eax, 1 */ /* 0x15052B00: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_15052B0C; /* 0x15052B03: jle 0x15052b0c */
L_15052B05:
    MEM8(esi) = (uint8_t)(HI8(ecx)); /* 0x15052B05: mov byte ptr [esi], ch */
    ecx = MEM32(ebp + (-0x14)); /* 0x15052B07: mov ecx, dword ptr [ebp - 0x14] */
    goto L_15052B22; /* 0x15052B0A: jmp 0x15052b22 */
L_15052B0C:
    ecx = MEM32(ebp + (-0x14)); /* 0x15052B0C: mov ecx, dword ptr [ebp - 0x14] */
    goto L_15052B23; /* 0x15052B0F: jmp 0x15052b23 */
L_15052B11:
    /* test LO8(edx), 0x10u */ /* 0x15052B11: test dl, 0x10 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15052B20; /* 0x15052B14: je 0x15052b20 */
L_15052B16:
    eax = MEM32(ebp + (-0x8)); /* 0x15052B16: mov eax, dword ptr [ebp - 8] */
    SET_LO8(eax, MEM8(eax + ecx + 0x11D)); /* 0x15052B19: mov al, byte ptr [eax + ecx + 0x11d] */
L_15052B20:
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x15052B20: mov byte ptr [esi], al */
L_15052B22:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15052B22: inc esi */
    _flag_k = FK_INC;
L_15052B23:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x15052B23: inc ebx */
    _flag_k = FK_INC;
    SET_LO8(eax, MEM8(ebx)); /* 0x15052B24: mov al, byte ptr [ebx] */
    /* test LO8(eax), LO8(eax) */ /* 0x15052B26: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15052AC4; /* 0x15052B28: jne 0x15052ac4 */
L_15052B2A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15052B2A: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x15052B2C: mov byte ptr [esi], bl */
L_15052B2E:
    /* cmp MEM8(ebp + (-0xC)), 0 */ /* 0x15052B2E: cmp byte ptr [ebp - 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0xC))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15052B3B; /* 0x15052B32: je 0x15052b3b */
L_15052B34:
    ecx = MEM32(ebp + (-0x10)); /* 0x15052B34: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x15052B37: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_15052B3B:
    eax = ebx; /* 0x15052B3B: mov eax, ebx */
    goto L_15052B73; /* 0x15052B3D: jmp 0x15052b73 */
L_15052B3F:
    MEM8(edi) = (uint8_t)(0); /* 0x15052B3F: mov byte ptr [edi], 0 */
    RECOMP_CALL(sub_15036430); /* 0x15052B42: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x2Au); /* 0x15052B47: push 0x2a */
    ebx = POP32_VAL(esp); /* 0x15052B49: pop ebx */
    MEM32(eax) = ebx; /* 0x15052B4A: mov dword ptr [eax], ebx */
    RECOMP_BACKEDGE();
    goto L_15052B2E; /* 0x15052B4C: jmp 0x15052b2e */
L_15052B4E:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x15052B4E: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15052B58; /* 0x15052B52: jne 0x15052b58 */
L_15052B54:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15052B54: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15052B73; /* 0x15052B56: jmp 0x15052b73 */
L_15052B58:
    RECOMP_CALL(sub_15036430); /* 0x15052B58: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15052B5D: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_15052B5F:
    PUSH32(esp, 0x16u); /* 0x15052B5F: push 0x16 */
    esi = POP32_VAL(esp); /* 0x15052B61: pop esi */
    PUSH32(esp, ebx); /* 0x15052B62: push ebx */
    PUSH32(esp, ebx); /* 0x15052B63: push ebx */
    PUSH32(esp, ebx); /* 0x15052B64: push ebx */
    PUSH32(esp, ebx); /* 0x15052B65: push ebx */
    PUSH32(esp, ebx); /* 0x15052B66: push ebx */
    MEM32(eax) = esi; /* 0x15052B67: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1505A110); /* 0x15052B69: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x15052B6E: mov eax, esi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15052B70: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15052B73:
    edi = POP32_VAL(esp); /* 0x15052B73: pop edi */
    esi = POP32_VAL(esp); /* 0x15052B74: pop esi */
    ebx = POP32_VAL(esp); /* 0x15052B75: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15052B76: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15052B77: ret  */
    RECOMP_REGS_OUT();
}

void sub_15052B80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15052B80u);

L_15052B80:
    edi = edi; /* 0x15052B80: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15052B82: push ebp */
    ebp = esp; /* 0x15052B83: mov ebp, esp */
    PUSH32(esp, 0); /* 0x15052B85: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15052B87: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15052B8A: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15052B8D: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15052BA0); /* 0x15052B90: call 0x15052ba0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15052B95: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15052B98: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15052B99: ret  */
    RECOMP_REGS_OUT();
}

void sub_15052BA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15052BA0u);

L_15052BA0:
    edi = edi; /* 0x15052BA0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15052BA2: push ebp */
    ebp = esp; /* 0x15052BA3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x15052BA5: sub esp, 0x20 */
    _flag_k = FK_CMP;
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x15052BA8: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15052BB3; /* 0x15052BAC: jne 0x15052bb3 */
L_15052BAE:
    eax = MEM32(ebp + 0x8); /* 0x15052BAE: mov eax, dword ptr [ebp + 8] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15052BB1: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15052BB2: ret  */
L_15052BB3:
    PUSH32(esp, ebx); /* 0x15052BB3: push ebx */
    PUSH32(esp, edi); /* 0x15052BB4: push edi */
    edi = MEM32(ebp + 0x8); /* 0x15052BB5: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x15052BB8: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15052BDD; /* 0x15052BBA: jne 0x15052bdd */
L_15052BBC:
    RECOMP_CALL(sub_15036430); /* 0x15052BBC: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15052BC1: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x15052BC3: push ebx */
    PUSH32(esp, ebx); /* 0x15052BC4: push ebx */
    PUSH32(esp, ebx); /* 0x15052BC5: push ebx */
    PUSH32(esp, ebx); /* 0x15052BC6: push ebx */
    PUSH32(esp, ebx); /* 0x15052BC7: push ebx */
    MEM32(eax) = 0x16u; /* 0x15052BC8: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x15052BCE: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15052BD3: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15052BD6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15052CE4; /* 0x15052BD8: jmp 0x15052ce4 */
L_15052BDD:
    PUSH32(esp, esi); /* 0x15052BDD: push esi */
    esi = MEM32(ebp + 0xC); /* 0x15052BDE: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x15052BE1: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15052C06; /* 0x15052BE3: jne 0x15052c06 */
L_15052BE5:
    RECOMP_CALL(sub_15036430); /* 0x15052BE5: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15052BEA: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x15052BEC: push ebx */
    PUSH32(esp, ebx); /* 0x15052BED: push ebx */
    PUSH32(esp, ebx); /* 0x15052BEE: push ebx */
    PUSH32(esp, ebx); /* 0x15052BEF: push ebx */
    PUSH32(esp, ebx); /* 0x15052BF0: push ebx */
    MEM32(eax) = 0x16u; /* 0x15052BF1: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x15052BF7: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15052BFC: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15052BFF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15052CE3; /* 0x15052C01: jmp 0x15052ce3 */
L_15052C06:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15052C06: push dword ptr [ebp + 0x14] */
    ecx = ebp + (-0x20); /* 0x15052C09: lea ecx, [ebp - 0x20] */
    RECOMP_CALL(sub_1502F870); /* 0x15052C0C: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x1C)); /* 0x15052C11: mov eax, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15052C14: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(eax + 0x8), ebx */ /* 0x15052C16: cmp dword ptr [eax + 8], ebx */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15052C2F; /* 0x15052C19: jne 0x15052c2f */
L_15052C1B:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15052C1B: push dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x15052C1E: push esi */
    PUSH32(esp, edi); /* 0x15052C1F: push edi */
    RECOMP_CALL(sub_1508E7B0); /* 0x15052C20: call 0x1508e7b0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15052C25: add esp, 0xc */
    _flag_k = FK_ADD;
    ecx = eax; /* 0x15052C28: mov ecx, eax */
    goto L_15052CD5; /* 0x15052C2A: jmp 0x15052cd5 */
L_15052C2F:
    edx = edi; /* 0x15052C2F: mov edx, edi */
    MEM32(ebp + (-0x8)) = edx; /* 0x15052C31: mov dword ptr [ebp - 8], edx */
L_15052C34:
    SET_LO8(eax, MEM8(edi)); /* 0x15052C34: mov al, byte ptr [edi] */
    esi = edi; /* 0x15052C36: mov esi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x15052C38: inc edi */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x15052C39: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15052C34; /* 0x15052C3B: jne 0x15052c34 */
L_15052C3D:
    /* cmp esi, edx */ /* 0x15052C3D: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15052C5D; /* 0x15052C3F: je 0x15052c5d */
L_15052C41:
    eax = ebp + (-0x20); /* 0x15052C41: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x15052C44: push eax */
    eax = esi; /* 0x15052C45: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x15052C47: sub eax, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x15052C49: dec eax */
    _flag_k = FK_DEC;
    PUSH32(esp, eax); /* 0x15052C4A: push eax */
    PUSH32(esp, edx); /* 0x15052C4B: push edx */
    RECOMP_CALL(sub_15051BB0); /* 0x15052C4C: call 0x15051bb0 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x8)); /* 0x15052C51: mov edx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15052C54: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp eax, 1 */ /* 0x15052C57: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15052C5D; /* 0x15052C5A: jne 0x15052c5d */
L_15052C5C:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x15052C5C: dec esi */
    _flag_k = FK_DEC;
L_15052C5D:
    edi = MEM32(ebp + 0xC); /* 0x15052C5D: mov edi, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x10); /* 0x15052C60: mov ecx, dword ptr [ebp + 0x10] */
L_15052C63:
    SET_LO8(eax, MEM8(edi)); /* 0x15052C63: mov al, byte ptr [edi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x15052C65: dec ecx */
    _flag_k = FK_DEC;
    MEM32(ebp + 0x10) = ecx; /* 0x15052C66: mov dword ptr [ebp + 0x10], ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x15052C69: inc edi */
    _flag_k = FK_INC;
    ecx = esi + 0x1; /* 0x15052C6A: lea ecx, [esi + 1] */
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(eax)); /* 0x15052C6D: mov byte ptr [ebp - 1], al */
    MEM32(ebp + (-0xC)) = ecx; /* 0x15052C70: mov dword ptr [ebp - 0xc], ecx */
    ecx = (uint32_t)LO8(eax); /* 0x15052C73: movzx ecx, al */
    eax = MEM32(ebp + (-0x1C)); /* 0x15052C76: mov eax, dword ptr [ebp - 0x1c] */
    MEM32(ebp + (-0x10)) = esi; /* 0x15052C79: mov dword ptr [ebp - 0x10], esi */
    /* test MEM8(ecx + eax + 0x1D), 4 */ /* 0x15052C7C: test byte ptr [ecx + eax + 0x1d], 4 */
    _flag_a = (uint32_t)(MEM8(ecx + eax + 0x1D)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    SET_LO8(eax, MEM8(ebp + (-0x1))); /* 0x15052C81: mov al, byte ptr [ebp - 1] */
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x15052C84: mov byte ptr [esi], al */
    esi = MEM32(ebp + (-0xC)); /* 0x15052C86: mov esi, dword ptr [ebp - 0xc] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_15052CC3; /* 0x15052C89: je 0x15052cc3 */
L_15052C8B:
    ecx = MEM32(ebp + 0x10); /* 0x15052C8B: mov ecx, dword ptr [ebp + 0x10] */
    /* test ecx, ecx */ /* 0x15052C8E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15052C9D; /* 0x15052C90: je 0x15052c9d */
L_15052C92:
    SET_LO8(eax, MEM8(edi)); /* 0x15052C92: mov al, byte ptr [edi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x15052C94: dec ecx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x15052C95: inc edi */
    _flag_k = FK_INC;
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x15052C96: mov byte ptr [esi], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15052C98: inc esi */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x15052C99: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15052CCA; /* 0x15052C9B: jne 0x15052cca */
L_15052C9D:
    eax = MEM32(ebp + (-0x10)); /* 0x15052C9D: mov eax, dword ptr [ebp - 0x10] */
    MEM8(eax) = (uint8_t)(LO8(ebx)); /* 0x15052CA0: mov byte ptr [eax], bl */
L_15052CA2:
    /* cmp esi, edx */ /* 0x15052CA2: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15052CD0; /* 0x15052CA4: je 0x15052cd0 */
L_15052CA6:
    eax = ebp + (-0x20); /* 0x15052CA6: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x15052CA9: push eax */
    eax = esi; /* 0x15052CAA: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x15052CAC: sub eax, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x15052CAE: dec eax */
    _flag_k = FK_DEC;
    PUSH32(esp, eax); /* 0x15052CAF: push eax */
    PUSH32(esp, edx); /* 0x15052CB0: push edx */
    RECOMP_CALL(sub_15051BB0); /* 0x15052CB1: call 0x15051bb0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15052CB6: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp eax, 1 */ /* 0x15052CB9: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15052CD0; /* 0x15052CBC: jne 0x15052cd0 */
L_15052CBE:
    MEM8(esi + (-0x1)) = (uint8_t)(LO8(ebx)); /* 0x15052CBE: mov byte ptr [esi - 1], bl */
    goto L_15052CD2; /* 0x15052CC1: jmp 0x15052cd2 */
L_15052CC3:
    /* test LO8(eax), LO8(eax) */ /* 0x15052CC3: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15052CA2; /* 0x15052CC5: je 0x15052ca2 */
L_15052CC7:
    ecx = MEM32(ebp + 0x10); /* 0x15052CC7: mov ecx, dword ptr [ebp + 0x10] */
L_15052CCA:
    /* test ecx, ecx */ /* 0x15052CCA: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15052C63; /* 0x15052CCC: jne 0x15052c63 */
L_15052CCE:
    RECOMP_BACKEDGE();
    goto L_15052CA2; /* 0x15052CCE: jmp 0x15052ca2 */
L_15052CD0:
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x15052CD0: mov byte ptr [esi], bl */
L_15052CD2:
    ecx = MEM32(ebp + (-0x8)); /* 0x15052CD2: mov ecx, dword ptr [ebp - 8] */
L_15052CD5:
    /* cmp MEM8(ebp + (-0x14)), LO8(ebx) */ /* 0x15052CD5: cmp byte ptr [ebp - 0x14], bl */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x14))) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15052CE1; /* 0x15052CD8: je 0x15052ce1 */
L_15052CDA:
    eax = MEM32(ebp + (-0x18)); /* 0x15052CDA: mov eax, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(MEM32(eax + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(eax + 0x70) = MEM32(eax + 0x70) & 0xFFFFFFFDu; /* 0x15052CDD: and dword ptr [eax + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_15052CE1:
    eax = ecx; /* 0x15052CE1: mov eax, ecx */
L_15052CE3:
    esi = POP32_VAL(esp); /* 0x15052CE3: pop esi */
L_15052CE4:
    edi = POP32_VAL(esp); /* 0x15052CE4: pop edi */
    ebx = POP32_VAL(esp); /* 0x15052CE5: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15052CE6: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15052CE7: ret  */
    RECOMP_REGS_OUT();
}

void sub_15052CF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15052CF0u);

L_15052CF0:
    edi = edi; /* 0x15052CF0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15052CF2: push ebp */
    ebp = esp; /* 0x15052CF3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x15052CF5: sub esp, 0x10 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x14); /* 0x15052CF8: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, ebx); /* 0x15052CFB: push ebx */
    PUSH32(esp, esi); /* 0x15052CFC: push esi */
    esi = MEM32(ebp + 0x8); /* 0x15052CFD: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15052D00: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = ebx; /* 0x15052D02: mov dword ptr [ebp - 8], ebx */
    PUSH32(esp, edi); /* 0x15052D05: push edi */
    /* test eax, eax */ /* 0x15052D06: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15052D35; /* 0x15052D08: jne 0x15052d35 */
L_15052D0A:
    /* test esi, esi */ /* 0x15052D0A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15052D39; /* 0x15052D0C: jne 0x15052d39 */
L_15052D0E:
    /* cmp MEM32(ebp + 0xC), ebx */ /* 0x15052D0E: cmp dword ptr [ebp + 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15052EEA; /* 0x15052D11: je 0x15052eea */
L_15052D17:
    RECOMP_CALL(sub_15036430); /* 0x15052D17: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x15052D1C: push 0x16 */
L_15052D1E:
    esi = POP32_VAL(esp); /* 0x15052D1E: pop esi */
    PUSH32(esp, ebx); /* 0x15052D1F: push ebx */
    PUSH32(esp, ebx); /* 0x15052D20: push ebx */
    PUSH32(esp, ebx); /* 0x15052D21: push ebx */
    PUSH32(esp, ebx); /* 0x15052D22: push ebx */
    PUSH32(esp, ebx); /* 0x15052D23: push ebx */
    MEM32(eax) = esi; /* 0x15052D24: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1505A110); /* 0x15052D26: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15052D2B: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x15052D2E: mov eax, esi */
L_15052D30:
    edi = POP32_VAL(esp); /* 0x15052D30: pop edi */
    esi = POP32_VAL(esp); /* 0x15052D31: pop esi */
    ebx = POP32_VAL(esp); /* 0x15052D32: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15052D33: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15052D34: ret  */
L_15052D35:
    /* test esi, esi */ /* 0x15052D35: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15052D17; /* 0x15052D37: je 0x15052d17 */
L_15052D39:
    ecx = MEM32(ebp + 0xC); /* 0x15052D39: mov ecx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x15052D3C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15052D17; /* 0x15052D3E: je 0x15052d17 */
L_15052D40:
    /* test eax, eax */ /* 0x15052D40: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15052D4D; /* 0x15052D42: je 0x15052d4d */
L_15052D44:
    /* cmp MEM32(ebp + 0x10), ebx */ /* 0x15052D44: cmp dword ptr [ebp + 0x10], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15052D4D; /* 0x15052D47: jne 0x15052d4d */
L_15052D49:
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x15052D49: mov byte ptr [esi], bl */
    RECOMP_BACKEDGE();
    goto L_15052D17; /* 0x15052D4B: jmp 0x15052d17 */
L_15052D4D:
    eax = esi; /* 0x15052D4D: mov eax, esi */
    edx = ecx; /* 0x15052D4F: mov edx, ecx */
L_15052D51:
    /* cmp MEM8(eax), LO8(ebx) */ /* 0x15052D51: cmp byte ptr [eax], bl */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15052D5D; /* 0x15052D53: je 0x15052d5d */
L_15052D55:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15052D55: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 1; /* 0x15052D56: sub edx, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_15052D51; /* 0x15052D59: jne 0x15052d51 */
L_15052D5B:
    RECOMP_BACKEDGE();
    goto L_15052D49; /* 0x15052D5B: jmp 0x15052d49 */
L_15052D5D:
    edi = eax; /* 0x15052D5D: mov edi, eax */
    ebx = edx; /* 0x15052D5F: mov ebx, edx */
    /* cmp edx, ecx */ /* 0x15052D61: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_15052DB0; /* 0x15052D63: jae 0x15052db0 */
L_15052D65:
    ebx = eax + (-0x1); /* 0x15052D65: lea ebx, [eax - 1] */
    MEM32(ebp + (-0xC)) = ebx; /* 0x15052D68: mov dword ptr [ebp - 0xc], ebx */
    MEM32(ebp + (-0x4)) = ebx; /* 0x15052D6B: mov dword ptr [ebp - 4], ebx */
    ebx = edx; /* 0x15052D6E: mov ebx, edx */
    /* cmp MEM32(ebp + (-0xC)), esi */ /* 0x15052D70: cmp dword ptr [ebp - 0xc], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_15052D97; /* 0x15052D73: jb 0x15052d97 */
L_15052D75:
    ebx = MEM32(ebp + (-0x4)); /* 0x15052D75: mov ebx, dword ptr [ebp - 4] */
    MEM32(ebp + (-0x10)) = edx; /* 0x15052D78: mov dword ptr [ebp - 0x10], edx */
L_15052D7B:
    eax = (uint32_t)MEM8(ebx); /* 0x15052D7B: movzx eax, byte ptr [ebx] */
    PUSH32(esp, eax); /* 0x15052D7E: push eax */
    RECOMP_CALL(sub_15050550); /* 0x15052D7F: call 0x15050550 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15052D84: pop ecx */
    /* test eax, eax */ /* 0x15052D85: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15052D8E; /* 0x15052D87: je 0x15052d8e */
L_15052D89:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x15052D89: dec ebx */
    _flag_k = FK_DEC;
    /* cmp ebx, esi */ /* 0x15052D8A: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_15052D7B; /* 0x15052D8C: jae 0x15052d7b */
L_15052D8E:
    ecx = MEM32(ebp + 0xC); /* 0x15052D8E: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x4)) = ebx; /* 0x15052D91: mov dword ptr [ebp - 4], ebx */
    ebx = MEM32(ebp + (-0x10)); /* 0x15052D94: mov ebx, dword ptr [ebp - 0x10] */
L_15052D97:
    edx = MEM32(ebp + (-0xC)); /* 0x15052D97: mov edx, dword ptr [ebp - 0xc] */
    eax = edx; /* 0x15052D9A: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + (-0x4)); /* 0x15052D9C: sub eax, dword ptr [ebp - 4] */
    _flag_k = FK_CMP;
    /* test LO8(eax), 1 */ /* 0x15052D9F: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15052DB0; /* 0x15052DA1: je 0x15052db0 */
L_15052DA3:
    edi = edx; /* 0x15052DA3: mov edi, edx */
    MEM32(ebp + (-0x8)) = 1; /* 0x15052DA5: mov dword ptr [ebp - 8], 1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x15052DAC: inc ebx */
    _flag_k = FK_INC;
    MEM8(edi) = (uint8_t)(0); /* 0x15052DAD: mov byte ptr [edi], 0 */
L_15052DB0:
    edx = MEM32(ebp + 0x14); /* 0x15052DB0: mov edx, dword ptr [ebp + 0x14] */
    /* cmp edx, 0xFFFFFFFFu */ /* 0x15052DB3: cmp edx, -1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15052DCE; /* 0x15052DB6: jne 0x15052dce */
L_15052DB8:
    eax = MEM32(ebp + 0x10); /* 0x15052DB8: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1; /* 0x15052DBB: inc dword ptr [ebp + 0x10] */
    _flag_k = FK_INC;
    SET_LO8(eax, MEM8(eax)); /* 0x15052DBE: mov al, byte ptr [eax] */
    MEM8(edi) = (uint8_t)(LO8(eax)); /* 0x15052DC0: mov byte ptr [edi], al */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x15052DC2: inc edi */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x15052DC3: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15052DF6; /* 0x15052DC5: je 0x15052df6 */
L_15052DC7:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 1; /* 0x15052DC7: sub ebx, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_15052DB8; /* 0x15052DCA: jne 0x15052db8 */
L_15052DCC:
    goto L_15052DF6; /* 0x15052DCC: jmp 0x15052df6 */
L_15052DCE:
    /* test edx, edx */ /* 0x15052DCE: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15052DF2; /* 0x15052DD0: je 0x15052df2 */
L_15052DD2:
    eax = MEM32(ebp + 0x10); /* 0x15052DD2: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1; /* 0x15052DD5: inc dword ptr [ebp + 0x10] */
    _flag_k = FK_INC;
    SET_LO8(eax, MEM8(eax)); /* 0x15052DD8: mov al, byte ptr [eax] */
    MEM8(edi) = (uint8_t)(LO8(eax)); /* 0x15052DDA: mov byte ptr [edi], al */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x15052DDC: inc edi */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x15052DDD: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15052DF6; /* 0x15052DDF: je 0x15052df6 */
L_15052DE1:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 1; /* 0x15052DE1: sub ebx, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15052DEE; /* 0x15052DE4: je 0x15052dee */
L_15052DE6:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 1; /* 0x15052DE6: sub edx, 1 */
    _flag_k = FK_CMP;
    MEM32(ebp + 0x14) = edx; /* 0x15052DE9: mov dword ptr [ebp + 0x14], edx */
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_15052DD2; /* 0x15052DEC: jne 0x15052dd2 */
L_15052DEE:
    /* test edx, edx */ /* 0x15052DEE: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15052DF6; /* 0x15052DF0: jne 0x15052df6 */
L_15052DF2:
    MEM8(edi) = (uint8_t)(0); /* 0x15052DF2: mov byte ptr [edi], 0 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x15052DF5: inc edi */
    _flag_k = FK_INC;
L_15052DF6:
    /* test ebx, ebx */ /* 0x15052DF6: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15052EAE; /* 0x15052DF8: jne 0x15052eae */
L_15052DFE:
    eax = MEM32(ebp + 0x10); /* 0x15052DFE: mov eax, dword ptr [ebp + 0x10] */
    /* cmp MEM8(eax), LO8(ebx) */ /* 0x15052E01: cmp byte ptr [eax], bl */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15052E0A; /* 0x15052E03: je 0x15052e0a */
L_15052E05:
    /* cmp edx, 1 */ /* 0x15052E05: cmp edx, 1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15052E45; /* 0x15052E08: jne 0x15052e45 */
L_15052E0A:
    ebx = edi + (-0x1); /* 0x15052E0A: lea ebx, [edi - 1] */
    edi = ebx; /* 0x15052E0D: mov edi, ebx */
    /* cmp ebx, esi */ /* 0x15052E0F: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_15052E29; /* 0x15052E11: jb 0x15052e29 */
L_15052E13:
    eax = (uint32_t)MEM8(edi); /* 0x15052E13: movzx eax, byte ptr [edi] */
    PUSH32(esp, eax); /* 0x15052E16: push eax */
    RECOMP_CALL(sub_15050550); /* 0x15052E17: call 0x15050550 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15052E1C: pop ecx */
    /* test eax, eax */ /* 0x15052E1D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15052E26; /* 0x15052E1F: je 0x15052e26 */
L_15052E21:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x15052E21: dec edi */
    _flag_k = FK_DEC;
    /* cmp edi, esi */ /* 0x15052E22: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_15052E13; /* 0x15052E24: jae 0x15052e13 */
L_15052E26:
    edx = MEM32(ebp + 0x14); /* 0x15052E26: mov edx, dword ptr [ebp + 0x14] */
L_15052E29:
    eax = ebx; /* 0x15052E29: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x15052E2B: sub eax, edi */
    _flag_k = FK_CMP;
    /* test LO8(eax), 1 */ /* 0x15052E2D: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15052E45; /* 0x15052E2F: je 0x15052e45 */
L_15052E31:
    MEM8(ebx) = (uint8_t)(0); /* 0x15052E31: mov byte ptr [ebx], 0 */
L_15052E34:
    RECOMP_CALL(sub_15036430); /* 0x15052E34: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x2Au); /* 0x15052E39: push 0x2a */
    ecx = POP32_VAL(esp); /* 0x15052E3B: pop ecx */
    MEM32(eax) = ecx; /* 0x15052E3C: mov dword ptr [eax], ecx */
    eax = ecx; /* 0x15052E3E: mov eax, ecx */
    RECOMP_BACKEDGE();
    goto L_15052D30; /* 0x15052E40: jmp 0x15052d30 */
L_15052E45:
    /* cmp edx, 0xFFFFFFFFu */ /* 0x15052E45: cmp edx, -1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15052E9E; /* 0x15052E48: jne 0x15052e9e */
L_15052E4A:
    /* cmp MEM32(ebp + (-0x8)), 0 */ /* 0x15052E4A: cmp dword ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15052E5B; /* 0x15052E4E: je 0x15052e5b */
L_15052E50:
    RECOMP_CALL(sub_15036430); /* 0x15052E50: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x2Au; /* 0x15052E55: mov dword ptr [eax], 0x2a */
L_15052E5B:
    ecx = MEM32(ebp + 0xC); /* 0x15052E5B: mov ecx, dword ptr [ebp + 0xc] */
    /* cmp ecx, 1 */ /* 0x15052E5E: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_15052E97; /* 0x15052E61: jbe 0x15052e97 */
L_15052E63:
    ebx = ecx + (-0x2); /* 0x15052E63: lea ebx, [ecx - 2] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + esi; /* 0x15052E66: add ebx, esi */
    _flag_k = FK_ADD;
    edi = ebx; /* 0x15052E68: mov edi, ebx */
    /* cmp ebx, esi */ /* 0x15052E6A: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_15052E84; /* 0x15052E6C: jb 0x15052e84 */
L_15052E6E:
    eax = (uint32_t)MEM8(edi); /* 0x15052E6E: movzx eax, byte ptr [edi] */
    PUSH32(esp, eax); /* 0x15052E71: push eax */
    RECOMP_CALL(sub_15050550); /* 0x15052E72: call 0x15050550 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15052E77: pop ecx */
    /* test eax, eax */ /* 0x15052E78: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15052E81; /* 0x15052E7A: je 0x15052e81 */
L_15052E7C:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x15052E7C: dec edi */
    _flag_k = FK_DEC;
    /* cmp edi, esi */ /* 0x15052E7D: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_15052E6E; /* 0x15052E7F: jae 0x15052e6e */
L_15052E81:
    ecx = MEM32(ebp + 0xC); /* 0x15052E81: mov ecx, dword ptr [ebp + 0xc] */
L_15052E84:
    eax = ebx; /* 0x15052E84: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x15052E86: sub eax, edi */
    _flag_k = FK_CMP;
    /* test LO8(eax), 1 */ /* 0x15052E88: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15052E97; /* 0x15052E8A: je 0x15052e97 */
L_15052E8C:
    MEM8(ebx) = (uint8_t)(0); /* 0x15052E8C: mov byte ptr [ebx], 0 */
L_15052E8F:
    PUSH32(esp, 0x50u); /* 0x15052E8F: push 0x50 */
    eax = POP32_VAL(esp); /* 0x15052E91: pop eax */
    RECOMP_BACKEDGE();
    goto L_15052D30; /* 0x15052E92: jmp 0x15052d30 */
L_15052E97:
    MEM8(esi + ecx + (-0x1)) = (uint8_t)(0); /* 0x15052E97: mov byte ptr [esi + ecx - 1], 0 */
    RECOMP_BACKEDGE();
    goto L_15052E8F; /* 0x15052E9C: jmp 0x15052e8f */
L_15052E9E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15052E9E: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x15052EA0: mov byte ptr [esi], bl */
    RECOMP_CALL(sub_15036430); /* 0x15052EA2: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x22u); /* 0x15052EA7: push 0x22 */
    RECOMP_BACKEDGE();
    goto L_15052D1E; /* 0x15052EA9: jmp 0x15052d1e */
L_15052EAE:
    /* cmp ebx, ecx */ /* 0x15052EAE: cmp ebx, ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_15052EE0; /* 0x15052EB0: jae 0x15052ee0 */
L_15052EB2:
    eax = edi + (-0x2); /* 0x15052EB2: lea eax, [edi - 2] */
    ebx = eax; /* 0x15052EB5: mov ebx, eax */
    /* cmp eax, esi */ /* 0x15052EB7: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_15052ED1; /* 0x15052EB9: jb 0x15052ed1 */
L_15052EBB:
    eax = (uint32_t)MEM8(ebx); /* 0x15052EBB: movzx eax, byte ptr [ebx] */
    PUSH32(esp, eax); /* 0x15052EBE: push eax */
    RECOMP_CALL(sub_15050550); /* 0x15052EBF: call 0x15050550 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15052EC4: pop ecx */
    /* test eax, eax */ /* 0x15052EC5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15052ECE; /* 0x15052EC7: je 0x15052ece */
L_15052EC9:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x15052EC9: dec ebx */
    _flag_k = FK_DEC;
    /* cmp ebx, esi */ /* 0x15052ECA: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_15052EBB; /* 0x15052ECC: jae 0x15052ebb */
L_15052ECE:
    eax = edi + (-0x2); /* 0x15052ECE: lea eax, [edi - 2] */
L_15052ED1:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x15052ED1: sub eax, ebx */
    _flag_k = FK_CMP;
    /* test LO8(eax), 1 */ /* 0x15052ED3: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15052EE0; /* 0x15052ED5: je 0x15052ee0 */
L_15052ED7:
    MEM8(edi + (-0x2)) = (uint8_t)(0); /* 0x15052ED7: mov byte ptr [edi - 2], 0 */
    RECOMP_BACKEDGE();
    goto L_15052E34; /* 0x15052EDB: jmp 0x15052e34 */
L_15052EE0:
    /* cmp MEM32(ebp + (-0x8)), 0 */ /* 0x15052EE0: cmp dword ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15052E34; /* 0x15052EE4: jne 0x15052e34 */
L_15052EEA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15052EEA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_15052D30; /* 0x15052EEC: jmp 0x15052d30 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_15052F00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15052F00u);

L_15052F00:
    edi = edi; /* 0x15052F00: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15052F02: push ebp */
    ebp = esp; /* 0x15052F03: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x15052F05: sub esp, 0x20 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x15052F08: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x15052F0C: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x15052F0D: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x15052F10: push esi */
    esi = MEM32(ebp + 0x8); /* 0x15052F11: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x15052F14: push edi */
    edi = MEM32(ebp + 0x14); /* 0x15052F15: mov edi, dword ptr [ebp + 0x14] */
    /* test edi, edi */ /* 0x15052F18: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15052F2F; /* 0x15052F1A: jne 0x15052f2f */
L_15052F1C:
    /* test esi, esi */ /* 0x15052F1C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15052F37; /* 0x15052F1E: jne 0x15052f37 */
L_15052F20:
    /* test ebx, ebx */ /* 0x15052F20: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505316D; /* 0x15052F22: jne 0x1505316d */
L_15052F28:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15052F28: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15053188; /* 0x15052F2A: jmp 0x15053188 */
L_15052F2F:
    /* test esi, esi */ /* 0x15052F2F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505316D; /* 0x15052F31: je 0x1505316d */
L_15052F37:
    /* test ebx, ebx */ /* 0x15052F37: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505316D; /* 0x15052F39: je 0x1505316d */
L_15052F3F:
    /* test edi, edi */ /* 0x15052F3F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15052F61; /* 0x15052F41: je 0x15052f61 */
L_15052F43:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x15052F43: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15052F61; /* 0x15052F47: jne 0x15052f61 */
L_15052F49:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15052F49: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x15052F4B: mov byte ptr [esi], bl */
    RECOMP_CALL(sub_15036430); /* 0x15052F4D: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x15052F52: push 0x16 */
    esi = POP32_VAL(esp); /* 0x15052F54: pop esi */
    PUSH32(esp, ebx); /* 0x15052F55: push ebx */
    PUSH32(esp, ebx); /* 0x15052F56: push ebx */
    PUSH32(esp, ebx); /* 0x15052F57: push ebx */
    PUSH32(esp, ebx); /* 0x15052F58: push ebx */
    MEM32(eax) = esi; /* 0x15052F59: mov dword ptr [eax], esi */
    PUSH32(esp, ebx); /* 0x15052F5B: push ebx */
    goto L_1505317E; /* 0x15052F5C: jmp 0x1505317e */
L_15052F61:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x15052F61: push dword ptr [ebp + 0x18] */
    ecx = ebp + (-0x20); /* 0x15052F64: lea ecx, [ebp - 0x20] */
    RECOMP_CALL(sub_1502F870); /* 0x15052F67: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x1C)); /* 0x15052F6C: mov eax, dword ptr [ebp - 0x1c] */
    /* cmp MEM32(eax + 0x8), 0 */ /* 0x15052F6F: cmp dword ptr [eax + 8], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15052F8A; /* 0x15052F73: jne 0x15052f8a */
L_15052F75:
    PUSH32(esp, edi); /* 0x15052F75: push edi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15052F76: push dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x15052F79: push ebx */
    PUSH32(esp, esi); /* 0x15052F7A: push esi */
    RECOMP_CALL(sub_1508E8F0); /* 0x15052F7B: call 0x1508e8f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15052F80: add esp, 0x10 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x15052F83: mov esi, eax */
    goto L_1505315E; /* 0x15052F85: jmp 0x1505315e */
L_15052F8A:
    eax = esi; /* 0x15052F8A: mov eax, esi */
    ecx = ebx; /* 0x15052F8C: mov ecx, ebx */
L_15052F8E:
    /* cmp MEM8(eax), 0 */ /* 0x15052F8E: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15052FA9; /* 0x15052F91: je 0x15052fa9 */
L_15052F93:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15052F93: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x15052F94: sub ecx, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_15052F8E; /* 0x15052F97: jne 0x15052f8e */
L_15052F99:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15052F99: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x15052F9B: mov byte ptr [esi], bl */
    RECOMP_CALL(sub_15036430); /* 0x15052F9D: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x15052FA2: push 0x16 */
    goto L_150530FA; /* 0x15052FA4: jmp 0x150530fa */
L_15052FA9:
    edi = eax; /* 0x15052FA9: mov edi, eax */
    edx = ecx; /* 0x15052FAB: mov edx, ecx */
    /* cmp ecx, ebx */ /* 0x15052FAD: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_15053001; /* 0x15052FAF: jae 0x15053001 */
L_15052FB1:
    edx = eax + (-0x1); /* 0x15052FB1: lea edx, [eax - 1] */
    MEM32(ebp + (-0xC)) = edx; /* 0x15052FB4: mov dword ptr [ebp - 0xc], edx */
    MEM32(ebp + (-0x4)) = edx; /* 0x15052FB7: mov dword ptr [ebp - 4], edx */
    edx = ecx; /* 0x15052FBA: mov edx, ecx */
    /* cmp MEM32(ebp + (-0xC)), esi */ /* 0x15052FBC: cmp dword ptr [ebp - 0xc], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_15052FE8; /* 0x15052FBF: jb 0x15052fe8 */
L_15052FC1:
    ebx = MEM32(ebp + (-0x4)); /* 0x15052FC1: mov ebx, dword ptr [ebp - 4] */
    MEM32(ebp + (-0x10)) = ecx; /* 0x15052FC4: mov dword ptr [ebp - 0x10], ecx */
L_15052FC7:
    eax = (uint32_t)MEM8(ebx); /* 0x15052FC7: movzx eax, byte ptr [ebx] */
    ecx = ebp + (-0x20); /* 0x15052FCA: lea ecx, [ebp - 0x20] */
    PUSH32(esp, ecx); /* 0x15052FCD: push ecx */
    PUSH32(esp, eax); /* 0x15052FCE: push eax */
    RECOMP_CALL(sub_15050570); /* 0x15052FCF: call 0x15050570 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15052FD4: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15052FD5: pop ecx */
    /* test eax, eax */ /* 0x15052FD6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15052FDF; /* 0x15052FD8: je 0x15052fdf */
L_15052FDA:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x15052FDA: dec ebx */
    _flag_k = FK_DEC;
    /* cmp ebx, esi */ /* 0x15052FDB: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_15052FC7; /* 0x15052FDD: jae 0x15052fc7 */
L_15052FDF:
    edx = MEM32(ebp + (-0x10)); /* 0x15052FDF: mov edx, dword ptr [ebp - 0x10] */
    MEM32(ebp + (-0x4)) = ebx; /* 0x15052FE2: mov dword ptr [ebp - 4], ebx */
    ebx = MEM32(ebp + 0xC); /* 0x15052FE5: mov ebx, dword ptr [ebp + 0xc] */
L_15052FE8:
    ecx = MEM32(ebp + (-0xC)); /* 0x15052FE8: mov ecx, dword ptr [ebp - 0xc] */
    eax = ecx; /* 0x15052FEB: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + (-0x4)); /* 0x15052FED: sub eax, dword ptr [ebp - 4] */
    _flag_k = FK_CMP;
    /* test LO8(eax), 1 */ /* 0x15052FF0: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15053001; /* 0x15052FF2: je 0x15053001 */
L_15052FF4:
    edi = ecx; /* 0x15052FF4: mov edi, ecx */
    MEM32(ebp + (-0x8)) = 1; /* 0x15052FF6: mov dword ptr [ebp - 8], 1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x15052FFD: inc edx */
    _flag_k = FK_INC;
    MEM8(edi) = (uint8_t)(0); /* 0x15052FFE: mov byte ptr [edi], 0 */
L_15053001:
    ecx = MEM32(ebp + 0x14); /* 0x15053001: mov ecx, dword ptr [ebp + 0x14] */
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x15053004: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505301F; /* 0x15053007: jne 0x1505301f */
L_15053009:
    eax = MEM32(ebp + 0x10); /* 0x15053009: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1; /* 0x1505300C: inc dword ptr [ebp + 0x10] */
    _flag_k = FK_INC;
    SET_LO8(eax, MEM8(eax)); /* 0x1505300F: mov al, byte ptr [eax] */
    MEM8(edi) = (uint8_t)(LO8(eax)); /* 0x15053011: mov byte ptr [edi], al */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x15053013: inc edi */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x15053014: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15053047; /* 0x15053016: je 0x15053047 */
L_15053018:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 1; /* 0x15053018: sub edx, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_15053009; /* 0x1505301B: jne 0x15053009 */
L_1505301D:
    goto L_15053047; /* 0x1505301D: jmp 0x15053047 */
L_1505301F:
    /* test ecx, ecx */ /* 0x1505301F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15053043; /* 0x15053021: je 0x15053043 */
L_15053023:
    eax = MEM32(ebp + 0x10); /* 0x15053023: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1; /* 0x15053026: inc dword ptr [ebp + 0x10] */
    _flag_k = FK_INC;
    SET_LO8(eax, MEM8(eax)); /* 0x15053029: mov al, byte ptr [eax] */
    MEM8(edi) = (uint8_t)(LO8(eax)); /* 0x1505302B: mov byte ptr [edi], al */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1505302D: inc edi */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x1505302E: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15053047; /* 0x15053030: je 0x15053047 */
L_15053032:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 1; /* 0x15053032: sub edx, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1505303F; /* 0x15053035: je 0x1505303f */
L_15053037:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x15053037: sub ecx, 1 */
    _flag_k = FK_CMP;
    MEM32(ebp + 0x14) = ecx; /* 0x1505303A: mov dword ptr [ebp + 0x14], ecx */
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_15053023; /* 0x1505303D: jne 0x15053023 */
L_1505303F:
    /* test ecx, ecx */ /* 0x1505303F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15053047; /* 0x15053041: jne 0x15053047 */
L_15053043:
    MEM8(edi) = (uint8_t)(0); /* 0x15053043: mov byte ptr [edi], 0 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x15053046: inc edi */
    _flag_k = FK_INC;
L_15053047:
    /* test edx, edx */ /* 0x15053047: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505310C; /* 0x15053049: jne 0x1505310c */
L_1505304F:
    eax = MEM32(ebp + 0x10); /* 0x1505304F: mov eax, dword ptr [ebp + 0x10] */
    /* cmp MEM8(eax), LO8(edx) */ /* 0x15053052: cmp byte ptr [eax], dl */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505305B; /* 0x15053054: je 0x1505305b */
L_15053056:
    /* cmp ecx, 1 */ /* 0x15053056: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15053095; /* 0x15053059: jne 0x15053095 */
L_1505305B:
    edx = edi + (-0x1); /* 0x1505305B: lea edx, [edi - 1] */
    MEM32(ebp + (-0x10)) = edx; /* 0x1505305E: mov dword ptr [ebp - 0x10], edx */
    edi = edx; /* 0x15053061: mov edi, edx */
    /* cmp edx, esi */ /* 0x15053063: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_15053085; /* 0x15053065: jb 0x15053085 */
L_15053067:
    eax = (uint32_t)MEM8(edi); /* 0x15053067: movzx eax, byte ptr [edi] */
    ecx = ebp + (-0x20); /* 0x1505306A: lea ecx, [ebp - 0x20] */
    PUSH32(esp, ecx); /* 0x1505306D: push ecx */
    PUSH32(esp, eax); /* 0x1505306E: push eax */
    RECOMP_CALL(sub_15050570); /* 0x1505306F: call 0x15050570 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15053074: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15053075: pop ecx */
    /* test eax, eax */ /* 0x15053076: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505307F; /* 0x15053078: je 0x1505307f */
L_1505307A:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1505307A: dec edi */
    _flag_k = FK_DEC;
    /* cmp edi, esi */ /* 0x1505307B: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_15053067; /* 0x1505307D: jae 0x15053067 */
L_1505307F:
    ecx = MEM32(ebp + 0x14); /* 0x1505307F: mov ecx, dword ptr [ebp + 0x14] */
    edx = MEM32(ebp + (-0x10)); /* 0x15053082: mov edx, dword ptr [ebp - 0x10] */
L_15053085:
    eax = edx; /* 0x15053085: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x15053087: sub eax, edi */
    _flag_k = FK_CMP;
    /* test LO8(eax), 1 */ /* 0x15053089: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15053095; /* 0x1505308B: je 0x15053095 */
L_1505308D:
    MEM8(edx) = (uint8_t)(0); /* 0x1505308D: mov byte ptr [edx], 0 */
    goto L_15053150; /* 0x15053090: jmp 0x15053150 */
L_15053095:
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x15053095: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150530EF; /* 0x15053098: jne 0x150530ef */
L_1505309A:
    /* cmp MEM32(ebp + (-0x8)), 0 */ /* 0x1505309A: cmp dword ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150530AB; /* 0x1505309E: je 0x150530ab */
L_150530A0:
    RECOMP_CALL(sub_15036430); /* 0x150530A0: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x2Au; /* 0x150530A5: mov dword ptr [eax], 0x2a */
L_150530AB:
    /* cmp ebx, 1 */ /* 0x150530AB: cmp ebx, 1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_150530E5; /* 0x150530AE: jbe 0x150530e5 */
L_150530B0:
    ecx = esi + (-0x2); /* 0x150530B0: lea ecx, [esi - 2] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ebx; /* 0x150530B3: add ecx, ebx */
    _flag_k = FK_ADD;
    edi = ecx; /* 0x150530B5: mov edi, ecx */
    /* cmp ecx, esi */ /* 0x150530B7: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_150530D8; /* 0x150530B9: jb 0x150530d8 */
L_150530BB:
    eax = (uint32_t)MEM8(edi); /* 0x150530BB: movzx eax, byte ptr [edi] */
    ecx = ebp + (-0x20); /* 0x150530BE: lea ecx, [ebp - 0x20] */
    PUSH32(esp, ecx); /* 0x150530C1: push ecx */
    PUSH32(esp, eax); /* 0x150530C2: push eax */
    RECOMP_CALL(sub_15050570); /* 0x150530C3: call 0x15050570 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150530C8: pop ecx */
    ecx = POP32_VAL(esp); /* 0x150530C9: pop ecx */
    /* test eax, eax */ /* 0x150530CA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150530D3; /* 0x150530CC: je 0x150530d3 */
L_150530CE:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x150530CE: dec edi */
    _flag_k = FK_DEC;
    /* cmp edi, esi */ /* 0x150530CF: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_150530BB; /* 0x150530D1: jae 0x150530bb */
L_150530D3:
    ecx = esi + (-0x2); /* 0x150530D3: lea ecx, [esi - 2] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ebx; /* 0x150530D6: add ecx, ebx */
    _flag_k = FK_ADD;
L_150530D8:
    eax = ecx; /* 0x150530D8: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x150530DA: sub eax, edi */
    _flag_k = FK_CMP;
    /* test LO8(eax), 1 */ /* 0x150530DC: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_150530E5; /* 0x150530DE: je 0x150530e5 */
L_150530E0:
    MEM8(ecx) = (uint8_t)(0); /* 0x150530E0: mov byte ptr [ecx], 0 */
    goto L_150530EA; /* 0x150530E3: jmp 0x150530ea */
L_150530E5:
    MEM8(esi + ebx + (-0x1)) = (uint8_t)(0); /* 0x150530E5: mov byte ptr [esi + ebx - 1], 0 */
L_150530EA:
    PUSH32(esp, 0x50u); /* 0x150530EA: push 0x50 */
    esi = POP32_VAL(esp); /* 0x150530EC: pop esi */
    goto L_1505315E; /* 0x150530ED: jmp 0x1505315e */
L_150530EF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x150530EF: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x150530F1: mov byte ptr [esi], bl */
    RECOMP_CALL(sub_15036430); /* 0x150530F3: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x22u); /* 0x150530F8: push 0x22 */
L_150530FA:
    esi = POP32_VAL(esp); /* 0x150530FA: pop esi */
    PUSH32(esp, ebx); /* 0x150530FB: push ebx */
    PUSH32(esp, ebx); /* 0x150530FC: push ebx */
    PUSH32(esp, ebx); /* 0x150530FD: push ebx */
    PUSH32(esp, ebx); /* 0x150530FE: push ebx */
    PUSH32(esp, ebx); /* 0x150530FF: push ebx */
    MEM32(eax) = esi; /* 0x15053100: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1505A110); /* 0x15053102: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15053107: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_1505315E; /* 0x1505310A: jmp 0x1505315e */
L_1505310C:
    /* cmp edx, ebx */ /* 0x1505310C: cmp edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1505314A; /* 0x1505310E: jae 0x1505314a */
L_15053110:
    ebx = edi + (-0x2); /* 0x15053110: lea ebx, [edi - 2] */
    eax = ebx; /* 0x15053113: mov eax, ebx */
    MEM32(ebp + (-0x4)) = eax; /* 0x15053115: mov dword ptr [ebp - 4], eax */
    /* cmp ebx, esi */ /* 0x15053118: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1505313D; /* 0x1505311A: jb 0x1505313d */
L_1505311C:
    eax = (uint32_t)MEM8(ebx); /* 0x1505311C: movzx eax, byte ptr [ebx] */
    ecx = ebp + (-0x20); /* 0x1505311F: lea ecx, [ebp - 0x20] */
    PUSH32(esp, ecx); /* 0x15053122: push ecx */
    PUSH32(esp, eax); /* 0x15053123: push eax */
    RECOMP_CALL(sub_15050570); /* 0x15053124: call 0x15050570 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15053129: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1505312A: pop ecx */
    /* test eax, eax */ /* 0x1505312B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15053134; /* 0x1505312D: je 0x15053134 */
L_1505312F:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x1505312F: dec ebx */
    _flag_k = FK_DEC;
    /* cmp ebx, esi */ /* 0x15053130: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_1505311C; /* 0x15053132: jae 0x1505311c */
L_15053134:
    MEM32(ebp + (-0x4)) = ebx; /* 0x15053134: mov dword ptr [ebp - 4], ebx */
    ebx = edi + (-0x2); /* 0x15053137: lea ebx, [edi - 2] */
    eax = MEM32(ebp + (-0x4)); /* 0x1505313A: mov eax, dword ptr [ebp - 4] */
L_1505313D:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - eax; /* 0x1505313D: sub ebx, eax */
    _flag_k = FK_CMP;
    /* test LO8(ebx), 1 */ /* 0x1505313F: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505314A; /* 0x15053142: je 0x1505314a */
L_15053144:
    MEM8(edi + (-0x2)) = (uint8_t)(0); /* 0x15053144: mov byte ptr [edi - 2], 0 */
    goto L_15053150; /* 0x15053148: jmp 0x15053150 */
L_1505314A:
    /* cmp MEM32(ebp + (-0x8)), 0 */ /* 0x1505314A: cmp dword ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505315C; /* 0x1505314E: je 0x1505315c */
L_15053150:
    RECOMP_CALL(sub_15036430); /* 0x15053150: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x2Au); /* 0x15053155: push 0x2a */
    esi = POP32_VAL(esp); /* 0x15053157: pop esi */
    MEM32(eax) = esi; /* 0x15053158: mov dword ptr [eax], esi */
    goto L_1505315E; /* 0x1505315A: jmp 0x1505315e */
L_1505315C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1505315C: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1505315E:
    /* cmp MEM8(ebp + (-0x14)), 0 */ /* 0x1505315E: cmp byte ptr [ebp - 0x14], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x14))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15053186; /* 0x15053162: je 0x15053186 */
L_15053164:
    ecx = MEM32(ebp + (-0x18)); /* 0x15053164: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x15053167: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15053186; /* 0x1505316B: jmp 0x15053186 */
L_1505316D:
    RECOMP_CALL(sub_15036430); /* 0x1505316D: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x15053172: push 0x16 */
    esi = POP32_VAL(esp); /* 0x15053174: pop esi */
    MEM32(eax) = esi; /* 0x15053175: mov dword ptr [eax], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15053177: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15053179: push eax */
    PUSH32(esp, eax); /* 0x1505317A: push eax */
    PUSH32(esp, eax); /* 0x1505317B: push eax */
    PUSH32(esp, eax); /* 0x1505317C: push eax */
    PUSH32(esp, eax); /* 0x1505317D: push eax */
L_1505317E:
    RECOMP_CALL(sub_1505A110); /* 0x1505317E: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15053183: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15053186:
    eax = esi; /* 0x15053186: mov eax, esi */
L_15053188:
    edi = POP32_VAL(esp); /* 0x15053188: pop edi */
    esi = POP32_VAL(esp); /* 0x15053189: pop esi */
    ebx = POP32_VAL(esp); /* 0x1505318A: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1505318B: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505318C: ret  */
    RECOMP_REGS_OUT();
}

void sub_150531A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150531A0u);

L_150531A0:
    edi = edi; /* 0x150531A0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150531A2: push ebp */
    ebp = esp; /* 0x150531A3: mov ebp, esp */
    PUSH32(esp, 0); /* 0x150531A5: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x150531A7: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150531AA: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150531AD: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_150531C0); /* 0x150531B0: call 0x150531c0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x150531B5: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x150531B8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150531B9: ret  */
    RECOMP_REGS_OUT();
}

void sub_150531C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150531C0u);

L_150531C0:
    edi = edi; /* 0x150531C0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150531C2: push ebp */
    ebp = esp; /* 0x150531C3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x150531C5: sub esp, 0x18 */
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x150531C8: push edi */
    edi = MEM32(ebp + 0x10); /* 0x150531C9: mov edi, dword ptr [ebp + 0x10] */
    /* test edi, edi */ /* 0x150531CC: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150531D7; /* 0x150531CE: jne 0x150531d7 */
L_150531D0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150531D0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_150532F1; /* 0x150531D2: jmp 0x150532f1 */
L_150531D7:
    PUSH32(esp, ebx); /* 0x150531D7: push ebx */
    PUSH32(esp, esi); /* 0x150531D8: push esi */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x150531D9: push dword ptr [ebp + 0x14] */
    ecx = ebp + (-0x18); /* 0x150531DC: lea ecx, [ebp - 0x18] */
    RECOMP_CALL(sub_1502F870); /* 0x150531DF: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x14)); /* 0x150531E4: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x150531E7: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(eax + 0x8), esi */ /* 0x150531E9: cmp dword ptr [eax + 8], esi */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15053204; /* 0x150531EC: jne 0x15053204 */
L_150531EE:
    PUSH32(esp, edi); /* 0x150531EE: push edi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150531EF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150531F2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1508E9E0); /* 0x150531F5: call 0x1508e9e0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x150531FA: add esp, 0xc */
    _flag_k = FK_ADD;
    esi = eax; /* 0x150531FD: mov esi, eax */
    goto L_150532E0; /* 0x150531FF: jmp 0x150532e0 */
L_15053204:
    ebx = MEM32(ebp + 0x8); /* 0x15053204: mov ebx, dword ptr [ebp + 8] */
    /* test ebx, ebx */ /* 0x15053207: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15053215; /* 0x15053209: je 0x15053215 */
L_1505320B:
    eax = MEM32(ebp + 0xC); /* 0x1505320B: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1505320E: mov dword ptr [ebp - 4], eax */
    /* test eax, eax */ /* 0x15053211: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15053237; /* 0x15053213: jne 0x15053237 */
L_15053215:
    RECOMP_CALL(sub_15036430); /* 0x15053215: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1505321A: push esi */
    PUSH32(esp, esi); /* 0x1505321B: push esi */
    PUSH32(esp, esi); /* 0x1505321C: push esi */
    PUSH32(esp, esi); /* 0x1505321D: push esi */
    PUSH32(esp, esi); /* 0x1505321E: push esi */
    MEM32(eax) = 0x16u; /* 0x1505321F: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x15053225: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505322A: add esp, 0x14 */
    _flag_k = FK_ADD;
    esi = 0x7FFFFFFFu; /* 0x1505322D: mov esi, 0x7fffffff */
    goto L_150532E0; /* 0x15053232: jmp 0x150532e0 */
L_15053237:
    SET_LO8(ecx, MEM8(ebx)); /* 0x15053237: mov cl, byte ptr [ebx] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x15053239: dec edi */
    _flag_k = FK_DEC;
    eax = (uint32_t)LO8(ecx); /* 0x1505323A: movzx eax, cl */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1505323D: inc ebx */
    _flag_k = FK_INC;
    edx = (uint32_t)LO8(ecx); /* 0x1505323E: movzx edx, cl */
    ecx = MEM32(ebp + (-0x14)); /* 0x15053241: mov ecx, dword ptr [ebp - 0x14] */
    MEM32(ebp + (-0x8)) = ebx; /* 0x15053244: mov dword ptr [ebp - 8], ebx */
    /* test MEM8(eax + ecx + 0x1D), 4 */ /* 0x15053247: test byte ptr [eax + ecx + 0x1d], 4 */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x1D)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505328B; /* 0x1505324C: je 0x1505328b */
L_1505324E:
    /* test edi, edi */ /* 0x1505324E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15053271; /* 0x15053250: jne 0x15053271 */
L_15053252:
    eax = MEM32(ebp + (-0x4)); /* 0x15053252: mov eax, dword ptr [ebp - 4] */
    edx = esi; /* 0x15053255: mov edx, esi */
    ebx = MEM32(ebp + (-0x14)); /* 0x15053257: mov ebx, dword ptr [ebp - 0x14] */
    PUSH32(esp, edi); /* 0x1505325A: push edi */
    SET_LO8(ecx, MEM8(eax)); /* 0x1505325B: mov cl, byte ptr [eax] */
    eax = (uint32_t)LO8(ecx); /* 0x1505325D: movzx eax, cl */
    /* test MEM8(eax + ebx + 0x1D), 4 */ /* 0x15053260: test byte ptr [eax + ebx + 0x1d], 4 */
    _flag_a = (uint32_t)(MEM8(eax + ebx + 0x1D)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = (uint32_t)LO8(ecx); /* 0x15053265: movzx eax, cl */
    ecx = POP32_VAL(esp); /* 0x15053268: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) { ecx = eax; } /* 0x15053269: cmove ecx, eax */
    ebx = (uint32_t)LO16(ecx); /* 0x1505326C: movzx ebx, cx */
    goto L_150532C3; /* 0x1505326F: jmp 0x150532c3 */
L_15053271:
    SET_LO8(eax, MEM8(ebx)); /* 0x15053271: mov al, byte ptr [ebx] */
    /* test LO8(eax), LO8(eax) */ /* 0x15053273: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505327B; /* 0x15053275: jne 0x1505327b */
L_15053277:
    edx = esi; /* 0x15053277: mov edx, esi */
    goto L_1505328B; /* 0x15053279: jmp 0x1505328b */
L_1505327B:
    if (8u) _cf = (((edx) >> 24) & 1u); /* 0x1505327B: shl edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((edx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 8u; /* 0x1505327B: shl edx, 8 */
    eax = (uint32_t)LO8(eax); /* 0x1505327E: movzx eax, al */
    _flag_a = (uint32_t)((LO16(edx) | LO16(eax))) << 16; _flag_b = (uint32_t)((LO16(edx) | LO16(eax))) << 16;
    SET_LO16(edx, LO16(edx) | LO16(eax)); /* 0x15053281: or dx, ax */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x15053284: inc ebx */
    _flag_k = FK_INC;
    edx = (uint32_t)LO16(edx); /* 0x15053285: movzx edx, dx */
    MEM32(ebp + (-0x8)) = ebx; /* 0x15053288: mov dword ptr [ebp - 8], ebx */
L_1505328B:
    eax = MEM32(ebp + (-0x4)); /* 0x1505328B: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(ebp + (-0x14)); /* 0x1505328E: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 1; /* 0x15053291: inc dword ptr [ebp - 4] */
    _flag_k = FK_INC;
    ebx = (uint32_t)MEM8(eax); /* 0x15053294: movzx ebx, byte ptr [eax] */
    eax = (uint32_t)MEM8(eax); /* 0x15053297: movzx eax, byte ptr [eax] */
    /* test MEM8(eax + ecx + 0x1D), 4 */ /* 0x1505329A: test byte ptr [eax + ecx + 0x1d], 4 */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x1D)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_150532C3; /* 0x1505329F: je 0x150532c3 */
L_150532A1:
    /* test edi, edi */ /* 0x150532A1: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150532A9; /* 0x150532A3: jne 0x150532a9 */
L_150532A5:
    ebx = esi; /* 0x150532A5: mov ebx, esi */
    goto L_150532C3; /* 0x150532A7: jmp 0x150532c3 */
L_150532A9:
    ecx = MEM32(ebp + (-0x4)); /* 0x150532A9: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x150532AC: dec edi */
    _flag_k = FK_DEC;
    SET_LO8(eax, MEM8(ecx)); /* 0x150532AD: mov al, byte ptr [ecx] */
    /* test LO8(eax), LO8(eax) */ /* 0x150532AF: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_150532A5; /* 0x150532B1: je 0x150532a5 */
L_150532B3:
    if (8u) _cf = (((ebx) >> 24) & 1u); /* 0x150532B3: shl ebx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ebx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 8u; /* 0x150532B3: shl ebx, 8 */
    eax = (uint32_t)LO8(eax); /* 0x150532B6: movzx eax, al */
    _flag_a = (uint32_t)((LO16(ebx) | LO16(eax))) << 16; _flag_b = (uint32_t)((LO16(ebx) | LO16(eax))) << 16;
    SET_LO16(ebx, LO16(ebx) | LO16(eax)); /* 0x150532B9: or bx, ax */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x150532BC: inc ecx */
    _flag_k = FK_INC;
    ebx = (uint32_t)LO16(ebx); /* 0x150532BD: movzx ebx, bx */
    MEM32(ebp + (-0x4)) = ecx; /* 0x150532C0: mov dword ptr [ebp - 4], ecx */
L_150532C3:
    /* cmp LO16(ebx), LO16(edx) */ /* 0x150532C3: cmp bx, dx */
    _flag_a = (uint32_t)(LO16(ebx)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_150532DA; /* 0x150532C6: jne 0x150532da */
L_150532C8:
    /* test LO16(edx), LO16(edx) */ /* 0x150532C8: test dx, dx */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_150532E0; /* 0x150532CB: je 0x150532e0 */
L_150532CD:
    ebx = MEM32(ebp + (-0x8)); /* 0x150532CD: mov ebx, dword ptr [ebp - 8] */
    /* test edi, edi */ /* 0x150532D0: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15053237; /* 0x150532D2: jne 0x15053237 */
L_150532D8:
    goto L_150532E0; /* 0x150532D8: jmp 0x150532e0 */
L_150532DA:
    { uint32_t _sa = esi, _sb = esi, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x150532DA: sbb esi, esi */
      esi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    esi = esi & 2; /* 0x150532DC: and esi, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x150532DF: dec esi */
    _flag_k = FK_DEC;
L_150532E0:
    /* cmp MEM8(ebp + (-0xC)), 0 */ /* 0x150532E0: cmp byte ptr [ebp - 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0xC))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150532ED; /* 0x150532E4: je 0x150532ed */
L_150532E6:
    ecx = MEM32(ebp + (-0x10)); /* 0x150532E6: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x150532E9: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_150532ED:
    eax = esi; /* 0x150532ED: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x150532EF: pop esi */
    ebx = POP32_VAL(esp); /* 0x150532F0: pop ebx */
L_150532F1:
    edi = POP32_VAL(esp); /* 0x150532F1: pop edi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150532F2: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150532F3: ret  */
    RECOMP_REGS_OUT();
}

void sub_15053300(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15053300u);

L_15053300:
    edi = edi; /* 0x15053300: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15053302: push ebp */
    ebp = esp; /* 0x15053303: mov ebp, esp */
    PUSH32(esp, 0); /* 0x15053305: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15053307: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1505330A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15053320); /* 0x1505330D: call 0x15053320 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15053312: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15053315: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15053316: ret  */
    RECOMP_REGS_OUT();
}

void sub_15053320(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15053320u);

L_15053320:
    edi = edi; /* 0x15053320: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15053322: push ebp */
    ebp = esp; /* 0x15053323: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x15053325: sub esp, 0x10 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x10); /* 0x15053328: lea ecx, [ebp - 0x10] */
    PUSH32(esp, esi); /* 0x1505332B: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1505332C: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1502F870); /* 0x1505332F: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0x8); /* 0x15053334: mov edx, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0xC); /* 0x15053337: mov ecx, dword ptr [ebp + 0xc] */
    /* test edx, edx */ /* 0x1505333A: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505335E; /* 0x1505333C: jne 0x1505335e */
L_1505333E:
    /* test ecx, ecx */ /* 0x1505333E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505335E; /* 0x15053340: je 0x1505335e */
L_15053342:
    RECOMP_CALL(sub_15036430); /* 0x15053342: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15053347: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x15053349: push esi */
    PUSH32(esp, esi); /* 0x1505334A: push esi */
    PUSH32(esp, esi); /* 0x1505334B: push esi */
    PUSH32(esp, esi); /* 0x1505334C: push esi */
    PUSH32(esp, esi); /* 0x1505334D: push esi */
    MEM32(eax) = 0x16u; /* 0x1505334E: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x15053354: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15053359: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_1505338F; /* 0x1505335C: jmp 0x1505338f */
L_1505335E:
    esi = edx; /* 0x1505335E: mov esi, edx */
    /* test ecx, ecx */ /* 0x15053360: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505338D; /* 0x15053362: je 0x1505338d */
L_15053364:
    PUSH32(esp, ebx); /* 0x15053364: push ebx */
    ebx = MEM32(ebp + (-0xC)); /* 0x15053365: mov ebx, dword ptr [ebp - 0xc] */
    PUSH32(esp, edi); /* 0x15053368: push edi */
L_15053369:
    SET_LO8(eax, MEM8(esi)); /* 0x15053369: mov al, byte ptr [esi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1505336B: dec ecx */
    _flag_k = FK_DEC;
    edi = esi; /* 0x1505336C: mov edi, esi */
    /* test LO8(eax), LO8(eax) */ /* 0x1505336E: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505338B; /* 0x15053370: je 0x1505338b */
L_15053372:
    eax = (uint32_t)LO8(eax); /* 0x15053372: movzx eax, al */
    /* test MEM8(eax + ebx + 0x1D), 4 */ /* 0x15053375: test byte ptr [eax + ebx + 0x1d], 4 */
    _flag_a = (uint32_t)(MEM8(eax + ebx + 0x1D)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15053382; /* 0x1505337A: je 0x15053382 */
L_1505337C:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1505337C: inc esi */
    _flag_k = FK_INC;
    /* cmp MEM8(esi), 0 */ /* 0x1505337D: cmp byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15053389; /* 0x15053380: je 0x15053389 */
L_15053382:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15053382: inc esi */
    _flag_k = FK_INC;
    /* test ecx, ecx */ /* 0x15053383: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15053369; /* 0x15053385: jne 0x15053369 */
L_15053387:
    goto L_1505338B; /* 0x15053387: jmp 0x1505338b */
L_15053389:
    esi = edi; /* 0x15053389: mov esi, edi */
L_1505338B:
    edi = POP32_VAL(esp); /* 0x1505338B: pop edi */
    ebx = POP32_VAL(esp); /* 0x1505338C: pop ebx */
L_1505338D:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edx; /* 0x1505338D: sub esi, edx */
    _flag_k = FK_CMP;
L_1505338F:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x1505338F: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505339C; /* 0x15053393: je 0x1505339c */
L_15053395:
    ecx = MEM32(ebp + (-0x8)); /* 0x15053395: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x15053398: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1505339C:
    eax = esi; /* 0x1505339C: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1505339E: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1505339F: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150533A0: ret  */
    RECOMP_REGS_OUT();
}

void sub_150533B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150533B0u);

L_150533B0:
    edi = edi; /* 0x150533B0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150533B2: push ebp */
    ebp = esp; /* 0x150533B3: mov ebp, esp */
    PUSH32(esp, 0); /* 0x150533B5: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x150533B7: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150533BA: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150533BD: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_150533D0); /* 0x150533C0: call 0x150533d0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x150533C5: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x150533C8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150533C9: ret  */
    RECOMP_REGS_OUT();
}

void sub_150533D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150533D0u);

L_150533D0:
    edi = edi; /* 0x150533D0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150533D2: push ebp */
    ebp = esp; /* 0x150533D3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x150533D5: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x150533D8: push edi */
    edi = MEM32(ebp + 0x10); /* 0x150533D9: mov edi, dword ptr [ebp + 0x10] */
    /* test edi, edi */ /* 0x150533DC: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150533E7; /* 0x150533DE: jne 0x150533e7 */
L_150533E0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150533E0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_150534AA; /* 0x150533E2: jmp 0x150534aa */
L_150533E7:
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x150533E7: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15053411; /* 0x150533EB: jne 0x15053411 */
L_150533ED:
    RECOMP_CALL(sub_15036430); /* 0x150533ED: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x150533F2: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150533F8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x150533FA: push eax */
    PUSH32(esp, eax); /* 0x150533FB: push eax */
    PUSH32(esp, eax); /* 0x150533FC: push eax */
    PUSH32(esp, eax); /* 0x150533FD: push eax */
    PUSH32(esp, eax); /* 0x150533FE: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x150533FF: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15053404: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = 0x7FFFFFFFu; /* 0x15053407: mov eax, 0x7fffffff */
    goto L_150534AA; /* 0x1505340C: jmp 0x150534aa */
L_15053411:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x15053411: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150533ED; /* 0x15053415: je 0x150533ed */
L_15053417:
    PUSH32(esp, esi); /* 0x15053417: push esi */
    esi = 0x7FFFFFFFu; /* 0x15053418: mov esi, 0x7fffffff */
    /* cmp edi, esi */ /* 0x1505341D: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1505343D; /* 0x1505341F: jbe 0x1505343d */
L_15053421:
    RECOMP_CALL(sub_15036430); /* 0x15053421: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x15053426: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505342C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1505342E: push eax */
    PUSH32(esp, eax); /* 0x1505342F: push eax */
    PUSH32(esp, eax); /* 0x15053430: push eax */
    PUSH32(esp, eax); /* 0x15053431: push eax */
    PUSH32(esp, eax); /* 0x15053432: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x15053433: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15053438: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_150534A7; /* 0x1505343B: jmp 0x150534a7 */
L_1505343D:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1505343D: push dword ptr [ebp + 0x14] */
    ecx = ebp + (-0x10); /* 0x15053440: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1502F870); /* 0x15053443: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0xC)); /* 0x15053448: mov eax, dword ptr [ebp - 0xc] */
    /* cmp MEM32(eax + 0x8), 0 */ /* 0x1505344B: cmp dword ptr [eax + 8], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15053467; /* 0x1505344F: jne 0x15053467 */
L_15053451:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15053451: push dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x15053454: push edi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15053455: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15053458: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1508BEA0); /* 0x1505345B: call 0x1508bea0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15053460: add esp, 0x10 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x15053463: mov esi, eax */
    goto L_1505349A; /* 0x15053465: jmp 0x1505349a */
L_15053467:
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x15053467: push dword ptr [eax + 4] */
    PUSH32(esp, edi); /* 0x1505346A: push edi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1505346B: push dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1505346E: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1505346F: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1000u); /* 0x15053472: push 0x1000 */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x15053477: push dword ptr [eax + 0xc] */
    eax = ebp + (-0x10); /* 0x1505347A: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1505347D: push eax */
    RECOMP_CALL(sub_150584C0); /* 0x1505347E: call 0x150584c0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x15053483: add esp, 0x20 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15053486: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15053497; /* 0x15053488: jne 0x15053497 */
L_1505348A:
    RECOMP_CALL(sub_15036430); /* 0x1505348A: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1505348F: mov dword ptr [eax], 0x16 */
    goto L_1505349A; /* 0x15053495: jmp 0x1505349a */
L_15053497:
    esi = eax + (-0x2); /* 0x15053497: lea esi, [eax - 2] */
L_1505349A:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x1505349A: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150534A7; /* 0x1505349E: je 0x150534a7 */
L_150534A0:
    ecx = MEM32(ebp + (-0x8)); /* 0x150534A0: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x150534A3: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_150534A7:
    eax = esi; /* 0x150534A7: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x150534A9: pop esi */
L_150534AA:
    edi = POP32_VAL(esp); /* 0x150534AA: pop edi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150534AB: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150534AC: ret  */
    RECOMP_REGS_OUT();
}

void sub_150534C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150534C0u);

L_150534C0:
    edi = edi; /* 0x150534C0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150534C2: push ebp */
    ebp = esp; /* 0x150534C3: mov ebp, esp */
    PUSH32(esp, 0); /* 0x150534C5: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x150534C7: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150534CA: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150534CD: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_150534E0); /* 0x150534D0: call 0x150534e0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x150534D5: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x150534D8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150534D9: ret  */
    RECOMP_REGS_OUT();
}

void sub_150534E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150534E0u);

L_150534E0:
    edi = edi; /* 0x150534E0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150534E2: push ebp */
    ebp = esp; /* 0x150534E3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x150534E5: sub esp, 0x1c */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x150534E8: push ebx */
    PUSH32(esp, esi); /* 0x150534E9: push esi */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x150534EA: push dword ptr [ebp + 0x14] */
    esi = MEM32(ebp + 0x8); /* 0x150534ED: mov esi, dword ptr [ebp + 8] */
    ecx = ebp + (-0x1C); /* 0x150534F0: lea ecx, [ebp - 0x1c] */
    MEM32(ebp + (-0xC)) = esi; /* 0x150534F3: mov dword ptr [ebp - 0xc], esi */
    RECOMP_CALL(sub_1502F870); /* 0x150534F6: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x10); /* 0x150534FB: mov ecx, dword ptr [ebp + 0x10] */
    /* test esi, esi */ /* 0x150534FE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15053506; /* 0x15053500: jne 0x15053506 */
L_15053502:
    /* test ecx, ecx */ /* 0x15053502: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15053511; /* 0x15053504: jne 0x15053511 */
L_15053506:
    edx = MEM32(ebp + 0xC); /* 0x15053506: mov edx, dword ptr [ebp + 0xc] */
    /* test edx, edx */ /* 0x15053509: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505352D; /* 0x1505350B: jne 0x1505352d */
L_1505350D:
    /* test ecx, ecx */ /* 0x1505350D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505352D; /* 0x1505350F: je 0x1505352d */
L_15053511:
    RECOMP_CALL(sub_15036430); /* 0x15053511: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15053516: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x15053518: push ebx */
    PUSH32(esp, ebx); /* 0x15053519: push ebx */
    PUSH32(esp, ebx); /* 0x1505351A: push ebx */
    PUSH32(esp, ebx); /* 0x1505351B: push ebx */
    PUSH32(esp, ebx); /* 0x1505351C: push ebx */
    MEM32(eax) = 0x16u; /* 0x1505351D: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x15053523: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15053528: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_15053596; /* 0x1505352B: jmp 0x15053596 */
L_1505352D:
    eax = MEM32(ebp + (-0x18)); /* 0x1505352D: mov eax, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15053530: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(eax + 0x8), ebx */ /* 0x15053532: cmp dword ptr [eax + 8], ebx */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15053546; /* 0x15053535: jne 0x15053546 */
L_15053537:
    PUSH32(esp, ecx); /* 0x15053537: push ecx */
    PUSH32(esp, edx); /* 0x15053538: push edx */
    PUSH32(esp, esi); /* 0x15053539: push esi */
    RECOMP_CALL(sub_1508EA90); /* 0x1505353A: call 0x1508ea90 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1505353F: add esp, 0xc */
    _flag_k = FK_ADD;
    ebx = eax; /* 0x15053542: mov ebx, eax */
    goto L_15053596; /* 0x15053544: jmp 0x15053596 */
L_15053546:
    /* test ecx, ecx */ /* 0x15053546: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15053593; /* 0x15053548: je 0x15053593 */
L_1505354A:
    PUSH32(esp, edi); /* 0x1505354A: push edi */
L_1505354B:
    SET_LO8(eax, MEM8(edx)); /* 0x1505354B: mov al, byte ptr [edx] */
    ebx = esi + 0x1; /* 0x1505354D: lea ebx, [esi + 1] */
    MEM32(ebp + (-0x8)) = ebx; /* 0x15053550: mov dword ptr [ebp - 8], ebx */
    edi = esi; /* 0x15053553: lea edi, [esi] */
    ebx = MEM32(ebp + (-0x18)); /* 0x15053555: mov ebx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x15053558: dec ecx */
    _flag_k = FK_DEC;
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(eax)); /* 0x15053559: mov byte ptr [ebp - 1], al */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1505355C: inc edx */
    _flag_k = FK_INC;
    eax = (uint32_t)LO8(eax); /* 0x1505355D: movzx eax, al */
    PUSH32(esp, 0); /* 0x15053560: push 0 */
    /* test MEM8(eax + ebx + 0x1D), 4 */ /* 0x15053562: test byte ptr [eax + ebx + 0x1d], 4 */
    _flag_a = (uint32_t)(MEM8(eax + ebx + 0x1D)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    SET_LO8(eax, MEM8(ebp + (-0x1))); /* 0x15053567: mov al, byte ptr [ebp - 1] */
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x1505356A: mov byte ptr [esi], al */
    esi = MEM32(ebp + (-0x8)); /* 0x1505356C: mov esi, dword ptr [ebp - 8] */
    ebx = POP32_VAL(esp); /* 0x1505356F: pop ebx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_150535A9; /* 0x15053570: je 0x150535a9 */
L_15053572:
    /* test ecx, ecx */ /* 0x15053572: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150535B3; /* 0x15053574: je 0x150535b3 */
L_15053576:
    SET_LO8(eax, MEM8(edx)); /* 0x15053576: mov al, byte ptr [edx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x15053578: dec ecx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x15053579: inc edx */
    _flag_k = FK_INC;
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x1505357A: mov byte ptr [esi], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1505357C: inc esi */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x1505357D: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150535AD; /* 0x1505357F: jne 0x150535ad */
L_15053581:
    MEM8(edi) = (uint8_t)(LO8(ebx)); /* 0x15053581: mov byte ptr [edi], bl */
L_15053583:
    /* test ecx, ecx */ /* 0x15053583: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15053592; /* 0x15053585: je 0x15053592 */
L_15053587:
    PUSH32(esp, ecx); /* 0x15053587: push ecx */
    PUSH32(esp, ebx); /* 0x15053588: push ebx */
    PUSH32(esp, esi); /* 0x15053589: push esi */
    RECOMP_CALL(sub_1508E3D0); /* 0x1505358A: call 0x1508e3d0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1505358F: add esp, 0xc */
    _flag_k = FK_ADD;
L_15053592:
    edi = POP32_VAL(esp); /* 0x15053592: pop edi */
L_15053593:
    ebx = MEM32(ebp + (-0xC)); /* 0x15053593: mov ebx, dword ptr [ebp - 0xc] */
L_15053596:
    /* cmp MEM8(ebp + (-0x10)), 0 */ /* 0x15053596: cmp byte ptr [ebp - 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x10))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150535A3; /* 0x1505359A: je 0x150535a3 */
L_1505359C:
    ecx = MEM32(ebp + (-0x14)); /* 0x1505359C: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1505359F: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_150535A3:
    esi = POP32_VAL(esp); /* 0x150535A3: pop esi */
    eax = ebx; /* 0x150535A4: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x150535A6: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150535A7: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150535A8: ret  */
L_150535A9:
    /* test LO8(eax), LO8(eax) */ /* 0x150535A9: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15053583; /* 0x150535AB: je 0x15053583 */
L_150535AD:
    /* test ecx, ecx */ /* 0x150535AD: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505354B; /* 0x150535AF: jne 0x1505354b */
L_150535B1:
    RECOMP_BACKEDGE();
    goto L_15053592; /* 0x150535B1: jmp 0x15053592 */
L_150535B3:
    MEM8(edi) = (uint8_t)(LO8(ebx)); /* 0x150535B3: mov byte ptr [edi], bl */
    RECOMP_BACKEDGE();
    goto L_15053592; /* 0x150535B5: jmp 0x15053592 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_150535C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150535C0u);

L_150535C0:
    edi = edi; /* 0x150535C0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150535C2: push ebp */
    ebp = esp; /* 0x150535C3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x150535C5: push ecx */
    PUSH32(esp, ecx); /* 0x150535C6: push ecx */
    ecx = MEM32(ebp + 0x14); /* 0x150535C7: mov ecx, dword ptr [ebp + 0x14] */
    PUSH32(esp, ebx); /* 0x150535CA: push ebx */
    PUSH32(esp, esi); /* 0x150535CB: push esi */
    esi = MEM32(ebp + 0x8); /* 0x150535CC: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x150535CF: push edi */
    /* test ecx, ecx */ /* 0x150535D0: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150535FD; /* 0x150535D2: jne 0x150535fd */
L_150535D4:
    /* test esi, esi */ /* 0x150535D4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15053601; /* 0x150535D6: jne 0x15053601 */
L_150535D8:
    /* cmp MEM32(ebp + 0xC), ecx */ /* 0x150535D8: cmp dword ptr [ebp + 0xc], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505360E; /* 0x150535DB: je 0x1505360e */
L_150535DD:
    RECOMP_CALL(sub_15036430); /* 0x150535DD: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x150535E2: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_150535E4:
    PUSH32(esp, 0x16u); /* 0x150535E4: push 0x16 */
L_150535E6:
    esi = POP32_VAL(esp); /* 0x150535E6: pop esi */
    PUSH32(esp, ebx); /* 0x150535E7: push ebx */
    PUSH32(esp, ebx); /* 0x150535E8: push ebx */
    PUSH32(esp, ebx); /* 0x150535E9: push ebx */
    PUSH32(esp, ebx); /* 0x150535EA: push ebx */
    PUSH32(esp, ebx); /* 0x150535EB: push ebx */
    MEM32(eax) = esi; /* 0x150535EC: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1505A110); /* 0x150535EE: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x150535F3: mov eax, esi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150535F5: add esp, 0x14 */
    _flag_k = FK_ADD;
L_150535F8:
    edi = POP32_VAL(esp); /* 0x150535F8: pop edi */
    esi = POP32_VAL(esp); /* 0x150535F9: pop esi */
    ebx = POP32_VAL(esp); /* 0x150535FA: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150535FB: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150535FC: ret  */
L_150535FD:
    /* test esi, esi */ /* 0x150535FD: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_150535DD; /* 0x150535FF: je 0x150535dd */
L_15053601:
    eax = MEM32(ebp + 0xC); /* 0x15053601: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x15053604: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_150535DD; /* 0x15053606: je 0x150535dd */
L_15053608:
    /* test ecx, ecx */ /* 0x15053608: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15053612; /* 0x1505360A: jne 0x15053612 */
L_1505360C:
    MEM8(esi) = (uint8_t)(LO8(ecx)); /* 0x1505360C: mov byte ptr [esi], cl */
L_1505360E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505360E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_150535F8; /* 0x15053610: jmp 0x150535f8 */
L_15053612:
    edx = MEM32(ebp + 0x10); /* 0x15053612: mov edx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15053615: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edx, edx */ /* 0x15053617: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15053624; /* 0x15053619: jne 0x15053624 */
L_1505361B:
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x1505361B: mov byte ptr [esi], bl */
    RECOMP_CALL(sub_15036430); /* 0x1505361D: call 0x15036430 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_150535E4; /* 0x15053622: jmp 0x150535e4 */
L_15053624:
    MEM32(ebp + (-0x4)) = eax; /* 0x15053624: mov dword ptr [ebp - 4], eax */
    edi = esi; /* 0x15053627: mov edi, esi */
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x15053629: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15053649; /* 0x1505362C: jne 0x15053649 */
L_1505362E:
    SET_LO8(eax, MEM8(edx)); /* 0x1505362E: mov al, byte ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x15053630: inc edx */
    _flag_k = FK_INC;
    MEM8(edi) = (uint8_t)(LO8(eax)); /* 0x15053631: mov byte ptr [edi], al */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x15053633: inc edi */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x15053634: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505372C; /* 0x15053636: je 0x1505372c */
L_1505363C:
    eax = MEM32(ebp + (-0x4)); /* 0x1505363C: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1505363F: sub eax, 1 */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = eax; /* 0x15053642: mov dword ptr [ebp - 4], eax */
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1505362E; /* 0x15053645: jne 0x1505362e */
L_15053647:
    goto L_15053681; /* 0x15053647: jmp 0x15053681 */
L_15053649:
    SET_LO8(eax, MEM8(edx)); /* 0x15053649: mov al, byte ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1505364B: inc edx */
    _flag_k = FK_INC;
    MEM8(edi) = (uint8_t)(LO8(eax)); /* 0x1505364C: mov byte ptr [edi], al */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1505364E: inc edi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x8)) = ecx; /* 0x1505364F: mov dword ptr [ebp - 8], ecx */
    /* test LO8(eax), LO8(eax) */ /* 0x15053652: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505372C; /* 0x15053654: je 0x1505372c */
L_1505365A:
    eax = MEM32(ebp + (-0x4)); /* 0x1505365A: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1505365D: sub eax, 1 */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = eax; /* 0x15053660: mov dword ptr [ebp - 4], eax */
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1505366A; /* 0x15053663: je 0x1505366a */
L_15053665:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x15053665: sub ecx, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_15053649; /* 0x15053668: jne 0x15053649 */
L_1505366A:
    ecx = MEM32(ebp + (-0x8)); /* 0x1505366A: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1505366D: dec ecx */
    _flag_k = FK_DEC;
    /* test eax, eax */ /* 0x1505366E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) { ecx = MEM32(ebp + (-0x8)); } /* 0x15053670: cmove ecx, dword ptr [ebp - 8] */
    MEM32(ebp + 0x14) = ecx; /* 0x15053674: mov dword ptr [ebp + 0x14], ecx */
    /* test ecx, ecx */ /* 0x15053677: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15053681; /* 0x15053679: jne 0x15053681 */
L_1505367B:
    MEM8(edi) = (uint8_t)(LO8(ebx)); /* 0x1505367B: mov byte ptr [edi], bl */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1505367D: inc edi */
    _flag_k = FK_INC;
    MEM32(ebp + 0x14) = ecx; /* 0x1505367E: mov dword ptr [ebp + 0x14], ecx */
L_15053681:
    /* test eax, eax */ /* 0x15053681: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505372C; /* 0x15053683: jne 0x1505372c */
L_15053689:
    /* cmp MEM8(edx), LO8(ebx) */ /* 0x15053689: cmp byte ptr [edx], bl */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15053692; /* 0x1505368B: je 0x15053692 */
L_1505368D:
    /* cmp ecx, 1 */ /* 0x1505368D: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150536D2; /* 0x15053690: jne 0x150536d2 */
L_15053692:
    ecx = edi + (-0x1); /* 0x15053692: lea ecx, [edi - 1] */
    MEM32(ebp + (-0x8)) = ecx; /* 0x15053695: mov dword ptr [ebp - 8], ecx */
    edi = ecx; /* 0x15053698: mov edi, ecx */
    /* cmp ecx, esi */ /* 0x1505369A: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_150536B4; /* 0x1505369C: jb 0x150536b4 */
L_1505369E:
    eax = (uint32_t)MEM8(edi); /* 0x1505369E: movzx eax, byte ptr [edi] */
    PUSH32(esp, eax); /* 0x150536A1: push eax */
    RECOMP_CALL(sub_15050550); /* 0x150536A2: call 0x15050550 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150536A7: pop ecx */
    /* test eax, eax */ /* 0x150536A8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150536B1; /* 0x150536AA: je 0x150536b1 */
L_150536AC:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x150536AC: dec edi */
    _flag_k = FK_DEC;
    /* cmp edi, esi */ /* 0x150536AD: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_1505369E; /* 0x150536AF: jae 0x1505369e */
L_150536B1:
    ecx = MEM32(ebp + (-0x8)); /* 0x150536B1: mov ecx, dword ptr [ebp - 8] */
L_150536B4:
    eax = ecx; /* 0x150536B4: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x150536B6: sub eax, edi */
    _flag_k = FK_CMP;
    /* test LO8(eax), 1 */ /* 0x150536B8: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_150536CF; /* 0x150536BA: je 0x150536cf */
L_150536BC:
    MEM8(ecx) = (uint8_t)(LO8(ebx)); /* 0x150536BC: mov byte ptr [ecx], bl */
L_150536BE:
    RECOMP_CALL(sub_15036430); /* 0x150536BE: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x2Au); /* 0x150536C3: push 0x2a */
    ecx = POP32_VAL(esp); /* 0x150536C5: pop ecx */
    MEM32(eax) = ecx; /* 0x150536C6: mov dword ptr [eax], ecx */
    eax = ecx; /* 0x150536C8: mov eax, ecx */
    RECOMP_BACKEDGE();
    goto L_150535F8; /* 0x150536CA: jmp 0x150535f8 */
L_150536CF:
    ecx = MEM32(ebp + 0x14); /* 0x150536CF: mov ecx, dword ptr [ebp + 0x14] */
L_150536D2:
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x150536D2: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505371E; /* 0x150536D5: jne 0x1505371e */
L_150536D7:
    ecx = MEM32(ebp + 0xC); /* 0x150536D7: mov ecx, dword ptr [ebp + 0xc] */
    /* cmp ecx, 1 */ /* 0x150536DA: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_15053718; /* 0x150536DD: jbe 0x15053718 */
L_150536DF:
    edx = ecx + (-0x2); /* 0x150536DF: lea edx, [ecx - 2] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x150536E2: add edx, esi */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = edx; /* 0x150536E4: mov dword ptr [ebp - 8], edx */
    edi = edx; /* 0x150536E7: mov edi, edx */
    /* cmp edx, esi */ /* 0x150536E9: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_15053706; /* 0x150536EB: jb 0x15053706 */
L_150536ED:
    eax = (uint32_t)MEM8(edi); /* 0x150536ED: movzx eax, byte ptr [edi] */
    PUSH32(esp, eax); /* 0x150536F0: push eax */
    RECOMP_CALL(sub_15050550); /* 0x150536F1: call 0x15050550 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150536F6: pop ecx */
    /* test eax, eax */ /* 0x150536F7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15053700; /* 0x150536F9: je 0x15053700 */
L_150536FB:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x150536FB: dec edi */
    _flag_k = FK_DEC;
    /* cmp edi, esi */ /* 0x150536FC: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_150536ED; /* 0x150536FE: jae 0x150536ed */
L_15053700:
    ecx = MEM32(ebp + 0xC); /* 0x15053700: mov ecx, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + (-0x8)); /* 0x15053703: mov edx, dword ptr [ebp - 8] */
L_15053706:
    eax = edx; /* 0x15053706: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x15053708: sub eax, edi */
    _flag_k = FK_CMP;
    /* test LO8(eax), 1 */ /* 0x1505370A: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15053718; /* 0x1505370C: je 0x15053718 */
L_1505370E:
    MEM8(edx) = (uint8_t)(LO8(ebx)); /* 0x1505370E: mov byte ptr [edx], bl */
L_15053710:
    PUSH32(esp, 0x50u); /* 0x15053710: push 0x50 */
    eax = POP32_VAL(esp); /* 0x15053712: pop eax */
    RECOMP_BACKEDGE();
    goto L_150535F8; /* 0x15053713: jmp 0x150535f8 */
L_15053718:
    MEM8(esi + ecx + (-0x1)) = (uint8_t)(LO8(ebx)); /* 0x15053718: mov byte ptr [esi + ecx - 1], bl */
    RECOMP_BACKEDGE();
    goto L_15053710; /* 0x1505371C: jmp 0x15053710 */
L_1505371E:
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x1505371E: mov byte ptr [esi], bl */
    RECOMP_CALL(sub_15036430); /* 0x15053720: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x22u); /* 0x15053725: push 0x22 */
    RECOMP_BACKEDGE();
    goto L_150535E6; /* 0x15053727: jmp 0x150535e6 */
L_1505372C:
    eax = edi; /* 0x1505372C: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x1505372E: sub eax, esi */
    _flag_k = FK_CMP;
    /* cmp eax, 2 */ /* 0x15053730: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1505360E; /* 0x15053733: jl 0x1505360e */
L_15053739:
    ecx = edi + (-0x2); /* 0x15053739: lea ecx, [edi - 2] */
    eax = ecx; /* 0x1505373C: mov eax, ecx */
    MEM32(ebp + (-0x4)) = eax; /* 0x1505373E: mov dword ptr [ebp - 4], eax */
    /* cmp ecx, esi */ /* 0x15053741: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_15053765; /* 0x15053743: jb 0x15053765 */
L_15053745:
    ebx = ecx; /* 0x15053745: mov ebx, ecx */
L_15053747:
    eax = (uint32_t)MEM8(ebx); /* 0x15053747: movzx eax, byte ptr [ebx] */
    PUSH32(esp, eax); /* 0x1505374A: push eax */
    RECOMP_CALL(sub_15050550); /* 0x1505374B: call 0x15050550 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15053750: pop ecx */
    /* test eax, eax */ /* 0x15053751: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505375A; /* 0x15053753: je 0x1505375a */
L_15053755:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x15053755: dec ebx */
    _flag_k = FK_DEC;
    /* cmp ebx, esi */ /* 0x15053756: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_15053747; /* 0x15053758: jae 0x15053747 */
L_1505375A:
    MEM32(ebp + (-0x4)) = ebx; /* 0x1505375A: mov dword ptr [ebp - 4], ebx */
    ecx = edi + (-0x2); /* 0x1505375D: lea ecx, [edi - 2] */
    eax = MEM32(ebp + (-0x4)); /* 0x15053760: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15053763: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_15053765:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x15053765: sub ecx, eax */
    _flag_k = FK_CMP;
    /* test LO8(ecx), 1 */ /* 0x15053767: test cl, 1 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505360E; /* 0x1505376A: je 0x1505360e */
L_15053770:
    MEM8(edi + (-0x2)) = (uint8_t)(LO8(ebx)); /* 0x15053770: mov byte ptr [edi - 2], bl */
    RECOMP_BACKEDGE();
    goto L_150536BE; /* 0x15053773: jmp 0x150536be */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_15053780(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15053780u);

L_15053780:
    edi = edi; /* 0x15053780: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15053782: push ebp */
    ebp = esp; /* 0x15053783: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x15053785: sub esp, 0x1c */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x15053788: push ebx */
    PUSH32(esp, esi); /* 0x15053789: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1505378A: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1505378D: push edi */
    edi = MEM32(ebp + 0x14); /* 0x1505378E: mov edi, dword ptr [ebp + 0x14] */
    /* test edi, edi */ /* 0x15053791: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150537A9; /* 0x15053793: jne 0x150537a9 */
L_15053795:
    /* test esi, esi */ /* 0x15053795: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150537B1; /* 0x15053797: jne 0x150537b1 */
L_15053799:
    /* cmp MEM32(ebp + 0xC), edi */ /* 0x15053799: cmp dword ptr [ebp + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15053986; /* 0x1505379C: jne 0x15053986 */
L_150537A2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150537A2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_150539A1; /* 0x150537A4: jmp 0x150539a1 */
L_150537A9:
    /* test esi, esi */ /* 0x150537A9: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15053986; /* 0x150537AB: je 0x15053986 */
L_150537B1:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x150537B1: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_15053986; /* 0x150537B5: jbe 0x15053986 */
L_150537BB:
    /* test edi, edi */ /* 0x150537BB: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150537C4; /* 0x150537BD: jne 0x150537c4 */
L_150537BF:
    MEM8(esi) = (uint8_t)(0); /* 0x150537BF: mov byte ptr [esi], 0 */
    RECOMP_BACKEDGE();
    goto L_150537A2; /* 0x150537C2: jmp 0x150537a2 */
L_150537C4:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x150537C4: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150537D8; /* 0x150537C8: jne 0x150537d8 */
L_150537CA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x150537CA: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x150537CC: mov byte ptr [esi], bl */
    RECOMP_CALL(sub_15036430); /* 0x150537CE: call 0x15036430 */
    RECOMP_FLAGS_IN();
    goto L_1505398D; /* 0x150537D3: jmp 0x1505398d */
L_150537D8:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x150537D8: push dword ptr [ebp + 0x18] */
    ecx = ebp + (-0x1C); /* 0x150537DB: lea ecx, [ebp - 0x1c] */
    RECOMP_CALL(sub_1502F870); /* 0x150537DE: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x18)); /* 0x150537E3: mov eax, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x150537E6: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(eax + 0x8), ebx */ /* 0x150537E8: cmp dword ptr [eax + 8], ebx */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15053804; /* 0x150537EB: jne 0x15053804 */
L_150537ED:
    PUSH32(esp, edi); /* 0x150537ED: push edi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x150537EE: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150537F1: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x150537F4: push esi */
    RECOMP_CALL(sub_1508EBC0); /* 0x150537F5: call 0x1508ebc0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x150537FA: add esp, 0x10 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x150537FD: mov esi, eax */
    goto L_15053977; /* 0x150537FF: jmp 0x15053977 */
L_15053804:
    eax = MEM32(ebp + 0xC); /* 0x15053804: mov eax, dword ptr [ebp + 0xc] */
    ecx = esi; /* 0x15053807: mov ecx, esi */
    edx = MEM32(ebp + 0x10); /* 0x15053809: mov edx, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1505380C: mov dword ptr [ebp - 4], eax */
    /* cmp edi, 0xFFFFFFFFu */ /* 0x1505380F: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15053832; /* 0x15053812: jne 0x15053832 */
L_15053814:
    SET_LO8(eax, MEM8(edx)); /* 0x15053814: mov al, byte ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x15053816: inc edx */
    _flag_k = FK_INC;
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x15053817: mov byte ptr [ecx], al */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15053819: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x8)) = ecx; /* 0x1505381A: mov dword ptr [ebp - 8], ecx */
    /* test LO8(eax), LO8(eax) */ /* 0x1505381D: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505392D; /* 0x1505381F: je 0x1505392d */
L_15053825:
    eax = MEM32(ebp + (-0x4)); /* 0x15053825: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x15053828: sub eax, 1 */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = eax; /* 0x1505382B: mov dword ptr [ebp - 4], eax */
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_15053814; /* 0x1505382E: jne 0x15053814 */
L_15053830:
    goto L_1505386A; /* 0x15053830: jmp 0x1505386a */
L_15053832:
    SET_LO8(eax, MEM8(edx)); /* 0x15053832: mov al, byte ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x15053834: inc edx */
    _flag_k = FK_INC;
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x15053835: mov byte ptr [ecx], al */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15053837: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0xC)) = edi; /* 0x15053838: mov dword ptr [ebp - 0xc], edi */
    MEM32(ebp + (-0x8)) = ecx; /* 0x1505383B: mov dword ptr [ebp - 8], ecx */
    /* test LO8(eax), LO8(eax) */ /* 0x1505383E: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505392D; /* 0x15053840: je 0x1505392d */
L_15053846:
    eax = MEM32(ebp + (-0x4)); /* 0x15053846: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x15053849: sub eax, 1 */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = eax; /* 0x1505384C: mov dword ptr [ebp - 4], eax */
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15053856; /* 0x1505384F: je 0x15053856 */
L_15053851:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 1; /* 0x15053851: sub edi, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_15053832; /* 0x15053854: jne 0x15053832 */
L_15053856:
    edi = MEM32(ebp + (-0xC)); /* 0x15053856: mov edi, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x15053859: dec edi */
    _flag_k = FK_DEC;
    /* test eax, eax */ /* 0x1505385A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) { edi = MEM32(ebp + (-0xC)); } /* 0x1505385C: cmove edi, dword ptr [ebp - 0xc] */
    /* test edi, edi */ /* 0x15053860: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505386A; /* 0x15053862: jne 0x1505386a */
L_15053864:
    MEM8(ecx) = (uint8_t)(LO8(ebx)); /* 0x15053864: mov byte ptr [ecx], bl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15053866: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x8)) = ecx; /* 0x15053867: mov dword ptr [ebp - 8], ecx */
L_1505386A:
    /* test eax, eax */ /* 0x1505386A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505392D; /* 0x1505386C: jne 0x1505392d */
L_15053872:
    /* cmp MEM8(edx), LO8(ebx) */ /* 0x15053872: cmp byte ptr [edx], bl */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505387B; /* 0x15053874: je 0x1505387b */
L_15053876:
    /* cmp edi, 1 */ /* 0x15053876: cmp edi, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150538BE; /* 0x15053879: jne 0x150538be */
L_1505387B:
    edx = ecx + (-0x1); /* 0x1505387B: lea edx, [ecx - 1] */
    MEM32(ebp + (-0xC)) = edx; /* 0x1505387E: mov dword ptr [ebp - 0xc], edx */
    ecx = edx; /* 0x15053881: mov ecx, edx */
    MEM32(ebp + (-0x4)) = ecx; /* 0x15053883: mov dword ptr [ebp - 4], ecx */
    /* cmp edx, esi */ /* 0x15053886: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_150538AF; /* 0x15053888: jb 0x150538af */
L_1505388A:
    ebx = edx; /* 0x1505388A: mov ebx, edx */
L_1505388C:
    eax = (uint32_t)MEM8(ebx); /* 0x1505388C: movzx eax, byte ptr [ebx] */
    ecx = ebp + (-0x1C); /* 0x1505388F: lea ecx, [ebp - 0x1c] */
    PUSH32(esp, ecx); /* 0x15053892: push ecx */
    PUSH32(esp, eax); /* 0x15053893: push eax */
    RECOMP_CALL(sub_15050570); /* 0x15053894: call 0x15050570 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15053899: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1505389A: pop ecx */
    /* test eax, eax */ /* 0x1505389B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150538A4; /* 0x1505389D: je 0x150538a4 */
L_1505389F:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x1505389F: dec ebx */
    _flag_k = FK_DEC;
    /* cmp ebx, esi */ /* 0x150538A0: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_1505388C; /* 0x150538A2: jae 0x1505388c */
L_150538A4:
    edx = MEM32(ebp + (-0xC)); /* 0x150538A4: mov edx, dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x4)) = ebx; /* 0x150538A7: mov dword ptr [ebp - 4], ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x150538AA: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x4)); /* 0x150538AC: mov ecx, dword ptr [ebp - 4] */
L_150538AF:
    eax = edx; /* 0x150538AF: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x150538B1: sub eax, ecx */
    _flag_k = FK_CMP;
    /* test LO8(eax), 1 */ /* 0x150538B3: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_150538BE; /* 0x150538B5: je 0x150538be */
L_150538B7:
    MEM8(edx) = (uint8_t)(LO8(ebx)); /* 0x150538B7: mov byte ptr [edx], bl */
    goto L_15053969; /* 0x150538B9: jmp 0x15053969 */
L_150538BE:
    /* cmp edi, 0xFFFFFFFFu */ /* 0x150538BE: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15053912; /* 0x150538C1: jne 0x15053912 */
L_150538C3:
    eax = MEM32(ebp + 0xC); /* 0x150538C3: mov eax, dword ptr [ebp + 0xc] */
    /* cmp eax, 1 */ /* 0x150538C6: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_15053907; /* 0x150538C9: jbe 0x15053907 */
L_150538CB:
    edx = esi + eax; /* 0x150538CB: lea edx, [esi + eax] */
    ecx = edx + (-0x2); /* 0x150538CE: lea ecx, [edx - 2] */
    MEM32(ebp + (-0x8)) = edx; /* 0x150538D1: mov dword ptr [ebp - 8], edx */
    MEM32(ebp + (-0xC)) = ecx; /* 0x150538D4: mov dword ptr [ebp - 0xc], ecx */
    edi = ecx; /* 0x150538D7: mov edi, ecx */
    /* cmp ecx, esi */ /* 0x150538D9: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_150538FB; /* 0x150538DB: jb 0x150538fb */
L_150538DD:
    eax = (uint32_t)MEM8(edi); /* 0x150538DD: movzx eax, byte ptr [edi] */
    ecx = ebp + (-0x1C); /* 0x150538E0: lea ecx, [ebp - 0x1c] */
    PUSH32(esp, ecx); /* 0x150538E3: push ecx */
    PUSH32(esp, eax); /* 0x150538E4: push eax */
    RECOMP_CALL(sub_15050570); /* 0x150538E5: call 0x15050570 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150538EA: pop ecx */
    ecx = POP32_VAL(esp); /* 0x150538EB: pop ecx */
    /* test eax, eax */ /* 0x150538EC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150538F5; /* 0x150538EE: je 0x150538f5 */
L_150538F0:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x150538F0: dec edi */
    _flag_k = FK_DEC;
    /* cmp edi, esi */ /* 0x150538F1: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_150538DD; /* 0x150538F3: jae 0x150538dd */
L_150538F5:
    ecx = MEM32(ebp + (-0xC)); /* 0x150538F5: mov ecx, dword ptr [ebp - 0xc] */
    edx = MEM32(ebp + (-0x8)); /* 0x150538F8: mov edx, dword ptr [ebp - 8] */
L_150538FB:
    eax = ecx; /* 0x150538FB: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x150538FD: sub eax, edi */
    _flag_k = FK_CMP;
    /* test LO8(eax), 1 */ /* 0x150538FF: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505390A; /* 0x15053901: je 0x1505390a */
L_15053903:
    MEM8(ecx) = (uint8_t)(LO8(ebx)); /* 0x15053903: mov byte ptr [ecx], bl */
    goto L_1505390D; /* 0x15053905: jmp 0x1505390d */
L_15053907:
    edx = eax + esi; /* 0x15053907: lea edx, [eax + esi] */
L_1505390A:
    MEM8(edx + (-0x1)) = (uint8_t)(LO8(ebx)); /* 0x1505390A: mov byte ptr [edx - 1], bl */
L_1505390D:
    PUSH32(esp, 0x50u); /* 0x1505390D: push 0x50 */
    esi = POP32_VAL(esp); /* 0x1505390F: pop esi */
    goto L_15053977; /* 0x15053910: jmp 0x15053977 */
L_15053912:
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x15053912: mov byte ptr [esi], bl */
    RECOMP_CALL(sub_15036430); /* 0x15053914: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x22u); /* 0x15053919: push 0x22 */
    esi = POP32_VAL(esp); /* 0x1505391B: pop esi */
    PUSH32(esp, ebx); /* 0x1505391C: push ebx */
    PUSH32(esp, ebx); /* 0x1505391D: push ebx */
    PUSH32(esp, ebx); /* 0x1505391E: push ebx */
    PUSH32(esp, ebx); /* 0x1505391F: push ebx */
    PUSH32(esp, ebx); /* 0x15053920: push ebx */
    MEM32(eax) = esi; /* 0x15053921: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1505A110); /* 0x15053923: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15053928: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_15053977; /* 0x1505392B: jmp 0x15053977 */
L_1505392D:
    eax = ecx; /* 0x1505392D: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x1505392F: sub eax, esi */
    _flag_k = FK_CMP;
    /* cmp eax, 2 */ /* 0x15053931: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_15053975; /* 0x15053934: jl 0x15053975 */
L_15053936:
    eax = ecx + (-0x2); /* 0x15053936: lea eax, [ecx - 2] */
    MEM32(ebp + (-0xC)) = eax; /* 0x15053939: mov dword ptr [ebp - 0xc], eax */
    edi = eax; /* 0x1505393C: mov edi, eax */
    /* cmp eax, esi */ /* 0x1505393E: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_15053960; /* 0x15053940: jb 0x15053960 */
L_15053942:
    eax = (uint32_t)MEM8(edi); /* 0x15053942: movzx eax, byte ptr [edi] */
    ecx = ebp + (-0x1C); /* 0x15053945: lea ecx, [ebp - 0x1c] */
    PUSH32(esp, ecx); /* 0x15053948: push ecx */
    PUSH32(esp, eax); /* 0x15053949: push eax */
    RECOMP_CALL(sub_15050570); /* 0x1505394A: call 0x15050570 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505394F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15053950: pop ecx */
    /* test eax, eax */ /* 0x15053951: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505395A; /* 0x15053953: je 0x1505395a */
L_15053955:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x15053955: dec edi */
    _flag_k = FK_DEC;
    /* cmp edi, esi */ /* 0x15053956: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_15053942; /* 0x15053958: jae 0x15053942 */
L_1505395A:
    ecx = MEM32(ebp + (-0x8)); /* 0x1505395A: mov ecx, dword ptr [ebp - 8] */
    eax = MEM32(ebp + (-0xC)); /* 0x1505395D: mov eax, dword ptr [ebp - 0xc] */
L_15053960:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x15053960: sub eax, edi */
    _flag_k = FK_CMP;
    /* test LO8(eax), 1 */ /* 0x15053962: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15053975; /* 0x15053964: je 0x15053975 */
L_15053966:
    MEM8(ecx + (-0x2)) = (uint8_t)(LO8(ebx)); /* 0x15053966: mov byte ptr [ecx - 2], bl */
L_15053969:
    RECOMP_CALL(sub_15036430); /* 0x15053969: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x2Au); /* 0x1505396E: push 0x2a */
    esi = POP32_VAL(esp); /* 0x15053970: pop esi */
    MEM32(eax) = esi; /* 0x15053971: mov dword ptr [eax], esi */
    goto L_15053977; /* 0x15053973: jmp 0x15053977 */
L_15053975:
    esi = ebx; /* 0x15053975: mov esi, ebx */
L_15053977:
    /* cmp MEM8(ebp + (-0x10)), 0 */ /* 0x15053977: cmp byte ptr [ebp - 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x10))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505399F; /* 0x1505397B: je 0x1505399f */
L_1505397D:
    ecx = MEM32(ebp + (-0x14)); /* 0x1505397D: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x15053980: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1505399F; /* 0x15053984: jmp 0x1505399f */
L_15053986:
    RECOMP_CALL(sub_15036430); /* 0x15053986: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1505398B: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1505398D:
    PUSH32(esp, 0x16u); /* 0x1505398D: push 0x16 */
    esi = POP32_VAL(esp); /* 0x1505398F: pop esi */
    PUSH32(esp, ebx); /* 0x15053990: push ebx */
    PUSH32(esp, ebx); /* 0x15053991: push ebx */
    PUSH32(esp, ebx); /* 0x15053992: push ebx */
    PUSH32(esp, ebx); /* 0x15053993: push ebx */
    PUSH32(esp, ebx); /* 0x15053994: push ebx */
    MEM32(eax) = esi; /* 0x15053995: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1505A110); /* 0x15053997: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505399C: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1505399F:
    eax = esi; /* 0x1505399F: mov eax, esi */
L_150539A1:
    edi = POP32_VAL(esp); /* 0x150539A1: pop edi */
    esi = POP32_VAL(esp); /* 0x150539A2: pop esi */
    ebx = POP32_VAL(esp); /* 0x150539A3: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150539A4: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150539A5: ret  */
    RECOMP_REGS_OUT();
}

void sub_150539B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150539B0u);

L_150539B0:
    edi = edi; /* 0x150539B0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150539B2: push ebp */
    ebp = esp; /* 0x150539B3: mov ebp, esp */
    PUSH32(esp, 0); /* 0x150539B5: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x150539B7: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150539BA: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150539BD: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_150539D0); /* 0x150539C0: call 0x150539d0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x150539C5: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x150539C8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150539C9: ret  */
    RECOMP_REGS_OUT();
}

void sub_150539D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150539D0u);

L_150539D0:
    edi = edi; /* 0x150539D0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150539D2: push ebp */
    ebp = esp; /* 0x150539D3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x150539D5: sub esp, 0x20 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x20); /* 0x150539D8: lea ecx, [ebp - 0x20] */
    PUSH32(esp, ebx); /* 0x150539DB: push ebx */
    PUSH32(esp, esi); /* 0x150539DC: push esi */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x150539DD: push dword ptr [ebp + 0x14] */
    RECOMP_CALL(sub_1502F870); /* 0x150539E0: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + 0x10); /* 0x150539E5: mov ebx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x150539E8: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ebx, ebx */ /* 0x150539EA: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15053B89; /* 0x150539EC: je 0x15053b89 */
L_150539F2:
    edx = MEM32(ebp + (-0x1C)); /* 0x150539F2: mov edx, dword ptr [ebp - 0x1c] */
    /* cmp MEM32(edx + 0x8), esi */ /* 0x150539F5: cmp dword ptr [edx + 8], esi */
    _flag_a = (uint32_t)(MEM32(edx + 0x8)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15053A10; /* 0x150539F8: jne 0x15053a10 */
L_150539FA:
    PUSH32(esp, ebx); /* 0x150539FA: push ebx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150539FB: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150539FE: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1508BF80); /* 0x15053A01: call 0x1508bf80 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15053A06: add esp, 0xc */
    _flag_k = FK_ADD;
    esi = eax; /* 0x15053A09: mov esi, eax */
    goto L_15053B89; /* 0x15053A0B: jmp 0x15053b89 */
L_15053A10:
    ecx = MEM32(ebp + 0x8); /* 0x15053A10: mov ecx, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x10)) = ecx; /* 0x15053A13: mov dword ptr [ebp - 0x10], ecx */
    /* test ecx, ecx */ /* 0x15053A16: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15053A24; /* 0x15053A18: je 0x15053a24 */
L_15053A1A:
    eax = MEM32(ebp + 0xC); /* 0x15053A1A: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0xC)) = eax; /* 0x15053A1D: mov dword ptr [ebp - 0xc], eax */
    /* test eax, eax */ /* 0x15053A20: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15053A46; /* 0x15053A22: jne 0x15053a46 */
L_15053A24:
    RECOMP_CALL(sub_15036430); /* 0x15053A24: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x15053A29: push esi */
    PUSH32(esp, esi); /* 0x15053A2A: push esi */
    PUSH32(esp, esi); /* 0x15053A2B: push esi */
    PUSH32(esp, esi); /* 0x15053A2C: push esi */
    PUSH32(esp, esi); /* 0x15053A2D: push esi */
    MEM32(eax) = 0x16u; /* 0x15053A2E: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x15053A34: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15053A39: add esp, 0x14 */
    _flag_k = FK_ADD;
    esi = 0x7FFFFFFFu; /* 0x15053A3C: mov esi, 0x7fffffff */
    goto L_15053B89; /* 0x15053A41: jmp 0x15053b89 */
L_15053A46:
    PUSH32(esp, edi); /* 0x15053A46: push edi */
L_15053A47:
    eax = (uint32_t)MEM8(ecx); /* 0x15053A47: movzx eax, byte ptr [ecx] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x15053A4A: dec ebx */
    _flag_k = FK_DEC;
    edi = (uint32_t)MEM8(ecx); /* 0x15053A4B: movzx edi, byte ptr [ecx] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) + 1; /* 0x15053A4E: inc dword ptr [ebp - 0x10] */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x8)) = edi; /* 0x15053A51: mov dword ptr [ebp - 8], edi */
    /* test MEM8(eax + edx + 0x1D), 4 */ /* 0x15053A54: test byte ptr [eax + edx + 0x1d], 4 */
    _flag_a = (uint32_t)(MEM8(eax + edx + 0x1D)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15053ACA; /* 0x15053A59: je 0x15053aca */
L_15053A5B:
    /* test ebx, ebx */ /* 0x15053A5B: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15053A82; /* 0x15053A5D: jne 0x15053a82 */
L_15053A5F:
    eax = MEM32(ebp + (-0xC)); /* 0x15053A5F: mov eax, dword ptr [ebp - 0xc] */
    SET_LO16(edi, LO16(esi)); /* 0x15053A62: mov di, si */
    PUSH32(esp, ebx); /* 0x15053A65: push ebx */
    MEM32(ebp + (-0x8)) = esi; /* 0x15053A66: mov dword ptr [ebp - 8], esi */
    SET_LO8(ecx, MEM8(eax)); /* 0x15053A69: mov cl, byte ptr [eax] */
    eax = (uint32_t)LO8(ecx); /* 0x15053A6B: movzx eax, cl */
    /* test MEM8(eax + edx + 0x1D), 4 */ /* 0x15053A6E: test byte ptr [eax + edx + 0x1d], 4 */
    _flag_a = (uint32_t)(MEM8(eax + edx + 0x1D)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = (uint32_t)LO8(ecx); /* 0x15053A73: movzx eax, cl */
    ecx = POP32_VAL(esp); /* 0x15053A76: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) { ecx = eax; } /* 0x15053A77: cmove ecx, eax */
    eax = (uint32_t)LO16(ecx); /* 0x15053A7A: movzx eax, cx */
    goto L_15053B64; /* 0x15053A7D: jmp 0x15053b64 */
L_15053A82:
    ecx = MEM32(ebp + (-0x10)); /* 0x15053A82: mov ecx, dword ptr [ebp - 0x10] */
    SET_LO8(eax, MEM8(ecx)); /* 0x15053A85: mov al, byte ptr [ecx] */
    /* test LO8(eax), LO8(eax) */ /* 0x15053A87: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15053A90; /* 0x15053A89: jne 0x15053a90 */
L_15053A8B:
    MEM32(ebp + (-0x8)) = esi; /* 0x15053A8B: mov dword ptr [ebp - 8], esi */
    goto L_15053AE3; /* 0x15053A8E: jmp 0x15053ae3 */
L_15053A90:
    if (8u) _cf = (((edi) >> 24) & 1u); /* 0x15053A90: shl edi, 8 */
    if (8u) { _flag_a = recomp_flags_pack((edi << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 8u; /* 0x15053A90: shl edi, 8 */
    eax = (uint32_t)LO8(eax); /* 0x15053A93: movzx eax, al */
    _flag_a = (uint32_t)((LO16(edi) | LO16(eax))) << 16; _flag_b = (uint32_t)((LO16(edi) | LO16(eax))) << 16;
    SET_LO16(edi, LO16(edi) | LO16(eax)); /* 0x15053A96: or di, ax */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15053A99: inc ecx */
    _flag_k = FK_INC;
    eax = (uint32_t)LO16(edi); /* 0x15053A9A: movzx eax, di */
    SET_LO16(edi, LO16(eax)); /* 0x15053A9D: mov di, ax */
    MEM32(ebp + (-0x8)) = eax; /* 0x15053AA0: mov dword ptr [ebp - 8], eax */
    MEM32(ebp + (-0x10)) = ecx; /* 0x15053AA3: mov dword ptr [ebp - 0x10], ecx */
    /* cmp LO16(edi), MEM16(edx + 0x10) */ /* 0x15053AA6: cmp di, word ptr [edx + 0x10] */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(MEM16(edx + 0x10)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_B(_flag_a, _flag_b)) goto L_15053AB8; /* 0x15053AAA: jb 0x15053ab8 */
L_15053AAC:
    /* cmp LO16(edi), MEM16(edx + 0x12) */ /* 0x15053AAC: cmp di, word ptr [edx + 0x12] */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(MEM16(edx + 0x12)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_A(_flag_a, _flag_b)) goto L_15053AB8; /* 0x15053AB0: ja 0x15053ab8 */
L_15053AB2:
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(MEM16(edx + 0x14)) << 16;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO16(edi, LO16(edi) + MEM16(edx + 0x14)); /* 0x15053AB2: add di, word ptr [edx + 0x14] */
    _flag_k = FK_NARROW(FK_ADD, 16);
    goto L_15053AE7; /* 0x15053AB6: jmp 0x15053ae7 */
L_15053AB8:
    /* cmp LO16(edi), MEM16(edx + 0x16) */ /* 0x15053AB8: cmp di, word ptr [edx + 0x16] */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(MEM16(edx + 0x16)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_B(_flag_a, _flag_b)) goto L_15053AE7; /* 0x15053ABC: jb 0x15053ae7 */
L_15053ABE:
    /* cmp LO16(edi), MEM16(edx + 0x18) */ /* 0x15053ABE: cmp di, word ptr [edx + 0x18] */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(MEM16(edx + 0x18)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_A(_flag_a, _flag_b)) goto L_15053AE7; /* 0x15053AC2: ja 0x15053ae7 */
L_15053AC4:
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(MEM16(edx + 0x1A)) << 16;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO16(edi, LO16(edi) + MEM16(edx + 0x1A)); /* 0x15053AC4: add di, word ptr [edx + 0x1a] */
    _flag_k = FK_NARROW(FK_ADD, 16);
    goto L_15053AE7; /* 0x15053AC8: jmp 0x15053ae7 */
L_15053ACA:
    SET_LO16(edi, MEM16(ebp + (-0x8))); /* 0x15053ACA: mov di, word ptr [ebp - 8] */
    eax = (uint32_t)LO16(edi); /* 0x15053ACE: movzx eax, di */
    /* test MEM8(eax + edx + 0x1D), 0x10u */ /* 0x15053AD1: test byte ptr [eax + edx + 0x1d], 0x10 */
    _flag_a = (uint32_t)(MEM8(eax + edx + 0x1D)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15053AE7; /* 0x15053AD6: je 0x15053ae7 */
L_15053AD8:
    eax = (uint32_t)MEM8(eax + edx + 0x11D); /* 0x15053AD8: movzx eax, byte ptr [eax + edx + 0x11d] */
    MEM32(ebp + (-0x8)) = eax; /* 0x15053AE0: mov dword ptr [ebp - 8], eax */
L_15053AE3:
    SET_LO16(edi, MEM16(ebp + (-0x8))); /* 0x15053AE3: mov di, word ptr [ebp - 8] */
L_15053AE7:
    eax = MEM32(ebp + (-0xC)); /* 0x15053AE7: mov eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) + 1; /* 0x15053AEA: inc dword ptr [ebp - 0xc] */
    _flag_k = FK_INC;
    SET_LO8(ecx, MEM8(eax)); /* 0x15053AED: mov cl, byte ptr [eax] */
    eax = (uint32_t)LO8(ecx); /* 0x15053AEF: movzx eax, cl */
    MEM32(ebp + (-0x8)) = eax; /* 0x15053AF2: mov dword ptr [ebp - 8], eax */
    MEM32(ebp + (-0x4)) = eax; /* 0x15053AF5: mov dword ptr [ebp - 4], eax */
    eax = (uint32_t)LO8(ecx); /* 0x15053AF8: movzx eax, cl */
    /* test MEM8(eax + edx + 0x1D), 4 */ /* 0x15053AFB: test byte ptr [eax + edx + 0x1d], 4 */
    _flag_a = (uint32_t)(MEM8(eax + edx + 0x1D)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15053B4E; /* 0x15053B00: je 0x15053b4e */
L_15053B02:
    /* test ebx, ebx */ /* 0x15053B02: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15053B0B; /* 0x15053B04: jne 0x15053b0b */
L_15053B06:
    MEM32(ebp + (-0x4)) = esi; /* 0x15053B06: mov dword ptr [ebp - 4], esi */
    goto L_15053B67; /* 0x15053B09: jmp 0x15053b67 */
L_15053B0B:
    eax = MEM32(ebp + (-0xC)); /* 0x15053B0B: mov eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x15053B0E: dec ebx */
    _flag_k = FK_DEC;
    SET_LO8(eax, MEM8(eax)); /* 0x15053B0F: mov al, byte ptr [eax] */
    /* test LO8(eax), LO8(eax) */ /* 0x15053B11: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15053B06; /* 0x15053B13: je 0x15053b06 */
L_15053B15:
    ecx = MEM32(ebp + (-0x8)); /* 0x15053B15: mov ecx, dword ptr [ebp - 8] */
    if (8u) _cf = (((ecx) >> 24) & 1u); /* 0x15053B18: shl ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 8u; /* 0x15053B18: shl ecx, 8 */
    eax = (uint32_t)LO8(eax); /* 0x15053B1B: movzx eax, al */
    _flag_a = (uint32_t)((LO16(ecx) | LO16(eax))) << 16; _flag_b = (uint32_t)((LO16(ecx) | LO16(eax))) << 16;
    SET_LO16(ecx, LO16(ecx) | LO16(eax)); /* 0x15053B1E: or cx, ax */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) + 1; /* 0x15053B21: inc dword ptr [ebp - 0xc] */
    _flag_k = FK_INC;
    eax = (uint32_t)LO16(ecx); /* 0x15053B24: movzx eax, cx */
    MEM32(ebp + (-0x4)) = eax; /* 0x15053B27: mov dword ptr [ebp - 4], eax */
    /* cmp LO16(eax), MEM16(edx + 0x10) */ /* 0x15053B2A: cmp ax, word ptr [edx + 0x10] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(edx + 0x10)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_B(_flag_a, _flag_b)) goto L_15053B3C; /* 0x15053B2E: jb 0x15053b3c */
L_15053B30:
    /* cmp LO16(eax), MEM16(edx + 0x12) */ /* 0x15053B30: cmp ax, word ptr [edx + 0x12] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(edx + 0x12)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_A(_flag_a, _flag_b)) goto L_15053B3C; /* 0x15053B34: ja 0x15053b3c */
L_15053B36:
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(edx + 0x14)) << 16;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO16(eax, LO16(eax) + MEM16(edx + 0x14)); /* 0x15053B36: add ax, word ptr [edx + 0x14] */
    _flag_k = FK_NARROW(FK_ADD, 16);
    goto L_15053B6B; /* 0x15053B3A: jmp 0x15053b6b */
L_15053B3C:
    /* cmp LO16(eax), MEM16(edx + 0x16) */ /* 0x15053B3C: cmp ax, word ptr [edx + 0x16] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(edx + 0x16)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_B(_flag_a, _flag_b)) goto L_15053B6B; /* 0x15053B40: jb 0x15053b6b */
L_15053B42:
    /* cmp LO16(eax), MEM16(edx + 0x18) */ /* 0x15053B42: cmp ax, word ptr [edx + 0x18] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(edx + 0x18)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_A(_flag_a, _flag_b)) goto L_15053B6B; /* 0x15053B46: ja 0x15053b6b */
L_15053B48:
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(edx + 0x1A)) << 16;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO16(eax, LO16(eax) + MEM16(edx + 0x1A)); /* 0x15053B48: add ax, word ptr [edx + 0x1a] */
    _flag_k = FK_NARROW(FK_ADD, 16);
    goto L_15053B6B; /* 0x15053B4C: jmp 0x15053b6b */
L_15053B4E:
    SET_LO16(eax, MEM16(ebp + (-0x4))); /* 0x15053B4E: mov ax, word ptr [ebp - 4] */
    ecx = (uint32_t)LO16(eax); /* 0x15053B52: movzx ecx, ax */
    /* test MEM8(ecx + edx + 0x1D), 0x10u */ /* 0x15053B55: test byte ptr [ecx + edx + 0x1d], 0x10 */
    _flag_a = (uint32_t)(MEM8(ecx + edx + 0x1D)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15053B6B; /* 0x15053B5A: je 0x15053b6b */
L_15053B5C:
    eax = (uint32_t)MEM8(ecx + edx + 0x11D); /* 0x15053B5C: movzx eax, byte ptr [ecx + edx + 0x11d] */
L_15053B64:
    MEM32(ebp + (-0x4)) = eax; /* 0x15053B64: mov dword ptr [ebp - 4], eax */
L_15053B67:
    SET_LO16(eax, MEM16(ebp + (-0x4))); /* 0x15053B67: mov ax, word ptr [ebp - 4] */
L_15053B6B:
    /* cmp LO16(eax), LO16(edi) */ /* 0x15053B6B: cmp ax, di */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15053B82; /* 0x15053B6E: jne 0x15053b82 */
L_15053B70:
    /* test LO16(edi), LO16(edi) */ /* 0x15053B70: test di, di */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15053B88; /* 0x15053B73: je 0x15053b88 */
L_15053B75:
    ecx = MEM32(ebp + (-0x10)); /* 0x15053B75: mov ecx, dword ptr [ebp - 0x10] */
    /* test ebx, ebx */ /* 0x15053B78: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15053A47; /* 0x15053B7A: jne 0x15053a47 */
L_15053B80:
    goto L_15053B88; /* 0x15053B80: jmp 0x15053b88 */
L_15053B82:
    { uint32_t _sa = esi, _sb = esi, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x15053B82: sbb esi, esi */
      esi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    esi = esi & 2; /* 0x15053B84: and esi, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x15053B87: dec esi */
    _flag_k = FK_DEC;
L_15053B88:
    edi = POP32_VAL(esp); /* 0x15053B88: pop edi */
L_15053B89:
    /* cmp MEM8(ebp + (-0x14)), 0 */ /* 0x15053B89: cmp byte ptr [ebp - 0x14], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x14))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15053B96; /* 0x15053B8D: je 0x15053b96 */
L_15053B8F:
    ecx = MEM32(ebp + (-0x18)); /* 0x15053B8F: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x15053B92: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_15053B96:
    eax = esi; /* 0x15053B96: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x15053B98: pop esi */
    ebx = POP32_VAL(esp); /* 0x15053B99: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15053B9A: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15053B9B: ret  */
    RECOMP_REGS_OUT();
}

void sub_15053BB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15053BB0u);

L_15053BB0:
    edi = edi; /* 0x15053BB0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15053BB2: push ebp */
    ebp = esp; /* 0x15053BB3: mov ebp, esp */
    PUSH32(esp, 0); /* 0x15053BB5: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15053BB7: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15053BBA: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15053BBD: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15053BD0); /* 0x15053BC0: call 0x15053bd0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15053BC5: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15053BC8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15053BC9: ret  */
    RECOMP_REGS_OUT();
}

void sub_15053BD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15053BD0u);

L_15053BD0:
    edi = edi; /* 0x15053BD0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15053BD2: push ebp */
    ebp = esp; /* 0x15053BD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x15053BD5: sub esp, 0x10 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x10); /* 0x15053BD8: lea ecx, [ebp - 0x10] */
    PUSH32(esp, esi); /* 0x15053BDB: push esi */
    PUSH32(esp, edi); /* 0x15053BDC: push edi */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15053BDD: push dword ptr [ebp + 0x14] */
    RECOMP_CALL(sub_1502F870); /* 0x15053BE0: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x10); /* 0x15053BE5: mov eax, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x15053BE8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15053BF3; /* 0x15053BEA: jne 0x15053bf3 */
L_15053BEC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15053BEC: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15053C84; /* 0x15053BEE: jmp 0x15053c84 */
L_15053BF3:
    ecx = MEM32(ebp + 0x8); /* 0x15053BF3: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x15053BF6: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15053C01; /* 0x15053BF8: je 0x15053c01 */
L_15053BFA:
    edx = MEM32(ebp + 0xC); /* 0x15053BFA: mov edx, dword ptr [ebp + 0xc] */
    /* test edx, edx */ /* 0x15053BFD: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15053C22; /* 0x15053BFF: jne 0x15053c22 */
L_15053C01:
    RECOMP_CALL(sub_15036430); /* 0x15053C01: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x15053C06: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15053C0C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15053C0E: push eax */
    PUSH32(esp, eax); /* 0x15053C0F: push eax */
    PUSH32(esp, eax); /* 0x15053C10: push eax */
    PUSH32(esp, eax); /* 0x15053C11: push eax */
    PUSH32(esp, eax); /* 0x15053C12: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x15053C13: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15053C18: add esp, 0x14 */
    _flag_k = FK_ADD;
    esi = 0x7FFFFFFFu; /* 0x15053C1B: mov esi, 0x7fffffff */
    goto L_15053C84; /* 0x15053C20: jmp 0x15053c84 */
L_15053C22:
    esi = 0x7FFFFFFFu; /* 0x15053C22: mov esi, 0x7fffffff */
    /* cmp eax, esi */ /* 0x15053C27: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_15053C47; /* 0x15053C29: jbe 0x15053c47 */
L_15053C2B:
    RECOMP_CALL(sub_15036430); /* 0x15053C2B: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x15053C30: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15053C36: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15053C38: push eax */
    PUSH32(esp, eax); /* 0x15053C39: push eax */
    PUSH32(esp, eax); /* 0x15053C3A: push eax */
    PUSH32(esp, eax); /* 0x15053C3B: push eax */
    PUSH32(esp, eax); /* 0x15053C3C: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x15053C3D: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15053C42: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_15053C84; /* 0x15053C45: jmp 0x15053c84 */
L_15053C47:
    edi = MEM32(ebp + (-0xC)); /* 0x15053C47: mov edi, dword ptr [ebp - 0xc] */
    /* cmp MEM32(edi + 0x8), 0 */ /* 0x15053C4A: cmp dword ptr [edi + 8], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15053C62; /* 0x15053C4E: jne 0x15053c62 */
L_15053C50:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15053C50: push dword ptr [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x15053C53: push eax */
    PUSH32(esp, edx); /* 0x15053C54: push edx */
    PUSH32(esp, ecx); /* 0x15053C55: push ecx */
    RECOMP_CALL(sub_1508C100); /* 0x15053C56: call 0x1508c100 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15053C5B: add esp, 0x10 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x15053C5E: mov esi, eax */
    goto L_15053C84; /* 0x15053C60: jmp 0x15053c84 */
L_15053C62:
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x15053C62: push dword ptr [edi + 4] */
    PUSH32(esp, eax); /* 0x15053C65: push eax */
    PUSH32(esp, edx); /* 0x15053C66: push edx */
    PUSH32(esp, eax); /* 0x15053C67: push eax */
    PUSH32(esp, ecx); /* 0x15053C68: push ecx */
    PUSH32(esp, 0x1001u); /* 0x15053C69: push 0x1001 */
    PUSH32(esp, MEM32(edi + 0xC)); /* 0x15053C6E: push dword ptr [edi + 0xc] */
    eax = ebp + (-0x10); /* 0x15053C71: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x15053C74: push eax */
    RECOMP_CALL(sub_150584C0); /* 0x15053C75: call 0x150584c0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x15053C7A: add esp, 0x20 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15053C7D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15053C84; /* 0x15053C7F: je 0x15053c84 */
L_15053C81:
    esi = eax + (-0x2); /* 0x15053C81: lea esi, [eax - 2] */
L_15053C84:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x15053C84: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15053C91; /* 0x15053C88: je 0x15053c91 */
L_15053C8A:
    ecx = MEM32(ebp + (-0x8)); /* 0x15053C8A: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x15053C8D: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_15053C91:
    edi = POP32_VAL(esp); /* 0x15053C91: pop edi */
    eax = esi; /* 0x15053C92: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x15053C94: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15053C95: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15053C96: ret  */
    RECOMP_REGS_OUT();
}

void sub_15053CA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15053CA0u);

L_15053CA0:
    edi = edi; /* 0x15053CA0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15053CA2: push ebp */
    ebp = esp; /* 0x15053CA3: mov ebp, esp */
    PUSH32(esp, 0); /* 0x15053CA5: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15053CA7: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15053CAA: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15053CAD: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15053CC0); /* 0x15053CB0: call 0x15053cc0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15053CB5: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15053CB8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15053CB9: ret  */
    RECOMP_REGS_OUT();
}

void sub_15053CC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15053CC0u);

L_15053CC0:
    edi = edi; /* 0x15053CC0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15053CC2: push ebp */
    ebp = esp; /* 0x15053CC3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x15053CC5: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x15053CC8: push ebx */
    PUSH32(esp, esi); /* 0x15053CC9: push esi */
    esi = MEM32(ebp + 0x8); /* 0x15053CCA: mov esi, dword ptr [ebp + 8] */
    ecx = ebp + (-0x14); /* 0x15053CCD: lea ecx, [ebp - 0x14] */
    PUSH32(esp, edi); /* 0x15053CD0: push edi */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15053CD1: push dword ptr [ebp + 0x14] */
    MEM32(ebp + (-0x4)) = esi; /* 0x15053CD4: mov dword ptr [ebp - 4], esi */
    RECOMP_CALL(sub_1502F870); /* 0x15053CD7: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x10)); /* 0x15053CDC: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x15053CDF: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(eax + 0x8), edi */ /* 0x15053CE1: cmp dword ptr [eax + 8], edi */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15053CF9; /* 0x15053CE4: jne 0x15053cf9 */
L_15053CE6:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15053CE6: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15053CE9: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x15053CEC: push esi */
    RECOMP_CALL(sub_1508C1E0); /* 0x15053CED: call 0x1508c1e0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15053CF2: add esp, 0xc */
    _flag_k = FK_ADD;
    edi = eax; /* 0x15053CF5: mov edi, eax */
    goto L_15053D77; /* 0x15053CF7: jmp 0x15053d77 */
L_15053CF9:
    ebx = MEM32(ebp + 0x10); /* 0x15053CF9: mov ebx, dword ptr [ebp + 0x10] */
    /* test esi, esi */ /* 0x15053CFC: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15053D1E; /* 0x15053CFE: jne 0x15053d1e */
L_15053D00:
    /* test ebx, ebx */ /* 0x15053D00: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15053D1E; /* 0x15053D02: je 0x15053d1e */
L_15053D04:
    RECOMP_CALL(sub_15036430); /* 0x15053D04: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x15053D09: push edi */
    PUSH32(esp, edi); /* 0x15053D0A: push edi */
    PUSH32(esp, edi); /* 0x15053D0B: push edi */
    PUSH32(esp, edi); /* 0x15053D0C: push edi */
    PUSH32(esp, edi); /* 0x15053D0D: push edi */
    MEM32(eax) = 0x16u; /* 0x15053D0E: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x15053D14: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15053D19: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_15053D77; /* 0x15053D1C: jmp 0x15053d77 */
L_15053D1E:
    ecx = MEM32(ebp + 0xC); /* 0x15053D1E: mov ecx, dword ptr [ebp + 0xc] */
    edx = ecx; /* 0x15053D21: mov edx, ecx */
    if (8u) _cf = (((edx) >> 7) & 1u); /* 0x15053D23: shr edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((edx >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 8u; /* 0x15053D23: shr edx, 8 */
    /* test LO8(edx), LO8(edx) */ /* 0x15053D26: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15053D70; /* 0x15053D28: je 0x15053d70 */
L_15053D2A:
    /* test LO8(ecx), LO8(ecx) */ /* 0x15053D2A: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15053D5C; /* 0x15053D2C: jne 0x15053d5c */
L_15053D2E:
    RECOMP_CALL(sub_15036430); /* 0x15053D2E: call 0x15036430 */
    RECOMP_FLAGS_IN();
    SET_LO8(edx, 0x20u); /* 0x15053D33: mov dl, 0x20 */
    SET_LO8(ecx, LO8(edx)); /* 0x15053D35: mov cl, dl */
    MEM32(eax) = 0x16u; /* 0x15053D37: mov dword ptr [eax], 0x16 */
    goto L_15053D5C; /* 0x15053D3D: jmp 0x15053d5c */
L_15053D3F:
    /* cmp MEM8(esi), 0 */ /* 0x15053D3F: cmp byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15053D74; /* 0x15053D42: je 0x15053d74 */
L_15053D44:
    eax = ebx + (-0x1); /* 0x15053D44: lea eax, [ebx - 1] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 2; /* 0x15053D47: sub ebx, 2 */
    _flag_k = FK_CMP;
    /* test eax, eax */ /* 0x15053D4A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15053D62; /* 0x15053D4C: je 0x15053d62 */
L_15053D4E:
    /* cmp MEM8(esi + 0x1), 0 */ /* 0x15053D4E: cmp byte ptr [esi + 1], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x1)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15053D62; /* 0x15053D52: je 0x15053d62 */
L_15053D54:
    MEM8(esi) = (uint8_t)(LO8(edx)); /* 0x15053D54: mov byte ptr [esi], dl */
    MEM8(esi + 0x1) = (uint8_t)(LO8(ecx)); /* 0x15053D56: mov byte ptr [esi + 1], cl */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x15053D59: add esi, 2 */
    _flag_k = FK_ADD;
L_15053D5C:
    /* test ebx, ebx */ /* 0x15053D5C: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15053D3F; /* 0x15053D5E: jne 0x15053d3f */
L_15053D60:
    goto L_15053D74; /* 0x15053D60: jmp 0x15053d74 */
L_15053D62:
    MEM8(esi) = (uint8_t)(0x20u); /* 0x15053D62: mov byte ptr [esi], 0x20 */
    goto L_15053D74; /* 0x15053D65: jmp 0x15053d74 */
L_15053D67:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x15053D67: dec ebx */
    _flag_k = FK_DEC;
    /* cmp MEM8(esi), 0 */ /* 0x15053D68: cmp byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15053D74; /* 0x15053D6B: je 0x15053d74 */
L_15053D6D:
    MEM8(esi) = (uint8_t)(LO8(ecx)); /* 0x15053D6D: mov byte ptr [esi], cl */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15053D6F: inc esi */
    _flag_k = FK_INC;
L_15053D70:
    /* test ebx, ebx */ /* 0x15053D70: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15053D67; /* 0x15053D72: jne 0x15053d67 */
L_15053D74:
    edi = MEM32(ebp + (-0x4)); /* 0x15053D74: mov edi, dword ptr [ebp - 4] */
L_15053D77:
    /* cmp MEM8(ebp + (-0x8)), 0 */ /* 0x15053D77: cmp byte ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x8))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15053D84; /* 0x15053D7B: je 0x15053d84 */
L_15053D7D:
    ecx = MEM32(ebp + (-0xC)); /* 0x15053D7D: mov ecx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x15053D80: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_15053D84:
    eax = edi; /* 0x15053D84: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x15053D86: pop edi */
    esi = POP32_VAL(esp); /* 0x15053D87: pop esi */
    ebx = POP32_VAL(esp); /* 0x15053D88: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15053D89: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15053D8A: ret  */
    RECOMP_REGS_OUT();
}

void sub_15053DA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15053DA0u);

L_15053DA0:
    edi = edi; /* 0x15053DA0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15053DA2: push ebp */
    ebp = esp; /* 0x15053DA3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x15053DA5: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x15053DA8: push ebx */
    ebx = MEM32(ebp + 0x14); /* 0x15053DA9: mov ebx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15053DAC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(eax);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & eax; /* 0x15053DAE: and dword ptr [ebp - 4], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = ebx; /* 0x15053DB1: mov dword ptr [ebp - 0xc], ebx */
    MEM32(ebp + (-0x8)) = eax; /* 0x15053DB4: mov dword ptr [ebp - 8], eax */
    PUSH32(esp, esi); /* 0x15053DB7: push esi */
    esi = MEM32(ebp + 0x8); /* 0x15053DB8: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x15053DBB: push edi */
    /* test ebx, ebx */ /* 0x15053DBC: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15053DED; /* 0x15053DBE: jne 0x15053ded */
L_15053DC0:
    /* test esi, esi */ /* 0x15053DC0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15053DF1; /* 0x15053DC2: jne 0x15053df1 */
L_15053DC4:
    /* cmp MEM32(ebp + 0xC), eax */ /* 0x15053DC4: cmp dword ptr [ebp + 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15053F99; /* 0x15053DC7: je 0x15053f99 */
L_15053DCD:
    RECOMP_CALL(sub_15036430); /* 0x15053DCD: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x15053DD2: push 0x16 */
    esi = POP32_VAL(esp); /* 0x15053DD4: pop esi */
    MEM32(eax) = esi; /* 0x15053DD5: mov dword ptr [eax], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15053DD7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15053DD9: push eax */
    PUSH32(esp, eax); /* 0x15053DDA: push eax */
    PUSH32(esp, eax); /* 0x15053DDB: push eax */
    PUSH32(esp, eax); /* 0x15053DDC: push eax */
    PUSH32(esp, eax); /* 0x15053DDD: push eax */
L_15053DDE:
    RECOMP_CALL(sub_1505A110); /* 0x15053DDE: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x15053DE3: mov eax, esi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15053DE5: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15053DE8:
    edi = POP32_VAL(esp); /* 0x15053DE8: pop edi */
    esi = POP32_VAL(esp); /* 0x15053DE9: pop esi */
    ebx = POP32_VAL(esp); /* 0x15053DEA: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15053DEB: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15053DEC: ret  */
L_15053DED:
    /* test esi, esi */ /* 0x15053DED: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15053DCD; /* 0x15053DEF: je 0x15053dcd */
L_15053DF1:
    edi = MEM32(ebp + 0xC); /* 0x15053DF1: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x15053DF4: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15053DCD; /* 0x15053DF6: je 0x15053dcd */
L_15053DF8:
    eax = MEM32(ebp + 0x10); /* 0x15053DF8: mov eax, dword ptr [ebp + 0x10] */
    ecx = eax; /* 0x15053DFB: mov ecx, eax */
    if (8u) _cf = (((ecx) >> 7) & 1u); /* 0x15053DFD: shr ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 8u; /* 0x15053DFD: shr ecx, 8 */
    MEM32(ebp + (-0x10)) = ecx; /* 0x15053E00: mov dword ptr [ebp - 0x10], ecx */
    /* test LO8(ecx), LO8(ecx) */ /* 0x15053E03: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15053EE6; /* 0x15053E05: je 0x15053ee6 */
L_15053E0B:
    /* test LO8(eax), LO8(eax) */ /* 0x15053E0B: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15053EF4; /* 0x15053E0D: je 0x15053ef4 */
L_15053E13:
    eax = (uint32_t)LO8(ecx); /* 0x15053E13: movzx eax, cl */
    PUSH32(esp, eax); /* 0x15053E16: push eax */
    RECOMP_CALL(sub_15050550); /* 0x15053E17: call 0x15050550 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15053E1C: pop ecx */
    /* test eax, eax */ /* 0x15053E1D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15053EF4; /* 0x15053E1F: je 0x15053ef4 */
L_15053E25:
    ecx = MEM32(ebp + 0x8); /* 0x15053E25: mov ecx, dword ptr [ebp + 8] */
    edx = ebx; /* 0x15053E28: mov edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx & 1; /* 0x15053E2A: and edx, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = ebx + (-0x1); /* 0x15053E2D: lea ebx, [ebx - 1] */
    MEM32(ebp + (-0x14)) = edx; /* 0x15053E30: mov dword ptr [ebp - 0x14], edx */
    eax = edx; /* 0x15053E33: mov eax, edx */
    if (TEST_Z(_flag_a, _flag_b)) { ebx = MEM32(ebp + (-0xC)); } /* 0x15053E35: cmove ebx, dword ptr [ebp - 0xc] */
    if (1u) _cf = (((ebx) >> 0) & 1u); /* 0x15053E39: shr ebx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ebx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx >> 1u; /* 0x15053E39: shr ebx, 1 */
    /* cmp MEM8(ecx), 0 */ /* 0x15053E3B: cmp byte ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15053F4A; /* 0x15053E3E: je 0x15053f4a */
L_15053E44:
    MEM32(ebp + (-0x8)) = edx; /* 0x15053E44: mov dword ptr [ebp - 8], edx */
L_15053E47:
    edx = edi; /* 0x15053E47: mov edx, edi */
    /* test ebx, ebx */ /* 0x15053E49: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15053F44; /* 0x15053E4B: je 0x15053f44 */
L_15053E51:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 1; /* 0x15053E51: sub edi, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15053F44; /* 0x15053E54: je 0x15053f44 */
L_15053E5A:
    eax = esi + 0x1; /* 0x15053E5A: lea eax, [esi + 1] */
    /* cmp MEM8(eax), 0 */ /* 0x15053E5D: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(ebp + (-0xC)) = eax; /* 0x15053E60: mov dword ptr [ebp - 0xc], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15053EBB; /* 0x15053E63: je 0x15053ebb */
L_15053E65:
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x15053E65: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15053E6F; /* 0x15053E69: je 0x15053e6f */
L_15053E6B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15053E6B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15053E79; /* 0x15053E6D: jmp 0x15053e79 */
L_15053E6F:
    eax = (uint32_t)MEM8(esi); /* 0x15053E6F: movzx eax, byte ptr [esi] */
    PUSH32(esp, eax); /* 0x15053E72: push eax */
    RECOMP_CALL(sub_15050550); /* 0x15053E73: call 0x15050550 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15053E78: pop ecx */
L_15053E79:
    ecx = MEM32(ebp + (-0x10)); /* 0x15053E79: mov ecx, dword ptr [ebp - 0x10] */
    MEM8(esi) = (uint8_t)(LO8(ecx)); /* 0x15053E7C: mov byte ptr [esi], cl */
    esi = MEM32(ebp + (-0xC)); /* 0x15053E7E: mov esi, dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x4)) = eax; /* 0x15053E81: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 1; /* 0x15053E84: sub edi, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15053F44; /* 0x15053E87: je 0x15053f44 */
L_15053E8D:
    /* test eax, eax */ /* 0x15053E8D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15053E97; /* 0x15053E8F: je 0x15053e97 */
L_15053E91:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x15053E91: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15053EA4; /* 0x15053E95: jmp 0x15053ea4 */
L_15053E97:
    eax = (uint32_t)MEM8(esi); /* 0x15053E97: movzx eax, byte ptr [esi] */
    PUSH32(esp, eax); /* 0x15053E9A: push eax */
    RECOMP_CALL(sub_15050550); /* 0x15053E9B: call 0x15050550 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15053EA0: pop ecx */
    MEM32(ebp + (-0x4)) = eax; /* 0x15053EA1: mov dword ptr [ebp - 4], eax */
L_15053EA4:
    eax = MEM32(ebp + 0x10); /* 0x15053EA4: mov eax, dword ptr [ebp + 0x10] */
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x15053EA7: mov byte ptr [esi], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15053EA9: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x15053EAA: dec ebx */
    _flag_k = FK_DEC;
    /* cmp MEM8(esi), 0 */ /* 0x15053EAB: cmp byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15053E47; /* 0x15053EAE: jne 0x15053e47 */
L_15053EB0:
    eax = MEM32(ebp + (-0x14)); /* 0x15053EB0: mov eax, dword ptr [ebp - 0x14] */
    ecx = MEM32(ebp + 0x8); /* 0x15053EB3: mov ecx, dword ptr [ebp + 8] */
    goto L_15053F4A; /* 0x15053EB6: jmp 0x15053f4a */
L_15053EBB:
    ecx = MEM32(ebp + 0x8); /* 0x15053EBB: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15053EBE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(esi) = (uint8_t)(0); /* 0x15053EC0: mov byte ptr [esi], 0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15053EC3: inc eax */
    _flag_k = FK_INC;
L_15053EC4:
    edi = edx; /* 0x15053EC4: mov edi, edx */
L_15053EC6:
    /* test edi, edi */ /* 0x15053EC6: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15053F91; /* 0x15053EC8: jne 0x15053f91 */
L_15053ECE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15053ECE: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ecx) = (uint8_t)(LO8(ebx)); /* 0x15053ED0: mov byte ptr [ecx], bl */
    RECOMP_CALL(sub_15036430); /* 0x15053ED2: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x15053ED7: push 0x16 */
    esi = POP32_VAL(esp); /* 0x15053ED9: pop esi */
    PUSH32(esp, ebx); /* 0x15053EDA: push ebx */
    PUSH32(esp, ebx); /* 0x15053EDB: push ebx */
    PUSH32(esp, ebx); /* 0x15053EDC: push ebx */
    PUSH32(esp, ebx); /* 0x15053EDD: push ebx */
    MEM32(eax) = esi; /* 0x15053EDE: mov dword ptr [eax], esi */
    PUSH32(esp, ebx); /* 0x15053EE0: push ebx */
    RECOMP_BACKEDGE();
    goto L_15053DDE; /* 0x15053EE1: jmp 0x15053dde */
L_15053EE6:
    eax = (uint32_t)LO8(eax); /* 0x15053EE6: movzx eax, al */
    PUSH32(esp, eax); /* 0x15053EE9: push eax */
    RECOMP_CALL(sub_15050550); /* 0x15053EEA: call 0x15050550 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15053EEF: pop ecx */
    /* test eax, eax */ /* 0x15053EF0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15053F0B; /* 0x15053EF2: je 0x15053f0b */
L_15053EF4:
    eax = MEM32(ebp + 0x8); /* 0x15053EF4: mov eax, dword ptr [ebp + 8] */
    MEM8(eax) = (uint8_t)(0); /* 0x15053EF7: mov byte ptr [eax], 0 */
L_15053EFA:
    RECOMP_CALL(sub_15036430); /* 0x15053EFA: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x2Au); /* 0x15053EFF: push 0x2a */
    ecx = POP32_VAL(esp); /* 0x15053F01: pop ecx */
    MEM32(eax) = ecx; /* 0x15053F02: mov dword ptr [eax], ecx */
    eax = ecx; /* 0x15053F04: mov eax, ecx */
    RECOMP_BACKEDGE();
    goto L_15053DE8; /* 0x15053F06: jmp 0x15053de8 */
L_15053F0B:
    ecx = MEM32(ebp + 0x8); /* 0x15053F0B: mov ecx, dword ptr [ebp + 8] */
    /* cmp MEM8(ecx), 0 */ /* 0x15053F0E: cmp byte ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15053F47; /* 0x15053F11: je 0x15053f47 */
L_15053F13:
    eax = MEM32(ebp + 0x10); /* 0x15053F13: mov eax, dword ptr [ebp + 0x10] */
L_15053F16:
    /* test ebx, ebx */ /* 0x15053F16: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15053F44; /* 0x15053F18: je 0x15053f44 */
L_15053F1A:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 1; /* 0x15053F1A: sub edi, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15053F44; /* 0x15053F1D: je 0x15053f44 */
L_15053F1F:
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x15053F1F: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15053F2B; /* 0x15053F23: je 0x15053f2b */
L_15053F25:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x15053F25: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15053F3B; /* 0x15053F29: jmp 0x15053f3b */
L_15053F2B:
    eax = (uint32_t)MEM8(esi); /* 0x15053F2B: movzx eax, byte ptr [esi] */
    PUSH32(esp, eax); /* 0x15053F2E: push eax */
    RECOMP_CALL(sub_15050550); /* 0x15053F2F: call 0x15050550 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = eax; /* 0x15053F34: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x10); /* 0x15053F37: mov eax, dword ptr [ebp + 0x10] */
    ecx = POP32_VAL(esp); /* 0x15053F3A: pop ecx */
L_15053F3B:
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x15053F3B: mov byte ptr [esi], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15053F3D: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x15053F3E: dec ebx */
    _flag_k = FK_DEC;
    /* cmp MEM8(esi), 0 */ /* 0x15053F3F: cmp byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15053F16; /* 0x15053F42: jne 0x15053f16 */
L_15053F44:
    ecx = MEM32(ebp + 0x8); /* 0x15053F44: mov ecx, dword ptr [ebp + 8] */
L_15053F47:
    eax = MEM32(ebp + (-0x8)); /* 0x15053F47: mov eax, dword ptr [ebp - 8] */
L_15053F4A:
    MEM32(ebp + (-0x14)) = edi; /* 0x15053F4A: mov dword ptr [ebp - 0x14], edi */
    edx = edi; /* 0x15053F4D: mov edx, edi */
    /* test ebx, ebx */ /* 0x15053F4F: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15053EC4; /* 0x15053F51: jne 0x15053ec4 */
L_15053F57:
    /* cmp MEM32(ebp + (-0x4)), ebx */ /* 0x15053F57: cmp dword ptr [ebp - 4], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15053F87; /* 0x15053F5A: je 0x15053f87 */
L_15053F5C:
    /* cmp MEM8(esi), LO8(ebx) */ /* 0x15053F5C: cmp byte ptr [esi], bl */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15053EC6; /* 0x15053F5E: je 0x15053ec6 */
L_15053F64:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 1; /* 0x15053F64: sub edi, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15053F87; /* 0x15053F67: je 0x15053f87 */
L_15053F69:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15053F69: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15053F6B: inc eax */
    _flag_k = FK_INC;
    /* cmp MEM8(esi + 0x1), LO8(ebx) */ /* 0x15053F6C: cmp byte ptr [esi + 1], bl */
    _flag_a = (uint32_t)(MEM8(esi + 0x1)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15053F77; /* 0x15053F6F: jne 0x15053f77 */
L_15053F71:
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x15053F71: mov byte ptr [esi], bl */
    edi = edx; /* 0x15053F73: mov edi, edx */
    goto L_15053F87; /* 0x15053F75: jmp 0x15053f87 */
L_15053F77:
    MEM8(esi) = (uint8_t)(0x20u); /* 0x15053F77: mov byte ptr [esi], 0x20 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15053F7A: inc esi */
    _flag_k = FK_INC;
    goto L_15053F87; /* 0x15053F7B: jmp 0x15053f87 */
L_15053F7D:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 1; /* 0x15053F7D: sub edi, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15053EC6; /* 0x15053F80: je 0x15053ec6 */
L_15053F86:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15053F86: inc esi */
    _flag_k = FK_INC;
L_15053F87:
    /* cmp MEM8(esi), 0 */ /* 0x15053F87: cmp byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15053F7D; /* 0x15053F8A: jne 0x15053f7d */
L_15053F8C:
    RECOMP_BACKEDGE();
    goto L_15053EC6; /* 0x15053F8C: jmp 0x15053ec6 */
L_15053F91:
    /* test eax, eax */ /* 0x15053F91: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15053EFA; /* 0x15053F93: jne 0x15053efa */
L_15053F99:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15053F99: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_15053DE8; /* 0x15053F9B: jmp 0x15053de8 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_15053FB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15053FB0u);

L_15053FB0:
    edi = edi; /* 0x15053FB0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15053FB2: push ebp */
    ebp = esp; /* 0x15053FB3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x24u; /* 0x15053FB5: sub esp, 0x24 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x15053FB8: push ebx */
    ebx = MEM32(ebp + 0x14); /* 0x15053FB9: mov ebx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15053FBC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(eax);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & eax; /* 0x15053FBE: and dword ptr [ebp - 4], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = ebx; /* 0x15053FC1: mov dword ptr [ebp - 0xc], ebx */
    MEM32(ebp + (-0x8)) = eax; /* 0x15053FC4: mov dword ptr [ebp - 8], eax */
    PUSH32(esp, esi); /* 0x15053FC7: push esi */
    esi = MEM32(ebp + 0x8); /* 0x15053FC8: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x15053FCB: push edi */
    /* test ebx, ebx */ /* 0x15053FCC: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15053FE2; /* 0x15053FCE: jne 0x15053fe2 */
L_15053FD0:
    /* test esi, esi */ /* 0x15053FD0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15053FEA; /* 0x15053FD2: jne 0x15053fea */
L_15053FD4:
    /* cmp MEM32(ebp + 0xC), eax */ /* 0x15053FD4: cmp dword ptr [ebp + 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150541ED; /* 0x15053FD7: jne 0x150541ed */
L_15053FDD:
    goto L_15054208; /* 0x15053FDD: jmp 0x15054208 */
L_15053FE2:
    /* test esi, esi */ /* 0x15053FE2: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150541ED; /* 0x15053FE4: je 0x150541ed */
L_15053FEA:
    edi = MEM32(ebp + 0xC); /* 0x15053FEA: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x15053FED: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150541ED; /* 0x15053FEF: je 0x150541ed */
L_15053FF5:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x15053FF5: push dword ptr [ebp + 0x18] */
    ecx = ebp + (-0x24); /* 0x15053FF8: lea ecx, [ebp - 0x24] */
    RECOMP_CALL(sub_1502F870); /* 0x15053FFB: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x20)); /* 0x15054000: mov eax, dword ptr [ebp - 0x20] */
    /* cmp MEM32(eax + 0x8), 0 */ /* 0x15054003: cmp dword ptr [eax + 8], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505401E; /* 0x15054007: jne 0x1505401e */
L_15054009:
    PUSH32(esp, ebx); /* 0x15054009: push ebx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1505400A: push dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x1505400D: push edi */
    PUSH32(esp, esi); /* 0x1505400E: push esi */
    RECOMP_CALL(sub_1508C220); /* 0x1505400F: call 0x1508c220 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15054014: add esp, 0x10 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x15054017: mov esi, eax */
    goto L_150541DE; /* 0x15054019: jmp 0x150541de */
L_1505401E:
    eax = MEM32(ebp + 0x10); /* 0x1505401E: mov eax, dword ptr [ebp + 0x10] */
    ecx = eax; /* 0x15054021: mov ecx, eax */
    if (8u) _cf = (((ecx) >> 7) & 1u); /* 0x15054023: shr ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 8u; /* 0x15054023: shr ecx, 8 */
    MEM32(ebp + (-0x10)) = ecx; /* 0x15054026: mov dword ptr [ebp - 0x10], ecx */
    /* test LO8(ecx), LO8(ecx) */ /* 0x15054029: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15054123; /* 0x1505402B: je 0x15054123 */
L_15054031:
    /* test LO8(eax), LO8(eax) */ /* 0x15054031: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15054136; /* 0x15054033: je 0x15054136 */
L_15054039:
    eax = ebp + (-0x24); /* 0x15054039: lea eax, [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x1505403C: push eax */
    eax = (uint32_t)LO8(ecx); /* 0x1505403D: movzx eax, cl */
    PUSH32(esp, eax); /* 0x15054040: push eax */
    RECOMP_CALL(sub_15050570); /* 0x15054041: call 0x15050570 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15054046: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15054047: pop ecx */
    /* test eax, eax */ /* 0x15054048: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15054136; /* 0x1505404A: je 0x15054136 */
L_15054050:
    eax = MEM32(ebp + 0x8); /* 0x15054050: mov eax, dword ptr [ebp + 8] */
    edx = ebx; /* 0x15054053: mov edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx & 1; /* 0x15054055: and edx, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = ebx + (-0x1); /* 0x15054058: lea ebx, [ebx - 1] */
    MEM32(ebp + (-0x14)) = edx; /* 0x1505405B: mov dword ptr [ebp - 0x14], edx */
    ecx = edx; /* 0x1505405E: mov ecx, edx */
    if (TEST_Z(_flag_a, _flag_b)) { ebx = MEM32(ebp + (-0xC)); } /* 0x15054060: cmove ebx, dword ptr [ebp - 0xc] */
    if (1u) _cf = (((ebx) >> 0) & 1u); /* 0x15054064: shr ebx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ebx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx >> 1u; /* 0x15054064: shr ebx, 1 */
    /* cmp MEM8(eax), 0 */ /* 0x15054066: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15054185; /* 0x15054069: je 0x15054185 */
L_1505406F:
    MEM32(ebp + (-0x8)) = edx; /* 0x1505406F: mov dword ptr [ebp - 8], edx */
L_15054072:
    edx = edi; /* 0x15054072: mov edx, edi */
    /* test ebx, ebx */ /* 0x15054074: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505417F; /* 0x15054076: je 0x1505417f */
L_1505407C:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 1; /* 0x1505407C: sub edi, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1505417F; /* 0x1505407F: je 0x1505417f */
L_15054085:
    eax = esi + 0x1; /* 0x15054085: lea eax, [esi + 1] */
    /* cmp MEM8(eax), 0 */ /* 0x15054088: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(ebp + (-0xC)) = eax; /* 0x1505408B: mov dword ptr [ebp - 0xc], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150540F0; /* 0x1505408E: je 0x150540f0 */
L_15054090:
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x15054090: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505409A; /* 0x15054094: je 0x1505409a */
L_15054096:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15054096: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_150540A9; /* 0x15054098: jmp 0x150540a9 */
L_1505409A:
    eax = (uint32_t)MEM8(esi); /* 0x1505409A: movzx eax, byte ptr [esi] */
    ecx = ebp + (-0x24); /* 0x1505409D: lea ecx, [ebp - 0x24] */
    PUSH32(esp, ecx); /* 0x150540A0: push ecx */
    PUSH32(esp, eax); /* 0x150540A1: push eax */
    RECOMP_CALL(sub_15050570); /* 0x150540A2: call 0x15050570 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150540A7: pop ecx */
    ecx = POP32_VAL(esp); /* 0x150540A8: pop ecx */
L_150540A9:
    ecx = MEM32(ebp + (-0x10)); /* 0x150540A9: mov ecx, dword ptr [ebp - 0x10] */
    MEM8(esi) = (uint8_t)(LO8(ecx)); /* 0x150540AC: mov byte ptr [esi], cl */
    esi = MEM32(ebp + (-0xC)); /* 0x150540AE: mov esi, dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x4)) = eax; /* 0x150540B1: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 1; /* 0x150540B4: sub edi, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1505417F; /* 0x150540B7: je 0x1505417f */
L_150540BD:
    /* test eax, eax */ /* 0x150540BD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150540C7; /* 0x150540BF: je 0x150540c7 */
L_150540C1:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x150540C1: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_150540D9; /* 0x150540C5: jmp 0x150540d9 */
L_150540C7:
    eax = (uint32_t)MEM8(esi); /* 0x150540C7: movzx eax, byte ptr [esi] */
    ecx = ebp + (-0x24); /* 0x150540CA: lea ecx, [ebp - 0x24] */
    PUSH32(esp, ecx); /* 0x150540CD: push ecx */
    PUSH32(esp, eax); /* 0x150540CE: push eax */
    RECOMP_CALL(sub_15050570); /* 0x150540CF: call 0x15050570 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150540D4: pop ecx */
    ecx = POP32_VAL(esp); /* 0x150540D5: pop ecx */
    MEM32(ebp + (-0x4)) = eax; /* 0x150540D6: mov dword ptr [ebp - 4], eax */
L_150540D9:
    eax = MEM32(ebp + 0x10); /* 0x150540D9: mov eax, dword ptr [ebp + 0x10] */
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x150540DC: mov byte ptr [esi], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x150540DE: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x150540DF: dec ebx */
    _flag_k = FK_DEC;
    /* cmp MEM8(esi), 0 */ /* 0x150540E0: cmp byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15054072; /* 0x150540E3: jne 0x15054072 */
L_150540E5:
    ecx = MEM32(ebp + (-0x14)); /* 0x150540E5: mov ecx, dword ptr [ebp - 0x14] */
    eax = MEM32(ebp + 0x8); /* 0x150540E8: mov eax, dword ptr [ebp + 8] */
    goto L_15054185; /* 0x150540EB: jmp 0x15054185 */
L_150540F0:
    eax = MEM32(ebp + 0x8); /* 0x150540F0: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x150540F3: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(esi) = (uint8_t)(0); /* 0x150540F5: mov byte ptr [esi], 0 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x150540F8: inc ecx */
    _flag_k = FK_INC;
L_150540F9:
    edi = edx; /* 0x150540F9: mov edi, edx */
L_150540FB:
    /* test edi, edi */ /* 0x150540FB: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150541CC; /* 0x150540FD: jne 0x150541cc */
L_15054103:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15054103: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(eax) = (uint8_t)(LO8(ebx)); /* 0x15054105: mov byte ptr [eax], bl */
    RECOMP_CALL(sub_15036430); /* 0x15054107: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1505410C: push 0x16 */
    esi = POP32_VAL(esp); /* 0x1505410E: pop esi */
    PUSH32(esp, ebx); /* 0x1505410F: push ebx */
    PUSH32(esp, ebx); /* 0x15054110: push ebx */
    PUSH32(esp, ebx); /* 0x15054111: push ebx */
    PUSH32(esp, ebx); /* 0x15054112: push ebx */
    PUSH32(esp, ebx); /* 0x15054113: push ebx */
    MEM32(eax) = esi; /* 0x15054114: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1505A110); /* 0x15054116: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505411B: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_150541DE; /* 0x1505411E: jmp 0x150541de */
L_15054123:
    ecx = ebp + (-0x24); /* 0x15054123: lea ecx, [ebp - 0x24] */
    eax = (uint32_t)LO8(eax); /* 0x15054126: movzx eax, al */
    PUSH32(esp, ecx); /* 0x15054129: push ecx */
    PUSH32(esp, eax); /* 0x1505412A: push eax */
    RECOMP_CALL(sub_15050570); /* 0x1505412B: call 0x15050570 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15054130: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15054131: pop ecx */
    /* test eax, eax */ /* 0x15054132: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15054141; /* 0x15054134: je 0x15054141 */
L_15054136:
    eax = MEM32(ebp + 0x8); /* 0x15054136: mov eax, dword ptr [ebp + 8] */
    MEM8(eax) = (uint8_t)(0); /* 0x15054139: mov byte ptr [eax], 0 */
    goto L_150541D0; /* 0x1505413C: jmp 0x150541d0 */
L_15054141:
    eax = MEM32(ebp + 0x8); /* 0x15054141: mov eax, dword ptr [ebp + 8] */
    /* cmp MEM8(eax), 0 */ /* 0x15054144: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15054182; /* 0x15054147: je 0x15054182 */
L_15054149:
    eax = MEM32(ebp + 0x10); /* 0x15054149: mov eax, dword ptr [ebp + 0x10] */
L_1505414C:
    /* test ebx, ebx */ /* 0x1505414C: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505417F; /* 0x1505414E: je 0x1505417f */
L_15054150:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 1; /* 0x15054150: sub edi, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1505417F; /* 0x15054153: je 0x1505417f */
L_15054155:
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x15054155: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15054161; /* 0x15054159: je 0x15054161 */
L_1505415B:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1505415B: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15054176; /* 0x1505415F: jmp 0x15054176 */
L_15054161:
    eax = (uint32_t)MEM8(esi); /* 0x15054161: movzx eax, byte ptr [esi] */
    ecx = ebp + (-0x24); /* 0x15054164: lea ecx, [ebp - 0x24] */
    PUSH32(esp, ecx); /* 0x15054167: push ecx */
    PUSH32(esp, eax); /* 0x15054168: push eax */
    RECOMP_CALL(sub_15050570); /* 0x15054169: call 0x15050570 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505416E: pop ecx */
    MEM32(ebp + (-0x4)) = eax; /* 0x1505416F: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x10); /* 0x15054172: mov eax, dword ptr [ebp + 0x10] */
    ecx = POP32_VAL(esp); /* 0x15054175: pop ecx */
L_15054176:
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x15054176: mov byte ptr [esi], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15054178: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x15054179: dec ebx */
    _flag_k = FK_DEC;
    /* cmp MEM8(esi), 0 */ /* 0x1505417A: cmp byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505414C; /* 0x1505417D: jne 0x1505414c */
L_1505417F:
    eax = MEM32(ebp + 0x8); /* 0x1505417F: mov eax, dword ptr [ebp + 8] */
L_15054182:
    ecx = MEM32(ebp + (-0x8)); /* 0x15054182: mov ecx, dword ptr [ebp - 8] */
L_15054185:
    MEM32(ebp + (-0x14)) = edi; /* 0x15054185: mov dword ptr [ebp - 0x14], edi */
    edx = edi; /* 0x15054188: mov edx, edi */
    /* test ebx, ebx */ /* 0x1505418A: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150540F9; /* 0x1505418C: jne 0x150540f9 */
L_15054192:
    /* cmp MEM32(ebp + (-0x4)), ebx */ /* 0x15054192: cmp dword ptr [ebp - 4], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150541C2; /* 0x15054195: je 0x150541c2 */
L_15054197:
    /* cmp MEM8(esi), LO8(ebx) */ /* 0x15054197: cmp byte ptr [esi], bl */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150540FB; /* 0x15054199: je 0x150540fb */
L_1505419F:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 1; /* 0x1505419F: sub edi, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_150541C2; /* 0x150541A2: je 0x150541c2 */
L_150541A4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x150541A4: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x150541A6: inc ecx */
    _flag_k = FK_INC;
    /* cmp MEM8(esi + 0x1), LO8(ebx) */ /* 0x150541A7: cmp byte ptr [esi + 1], bl */
    _flag_a = (uint32_t)(MEM8(esi + 0x1)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_150541B2; /* 0x150541AA: jne 0x150541b2 */
L_150541AC:
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x150541AC: mov byte ptr [esi], bl */
    edi = edx; /* 0x150541AE: mov edi, edx */
    goto L_150541C2; /* 0x150541B0: jmp 0x150541c2 */
L_150541B2:
    MEM8(esi) = (uint8_t)(0x20u); /* 0x150541B2: mov byte ptr [esi], 0x20 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x150541B5: inc esi */
    _flag_k = FK_INC;
    goto L_150541C2; /* 0x150541B6: jmp 0x150541c2 */
L_150541B8:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 1; /* 0x150541B8: sub edi, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_150540FB; /* 0x150541BB: je 0x150540fb */
L_150541C1:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x150541C1: inc esi */
    _flag_k = FK_INC;
L_150541C2:
    /* cmp MEM8(esi), 0 */ /* 0x150541C2: cmp byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_150541B8; /* 0x150541C5: jne 0x150541b8 */
L_150541C7:
    RECOMP_BACKEDGE();
    goto L_150540FB; /* 0x150541C7: jmp 0x150540fb */
L_150541CC:
    /* test ecx, ecx */ /* 0x150541CC: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150541DC; /* 0x150541CE: je 0x150541dc */
L_150541D0:
    RECOMP_CALL(sub_15036430); /* 0x150541D0: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x2Au); /* 0x150541D5: push 0x2a */
    esi = POP32_VAL(esp); /* 0x150541D7: pop esi */
    MEM32(eax) = esi; /* 0x150541D8: mov dword ptr [eax], esi */
    goto L_150541DE; /* 0x150541DA: jmp 0x150541de */
L_150541DC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x150541DC: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_150541DE:
    /* cmp MEM8(ebp + (-0x18)), 0 */ /* 0x150541DE: cmp byte ptr [ebp - 0x18], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x18))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15054206; /* 0x150541E2: je 0x15054206 */
L_150541E4:
    ecx = MEM32(ebp + (-0x1C)); /* 0x150541E4: mov ecx, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x150541E7: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15054206; /* 0x150541EB: jmp 0x15054206 */
L_150541ED:
    RECOMP_CALL(sub_15036430); /* 0x150541ED: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x150541F2: push 0x16 */
    esi = POP32_VAL(esp); /* 0x150541F4: pop esi */
    MEM32(eax) = esi; /* 0x150541F5: mov dword ptr [eax], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150541F7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x150541F9: push eax */
    PUSH32(esp, eax); /* 0x150541FA: push eax */
    PUSH32(esp, eax); /* 0x150541FB: push eax */
    PUSH32(esp, eax); /* 0x150541FC: push eax */
    PUSH32(esp, eax); /* 0x150541FD: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x150541FE: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15054203: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15054206:
    eax = esi; /* 0x15054206: mov eax, esi */
L_15054208:
    edi = POP32_VAL(esp); /* 0x15054208: pop edi */
    esi = POP32_VAL(esp); /* 0x15054209: pop esi */
    ebx = POP32_VAL(esp); /* 0x1505420A: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1505420B: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505420C: ret  */
    RECOMP_REGS_OUT();
}

void sub_15054220(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15054220u);

L_15054220:
    edi = edi; /* 0x15054220: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15054222: push ebp */
    ebp = esp; /* 0x15054223: mov ebp, esp */
    PUSH32(esp, 0); /* 0x15054225: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15054227: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1505422A: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1505422D: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15054240); /* 0x15054230: call 0x15054240 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15054235: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15054238: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15054239: ret  */
    RECOMP_REGS_OUT();
}

void sub_15054240(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15054240u);

L_15054240:
    edi = edi; /* 0x15054240: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15054242: push ebp */
    ebp = esp; /* 0x15054243: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x15054245: sub esp, 0x1c */
    _flag_k = FK_CMP;
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x15054248: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15054253; /* 0x1505424C: jne 0x15054253 */
L_1505424E:
    eax = MEM32(ebp + 0x8); /* 0x1505424E: mov eax, dword ptr [ebp + 8] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15054251: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15054252: ret  */
L_15054253:
    PUSH32(esp, ebx); /* 0x15054253: push ebx */
    PUSH32(esp, esi); /* 0x15054254: push esi */
    esi = MEM32(ebp + 0x8); /* 0x15054255: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x15054258: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505427D; /* 0x1505425A: jne 0x1505427d */
L_1505425C:
    RECOMP_CALL(sub_15036430); /* 0x1505425C: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15054261: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x15054263: push ebx */
    PUSH32(esp, ebx); /* 0x15054264: push ebx */
    PUSH32(esp, ebx); /* 0x15054265: push ebx */
    PUSH32(esp, ebx); /* 0x15054266: push ebx */
    PUSH32(esp, ebx); /* 0x15054267: push ebx */
    MEM32(eax) = 0x16u; /* 0x15054268: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x1505426E: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15054273: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15054276: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1505436D; /* 0x15054278: jmp 0x1505436d */
L_1505427D:
    PUSH32(esp, edi); /* 0x1505427D: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1505427E: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x15054281: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150542A6; /* 0x15054283: jne 0x150542a6 */
L_15054285:
    RECOMP_CALL(sub_15036430); /* 0x15054285: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1505428A: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1505428C: push ebx */
    PUSH32(esp, ebx); /* 0x1505428D: push ebx */
    PUSH32(esp, ebx); /* 0x1505428E: push ebx */
    PUSH32(esp, ebx); /* 0x1505428F: push ebx */
    PUSH32(esp, ebx); /* 0x15054290: push ebx */
    MEM32(eax) = 0x16u; /* 0x15054291: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x15054297: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505429C: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505429F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1505436C; /* 0x150542A1: jmp 0x1505436c */
L_150542A6:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x150542A6: push dword ptr [ebp + 0x14] */
    ecx = ebp + (-0x1C); /* 0x150542A9: lea ecx, [ebp - 0x1c] */
    RECOMP_CALL(sub_1502F870); /* 0x150542AC: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x18)); /* 0x150542B1: mov eax, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x150542B4: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(eax + 0x8), ebx */ /* 0x150542B6: cmp dword ptr [eax + 8], ebx */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150542CF; /* 0x150542B9: jne 0x150542cf */
L_150542BB:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x150542BB: push dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x150542BE: push edi */
    PUSH32(esp, esi); /* 0x150542BF: push esi */
    RECOMP_CALL(sub_1508E7B0); /* 0x150542C0: call 0x1508e7b0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x150542C5: add esp, 0xc */
    _flag_k = FK_ADD;
    edi = eax; /* 0x150542C8: mov edi, eax */
    goto L_1505435D; /* 0x150542CA: jmp 0x1505435d */
L_150542CF:
    ecx = esi; /* 0x150542CF: mov ecx, esi */
    MEM32(ebp + (-0xC)) = ecx; /* 0x150542D1: mov dword ptr [ebp - 0xc], ecx */
L_150542D4:
    SET_LO8(eax, MEM8(esi)); /* 0x150542D4: mov al, byte ptr [esi] */
    edx = esi; /* 0x150542D6: mov edx, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x150542D8: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = edx; /* 0x150542D9: mov dword ptr [ebp - 4], edx */
    /* test LO8(eax), LO8(eax) */ /* 0x150542DC: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150542D4; /* 0x150542DE: jne 0x150542d4 */
L_150542E0:
    eax = ebp + (-0x1C); /* 0x150542E0: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x150542E3: push eax */
    PUSH32(esp, edx); /* 0x150542E4: push edx */
    PUSH32(esp, ecx); /* 0x150542E5: push ecx */
    RECOMP_CALL(sub_15051150); /* 0x150542E6: call 0x15051150 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x150542EB: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x150542EE: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x150542F1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    esi = ecx + (-0x1); /* 0x150542F3: lea esi, [ecx - 1] */
    if (TEST_Z(_flag_a, _flag_b)) { esi = ecx; } /* 0x150542F6: cmove esi, ecx */
    ecx = MEM32(ebp + 0x10); /* 0x150542F9: mov ecx, dword ptr [ebp + 0x10] */
L_150542FC:
    SET_LO8(edx, MEM8(edi)); /* 0x150542FC: mov dl, byte ptr [edi] */
    eax = esi + 0x1; /* 0x150542FE: lea eax, [esi + 1] */
    ebx = MEM32(ebp + (-0x18)); /* 0x15054301: mov ebx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x15054304: dec ecx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x4)) = eax; /* 0x15054305: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x15054308: inc edi */
    _flag_k = FK_INC;
    eax = (uint32_t)LO8(edx); /* 0x15054309: movzx eax, dl */
    PUSH32(esp, 0); /* 0x1505430C: push 0 */
    MEM32(ebp + (-0x8)) = esi; /* 0x1505430E: mov dword ptr [ebp - 8], esi */
    /* test MEM8(eax + ebx + 0x1D), 4 */ /* 0x15054311: test byte ptr [eax + ebx + 0x1d], 4 */
    _flag_a = (uint32_t)(MEM8(eax + ebx + 0x1D)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(esi) = (uint8_t)(LO8(edx)); /* 0x15054316: mov byte ptr [esi], dl */
    esi = MEM32(ebp + (-0x4)); /* 0x15054318: mov esi, dword ptr [ebp - 4] */
    ebx = POP32_VAL(esp); /* 0x1505431B: pop ebx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_15054351; /* 0x1505431C: je 0x15054351 */
L_1505431E:
    SET_LO8(eax, MEM8(edi)); /* 0x1505431E: mov al, byte ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x15054320: inc edi */
    _flag_k = FK_INC;
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x15054321: mov byte ptr [esi], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15054323: inc esi */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x15054324: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15054355; /* 0x15054326: jne 0x15054355 */
L_15054328:
    eax = MEM32(ebp + (-0x8)); /* 0x15054328: mov eax, dword ptr [ebp - 8] */
    MEM8(eax) = (uint8_t)(LO8(ebx)); /* 0x1505432B: mov byte ptr [eax], bl */
L_1505432D:
    edi = MEM32(ebp + (-0xC)); /* 0x1505432D: mov edi, dword ptr [ebp - 0xc] */
    /* cmp esi, edi */ /* 0x15054330: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505435B; /* 0x15054332: je 0x1505435b */
L_15054334:
    eax = ebp + (-0x1C); /* 0x15054334: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x15054337: push eax */
    eax = esi; /* 0x15054338: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x1505433A: sub eax, edi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1505433C: dec eax */
    _flag_k = FK_DEC;
    PUSH32(esp, eax); /* 0x1505433D: push eax */
    PUSH32(esp, edi); /* 0x1505433E: push edi */
    RECOMP_CALL(sub_15051BB0); /* 0x1505433F: call 0x15051bb0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15054344: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp eax, 1 */ /* 0x15054347: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505435B; /* 0x1505434A: jne 0x1505435b */
L_1505434C:
    MEM8(esi + (-0x1)) = (uint8_t)(LO8(ebx)); /* 0x1505434C: mov byte ptr [esi - 1], bl */
    goto L_1505435D; /* 0x1505434F: jmp 0x1505435d */
L_15054351:
    /* test LO8(edx), LO8(edx) */ /* 0x15054351: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505432D; /* 0x15054353: je 0x1505432d */
L_15054355:
    /* test ecx, ecx */ /* 0x15054355: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150542FC; /* 0x15054357: jne 0x150542fc */
L_15054359:
    RECOMP_BACKEDGE();
    goto L_1505432D; /* 0x15054359: jmp 0x1505432d */
L_1505435B:
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x1505435B: mov byte ptr [esi], bl */
L_1505435D:
    /* cmp MEM8(ebp + (-0x10)), 0 */ /* 0x1505435D: cmp byte ptr [ebp - 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x10))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505436A; /* 0x15054361: je 0x1505436a */
L_15054363:
    eax = MEM32(ebp + (-0x14)); /* 0x15054363: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(MEM32(eax + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(eax + 0x70) = MEM32(eax + 0x70) & 0xFFFFFFFDu; /* 0x15054366: and dword ptr [eax + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1505436A:
    eax = edi; /* 0x1505436A: mov eax, edi */
L_1505436C:
    edi = POP32_VAL(esp); /* 0x1505436C: pop edi */
L_1505436D:
    esi = POP32_VAL(esp); /* 0x1505436D: pop esi */
    ebx = POP32_VAL(esp); /* 0x1505436E: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1505436F: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15054370: ret  */
    RECOMP_REGS_OUT();
}

void sub_15054380(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15054380u);

L_15054380:
    edi = edi; /* 0x15054380: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15054382: push ebp */
    ebp = esp; /* 0x15054383: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x15054385: sub esp, 0x10 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x14); /* 0x15054388: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, ebx); /* 0x1505438B: push ebx */
    PUSH32(esp, esi); /* 0x1505438C: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1505438D: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15054390: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x15054392: mov dword ptr [ebp - 4], ebx */
    PUSH32(esp, edi); /* 0x15054395: push edi */
    /* test eax, eax */ /* 0x15054396: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150543C5; /* 0x15054398: jne 0x150543c5 */
L_1505439A:
    /* test esi, esi */ /* 0x1505439A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150543C9; /* 0x1505439C: jne 0x150543c9 */
L_1505439E:
    /* cmp MEM32(ebp + 0xC), ebx */ /* 0x1505439E: cmp dword ptr [ebp + 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505455E; /* 0x150543A1: je 0x1505455e */
L_150543A7:
    RECOMP_CALL(sub_15036430); /* 0x150543A7: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x150543AC: push 0x16 */
L_150543AE:
    esi = POP32_VAL(esp); /* 0x150543AE: pop esi */
    PUSH32(esp, ebx); /* 0x150543AF: push ebx */
    PUSH32(esp, ebx); /* 0x150543B0: push ebx */
    PUSH32(esp, ebx); /* 0x150543B1: push ebx */
    PUSH32(esp, ebx); /* 0x150543B2: push ebx */
    PUSH32(esp, ebx); /* 0x150543B3: push ebx */
    MEM32(eax) = esi; /* 0x150543B4: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1505A110); /* 0x150543B6: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150543BB: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x150543BE: mov eax, esi */
L_150543C0:
    edi = POP32_VAL(esp); /* 0x150543C0: pop edi */
    esi = POP32_VAL(esp); /* 0x150543C1: pop esi */
    ebx = POP32_VAL(esp); /* 0x150543C2: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150543C3: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150543C4: ret  */
L_150543C5:
    /* test esi, esi */ /* 0x150543C5: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_150543A7; /* 0x150543C7: je 0x150543a7 */
L_150543C9:
    edx = MEM32(ebp + 0xC); /* 0x150543C9: mov edx, dword ptr [ebp + 0xc] */
    /* test edx, edx */ /* 0x150543CC: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_150543A7; /* 0x150543CE: je 0x150543a7 */
L_150543D0:
    /* test eax, eax */ /* 0x150543D0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150543DD; /* 0x150543D2: je 0x150543dd */
L_150543D4:
    /* cmp MEM32(ebp + 0x10), ebx */ /* 0x150543D4: cmp dword ptr [ebp + 0x10], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150543DD; /* 0x150543D7: jne 0x150543dd */
L_150543D9:
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x150543D9: mov byte ptr [esi], bl */
    RECOMP_BACKEDGE();
    goto L_150543A7; /* 0x150543DB: jmp 0x150543a7 */
L_150543DD:
    eax = esi; /* 0x150543DD: mov eax, esi */
    ecx = edx; /* 0x150543DF: mov ecx, edx */
L_150543E1:
    /* cmp MEM8(eax), LO8(ebx) */ /* 0x150543E1: cmp byte ptr [eax], bl */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150543ED; /* 0x150543E3: je 0x150543ed */
L_150543E5:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x150543E5: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x150543E6: sub ecx, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_150543E1; /* 0x150543E9: jne 0x150543e1 */
L_150543EB:
    RECOMP_BACKEDGE();
    goto L_150543D9; /* 0x150543EB: jmp 0x150543d9 */
L_150543ED:
    edi = eax; /* 0x150543ED: mov edi, eax */
    ebx = ecx; /* 0x150543EF: mov ebx, ecx */
    /* cmp ecx, edx */ /* 0x150543F1: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1505443B; /* 0x150543F3: jae 0x1505443b */
L_150543F5:
    edx = eax + (-0x1); /* 0x150543F5: lea edx, [eax - 1] */
    MEM32(ebp + (-0xC)) = edx; /* 0x150543F8: mov dword ptr [ebp - 0xc], edx */
    MEM32(ebp + (-0x8)) = edx; /* 0x150543FB: mov dword ptr [ebp - 8], edx */
    /* cmp edx, esi */ /* 0x150543FE: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_15054423; /* 0x15054400: jb 0x15054423 */
L_15054402:
    MEM32(ebp + (-0x10)) = ecx; /* 0x15054402: mov dword ptr [ebp - 0x10], ecx */
    ebx = edx; /* 0x15054405: mov ebx, edx */
L_15054407:
    eax = (uint32_t)MEM8(ebx); /* 0x15054407: movzx eax, byte ptr [ebx] */
    PUSH32(esp, eax); /* 0x1505440A: push eax */
    RECOMP_CALL(sub_15050550); /* 0x1505440B: call 0x15050550 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15054410: pop ecx */
    /* test eax, eax */ /* 0x15054411: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505441A; /* 0x15054413: je 0x1505441a */
L_15054415:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x15054415: dec ebx */
    _flag_k = FK_DEC;
    /* cmp ebx, esi */ /* 0x15054416: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_15054407; /* 0x15054418: jae 0x15054407 */
L_1505441A:
    MEM32(ebp + (-0x8)) = ebx; /* 0x1505441A: mov dword ptr [ebp - 8], ebx */
    ebx = MEM32(ebp + (-0x10)); /* 0x1505441D: mov ebx, dword ptr [ebp - 0x10] */
    edx = MEM32(ebp + (-0x8)); /* 0x15054420: mov edx, dword ptr [ebp - 8] */
L_15054423:
    ecx = MEM32(ebp + (-0xC)); /* 0x15054423: mov ecx, dword ptr [ebp - 0xc] */
    eax = ecx; /* 0x15054426: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x15054428: sub eax, edx */
    _flag_k = FK_CMP;
    /* test LO8(eax), 1 */ /* 0x1505442A: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505443B; /* 0x1505442C: je 0x1505443b */
L_1505442E:
    edi = ecx; /* 0x1505442E: mov edi, ecx */
    MEM32(ebp + (-0x4)) = 1; /* 0x15054430: mov dword ptr [ebp - 4], 1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x15054437: inc ebx */
    _flag_k = FK_INC;
    MEM8(edi) = (uint8_t)(0); /* 0x15054438: mov byte ptr [edi], 0 */
L_1505443B:
    eax = MEM32(ebp + 0x14); /* 0x1505443B: mov eax, dword ptr [ebp + 0x14] */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1505443E: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505445B; /* 0x15054441: jne 0x1505445b */
L_15054443:
    ecx = MEM32(ebp + 0x10); /* 0x15054443: mov ecx, dword ptr [ebp + 0x10] */
L_15054446:
    SET_LO8(eax, MEM8(ecx)); /* 0x15054446: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15054448: inc ecx */
    _flag_k = FK_INC;
    MEM8(edi) = (uint8_t)(LO8(eax)); /* 0x15054449: mov byte ptr [edi], al */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1505444B: inc edi */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x1505444C: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_150544D4; /* 0x1505444E: je 0x150544d4 */
L_15054454:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 1; /* 0x15054454: sub ebx, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_15054446; /* 0x15054457: jne 0x15054446 */
L_15054459:
    goto L_150544D4; /* 0x15054459: jmp 0x150544d4 */
L_1505445B:
    /* test eax, eax */ /* 0x1505445B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150544D1; /* 0x1505445D: je 0x150544d1 */
L_1505445F:
    ecx = MEM32(ebp + 0x10); /* 0x1505445F: mov ecx, dword ptr [ebp + 0x10] */
L_15054462:
    eax = ecx + 0x1; /* 0x15054462: lea eax, [ecx + 1] */
    MEM32(ebp + (-0xC)) = eax; /* 0x15054465: mov dword ptr [ebp - 0xc], eax */
    eax = (uint32_t)MEM8(ecx); /* 0x15054468: movzx eax, byte ptr [ecx] */
    PUSH32(esp, eax); /* 0x1505446B: push eax */
    RECOMP_CALL(sub_15050550); /* 0x1505446C: call 0x15050550 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15054471: pop ecx */
    ecx = MEM32(ebp + (-0xC)); /* 0x15054472: mov ecx, dword ptr [ebp - 0xc] */
    /* test eax, eax */ /* 0x15054475: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505449B; /* 0x15054477: je 0x1505449b */
L_15054479:
    /* cmp MEM8(ecx), 0 */ /* 0x15054479: cmp byte ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150544C0; /* 0x1505447C: je 0x150544c0 */
L_1505447E:
    /* cmp ebx, 2 */ /* 0x1505447E: cmp ebx, 2 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_150544BC; /* 0x15054481: jbe 0x150544bc */
L_15054483:
    eax = MEM32(ebp + 0x10); /* 0x15054483: mov eax, dword ptr [ebp + 0x10] */
    SET_LO8(eax, MEM8(eax)); /* 0x15054486: mov al, byte ptr [eax] */
    MEM8(edi) = (uint8_t)(LO8(eax)); /* 0x15054488: mov byte ptr [edi], al */
    SET_LO8(eax, MEM8(ecx)); /* 0x1505448A: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1505448C: inc ecx */
    _flag_k = FK_INC;
    MEM8(edi + 0x1) = (uint8_t)(LO8(eax)); /* 0x1505448D: mov byte ptr [edi + 1], al */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x15054490: add edi, 2 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x10) = ecx; /* 0x15054493: mov dword ptr [ebp + 0x10], ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 2; /* 0x15054496: sub ebx, 2 */
    _flag_k = FK_CMP;
    goto L_150544AF; /* 0x15054499: jmp 0x150544af */
L_1505449B:
    eax = MEM32(ebp + 0x10); /* 0x1505449B: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebp + 0x10) = ecx; /* 0x1505449E: mov dword ptr [ebp + 0x10], ecx */
    SET_LO8(eax, MEM8(eax)); /* 0x150544A1: mov al, byte ptr [eax] */
    MEM8(edi) = (uint8_t)(LO8(eax)); /* 0x150544A3: mov byte ptr [edi], al */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x150544A5: inc edi */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x150544A6: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_150544CA; /* 0x150544A8: je 0x150544ca */
L_150544AA:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 1; /* 0x150544AA: sub ebx, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_150544CA; /* 0x150544AD: je 0x150544ca */
L_150544AF:
    eax = MEM32(ebp + 0x14); /* 0x150544AF: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x150544B2: sub eax, 1 */
    _flag_k = FK_CMP;
    MEM32(ebp + 0x14) = eax; /* 0x150544B5: mov dword ptr [ebp + 0x14], eax */
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_15054462; /* 0x150544B8: jne 0x15054462 */
L_150544BA:
    goto L_150544CD; /* 0x150544BA: jmp 0x150544cd */
L_150544BC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x150544BC: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_150544CA; /* 0x150544BE: jmp 0x150544ca */
L_150544C0:
    MEM8(edi) = (uint8_t)(0); /* 0x150544C0: mov byte ptr [edi], 0 */
    MEM32(ebp + (-0x4)) = 1; /* 0x150544C3: mov dword ptr [ebp - 4], 1 */
L_150544CA:
    eax = MEM32(ebp + 0x14); /* 0x150544CA: mov eax, dword ptr [ebp + 0x14] */
L_150544CD:
    /* test eax, eax */ /* 0x150544CD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150544D4; /* 0x150544CF: jne 0x150544d4 */
L_150544D1:
    MEM8(edi) = (uint8_t)(0); /* 0x150544D1: mov byte ptr [edi], 0 */
L_150544D4:
    /* test ebx, ebx */ /* 0x150544D4: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15054547; /* 0x150544D6: jne 0x15054547 */
L_150544D8:
    /* cmp MEM32(ebp + 0x14), 0xFFFFFFFFu */ /* 0x150544D8: cmp dword ptr [ebp + 0x14], -1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15054537; /* 0x150544DC: jne 0x15054537 */
L_150544DE:
    /* cmp MEM32(ebp + (-0x4)), ebx */ /* 0x150544DE: cmp dword ptr [ebp - 4], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150544EE; /* 0x150544E1: je 0x150544ee */
L_150544E3:
    RECOMP_CALL(sub_15036430); /* 0x150544E3: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x2Au; /* 0x150544E8: mov dword ptr [eax], 0x2a */
L_150544EE:
    eax = MEM32(ebp + 0xC); /* 0x150544EE: mov eax, dword ptr [ebp + 0xc] */
    /* cmp eax, 1 */ /* 0x150544F1: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1505452E; /* 0x150544F4: jbe 0x1505452e */
L_150544F6:
    ecx = esi + eax; /* 0x150544F6: lea ecx, [esi + eax] */
    ebx = ecx + (-0x2); /* 0x150544F9: lea ebx, [ecx - 2] */
    MEM32(ebp + (-0x10)) = ecx; /* 0x150544FC: mov dword ptr [ebp - 0x10], ecx */
    edi = ebx; /* 0x150544FF: mov edi, ebx */
    /* cmp ebx, esi */ /* 0x15054501: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1505451B; /* 0x15054503: jb 0x1505451b */
L_15054505:
    eax = (uint32_t)MEM8(edi); /* 0x15054505: movzx eax, byte ptr [edi] */
    PUSH32(esp, eax); /* 0x15054508: push eax */
    RECOMP_CALL(sub_15050550); /* 0x15054509: call 0x15050550 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505450E: pop ecx */
    /* test eax, eax */ /* 0x1505450F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15054518; /* 0x15054511: je 0x15054518 */
L_15054513:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x15054513: dec edi */
    _flag_k = FK_DEC;
    /* cmp edi, esi */ /* 0x15054514: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_15054505; /* 0x15054516: jae 0x15054505 */
L_15054518:
    ecx = MEM32(ebp + (-0x10)); /* 0x15054518: mov ecx, dword ptr [ebp - 0x10] */
L_1505451B:
    eax = ebx; /* 0x1505451B: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x1505451D: sub eax, edi */
    _flag_k = FK_CMP;
    /* test LO8(eax), 1 */ /* 0x1505451F: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15054531; /* 0x15054521: je 0x15054531 */
L_15054523:
    MEM8(ebx) = (uint8_t)(0); /* 0x15054523: mov byte ptr [ebx], 0 */
L_15054526:
    PUSH32(esp, 0x50u); /* 0x15054526: push 0x50 */
    eax = POP32_VAL(esp); /* 0x15054528: pop eax */
    RECOMP_BACKEDGE();
    goto L_150543C0; /* 0x15054529: jmp 0x150543c0 */
L_1505452E:
    ecx = eax + esi; /* 0x1505452E: lea ecx, [eax + esi] */
L_15054531:
    MEM8(ecx + (-0x1)) = (uint8_t)(0); /* 0x15054531: mov byte ptr [ecx - 1], 0 */
    RECOMP_BACKEDGE();
    goto L_15054526; /* 0x15054535: jmp 0x15054526 */
L_15054537:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15054537: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x15054539: mov byte ptr [esi], bl */
    RECOMP_CALL(sub_15036430); /* 0x1505453B: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x22u); /* 0x15054540: push 0x22 */
    RECOMP_BACKEDGE();
    goto L_150543AE; /* 0x15054542: jmp 0x150543ae */
L_15054547:
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x15054547: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505455E; /* 0x1505454B: je 0x1505455e */
L_1505454D:
    RECOMP_CALL(sub_15036430); /* 0x1505454D: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x2Au); /* 0x15054552: push 0x2a */
    ecx = POP32_VAL(esp); /* 0x15054554: pop ecx */
    MEM32(eax) = ecx; /* 0x15054555: mov dword ptr [eax], ecx */
    eax = ecx; /* 0x15054557: mov eax, ecx */
    RECOMP_BACKEDGE();
    goto L_150543C0; /* 0x15054559: jmp 0x150543c0 */
L_1505455E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505455E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_150543C0; /* 0x15054560: jmp 0x150543c0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_15054570(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15054570u);

L_15054570:
    edi = edi; /* 0x15054570: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15054572: push ebp */
    ebp = esp; /* 0x15054573: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x15054575: sub esp, 0x20 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x14); /* 0x15054578: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, ebx); /* 0x1505457B: push ebx */
    PUSH32(esp, esi); /* 0x1505457C: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1505457D: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15054580: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x15054582: mov dword ptr [ebp - 4], ebx */
    PUSH32(esp, edi); /* 0x15054585: push edi */
    /* test eax, eax */ /* 0x15054586: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15054595; /* 0x15054588: jne 0x15054595 */
L_1505458A:
    /* test esi, esi */ /* 0x1505458A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15054599; /* 0x1505458C: jne 0x15054599 */
L_1505458E:
    /* cmp MEM32(ebp + 0xC), ebx */ /* 0x1505458E: cmp dword ptr [ebp + 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150545AD; /* 0x15054591: jne 0x150545ad */
L_15054593:
    goto L_150545C6; /* 0x15054593: jmp 0x150545c6 */
L_15054595:
    /* test esi, esi */ /* 0x15054595: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150545AD; /* 0x15054597: je 0x150545ad */
L_15054599:
    edi = MEM32(ebp + 0xC); /* 0x15054599: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x1505459C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150545AD; /* 0x1505459E: je 0x150545ad */
L_150545A0:
    ebx = MEM32(ebp + 0x10); /* 0x150545A0: mov ebx, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x150545A3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150545CB; /* 0x150545A5: je 0x150545cb */
L_150545A7:
    /* test ebx, ebx */ /* 0x150545A7: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150545CB; /* 0x150545A9: jne 0x150545cb */
L_150545AB:
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x150545AB: mov byte ptr [esi], bl */
L_150545AD:
    RECOMP_CALL(sub_15036430); /* 0x150545AD: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x150545B2: push 0x16 */
    esi = POP32_VAL(esp); /* 0x150545B4: pop esi */
    PUSH32(esp, ebx); /* 0x150545B5: push ebx */
    PUSH32(esp, ebx); /* 0x150545B6: push ebx */
    PUSH32(esp, ebx); /* 0x150545B7: push ebx */
    PUSH32(esp, ebx); /* 0x150545B8: push ebx */
    PUSH32(esp, ebx); /* 0x150545B9: push ebx */
    MEM32(eax) = esi; /* 0x150545BA: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1505A110); /* 0x150545BC: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150545C1: add esp, 0x14 */
    _flag_k = FK_ADD;
L_150545C4:
    eax = esi; /* 0x150545C4: mov eax, esi */
L_150545C6:
    edi = POP32_VAL(esp); /* 0x150545C6: pop edi */
    esi = POP32_VAL(esp); /* 0x150545C7: pop esi */
    ebx = POP32_VAL(esp); /* 0x150545C8: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150545C9: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150545CA: ret  */
L_150545CB:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x150545CB: push dword ptr [ebp + 0x18] */
    ecx = ebp + (-0x20); /* 0x150545CE: lea ecx, [ebp - 0x20] */
    RECOMP_CALL(sub_1502F870); /* 0x150545D1: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x1C)); /* 0x150545D6: mov eax, dword ptr [ebp - 0x1c] */
    /* cmp MEM32(eax + 0x8), 0 */ /* 0x150545D9: cmp dword ptr [eax + 8], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150545F4; /* 0x150545DD: jne 0x150545f4 */
L_150545DF:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x150545DF: push dword ptr [ebp + 0x14] */
    PUSH32(esp, ebx); /* 0x150545E2: push ebx */
    PUSH32(esp, edi); /* 0x150545E3: push edi */
    PUSH32(esp, esi); /* 0x150545E4: push esi */
    RECOMP_CALL(sub_1508E8F0); /* 0x150545E5: call 0x1508e8f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x150545EA: add esp, 0x10 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x150545ED: mov esi, eax */
    goto L_15054793; /* 0x150545EF: jmp 0x15054793 */
L_150545F4:
    eax = esi; /* 0x150545F4: mov eax, esi */
    ecx = edi; /* 0x150545F6: mov ecx, edi */
L_150545F8:
    /* cmp MEM8(eax), 0 */ /* 0x150545F8: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15054613; /* 0x150545FB: je 0x15054613 */
L_150545FD:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x150545FD: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x150545FE: sub ecx, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_150545F8; /* 0x15054601: jne 0x150545f8 */
L_15054603:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15054603: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x15054605: mov byte ptr [esi], bl */
    RECOMP_CALL(sub_15036430); /* 0x15054607: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1505460C: push 0x16 */
    goto L_1505476D; /* 0x1505460E: jmp 0x1505476d */
L_15054613:
    edi = eax; /* 0x15054613: mov edi, eax */
    ebx = ecx; /* 0x15054615: mov ebx, ecx */
    /* cmp ecx, MEM32(ebp + 0xC) */ /* 0x15054617: cmp ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_15054667; /* 0x1505461A: jae 0x15054667 */
L_1505461C:
    edx = eax + (-0x1); /* 0x1505461C: lea edx, [eax - 1] */
    MEM32(ebp + (-0xC)) = edx; /* 0x1505461F: mov dword ptr [ebp - 0xc], edx */
    MEM32(ebp + (-0x8)) = edx; /* 0x15054622: mov dword ptr [ebp - 8], edx */
    /* cmp edx, esi */ /* 0x15054625: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1505464F; /* 0x15054627: jb 0x1505464f */
L_15054629:
    MEM32(ebp + (-0x10)) = ecx; /* 0x15054629: mov dword ptr [ebp - 0x10], ecx */
    ebx = edx; /* 0x1505462C: mov ebx, edx */
L_1505462E:
    eax = (uint32_t)MEM8(ebx); /* 0x1505462E: movzx eax, byte ptr [ebx] */
    ecx = ebp + (-0x20); /* 0x15054631: lea ecx, [ebp - 0x20] */
    PUSH32(esp, ecx); /* 0x15054634: push ecx */
    PUSH32(esp, eax); /* 0x15054635: push eax */
    RECOMP_CALL(sub_15050570); /* 0x15054636: call 0x15050570 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505463B: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1505463C: pop ecx */
    /* test eax, eax */ /* 0x1505463D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15054646; /* 0x1505463F: je 0x15054646 */
L_15054641:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x15054641: dec ebx */
    _flag_k = FK_DEC;
    /* cmp ebx, esi */ /* 0x15054642: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_1505462E; /* 0x15054644: jae 0x1505462e */
L_15054646:
    MEM32(ebp + (-0x8)) = ebx; /* 0x15054646: mov dword ptr [ebp - 8], ebx */
    ebx = MEM32(ebp + (-0x10)); /* 0x15054649: mov ebx, dword ptr [ebp - 0x10] */
    edx = MEM32(ebp + (-0x8)); /* 0x1505464C: mov edx, dword ptr [ebp - 8] */
L_1505464F:
    ecx = MEM32(ebp + (-0xC)); /* 0x1505464F: mov ecx, dword ptr [ebp - 0xc] */
    eax = ecx; /* 0x15054652: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x15054654: sub eax, edx */
    _flag_k = FK_CMP;
    /* test LO8(eax), 1 */ /* 0x15054656: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15054667; /* 0x15054658: je 0x15054667 */
L_1505465A:
    edi = ecx; /* 0x1505465A: mov edi, ecx */
    MEM32(ebp + (-0x4)) = 1; /* 0x1505465C: mov dword ptr [ebp - 4], 1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x15054663: inc ebx */
    _flag_k = FK_INC;
    MEM8(edi) = (uint8_t)(0); /* 0x15054664: mov byte ptr [edi], 0 */
L_15054667:
    eax = MEM32(ebp + 0x14); /* 0x15054667: mov eax, dword ptr [ebp + 0x14] */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1505466A: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15054687; /* 0x1505466D: jne 0x15054687 */
L_1505466F:
    ecx = MEM32(ebp + 0x10); /* 0x1505466F: mov ecx, dword ptr [ebp + 0x10] */
L_15054672:
    SET_LO8(eax, MEM8(ecx)); /* 0x15054672: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15054674: inc ecx */
    _flag_k = FK_INC;
    MEM8(edi) = (uint8_t)(LO8(eax)); /* 0x15054675: mov byte ptr [edi], al */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x15054677: inc edi */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x15054678: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15054703; /* 0x1505467A: je 0x15054703 */
L_15054680:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 1; /* 0x15054680: sub ebx, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_15054672; /* 0x15054683: jne 0x15054672 */
L_15054685:
    goto L_15054703; /* 0x15054685: jmp 0x15054703 */
L_15054687:
    /* test eax, eax */ /* 0x15054687: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15054700; /* 0x15054689: je 0x15054700 */
L_1505468B:
    ecx = MEM32(ebp + 0x10); /* 0x1505468B: mov ecx, dword ptr [ebp + 0x10] */
L_1505468E:
    eax = (uint32_t)MEM8(ecx); /* 0x1505468E: movzx eax, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15054691: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0xC)) = ecx; /* 0x15054692: mov dword ptr [ebp - 0xc], ecx */
    ecx = ebp + (-0x20); /* 0x15054695: lea ecx, [ebp - 0x20] */
    PUSH32(esp, ecx); /* 0x15054698: push ecx */
    PUSH32(esp, eax); /* 0x15054699: push eax */
    RECOMP_CALL(sub_15050570); /* 0x1505469A: call 0x15050570 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505469F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x150546A0: pop ecx */
    ecx = MEM32(ebp + (-0xC)); /* 0x150546A1: mov ecx, dword ptr [ebp - 0xc] */
    /* test eax, eax */ /* 0x150546A4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150546CA; /* 0x150546A6: je 0x150546ca */
L_150546A8:
    /* cmp MEM8(ecx), 0 */ /* 0x150546A8: cmp byte ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150546EF; /* 0x150546AB: je 0x150546ef */
L_150546AD:
    /* cmp ebx, 2 */ /* 0x150546AD: cmp ebx, 2 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_150546EB; /* 0x150546B0: jbe 0x150546eb */
L_150546B2:
    eax = MEM32(ebp + 0x10); /* 0x150546B2: mov eax, dword ptr [ebp + 0x10] */
    SET_LO8(eax, MEM8(eax)); /* 0x150546B5: mov al, byte ptr [eax] */
    MEM8(edi) = (uint8_t)(LO8(eax)); /* 0x150546B7: mov byte ptr [edi], al */
    SET_LO8(eax, MEM8(ecx)); /* 0x150546B9: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x150546BB: inc ecx */
    _flag_k = FK_INC;
    MEM8(edi + 0x1) = (uint8_t)(LO8(eax)); /* 0x150546BC: mov byte ptr [edi + 1], al */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x150546BF: add edi, 2 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x10) = ecx; /* 0x150546C2: mov dword ptr [ebp + 0x10], ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 2; /* 0x150546C5: sub ebx, 2 */
    _flag_k = FK_CMP;
    goto L_150546DE; /* 0x150546C8: jmp 0x150546de */
L_150546CA:
    eax = MEM32(ebp + 0x10); /* 0x150546CA: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebp + 0x10) = ecx; /* 0x150546CD: mov dword ptr [ebp + 0x10], ecx */
    SET_LO8(eax, MEM8(eax)); /* 0x150546D0: mov al, byte ptr [eax] */
    MEM8(edi) = (uint8_t)(LO8(eax)); /* 0x150546D2: mov byte ptr [edi], al */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x150546D4: inc edi */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x150546D5: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_150546F9; /* 0x150546D7: je 0x150546f9 */
L_150546D9:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 1; /* 0x150546D9: sub ebx, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_150546F9; /* 0x150546DC: je 0x150546f9 */
L_150546DE:
    eax = MEM32(ebp + 0x14); /* 0x150546DE: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x150546E1: sub eax, 1 */
    _flag_k = FK_CMP;
    MEM32(ebp + 0x14) = eax; /* 0x150546E4: mov dword ptr [ebp + 0x14], eax */
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1505468E; /* 0x150546E7: jne 0x1505468e */
L_150546E9:
    goto L_150546FC; /* 0x150546E9: jmp 0x150546fc */
L_150546EB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x150546EB: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_150546F9; /* 0x150546ED: jmp 0x150546f9 */
L_150546EF:
    MEM8(edi) = (uint8_t)(0); /* 0x150546EF: mov byte ptr [edi], 0 */
    MEM32(ebp + (-0x4)) = 1; /* 0x150546F2: mov dword ptr [ebp - 4], 1 */
L_150546F9:
    eax = MEM32(ebp + 0x14); /* 0x150546F9: mov eax, dword ptr [ebp + 0x14] */
L_150546FC:
    /* test eax, eax */ /* 0x150546FC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15054703; /* 0x150546FE: jne 0x15054703 */
L_15054700:
    MEM8(edi) = (uint8_t)(0); /* 0x15054700: mov byte ptr [edi], 0 */
L_15054703:
    /* test ebx, ebx */ /* 0x15054703: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505477F; /* 0x15054705: jne 0x1505477f */
L_15054707:
    /* cmp MEM32(ebp + 0x14), 0xFFFFFFFFu */ /* 0x15054707: cmp dword ptr [ebp + 0x14], -1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15054762; /* 0x1505470B: jne 0x15054762 */
L_1505470D:
    /* cmp MEM32(ebp + (-0x4)), ebx */ /* 0x1505470D: cmp dword ptr [ebp - 4], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505471D; /* 0x15054710: je 0x1505471d */
L_15054712:
    RECOMP_CALL(sub_15036430); /* 0x15054712: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x2Au; /* 0x15054717: mov dword ptr [eax], 0x2a */
L_1505471D:
    ecx = MEM32(ebp + 0xC); /* 0x1505471D: mov ecx, dword ptr [ebp + 0xc] */
    /* cmp ecx, 1 */ /* 0x15054720: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_15054758; /* 0x15054723: jbe 0x15054758 */
L_15054725:
    ebx = ecx + (-0x2); /* 0x15054725: lea ebx, [ecx - 2] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + esi; /* 0x15054728: add ebx, esi */
    _flag_k = FK_ADD;
    edi = ebx; /* 0x1505472A: mov edi, ebx */
    /* cmp ebx, esi */ /* 0x1505472C: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1505474B; /* 0x1505472E: jb 0x1505474b */
L_15054730:
    eax = (uint32_t)MEM8(edi); /* 0x15054730: movzx eax, byte ptr [edi] */
    ecx = ebp + (-0x20); /* 0x15054733: lea ecx, [ebp - 0x20] */
    PUSH32(esp, ecx); /* 0x15054736: push ecx */
    PUSH32(esp, eax); /* 0x15054737: push eax */
    RECOMP_CALL(sub_15050570); /* 0x15054738: call 0x15050570 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505473D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1505473E: pop ecx */
    /* test eax, eax */ /* 0x1505473F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15054748; /* 0x15054741: je 0x15054748 */
L_15054743:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x15054743: dec edi */
    _flag_k = FK_DEC;
    /* cmp edi, esi */ /* 0x15054744: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_15054730; /* 0x15054746: jae 0x15054730 */
L_15054748:
    ecx = MEM32(ebp + 0xC); /* 0x15054748: mov ecx, dword ptr [ebp + 0xc] */
L_1505474B:
    eax = ebx; /* 0x1505474B: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x1505474D: sub eax, edi */
    _flag_k = FK_CMP;
    /* test LO8(eax), 1 */ /* 0x1505474F: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15054758; /* 0x15054751: je 0x15054758 */
L_15054753:
    MEM8(ebx) = (uint8_t)(0); /* 0x15054753: mov byte ptr [ebx], 0 */
    goto L_1505475D; /* 0x15054756: jmp 0x1505475d */
L_15054758:
    MEM8(esi + ecx + (-0x1)) = (uint8_t)(0); /* 0x15054758: mov byte ptr [esi + ecx - 1], 0 */
L_1505475D:
    PUSH32(esp, 0x50u); /* 0x1505475D: push 0x50 */
    esi = POP32_VAL(esp); /* 0x1505475F: pop esi */
    goto L_15054793; /* 0x15054760: jmp 0x15054793 */
L_15054762:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15054762: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x15054764: mov byte ptr [esi], bl */
    RECOMP_CALL(sub_15036430); /* 0x15054766: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x22u); /* 0x1505476B: push 0x22 */
L_1505476D:
    esi = POP32_VAL(esp); /* 0x1505476D: pop esi */
    PUSH32(esp, ebx); /* 0x1505476E: push ebx */
    PUSH32(esp, ebx); /* 0x1505476F: push ebx */
    PUSH32(esp, ebx); /* 0x15054770: push ebx */
    PUSH32(esp, ebx); /* 0x15054771: push ebx */
    PUSH32(esp, ebx); /* 0x15054772: push ebx */
    MEM32(eax) = esi; /* 0x15054773: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1505A110); /* 0x15054775: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505477A: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_15054793; /* 0x1505477D: jmp 0x15054793 */
L_1505477F:
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x1505477F: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15054791; /* 0x15054783: je 0x15054791 */
L_15054785:
    RECOMP_CALL(sub_15036430); /* 0x15054785: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x2Au); /* 0x1505478A: push 0x2a */
    esi = POP32_VAL(esp); /* 0x1505478C: pop esi */
    MEM32(eax) = esi; /* 0x1505478D: mov dword ptr [eax], esi */
    goto L_15054793; /* 0x1505478F: jmp 0x15054793 */
L_15054791:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15054791: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_15054793:
    /* cmp MEM8(ebp + (-0x14)), 0 */ /* 0x15054793: cmp byte ptr [ebp - 0x14], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x14))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150545C4; /* 0x15054797: je 0x150545c4 */
L_1505479D:
    ecx = MEM32(ebp + (-0x18)); /* 0x1505479D: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x150547A0: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_150545C4; /* 0x150547A4: jmp 0x150545c4 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_150547B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150547B0u);

L_150547B0:
    edi = edi; /* 0x150547B0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150547B2: push ebp */
    ebp = esp; /* 0x150547B3: mov ebp, esp */
    PUSH32(esp, 0); /* 0x150547B5: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150547B7: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150547BA: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_150547D0); /* 0x150547BD: call 0x150547d0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x150547C2: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x150547C5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150547C6: ret  */
    RECOMP_REGS_OUT();
}

void sub_150547D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150547D0u);

L_150547D0:
    edi = edi; /* 0x150547D0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150547D2: push ebp */
    ebp = esp; /* 0x150547D3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x150547D5: sub esp, 0x10 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x10); /* 0x150547D8: lea ecx, [ebp - 0x10] */
    PUSH32(esp, esi); /* 0x150547DB: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x150547DC: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1502F870); /* 0x150547DF: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0x8); /* 0x150547E4: mov edx, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0xC); /* 0x150547E7: mov ecx, dword ptr [ebp + 0xc] */
    /* test edx, edx */ /* 0x150547EA: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505480E; /* 0x150547EC: jne 0x1505480e */
L_150547EE:
    /* test ecx, ecx */ /* 0x150547EE: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505480E; /* 0x150547F0: je 0x1505480e */
L_150547F2:
    RECOMP_CALL(sub_15036430); /* 0x150547F2: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x150547F7: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x150547F9: push esi */
    PUSH32(esp, esi); /* 0x150547FA: push esi */
    PUSH32(esp, esi); /* 0x150547FB: push esi */
    PUSH32(esp, esi); /* 0x150547FC: push esi */
    PUSH32(esp, esi); /* 0x150547FD: push esi */
    MEM32(eax) = 0x16u; /* 0x150547FE: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x15054804: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15054809: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_1505483D; /* 0x1505480C: jmp 0x1505483d */
L_1505480E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1505480E: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x15054810: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505483D; /* 0x15054812: je 0x1505483d */
L_15054814:
    PUSH32(esp, edi); /* 0x15054814: push edi */
    edi = MEM32(ebp + (-0xC)); /* 0x15054815: mov edi, dword ptr [ebp - 0xc] */
L_15054818:
    SET_LO8(eax, MEM8(edx)); /* 0x15054818: mov al, byte ptr [edx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1505481A: dec ecx */
    _flag_k = FK_DEC;
    /* test LO8(eax), LO8(eax) */ /* 0x1505481B: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505483C; /* 0x1505481D: je 0x1505483c */
L_1505481F:
    eax = (uint32_t)LO8(eax); /* 0x1505481F: movzx eax, al */
    /* test MEM8(eax + edi + 0x1D), 4 */ /* 0x15054822: test byte ptr [eax + edi + 0x1d], 4 */
    _flag_a = (uint32_t)(MEM8(eax + edi + 0x1D)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15054836; /* 0x15054827: je 0x15054836 */
L_15054829:
    eax = ecx; /* 0x15054829: mov eax, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1505482B: dec ecx */
    _flag_k = FK_DEC;
    /* test eax, eax */ /* 0x1505482C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505483C; /* 0x1505482E: je 0x1505483c */
L_15054830:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x15054830: inc edx */
    _flag_k = FK_INC;
    /* cmp MEM8(edx), 0 */ /* 0x15054831: cmp byte ptr [edx], 0 */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505483C; /* 0x15054834: je 0x1505483c */
L_15054836:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15054836: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x15054837: inc edx */
    _flag_k = FK_INC;
    /* test ecx, ecx */ /* 0x15054838: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15054818; /* 0x1505483A: jne 0x15054818 */
L_1505483C:
    edi = POP32_VAL(esp); /* 0x1505483C: pop edi */
L_1505483D:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x1505483D: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505484A; /* 0x15054841: je 0x1505484a */
L_15054843:
    ecx = MEM32(ebp + (-0x8)); /* 0x15054843: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x15054846: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1505484A:
    eax = esi; /* 0x1505484A: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1505484C: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1505484D: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505484E: ret  */
    RECOMP_REGS_OUT();
}

void sub_15054860(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15054860u);

L_15054860:
    edi = edi; /* 0x15054860: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15054862: push ebp */
    ebp = esp; /* 0x15054863: mov ebp, esp */
    PUSH32(esp, 0); /* 0x15054865: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15054867: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1505486A: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1505486D: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15054880); /* 0x15054870: call 0x15054880 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15054875: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15054878: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15054879: ret  */
    RECOMP_REGS_OUT();
}

void sub_15054880(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15054880u);

L_15054880:
    edi = edi; /* 0x15054880: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15054882: push ebp */
    ebp = esp; /* 0x15054883: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x15054885: sub esp, 0x14 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x14); /* 0x15054888: lea ecx, [ebp - 0x14] */
    PUSH32(esp, ebx); /* 0x1505488B: push ebx */
    PUSH32(esp, esi); /* 0x1505488C: push esi */
    PUSH32(esp, edi); /* 0x1505488D: push edi */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1505488E: push dword ptr [ebp + 0x14] */
    RECOMP_CALL(sub_1502F870); /* 0x15054891: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x10); /* 0x15054896: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15054899: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x1505489B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505496D; /* 0x1505489D: je 0x1505496d */
L_150548A3:
    ecx = MEM32(ebp + (-0x10)); /* 0x150548A3: mov ecx, dword ptr [ebp - 0x10] */
    /* cmp MEM32(ecx + 0x8), esi */ /* 0x150548A6: cmp dword ptr [ecx + 8], esi */
    _flag_a = (uint32_t)(MEM32(ecx + 0x8)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150548C1; /* 0x150548A9: jne 0x150548c1 */
L_150548AB:
    PUSH32(esp, eax); /* 0x150548AB: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150548AC: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150548AF: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1508E9E0); /* 0x150548B2: call 0x1508e9e0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x150548B7: add esp, 0xc */
    _flag_k = FK_ADD;
    esi = eax; /* 0x150548BA: mov esi, eax */
    goto L_1505496D; /* 0x150548BC: jmp 0x1505496d */
L_150548C1:
    ebx = MEM32(ebp + 0x8); /* 0x150548C1: mov ebx, dword ptr [ebp + 8] */
    /* test ebx, ebx */ /* 0x150548C4: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150548D2; /* 0x150548C6: je 0x150548d2 */
L_150548C8:
    edi = MEM32(ebp + 0xC); /* 0x150548C8: mov edi, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x4)) = edi; /* 0x150548CB: mov dword ptr [ebp - 4], edi */
    /* test edi, edi */ /* 0x150548CE: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150548F1; /* 0x150548D0: jne 0x150548f1 */
L_150548D2:
    RECOMP_CALL(sub_15036430); /* 0x150548D2: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x150548D7: push esi */
    PUSH32(esp, esi); /* 0x150548D8: push esi */
    PUSH32(esp, esi); /* 0x150548D9: push esi */
    PUSH32(esp, esi); /* 0x150548DA: push esi */
    PUSH32(esp, esi); /* 0x150548DB: push esi */
    MEM32(eax) = 0x16u; /* 0x150548DC: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x150548E2: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150548E7: add esp, 0x14 */
    _flag_k = FK_ADD;
    esi = 0x7FFFFFFFu; /* 0x150548EA: mov esi, 0x7fffffff */
    goto L_1505496D; /* 0x150548EF: jmp 0x1505496d */
L_150548F1:
    SET_LO8(ecx, MEM8(ebx)); /* 0x150548F1: mov cl, byte ptr [ebx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x150548F3: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebp + 0x10) = eax; /* 0x150548F4: mov dword ptr [ebp + 0x10], eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x150548F7: inc ebx */
    _flag_k = FK_INC;
    eax = (uint32_t)LO8(ecx); /* 0x150548F8: movzx eax, cl */
    edx = (uint32_t)LO8(ecx); /* 0x150548FB: movzx edx, cl */
    ecx = MEM32(ebp + (-0x10)); /* 0x150548FE: mov ecx, dword ptr [ebp - 0x10] */
    /* test MEM8(eax + ecx + 0x1D), 4 */ /* 0x15054901: test byte ptr [eax + ecx + 0x1d], 4 */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x1D)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505491F; /* 0x15054906: je 0x1505491f */
L_15054908:
    SET_LO8(eax, MEM8(ebx)); /* 0x15054908: mov al, byte ptr [ebx] */
    /* test LO8(eax), LO8(eax) */ /* 0x1505490A: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15054912; /* 0x1505490C: jne 0x15054912 */
L_1505490E:
    edx = esi; /* 0x1505490E: mov edx, esi */
    goto L_1505491F; /* 0x15054910: jmp 0x1505491f */
L_15054912:
    if (8u) _cf = (((edx) >> 24) & 1u); /* 0x15054912: shl edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((edx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 8u; /* 0x15054912: shl edx, 8 */
    eax = (uint32_t)LO8(eax); /* 0x15054915: movzx eax, al */
    _flag_a = (uint32_t)((LO16(edx) | LO16(eax))) << 16; _flag_b = (uint32_t)((LO16(edx) | LO16(eax))) << 16;
    SET_LO16(edx, LO16(edx) | LO16(eax)); /* 0x15054918: or dx, ax */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1505491B: inc ebx */
    _flag_k = FK_INC;
    edx = (uint32_t)LO16(edx); /* 0x1505491C: movzx edx, dx */
L_1505491F:
    SET_LO8(ecx, MEM8(edi)); /* 0x1505491F: mov cl, byte ptr [edi] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 1; /* 0x15054921: inc dword ptr [ebp - 4] */
    _flag_k = FK_INC;
    eax = (uint32_t)LO8(ecx); /* 0x15054924: movzx eax, cl */
    edi = (uint32_t)LO8(ecx); /* 0x15054927: movzx edi, cl */
    ecx = MEM32(ebp + (-0x10)); /* 0x1505492A: mov ecx, dword ptr [ebp - 0x10] */
    /* test MEM8(eax + ecx + 0x1D), 4 */ /* 0x1505492D: test byte ptr [eax + ecx + 0x1d], 4 */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x1D)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15054951; /* 0x15054932: je 0x15054951 */
L_15054934:
    ecx = MEM32(ebp + (-0x4)); /* 0x15054934: mov ecx, dword ptr [ebp - 4] */
    SET_LO8(eax, MEM8(ecx)); /* 0x15054937: mov al, byte ptr [ecx] */
    /* test LO8(eax), LO8(eax) */ /* 0x15054939: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15054941; /* 0x1505493B: jne 0x15054941 */
L_1505493D:
    edi = esi; /* 0x1505493D: mov edi, esi */
    goto L_15054951; /* 0x1505493F: jmp 0x15054951 */
L_15054941:
    if (8u) _cf = (((edi) >> 24) & 1u); /* 0x15054941: shl edi, 8 */
    if (8u) { _flag_a = recomp_flags_pack((edi << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 8u; /* 0x15054941: shl edi, 8 */
    eax = (uint32_t)LO8(eax); /* 0x15054944: movzx eax, al */
    _flag_a = (uint32_t)((LO16(edi) | LO16(eax))) << 16; _flag_b = (uint32_t)((LO16(edi) | LO16(eax))) << 16;
    SET_LO16(edi, LO16(edi) | LO16(eax)); /* 0x15054947: or di, ax */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1505494A: inc ecx */
    _flag_k = FK_INC;
    edi = (uint32_t)LO16(edi); /* 0x1505494B: movzx edi, di */
    MEM32(ebp + (-0x4)) = ecx; /* 0x1505494E: mov dword ptr [ebp - 4], ecx */
L_15054951:
    /* cmp LO16(edi), LO16(edx) */ /* 0x15054951: cmp di, dx */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15054967; /* 0x15054954: jne 0x15054967 */
L_15054956:
    /* test LO16(edx), LO16(edx) */ /* 0x15054956: test dx, dx */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505496D; /* 0x15054959: je 0x1505496d */
L_1505495B:
    eax = MEM32(ebp + 0x10); /* 0x1505495B: mov eax, dword ptr [ebp + 0x10] */
    edi = MEM32(ebp + (-0x4)); /* 0x1505495E: mov edi, dword ptr [ebp - 4] */
    /* test eax, eax */ /* 0x15054961: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150548F1; /* 0x15054963: jne 0x150548f1 */
L_15054965:
    goto L_1505496D; /* 0x15054965: jmp 0x1505496d */
L_15054967:
    { uint32_t _sa = esi, _sb = esi, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x15054967: sbb esi, esi */
      esi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    esi = esi & 2; /* 0x15054969: and esi, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1505496C: dec esi */
    _flag_k = FK_DEC;
L_1505496D:
    /* cmp MEM8(ebp + (-0x8)), 0 */ /* 0x1505496D: cmp byte ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x8))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505497A; /* 0x15054971: je 0x1505497a */
L_15054973:
    ecx = MEM32(ebp + (-0xC)); /* 0x15054973: mov ecx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x15054976: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1505497A:
    edi = POP32_VAL(esp); /* 0x1505497A: pop edi */
    eax = esi; /* 0x1505497B: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1505497D: pop esi */
    ebx = POP32_VAL(esp); /* 0x1505497E: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1505497F: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15054980: ret  */
    RECOMP_REGS_OUT();
}

void sub_15054990(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15054990u);

L_15054990:
    edi = edi; /* 0x15054990: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15054992: push ebp */
    ebp = esp; /* 0x15054993: mov ebp, esp */
    PUSH32(esp, 0); /* 0x15054995: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15054997: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1505499A: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1505499D: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_150549B0); /* 0x150549A0: call 0x150549b0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x150549A5: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x150549A8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150549A9: ret  */
    RECOMP_REGS_OUT();
}

void sub_150549B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150549B0u);

L_150549B0:
    edi = edi; /* 0x150549B0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150549B2: push ebp */
    ebp = esp; /* 0x150549B3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x150549B5: sub esp, 0x10 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x10); /* 0x150549B8: lea ecx, [ebp - 0x10] */
    PUSH32(esp, ebx); /* 0x150549BB: push ebx */
    PUSH32(esp, edi); /* 0x150549BC: push edi */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x150549BD: push dword ptr [ebp + 0x14] */
    RECOMP_CALL(sub_1502F870); /* 0x150549C0: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + 0x10); /* 0x150549C5: mov ebx, dword ptr [ebp + 0x10] */
    /* test ebx, ebx */ /* 0x150549C8: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150549D3; /* 0x150549CA: jne 0x150549d3 */
L_150549CC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x150549CC: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15054A98; /* 0x150549CE: jmp 0x15054a98 */
L_150549D3:
    ecx = MEM32(ebp + 0x8); /* 0x150549D3: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x150549D6: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150549E0; /* 0x150549D8: je 0x150549e0 */
L_150549DA:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x150549DA: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15054A04; /* 0x150549DE: jne 0x15054a04 */
L_150549E0:
    RECOMP_CALL(sub_15036430); /* 0x150549E0: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x150549E5: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150549EB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x150549ED: push eax */
    PUSH32(esp, eax); /* 0x150549EE: push eax */
    PUSH32(esp, eax); /* 0x150549EF: push eax */
    PUSH32(esp, eax); /* 0x150549F0: push eax */
    PUSH32(esp, eax); /* 0x150549F1: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x150549F2: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150549F7: add esp, 0x14 */
    _flag_k = FK_ADD;
    edi = 0x7FFFFFFFu; /* 0x150549FA: mov edi, 0x7fffffff */
    goto L_15054A98; /* 0x150549FF: jmp 0x15054a98 */
L_15054A04:
    edi = 0x7FFFFFFFu; /* 0x15054A04: mov edi, 0x7fffffff */
    /* cmp ebx, edi */ /* 0x15054A09: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_15054A29; /* 0x15054A0B: jbe 0x15054a29 */
L_15054A0D:
    RECOMP_CALL(sub_15036430); /* 0x15054A0D: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x15054A12: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15054A18: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15054A1A: push eax */
    PUSH32(esp, eax); /* 0x15054A1B: push eax */
    PUSH32(esp, eax); /* 0x15054A1C: push eax */
    PUSH32(esp, eax); /* 0x15054A1D: push eax */
    PUSH32(esp, eax); /* 0x15054A1E: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x15054A1F: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15054A24: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_15054A98; /* 0x15054A27: jmp 0x15054a98 */
L_15054A29:
    eax = MEM32(ebp + (-0xC)); /* 0x15054A29: mov eax, dword ptr [ebp - 0xc] */
    /* cmp MEM32(eax + 0x8), 0 */ /* 0x15054A2C: cmp dword ptr [eax + 8], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15054A46; /* 0x15054A30: jne 0x15054a46 */
L_15054A32:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15054A32: push dword ptr [ebp + 0x14] */
    PUSH32(esp, ebx); /* 0x15054A35: push ebx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15054A36: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x15054A39: push ecx */
    RECOMP_CALL(sub_1508BEA0); /* 0x15054A3A: call 0x1508bea0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15054A3F: add esp, 0x10 */
    _flag_k = FK_ADD;
    edi = eax; /* 0x15054A42: mov edi, eax */
    goto L_15054A98; /* 0x15054A44: jmp 0x15054a98 */
L_15054A46:
    PUSH32(esp, esi); /* 0x15054A46: push esi */
    eax = ebp + (-0x10); /* 0x15054A47: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x15054A4A: push eax */
    PUSH32(esp, ebx); /* 0x15054A4B: push ebx */
    PUSH32(esp, ecx); /* 0x15054A4C: push ecx */
    RECOMP_CALL(sub_15053320); /* 0x15054A4D: call 0x15053320 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x15054A52: mov esi, eax */
    eax = ebp + (-0x10); /* 0x15054A54: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x15054A57: push eax */
    PUSH32(esp, ebx); /* 0x15054A58: push ebx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15054A59: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_15053320); /* 0x15054A5C: call 0x15053320 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC)); /* 0x15054A61: mov ecx, dword ptr [ebp - 0xc] */
    PUSH32(esp, MEM32(ecx + 0x4)); /* 0x15054A64: push dword ptr [ecx + 4] */
    PUSH32(esp, eax); /* 0x15054A67: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15054A68: push dword ptr [ebp + 0xc] */
    eax = ebp + (-0x10); /* 0x15054A6B: lea eax, [ebp - 0x10] */
    PUSH32(esp, esi); /* 0x15054A6E: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15054A6F: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1000u); /* 0x15054A72: push 0x1000 */
    PUSH32(esp, MEM32(ecx + 0xC)); /* 0x15054A77: push dword ptr [ecx + 0xc] */
    PUSH32(esp, eax); /* 0x15054A7A: push eax */
    RECOMP_CALL(sub_150584C0); /* 0x15054A7B: call 0x150584c0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x38u; /* 0x15054A80: add esp, 0x38 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x15054A83: pop esi */
    /* test eax, eax */ /* 0x15054A84: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15054A95; /* 0x15054A86: jne 0x15054a95 */
L_15054A88:
    RECOMP_CALL(sub_15036430); /* 0x15054A88: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x15054A8D: mov dword ptr [eax], 0x16 */
    goto L_15054A98; /* 0x15054A93: jmp 0x15054a98 */
L_15054A95:
    edi = eax + (-0x2); /* 0x15054A95: lea edi, [eax - 2] */
L_15054A98:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x15054A98: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15054AA5; /* 0x15054A9C: je 0x15054aa5 */
L_15054A9E:
    ecx = MEM32(ebp + (-0x8)); /* 0x15054A9E: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x15054AA1: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_15054AA5:
    eax = edi; /* 0x15054AA5: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x15054AA7: pop edi */
    ebx = POP32_VAL(esp); /* 0x15054AA8: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15054AA9: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15054AAA: ret  */
    RECOMP_REGS_OUT();
}

void sub_15054AC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15054AC0u);

L_15054AC0:
    edi = edi; /* 0x15054AC0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15054AC2: push ebp */
    ebp = esp; /* 0x15054AC3: mov ebp, esp */
    PUSH32(esp, 0); /* 0x15054AC5: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15054AC7: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15054ACA: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15054ACD: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15054AE0); /* 0x15054AD0: call 0x15054ae0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15054AD5: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15054AD8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15054AD9: ret  */
    RECOMP_REGS_OUT();
}

void sub_15054AE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15054AE0u);

L_15054AE0:
    edi = edi; /* 0x15054AE0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15054AE2: push ebp */
    ebp = esp; /* 0x15054AE3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x15054AE5: sub esp, 0x20 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x15054AE8: push ebx */
    PUSH32(esp, esi); /* 0x15054AE9: push esi */
    esi = MEM32(ebp + 0x8); /* 0x15054AEA: mov esi, dword ptr [ebp + 8] */
    ecx = ebp + (-0x20); /* 0x15054AED: lea ecx, [ebp - 0x20] */
    PUSH32(esp, edi); /* 0x15054AF0: push edi */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15054AF1: push dword ptr [ebp + 0x14] */
    MEM32(ebp + (-0x10)) = esi; /* 0x15054AF4: mov dword ptr [ebp - 0x10], esi */
    RECOMP_CALL(sub_1502F870); /* 0x15054AF7: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x10); /* 0x15054AFC: mov ecx, dword ptr [ebp + 0x10] */
    /* test esi, esi */ /* 0x15054AFF: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15054B07; /* 0x15054B01: jne 0x15054b07 */
L_15054B03:
    /* test ecx, ecx */ /* 0x15054B03: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15054B12; /* 0x15054B05: jne 0x15054b12 */
L_15054B07:
    edx = MEM32(ebp + 0xC); /* 0x15054B07: mov edx, dword ptr [ebp + 0xc] */
    /* test edx, edx */ /* 0x15054B0A: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15054B2E; /* 0x15054B0C: jne 0x15054b2e */
L_15054B0E:
    /* test ecx, ecx */ /* 0x15054B0E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15054B2E; /* 0x15054B10: je 0x15054b2e */
L_15054B12:
    RECOMP_CALL(sub_15036430); /* 0x15054B12: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15054B17: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x15054B19: push ebx */
    PUSH32(esp, ebx); /* 0x15054B1A: push ebx */
    PUSH32(esp, ebx); /* 0x15054B1B: push ebx */
    PUSH32(esp, ebx); /* 0x15054B1C: push ebx */
    PUSH32(esp, ebx); /* 0x15054B1D: push ebx */
    MEM32(eax) = 0x16u; /* 0x15054B1E: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x15054B24: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15054B29: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_15054B8D; /* 0x15054B2C: jmp 0x15054b8d */
L_15054B2E:
    edi = MEM32(ebp + (-0x1C)); /* 0x15054B2E: mov edi, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15054B31: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi + 0x8), ebx */ /* 0x15054B33: cmp dword ptr [edi + 8], ebx */
    _flag_a = (uint32_t)(MEM32(edi + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15054BA5; /* 0x15054B36: jne 0x15054ba5 */
L_15054B38:
    PUSH32(esp, ecx); /* 0x15054B38: push ecx */
    PUSH32(esp, edx); /* 0x15054B39: push edx */
    PUSH32(esp, esi); /* 0x15054B3A: push esi */
    RECOMP_CALL(sub_1508EA90); /* 0x15054B3B: call 0x1508ea90 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15054B40: add esp, 0xc */
    _flag_k = FK_ADD;
    ebx = eax; /* 0x15054B43: mov ebx, eax */
    goto L_15054B8D; /* 0x15054B45: jmp 0x15054b8d */
L_15054B47:
    SET_LO8(eax, MEM8(edx)); /* 0x15054B47: mov al, byte ptr [edx] */
    edi = esi + 0x1; /* 0x15054B49: lea edi, [esi + 1] */
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(eax)); /* 0x15054B4C: mov byte ptr [ebp - 1], al */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x15054B4F: dec ecx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x8)) = edi; /* 0x15054B50: mov dword ptr [ebp - 8], edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x15054B53: inc edx */
    _flag_k = FK_INC;
    edi = MEM32(ebp + (-0x1C)); /* 0x15054B54: mov edi, dword ptr [ebp - 0x1c] */
    eax = (uint32_t)LO8(eax); /* 0x15054B57: movzx eax, al */
    MEM32(ebp + (-0xC)) = esi; /* 0x15054B5A: mov dword ptr [ebp - 0xc], esi */
    /* test MEM8(eax + edi + 0x1D), 4 */ /* 0x15054B5D: test byte ptr [eax + edi + 0x1d], 4 */
    _flag_a = (uint32_t)(MEM8(eax + edi + 0x1D)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    SET_LO8(eax, MEM8(ebp + (-0x1))); /* 0x15054B62: mov al, byte ptr [ebp - 1] */
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x15054B65: mov byte ptr [esi], al */
    esi = MEM32(ebp + (-0x8)); /* 0x15054B67: mov esi, dword ptr [ebp - 8] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_15054BA1; /* 0x15054B6A: je 0x15054ba1 */
L_15054B6C:
    SET_LO8(eax, MEM8(edx)); /* 0x15054B6C: mov al, byte ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x15054B6E: inc edx */
    _flag_k = FK_INC;
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x15054B6F: mov byte ptr [esi], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15054B71: inc esi */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x15054B72: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15054BA5; /* 0x15054B74: jne 0x15054ba5 */
L_15054B76:
    eax = MEM32(ebp + (-0xC)); /* 0x15054B76: mov eax, dword ptr [ebp - 0xc] */
    MEM8(eax) = (uint8_t)(LO8(ebx)); /* 0x15054B79: mov byte ptr [eax], bl */
L_15054B7B:
    /* test ecx, ecx */ /* 0x15054B7B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15054B8A; /* 0x15054B7D: je 0x15054b8a */
L_15054B7F:
    PUSH32(esp, ecx); /* 0x15054B7F: push ecx */
    PUSH32(esp, ebx); /* 0x15054B80: push ebx */
    PUSH32(esp, esi); /* 0x15054B81: push esi */
    RECOMP_CALL(sub_1508E3D0); /* 0x15054B82: call 0x1508e3d0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15054B87: add esp, 0xc */
    _flag_k = FK_ADD;
L_15054B8A:
    ebx = MEM32(ebp + (-0x10)); /* 0x15054B8A: mov ebx, dword ptr [ebp - 0x10] */
L_15054B8D:
    /* cmp MEM8(ebp + (-0x14)), 0 */ /* 0x15054B8D: cmp byte ptr [ebp - 0x14], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x14))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15054B9A; /* 0x15054B91: je 0x15054b9a */
L_15054B93:
    ecx = MEM32(ebp + (-0x18)); /* 0x15054B93: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x15054B96: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_15054B9A:
    edi = POP32_VAL(esp); /* 0x15054B9A: pop edi */
    esi = POP32_VAL(esp); /* 0x15054B9B: pop esi */
    eax = ebx; /* 0x15054B9C: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x15054B9E: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15054B9F: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15054BA0: ret  */
L_15054BA1:
    /* test LO8(eax), LO8(eax) */ /* 0x15054BA1: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15054B7B; /* 0x15054BA3: je 0x15054b7b */
L_15054BA5:
    /* test ecx, ecx */ /* 0x15054BA5: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15054B47; /* 0x15054BA7: jne 0x15054b47 */
L_15054BA9:
    RECOMP_BACKEDGE();
    goto L_15054B8A; /* 0x15054BA9: jmp 0x15054b8a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_15054BC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15054BC0u);

L_15054BC0:
    edi = edi; /* 0x15054BC0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15054BC2: push ebp */
    ebp = esp; /* 0x15054BC3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x15054BC5: sub esp, 0xc */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x14); /* 0x15054BC8: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, ebx); /* 0x15054BCB: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15054BCC: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = ebx; /* 0x15054BCE: mov edx, ebx */
    MEM32(ebp + (-0x8)) = edx; /* 0x15054BD0: mov dword ptr [ebp - 8], edx */
    PUSH32(esp, esi); /* 0x15054BD3: push esi */
    esi = MEM32(ebp + 0x8); /* 0x15054BD4: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x15054BD7: push edi */
    /* test eax, eax */ /* 0x15054BD8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15054C03; /* 0x15054BDA: jne 0x15054c03 */
L_15054BDC:
    /* test esi, esi */ /* 0x15054BDC: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15054C07; /* 0x15054BDE: jne 0x15054c07 */
L_15054BE0:
    /* cmp MEM32(ebp + 0xC), edx */ /* 0x15054BE0: cmp dword ptr [ebp + 0xc], edx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15054C14; /* 0x15054BE3: je 0x15054c14 */
L_15054BE5:
    RECOMP_CALL(sub_15036430); /* 0x15054BE5: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x15054BEA: push 0x16 */
    esi = POP32_VAL(esp); /* 0x15054BEC: pop esi */
    PUSH32(esp, ebx); /* 0x15054BED: push ebx */
    PUSH32(esp, ebx); /* 0x15054BEE: push ebx */
    PUSH32(esp, ebx); /* 0x15054BEF: push ebx */
    PUSH32(esp, ebx); /* 0x15054BF0: push ebx */
    MEM32(eax) = esi; /* 0x15054BF1: mov dword ptr [eax], esi */
    PUSH32(esp, ebx); /* 0x15054BF3: push ebx */
L_15054BF4:
    RECOMP_CALL(sub_1505A110); /* 0x15054BF4: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x15054BF9: mov eax, esi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15054BFB: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15054BFE:
    edi = POP32_VAL(esp); /* 0x15054BFE: pop edi */
    esi = POP32_VAL(esp); /* 0x15054BFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x15054C00: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15054C01: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15054C02: ret  */
L_15054C03:
    /* test esi, esi */ /* 0x15054C03: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15054BE5; /* 0x15054C05: je 0x15054be5 */
L_15054C07:
    ecx = MEM32(ebp + 0xC); /* 0x15054C07: mov ecx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x15054C0A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15054BE5; /* 0x15054C0C: je 0x15054be5 */
L_15054C0E:
    /* test eax, eax */ /* 0x15054C0E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15054C18; /* 0x15054C10: jne 0x15054c18 */
L_15054C12:
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x15054C12: mov byte ptr [esi], bl */
L_15054C14:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15054C14: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_15054BFE; /* 0x15054C16: jmp 0x15054bfe */
L_15054C18:
    ebx = MEM32(ebp + 0x10); /* 0x15054C18: mov ebx, dword ptr [ebp + 0x10] */
    /* test ebx, ebx */ /* 0x15054C1B: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15054C2D; /* 0x15054C1D: jne 0x15054c2d */
L_15054C1F:
    MEM8(esi) = (uint8_t)(LO8(edx)); /* 0x15054C1F: mov byte ptr [esi], dl */
    RECOMP_CALL(sub_15036430); /* 0x15054C21: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x15054C26: push 0x16 */
    goto L_15054D2E; /* 0x15054C28: jmp 0x15054d2e */
L_15054C2D:
    MEM32(ebp + (-0x4)) = ecx; /* 0x15054C2D: mov dword ptr [ebp - 4], ecx */
    edi = esi; /* 0x15054C30: mov edi, esi */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x15054C32: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15054C4B; /* 0x15054C35: jne 0x15054c4b */
L_15054C37:
    SET_LO8(eax, MEM8(ebx)); /* 0x15054C37: mov al, byte ptr [ebx] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x15054C39: inc ebx */
    _flag_k = FK_INC;
    MEM8(edi) = (uint8_t)(LO8(eax)); /* 0x15054C3A: mov byte ptr [edi], al */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x15054C3C: inc edi */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x15054C3D: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15054C14; /* 0x15054C3F: je 0x15054c14 */
L_15054C41:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x15054C41: sub ecx, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_15054C37; /* 0x15054C44: jne 0x15054c37 */
L_15054C46:
    ebx = MEM32(ebp + 0x14); /* 0x15054C46: mov ebx, dword ptr [ebp + 0x14] */
    goto L_15054CB5; /* 0x15054C49: jmp 0x15054cb5 */
L_15054C4B:
    eax = ebx + 0x1; /* 0x15054C4B: lea eax, [ebx + 1] */
    MEM32(ebp + (-0xC)) = eax; /* 0x15054C4E: mov dword ptr [ebp - 0xc], eax */
    eax = (uint32_t)MEM8(ebx); /* 0x15054C51: movzx eax, byte ptr [ebx] */
    PUSH32(esp, eax); /* 0x15054C54: push eax */
    RECOMP_CALL(sub_15050550); /* 0x15054C55: call 0x15050550 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15054C5A: pop ecx */
    /* test eax, eax */ /* 0x15054C5B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15054C8E; /* 0x15054C5D: je 0x15054c8e */
L_15054C5F:
    edx = MEM32(ebp + (-0xC)); /* 0x15054C5F: mov edx, dword ptr [ebp - 0xc] */
    ecx = MEM32(ebp + (-0x4)); /* 0x15054C62: mov ecx, dword ptr [ebp - 4] */
    /* cmp MEM8(edx), 0 */ /* 0x15054C65: cmp byte ptr [edx], 0 */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15054D14; /* 0x15054C68: je 0x15054d14 */
L_15054C6E:
    /* cmp ecx, 2 */ /* 0x15054C6E: cmp ecx, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_15054D0E; /* 0x15054C71: jbe 0x15054d0e */
L_15054C77:
    SET_LO8(eax, MEM8(ebx)); /* 0x15054C77: mov al, byte ptr [ebx] */
    ebx = edx; /* 0x15054C79: mov ebx, edx */
    MEM8(edi) = (uint8_t)(LO8(eax)); /* 0x15054C7B: mov byte ptr [edi], al */
    SET_LO8(eax, MEM8(ebx)); /* 0x15054C7D: mov al, byte ptr [ebx] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x15054C7F: inc ebx */
    _flag_k = FK_INC;
    MEM8(edi + 0x1) = (uint8_t)(LO8(eax)); /* 0x15054C80: mov byte ptr [edi + 1], al */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x15054C83: add edi, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 2; /* 0x15054C86: sub ecx, 2 */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = ecx; /* 0x15054C89: mov dword ptr [ebp - 4], ecx */
    goto L_15054CA0; /* 0x15054C8C: jmp 0x15054ca0 */
L_15054C8E:
    SET_LO8(eax, MEM8(ebx)); /* 0x15054C8E: mov al, byte ptr [ebx] */
    ebx = MEM32(ebp + (-0xC)); /* 0x15054C90: mov ebx, dword ptr [ebp - 0xc] */
    MEM8(edi) = (uint8_t)(LO8(eax)); /* 0x15054C93: mov byte ptr [edi], al */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x15054C95: inc edi */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x15054C96: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15054CA6; /* 0x15054C98: je 0x15054ca6 */
L_15054C9A:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) - 1; /* 0x15054C9A: sub dword ptr [ebp - 4], 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15054CA6; /* 0x15054C9E: je 0x15054ca6 */
L_15054CA0:
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) - 1; /* 0x15054CA0: sub dword ptr [ebp + 0x14], 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_15054C4B; /* 0x15054CA4: jne 0x15054c4b */
L_15054CA6:
    ecx = MEM32(ebp + (-0x4)); /* 0x15054CA6: mov ecx, dword ptr [ebp - 4] */
    edx = MEM32(ebp + (-0x8)); /* 0x15054CA9: mov edx, dword ptr [ebp - 8] */
L_15054CAC:
    ebx = MEM32(ebp + 0x14); /* 0x15054CAC: mov ebx, dword ptr [ebp + 0x14] */
    /* test ebx, ebx */ /* 0x15054CAF: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15054CB5; /* 0x15054CB1: jne 0x15054cb5 */
L_15054CB3:
    MEM8(edi) = (uint8_t)(LO8(ebx)); /* 0x15054CB3: mov byte ptr [edi], bl */
L_15054CB5:
    /* test ecx, ecx */ /* 0x15054CB5: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15054D3D; /* 0x15054CB7: jne 0x15054d3d */
L_15054CBD:
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x15054CBD: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15054D24; /* 0x15054CC0: jne 0x15054d24 */
L_15054CC2:
    /* test edx, edx */ /* 0x15054CC2: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15054CD1; /* 0x15054CC4: je 0x15054cd1 */
L_15054CC6:
    RECOMP_CALL(sub_15036430); /* 0x15054CC6: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x2Au; /* 0x15054CCB: mov dword ptr [eax], 0x2a */
L_15054CD1:
    eax = MEM32(ebp + 0xC); /* 0x15054CD1: mov eax, dword ptr [ebp + 0xc] */
    /* cmp eax, 1 */ /* 0x15054CD4: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_15054D1D; /* 0x15054CD7: jbe 0x15054d1d */
L_15054CD9:
    ebx = eax + (-0x2); /* 0x15054CD9: lea ebx, [eax - 2] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + esi; /* 0x15054CDC: add ebx, esi */
    _flag_k = FK_ADD;
    edi = ebx; /* 0x15054CDE: mov edi, ebx */
    /* cmp ebx, esi */ /* 0x15054CE0: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_15054CFA; /* 0x15054CE2: jb 0x15054cfa */
L_15054CE4:
    eax = (uint32_t)MEM8(edi); /* 0x15054CE4: movzx eax, byte ptr [edi] */
    PUSH32(esp, eax); /* 0x15054CE7: push eax */
    RECOMP_CALL(sub_15050550); /* 0x15054CE8: call 0x15050550 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15054CED: pop ecx */
    /* test eax, eax */ /* 0x15054CEE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15054CF7; /* 0x15054CF0: je 0x15054cf7 */
L_15054CF2:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x15054CF2: dec edi */
    _flag_k = FK_DEC;
    /* cmp edi, esi */ /* 0x15054CF3: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_15054CE4; /* 0x15054CF5: jae 0x15054ce4 */
L_15054CF7:
    eax = MEM32(ebp + 0xC); /* 0x15054CF7: mov eax, dword ptr [ebp + 0xc] */
L_15054CFA:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - edi; /* 0x15054CFA: sub ebx, edi */
    _flag_k = FK_CMP;
    /* test LO8(ebx), 1 */ /* 0x15054CFC: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15054D1D; /* 0x15054CFF: je 0x15054d1d */
L_15054D01:
    MEM8(esi + eax + (-0x2)) = (uint8_t)(0); /* 0x15054D01: mov byte ptr [esi + eax - 2], 0 */
L_15054D06:
    PUSH32(esp, 0x50u); /* 0x15054D06: push 0x50 */
    eax = POP32_VAL(esp); /* 0x15054D08: pop eax */
    RECOMP_BACKEDGE();
    goto L_15054BFE; /* 0x15054D09: jmp 0x15054bfe */
L_15054D0E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15054D0E: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = ecx; /* 0x15054D10: mov edx, ecx */
    RECOMP_BACKEDGE();
    goto L_15054CAC; /* 0x15054D12: jmp 0x15054cac */
L_15054D14:
    MEM8(edi) = (uint8_t)(0); /* 0x15054D14: mov byte ptr [edi], 0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x15054D17: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x15054D19: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x15054D1A: inc edx */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_15054CAC; /* 0x15054D1B: jmp 0x15054cac */
L_15054D1D:
    MEM8(esi + eax + (-0x1)) = (uint8_t)(0); /* 0x15054D1D: mov byte ptr [esi + eax - 1], 0 */
    RECOMP_BACKEDGE();
    goto L_15054D06; /* 0x15054D22: jmp 0x15054d06 */
L_15054D24:
    MEM8(esi) = (uint8_t)(0); /* 0x15054D24: mov byte ptr [esi], 0 */
    RECOMP_CALL(sub_15036430); /* 0x15054D27: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x22u); /* 0x15054D2C: push 0x22 */
L_15054D2E:
    esi = POP32_VAL(esp); /* 0x15054D2E: pop esi */
    MEM32(eax) = esi; /* 0x15054D2F: mov dword ptr [eax], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15054D31: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15054D33: push eax */
    PUSH32(esp, eax); /* 0x15054D34: push eax */
    PUSH32(esp, eax); /* 0x15054D35: push eax */
    PUSH32(esp, eax); /* 0x15054D36: push eax */
    PUSH32(esp, eax); /* 0x15054D37: push eax */
    RECOMP_BACKEDGE();
    goto L_15054BF4; /* 0x15054D38: jmp 0x15054bf4 */
L_15054D3D:
    /* test edx, edx */ /* 0x15054D3D: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15054C14; /* 0x15054D3F: je 0x15054c14 */
L_15054D45:
    RECOMP_CALL(sub_15036430); /* 0x15054D45: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x2Au); /* 0x15054D4A: push 0x2a */
    ecx = POP32_VAL(esp); /* 0x15054D4C: pop ecx */
    MEM32(eax) = ecx; /* 0x15054D4D: mov dword ptr [eax], ecx */
    eax = ecx; /* 0x15054D4F: mov eax, ecx */
    RECOMP_BACKEDGE();
    goto L_15054BFE; /* 0x15054D51: jmp 0x15054bfe */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_15054D60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15054D60u);

L_15054D60:
    edi = edi; /* 0x15054D60: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15054D62: push ebp */
    ebp = esp; /* 0x15054D63: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x15054D65: sub esp, 0x1c */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x15054D68: push ebx */
    PUSH32(esp, esi); /* 0x15054D69: push esi */
    esi = MEM32(ebp + 0x8); /* 0x15054D6A: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15054D6D: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x15054D6F: push edi */
    edi = MEM32(ebp + 0x14); /* 0x15054D70: mov edi, dword ptr [ebp + 0x14] */
    MEM32(ebp + (-0x8)) = ebx; /* 0x15054D73: mov dword ptr [ebp - 8], ebx */
    /* test edi, edi */ /* 0x15054D76: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15054D87; /* 0x15054D78: jne 0x15054d87 */
L_15054D7A:
    /* test esi, esi */ /* 0x15054D7A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15054D8B; /* 0x15054D7C: jne 0x15054d8b */
L_15054D7E:
    /* cmp MEM32(ebp + 0xC), ebx */ /* 0x15054D7E: cmp dword ptr [ebp + 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15054DA1; /* 0x15054D81: jne 0x15054da1 */
L_15054D83:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15054D83: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15054DBA; /* 0x15054D85: jmp 0x15054dba */
L_15054D87:
    /* test esi, esi */ /* 0x15054D87: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15054DA1; /* 0x15054D89: je 0x15054da1 */
L_15054D8B:
    /* cmp MEM32(ebp + 0xC), ebx */ /* 0x15054D8B: cmp dword ptr [ebp + 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_15054DA1; /* 0x15054D8E: jbe 0x15054da1 */
L_15054D90:
    /* test edi, edi */ /* 0x15054D90: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15054D98; /* 0x15054D92: jne 0x15054d98 */
L_15054D94:
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x15054D94: mov byte ptr [esi], bl */
    RECOMP_BACKEDGE();
    goto L_15054D83; /* 0x15054D96: jmp 0x15054d83 */
L_15054D98:
    ebx = MEM32(ebp + 0x10); /* 0x15054D98: mov ebx, dword ptr [ebp + 0x10] */
    /* test ebx, ebx */ /* 0x15054D9B: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15054DBF; /* 0x15054D9D: jne 0x15054dbf */
L_15054D9F:
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x15054D9F: mov byte ptr [esi], bl */
L_15054DA1:
    RECOMP_CALL(sub_15036430); /* 0x15054DA1: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x15054DA6: push 0x16 */
    esi = POP32_VAL(esp); /* 0x15054DA8: pop esi */
    PUSH32(esp, ebx); /* 0x15054DA9: push ebx */
    PUSH32(esp, ebx); /* 0x15054DAA: push ebx */
    PUSH32(esp, ebx); /* 0x15054DAB: push ebx */
    PUSH32(esp, ebx); /* 0x15054DAC: push ebx */
    PUSH32(esp, ebx); /* 0x15054DAD: push ebx */
    MEM32(eax) = esi; /* 0x15054DAE: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1505A110); /* 0x15054DB0: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15054DB5: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15054DB8:
    eax = esi; /* 0x15054DB8: mov eax, esi */
L_15054DBA:
    edi = POP32_VAL(esp); /* 0x15054DBA: pop edi */
    esi = POP32_VAL(esp); /* 0x15054DBB: pop esi */
    ebx = POP32_VAL(esp); /* 0x15054DBC: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15054DBD: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15054DBE: ret  */
L_15054DBF:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x15054DBF: push dword ptr [ebp + 0x18] */
    ecx = ebp + (-0x1C); /* 0x15054DC2: lea ecx, [ebp - 0x1c] */
    RECOMP_CALL(sub_1502F870); /* 0x15054DC5: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x18)); /* 0x15054DCA: mov eax, dword ptr [ebp - 0x18] */
    /* cmp MEM32(eax + 0x8), 0 */ /* 0x15054DCD: cmp dword ptr [eax + 8], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15054DE8; /* 0x15054DD1: jne 0x15054de8 */
L_15054DD3:
    PUSH32(esp, edi); /* 0x15054DD3: push edi */
    PUSH32(esp, ebx); /* 0x15054DD4: push ebx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15054DD5: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x15054DD8: push esi */
    RECOMP_CALL(sub_1508EBC0); /* 0x15054DD9: call 0x1508ebc0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15054DDE: add esp, 0x10 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x15054DE1: mov esi, eax */
    goto L_15054F1F; /* 0x15054DE3: jmp 0x15054f1f */
L_15054DE8:
    /* cmp MEM32(ebp + 0x14), 0xFFFFFFFFu */ /* 0x15054DE8: cmp dword ptr [ebp + 0x14], -1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = esi; /* 0x15054DEC: mov edi, esi */
    ecx = MEM32(ebp + 0xC); /* 0x15054DEE: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x15054DF1: mov dword ptr [ebp - 4], ecx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_15054E0E; /* 0x15054DF4: jne 0x15054e0e */
L_15054DF6:
    SET_LO8(eax, MEM8(ebx)); /* 0x15054DF6: mov al, byte ptr [ebx] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x15054DF8: inc ebx */
    _flag_k = FK_INC;
    MEM8(edi) = (uint8_t)(LO8(eax)); /* 0x15054DF9: mov byte ptr [edi], al */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x15054DFB: inc edi */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x15054DFC: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15054F1D; /* 0x15054DFE: je 0x15054f1d */
L_15054E04:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x15054E04: sub ecx, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_15054DF6; /* 0x15054E07: jne 0x15054df6 */
L_15054E09:
    ebx = MEM32(ebp + 0x14); /* 0x15054E09: mov ebx, dword ptr [ebp + 0x14] */
    goto L_15054E7A; /* 0x15054E0C: jmp 0x15054e7a */
L_15054E0E:
    eax = (uint32_t)MEM8(ebx); /* 0x15054E0E: movzx eax, byte ptr [ebx] */
    ecx = ebx + 0x1; /* 0x15054E11: lea ecx, [ebx + 1] */
    MEM32(ebp + (-0xC)) = ecx; /* 0x15054E14: mov dword ptr [ebp - 0xc], ecx */
    ecx = ebp + (-0x1C); /* 0x15054E17: lea ecx, [ebp - 0x1c] */
    PUSH32(esp, ecx); /* 0x15054E1A: push ecx */
    PUSH32(esp, eax); /* 0x15054E1B: push eax */
    RECOMP_CALL(sub_15050570); /* 0x15054E1C: call 0x15050570 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15054E21: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15054E22: pop ecx */
    /* test eax, eax */ /* 0x15054E23: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15054E56; /* 0x15054E25: je 0x15054e56 */
L_15054E27:
    edx = MEM32(ebp + (-0xC)); /* 0x15054E27: mov edx, dword ptr [ebp - 0xc] */
    ecx = MEM32(ebp + (-0x4)); /* 0x15054E2A: mov ecx, dword ptr [ebp - 4] */
    /* cmp MEM8(edx), 0 */ /* 0x15054E2D: cmp byte ptr [edx], 0 */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15054ED7; /* 0x15054E30: je 0x15054ed7 */
L_15054E36:
    /* cmp ecx, 2 */ /* 0x15054E36: cmp ecx, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_15054ED3; /* 0x15054E39: jbe 0x15054ed3 */
L_15054E3F:
    SET_LO8(eax, MEM8(ebx)); /* 0x15054E3F: mov al, byte ptr [ebx] */
    ebx = edx; /* 0x15054E41: mov ebx, edx */
    MEM8(edi) = (uint8_t)(LO8(eax)); /* 0x15054E43: mov byte ptr [edi], al */
    SET_LO8(eax, MEM8(ebx)); /* 0x15054E45: mov al, byte ptr [ebx] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x15054E47: inc ebx */
    _flag_k = FK_INC;
    MEM8(edi + 0x1) = (uint8_t)(LO8(eax)); /* 0x15054E48: mov byte ptr [edi + 1], al */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x15054E4B: add edi, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 2; /* 0x15054E4E: sub ecx, 2 */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = ecx; /* 0x15054E51: mov dword ptr [ebp - 4], ecx */
    goto L_15054E68; /* 0x15054E54: jmp 0x15054e68 */
L_15054E56:
    SET_LO8(eax, MEM8(ebx)); /* 0x15054E56: mov al, byte ptr [ebx] */
    ebx = MEM32(ebp + (-0xC)); /* 0x15054E58: mov ebx, dword ptr [ebp - 0xc] */
    MEM8(edi) = (uint8_t)(LO8(eax)); /* 0x15054E5B: mov byte ptr [edi], al */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x15054E5D: inc edi */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x15054E5E: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15054E6E; /* 0x15054E60: je 0x15054e6e */
L_15054E62:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) - 1; /* 0x15054E62: sub dword ptr [ebp - 4], 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15054E6E; /* 0x15054E66: je 0x15054e6e */
L_15054E68:
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) - 1; /* 0x15054E68: sub dword ptr [ebp + 0x14], 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_15054E0E; /* 0x15054E6C: jne 0x15054e0e */
L_15054E6E:
    ecx = MEM32(ebp + (-0x4)); /* 0x15054E6E: mov ecx, dword ptr [ebp - 4] */
L_15054E71:
    ebx = MEM32(ebp + 0x14); /* 0x15054E71: mov ebx, dword ptr [ebp + 0x14] */
    /* test ebx, ebx */ /* 0x15054E74: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15054E7A; /* 0x15054E76: jne 0x15054e7a */
L_15054E78:
    MEM8(edi) = (uint8_t)(LO8(ebx)); /* 0x15054E78: mov byte ptr [edi], bl */
L_15054E7A:
    /* test ecx, ecx */ /* 0x15054E7A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15054F0B; /* 0x15054E7C: jne 0x15054f0b */
L_15054E82:
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x15054E82: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15054EEE; /* 0x15054E85: jne 0x15054eee */
L_15054E87:
    /* cmp MEM32(ebp + (-0x8)), ecx */ /* 0x15054E87: cmp dword ptr [ebp - 8], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15054E97; /* 0x15054E8A: je 0x15054e97 */
L_15054E8C:
    RECOMP_CALL(sub_15036430); /* 0x15054E8C: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x2Au; /* 0x15054E91: mov dword ptr [eax], 0x2a */
L_15054E97:
    eax = MEM32(ebp + 0xC); /* 0x15054E97: mov eax, dword ptr [ebp + 0xc] */
    /* cmp eax, 1 */ /* 0x15054E9A: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_15054EE4; /* 0x15054E9D: jbe 0x15054ee4 */
L_15054E9F:
    ebx = eax + (-0x2); /* 0x15054E9F: lea ebx, [eax - 2] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + esi; /* 0x15054EA2: add ebx, esi */
    _flag_k = FK_ADD;
    edi = ebx; /* 0x15054EA4: mov edi, ebx */
    /* cmp ebx, esi */ /* 0x15054EA6: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_15054EC5; /* 0x15054EA8: jb 0x15054ec5 */
L_15054EAA:
    eax = (uint32_t)MEM8(edi); /* 0x15054EAA: movzx eax, byte ptr [edi] */
    ecx = ebp + (-0x1C); /* 0x15054EAD: lea ecx, [ebp - 0x1c] */
    PUSH32(esp, ecx); /* 0x15054EB0: push ecx */
    PUSH32(esp, eax); /* 0x15054EB1: push eax */
    RECOMP_CALL(sub_15050570); /* 0x15054EB2: call 0x15050570 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15054EB7: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15054EB8: pop ecx */
    /* test eax, eax */ /* 0x15054EB9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15054EC2; /* 0x15054EBB: je 0x15054ec2 */
L_15054EBD:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x15054EBD: dec edi */
    _flag_k = FK_DEC;
    /* cmp edi, esi */ /* 0x15054EBE: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_15054EAA; /* 0x15054EC0: jae 0x15054eaa */
L_15054EC2:
    eax = MEM32(ebp + 0xC); /* 0x15054EC2: mov eax, dword ptr [ebp + 0xc] */
L_15054EC5:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - edi; /* 0x15054EC5: sub ebx, edi */
    _flag_k = FK_CMP;
    /* test LO8(ebx), 1 */ /* 0x15054EC7: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15054EE4; /* 0x15054ECA: je 0x15054ee4 */
L_15054ECC:
    MEM8(esi + eax + (-0x2)) = (uint8_t)(0); /* 0x15054ECC: mov byte ptr [esi + eax - 2], 0 */
    goto L_15054EE9; /* 0x15054ED1: jmp 0x15054ee9 */
L_15054ED3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15054ED3: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_15054E71; /* 0x15054ED5: jmp 0x15054e71 */
L_15054ED7:
    MEM8(edi) = (uint8_t)(0); /* 0x15054ED7: mov byte ptr [edi], 0 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x15054EDA: inc edi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x8)) = 1; /* 0x15054EDB: mov dword ptr [ebp - 8], 1 */
    RECOMP_BACKEDGE();
    goto L_15054E71; /* 0x15054EE2: jmp 0x15054e71 */
L_15054EE4:
    MEM8(esi + eax + (-0x1)) = (uint8_t)(0); /* 0x15054EE4: mov byte ptr [esi + eax - 1], 0 */
L_15054EE9:
    PUSH32(esp, 0x50u); /* 0x15054EE9: push 0x50 */
    esi = POP32_VAL(esp); /* 0x15054EEB: pop esi */
    goto L_15054F1F; /* 0x15054EEC: jmp 0x15054f1f */
L_15054EEE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15054EEE: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x15054EF0: mov byte ptr [esi], bl */
    RECOMP_CALL(sub_15036430); /* 0x15054EF2: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x22u); /* 0x15054EF7: push 0x22 */
    esi = POP32_VAL(esp); /* 0x15054EF9: pop esi */
    PUSH32(esp, ebx); /* 0x15054EFA: push ebx */
    PUSH32(esp, ebx); /* 0x15054EFB: push ebx */
    PUSH32(esp, ebx); /* 0x15054EFC: push ebx */
    PUSH32(esp, ebx); /* 0x15054EFD: push ebx */
    PUSH32(esp, ebx); /* 0x15054EFE: push ebx */
    MEM32(eax) = esi; /* 0x15054EFF: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1505A110); /* 0x15054F01: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15054F06: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_15054F1F; /* 0x15054F09: jmp 0x15054f1f */
L_15054F0B:
    /* cmp MEM32(ebp + (-0x8)), 0 */ /* 0x15054F0B: cmp dword ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15054F1D; /* 0x15054F0F: je 0x15054f1d */
L_15054F11:
    RECOMP_CALL(sub_15036430); /* 0x15054F11: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x2Au); /* 0x15054F16: push 0x2a */
    esi = POP32_VAL(esp); /* 0x15054F18: pop esi */
    MEM32(eax) = esi; /* 0x15054F19: mov dword ptr [eax], esi */
    goto L_15054F1F; /* 0x15054F1B: jmp 0x15054f1f */
L_15054F1D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15054F1D: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_15054F1F:
    /* cmp MEM8(ebp + (-0x10)), 0 */ /* 0x15054F1F: cmp byte ptr [ebp - 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x10))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15054DB8; /* 0x15054F23: je 0x15054db8 */
L_15054F29:
    ecx = MEM32(ebp + (-0x14)); /* 0x15054F29: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x15054F2C: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_15054DB8; /* 0x15054F30: jmp 0x15054db8 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_15054F40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15054F40u);

L_15054F40:
    edi = edi; /* 0x15054F40: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15054F42: push ebp */
    ebp = esp; /* 0x15054F43: mov ebp, esp */
    PUSH32(esp, 0); /* 0x15054F45: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15054F47: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15054F60); /* 0x15054F4A: call 0x15054f60 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15054F4F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15054F50: pop ecx */
    ebp = POP32_VAL(esp); /* 0x15054F51: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15054F52: ret  */
    RECOMP_REGS_OUT();
}

void sub_15054F60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15054F60u);

L_15054F60:
    edi = edi; /* 0x15054F60: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15054F62: push ebp */
    ebp = esp; /* 0x15054F63: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x15054F65: sub esp, 0x10 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x10); /* 0x15054F68: lea ecx, [ebp - 0x10] */
    PUSH32(esp, esi); /* 0x15054F6B: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15054F6C: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15054F6F: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1502F870); /* 0x15054F71: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0x8); /* 0x15054F76: mov edx, dword ptr [ebp + 8] */
    /* test edx, edx */ /* 0x15054F79: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15054F97; /* 0x15054F7B: jne 0x15054f97 */
L_15054F7D:
    RECOMP_CALL(sub_15036430); /* 0x15054F7D: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x15054F82: push esi */
    PUSH32(esp, esi); /* 0x15054F83: push esi */
    PUSH32(esp, esi); /* 0x15054F84: push esi */
    PUSH32(esp, esi); /* 0x15054F85: push esi */
    PUSH32(esp, esi); /* 0x15054F86: push esi */
    MEM32(eax) = 0x16u; /* 0x15054F87: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x15054F8D: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15054F92: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_15054FBB; /* 0x15054F95: jmp 0x15054fbb */
L_15054F97:
    SET_LO8(ecx, MEM8(edx)); /* 0x15054F97: mov cl, byte ptr [edx] */
    eax = MEM32(ebp + (-0xC)); /* 0x15054F99: mov eax, dword ptr [ebp - 0xc] */
    PUSH32(esp, edi); /* 0x15054F9C: push edi */
    edi = (uint32_t)LO8(ecx); /* 0x15054F9D: movzx edi, cl */
    /* test MEM8(edi + eax + 0x1D), 4 */ /* 0x15054FA0: test byte ptr [edi + eax + 0x1d], 4 */
    _flag_a = (uint32_t)(MEM8(edi + eax + 0x1D)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15054FB5; /* 0x15054FA5: je 0x15054fb5 */
L_15054FA7:
    SET_LO8(eax, MEM8(edx + 0x1)); /* 0x15054FA7: mov al, byte ptr [edx + 1] */
    /* test LO8(eax), LO8(eax) */ /* 0x15054FAA: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15054FB5; /* 0x15054FAC: je 0x15054fb5 */
L_15054FAE:
    esi = edi; /* 0x15054FAE: mov esi, edi */
    SET_LO8(ecx, LO8(eax)); /* 0x15054FB0: mov cl, al */
    if (8u) _cf = (((esi) >> 24) & 1u); /* 0x15054FB2: shl esi, 8 */
    if (8u) { _flag_a = recomp_flags_pack((esi << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 8u; /* 0x15054FB2: shl esi, 8 */
L_15054FB5:
    eax = (uint32_t)LO8(ecx); /* 0x15054FB5: movzx eax, cl */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x15054FB8: add esi, eax */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x15054FBA: pop edi */
L_15054FBB:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x15054FBB: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15054FC8; /* 0x15054FBF: je 0x15054fc8 */
L_15054FC1:
    ecx = MEM32(ebp + (-0x8)); /* 0x15054FC1: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x15054FC4: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_15054FC8:
    eax = esi; /* 0x15054FC8: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x15054FCA: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15054FCB: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15054FCC: ret  */
    RECOMP_REGS_OUT();
}

void sub_15054FE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15054FE0u);

L_15054FE0:
    edi = edi; /* 0x15054FE0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15054FE2: push ebp */
    ebp = esp; /* 0x15054FE3: mov ebp, esp */
    PUSH32(esp, 0); /* 0x15054FE5: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15054FE7: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15054FEA: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15054FED: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15055000); /* 0x15054FF0: call 0x15055000 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15054FF5: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15054FF8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15054FF9: ret  */
    RECOMP_REGS_OUT();
}

void sub_15055000(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15055000u);

L_15055000:
    edi = edi; /* 0x15055000: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15055002: push ebp */
    ebp = esp; /* 0x15055003: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x15055005: sub esp, 0x20 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x15055008: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x15055009: mov ebx, dword ptr [ebp + 0x10] */
    /* test ebx, ebx */ /* 0x1505500C: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15055017; /* 0x1505500E: jne 0x15055017 */
L_15055010:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15055010: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1505519E; /* 0x15055012: jmp 0x1505519e */
L_15055017:
    PUSH32(esp, esi); /* 0x15055017: push esi */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15055018: push dword ptr [ebp + 0x14] */
    ecx = ebp + (-0x20); /* 0x1505501B: lea ecx, [ebp - 0x20] */
    RECOMP_CALL(sub_1502F870); /* 0x1505501E: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x1C)); /* 0x15055023: mov edx, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15055026: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x8), esi */ /* 0x15055028: cmp dword ptr [edx + 8], esi */
    _flag_a = (uint32_t)(MEM32(edx + 0x8)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15055043; /* 0x1505502B: jne 0x15055043 */
L_1505502D:
    PUSH32(esp, ebx); /* 0x1505502D: push ebx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1505502E: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15055031: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1508BF80); /* 0x15055034: call 0x1508bf80 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15055039: add esp, 0xc */
    _flag_k = FK_ADD;
    esi = eax; /* 0x1505503C: mov esi, eax */
    goto L_1505518E; /* 0x1505503E: jmp 0x1505518e */
L_15055043:
    eax = MEM32(ebp + 0x8); /* 0x15055043: mov eax, dword ptr [ebp + 8] */
    MEM32(ebp + (-0xC)) = eax; /* 0x15055046: mov dword ptr [ebp - 0xc], eax */
    /* test eax, eax */ /* 0x15055049: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15055057; /* 0x1505504B: je 0x15055057 */
L_1505504D:
    ecx = MEM32(ebp + 0xC); /* 0x1505504D: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x8)) = ecx; /* 0x15055050: mov dword ptr [ebp - 8], ecx */
    /* test ecx, ecx */ /* 0x15055053: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15055079; /* 0x15055055: jne 0x15055079 */
L_15055057:
    RECOMP_CALL(sub_15036430); /* 0x15055057: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1505505C: push esi */
    PUSH32(esp, esi); /* 0x1505505D: push esi */
    PUSH32(esp, esi); /* 0x1505505E: push esi */
    PUSH32(esp, esi); /* 0x1505505F: push esi */
    PUSH32(esp, esi); /* 0x15055060: push esi */
    MEM32(eax) = 0x16u; /* 0x15055061: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x15055067: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505506C: add esp, 0x14 */
    _flag_k = FK_ADD;
    esi = 0x7FFFFFFFu; /* 0x1505506F: mov esi, 0x7fffffff */
    goto L_1505518E; /* 0x15055074: jmp 0x1505518e */
L_15055079:
    PUSH32(esp, edi); /* 0x15055079: push edi */
L_1505507A:
    edi = (uint32_t)MEM8(eax); /* 0x1505507A: movzx edi, byte ptr [eax] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x1505507D: dec ebx */
    _flag_k = FK_DEC;
    eax = (uint32_t)MEM8(eax); /* 0x1505507E: movzx eax, byte ptr [eax] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) + 1; /* 0x15055081: inc dword ptr [ebp - 0xc] */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = edi; /* 0x15055084: mov dword ptr [ebp - 4], edi */
    /* test MEM8(eax + edx + 0x1D), 4 */ /* 0x15055087: test byte ptr [eax + edx + 0x1d], 4 */
    _flag_a = (uint32_t)(MEM8(eax + edx + 0x1D)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_150550D6; /* 0x1505508C: je 0x150550d6 */
L_1505508E:
    ecx = MEM32(ebp + (-0xC)); /* 0x1505508E: mov ecx, dword ptr [ebp - 0xc] */
    SET_LO8(eax, MEM8(ecx)); /* 0x15055091: mov al, byte ptr [ecx] */
    /* test LO8(eax), LO8(eax) */ /* 0x15055093: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505509C; /* 0x15055095: jne 0x1505509c */
L_15055097:
    MEM32(ebp + (-0x4)) = esi; /* 0x15055097: mov dword ptr [ebp - 4], esi */
    goto L_150550EF; /* 0x1505509A: jmp 0x150550ef */
L_1505509C:
    if (8u) _cf = (((edi) >> 24) & 1u); /* 0x1505509C: shl edi, 8 */
    if (8u) { _flag_a = recomp_flags_pack((edi << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 8u; /* 0x1505509C: shl edi, 8 */
    eax = (uint32_t)LO8(eax); /* 0x1505509F: movzx eax, al */
    _flag_a = (uint32_t)((LO16(edi) | LO16(eax))) << 16; _flag_b = (uint32_t)((LO16(edi) | LO16(eax))) << 16;
    SET_LO16(edi, LO16(edi) | LO16(eax)); /* 0x150550A2: or di, ax */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x150550A5: inc ecx */
    _flag_k = FK_INC;
    eax = (uint32_t)LO16(edi); /* 0x150550A6: movzx eax, di */
    SET_LO16(edi, LO16(eax)); /* 0x150550A9: mov di, ax */
    MEM32(ebp + (-0x4)) = eax; /* 0x150550AC: mov dword ptr [ebp - 4], eax */
    MEM32(ebp + (-0xC)) = ecx; /* 0x150550AF: mov dword ptr [ebp - 0xc], ecx */
    /* cmp LO16(edi), MEM16(edx + 0x10) */ /* 0x150550B2: cmp di, word ptr [edx + 0x10] */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(MEM16(edx + 0x10)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_B(_flag_a, _flag_b)) goto L_150550C4; /* 0x150550B6: jb 0x150550c4 */
L_150550B8:
    /* cmp LO16(edi), MEM16(edx + 0x12) */ /* 0x150550B8: cmp di, word ptr [edx + 0x12] */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(MEM16(edx + 0x12)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_A(_flag_a, _flag_b)) goto L_150550C4; /* 0x150550BC: ja 0x150550c4 */
L_150550BE:
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(MEM16(edx + 0x14)) << 16;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO16(edi, LO16(edi) + MEM16(edx + 0x14)); /* 0x150550BE: add di, word ptr [edx + 0x14] */
    _flag_k = FK_NARROW(FK_ADD, 16);
    goto L_150550F3; /* 0x150550C2: jmp 0x150550f3 */
L_150550C4:
    /* cmp LO16(edi), MEM16(edx + 0x16) */ /* 0x150550C4: cmp di, word ptr [edx + 0x16] */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(MEM16(edx + 0x16)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_B(_flag_a, _flag_b)) goto L_150550F3; /* 0x150550C8: jb 0x150550f3 */
L_150550CA:
    /* cmp LO16(edi), MEM16(edx + 0x18) */ /* 0x150550CA: cmp di, word ptr [edx + 0x18] */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(MEM16(edx + 0x18)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_A(_flag_a, _flag_b)) goto L_150550F3; /* 0x150550CE: ja 0x150550f3 */
L_150550D0:
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(MEM16(edx + 0x1A)) << 16;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO16(edi, LO16(edi) + MEM16(edx + 0x1A)); /* 0x150550D0: add di, word ptr [edx + 0x1a] */
    _flag_k = FK_NARROW(FK_ADD, 16);
    goto L_150550F3; /* 0x150550D4: jmp 0x150550f3 */
L_150550D6:
    SET_LO16(edi, MEM16(ebp + (-0x4))); /* 0x150550D6: mov di, word ptr [ebp - 4] */
    eax = (uint32_t)LO16(edi); /* 0x150550DA: movzx eax, di */
    /* test MEM8(eax + edx + 0x1D), 0x10u */ /* 0x150550DD: test byte ptr [eax + edx + 0x1d], 0x10 */
    _flag_a = (uint32_t)(MEM8(eax + edx + 0x1D)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_150550F3; /* 0x150550E2: je 0x150550f3 */
L_150550E4:
    eax = (uint32_t)MEM8(eax + edx + 0x11D); /* 0x150550E4: movzx eax, byte ptr [eax + edx + 0x11d] */
    MEM32(ebp + (-0x4)) = eax; /* 0x150550EC: mov dword ptr [ebp - 4], eax */
L_150550EF:
    SET_LO16(edi, MEM16(ebp + (-0x4))); /* 0x150550EF: mov di, word ptr [ebp - 4] */
L_150550F3:
    ecx = MEM32(ebp + (-0x8)); /* 0x150550F3: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + 1; /* 0x150550F6: inc dword ptr [ebp - 8] */
    _flag_k = FK_INC;
    eax = (uint32_t)MEM8(ecx); /* 0x150550F9: movzx eax, byte ptr [ecx] */
    MEM32(ebp + (-0x10)) = eax; /* 0x150550FC: mov dword ptr [ebp - 0x10], eax */
    MEM32(ebp + (-0x4)) = eax; /* 0x150550FF: mov dword ptr [ebp - 4], eax */
    eax = (uint32_t)MEM8(ecx); /* 0x15055102: movzx eax, byte ptr [ecx] */
    /* test MEM8(eax + edx + 0x1D), 4 */ /* 0x15055105: test byte ptr [eax + edx + 0x1d], 4 */
    _flag_a = (uint32_t)(MEM8(eax + edx + 0x1D)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15055153; /* 0x1505510A: je 0x15055153 */
L_1505510C:
    eax = MEM32(ebp + (-0x8)); /* 0x1505510C: mov eax, dword ptr [ebp - 8] */
    SET_LO8(eax, MEM8(eax)); /* 0x1505510F: mov al, byte ptr [eax] */
    /* test LO8(eax), LO8(eax) */ /* 0x15055111: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505511A; /* 0x15055113: jne 0x1505511a */
L_15055115:
    MEM32(ebp + (-0x4)) = esi; /* 0x15055115: mov dword ptr [ebp - 4], esi */
    goto L_1505516C; /* 0x15055118: jmp 0x1505516c */
L_1505511A:
    ecx = MEM32(ebp + (-0x10)); /* 0x1505511A: mov ecx, dword ptr [ebp - 0x10] */
    if (8u) _cf = (((ecx) >> 24) & 1u); /* 0x1505511D: shl ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 8u; /* 0x1505511D: shl ecx, 8 */
    eax = (uint32_t)LO8(eax); /* 0x15055120: movzx eax, al */
    _flag_a = (uint32_t)((LO16(ecx) | LO16(eax))) << 16; _flag_b = (uint32_t)((LO16(ecx) | LO16(eax))) << 16;
    SET_LO16(ecx, LO16(ecx) | LO16(eax)); /* 0x15055123: or cx, ax */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + 1; /* 0x15055126: inc dword ptr [ebp - 8] */
    _flag_k = FK_INC;
    eax = (uint32_t)LO16(ecx); /* 0x15055129: movzx eax, cx */
    MEM32(ebp + (-0x4)) = eax; /* 0x1505512C: mov dword ptr [ebp - 4], eax */
    /* cmp LO16(eax), MEM16(edx + 0x10) */ /* 0x1505512F: cmp ax, word ptr [edx + 0x10] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(edx + 0x10)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_B(_flag_a, _flag_b)) goto L_15055141; /* 0x15055133: jb 0x15055141 */
L_15055135:
    /* cmp LO16(eax), MEM16(edx + 0x12) */ /* 0x15055135: cmp ax, word ptr [edx + 0x12] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(edx + 0x12)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_A(_flag_a, _flag_b)) goto L_15055141; /* 0x15055139: ja 0x15055141 */
L_1505513B:
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(edx + 0x14)) << 16;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO16(eax, LO16(eax) + MEM16(edx + 0x14)); /* 0x1505513B: add ax, word ptr [edx + 0x14] */
    _flag_k = FK_NARROW(FK_ADD, 16);
    goto L_15055170; /* 0x1505513F: jmp 0x15055170 */
L_15055141:
    /* cmp LO16(eax), MEM16(edx + 0x16) */ /* 0x15055141: cmp ax, word ptr [edx + 0x16] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(edx + 0x16)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_B(_flag_a, _flag_b)) goto L_15055170; /* 0x15055145: jb 0x15055170 */
L_15055147:
    /* cmp LO16(eax), MEM16(edx + 0x18) */ /* 0x15055147: cmp ax, word ptr [edx + 0x18] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(edx + 0x18)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_A(_flag_a, _flag_b)) goto L_15055170; /* 0x1505514B: ja 0x15055170 */
L_1505514D:
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(edx + 0x1A)) << 16;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO16(eax, LO16(eax) + MEM16(edx + 0x1A)); /* 0x1505514D: add ax, word ptr [edx + 0x1a] */
    _flag_k = FK_NARROW(FK_ADD, 16);
    goto L_15055170; /* 0x15055151: jmp 0x15055170 */
L_15055153:
    SET_LO16(eax, MEM16(ebp + (-0x4))); /* 0x15055153: mov ax, word ptr [ebp - 4] */
    ecx = (uint32_t)LO16(eax); /* 0x15055157: movzx ecx, ax */
    /* test MEM8(ecx + edx + 0x1D), 0x10u */ /* 0x1505515A: test byte ptr [ecx + edx + 0x1d], 0x10 */
    _flag_a = (uint32_t)(MEM8(ecx + edx + 0x1D)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15055170; /* 0x1505515F: je 0x15055170 */
L_15055161:
    eax = (uint32_t)MEM8(ecx + edx + 0x11D); /* 0x15055161: movzx eax, byte ptr [ecx + edx + 0x11d] */
    MEM32(ebp + (-0x4)) = eax; /* 0x15055169: mov dword ptr [ebp - 4], eax */
L_1505516C:
    SET_LO16(eax, MEM16(ebp + (-0x4))); /* 0x1505516C: mov ax, word ptr [ebp - 4] */
L_15055170:
    /* cmp LO16(eax), LO16(edi) */ /* 0x15055170: cmp ax, di */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15055187; /* 0x15055173: jne 0x15055187 */
L_15055175:
    /* test LO16(edi), LO16(edi) */ /* 0x15055175: test di, di */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505518D; /* 0x15055178: je 0x1505518d */
L_1505517A:
    eax = MEM32(ebp + (-0xC)); /* 0x1505517A: mov eax, dword ptr [ebp - 0xc] */
    /* test ebx, ebx */ /* 0x1505517D: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505507A; /* 0x1505517F: jne 0x1505507a */
L_15055185:
    goto L_1505518D; /* 0x15055185: jmp 0x1505518d */
L_15055187:
    { uint32_t _sa = esi, _sb = esi, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x15055187: sbb esi, esi */
      esi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    esi = esi & 2; /* 0x15055189: and esi, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1505518C: dec esi */
    _flag_k = FK_DEC;
L_1505518D:
    edi = POP32_VAL(esp); /* 0x1505518D: pop edi */
L_1505518E:
    /* cmp MEM8(ebp + (-0x14)), 0 */ /* 0x1505518E: cmp byte ptr [ebp - 0x14], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x14))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505519B; /* 0x15055192: je 0x1505519b */
L_15055194:
    ecx = MEM32(ebp + (-0x18)); /* 0x15055194: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x15055197: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1505519B:
    eax = esi; /* 0x1505519B: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1505519D: pop esi */
L_1505519E:
    ebx = POP32_VAL(esp); /* 0x1505519E: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1505519F: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150551A0: ret  */
    RECOMP_REGS_OUT();
}

void sub_150551B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150551B0u);

L_150551B0:
    edi = edi; /* 0x150551B0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150551B2: push ebp */
    ebp = esp; /* 0x150551B3: mov ebp, esp */
    PUSH32(esp, 0); /* 0x150551B5: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x150551B7: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150551BA: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150551BD: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_150551D0); /* 0x150551C0: call 0x150551d0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x150551C5: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x150551C8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150551C9: ret  */
    RECOMP_REGS_OUT();
}

void sub_150551D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150551D0u);

L_150551D0:
    edi = edi; /* 0x150551D0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150551D2: push ebp */
    ebp = esp; /* 0x150551D3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x150551D5: sub esp, 0x10 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x10); /* 0x150551D8: lea ecx, [ebp - 0x10] */
    PUSH32(esp, ebx); /* 0x150551DB: push ebx */
    PUSH32(esp, edi); /* 0x150551DC: push edi */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x150551DD: push dword ptr [ebp + 0x14] */
    RECOMP_CALL(sub_1502F870); /* 0x150551E0: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + 0x10); /* 0x150551E5: mov ebx, dword ptr [ebp + 0x10] */
    /* test ebx, ebx */ /* 0x150551E8: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150551F3; /* 0x150551EA: jne 0x150551f3 */
L_150551EC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x150551EC: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_150552B8; /* 0x150551EE: jmp 0x150552b8 */
L_150551F3:
    ecx = MEM32(ebp + 0x8); /* 0x150551F3: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x150551F6: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15055200; /* 0x150551F8: je 0x15055200 */
L_150551FA:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x150551FA: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15055224; /* 0x150551FE: jne 0x15055224 */
L_15055200:
    RECOMP_CALL(sub_15036430); /* 0x15055200: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x15055205: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505520B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1505520D: push eax */
    PUSH32(esp, eax); /* 0x1505520E: push eax */
    PUSH32(esp, eax); /* 0x1505520F: push eax */
    PUSH32(esp, eax); /* 0x15055210: push eax */
    PUSH32(esp, eax); /* 0x15055211: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x15055212: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15055217: add esp, 0x14 */
    _flag_k = FK_ADD;
    edi = 0x7FFFFFFFu; /* 0x1505521A: mov edi, 0x7fffffff */
    goto L_150552B8; /* 0x1505521F: jmp 0x150552b8 */
L_15055224:
    edi = 0x7FFFFFFFu; /* 0x15055224: mov edi, 0x7fffffff */
    /* cmp ebx, edi */ /* 0x15055229: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_15055249; /* 0x1505522B: jbe 0x15055249 */
L_1505522D:
    RECOMP_CALL(sub_15036430); /* 0x1505522D: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x15055232: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15055238: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1505523A: push eax */
    PUSH32(esp, eax); /* 0x1505523B: push eax */
    PUSH32(esp, eax); /* 0x1505523C: push eax */
    PUSH32(esp, eax); /* 0x1505523D: push eax */
    PUSH32(esp, eax); /* 0x1505523E: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x1505523F: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15055244: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_150552B8; /* 0x15055247: jmp 0x150552b8 */
L_15055249:
    eax = MEM32(ebp + (-0xC)); /* 0x15055249: mov eax, dword ptr [ebp - 0xc] */
    /* cmp MEM32(eax + 0x8), 0 */ /* 0x1505524C: cmp dword ptr [eax + 8], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15055266; /* 0x15055250: jne 0x15055266 */
L_15055252:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15055252: push dword ptr [ebp + 0x14] */
    PUSH32(esp, ebx); /* 0x15055255: push ebx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15055256: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x15055259: push ecx */
    RECOMP_CALL(sub_1508C100); /* 0x1505525A: call 0x1508c100 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1505525F: add esp, 0x10 */
    _flag_k = FK_ADD;
    edi = eax; /* 0x15055262: mov edi, eax */
    goto L_150552B8; /* 0x15055264: jmp 0x150552b8 */
L_15055266:
    PUSH32(esp, esi); /* 0x15055266: push esi */
    eax = ebp + (-0x10); /* 0x15055267: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1505526A: push eax */
    PUSH32(esp, ebx); /* 0x1505526B: push ebx */
    PUSH32(esp, ecx); /* 0x1505526C: push ecx */
    RECOMP_CALL(sub_15053320); /* 0x1505526D: call 0x15053320 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x15055272: mov esi, eax */
    eax = ebp + (-0x10); /* 0x15055274: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x15055277: push eax */
    PUSH32(esp, ebx); /* 0x15055278: push ebx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15055279: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_15053320); /* 0x1505527C: call 0x15053320 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC)); /* 0x15055281: mov ecx, dword ptr [ebp - 0xc] */
    PUSH32(esp, MEM32(ecx + 0x4)); /* 0x15055284: push dword ptr [ecx + 4] */
    PUSH32(esp, eax); /* 0x15055287: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15055288: push dword ptr [ebp + 0xc] */
    eax = ebp + (-0x10); /* 0x1505528B: lea eax, [ebp - 0x10] */
    PUSH32(esp, esi); /* 0x1505528E: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1505528F: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1001u); /* 0x15055292: push 0x1001 */
    PUSH32(esp, MEM32(ecx + 0xC)); /* 0x15055297: push dword ptr [ecx + 0xc] */
    PUSH32(esp, eax); /* 0x1505529A: push eax */
    RECOMP_CALL(sub_150584C0); /* 0x1505529B: call 0x150584c0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x38u; /* 0x150552A0: add esp, 0x38 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x150552A3: pop esi */
    /* test eax, eax */ /* 0x150552A4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150552B5; /* 0x150552A6: jne 0x150552b5 */
L_150552A8:
    RECOMP_CALL(sub_15036430); /* 0x150552A8: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x150552AD: mov dword ptr [eax], 0x16 */
    goto L_150552B8; /* 0x150552B3: jmp 0x150552b8 */
L_150552B5:
    edi = eax + (-0x2); /* 0x150552B5: lea edi, [eax - 2] */
L_150552B8:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x150552B8: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150552C5; /* 0x150552BC: je 0x150552c5 */
L_150552BE:
    ecx = MEM32(ebp + (-0x8)); /* 0x150552BE: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x150552C1: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_150552C5:
    eax = edi; /* 0x150552C5: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x150552C7: pop edi */
    ebx = POP32_VAL(esp); /* 0x150552C8: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150552C9: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150552CA: ret  */
    RECOMP_REGS_OUT();
}

void sub_150552E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150552E0u);

L_150552E0:
    edi = edi; /* 0x150552E0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150552E2: push ebp */
    ebp = esp; /* 0x150552E3: mov ebp, esp */
    PUSH32(esp, 0); /* 0x150552E5: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150552E7: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150552EA: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15055300); /* 0x150552ED: call 0x15055300 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x150552F2: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x150552F5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150552F6: ret  */
    RECOMP_REGS_OUT();
}

void sub_15055300(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15055300u);

L_15055300:
    edi = edi; /* 0x15055300: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15055302: push ebp */
    ebp = esp; /* 0x15055303: mov ebp, esp */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x15055305: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505530F; /* 0x15055309: jne 0x1505530f */
L_1505530B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505530B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1505530D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505530E: ret  */
L_1505530F:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1505530F: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15055312: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15055315: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15053320); /* 0x15055318: call 0x15053320 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1505531D: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0x8); /* 0x15055320: add eax, dword ptr [ebp + 8] */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15055323: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15055324: ret  */
    RECOMP_REGS_OUT();
}

void sub_15055330(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15055330u);

L_15055330:
    edi = edi; /* 0x15055330: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15055332: push ebp */
    ebp = esp; /* 0x15055333: mov ebp, esp */
    PUSH32(esp, 0); /* 0x15055335: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15055337: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1505533A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15055350); /* 0x1505533D: call 0x15055350 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15055342: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15055345: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15055346: ret  */
    RECOMP_REGS_OUT();
}

void sub_15055350(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15055350u);

L_15055350:
    edi = edi; /* 0x15055350: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15055352: push ebp */
    ebp = esp; /* 0x15055353: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x15055355: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x15055358: push ebx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15055359: push dword ptr [ebp + 0x10] */
    ecx = ebp + (-0x10); /* 0x1505535C: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1502F870); /* 0x1505535F: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0xC)); /* 0x15055364: mov ebx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15055367: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebx + 0x8), ecx */ /* 0x15055369: cmp dword ptr [ebx + 8], ecx */
    _flag_a = (uint32_t)(MEM32(ebx + 0x8)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505537F; /* 0x1505536C: jne 0x1505537f */
L_1505536E:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1505536E: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15055371: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1508ECC0); /* 0x15055374: call 0x1508ecc0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15055379: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1505537A: pop ecx */
    ecx = eax; /* 0x1505537B: mov ecx, eax */
    goto L_150553B6; /* 0x1505537D: jmp 0x150553b6 */
L_1505537F:
    PUSH32(esp, edi); /* 0x1505537F: push edi */
    edi = MEM32(ebp + 0xC); /* 0x15055380: mov edi, dword ptr [ebp + 0xc] */
    edx = ecx; /* 0x15055383: mov edx, ecx */
    /* test edi, edi */ /* 0x15055385: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150553B0; /* 0x15055387: je 0x150553b0 */
L_15055389:
    PUSH32(esp, esi); /* 0x15055389: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1505538A: mov esi, dword ptr [ebp + 8] */
L_1505538D:
    SET_LO8(eax, MEM8(esi)); /* 0x1505538D: mov al, byte ptr [esi] */
    /* test LO8(eax), LO8(eax) */ /* 0x1505538F: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_150553AF; /* 0x15055391: je 0x150553af */
L_15055393:
    eax = (uint32_t)LO8(eax); /* 0x15055393: movzx eax, al */
    /* test MEM8(eax + ebx + 0x1D), 4 */ /* 0x15055396: test byte ptr [eax + ebx + 0x1d], 4 */
    _flag_a = (uint32_t)(MEM8(eax + ebx + 0x1D)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_150553A8; /* 0x1505539B: je 0x150553a8 */
L_1505539D:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1505539D: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, edi */ /* 0x1505539E: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_150553AF; /* 0x150553A0: jae 0x150553af */
L_150553A2:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x150553A2: inc esi */
    _flag_k = FK_INC;
    /* cmp MEM8(esi), 0 */ /* 0x150553A3: cmp byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150553AF; /* 0x150553A6: je 0x150553af */
L_150553A8:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x150553A8: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x150553A9: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x150553AA: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, edi */ /* 0x150553AB: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1505538D; /* 0x150553AD: jb 0x1505538d */
L_150553AF:
    esi = POP32_VAL(esp); /* 0x150553AF: pop esi */
L_150553B0:
    /* cmp edx, edi */ /* 0x150553B0: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) { ecx = edi; } /* 0x150553B2: cmovae ecx, edi */
    edi = POP32_VAL(esp); /* 0x150553B5: pop edi */
L_150553B6:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x150553B6: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ebx = POP32_VAL(esp); /* 0x150553BA: pop ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150553C4; /* 0x150553BB: je 0x150553c4 */
L_150553BD:
    eax = MEM32(ebp + (-0x8)); /* 0x150553BD: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(eax + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(eax + 0x70) = MEM32(eax + 0x70) & 0xFFFFFFFDu; /* 0x150553C0: and dword ptr [eax + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_150553C4:
    eax = ecx; /* 0x150553C4: mov eax, ecx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150553C6: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150553C7: ret  */
    RECOMP_REGS_OUT();
}

void sub_150553D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150553D0u);

L_150553D0:
    edi = edi; /* 0x150553D0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150553D2: push ebp */
    ebp = esp; /* 0x150553D3: mov ebp, esp */
    PUSH32(esp, 0); /* 0x150553D5: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x150553D7: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150553DA: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150553DD: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_150553F0); /* 0x150553E0: call 0x150553f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x150553E5: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x150553E8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150553E9: ret  */
    RECOMP_REGS_OUT();
}

void sub_150553F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150553F0u);

L_150553F0:
    edi = edi; /* 0x150553F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150553F2: push ebp */
    ebp = esp; /* 0x150553F3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x150553F5: sub esp, 0x20 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x150553F8: push ebx */
    PUSH32(esp, esi); /* 0x150553F9: push esi */
    PUSH32(esp, edi); /* 0x150553FA: push edi */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x150553FB: push dword ptr [ebp + 0x14] */
    edi = MEM32(ebp + 0x8); /* 0x150553FE: mov edi, dword ptr [ebp + 8] */
    ecx = ebp + (-0x20); /* 0x15055401: lea ecx, [ebp - 0x20] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15055404: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = edi; /* 0x15055406: mov dword ptr [ebp - 0x10], edi */
    MEM32(ebp + (-0x4)) = esi; /* 0x15055409: mov dword ptr [ebp - 4], esi */
    RECOMP_CALL(sub_1502F870); /* 0x1505540C: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + 0x10); /* 0x15055411: mov ebx, dword ptr [ebp + 0x10] */
    /* test edi, edi */ /* 0x15055414: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15055439; /* 0x15055416: jne 0x15055439 */
L_15055418:
    /* test ebx, ebx */ /* 0x15055418: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15055439; /* 0x1505541A: je 0x15055439 */
L_1505541C:
    RECOMP_CALL(sub_15036430); /* 0x1505541C: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x15055421: push esi */
    PUSH32(esp, esi); /* 0x15055422: push esi */
    PUSH32(esp, esi); /* 0x15055423: push esi */
    PUSH32(esp, esi); /* 0x15055424: push esi */
    PUSH32(esp, esi); /* 0x15055425: push esi */
    MEM32(eax) = 0x16u; /* 0x15055426: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x1505542C: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15055431: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_15055527; /* 0x15055434: jmp 0x15055527 */
L_15055439:
    eax = MEM32(ebp + (-0x1C)); /* 0x15055439: mov eax, dword ptr [ebp - 0x1c] */
    /* cmp MEM32(eax + 0x8), esi */ /* 0x1505543C: cmp dword ptr [eax + 8], esi */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15055455; /* 0x1505543F: jne 0x15055455 */
L_15055441:
    PUSH32(esp, ebx); /* 0x15055441: push ebx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15055442: push dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x15055445: push edi */
    RECOMP_CALL(sub_1508C1E0); /* 0x15055446: call 0x1508c1e0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1505544B: add esp, 0xc */
    _flag_k = FK_ADD;
    esi = eax; /* 0x1505544E: mov esi, eax */
    goto L_15055527; /* 0x15055450: jmp 0x15055527 */
L_15055455:
    edx = MEM32(ebp + 0xC); /* 0x15055455: mov edx, dword ptr [ebp + 0xc] */
    ecx = edx; /* 0x15055458: mov ecx, edx */
    if (8u) _cf = (((ecx) >> 7) & 1u); /* 0x1505545A: shr ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 8u; /* 0x1505545A: shr ecx, 8 */
    MEM32(ebp + (-0x8)) = edx; /* 0x1505545D: mov dword ptr [ebp - 8], edx */
    /* test LO8(ecx), LO8(ecx) */ /* 0x15055460: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_150554E9; /* 0x15055462: je 0x150554e9 */
L_15055468:
    /* test LO8(edx), LO8(edx) */ /* 0x15055468: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505547C; /* 0x1505546A: jne 0x1505547c */
L_1505546C:
    RECOMP_CALL(sub_15036430); /* 0x1505546C: call 0x15036430 */
    RECOMP_FLAGS_IN();
    SET_LO8(ecx, 0x20u); /* 0x15055471: mov cl, 0x20 */
    MEM8(ebp + (-0x8)) = (uint8_t)(LO8(ecx)); /* 0x15055473: mov byte ptr [ebp - 8], cl */
    MEM32(eax) = 0x16u; /* 0x15055476: mov dword ptr [eax], 0x16 */
L_1505547C:
    /* test ebx, ebx */ /* 0x1505547C: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15055524; /* 0x1505547E: je 0x15055524 */
L_15055484:
    SET_LO8(eax, MEM8(edi)); /* 0x15055484: mov al, byte ptr [edi] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x15055486: dec ebx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0xC)) = edi; /* 0x15055487: mov dword ptr [ebp - 0xc], edi */
    /* test LO8(eax), LO8(eax) */ /* 0x1505548A: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15055517; /* 0x1505548C: je 0x15055517 */
L_15055492:
    /* cmp MEM32(ebp + (-0x4)), esi */ /* 0x15055492: cmp dword ptr [ebp - 4], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150554AC; /* 0x15055495: jne 0x150554ac */
L_15055497:
    edx = MEM32(ebp + (-0x1C)); /* 0x15055497: mov edx, dword ptr [ebp - 0x1c] */
    eax = (uint32_t)LO8(eax); /* 0x1505549A: movzx eax, al */
    /* test MEM8(eax + edx + 0x1D), 4 */ /* 0x1505549D: test byte ptr [eax + edx + 0x1d], 4 */
    _flag_a = (uint32_t)(MEM8(eax + edx + 0x1D)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_150554AC; /* 0x150554A2: je 0x150554ac */
L_150554A4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150554A4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x150554A6: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = eax; /* 0x150554A7: mov dword ptr [ebp - 4], eax */
    goto L_150554B1; /* 0x150554AA: jmp 0x150554b1 */
L_150554AC:
    eax = esi; /* 0x150554AC: mov eax, esi */
    MEM32(ebp + (-0x4)) = esi; /* 0x150554AE: mov dword ptr [ebp - 4], esi */
L_150554B1:
    MEM8(edi) = (uint8_t)(LO8(ecx)); /* 0x150554B1: mov byte ptr [edi], cl */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x150554B3: inc edi */
    _flag_k = FK_INC;
    SET_LO8(edx, MEM8(edi)); /* 0x150554B4: mov dl, byte ptr [edi] */
    /* test LO8(edx), LO8(edx) */ /* 0x150554B6: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_150554DD; /* 0x150554B8: je 0x150554dd */
L_150554BA:
    /* test eax, eax */ /* 0x150554BA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150554D2; /* 0x150554BC: jne 0x150554d2 */
L_150554BE:
    eax = (uint32_t)LO8(edx); /* 0x150554BE: movzx eax, dl */
    edx = MEM32(ebp + (-0x1C)); /* 0x150554C1: mov edx, dword ptr [ebp - 0x1c] */
    MEM32(ebp + (-0x4)) = 1; /* 0x150554C4: mov dword ptr [ebp - 4], 1 */
    /* test MEM8(eax + edx + 0x1D), 4 */ /* 0x150554CB: test byte ptr [eax + edx + 0x1d], 4 */
    _flag_a = (uint32_t)(MEM8(eax + edx + 0x1D)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150554D5; /* 0x150554D0: jne 0x150554d5 */
L_150554D2:
    MEM32(ebp + (-0x4)) = esi; /* 0x150554D2: mov dword ptr [ebp - 4], esi */
L_150554D5:
    eax = MEM32(ebp + (-0x8)); /* 0x150554D5: mov eax, dword ptr [ebp - 8] */
    MEM8(edi) = (uint8_t)(LO8(eax)); /* 0x150554D8: mov byte ptr [edi], al */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x150554DA: inc edi */
    _flag_k = FK_INC;
    goto L_150554E3; /* 0x150554DB: jmp 0x150554e3 */
L_150554DD:
    eax = MEM32(ebp + (-0xC)); /* 0x150554DD: mov eax, dword ptr [ebp - 0xc] */
    MEM8(eax) = (uint8_t)(0x20u); /* 0x150554E0: mov byte ptr [eax], 0x20 */
L_150554E3:
    /* test ebx, ebx */ /* 0x150554E3: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15055484; /* 0x150554E5: jne 0x15055484 */
L_150554E7:
    goto L_15055517; /* 0x150554E7: jmp 0x15055517 */
L_150554E9:
    /* test ebx, ebx */ /* 0x150554E9: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15055524; /* 0x150554EB: je 0x15055524 */
L_150554ED:
    SET_LO8(eax, MEM8(edi)); /* 0x150554ED: mov al, byte ptr [edi] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x150554EF: dec ebx */
    _flag_k = FK_DEC;
    /* test LO8(eax), LO8(eax) */ /* 0x150554F0: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15055517; /* 0x150554F2: je 0x15055517 */
L_150554F4:
    /* cmp MEM32(ebp + (-0x4)), esi */ /* 0x150554F4: cmp dword ptr [ebp - 4], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505550D; /* 0x150554F7: jne 0x1505550d */
L_150554F9:
    ecx = MEM32(ebp + (-0x1C)); /* 0x150554F9: mov ecx, dword ptr [ebp - 0x1c] */
    eax = (uint32_t)LO8(eax); /* 0x150554FC: movzx eax, al */
    MEM32(ebp + (-0x4)) = 1; /* 0x150554FF: mov dword ptr [ebp - 4], 1 */
    /* test MEM8(eax + ecx + 0x1D), 4 */ /* 0x15055506: test byte ptr [eax + ecx + 0x1d], 4 */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x1D)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15055510; /* 0x1505550B: jne 0x15055510 */
L_1505550D:
    MEM32(ebp + (-0x4)) = esi; /* 0x1505550D: mov dword ptr [ebp - 4], esi */
L_15055510:
    MEM8(edi) = (uint8_t)(LO8(edx)); /* 0x15055510: mov byte ptr [edi], dl */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x15055512: inc edi */
    _flag_k = FK_INC;
    /* test ebx, ebx */ /* 0x15055513: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150554ED; /* 0x15055515: jne 0x150554ed */
L_15055517:
    /* cmp MEM32(ebp + (-0x4)), esi */ /* 0x15055517: cmp dword ptr [ebp - 4], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15055524; /* 0x1505551A: je 0x15055524 */
L_1505551C:
    /* cmp MEM8(edi), 0 */ /* 0x1505551C: cmp byte ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15055524; /* 0x1505551F: je 0x15055524 */
L_15055521:
    MEM8(edi) = (uint8_t)(0x20u); /* 0x15055521: mov byte ptr [edi], 0x20 */
L_15055524:
    esi = MEM32(ebp + (-0x10)); /* 0x15055524: mov esi, dword ptr [ebp - 0x10] */
L_15055527:
    /* cmp MEM8(ebp + (-0x14)), 0 */ /* 0x15055527: cmp byte ptr [ebp - 0x14], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x14))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15055534; /* 0x1505552B: je 0x15055534 */
L_1505552D:
    ecx = MEM32(ebp + (-0x18)); /* 0x1505552D: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x15055530: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_15055534:
    edi = POP32_VAL(esp); /* 0x15055534: pop edi */
    eax = esi; /* 0x15055535: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x15055537: pop esi */
    ebx = POP32_VAL(esp); /* 0x15055538: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15055539: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505553A: ret  */
    RECOMP_REGS_OUT();
}

void sub_15055550(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15055550u);

L_15055550:
    edi = edi; /* 0x15055550: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15055552: push ebp */
    ebp = esp; /* 0x15055553: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x15055555: sub esp, 0x10 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x15055558: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1505555C: push ebx */
    PUSH32(esp, esi); /* 0x1505555D: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1505555E: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15055561: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x15055563: push edi */
    /* cmp MEM32(ebp + 0x14), ebx */ /* 0x15055564: cmp dword ptr [ebp + 0x14], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15055596; /* 0x15055567: jne 0x15055596 */
L_15055569:
    /* test esi, esi */ /* 0x15055569: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505559A; /* 0x1505556B: jne 0x1505559a */
L_1505556D:
    /* cmp MEM32(ebp + 0xC), ebx */ /* 0x1505556D: cmp dword ptr [ebp + 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15055733; /* 0x15055570: je 0x15055733 */
L_15055576:
    RECOMP_CALL(sub_15036430); /* 0x15055576: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1505557B: push 0x16 */
    esi = POP32_VAL(esp); /* 0x1505557D: pop esi */
    MEM32(eax) = esi; /* 0x1505557E: mov dword ptr [eax], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15055580: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15055582: push eax */
    PUSH32(esp, eax); /* 0x15055583: push eax */
    PUSH32(esp, eax); /* 0x15055584: push eax */
    PUSH32(esp, eax); /* 0x15055585: push eax */
    PUSH32(esp, eax); /* 0x15055586: push eax */
L_15055587:
    RECOMP_CALL(sub_1505A110); /* 0x15055587: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1505558C: mov eax, esi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505558E: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15055591:
    edi = POP32_VAL(esp); /* 0x15055591: pop edi */
    esi = POP32_VAL(esp); /* 0x15055592: pop esi */
    ebx = POP32_VAL(esp); /* 0x15055593: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15055594: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15055595: ret  */
L_15055596:
    /* test esi, esi */ /* 0x15055596: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15055576; /* 0x15055598: je 0x15055576 */
L_1505559A:
    edi = MEM32(ebp + 0xC); /* 0x1505559A: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x1505559D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15055576; /* 0x1505559F: je 0x15055576 */
L_150555A1:
    eax = MEM32(ebp + 0x10); /* 0x150555A1: mov eax, dword ptr [ebp + 0x10] */
    ecx = eax; /* 0x150555A4: mov ecx, eax */
    if (8u) _cf = (((ecx) >> 7) & 1u); /* 0x150555A6: shr ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 8u; /* 0x150555A6: shr ecx, 8 */
    MEM32(ebp + (-0x10)) = ecx; /* 0x150555A9: mov dword ptr [ebp - 0x10], ecx */
    /* test LO8(ecx), LO8(ecx) */ /* 0x150555AC: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_150556A9; /* 0x150555AE: je 0x150556a9 */
L_150555B4:
    /* test LO8(eax), LO8(eax) */ /* 0x150555B4: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_150556B7; /* 0x150555B6: je 0x150556b7 */
L_150555BC:
    eax = (uint32_t)LO8(ecx); /* 0x150555BC: movzx eax, cl */
    PUSH32(esp, eax); /* 0x150555BF: push eax */
    RECOMP_CALL(sub_15050550); /* 0x150555C0: call 0x15050550 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150555C5: pop ecx */
    /* test eax, eax */ /* 0x150555C6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150556B7; /* 0x150555C8: je 0x150556b7 */
L_150555CE:
    ecx = MEM32(ebp + 0x8); /* 0x150555CE: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ebp + 0x14); /* 0x150555D1: mov eax, dword ptr [ebp + 0x14] */
    /* cmp MEM8(ecx), LO8(ebx) */ /* 0x150555D4: cmp byte ptr [ecx], bl */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15055645; /* 0x150555D6: je 0x15055645 */
L_150555D8:
    MEM32(ebp + (-0x8)) = edi; /* 0x150555D8: mov dword ptr [ebp - 8], edi */
    /* test eax, eax */ /* 0x150555DB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505563F; /* 0x150555DD: je 0x1505563f */
L_150555DF:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 1; /* 0x150555DF: sub edi, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1505563F; /* 0x150555E2: je 0x1505563f */
L_150555E4:
    ecx = esi + 0x1; /* 0x150555E4: lea ecx, [esi + 1] */
    /* cmp MEM8(ecx), 0 */ /* 0x150555E7: cmp byte ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(ebp + (-0xC)) = ecx; /* 0x150555EA: mov dword ptr [ebp - 0xc], ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505567D; /* 0x150555ED: je 0x1505567d */
L_150555F3:
    /* test ebx, ebx */ /* 0x150555F3: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150555FB; /* 0x150555F5: je 0x150555fb */
L_150555F7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x150555F7: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1505560D; /* 0x150555F9: jmp 0x1505560d */
L_150555FB:
    eax = (uint32_t)MEM8(esi); /* 0x150555FB: movzx eax, byte ptr [esi] */
    PUSH32(esp, eax); /* 0x150555FE: push eax */
    RECOMP_CALL(sub_15050550); /* 0x150555FF: call 0x15050550 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15055604: pop ecx */
    ecx = MEM32(ebp + (-0xC)); /* 0x15055605: mov ecx, dword ptr [ebp - 0xc] */
    ebx = eax; /* 0x15055608: mov ebx, eax */
    eax = MEM32(ebp + 0x14); /* 0x1505560A: mov eax, dword ptr [ebp + 0x14] */
L_1505560D:
    edx = MEM32(ebp + (-0x10)); /* 0x1505560D: mov edx, dword ptr [ebp - 0x10] */
    MEM8(esi) = (uint8_t)(LO8(edx)); /* 0x15055610: mov byte ptr [esi], dl */
    esi = ecx; /* 0x15055612: mov esi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 1; /* 0x15055614: sub edi, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1505563F; /* 0x15055617: je 0x1505563f */
L_15055619:
    /* test ebx, ebx */ /* 0x15055619: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15055621; /* 0x1505561B: je 0x15055621 */
L_1505561D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1505561D: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15055630; /* 0x1505561F: jmp 0x15055630 */
L_15055621:
    eax = (uint32_t)MEM8(esi); /* 0x15055621: movzx eax, byte ptr [esi] */
    PUSH32(esp, eax); /* 0x15055624: push eax */
    RECOMP_CALL(sub_15050550); /* 0x15055625: call 0x15050550 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1505562A: mov ebx, eax */
    eax = MEM32(ebp + 0x14); /* 0x1505562C: mov eax, dword ptr [ebp + 0x14] */
    ecx = POP32_VAL(esp); /* 0x1505562F: pop ecx */
L_15055630:
    ecx = MEM32(ebp + 0x10); /* 0x15055630: mov ecx, dword ptr [ebp + 0x10] */
    MEM8(esi) = (uint8_t)(LO8(ecx)); /* 0x15055633: mov byte ptr [esi], cl */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15055635: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x15055636: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebp + 0x14) = eax; /* 0x15055637: mov dword ptr [ebp + 0x14], eax */
    /* cmp MEM8(esi), 0 */ /* 0x1505563A: cmp byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_150555D8; /* 0x1505563D: jne 0x150555d8 */
L_1505563F:
    ecx = MEM32(ebp + 0x8); /* 0x1505563F: mov ecx, dword ptr [ebp + 8] */
L_15055642:
    eax = MEM32(ebp + 0x14); /* 0x15055642: mov eax, dword ptr [ebp + 0x14] */
L_15055645:
    edx = MEM32(ebp + (-0x4)); /* 0x15055645: mov edx, dword ptr [ebp - 4] */
    MEM32(ebp + (-0x8)) = edi; /* 0x15055648: mov dword ptr [ebp - 8], edi */
    MEM32(ebp + (-0x10)) = edi; /* 0x1505564B: mov dword ptr [ebp - 0x10], edi */
    /* test eax, eax */ /* 0x1505564E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15055686; /* 0x15055650: jne 0x15055686 */
L_15055652:
    /* test ebx, ebx */ /* 0x15055652: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15055725; /* 0x15055654: je 0x15055725 */
L_1505565A:
    /* cmp MEM8(esi), LO8(eax) */ /* 0x1505565A: cmp byte ptr [esi], al */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15055689; /* 0x1505565C: je 0x15055689 */
L_1505565E:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 1; /* 0x1505565E: sub edi, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15055725; /* 0x15055661: je 0x15055725 */
L_15055667:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x15055667: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x15055669: inc edx */
    _flag_k = FK_INC;
    /* cmp MEM8(esi + 0x1), LO8(eax) */ /* 0x1505566A: cmp byte ptr [esi + 1], al */
    _flag_a = (uint32_t)(MEM8(esi + 0x1)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15055715; /* 0x1505566D: jne 0x15055715 */
L_15055673:
    edi = MEM32(ebp + (-0x10)); /* 0x15055673: mov edi, dword ptr [ebp - 0x10] */
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x15055676: mov byte ptr [esi], al */
    goto L_15055725; /* 0x15055678: jmp 0x15055725 */
L_1505567D:
    ecx = MEM32(ebp + 0x8); /* 0x1505567D: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x15055680: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(esi) = (uint8_t)(0); /* 0x15055682: mov byte ptr [esi], 0 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x15055685: inc edx */
    _flag_k = FK_INC;
L_15055686:
    edi = MEM32(ebp + (-0x8)); /* 0x15055686: mov edi, dword ptr [ebp - 8] */
L_15055689:
    /* test edi, edi */ /* 0x15055689: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505572F; /* 0x1505568B: jne 0x1505572f */
L_15055691:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15055691: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ecx) = (uint8_t)(LO8(ebx)); /* 0x15055693: mov byte ptr [ecx], bl */
    RECOMP_CALL(sub_15036430); /* 0x15055695: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1505569A: push 0x16 */
    esi = POP32_VAL(esp); /* 0x1505569C: pop esi */
    PUSH32(esp, ebx); /* 0x1505569D: push ebx */
    PUSH32(esp, ebx); /* 0x1505569E: push ebx */
    PUSH32(esp, ebx); /* 0x1505569F: push ebx */
    PUSH32(esp, ebx); /* 0x150556A0: push ebx */
    MEM32(eax) = esi; /* 0x150556A1: mov dword ptr [eax], esi */
    PUSH32(esp, ebx); /* 0x150556A3: push ebx */
    RECOMP_BACKEDGE();
    goto L_15055587; /* 0x150556A4: jmp 0x15055587 */
L_150556A9:
    eax = (uint32_t)LO8(eax); /* 0x150556A9: movzx eax, al */
    PUSH32(esp, eax); /* 0x150556AC: push eax */
    RECOMP_CALL(sub_15050550); /* 0x150556AD: call 0x15050550 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150556B2: pop ecx */
    /* test eax, eax */ /* 0x150556B3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150556CD; /* 0x150556B5: je 0x150556cd */
L_150556B7:
    eax = MEM32(ebp + 0x8); /* 0x150556B7: mov eax, dword ptr [ebp + 8] */
    MEM8(eax) = (uint8_t)(LO8(ebx)); /* 0x150556BA: mov byte ptr [eax], bl */
L_150556BC:
    RECOMP_CALL(sub_15036430); /* 0x150556BC: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x2Au); /* 0x150556C1: push 0x2a */
    ecx = POP32_VAL(esp); /* 0x150556C3: pop ecx */
    MEM32(eax) = ecx; /* 0x150556C4: mov dword ptr [eax], ecx */
    eax = ecx; /* 0x150556C6: mov eax, ecx */
    RECOMP_BACKEDGE();
    goto L_15055591; /* 0x150556C8: jmp 0x15055591 */
L_150556CD:
    ecx = MEM32(ebp + 0x8); /* 0x150556CD: mov ecx, dword ptr [ebp + 8] */
    /* cmp MEM8(ecx), LO8(ebx) */ /* 0x150556D0: cmp byte ptr [ecx], bl */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15055642; /* 0x150556D2: je 0x15055642 */
L_150556D8:
    eax = MEM32(ebp + 0x14); /* 0x150556D8: mov eax, dword ptr [ebp + 0x14] */
    ecx = MEM32(ebp + 0x10); /* 0x150556DB: mov ecx, dword ptr [ebp + 0x10] */
L_150556DE:
    /* test eax, eax */ /* 0x150556DE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505570D; /* 0x150556E0: je 0x1505570d */
L_150556E2:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 1; /* 0x150556E2: sub edi, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1505570D; /* 0x150556E5: je 0x1505570d */
L_150556E7:
    /* test ebx, ebx */ /* 0x150556E7: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150556EF; /* 0x150556E9: je 0x150556ef */
L_150556EB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x150556EB: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15055701; /* 0x150556ED: jmp 0x15055701 */
L_150556EF:
    eax = (uint32_t)MEM8(esi); /* 0x150556EF: movzx eax, byte ptr [esi] */
    PUSH32(esp, eax); /* 0x150556F2: push eax */
    RECOMP_CALL(sub_15050550); /* 0x150556F3: call 0x15050550 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150556F8: pop ecx */
    ecx = MEM32(ebp + 0x10); /* 0x150556F9: mov ecx, dword ptr [ebp + 0x10] */
    ebx = eax; /* 0x150556FC: mov ebx, eax */
    eax = MEM32(ebp + 0x14); /* 0x150556FE: mov eax, dword ptr [ebp + 0x14] */
L_15055701:
    MEM8(esi) = (uint8_t)(LO8(ecx)); /* 0x15055701: mov byte ptr [esi], cl */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15055703: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x15055704: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebp + 0x14) = eax; /* 0x15055705: mov dword ptr [ebp + 0x14], eax */
    /* cmp MEM8(esi), 0 */ /* 0x15055708: cmp byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_150556DE; /* 0x1505570B: jne 0x150556de */
L_1505570D:
    ecx = MEM32(ebp + 0x8); /* 0x1505570D: mov ecx, dword ptr [ebp + 8] */
    RECOMP_BACKEDGE();
    goto L_15055645; /* 0x15055710: jmp 0x15055645 */
L_15055715:
    MEM8(esi) = (uint8_t)(0x20u); /* 0x15055715: mov byte ptr [esi], 0x20 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15055718: inc esi */
    _flag_k = FK_INC;
    goto L_15055725; /* 0x15055719: jmp 0x15055725 */
L_1505571B:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 1; /* 0x1505571B: sub edi, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15055689; /* 0x1505571E: je 0x15055689 */
L_15055724:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15055724: inc esi */
    _flag_k = FK_INC;
L_15055725:
    /* cmp MEM8(esi), 0 */ /* 0x15055725: cmp byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505571B; /* 0x15055728: jne 0x1505571b */
L_1505572A:
    RECOMP_BACKEDGE();
    goto L_15055689; /* 0x1505572A: jmp 0x15055689 */
L_1505572F:
    /* test edx, edx */ /* 0x1505572F: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150556BC; /* 0x15055731: jne 0x150556bc */
L_15055733:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15055733: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_15055591; /* 0x15055735: jmp 0x15055591 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_15055740(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15055740u);

L_15055740:
    edi = edi; /* 0x15055740: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15055742: push ebp */
    ebp = esp; /* 0x15055743: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x15055745: sub esp, 0x20 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x15055748: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1505574C: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x15055750: push ebx */
    ebx = MEM32(ebp + 0x14); /* 0x15055751: mov ebx, dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x15055754: push esi */
    esi = MEM32(ebp + 0x8); /* 0x15055755: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x15055758: push edi */
    /* test ebx, ebx */ /* 0x15055759: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15055771; /* 0x1505575B: jne 0x15055771 */
L_1505575D:
    /* test esi, esi */ /* 0x1505575D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15055779; /* 0x1505575F: jne 0x15055779 */
L_15055761:
    /* cmp MEM32(ebp + 0xC), esi */ /* 0x15055761: cmp dword ptr [ebp + 0xc], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15055962; /* 0x15055764: jne 0x15055962 */
L_1505576A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505576A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1505597D; /* 0x1505576C: jmp 0x1505597d */
L_15055771:
    /* test esi, esi */ /* 0x15055771: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15055962; /* 0x15055773: je 0x15055962 */
L_15055779:
    edi = MEM32(ebp + 0xC); /* 0x15055779: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x1505577C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15055962; /* 0x1505577E: je 0x15055962 */
L_15055784:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x15055784: push dword ptr [ebp + 0x18] */
    ecx = ebp + (-0x20); /* 0x15055787: lea ecx, [ebp - 0x20] */
    RECOMP_CALL(sub_1502F870); /* 0x1505578A: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x1C)); /* 0x1505578F: mov eax, dword ptr [ebp - 0x1c] */
    /* cmp MEM32(eax + 0x8), 0 */ /* 0x15055792: cmp dword ptr [eax + 8], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150557AD; /* 0x15055796: jne 0x150557ad */
L_15055798:
    PUSH32(esp, ebx); /* 0x15055798: push ebx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15055799: push dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x1505579C: push edi */
    PUSH32(esp, esi); /* 0x1505579D: push esi */
    RECOMP_CALL(sub_1508C220); /* 0x1505579E: call 0x1508c220 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x150557A3: add esp, 0x10 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x150557A6: mov esi, eax */
    goto L_15055953; /* 0x150557A8: jmp 0x15055953 */
L_150557AD:
    eax = MEM32(ebp + 0x10); /* 0x150557AD: mov eax, dword ptr [ebp + 0x10] */
    ecx = eax; /* 0x150557B0: mov ecx, eax */
    if (8u) _cf = (((ecx) >> 7) & 1u); /* 0x150557B2: shr ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 8u; /* 0x150557B2: shr ecx, 8 */
    MEM32(ebp + (-0xC)) = ecx; /* 0x150557B5: mov dword ptr [ebp - 0xc], ecx */
    /* test LO8(ecx), LO8(ecx) */ /* 0x150557B8: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15055898; /* 0x150557BA: je 0x15055898 */
L_150557C0:
    /* test LO8(eax), LO8(eax) */ /* 0x150557C0: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_150558AB; /* 0x150557C2: je 0x150558ab */
L_150557C8:
    eax = ebp + (-0x20); /* 0x150557C8: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x150557CB: push eax */
    eax = (uint32_t)LO8(ecx); /* 0x150557CC: movzx eax, cl */
    PUSH32(esp, eax); /* 0x150557CF: push eax */
    RECOMP_CALL(sub_15050570); /* 0x150557D0: call 0x15050570 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150557D5: pop ecx */
    ecx = POP32_VAL(esp); /* 0x150557D6: pop ecx */
    /* test eax, eax */ /* 0x150557D7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150558AB; /* 0x150557D9: je 0x150558ab */
L_150557DF:
    eax = MEM32(ebp + 0x8); /* 0x150557DF: mov eax, dword ptr [ebp + 8] */
    /* cmp MEM8(eax), 0 */ /* 0x150557E2: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150558F7; /* 0x150557E5: je 0x150558f7 */
L_150557EB:
    edx = edi; /* 0x150557EB: mov edx, edi */
    /* test ebx, ebx */ /* 0x150557ED: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150558F4; /* 0x150557EF: je 0x150558f4 */
L_150557F5:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 1; /* 0x150557F5: sub edi, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_150558F4; /* 0x150557F8: je 0x150558f4 */
L_150557FE:
    eax = esi + 0x1; /* 0x150557FE: lea eax, [esi + 1] */
    /* cmp MEM8(eax), 0 */ /* 0x15055801: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(ebp + (-0x10)) = eax; /* 0x15055804: mov dword ptr [ebp - 0x10], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15055863; /* 0x15055807: je 0x15055863 */
L_15055809:
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x15055809: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15055813; /* 0x1505580D: je 0x15055813 */
L_1505580F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505580F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15055822; /* 0x15055811: jmp 0x15055822 */
L_15055813:
    eax = (uint32_t)MEM8(esi); /* 0x15055813: movzx eax, byte ptr [esi] */
    ecx = ebp + (-0x20); /* 0x15055816: lea ecx, [ebp - 0x20] */
    PUSH32(esp, ecx); /* 0x15055819: push ecx */
    PUSH32(esp, eax); /* 0x1505581A: push eax */
    RECOMP_CALL(sub_15050570); /* 0x1505581B: call 0x15050570 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15055820: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15055821: pop ecx */
L_15055822:
    ecx = MEM32(ebp + (-0xC)); /* 0x15055822: mov ecx, dword ptr [ebp - 0xc] */
    MEM8(esi) = (uint8_t)(LO8(ecx)); /* 0x15055825: mov byte ptr [esi], cl */
    esi = MEM32(ebp + (-0x10)); /* 0x15055827: mov esi, dword ptr [ebp - 0x10] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1505582A: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 1; /* 0x1505582D: sub edi, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_150558F4; /* 0x15055830: je 0x150558f4 */
L_15055836:
    /* test eax, eax */ /* 0x15055836: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15055840; /* 0x15055838: je 0x15055840 */
L_1505583A:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1505583A: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15055852; /* 0x1505583E: jmp 0x15055852 */
L_15055840:
    eax = (uint32_t)MEM8(esi); /* 0x15055840: movzx eax, byte ptr [esi] */
    ecx = ebp + (-0x20); /* 0x15055843: lea ecx, [ebp - 0x20] */
    PUSH32(esp, ecx); /* 0x15055846: push ecx */
    PUSH32(esp, eax); /* 0x15055847: push eax */
    RECOMP_CALL(sub_15050570); /* 0x15055848: call 0x15050570 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505584D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1505584E: pop ecx */
    MEM32(ebp + (-0x4)) = eax; /* 0x1505584F: mov dword ptr [ebp - 4], eax */
L_15055852:
    eax = MEM32(ebp + 0x10); /* 0x15055852: mov eax, dword ptr [ebp + 0x10] */
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x15055855: mov byte ptr [esi], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15055857: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x15055858: dec ebx */
    _flag_k = FK_DEC;
    /* cmp MEM8(esi), 0 */ /* 0x15055859: cmp byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_150557EB; /* 0x1505585C: jne 0x150557eb */
L_1505585E:
    goto L_150558F4; /* 0x1505585E: jmp 0x150558f4 */
L_15055863:
    eax = MEM32(ebp + 0x8); /* 0x15055863: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15055866: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(esi) = (uint8_t)(0); /* 0x15055868: mov byte ptr [esi], 0 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1505586B: inc ecx */
    _flag_k = FK_INC;
L_1505586C:
    ebx = ecx; /* 0x1505586C: mov ebx, ecx */
    edi = edx; /* 0x1505586E: mov edi, edx */
L_15055870:
    /* test edi, edi */ /* 0x15055870: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15055941; /* 0x15055872: jne 0x15055941 */
L_15055878:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15055878: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(eax) = (uint8_t)(LO8(ebx)); /* 0x1505587A: mov byte ptr [eax], bl */
    RECOMP_CALL(sub_15036430); /* 0x1505587C: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x15055881: push 0x16 */
    esi = POP32_VAL(esp); /* 0x15055883: pop esi */
    PUSH32(esp, ebx); /* 0x15055884: push ebx */
    PUSH32(esp, ebx); /* 0x15055885: push ebx */
    PUSH32(esp, ebx); /* 0x15055886: push ebx */
    PUSH32(esp, ebx); /* 0x15055887: push ebx */
    PUSH32(esp, ebx); /* 0x15055888: push ebx */
    MEM32(eax) = esi; /* 0x15055889: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1505A110); /* 0x1505588B: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15055890: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_15055953; /* 0x15055893: jmp 0x15055953 */
L_15055898:
    ecx = ebp + (-0x20); /* 0x15055898: lea ecx, [ebp - 0x20] */
    eax = (uint32_t)LO8(eax); /* 0x1505589B: movzx eax, al */
    PUSH32(esp, ecx); /* 0x1505589E: push ecx */
    PUSH32(esp, eax); /* 0x1505589F: push eax */
    RECOMP_CALL(sub_15050570); /* 0x150558A0: call 0x15050570 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150558A5: pop ecx */
    ecx = POP32_VAL(esp); /* 0x150558A6: pop ecx */
    /* test eax, eax */ /* 0x150558A7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150558B6; /* 0x150558A9: je 0x150558b6 */
L_150558AB:
    eax = MEM32(ebp + 0x8); /* 0x150558AB: mov eax, dword ptr [ebp + 8] */
    MEM8(eax) = (uint8_t)(0); /* 0x150558AE: mov byte ptr [eax], 0 */
    goto L_15055945; /* 0x150558B1: jmp 0x15055945 */
L_150558B6:
    eax = MEM32(ebp + 0x8); /* 0x150558B6: mov eax, dword ptr [ebp + 8] */
    /* cmp MEM8(eax), 0 */ /* 0x150558B9: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150558F7; /* 0x150558BC: je 0x150558f7 */
L_150558BE:
    eax = MEM32(ebp + 0x10); /* 0x150558BE: mov eax, dword ptr [ebp + 0x10] */
L_150558C1:
    /* test ebx, ebx */ /* 0x150558C1: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150558F4; /* 0x150558C3: je 0x150558f4 */
L_150558C5:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 1; /* 0x150558C5: sub edi, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_150558F4; /* 0x150558C8: je 0x150558f4 */
L_150558CA:
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x150558CA: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150558D6; /* 0x150558CE: je 0x150558d6 */
L_150558D0:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x150558D0: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_150558EB; /* 0x150558D4: jmp 0x150558eb */
L_150558D6:
    eax = (uint32_t)MEM8(esi); /* 0x150558D6: movzx eax, byte ptr [esi] */
    ecx = ebp + (-0x20); /* 0x150558D9: lea ecx, [ebp - 0x20] */
    PUSH32(esp, ecx); /* 0x150558DC: push ecx */
    PUSH32(esp, eax); /* 0x150558DD: push eax */
    RECOMP_CALL(sub_15050570); /* 0x150558DE: call 0x15050570 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150558E3: pop ecx */
    MEM32(ebp + (-0x4)) = eax; /* 0x150558E4: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x10); /* 0x150558E7: mov eax, dword ptr [ebp + 0x10] */
    ecx = POP32_VAL(esp); /* 0x150558EA: pop ecx */
L_150558EB:
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x150558EB: mov byte ptr [esi], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x150558ED: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x150558EE: dec ebx */
    _flag_k = FK_DEC;
    /* cmp MEM8(esi), 0 */ /* 0x150558EF: cmp byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_150558C1; /* 0x150558F2: jne 0x150558c1 */
L_150558F4:
    eax = MEM32(ebp + 0x8); /* 0x150558F4: mov eax, dword ptr [ebp + 8] */
L_150558F7:
    ecx = MEM32(ebp + (-0x8)); /* 0x150558F7: mov ecx, dword ptr [ebp - 8] */
    edx = edi; /* 0x150558FA: mov edx, edi */
    MEM32(ebp + (-0x10)) = edi; /* 0x150558FC: mov dword ptr [ebp - 0x10], edi */
    /* test ebx, ebx */ /* 0x150558FF: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505586C; /* 0x15055901: jne 0x1505586c */
L_15055907:
    /* cmp MEM32(ebp + (-0x4)), ebx */ /* 0x15055907: cmp dword ptr [ebp - 4], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15055929; /* 0x1505590A: je 0x15055929 */
L_1505590C:
    /* cmp MEM8(esi), LO8(ebx) */ /* 0x1505590C: cmp byte ptr [esi], bl */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15055929; /* 0x1505590E: je 0x15055929 */
L_15055910:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 1; /* 0x15055910: sub edi, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15055929; /* 0x15055913: je 0x15055929 */
L_15055915:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x15055915: inc ebx */
    _flag_k = FK_INC;
    /* cmp MEM8(esi + 0x1), 0 */ /* 0x15055916: cmp byte ptr [esi + 1], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x1)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15055923; /* 0x1505591A: jne 0x15055923 */
L_1505591C:
    MEM8(esi) = (uint8_t)(0); /* 0x1505591C: mov byte ptr [esi], 0 */
    edi = edx; /* 0x1505591F: mov edi, edx */
    goto L_15055937; /* 0x15055921: jmp 0x15055937 */
L_15055923:
    MEM8(esi) = (uint8_t)(0x20u); /* 0x15055923: mov byte ptr [esi], 0x20 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15055926: inc esi */
    _flag_k = FK_INC;
    goto L_15055937; /* 0x15055927: jmp 0x15055937 */
L_15055929:
    ebx = ecx; /* 0x15055929: mov ebx, ecx */
    goto L_15055937; /* 0x1505592B: jmp 0x15055937 */
L_1505592D:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 1; /* 0x1505592D: sub edi, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15055870; /* 0x15055930: je 0x15055870 */
L_15055936:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15055936: inc esi */
    _flag_k = FK_INC;
L_15055937:
    /* cmp MEM8(esi), 0 */ /* 0x15055937: cmp byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505592D; /* 0x1505593A: jne 0x1505592d */
L_1505593C:
    RECOMP_BACKEDGE();
    goto L_15055870; /* 0x1505593C: jmp 0x15055870 */
L_15055941:
    /* test ebx, ebx */ /* 0x15055941: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15055951; /* 0x15055943: je 0x15055951 */
L_15055945:
    RECOMP_CALL(sub_15036430); /* 0x15055945: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x2Au); /* 0x1505594A: push 0x2a */
    esi = POP32_VAL(esp); /* 0x1505594C: pop esi */
    MEM32(eax) = esi; /* 0x1505594D: mov dword ptr [eax], esi */
    goto L_15055953; /* 0x1505594F: jmp 0x15055953 */
L_15055951:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15055951: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_15055953:
    /* cmp MEM8(ebp + (-0x14)), 0 */ /* 0x15055953: cmp byte ptr [ebp - 0x14], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x14))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505597B; /* 0x15055957: je 0x1505597b */
L_15055959:
    ecx = MEM32(ebp + (-0x18)); /* 0x15055959: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1505595C: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1505597B; /* 0x15055960: jmp 0x1505597b */
L_15055962:
    RECOMP_CALL(sub_15036430); /* 0x15055962: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x15055967: push 0x16 */
    esi = POP32_VAL(esp); /* 0x15055969: pop esi */
    MEM32(eax) = esi; /* 0x1505596A: mov dword ptr [eax], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505596C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1505596E: push eax */
    PUSH32(esp, eax); /* 0x1505596F: push eax */
    PUSH32(esp, eax); /* 0x15055970: push eax */
    PUSH32(esp, eax); /* 0x15055971: push eax */
    PUSH32(esp, eax); /* 0x15055972: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x15055973: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15055978: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1505597B:
    eax = esi; /* 0x1505597B: mov eax, esi */
L_1505597D:
    edi = POP32_VAL(esp); /* 0x1505597D: pop edi */
    esi = POP32_VAL(esp); /* 0x1505597E: pop esi */
    ebx = POP32_VAL(esp); /* 0x1505597F: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15055980: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15055981: ret  */
    RECOMP_REGS_OUT();
}

void sub_15055990(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15055990u);

L_15055990:
    edi = edi; /* 0x15055990: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15055992: push ebp */
    ebp = esp; /* 0x15055993: mov ebp, esp */
    PUSH32(esp, 0); /* 0x15055995: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15055997: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1505599A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_150559B0); /* 0x1505599D: call 0x150559b0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x150559A2: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x150559A5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150559A6: ret  */
    RECOMP_REGS_OUT();
}

void sub_150559B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150559B0u);

L_150559B0:
    edi = edi; /* 0x150559B0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150559B2: push ebp */
    ebp = esp; /* 0x150559B3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x150559B5: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x150559B8: push esi */
    PUSH32(esp, edi); /* 0x150559B9: push edi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x150559BA: push dword ptr [ebp + 0x10] */
    ecx = ebp + (-0x14); /* 0x150559BD: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1502F870); /* 0x150559C0: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x10)); /* 0x150559C5: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x150559C8: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(eax + 0x8), esi */ /* 0x150559CA: cmp dword ptr [eax + 8], esi */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150559E3; /* 0x150559CD: jne 0x150559e3 */
L_150559CF:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150559CF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150559D2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1508ED50); /* 0x150559D5: call 0x1508ed50 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150559DA: pop ecx */
    ecx = POP32_VAL(esp); /* 0x150559DB: pop ecx */
    esi = eax; /* 0x150559DC: mov esi, eax */
    goto L_15055A7B; /* 0x150559DE: jmp 0x15055a7b */
L_150559E3:
    ecx = MEM32(ebp + 0x8); /* 0x150559E3: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x150559E6: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150559F1; /* 0x150559E8: je 0x150559f1 */
L_150559EA:
    edi = MEM32(ebp + 0xC); /* 0x150559EA: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x150559ED: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15055A0B; /* 0x150559EF: jne 0x15055a0b */
L_150559F1:
    RECOMP_CALL(sub_15036430); /* 0x150559F1: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x150559F6: push esi */
    PUSH32(esp, esi); /* 0x150559F7: push esi */
    PUSH32(esp, esi); /* 0x150559F8: push esi */
    PUSH32(esp, esi); /* 0x150559F9: push esi */
    PUSH32(esp, esi); /* 0x150559FA: push esi */
    MEM32(eax) = 0x16u; /* 0x150559FB: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x15055A01: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15055A06: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_15055A7B; /* 0x15055A09: jmp 0x15055a7b */
L_15055A0B:
    /* cmp MEM8(ecx), 0 */ /* 0x15055A0B: cmp byte ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15055A73; /* 0x15055A0E: je 0x15055a73 */
L_15055A10:
    SET_LO8(eax, MEM8(edi)); /* 0x15055A10: mov al, byte ptr [edi] */
    esi = MEM32(ebp + (-0x10)); /* 0x15055A12: mov esi, dword ptr [ebp - 0x10] */
    PUSH32(esp, ebx); /* 0x15055A15: push ebx */
L_15055A16:
    edx = edi; /* 0x15055A16: mov edx, edi */
    SET_LO8(ebx, LO8(eax)); /* 0x15055A18: mov bl, al */
    /* test LO8(eax), LO8(eax) */ /* 0x15055A1A: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15055A57; /* 0x15055A1C: je 0x15055a57 */
L_15055A1E:
    SET_LO8(ebx, MEM8(ecx)); /* 0x15055A1E: mov bl, byte ptr [ecx] */
    SET_HI8(ebx, LO8(eax)); /* 0x15055A20: mov bh, al */
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(ebx)); /* 0x15055A22: mov byte ptr [ebp - 1], bl */
    goto L_15055A2A; /* 0x15055A25: jmp 0x15055a2a */
L_15055A27:
    SET_LO8(ebx, MEM8(ebp + (-0x1))); /* 0x15055A27: mov bl, byte ptr [ebp - 1] */
L_15055A2A:
    eax = (uint32_t)HI8(ebx); /* 0x15055A2A: movzx eax, bh */
    /* test MEM8(eax + esi + 0x1D), 4 */ /* 0x15055A2D: test byte ptr [eax + esi + 0x1d], 4 */
    _flag_a = (uint32_t)(MEM8(eax + esi + 0x1D)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15055A47; /* 0x15055A32: je 0x15055a47 */
L_15055A34:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x15055A34: inc edx */
    _flag_k = FK_INC;
    /* cmp HI8(ebx), LO8(ebx) */ /* 0x15055A35: cmp bh, bl */
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15055A42; /* 0x15055A37: jne 0x15055a42 */
L_15055A39:
    SET_LO8(eax, MEM8(edx)); /* 0x15055A39: mov al, byte ptr [edx] */
    SET_LO8(ebx, HI8(ebx)); /* 0x15055A3B: mov bl, bh */
    /* cmp LO8(eax), MEM8(ecx + 0x1) */ /* 0x15055A3D: cmp al, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15055A57; /* 0x15055A40: je 0x15055a57 */
L_15055A42:
    /* cmp MEM8(edx), 0 */ /* 0x15055A42: cmp byte ptr [edx], 0 */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    goto L_15055A4A; /* 0x15055A45: jmp 0x15055a4a */
L_15055A47:
    /* cmp HI8(ebx), MEM8(ebp + (-0x1)) */ /* 0x15055A47: cmp bh, byte ptr [ebp - 1] */
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(ebp + (-0x1))) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
L_15055A4A:
    SET_LO8(ebx, HI8(ebx)); /* 0x15055A4A: mov bl, bh */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_15055A57; /* 0x15055A4C: je 0x15055a57 */
L_15055A4E:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x15055A4E: inc edx */
    _flag_k = FK_INC;
    SET_LO8(ebx, MEM8(edx)); /* 0x15055A4F: mov bl, byte ptr [edx] */
    SET_HI8(ebx, LO8(ebx)); /* 0x15055A51: mov bh, bl */
    /* test LO8(ebx), LO8(ebx) */ /* 0x15055A53: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15055A27; /* 0x15055A55: jne 0x15055a27 */
L_15055A57:
    /* test LO8(ebx), LO8(ebx) */ /* 0x15055A57: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15055A72; /* 0x15055A59: jne 0x15055a72 */
L_15055A5B:
    eax = (uint32_t)MEM8(ecx); /* 0x15055A5B: movzx eax, byte ptr [ecx] */
    /* test MEM8(eax + esi + 0x1D), 4 */ /* 0x15055A5E: test byte ptr [eax + esi + 0x1d], 4 */
    _flag_a = (uint32_t)(MEM8(eax + esi + 0x1D)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15055A6A; /* 0x15055A63: je 0x15055a6a */
L_15055A65:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15055A65: inc ecx */
    _flag_k = FK_INC;
    /* cmp MEM8(ecx), LO8(ebx) */ /* 0x15055A66: cmp byte ptr [ecx], bl */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15055A72; /* 0x15055A68: je 0x15055a72 */
L_15055A6A:
    SET_LO8(eax, MEM8(edi)); /* 0x15055A6A: mov al, byte ptr [edi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15055A6C: inc ecx */
    _flag_k = FK_INC;
    /* cmp MEM8(ecx), 0 */ /* 0x15055A6D: cmp byte ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15055A16; /* 0x15055A70: jne 0x15055a16 */
L_15055A72:
    ebx = POP32_VAL(esp); /* 0x15055A72: pop ebx */
L_15055A73:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15055A73: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(ecx), 0 */ /* 0x15055A75: cmp byte ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) { esi = ecx; } /* 0x15055A78: cmovne esi, ecx */
L_15055A7B:
    /* cmp MEM8(ebp + (-0x8)), 0 */ /* 0x15055A7B: cmp byte ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x8))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15055A88; /* 0x15055A7F: je 0x15055a88 */
L_15055A81:
    ecx = MEM32(ebp + (-0xC)); /* 0x15055A81: mov ecx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x15055A84: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_15055A88:
    edi = POP32_VAL(esp); /* 0x15055A88: pop edi */
    eax = esi; /* 0x15055A89: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x15055A8B: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15055A8C: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15055A8D: ret  */
    RECOMP_REGS_OUT();
}

void sub_15055AA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15055AA0u);

L_15055AA0:
    edi = edi; /* 0x15055AA0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15055AA2: push ebp */
    ebp = esp; /* 0x15055AA3: mov ebp, esp */
    PUSH32(esp, 0); /* 0x15055AA5: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15055AA7: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15055AAA: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15055AC0); /* 0x15055AAD: call 0x15055ac0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15055AB2: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15055AB5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15055AB6: ret  */
    RECOMP_REGS_OUT();
}

void sub_15055AC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15055AC0u);

L_15055AC0:
    edi = edi; /* 0x15055AC0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15055AC2: push ebp */
    ebp = esp; /* 0x15055AC3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x15055AC5: sub esp, 0x14 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x14); /* 0x15055AC8: lea ecx, [ebp - 0x14] */
    PUSH32(esp, ebx); /* 0x15055ACB: push ebx */
    PUSH32(esp, esi); /* 0x15055ACC: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15055ACD: push dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15055AD0: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = ebx; /* 0x15055AD2: mov esi, ebx */
    RECOMP_CALL(sub_1502F870); /* 0x15055AD4: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x15055AD9: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x15055ADC: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15055AFA; /* 0x15055ADE: jne 0x15055afa */
L_15055AE0:
    RECOMP_CALL(sub_15036430); /* 0x15055AE0: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x15055AE5: push ebx */
    PUSH32(esp, ebx); /* 0x15055AE6: push ebx */
    PUSH32(esp, ebx); /* 0x15055AE7: push ebx */
    PUSH32(esp, ebx); /* 0x15055AE8: push ebx */
    PUSH32(esp, ebx); /* 0x15055AE9: push ebx */
    MEM32(eax) = 0x16u; /* 0x15055AEA: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x15055AF0: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15055AF5: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_15055B55; /* 0x15055AF8: jmp 0x15055b55 */
L_15055AFA:
    eax = MEM32(ebp + (-0x10)); /* 0x15055AFA: mov eax, dword ptr [ebp - 0x10] */
    /* cmp MEM32(eax + 0x8), ebx */ /* 0x15055AFD: cmp dword ptr [eax + 8], ebx */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15055B11; /* 0x15055B00: jne 0x15055b11 */
L_15055B02:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15055B02: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x15055B05: push ecx */
    RECOMP_CALL(sub_1508EDA0); /* 0x15055B06: call 0x1508eda0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15055B0B: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15055B0C: pop ecx */
    ebx = eax; /* 0x15055B0D: mov ebx, eax */
    goto L_15055B55; /* 0x15055B0F: jmp 0x15055b55 */
L_15055B11:
    PUSH32(esp, edi); /* 0x15055B11: push edi */
L_15055B12:
    SET_LO8(edx, MEM8(ecx)); /* 0x15055B12: mov dl, byte ptr [ecx] */
    edi = (uint32_t)LO8(edx); /* 0x15055B14: movzx edi, dl */
    MEM32(ebp + (-0x4)) = ecx; /* 0x15055B17: mov dword ptr [ebp - 4], ecx */
    /* test MEM8(edi + eax + 0x1D), 4 */ /* 0x15055B1A: test byte ptr [edi + eax + 0x1d], 4 */
    _flag_a = (uint32_t)(MEM8(edi + eax + 0x1D)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15055B46; /* 0x15055B1F: je 0x15055b46 */
L_15055B21:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15055B21: inc ecx */
    _flag_k = FK_INC;
    SET_LO8(edx, MEM8(ecx)); /* 0x15055B22: mov dl, byte ptr [ecx] */
    /* test LO8(edx), LO8(edx) */ /* 0x15055B24: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15055B40; /* 0x15055B26: je 0x15055b40 */
L_15055B28:
    if (8u) _cf = (((edi) >> 24) & 1u); /* 0x15055B28: shl edi, 8 */
    if (8u) { _flag_a = recomp_flags_pack((edi << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 8u; /* 0x15055B28: shl edi, 8 */
    eax = (uint32_t)LO8(edx); /* 0x15055B2B: movzx eax, dl */
    _flag_a = (uint32_t)((edi | eax)); _flag_b = (uint32_t)((edi | eax));
    edi = edi | eax; /* 0x15055B2E: or edi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x4)); /* 0x15055B30: mov eax, dword ptr [ebp - 4] */
    /* cmp MEM32(ebp + 0xC), edi */ /* 0x15055B33: cmp dword ptr [ebp + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) { eax = esi; } /* 0x15055B36: cmovne eax, esi */
    esi = eax; /* 0x15055B39: mov esi, eax */
    eax = MEM32(ebp + (-0x10)); /* 0x15055B3B: mov eax, dword ptr [ebp - 0x10] */
    goto L_15055B4D; /* 0x15055B3E: jmp 0x15055b4d */
L_15055B40:
    SET_LO8(edx, LO8(ebx)); /* 0x15055B40: mov dl, bl */
    /* test esi, esi */ /* 0x15055B42: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15055B49; /* 0x15055B44: jmp 0x15055b49 */
L_15055B46:
    /* cmp MEM32(ebp + 0xC), edi */ /* 0x15055B46: cmp dword ptr [ebp + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_15055B49:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_15055B4D; /* 0x15055B49: jne 0x15055b4d */
L_15055B4B:
    esi = ecx; /* 0x15055B4B: mov esi, ecx */
L_15055B4D:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15055B4D: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(edx), LO8(edx) */ /* 0x15055B4E: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15055B12; /* 0x15055B50: jne 0x15055b12 */
L_15055B52:
    edi = POP32_VAL(esp); /* 0x15055B52: pop edi */
    ebx = esi; /* 0x15055B53: mov ebx, esi */
L_15055B55:
    /* cmp MEM8(ebp + (-0x8)), 0 */ /* 0x15055B55: cmp byte ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x8))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15055B62; /* 0x15055B59: je 0x15055b62 */
L_15055B5B:
    ecx = MEM32(ebp + (-0xC)); /* 0x15055B5B: mov ecx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x15055B5E: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_15055B62:
    esi = POP32_VAL(esp); /* 0x15055B62: pop esi */
    eax = ebx; /* 0x15055B63: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x15055B65: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15055B66: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15055B67: ret  */
    RECOMP_REGS_OUT();
}

void sub_15055B70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15055B70u);

L_15055B70:
    edi = edi; /* 0x15055B70: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15055B72: push ebp */
    ebp = esp; /* 0x15055B73: mov ebp, esp */
    PUSH32(esp, 0); /* 0x15055B75: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15055B77: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15055B90); /* 0x15055B7A: call 0x15055b90 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15055B7F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15055B80: pop ecx */
    ebp = POP32_VAL(esp); /* 0x15055B81: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15055B82: ret  */
    RECOMP_REGS_OUT();
}

void sub_15055B90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15055B90u);

L_15055B90:
    edi = edi; /* 0x15055B90: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15055B92: push ebp */
    ebp = esp; /* 0x15055B93: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x15055B95: sub esp, 0x18 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x15055B98: push ebx */
    PUSH32(esp, esi); /* 0x15055B99: push esi */
    esi = MEM32(ebp + 0x8); /* 0x15055B9A: mov esi, dword ptr [ebp + 8] */
    ecx = ebp + (-0x18); /* 0x15055B9D: lea ecx, [ebp - 0x18] */
    PUSH32(esp, edi); /* 0x15055BA0: push edi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15055BA1: push dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x8)) = esi; /* 0x15055BA4: mov dword ptr [ebp - 8], esi */
    edi = esi; /* 0x15055BA7: mov edi, esi */
    RECOMP_CALL(sub_1502F870); /* 0x15055BA9: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x15055BAE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15055BCE; /* 0x15055BB0: jne 0x15055bce */
L_15055BB2:
    RECOMP_CALL(sub_15036430); /* 0x15055BB2: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15055BB7: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x15055BB9: push ebx */
    PUSH32(esp, ebx); /* 0x15055BBA: push ebx */
    PUSH32(esp, ebx); /* 0x15055BBB: push ebx */
    PUSH32(esp, ebx); /* 0x15055BBC: push ebx */
    PUSH32(esp, ebx); /* 0x15055BBD: push ebx */
    MEM32(eax) = 0x16u; /* 0x15055BBE: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x15055BC4: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15055BC9: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_15055C2A; /* 0x15055BCC: jmp 0x15055c2a */
L_15055BCE:
    edx = MEM32(ebp + (-0x14)); /* 0x15055BCE: mov edx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15055BD1: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x8), ebx */ /* 0x15055BD3: cmp dword ptr [edx + 8], ebx */
    _flag_a = (uint32_t)(MEM32(edx + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15055BFF; /* 0x15055BD6: jne 0x15055bff */
L_15055BD8:
    PUSH32(esp, esi); /* 0x15055BD8: push esi */
    RECOMP_CALL(sub_1508C2B0); /* 0x15055BD9: call 0x1508c2b0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15055BDE: pop ecx */
    ebx = eax; /* 0x15055BDF: mov ebx, eax */
    goto L_15055C2A; /* 0x15055BE1: jmp 0x15055c2a */
L_15055BE3:
    eax = (uint32_t)LO8(ecx); /* 0x15055BE3: movzx eax, cl */
    MEM32(ebp + (-0x4)) = esi; /* 0x15055BE6: mov dword ptr [ebp - 4], esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15055BE9: inc esi */
    _flag_k = FK_INC;
    /* test MEM8(eax + edx + 0x1D), 4 */ /* 0x15055BEA: test byte ptr [eax + edx + 0x1d], 4 */
    _flag_a = (uint32_t)(MEM8(eax + edx + 0x1D)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15055BFF; /* 0x15055BEF: je 0x15055bff */
L_15055BF1:
    SET_HI8(ecx, MEM8(esi)); /* 0x15055BF1: mov ch, byte ptr [esi] */
    /* test HI8(ecx), HI8(ecx) */ /* 0x15055BF3: test ch, ch */
    _flag_a = (uint32_t)(HI8(ecx)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15055C07; /* 0x15055BF5: je 0x15055c07 */
L_15055BF7:
    eax = MEM32(ebp + (-0x4)); /* 0x15055BF7: mov eax, dword ptr [ebp - 4] */
    MEM8(esi) = (uint8_t)(LO8(ecx)); /* 0x15055BFA: mov byte ptr [esi], cl */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15055BFC: inc esi */
    _flag_k = FK_INC;
    MEM8(eax) = (uint8_t)(HI8(ecx)); /* 0x15055BFD: mov byte ptr [eax], ch */
L_15055BFF:
    SET_LO8(ecx, MEM8(esi)); /* 0x15055BFF: mov cl, byte ptr [esi] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x15055C01: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15055BE3; /* 0x15055C03: jne 0x15055be3 */
L_15055C05:
    goto L_15055C22; /* 0x15055C05: jmp 0x15055c22 */
L_15055C07:
    RECOMP_CALL(sub_15036430); /* 0x15055C07: call 0x15036430 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x4)); /* 0x15055C0C: mov esi, dword ptr [ebp - 4] */
    MEM32(eax) = 0x16u; /* 0x15055C0F: mov dword ptr [eax], 0x16 */
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x15055C15: mov byte ptr [esi], bl */
    goto L_15055C22; /* 0x15055C17: jmp 0x15055c22 */
L_15055C19:
    SET_LO8(ecx, MEM8(edi)); /* 0x15055C19: mov cl, byte ptr [edi] */
    SET_LO8(eax, MEM8(esi)); /* 0x15055C1B: mov al, byte ptr [esi] */
    MEM8(edi) = (uint8_t)(LO8(eax)); /* 0x15055C1D: mov byte ptr [edi], al */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x15055C1F: inc edi */
    _flag_k = FK_INC;
    MEM8(esi) = (uint8_t)(LO8(ecx)); /* 0x15055C20: mov byte ptr [esi], cl */
L_15055C22:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x15055C22: dec esi */
    _flag_k = FK_DEC;
    /* cmp edi, esi */ /* 0x15055C23: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_15055C19; /* 0x15055C25: jb 0x15055c19 */
L_15055C27:
    ebx = MEM32(ebp + (-0x8)); /* 0x15055C27: mov ebx, dword ptr [ebp - 8] */
L_15055C2A:
    /* cmp MEM8(ebp + (-0xC)), 0 */ /* 0x15055C2A: cmp byte ptr [ebp - 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0xC))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15055C37; /* 0x15055C2E: je 0x15055c37 */
L_15055C30:
    ecx = MEM32(ebp + (-0x10)); /* 0x15055C30: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x15055C33: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_15055C37:
    edi = POP32_VAL(esp); /* 0x15055C37: pop edi */
    esi = POP32_VAL(esp); /* 0x15055C38: pop esi */
    eax = ebx; /* 0x15055C39: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x15055C3B: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15055C3C: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15055C3D: ret  */
    RECOMP_REGS_OUT();
}

void sub_15055C50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15055C50u);

L_15055C50:
    edi = edi; /* 0x15055C50: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15055C52: push ebp */
    ebp = esp; /* 0x15055C53: mov ebp, esp */
    PUSH32(esp, 0); /* 0x15055C55: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15055C57: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15055C5A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15055C70); /* 0x15055C5D: call 0x15055c70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15055C62: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15055C65: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15055C66: ret  */
    RECOMP_REGS_OUT();
}

void sub_15055C70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15055C70u);

L_15055C70:
    edi = edi; /* 0x15055C70: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15055C72: push ebp */
    ebp = esp; /* 0x15055C73: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x15055C75: sub esp, 0x10 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x10); /* 0x15055C78: lea ecx, [ebp - 0x10] */
    PUSH32(esp, esi); /* 0x15055C7B: push esi */
    esi = MEM32(ebp + 0x8); /* 0x15055C7C: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x15055C7F: push edi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15055C80: push dword ptr [ebp + 0x10] */
    edi = esi; /* 0x15055C83: mov edi, esi */
    RECOMP_CALL(sub_1502F870); /* 0x15055C85: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x15055C8A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15055CA8; /* 0x15055C8C: jne 0x15055ca8 */
L_15055C8E:
    RECOMP_CALL(sub_15036430); /* 0x15055C8E: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x15055C93: push esi */
    PUSH32(esp, esi); /* 0x15055C94: push esi */
    PUSH32(esp, esi); /* 0x15055C95: push esi */
    PUSH32(esp, esi); /* 0x15055C96: push esi */
    PUSH32(esp, esi); /* 0x15055C97: push esi */
    MEM32(eax) = 0x16u; /* 0x15055C98: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x15055C9E: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15055CA3: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_15055D11; /* 0x15055CA6: jmp 0x15055d11 */
L_15055CA8:
    eax = MEM32(ebp + (-0xC)); /* 0x15055CA8: mov eax, dword ptr [ebp - 0xc] */
    /* cmp MEM32(eax + 0x8), 0 */ /* 0x15055CAB: cmp dword ptr [eax + 8], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15055CC5; /* 0x15055CAF: jne 0x15055cc5 */
L_15055CB1:
    /* cmp MEM8(esi), 0 */ /* 0x15055CB1: cmp byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = esi; /* 0x15055CB4: mov eax, esi */
    SET_LO8(ecx, MEM8(ebp + 0xC)); /* 0x15055CB6: mov cl, byte ptr [ebp + 0xc] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15055D11; /* 0x15055CB9: je 0x15055d11 */
L_15055CBB:
    MEM8(eax) = (uint8_t)(LO8(ecx)); /* 0x15055CBB: mov byte ptr [eax], cl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15055CBD: inc eax */
    _flag_k = FK_INC;
    /* cmp MEM8(eax), 0 */ /* 0x15055CBE: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15055CBB; /* 0x15055CC1: jne 0x15055cbb */
L_15055CC3:
    goto L_15055D11; /* 0x15055CC3: jmp 0x15055d11 */
L_15055CC5:
    ecx = MEM32(ebp + 0xC); /* 0x15055CC5: mov ecx, dword ptr [ebp + 0xc] */
    eax = ecx; /* 0x15055CC8: mov eax, ecx */
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x15055CCA: shr eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 8u; /* 0x15055CCA: shr eax, 8 */
    /* test LO8(eax), LO8(eax) */ /* 0x15055CCD: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15055D0A; /* 0x15055CCF: je 0x15055d0a */
L_15055CD1:
    /* test LO8(ecx), LO8(ecx) */ /* 0x15055CD1: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15055D00; /* 0x15055CD3: jne 0x15055d00 */
L_15055CD5:
    RECOMP_CALL(sub_15036430); /* 0x15055CD5: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x15055CDA: mov dword ptr [eax], 0x16 */
    SET_LO8(eax, 0x20u); /* 0x15055CE0: mov al, 0x20 */
    SET_LO8(ecx, LO8(eax)); /* 0x15055CE2: mov cl, al */
    goto L_15055D00; /* 0x15055CE4: jmp 0x15055d00 */
L_15055CE6:
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x15055CE6: mov byte ptr [esi], al */
    edx = esi; /* 0x15055CE8: mov edx, esi */
    /* cmp MEM8(esi + 0x1), 0 */ /* 0x15055CEA: cmp byte ptr [esi + 1], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x1)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15055CF8; /* 0x15055CEE: je 0x15055cf8 */
L_15055CF0:
    PUSH32(esp, 2); /* 0x15055CF0: push 2 */
    MEM8(esi + 0x1) = (uint8_t)(LO8(ecx)); /* 0x15055CF2: mov byte ptr [esi + 1], cl */
    esi = POP32_VAL(esp); /* 0x15055CF5: pop esi */
    goto L_15055CFE; /* 0x15055CF6: jmp 0x15055cfe */
L_15055CF8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15055CF8: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(edx) = (uint8_t)(0x20u); /* 0x15055CFA: mov byte ptr [edx], 0x20 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15055CFD: inc esi */
    _flag_k = FK_INC;
L_15055CFE:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x15055CFE: add esi, edx */
    _flag_k = FK_ADD;
L_15055D00:
    /* cmp MEM8(esi), 0 */ /* 0x15055D00: cmp byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15055CE6; /* 0x15055D03: jne 0x15055ce6 */
L_15055D05:
    goto L_15055D0F; /* 0x15055D05: jmp 0x15055d0f */
L_15055D07:
    MEM8(esi) = (uint8_t)(LO8(ecx)); /* 0x15055D07: mov byte ptr [esi], cl */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15055D09: inc esi */
    _flag_k = FK_INC;
L_15055D0A:
    /* cmp MEM8(esi), 0 */ /* 0x15055D0A: cmp byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15055D07; /* 0x15055D0D: jne 0x15055d07 */
L_15055D0F:
    esi = edi; /* 0x15055D0F: mov esi, edi */
L_15055D11:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x15055D11: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15055D1E; /* 0x15055D15: je 0x15055d1e */
L_15055D17:
    ecx = MEM32(ebp + (-0x8)); /* 0x15055D17: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x15055D1A: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_15055D1E:
    edi = POP32_VAL(esp); /* 0x15055D1E: pop edi */
    eax = esi; /* 0x15055D1F: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x15055D21: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15055D22: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15055D23: ret  */
    RECOMP_REGS_OUT();
}

void sub_15055D30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15055D30u);

L_15055D30:
    edi = edi; /* 0x15055D30: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15055D32: push ebp */
    ebp = esp; /* 0x15055D33: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x15055D35: push ecx */
    PUSH32(esp, ecx); /* 0x15055D36: push ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x15055D37: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x15055D3B: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x15055D3C: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x15055D3F: push esi */
    PUSH32(esp, edi); /* 0x15055D40: push edi */
    /* test ebx, ebx */ /* 0x15055D41: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15055DF1; /* 0x15055D43: je 0x15055df1 */
L_15055D49:
    edi = MEM32(ebp + 0xC); /* 0x15055D49: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x15055D4C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15055DF1; /* 0x15055D4E: je 0x15055df1 */
L_15055D54:
    eax = MEM32(ebp + 0x10); /* 0x15055D54: mov eax, dword ptr [ebp + 0x10] */
    esi = ebx; /* 0x15055D57: mov esi, ebx */
    ecx = eax; /* 0x15055D59: mov ecx, eax */
    if (8u) _cf = (((ecx) >> 7) & 1u); /* 0x15055D5B: shr ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 8u; /* 0x15055D5B: shr ecx, 8 */
    MEM32(ebp + (-0x8)) = ecx; /* 0x15055D5E: mov dword ptr [ebp - 8], ecx */
    /* test LO8(ecx), LO8(ecx) */ /* 0x15055D61: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15055DB3; /* 0x15055D63: je 0x15055db3 */
L_15055D65:
    /* test LO8(eax), LO8(eax) */ /* 0x15055D65: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15055DC1; /* 0x15055D67: je 0x15055dc1 */
L_15055D69:
    eax = (uint32_t)LO8(ecx); /* 0x15055D69: movzx eax, cl */
    PUSH32(esp, eax); /* 0x15055D6C: push eax */
    RECOMP_CALL(sub_15050550); /* 0x15055D6D: call 0x15050550 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15055D72: pop ecx */
    /* test eax, eax */ /* 0x15055D73: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15055DC1; /* 0x15055D75: je 0x15055dc1 */
L_15055D77:
    /* cmp MEM8(ebx), 0 */ /* 0x15055D77: cmp byte ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15055E15; /* 0x15055D7A: je 0x15055e15 */
L_15055D80:
    eax = MEM32(ebp + 0x10); /* 0x15055D80: mov eax, dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + (-0x8)); /* 0x15055D83: mov ecx, dword ptr [ebp - 8] */
L_15055D86:
    MEM32(ebp + (-0x8)) = edi; /* 0x15055D86: mov dword ptr [ebp - 8], edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 1; /* 0x15055D89: sub edi, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15055DE7; /* 0x15055D8C: je 0x15055de7 */
L_15055D8E:
    /* cmp MEM8(esi + 0x1), 0 */ /* 0x15055D8E: cmp byte ptr [esi + 1], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x1)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15055DA8; /* 0x15055D92: je 0x15055da8 */
L_15055D94:
    MEM8(esi) = (uint8_t)(LO8(ecx)); /* 0x15055D94: mov byte ptr [esi], cl */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 1; /* 0x15055D96: sub edi, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15055DE7; /* 0x15055D99: je 0x15055de7 */
L_15055D9B:
    MEM8(esi + 0x1) = (uint8_t)(LO8(eax)); /* 0x15055D9B: mov byte ptr [esi + 1], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x15055D9E: add esi, 2 */
    _flag_k = FK_ADD;
    /* cmp MEM8(esi), 0 */ /* 0x15055DA1: cmp byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15055D86; /* 0x15055DA4: jne 0x15055d86 */
L_15055DA6:
    goto L_15055E15; /* 0x15055DA6: jmp 0x15055e15 */
L_15055DA8:
    edi = MEM32(ebp + (-0x8)); /* 0x15055DA8: mov edi, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15055DAB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(esi) = (uint8_t)(0); /* 0x15055DAD: mov byte ptr [esi], 0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15055DB0: inc eax */
    _flag_k = FK_INC;
    goto L_15055DEA; /* 0x15055DB1: jmp 0x15055dea */
L_15055DB3:
    eax = (uint32_t)LO8(eax); /* 0x15055DB3: movzx eax, al */
    PUSH32(esp, eax); /* 0x15055DB6: push eax */
    RECOMP_CALL(sub_15050550); /* 0x15055DB7: call 0x15050550 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15055DBC: pop ecx */
    /* test eax, eax */ /* 0x15055DBD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15055DD2; /* 0x15055DBF: je 0x15055dd2 */
L_15055DC1:
    MEM8(ebx) = (uint8_t)(0); /* 0x15055DC1: mov byte ptr [ebx], 0 */
L_15055DC4:
    RECOMP_CALL(sub_15036430); /* 0x15055DC4: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x2Au); /* 0x15055DC9: push 0x2a */
    ecx = POP32_VAL(esp); /* 0x15055DCB: pop ecx */
    MEM32(eax) = ecx; /* 0x15055DCC: mov dword ptr [eax], ecx */
    eax = ecx; /* 0x15055DCE: mov eax, ecx */
    goto L_15055E0C; /* 0x15055DD0: jmp 0x15055e0c */
L_15055DD2:
    /* cmp MEM8(ebx), 0 */ /* 0x15055DD2: cmp byte ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15055E15; /* 0x15055DD5: je 0x15055e15 */
L_15055DD7:
    eax = MEM32(ebp + 0x10); /* 0x15055DD7: mov eax, dword ptr [ebp + 0x10] */
L_15055DDA:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 1; /* 0x15055DDA: sub edi, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15055DE7; /* 0x15055DDD: je 0x15055de7 */
L_15055DDF:
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x15055DDF: mov byte ptr [esi], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15055DE1: inc esi */
    _flag_k = FK_INC;
    /* cmp MEM8(esi), 0 */ /* 0x15055DE2: cmp byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15055DDA; /* 0x15055DE5: jne 0x15055dda */
L_15055DE7:
    eax = MEM32(ebp + (-0x4)); /* 0x15055DE7: mov eax, dword ptr [ebp - 4] */
L_15055DEA:
    /* test edi, edi */ /* 0x15055DEA: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15055E11; /* 0x15055DEC: jne 0x15055e11 */
L_15055DEE:
    MEM8(ebx) = (uint8_t)(0); /* 0x15055DEE: mov byte ptr [ebx], 0 */
L_15055DF1:
    RECOMP_CALL(sub_15036430); /* 0x15055DF1: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x15055DF6: push 0x16 */
    esi = POP32_VAL(esp); /* 0x15055DF8: pop esi */
    MEM32(eax) = esi; /* 0x15055DF9: mov dword ptr [eax], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15055DFB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15055DFD: push eax */
    PUSH32(esp, eax); /* 0x15055DFE: push eax */
    PUSH32(esp, eax); /* 0x15055DFF: push eax */
    PUSH32(esp, eax); /* 0x15055E00: push eax */
    PUSH32(esp, eax); /* 0x15055E01: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x15055E02: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x15055E07: mov eax, esi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15055E09: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15055E0C:
    edi = POP32_VAL(esp); /* 0x15055E0C: pop edi */
    esi = POP32_VAL(esp); /* 0x15055E0D: pop esi */
    ebx = POP32_VAL(esp); /* 0x15055E0E: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15055E0F: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15055E10: ret  */
L_15055E11:
    /* test eax, eax */ /* 0x15055E11: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15055DC4; /* 0x15055E13: jne 0x15055dc4 */
L_15055E15:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15055E15: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_15055E0C; /* 0x15055E17: jmp 0x15055e0c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_15055E20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15055E20u);

L_15055E20:
    edi = edi; /* 0x15055E20: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15055E22: push ebp */
    ebp = esp; /* 0x15055E23: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x15055E25: sub esp, 0x18 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x15055E28: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x15055E2C: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x15055E2D: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x15055E30: push esi */
    /* test ebx, ebx */ /* 0x15055E31: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15055F46; /* 0x15055E33: je 0x15055f46 */
L_15055E39:
    esi = MEM32(ebp + 0xC); /* 0x15055E39: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x15055E3C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15055F46; /* 0x15055E3E: je 0x15055f46 */
L_15055E44:
    PUSH32(esp, edi); /* 0x15055E44: push edi */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15055E45: push dword ptr [ebp + 0x14] */
    ecx = ebp + (-0x18); /* 0x15055E48: lea ecx, [ebp - 0x18] */
    RECOMP_CALL(sub_1502F870); /* 0x15055E4B: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x14)); /* 0x15055E50: mov eax, dword ptr [ebp - 0x14] */
    /* cmp MEM32(eax + 0x8), 0 */ /* 0x15055E53: cmp dword ptr [eax + 8], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15055E6A; /* 0x15055E57: jne 0x15055e6a */
L_15055E59:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15055E59: push dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x15055E5C: push esi */
    PUSH32(esp, ebx); /* 0x15055E5D: push ebx */
    RECOMP_CALL(sub_1508C320); /* 0x15055E5E: call 0x1508c320 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15055E63: add esp, 0xc */
    _flag_k = FK_ADD;
    esi = eax; /* 0x15055E66: mov esi, eax */
    goto L_15055EBF; /* 0x15055E68: jmp 0x15055ebf */
L_15055E6A:
    eax = MEM32(ebp + 0x10); /* 0x15055E6A: mov eax, dword ptr [ebp + 0x10] */
    edi = ebx; /* 0x15055E6D: mov edi, ebx */
    ecx = eax; /* 0x15055E6F: mov ecx, eax */
    if (8u) _cf = (((ecx) >> 7) & 1u); /* 0x15055E71: shr ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 8u; /* 0x15055E71: shr ecx, 8 */
    MEM32(ebp + (-0x8)) = ecx; /* 0x15055E74: mov dword ptr [ebp - 8], ecx */
    /* test LO8(ecx), LO8(ecx) */ /* 0x15055E77: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15055EE1; /* 0x15055E79: je 0x15055ee1 */
L_15055E7B:
    /* test LO8(eax), LO8(eax) */ /* 0x15055E7B: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15055EF4; /* 0x15055E7D: je 0x15055ef4 */
L_15055E7F:
    eax = ebp + (-0x18); /* 0x15055E7F: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x15055E82: push eax */
    eax = (uint32_t)LO8(ecx); /* 0x15055E83: movzx eax, cl */
    PUSH32(esp, eax); /* 0x15055E86: push eax */
    RECOMP_CALL(sub_15050570); /* 0x15055E87: call 0x15050570 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15055E8C: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15055E8D: pop ecx */
    /* test eax, eax */ /* 0x15055E8E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15055EF4; /* 0x15055E90: je 0x15055ef4 */
L_15055E92:
    /* cmp MEM8(ebx), 0 */ /* 0x15055E92: cmp byte ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15055EBD; /* 0x15055E95: je 0x15055ebd */
L_15055E97:
    eax = MEM32(ebp + 0x10); /* 0x15055E97: mov eax, dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + (-0x8)); /* 0x15055E9A: mov ecx, dword ptr [ebp - 8] */
L_15055E9D:
    MEM32(ebp + (-0x8)) = esi; /* 0x15055E9D: mov dword ptr [ebp - 8], esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 1; /* 0x15055EA0: sub esi, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15055F0E; /* 0x15055EA3: je 0x15055f0e */
L_15055EA5:
    /* cmp MEM8(edi + 0x1), 0 */ /* 0x15055EA5: cmp byte ptr [edi + 1], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x1)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15055ED6; /* 0x15055EA9: je 0x15055ed6 */
L_15055EAB:
    MEM8(edi) = (uint8_t)(LO8(ecx)); /* 0x15055EAB: mov byte ptr [edi], cl */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 1; /* 0x15055EAD: sub esi, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15055F0E; /* 0x15055EB0: je 0x15055f0e */
L_15055EB2:
    MEM8(edi + 0x1) = (uint8_t)(LO8(eax)); /* 0x15055EB2: mov byte ptr [edi + 1], al */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x15055EB5: add edi, 2 */
    _flag_k = FK_ADD;
    /* cmp MEM8(edi), 0 */ /* 0x15055EB8: cmp byte ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15055E9D; /* 0x15055EBB: jne 0x15055e9d */
L_15055EBD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15055EBD: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_15055EBF:
    /* cmp MEM8(ebp + (-0xC)), 0 */ /* 0x15055EBF: cmp byte ptr [ebp - 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0xC))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    edi = POP32_VAL(esp); /* 0x15055EC3: pop edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15055F5F; /* 0x15055EC4: je 0x15055f5f */
L_15055ECA:
    ecx = MEM32(ebp + (-0x10)); /* 0x15055ECA: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x15055ECD: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15055F5F; /* 0x15055ED1: jmp 0x15055f5f */
L_15055ED6:
    esi = MEM32(ebp + (-0x8)); /* 0x15055ED6: mov esi, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15055ED9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(edi) = (uint8_t)(0); /* 0x15055EDB: mov byte ptr [edi], 0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15055EDE: inc eax */
    _flag_k = FK_INC;
    goto L_15055F11; /* 0x15055EDF: jmp 0x15055f11 */
L_15055EE1:
    ecx = ebp + (-0x18); /* 0x15055EE1: lea ecx, [ebp - 0x18] */
    eax = (uint32_t)LO8(eax); /* 0x15055EE4: movzx eax, al */
    PUSH32(esp, ecx); /* 0x15055EE7: push ecx */
    PUSH32(esp, eax); /* 0x15055EE8: push eax */
    RECOMP_CALL(sub_15050570); /* 0x15055EE9: call 0x15050570 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15055EEE: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15055EEF: pop ecx */
    /* test eax, eax */ /* 0x15055EF0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15055EF9; /* 0x15055EF2: je 0x15055ef9 */
L_15055EF4:
    MEM8(ebx) = (uint8_t)(0); /* 0x15055EF4: mov byte ptr [ebx], 0 */
    goto L_15055F37; /* 0x15055EF7: jmp 0x15055f37 */
L_15055EF9:
    /* cmp MEM8(ebx), 0 */ /* 0x15055EF9: cmp byte ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15055EBD; /* 0x15055EFC: je 0x15055ebd */
L_15055EFE:
    eax = MEM32(ebp + 0x10); /* 0x15055EFE: mov eax, dword ptr [ebp + 0x10] */
L_15055F01:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 1; /* 0x15055F01: sub esi, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15055F0E; /* 0x15055F04: je 0x15055f0e */
L_15055F06:
    MEM8(edi) = (uint8_t)(LO8(eax)); /* 0x15055F06: mov byte ptr [edi], al */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x15055F08: inc edi */
    _flag_k = FK_INC;
    /* cmp MEM8(edi), 0 */ /* 0x15055F09: cmp byte ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15055F01; /* 0x15055F0C: jne 0x15055f01 */
L_15055F0E:
    eax = MEM32(ebp + (-0x4)); /* 0x15055F0E: mov eax, dword ptr [ebp - 4] */
L_15055F11:
    /* test esi, esi */ /* 0x15055F11: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15055F33; /* 0x15055F13: jne 0x15055f33 */
L_15055F15:
    MEM8(ebx) = (uint8_t)(0); /* 0x15055F15: mov byte ptr [ebx], 0 */
    RECOMP_CALL(sub_15036430); /* 0x15055F18: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x15055F1D: push 0x16 */
    esi = POP32_VAL(esp); /* 0x15055F1F: pop esi */
    MEM32(eax) = esi; /* 0x15055F20: mov dword ptr [eax], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15055F22: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15055F24: push eax */
    PUSH32(esp, eax); /* 0x15055F25: push eax */
    PUSH32(esp, eax); /* 0x15055F26: push eax */
    PUSH32(esp, eax); /* 0x15055F27: push eax */
    PUSH32(esp, eax); /* 0x15055F28: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x15055F29: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15055F2E: add esp, 0x14 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_15055EBF; /* 0x15055F31: jmp 0x15055ebf */
L_15055F33:
    /* test eax, eax */ /* 0x15055F33: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15055EBD; /* 0x15055F35: je 0x15055ebd */
L_15055F37:
    RECOMP_CALL(sub_15036430); /* 0x15055F37: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x2Au); /* 0x15055F3C: push 0x2a */
    esi = POP32_VAL(esp); /* 0x15055F3E: pop esi */
    MEM32(eax) = esi; /* 0x15055F3F: mov dword ptr [eax], esi */
    RECOMP_BACKEDGE();
    goto L_15055EBF; /* 0x15055F41: jmp 0x15055ebf */
L_15055F46:
    RECOMP_CALL(sub_15036430); /* 0x15055F46: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x15055F4B: push 0x16 */
    esi = POP32_VAL(esp); /* 0x15055F4D: pop esi */
    MEM32(eax) = esi; /* 0x15055F4E: mov dword ptr [eax], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15055F50: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15055F52: push eax */
    PUSH32(esp, eax); /* 0x15055F53: push eax */
    PUSH32(esp, eax); /* 0x15055F54: push eax */
    PUSH32(esp, eax); /* 0x15055F55: push eax */
    PUSH32(esp, eax); /* 0x15055F56: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x15055F57: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15055F5C: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15055F5F:
    eax = esi; /* 0x15055F5F: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x15055F61: pop esi */
    ebx = POP32_VAL(esp); /* 0x15055F62: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15055F63: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15055F64: ret  */
    RECOMP_REGS_OUT();
}
