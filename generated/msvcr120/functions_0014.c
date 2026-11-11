#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_10068CFF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10068CFFu);

L_10068CFF:
    PUSH32(esp, ebp); /* 0x10068CFF: push ebp */
    ebp = esp; /* 0x10068D00: mov ebp, esp */
    eax = MEM32(ecx); /* 0x10068D02: mov eax, dword ptr [ecx] */
    PUSH32(esp, ebx); /* 0x10068D04: push ebx */
    PUSH32(esp, esi); /* 0x10068D05: push esi */
    PUSH32(esp, edi); /* 0x10068D06: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x10068D07: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x10068D09: inc edi */
    _flag_k = FK_INC;
    PUSH32(esp, edi); /* 0x10068D0A: push edi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10068D0B: push dword ptr [ebp + 0x10] */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x10068D0E: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x14); /* 0x10068D11: mov ecx, dword ptr [ebp + 0x14] */
    esi = eax + 0x34; /* 0x10068D14: lea esi, [eax + 0x34] */
    MEM32(ecx) = eax; /* 0x10068D17: mov dword ptr [ecx], eax */
    eax = esi + 0x20; /* 0x10068D19: lea eax, [esi + 0x20] */
    ecx = eax; /* 0x10068D1C: mov ecx, eax */
    MEM32(ebp + 0x10) = eax; /* 0x10068D1E: mov dword ptr [ebp + 0x10], eax */
    RECOMP_CALL(sub_10023D1E); /* 0x10068D21: call 0x10023d1e */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x10068D26: push edi */
    ebx = esi + 0x1C; /* 0x10068D27: lea ebx, [esi + 0x1c] */
    ecx = esi; /* 0x10068D2A: mov ecx, esi */
    PUSH32(esp, MEM32(ebx)); /* 0x10068D2C: push dword ptr [ebx] */
    RECOMP_CALL(sub_10068E3E); /* 0x10068D2E: call 0x10068e3e */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebx); /* 0x10068D33: mov edi, dword ptr [ebx] */
    esi = eax; /* 0x10068D35: mov esi, eax */
    ecx = MEM32(ebp + 0xC); /* 0x10068D37: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10068D3A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10068D3C: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - MEM32(esi + 0x10); /* 0x10068D3D: sub edi, dword ptr [esi + 0x10] */
    _flag_k = FK_CMP;
    edx = MEM32(esi + 0xC); /* 0x10068D40: mov edx, dword ptr [esi + 0xc] */
    MEM32(edx + edi * 4) = ecx; /* 0x10068D43: mov dword ptr [edx + edi*4], ecx */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(ebx), _sum = MEM32(ebx) + eax; eax = _old; MEM32(ebx) = _sum; } /* 0x10068D46: lock xadd dword ptr [ebx], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10068D4A: inc eax */
    _flag_k = FK_INC;
    eax = MEM32(ebp + 0x10); /* 0x10068D4B: mov eax, dword ptr [ebp + 0x10] */
    MEM32(eax) = 0; /* 0x10068D4E: mov dword ptr [eax], 0 */
    eax = MEM32(ebp + 0x8); /* 0x10068D54: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0x4) = edi; /* 0x10068D57: mov dword ptr [eax + 4], edi */
    edi = POP32_VAL(esp); /* 0x10068D5A: pop edi */
    MEM32(eax) = esi; /* 0x10068D5B: mov dword ptr [eax], esi */
    esi = POP32_VAL(esp); /* 0x10068D5D: pop esi */
    ebx = POP32_VAL(esp); /* 0x10068D5E: pop ebx */
    ebp = POP32_VAL(esp); /* 0x10068D5F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x10068D60: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_10068D63(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10068D63u);

L_10068D63:
    PUSH32(esp, ebp); /* 0x10068D63: push ebp */
    ebp = esp; /* 0x10068D64: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x10068D66: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(ecx + 0x8) = MEM32(ecx + 0x8) & 0; /* 0x10068D69: and dword ptr [ecx + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx + 0xC) = eax; /* 0x10068D6D: mov dword ptr [ecx + 0xc], eax */
    eax = ecx; /* 0x10068D70: mov eax, ecx */
    ebp = POP32_VAL(esp); /* 0x10068D72: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10068D73: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_10068D76(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10068D76u);

L_10068D76:
    PUSH32(esp, ebx); /* 0x10068D76: push ebx */
    PUSH32(esp, esi); /* 0x10068D77: push esi */
    esi = ecx; /* 0x10068D78: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10068D7A: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_10068D7C:
    eax = MEM32(esi + 0x8); /* 0x10068D7C: mov eax, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x10068D7F: sub eax, ebx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_10068D95; /* 0x10068D81: jne 0x10068d95 */
L_10068D83:
    PUSH32(esp, MEM32(0x100E066C)); /* 0x10068D83: push dword ptr [0x100e066c] */
    ecx = esi; /* 0x10068D89: mov ecx, esi */
    MEM32(esi + 0x8) = ebx; /* 0x10068D8B: mov dword ptr [esi + 8], ebx */
    RECOMP_CALL(sub_10068EC1); /* 0x10068D8E: call 0x10068ec1 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_10068D7C; /* 0x10068D93: jmp 0x10068d7c */
L_10068D95:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10068D95: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_10068DCC; /* 0x10068D96: je 0x10068dcc */
L_10068D98:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10068D98: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_10068DB7; /* 0x10068D99: je 0x10068db7 */
L_10068D9B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10068D9B: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_10068DA3; /* 0x10068D9C: je 0x10068da3 */
L_10068D9E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10068D9E: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_10068DB3; /* 0x10068D9F: jne 0x10068db3 */
L_10068DA1:
    goto L_10068DC5; /* 0x10068DA1: jmp 0x10068dc5 */
L_10068DA3:
    PUSH32(esp, MEM32(0x100E066C)); /* 0x10068DA3: push dword ptr [0x100e066c] */
    ecx = esi; /* 0x10068DA9: mov ecx, esi */
    MEM32(esi + 0x8) = ebx; /* 0x10068DAB: mov dword ptr [esi + 8], ebx */
    RECOMP_CALL(sub_10068EC1); /* 0x10068DAE: call 0x10068ec1 */
    RECOMP_FLAGS_IN();
L_10068DB3:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x10068DB3: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_10068DE1; /* 0x10068DB5: jmp 0x10068de1 */
L_10068DB7:
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) - 1; /* 0x10068DB7: dec dword ptr [esi + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_10068DC3; /* 0x10068DBA: jne 0x10068dc3 */
L_10068DBC:
    MEM32(esi + 0x8) = 3; /* 0x10068DBC: mov dword ptr [esi + 8], 3 */
L_10068DC3:
    SET_LO8(ebx, 1); /* 0x10068DC3: mov bl, 1 */
L_10068DC5:
    RECOMP_ICALL(MEM32(esi + 0xC)); /* 0x10068DC5: call dword ptr [esi + 0xc] */
    RECOMP_FLAGS_IN();
    SET_LO8(eax, LO8(ebx)); /* 0x10068DC8: mov al, bl */
    goto L_10068DE1; /* 0x10068DCA: jmp 0x10068de1 */
L_10068DCC:
    /* pause */ /* 0x10068DCC: pause  */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(1);
    MEM32(esi) = MEM32(esi) - 1; /* 0x10068DCE: dec dword ptr [esi] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_10068DDF; /* 0x10068DD0: jne 0x10068ddf */
L_10068DD2:
    eax = MEM32(esi + 0x4); /* 0x10068DD2: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x10068DD5: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x10068DD7: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 3; /* 0x10068DD9: add eax, 3 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x8) = eax; /* 0x10068DDC: mov dword ptr [esi + 8], eax */
L_10068DDF:
    SET_LO8(eax, 1); /* 0x10068DDF: mov al, 1 */
L_10068DE1:
    esi = POP32_VAL(esp); /* 0x10068DE1: pop esi */
    ebx = POP32_VAL(esp); /* 0x10068DE2: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10068DE3: ret  */
    RECOMP_REGS_OUT();
}

void sub_10068DE4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10068DE4u);

L_10068DE4:
    PUSH32(esp, ebp); /* 0x10068DE4: push ebp */
    ebp = esp; /* 0x10068DE5: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x10068DE7: push ebx */
    PUSH32(esp, esi); /* 0x10068DE8: push esi */
    PUSH32(esp, edi); /* 0x10068DE9: push edi */
    ebx = ecx; /* 0x10068DEA: mov ebx, ecx */
    RECOMP_CALL(sub_10023AF4); /* 0x10068DEC: call 0x10023af4 */
    RECOMP_FLAGS_IN();
    ecx = ebx + 0x8; /* 0x10068DF1: lea ecx, [ebx + 8] */
    RECOMP_CALL(sub_10023D1E); /* 0x10068DF4: call 0x10023d1e */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0x8); /* 0x10068DF9: mov edx, dword ptr [ebp + 8] */
    edi = edx + 0xE8; /* 0x10068DFC: lea edi, [edx + 0xe8] */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    MEM32(edi) = MEM32(edi) & 0; /* 0x10068E02: and dword ptr [edi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebx + 0x4); /* 0x10068E05: mov eax, dword ptr [ebx + 4] */
    MEM32(eax) = edx; /* 0x10068E08: mov dword ptr [eax], edx */
    MEM32(ebx + 0x4) = edi; /* 0x10068E0A: mov dword ptr [ebx + 4], edi */
    MEM32(ebx + 0x8) = 0; /* 0x10068E0D: mov dword ptr [ebx + 8], 0 */
    RECOMP_CALL(sub_10023AF4); /* 0x10068E14: call 0x10023af4 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x10068E19: pop edi */
    esi = POP32_VAL(esp); /* 0x10068E1A: pop esi */
    ebx = POP32_VAL(esp); /* 0x10068E1B: pop ebx */
    ebp = POP32_VAL(esp); /* 0x10068E1C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10068E1D: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_10068E20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10068E20u);

L_10068E20:
    { _itail_tgt = (uint32_t)(MEM32(ecx + 0xC)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_10068E23(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10068E23u);

L_10068E23:
    PUSH32(esp, MEM32(0x100E066C)); /* 0x10068E23: push dword ptr [0x100e066c] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(ecx + 0x8) = MEM32(ecx + 0x8) & 0; /* 0x10068E29: and dword ptr [ecx + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_10068EC1); /* 0x10068E2D: call 0x10068ec1 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10068E32: ret  */
    RECOMP_REGS_OUT();
}

void sub_10068E33(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10068E33u);

L_10068E33:
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(1);
    MEM32(ecx) = MEM32(ecx) - 1; /* 0x10068E33: dec dword ptr [ecx] */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10068E35: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, MEM32(ecx) */ /* 0x10068E37: cmp eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x10068E39: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x10068E3B: neg eax */
    _flag_k = FK_CMP;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10068E3D: ret  */
    RECOMP_REGS_OUT();
}

void sub_10068E3E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10068E3Eu);

L_10068E3E:
    PUSH32(esp, 4); /* 0x10068E3E: push 4 */
    eax = 0x100DAA94u; /* 0x10068E40: mov eax, 0x100daa94 */
    RECOMP_CALL(sub_100149A4); /* 0x10068E45: call 0x100149a4 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x10068E4A: mov esi, ecx */
    /* cmp MEM32(esi + 0x14), 0 */ /* 0x10068E4C: cmp dword ptr [esi + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10068E57; /* 0x10068E50: jne 0x10068e57 */
L_10068E52:
    RECOMP_CALL(sub_10068EE3); /* 0x10068E52: call 0x10068ee3 */
    RECOMP_FLAGS_IN();
L_10068E57:
    /* cmp MEM8(ebp + 0xC), 0 */ /* 0x10068E57: cmp byte ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10068E62; /* 0x10068E5B: je 0x10068e62 */
L_10068E5D:
    ecx = MEM32(esi + 0x10); /* 0x10068E5D: mov ecx, dword ptr [esi + 0x10] */
    goto L_10068E65; /* 0x10068E60: jmp 0x10068e65 */
L_10068E62:
    ecx = MEM32(esi + 0x14); /* 0x10068E62: mov ecx, dword ptr [esi + 0x14] */
L_10068E65:
    eax = MEM32(esi + 0xC); /* 0x10068E65: mov eax, dword ptr [esi + 0xc] */
    ebx = ecx + 0x10; /* 0x10068E68: lea ebx, [ecx + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebx); /* 0x10068E6B: add eax, dword ptr [ebx] */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + 0x8), eax */ /* 0x10068E6D: cmp dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_10068EB7; /* 0x10068E70: jb 0x10068eb7 */
L_10068E72:
    edi = ecx + 0x18; /* 0x10068E72: lea edi, [ecx + 0x18] */
    ecx = MEM32(edi); /* 0x10068E75: mov ecx, dword ptr [edi] */
    /* test ecx, ecx */ /* 0x10068E77: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10068E65; /* 0x10068E79: jne 0x10068e65 */
L_10068E7B:
    PUSH32(esp, 0x2Cu); /* 0x10068E7B: push 0x2c */
    RECOMP_CALL(sub_1000EE11); /* 0x10068E7D: call 0x1000ee11 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10068E82: pop ecx */
    ecx = eax; /* 0x10068E83: mov ecx, eax */
    MEM32(ebp + 0xC) = ecx; /* 0x10068E85: mov dword ptr [ebp + 0xc], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x10068E88: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x10068E8C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10068EA8; /* 0x10068E8E: je 0x10068ea8 */
L_10068E90:
    eax = MEM32(ebx); /* 0x10068E90: mov eax, dword ptr [ebx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esi + 0xC); /* 0x10068E92: add eax, dword ptr [esi + 0xc] */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x10068E95: push eax */
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x10068E96: push dword ptr [esi + 0xc] */
    eax = esi + 0x4; /* 0x10068E99: lea eax, [esi + 4] */
    PUSH32(esp, eax); /* 0x10068E9C: push eax */
    PUSH32(esp, MEM32(esi)); /* 0x10068E9D: push dword ptr [esi] */
    RECOMP_CALL(sub_10025F2F); /* 0x10068E9F: call 0x10025f2f */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x10068EA4: mov ecx, eax */
    goto L_10068EAA; /* 0x10068EA6: jmp 0x10068eaa */
L_10068EA8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10068EA8: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_10068EAA:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x10068EAA: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x10) = ecx; /* 0x10068EAE: mov dword ptr [esi + 0x10], ecx */
    MEM32(edi) = ecx; /* 0x10068EB1: mov dword ptr [edi], ecx */
    /* test ecx, ecx */ /* 0x10068EB3: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10068E65; /* 0x10068EB5: jne 0x10068e65 */
L_10068EB7:
    eax = ecx; /* 0x10068EB7: mov eax, ecx */
    RECOMP_CALL(sub_100149D7); /* 0x10068EB9: call 0x100149d7 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x10068EBE: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_10068EC1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10068EC1u);

L_10068EC1:
    PUSH32(esp, ebp); /* 0x10068EC1: push ebp */
    ebp = esp; /* 0x10068EC2: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x10068EC4: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x10068EC7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10068ED4; /* 0x10068EC9: jne 0x10068ed4 */
L_10068ECB:
    MEM32(ecx + 0x8) = 4; /* 0x10068ECB: mov dword ptr [ecx + 8], 4 */
    goto L_10068EDF; /* 0x10068ED2: jmp 0x10068edf */
L_10068ED4:
    MEM32(ecx) = eax; /* 0x10068ED4: mov dword ptr [ecx], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10068ED6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10068ED8: inc eax */
    _flag_k = FK_INC;
    MEM32(ecx + 0x4) = eax; /* 0x10068ED9: mov dword ptr [ecx + 4], eax */
    MEM32(ecx + 0x8) = eax; /* 0x10068EDC: mov dword ptr [ecx + 8], eax */
L_10068EDF:
    ebp = POP32_VAL(esp); /* 0x10068EDF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10068EE0: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_10068EE3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10068EE3u);

L_10068EE3:
    PUSH32(esp, 0x14u); /* 0x10068EE3: push 0x14 */
    eax = 0x100DAAE8u; /* 0x10068EE5: mov eax, 0x100daae8 */
    RECOMP_CALL(sub_100149A4); /* 0x10068EEA: call 0x100149a4 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x10068EEF: mov esi, ecx */
    edi = esi + 0x10; /* 0x10068EF1: lea edi, [esi + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10068EF4: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi), ebx */ /* 0x10068EF6: cmp dword ptr [edi], ebx */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10068F37; /* 0x10068EF8: jne 0x10068f37 */
L_10068EFA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x10068EFA: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10068EFC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x10068EFE: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(edi); if (eax == _d) { MEM32(edi) = edx; } else { eax = _d; } } /* 0x10068EFF: lock cmpxchg dword ptr [edi], edx */
    _flag_k = FK_CMP;
    /* test eax, eax */ /* 0x10068F03: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10068F37; /* 0x10068F05: jne 0x10068f37 */
L_10068F07:
    PUSH32(esp, 0x2Cu); /* 0x10068F07: push 0x2c */
    RECOMP_CALL(sub_1000EE11); /* 0x10068F09: call 0x1000ee11 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10068F0E: pop ecx */
    MEM32(ebp + (-0x10)) = eax; /* 0x10068F0F: mov dword ptr [ebp - 0x10], eax */
    MEM32(ebp + (-0x4)) = ebx; /* 0x10068F12: mov dword ptr [ebp - 4], ebx */
    /* test eax, eax */ /* 0x10068F15: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10068F2C; /* 0x10068F17: je 0x10068f2c */
L_10068F19:
    PUSH32(esp, ebx); /* 0x10068F19: push ebx */
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x10068F1A: push dword ptr [esi + 0xc] */
    ecx = esi + 0x4; /* 0x10068F1D: lea ecx, [esi + 4] */
    PUSH32(esp, ecx); /* 0x10068F20: push ecx */
    PUSH32(esp, MEM32(esi)); /* 0x10068F21: push dword ptr [esi] */
    ecx = eax; /* 0x10068F23: mov ecx, eax */
    RECOMP_CALL(sub_10025F2F); /* 0x10068F25: call 0x10025f2f */
    RECOMP_FLAGS_IN();
    goto L_10068F2E; /* 0x10068F2A: jmp 0x10068f2e */
L_10068F2C:
    eax = ebx; /* 0x10068F2C: mov eax, ebx */
L_10068F2E:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x10068F2E: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi) = eax; /* 0x10068F32: mov dword ptr [edi], eax */
    MEM32(esi + 0x14) = eax; /* 0x10068F34: mov dword ptr [esi + 0x14], eax */
L_10068F37:
    /* cmp MEM32(esi + 0x14), ebx */ /* 0x10068F37: cmp dword ptr [esi + 0x14], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10068F53; /* 0x10068F3A: jne 0x10068f53 */
L_10068F3C:
    MEM32(ebp + (-0x18)) = ebx; /* 0x10068F3C: mov dword ptr [ebp - 0x18], ebx */
    MEM32(ebp + (-0x14)) = 0x1007A487u; /* 0x10068F3F: mov dword ptr [ebp - 0x14], 0x1007a487 */
L_10068F46:
    ecx = ebp + (-0x20); /* 0x10068F46: lea ecx, [ebp - 0x20] */
    RECOMP_CALL(sub_10068D76); /* 0x10068F49: call 0x10068d76 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esi + 0x14), ebx */ /* 0x10068F4E: cmp dword ptr [esi + 0x14], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10068F46; /* 0x10068F51: je 0x10068f46 */
L_10068F53:
    RECOMP_CALL(sub_100149D7); /* 0x10068F53: call 0x100149d7 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10068F58: ret  */
    RECOMP_REGS_OUT();
}

void sub_10068F59(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10068F59u);

L_10068F59:
    PUSH32(esp, ebp); /* 0x10068F59: push ebp */
    ebp = esp; /* 0x10068F5A: mov ebp, esp */
    PUSH32(esp, esi); /* 0x10068F5C: push esi */
    esi = ecx; /* 0x10068F5D: mov esi, ecx */
    MEM32(esi) = 0x1002D1CCu; /* 0x10068F5F: mov dword ptr [esi], 0x1002d1cc */
    RECOMP_CALL(sub_10033A65); /* 0x10068F65: call 0x10033a65 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x10068F6A: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10068F77; /* 0x10068F6E: je 0x10068f77 */
L_10068F70:
    PUSH32(esp, esi); /* 0x10068F70: push esi */
    RECOMP_CALL(sub_1000ECE0); /* 0x10068F71: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10068F76: pop ecx */
L_10068F77:
    eax = esi; /* 0x10068F77: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x10068F79: pop esi */
    ebp = POP32_VAL(esp); /* 0x10068F7A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10068F7B: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_10068F7E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10068F7Eu);

L_10068F7E:
    /* test ecx, ecx */ /* 0x10068F7E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10068F88; /* 0x10068F80: je 0x10068f88 */
L_10068F82:
    eax = MEM32(ecx); /* 0x10068F82: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x10068F84: push 1 */
    RECOMP_ICALL(MEM32(eax)); /* 0x10068F86: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_10068F88:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10068F88: ret  */
    RECOMP_REGS_OUT();
}

void sub_10068F89(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10068F89u);

L_10068F89:
    PUSH32(esp, ebp); /* 0x10068F89: push ebp */
    ebp = esp; /* 0x10068F8A: mov ebp, esp */
    /* test MEM8(ebp + 0x8), 1 */ /* 0x10068F8C: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, esi); /* 0x10068F90: push esi */
    esi = ecx; /* 0x10068F91: mov esi, ecx */
    MEM32(esi) = 0x10067464u; /* 0x10068F93: mov dword ptr [esi], 0x10067464 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_10068FA2; /* 0x10068F99: je 0x10068fa2 */
L_10068F9B:
    PUSH32(esp, esi); /* 0x10068F9B: push esi */
    RECOMP_CALL(sub_1000ECE0); /* 0x10068F9C: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10068FA1: pop ecx */
L_10068FA2:
    eax = esi; /* 0x10068FA2: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x10068FA4: pop esi */
    ebp = POP32_VAL(esp); /* 0x10068FA5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10068FA6: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_10068FB1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10068FB1u);

L_10068FB1:
    PUSH32(esp, ebp); /* 0x10068FB1: push ebp */
    ebp = esp; /* 0x10068FB2: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x10068FB4: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x10068FB7: push esi */
    PUSH32(esp, 8); /* 0x10068FB8: push 8 */
    esi = ecx; /* 0x10068FBA: mov esi, ecx */
    RECOMP_CALL(sub_1000ED30); /* 0x10068FBC: call 0x1000ed30 */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x10068FC1: mov edx, eax */
    ecx = POP32_VAL(esp); /* 0x10068FC3: pop ecx */
    /* test edx, edx */ /* 0x10068FC4: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10068FEA; /* 0x10068FC6: je 0x10068fea */
L_10068FC8:
    eax = MEM32(ebp + 0x8); /* 0x10068FC8: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(edx + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(edx + 0x4) = MEM32(edx + 0x4) & 0; /* 0x10068FCB: and dword ptr [edx + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx) = eax; /* 0x10068FCF: mov dword ptr [edx], eax */
    /* cmp MEM32(esi), 0 */ /* 0x10068FD1: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10068FDA; /* 0x10068FD4: jne 0x10068fda */
L_10068FD6:
    MEM32(esi) = edx; /* 0x10068FD6: mov dword ptr [esi], edx */
    goto L_10068FE0; /* 0x10068FD8: jmp 0x10068fe0 */
L_10068FDA:
    eax = MEM32(esi + 0x4); /* 0x10068FDA: mov eax, dword ptr [esi + 4] */
    MEM32(eax + 0x4) = edx; /* 0x10068FDD: mov dword ptr [eax + 4], edx */
L_10068FE0:
    MEM32(esi + 0x4) = edx; /* 0x10068FE0: mov dword ptr [esi + 4], edx */
    esi = POP32_VAL(esp); /* 0x10068FE3: pop esi */
    esp = ebp; /* 0x10068FE4: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10068FE6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10068FE7: ret 4 */
L_10068FEA:
    PUSH32(esp, 1); /* 0x10068FEA: push 1 */
    eax = ebp + 0x8; /* 0x10068FEC: lea eax, [ebp + 8] */
    MEM32(ebp + 0x8) = 0x1002C7ECu; /* 0x10068FEF: mov dword ptr [ebp + 8], 0x1002c7ec */
    PUSH32(esp, eax); /* 0x10068FF6: push eax */
    ecx = ebp + (-0xC); /* 0x10068FF7: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_10033A4A); /* 0x10068FFA: call 0x10033a4a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1002C7FCu); /* 0x10068FFF: push 0x1002c7fc */
    eax = ebp + (-0xC); /* 0x10069004: lea eax, [ebp - 0xc] */
    MEM32(ebp + (-0xC)) = 0x1002D1CCu; /* 0x10069007: mov dword ptr [ebp - 0xc], 0x1002d1cc */
    PUSH32(esp, eax); /* 0x1006900E: push eax */
    RECOMP_CALL(sub_100192EB); /* 0x1006900F: call 0x100192eb */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x10069014u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10069015(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10069015u);

L_10069015:
    PUSH32(esp, 0x1Cu); /* 0x10069015: push 0x1c */
    eax = 0x100DAB8Cu; /* 0x10069017: mov eax, 0x100dab8c */
    RECOMP_CALL(sub_100149A4); /* 0x1006901C: call 0x100149a4 */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x10069021: mov edi, ecx */
    PUSH32(esp, 0x1Cu); /* 0x10069023: push 0x1c */
    RECOMP_CALL(sub_1000EE11); /* 0x10069025: call 0x1000ee11 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1006902A: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1006902B: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = eax; /* 0x1006902D: mov esi, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1006902F: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10069030: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x10069032: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10069063; /* 0x10069034: je 0x10069063 */
L_10069036:
    eax = MEM32(ebp + 0x8); /* 0x10069036: mov eax, dword ptr [ebp + 8] */
    MEM32(esi) = 0x10067464u; /* 0x10069039: mov dword ptr [esi], 0x10067464 */
    MEM32(esi) = 0x100690D0u; /* 0x1006903F: mov dword ptr [esi], 0x100690d0 */
    MEM32(esi + 0x14) = eax; /* 0x10069045: mov dword ptr [esi + 0x14], eax */
    eax = MEM32(ebp + 0xC); /* 0x10069048: mov eax, dword ptr [ebp + 0xc] */
    MEM32(esi + 0x4) = ecx; /* 0x1006904B: mov dword ptr [esi + 4], ecx */
    MEM32(esi + 0x8) = 3; /* 0x1006904E: mov dword ptr [esi + 8], 3 */
    MEM32(esi + 0x10) = ebx; /* 0x10069055: mov dword ptr [esi + 0x10], ebx */
    MEM32(esi) = 0x100690C0u; /* 0x10069058: mov dword ptr [esi], 0x100690c0 */
    MEM32(esi + 0x18) = eax; /* 0x1006905E: mov dword ptr [esi + 0x18], eax */
    goto L_10069065; /* 0x10069061: jmp 0x10069065 */
L_10069063:
    esi = ebx; /* 0x10069063: mov esi, ebx */
L_10069065:
    MEM32(esi + 0x8) = ebx; /* 0x10069065: mov dword ptr [esi + 8], ebx */
    eax = esi + 0x4; /* 0x10069068: lea eax, [esi + 4] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + ecx; ecx = _old; MEM32(eax) = _sum; } /* 0x1006906B: lock xadd dword ptr [eax], ecx */
    _flag_k = FK_ADD;
    MEM32(esi + 0x10) = edi; /* 0x1006906F: mov dword ptr [esi + 0x10], edi */
    /* cmp MEM32(edi + 0x8), ebx */ /* 0x10069072: cmp dword ptr [edi + 8], ebx */
    _flag_a = (uint32_t)(MEM32(edi + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100690A9; /* 0x10069075: jne 0x100690a9 */
L_10069077:
    eax = edi + 0x34; /* 0x10069077: lea eax, [edi + 0x34] */
    PUSH32(esp, eax); /* 0x1006907A: push eax */
    ecx = ebp + (-0x28); /* 0x1006907B: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_1006F6A1); /* 0x1006907E: call 0x1006f6a1 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = ebx; /* 0x10069083: mov dword ptr [ebp - 4], ebx */
    /* cmp MEM32(edi + 0x8), ebx */ /* 0x10069086: cmp dword ptr [edi + 8], ebx */
    _flag_a = (uint32_t)(MEM32(edi + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10069096; /* 0x10069089: jne 0x10069096 */
L_1006908B:
    PUSH32(esp, esi); /* 0x1006908B: push esi */
    ecx = edi + 0x54; /* 0x1006908C: lea ecx, [edi + 0x54] */
    RECOMP_CALL(sub_10068FB1); /* 0x1006908F: call 0x10068fb1 */
    RECOMP_FLAGS_IN();
    goto L_10069099; /* 0x10069094: jmp 0x10069099 */
L_10069096:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10069096: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x10069098: inc ebx */
    _flag_k = FK_INC;
L_10069099:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x10069099: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x28)); /* 0x1006909D: mov ecx, dword ptr [ebp - 0x28] */
    RECOMP_CALL(sub_1006F4D7); /* 0x100690A0: call 0x1006f4d7 */
    RECOMP_FLAGS_IN();
    /* test LO8(ebx), LO8(ebx) */ /* 0x100690A5: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100690B0; /* 0x100690A7: je 0x100690b0 */
L_100690A9:
    ecx = esi; /* 0x100690A9: mov ecx, esi */
    RECOMP_CALL(sub_10068B3A); /* 0x100690AB: call 0x10068b3a */
    RECOMP_FLAGS_IN();
L_100690B0:
    eax = esi; /* 0x100690B0: mov eax, esi */
    RECOMP_CALL(sub_100149D7); /* 0x100690B2: call 0x100149d7 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x100690B7: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_100690C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100690C0u);

L_100690C0:
    MEM32(edi + (-0x7081EFFA)) = ecx; /* 0x100690C0: mov dword ptr [edi - 0x7081effa], ecx */
    PUSH32(esp, _seg_es); /* 0x100690C6: push es */
    { uint32_t _aa = MEM8(ecx + (-0x4FEFF971)), _ab = HI8(ecx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100690C7: adc byte ptr [ecx - 0x4feff971], ch */
      MEM8(ecx + (-0x4FEFF971)) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_LE, _cf)) goto L_100690D5; /* 0x100690CD: jle 0x100690d5 */
L_100690CF:
    { uint32_t _aa = MEM8(ecx + 0x7E10068F), _ab = LO8(ecx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100690CF: adc byte ptr [ecx + 0x7e10068f], cl */
      MEM8(ecx + 0x7E10068F) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_100690D5:
    POP32(esp, MEM32(esi)); /* 0x100690D5: pop dword ptr [esi] */
    { uint32_t _aa = LO8(ebx), _ab = LO8(edx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100690D7: adc bl, dl */
      SET_LO8(ebx, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100690D9: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)((LO8(edx) | MEM8(eax))) << 24; _flag_b = (uint32_t)((LO8(edx) | MEM8(eax))) << 24;
    SET_LO8(edx, LO8(edx) | MEM8(eax)); /* 0x100690DA: or dl, byte ptr [eax] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, ebp); /* 0x100690DC: push ebp */
    ebp = esp; /* 0x100690DD: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x100690DF: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x100690E2: push -1 */
    PUSH32(esp, 0x100DABDCu); /* 0x100690E4: push 0x100dabdc */
    eax = MEM32(FS_BASE + (0)); /* 0x100690E9: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x100690EF: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x50u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x50u; /* 0x100690F0: sub esp, 0x50 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x100690F3: push ebx */
    PUSH32(esp, esi); /* 0x100690F4: push esi */
    PUSH32(esp, edi); /* 0x100690F5: push edi */
    eax = MEM32(0x100DF7B8); /* 0x100690F6: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x100690FB: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100690FD: push eax */
    eax = esp + 0x60; /* 0x100690FE: lea eax, [esp + 0x60] */
    MEM32(FS_BASE + (0)) = eax; /* 0x10069102: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x10069108: mov esi, ecx */
    eax = esi + 0x34; /* 0x1006910A: lea eax, [esi + 0x34] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1006910D: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1006910F: push eax */
    ecx = esp + 0x1C; /* 0x10069110: lea ecx, [esp + 0x1c] */
    RECOMP_CALL(sub_1006F6A1); /* 0x10069114: call 0x1006f6a1 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x10069119: mov edi, dword ptr [ebp + 8] */
    MEM32(esp + 0x68) = ebx; /* 0x1006911C: mov dword ptr [esp + 0x68], ebx */
    PUSH32(esp, 2); /* 0x10069120: push 2 */
    eax = POP32_VAL(esp); /* 0x10069122: pop eax */
    /* cmp MEM32(esi + 0x54), ebx */ /* 0x10069123: cmp dword ptr [esi + 0x54], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x54)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006916B; /* 0x10069126: je 0x1006916b */
L_10069128:
    ecx = MEM32(esi + 0x54); /* 0x10069128: mov ecx, dword ptr [esi + 0x54] */
    edx = ebx; /* 0x1006912B: mov edx, ebx */
    goto L_10069138; /* 0x1006912D: jmp 0x10069138 */
L_1006912F:
    /* cmp MEM32(ecx), edi */ /* 0x1006912F: cmp dword ptr [ecx], edi */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006913E; /* 0x10069131: je 0x1006913e */
L_10069133:
    edx = ecx; /* 0x10069133: mov edx, ecx */
    ecx = MEM32(ecx + 0x4); /* 0x10069135: mov ecx, dword ptr [ecx + 4] */
L_10069138:
    /* test ecx, ecx */ /* 0x10069138: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006915F; /* 0x1006913A: je 0x1006915f */
L_1006913C:
    RECOMP_BACKEDGE();
    goto L_1006912F; /* 0x1006913C: jmp 0x1006912f */
L_1006913E:
    eax = MEM32(ecx + 0x4); /* 0x1006913E: mov eax, dword ptr [ecx + 4] */
    /* test edx, edx */ /* 0x10069141: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006914A; /* 0x10069143: jne 0x1006914a */
L_10069145:
    MEM32(esi + 0x54) = eax; /* 0x10069145: mov dword ptr [esi + 0x54], eax */
    goto L_1006914D; /* 0x10069148: jmp 0x1006914d */
L_1006914A:
    MEM32(edx + 0x4) = eax; /* 0x1006914A: mov dword ptr [edx + 4], eax */
L_1006914D:
    /* cmp MEM32(ecx + 0x4), ebx */ /* 0x1006914D: cmp dword ptr [ecx + 4], ebx */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10069155; /* 0x10069150: jne 0x10069155 */
L_10069152:
    MEM32(esi + 0x58) = edx; /* 0x10069152: mov dword ptr [esi + 0x58], edx */
L_10069155:
    PUSH32(esp, ecx); /* 0x10069155: push ecx */
    RECOMP_CALL(sub_1000ECE0); /* 0x10069156: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1006915B: pop ecx */
    PUSH32(esp, 2); /* 0x1006915C: push 2 */
    eax = POP32_VAL(esp); /* 0x1006915E: pop eax */
L_1006915F:
    ecx = edi; /* 0x1006915F: mov ecx, edi */
    MEM32(edi + 0x8) = eax; /* 0x10069161: mov dword ptr [edi + 8], eax */
    RECOMP_CALL(sub_10068B23); /* 0x10069164: call 0x10068b23 */
    RECOMP_FLAGS_IN();
    goto L_1006916D; /* 0x10069169: jmp 0x1006916d */
L_1006916B:
    SET_LO8(ebx, 1); /* 0x1006916B: mov bl, 1 */
L_1006916D:
    _flag_a = (uint32_t)((MEM32(esp + 0x68) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(esp + 0x68) | 0xFFFFFFFFu));
    MEM32(esp + 0x68) = MEM32(esp + 0x68) | 0xFFFFFFFFu; /* 0x1006916D: or dword ptr [esp + 0x68], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(esp + 0x18); /* 0x10069172: mov ecx, dword ptr [esp + 0x18] */
    RECOMP_CALL(sub_1006F4D7); /* 0x10069176: call 0x1006f4d7 */
    RECOMP_FLAGS_IN();
    /* test LO8(ebx), LO8(ebx) */ /* 0x1006917B: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100691E8; /* 0x1006917D: je 0x100691e8 */
L_1006917F:
    edx = edi + 0x8; /* 0x1006917F: lea edx, [edi + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10069182: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x14) = edx; /* 0x10069184: mov dword ptr [esp + 0x14], edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10069188: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10069189: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(edx); if (eax == _d) { MEM32(edx) = ecx; } else { eax = _d; } } /* 0x1006918B: lock cmpxchg dword ptr [edx], ecx */
    _flag_k = FK_CMP;
    esi = eax; /* 0x1006918F: mov esi, eax */
    /* test esi, esi */ /* 0x10069191: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100691E8; /* 0x10069193: je 0x100691e8 */
L_10069195:
    PUSH32(esp, 2); /* 0x10069195: push 2 */
    ebx = POP32_VAL(esp); /* 0x10069197: pop ebx */
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100691A3; /* 0x10069198: jle 0x100691a3 */
L_1006919A:
    /* cmp esi, ebx */ /* 0x1006919A: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_100691E8; /* 0x1006919C: jle 0x100691e8 */
L_1006919E:
    /* cmp esi, 3 */ /* 0x1006919E: cmp esi, 3 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100691E8; /* 0x100691A1: je 0x100691e8 */
L_100691A3:
    RECOMP_ICALL(MEM32(0x100E5034)); /* 0x100691A3: call dword ptr [0x100e5034] */
    RECOMP_FLAGS_IN();
    /* cmp esi, eax */ /* 0x100691A9: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100691E8; /* 0x100691AB: je 0x100691e8 */
L_100691AD:
    ecx = esp + 0x34; /* 0x100691AD: lea ecx, [esp + 0x34] */
    RECOMP_CALL(sub_1006B72C); /* 0x100691B1: call 0x1006b72c */
    RECOMP_FLAGS_IN();
    eax = esp + 0x34; /* 0x100691B6: lea eax, [esp + 0x34] */
    MEM32(esp + 0x68) = 1; /* 0x100691BA: mov dword ptr [esp + 0x68], 1 */
    MEM32(edi + 0xC) = eax; /* 0x100691C2: mov dword ptr [edi + 0xc], eax */
    eax = MEM32(esp + 0x14); /* 0x100691C5: mov eax, dword ptr [esp + 0x14] */
    { uint32_t _tmp = MEM32(eax); /* 0x100691C9: xchg dword ptr [eax], ebx */
      MEM32(eax) = ebx;
      ebx = _tmp; }
    /* cmp ebx, 3 */ /* 0x100691CB: cmp ebx, 3 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100691DA; /* 0x100691CE: je 0x100691da */
L_100691D0:
    ecx = MEM32(edi + 0xC); /* 0x100691D0: mov ecx, dword ptr [edi + 0xc] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x100691D3: push -1 */
    RECOMP_CALL(sub_1006B7A0); /* 0x100691D5: call 0x1006b7a0 */
    RECOMP_FLAGS_IN();
L_100691DA:
    _flag_a = (uint32_t)((MEM32(esp + 0x68) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(esp + 0x68) | 0xFFFFFFFFu));
    MEM32(esp + 0x68) = MEM32(esp + 0x68) | 0xFFFFFFFFu; /* 0x100691DA: or dword ptr [esp + 0x68], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esp + 0x34; /* 0x100691DF: lea ecx, [esp + 0x34] */
    RECOMP_CALL(sub_1006B745); /* 0x100691E3: call 0x1006b745 */
    RECOMP_FLAGS_IN();
L_100691E8:
    ecx = MEM32(esp + 0x60); /* 0x100691E8: mov ecx, dword ptr [esp + 0x60] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x100691EC: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x100691F3: pop ecx */
    edi = POP32_VAL(esp); /* 0x100691F4: pop edi */
    esi = POP32_VAL(esp); /* 0x100691F5: pop esi */
    ebx = POP32_VAL(esp); /* 0x100691F6: pop ebx */
    esp = ebp; /* 0x100691F7: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100691F9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x100691FA: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_100690D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100690D0u);

L_100690D0:
    MEM32(edi + (-0x7081EFFA)) = ecx; /* 0x100690D0: mov dword ptr [edi - 0x7081effa], ecx */
    PUSH32(esp, _seg_es); /* 0x100690D6: push es */
    { uint32_t _aa = LO8(ebx), _ab = LO8(edx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100690D7: adc bl, dl */
      SET_LO8(ebx, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100690D9: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)((LO8(edx) | MEM8(eax))) << 24; _flag_b = (uint32_t)((LO8(edx) | MEM8(eax))) << 24;
    SET_LO8(edx, LO8(edx) | MEM8(eax)); /* 0x100690DA: or dl, byte ptr [eax] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, ebp); /* 0x100690DC: push ebp */
    ebp = esp; /* 0x100690DD: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x100690DF: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x100690E2: push -1 */
    PUSH32(esp, 0x100DABDCu); /* 0x100690E4: push 0x100dabdc */
    eax = MEM32(FS_BASE + (0)); /* 0x100690E9: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x100690EF: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x50u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x50u; /* 0x100690F0: sub esp, 0x50 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x100690F3: push ebx */
    PUSH32(esp, esi); /* 0x100690F4: push esi */
    PUSH32(esp, edi); /* 0x100690F5: push edi */
    eax = MEM32(0x100DF7B8); /* 0x100690F6: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x100690FB: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100690FD: push eax */
    eax = esp + 0x60; /* 0x100690FE: lea eax, [esp + 0x60] */
    MEM32(FS_BASE + (0)) = eax; /* 0x10069102: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x10069108: mov esi, ecx */
    eax = esi + 0x34; /* 0x1006910A: lea eax, [esi + 0x34] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1006910D: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1006910F: push eax */
    ecx = esp + 0x1C; /* 0x10069110: lea ecx, [esp + 0x1c] */
    RECOMP_CALL(sub_1006F6A1); /* 0x10069114: call 0x1006f6a1 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x10069119: mov edi, dword ptr [ebp + 8] */
    MEM32(esp + 0x68) = ebx; /* 0x1006911C: mov dword ptr [esp + 0x68], ebx */
    PUSH32(esp, 2); /* 0x10069120: push 2 */
    eax = POP32_VAL(esp); /* 0x10069122: pop eax */
    /* cmp MEM32(esi + 0x54), ebx */ /* 0x10069123: cmp dword ptr [esi + 0x54], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x54)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006916B; /* 0x10069126: je 0x1006916b */
L_10069128:
    ecx = MEM32(esi + 0x54); /* 0x10069128: mov ecx, dword ptr [esi + 0x54] */
    edx = ebx; /* 0x1006912B: mov edx, ebx */
    goto L_10069138; /* 0x1006912D: jmp 0x10069138 */
L_1006912F:
    /* cmp MEM32(ecx), edi */ /* 0x1006912F: cmp dword ptr [ecx], edi */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006913E; /* 0x10069131: je 0x1006913e */
L_10069133:
    edx = ecx; /* 0x10069133: mov edx, ecx */
    ecx = MEM32(ecx + 0x4); /* 0x10069135: mov ecx, dword ptr [ecx + 4] */
L_10069138:
    /* test ecx, ecx */ /* 0x10069138: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006915F; /* 0x1006913A: je 0x1006915f */
L_1006913C:
    RECOMP_BACKEDGE();
    goto L_1006912F; /* 0x1006913C: jmp 0x1006912f */
L_1006913E:
    eax = MEM32(ecx + 0x4); /* 0x1006913E: mov eax, dword ptr [ecx + 4] */
    /* test edx, edx */ /* 0x10069141: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006914A; /* 0x10069143: jne 0x1006914a */
L_10069145:
    MEM32(esi + 0x54) = eax; /* 0x10069145: mov dword ptr [esi + 0x54], eax */
    goto L_1006914D; /* 0x10069148: jmp 0x1006914d */
L_1006914A:
    MEM32(edx + 0x4) = eax; /* 0x1006914A: mov dword ptr [edx + 4], eax */
L_1006914D:
    /* cmp MEM32(ecx + 0x4), ebx */ /* 0x1006914D: cmp dword ptr [ecx + 4], ebx */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10069155; /* 0x10069150: jne 0x10069155 */
L_10069152:
    MEM32(esi + 0x58) = edx; /* 0x10069152: mov dword ptr [esi + 0x58], edx */
L_10069155:
    PUSH32(esp, ecx); /* 0x10069155: push ecx */
    RECOMP_CALL(sub_1000ECE0); /* 0x10069156: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1006915B: pop ecx */
    PUSH32(esp, 2); /* 0x1006915C: push 2 */
    eax = POP32_VAL(esp); /* 0x1006915E: pop eax */
L_1006915F:
    ecx = edi; /* 0x1006915F: mov ecx, edi */
    MEM32(edi + 0x8) = eax; /* 0x10069161: mov dword ptr [edi + 8], eax */
    RECOMP_CALL(sub_10068B23); /* 0x10069164: call 0x10068b23 */
    RECOMP_FLAGS_IN();
    goto L_1006916D; /* 0x10069169: jmp 0x1006916d */
L_1006916B:
    SET_LO8(ebx, 1); /* 0x1006916B: mov bl, 1 */
L_1006916D:
    _flag_a = (uint32_t)((MEM32(esp + 0x68) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(esp + 0x68) | 0xFFFFFFFFu));
    MEM32(esp + 0x68) = MEM32(esp + 0x68) | 0xFFFFFFFFu; /* 0x1006916D: or dword ptr [esp + 0x68], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(esp + 0x18); /* 0x10069172: mov ecx, dword ptr [esp + 0x18] */
    RECOMP_CALL(sub_1006F4D7); /* 0x10069176: call 0x1006f4d7 */
    RECOMP_FLAGS_IN();
    /* test LO8(ebx), LO8(ebx) */ /* 0x1006917B: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100691E8; /* 0x1006917D: je 0x100691e8 */
L_1006917F:
    edx = edi + 0x8; /* 0x1006917F: lea edx, [edi + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10069182: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x14) = edx; /* 0x10069184: mov dword ptr [esp + 0x14], edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10069188: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10069189: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(edx); if (eax == _d) { MEM32(edx) = ecx; } else { eax = _d; } } /* 0x1006918B: lock cmpxchg dword ptr [edx], ecx */
    _flag_k = FK_CMP;
    esi = eax; /* 0x1006918F: mov esi, eax */
    /* test esi, esi */ /* 0x10069191: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100691E8; /* 0x10069193: je 0x100691e8 */
L_10069195:
    PUSH32(esp, 2); /* 0x10069195: push 2 */
    ebx = POP32_VAL(esp); /* 0x10069197: pop ebx */
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100691A3; /* 0x10069198: jle 0x100691a3 */
L_1006919A:
    /* cmp esi, ebx */ /* 0x1006919A: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_100691E8; /* 0x1006919C: jle 0x100691e8 */
L_1006919E:
    /* cmp esi, 3 */ /* 0x1006919E: cmp esi, 3 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100691E8; /* 0x100691A1: je 0x100691e8 */
L_100691A3:
    RECOMP_ICALL(MEM32(0x100E5034)); /* 0x100691A3: call dword ptr [0x100e5034] */
    RECOMP_FLAGS_IN();
    /* cmp esi, eax */ /* 0x100691A9: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100691E8; /* 0x100691AB: je 0x100691e8 */
L_100691AD:
    ecx = esp + 0x34; /* 0x100691AD: lea ecx, [esp + 0x34] */
    RECOMP_CALL(sub_1006B72C); /* 0x100691B1: call 0x1006b72c */
    RECOMP_FLAGS_IN();
    eax = esp + 0x34; /* 0x100691B6: lea eax, [esp + 0x34] */
    MEM32(esp + 0x68) = 1; /* 0x100691BA: mov dword ptr [esp + 0x68], 1 */
    MEM32(edi + 0xC) = eax; /* 0x100691C2: mov dword ptr [edi + 0xc], eax */
    eax = MEM32(esp + 0x14); /* 0x100691C5: mov eax, dword ptr [esp + 0x14] */
    { uint32_t _tmp = MEM32(eax); /* 0x100691C9: xchg dword ptr [eax], ebx */
      MEM32(eax) = ebx;
      ebx = _tmp; }
    /* cmp ebx, 3 */ /* 0x100691CB: cmp ebx, 3 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100691DA; /* 0x100691CE: je 0x100691da */
L_100691D0:
    ecx = MEM32(edi + 0xC); /* 0x100691D0: mov ecx, dword ptr [edi + 0xc] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x100691D3: push -1 */
    RECOMP_CALL(sub_1006B7A0); /* 0x100691D5: call 0x1006b7a0 */
    RECOMP_FLAGS_IN();
L_100691DA:
    _flag_a = (uint32_t)((MEM32(esp + 0x68) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(esp + 0x68) | 0xFFFFFFFFu));
    MEM32(esp + 0x68) = MEM32(esp + 0x68) | 0xFFFFFFFFu; /* 0x100691DA: or dword ptr [esp + 0x68], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esp + 0x34; /* 0x100691DF: lea ecx, [esp + 0x34] */
    RECOMP_CALL(sub_1006B745); /* 0x100691E3: call 0x1006b745 */
    RECOMP_FLAGS_IN();
L_100691E8:
    ecx = MEM32(esp + 0x60); /* 0x100691E8: mov ecx, dword ptr [esp + 0x60] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x100691EC: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x100691F3: pop ecx */
    edi = POP32_VAL(esp); /* 0x100691F4: pop edi */
    esi = POP32_VAL(esp); /* 0x100691F5: pop esi */
    ebx = POP32_VAL(esp); /* 0x100691F6: pop ebx */
    esp = ebp; /* 0x100691F7: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100691F9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x100691FA: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_100690DC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100690DCu);

L_100690DC:
    PUSH32(esp, ebp); /* 0x100690DC: push ebp */
    ebp = esp; /* 0x100690DD: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x100690DF: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x100690E2: push -1 */
    PUSH32(esp, 0x100DABDCu); /* 0x100690E4: push 0x100dabdc */
    eax = MEM32(FS_BASE + (0)); /* 0x100690E9: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x100690EF: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x50u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x50u; /* 0x100690F0: sub esp, 0x50 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x100690F3: push ebx */
    PUSH32(esp, esi); /* 0x100690F4: push esi */
    PUSH32(esp, edi); /* 0x100690F5: push edi */
    eax = MEM32(0x100DF7B8); /* 0x100690F6: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x100690FB: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100690FD: push eax */
    eax = esp + 0x60; /* 0x100690FE: lea eax, [esp + 0x60] */
    MEM32(FS_BASE + (0)) = eax; /* 0x10069102: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x10069108: mov esi, ecx */
    eax = esi + 0x34; /* 0x1006910A: lea eax, [esi + 0x34] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1006910D: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1006910F: push eax */
    ecx = esp + 0x1C; /* 0x10069110: lea ecx, [esp + 0x1c] */
    RECOMP_CALL(sub_1006F6A1); /* 0x10069114: call 0x1006f6a1 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x10069119: mov edi, dword ptr [ebp + 8] */
    MEM32(esp + 0x68) = ebx; /* 0x1006911C: mov dword ptr [esp + 0x68], ebx */
    PUSH32(esp, 2); /* 0x10069120: push 2 */
    eax = POP32_VAL(esp); /* 0x10069122: pop eax */
    /* cmp MEM32(esi + 0x54), ebx */ /* 0x10069123: cmp dword ptr [esi + 0x54], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x54)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006916B; /* 0x10069126: je 0x1006916b */
L_10069128:
    ecx = MEM32(esi + 0x54); /* 0x10069128: mov ecx, dword ptr [esi + 0x54] */
    edx = ebx; /* 0x1006912B: mov edx, ebx */
    goto L_10069138; /* 0x1006912D: jmp 0x10069138 */
L_1006912F:
    /* cmp MEM32(ecx), edi */ /* 0x1006912F: cmp dword ptr [ecx], edi */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006913E; /* 0x10069131: je 0x1006913e */
L_10069133:
    edx = ecx; /* 0x10069133: mov edx, ecx */
    ecx = MEM32(ecx + 0x4); /* 0x10069135: mov ecx, dword ptr [ecx + 4] */
L_10069138:
    /* test ecx, ecx */ /* 0x10069138: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006915F; /* 0x1006913A: je 0x1006915f */
L_1006913C:
    RECOMP_BACKEDGE();
    goto L_1006912F; /* 0x1006913C: jmp 0x1006912f */
L_1006913E:
    eax = MEM32(ecx + 0x4); /* 0x1006913E: mov eax, dword ptr [ecx + 4] */
    /* test edx, edx */ /* 0x10069141: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006914A; /* 0x10069143: jne 0x1006914a */
L_10069145:
    MEM32(esi + 0x54) = eax; /* 0x10069145: mov dword ptr [esi + 0x54], eax */
    goto L_1006914D; /* 0x10069148: jmp 0x1006914d */
L_1006914A:
    MEM32(edx + 0x4) = eax; /* 0x1006914A: mov dword ptr [edx + 4], eax */
L_1006914D:
    /* cmp MEM32(ecx + 0x4), ebx */ /* 0x1006914D: cmp dword ptr [ecx + 4], ebx */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10069155; /* 0x10069150: jne 0x10069155 */
L_10069152:
    MEM32(esi + 0x58) = edx; /* 0x10069152: mov dword ptr [esi + 0x58], edx */
L_10069155:
    PUSH32(esp, ecx); /* 0x10069155: push ecx */
    RECOMP_CALL(sub_1000ECE0); /* 0x10069156: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1006915B: pop ecx */
    PUSH32(esp, 2); /* 0x1006915C: push 2 */
    eax = POP32_VAL(esp); /* 0x1006915E: pop eax */
L_1006915F:
    ecx = edi; /* 0x1006915F: mov ecx, edi */
    MEM32(edi + 0x8) = eax; /* 0x10069161: mov dword ptr [edi + 8], eax */
    RECOMP_CALL(sub_10068B23); /* 0x10069164: call 0x10068b23 */
    RECOMP_FLAGS_IN();
    goto L_1006916D; /* 0x10069169: jmp 0x1006916d */
L_1006916B:
    SET_LO8(ebx, 1); /* 0x1006916B: mov bl, 1 */
L_1006916D:
    _flag_a = (uint32_t)((MEM32(esp + 0x68) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(esp + 0x68) | 0xFFFFFFFFu));
    MEM32(esp + 0x68) = MEM32(esp + 0x68) | 0xFFFFFFFFu; /* 0x1006916D: or dword ptr [esp + 0x68], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(esp + 0x18); /* 0x10069172: mov ecx, dword ptr [esp + 0x18] */
    RECOMP_CALL(sub_1006F4D7); /* 0x10069176: call 0x1006f4d7 */
    RECOMP_FLAGS_IN();
    /* test LO8(ebx), LO8(ebx) */ /* 0x1006917B: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100691E8; /* 0x1006917D: je 0x100691e8 */
L_1006917F:
    edx = edi + 0x8; /* 0x1006917F: lea edx, [edi + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10069182: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x14) = edx; /* 0x10069184: mov dword ptr [esp + 0x14], edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10069188: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10069189: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(edx); if (eax == _d) { MEM32(edx) = ecx; } else { eax = _d; } } /* 0x1006918B: lock cmpxchg dword ptr [edx], ecx */
    _flag_k = FK_CMP;
    esi = eax; /* 0x1006918F: mov esi, eax */
    /* test esi, esi */ /* 0x10069191: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100691E8; /* 0x10069193: je 0x100691e8 */
L_10069195:
    PUSH32(esp, 2); /* 0x10069195: push 2 */
    ebx = POP32_VAL(esp); /* 0x10069197: pop ebx */
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100691A3; /* 0x10069198: jle 0x100691a3 */
L_1006919A:
    /* cmp esi, ebx */ /* 0x1006919A: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_100691E8; /* 0x1006919C: jle 0x100691e8 */
L_1006919E:
    /* cmp esi, 3 */ /* 0x1006919E: cmp esi, 3 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100691E8; /* 0x100691A1: je 0x100691e8 */
L_100691A3:
    RECOMP_ICALL(MEM32(0x100E5034)); /* 0x100691A3: call dword ptr [0x100e5034] */
    RECOMP_FLAGS_IN();
    /* cmp esi, eax */ /* 0x100691A9: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100691E8; /* 0x100691AB: je 0x100691e8 */
L_100691AD:
    ecx = esp + 0x34; /* 0x100691AD: lea ecx, [esp + 0x34] */
    RECOMP_CALL(sub_1006B72C); /* 0x100691B1: call 0x1006b72c */
    RECOMP_FLAGS_IN();
    eax = esp + 0x34; /* 0x100691B6: lea eax, [esp + 0x34] */
    MEM32(esp + 0x68) = 1; /* 0x100691BA: mov dword ptr [esp + 0x68], 1 */
    MEM32(edi + 0xC) = eax; /* 0x100691C2: mov dword ptr [edi + 0xc], eax */
    eax = MEM32(esp + 0x14); /* 0x100691C5: mov eax, dword ptr [esp + 0x14] */
    { uint32_t _tmp = MEM32(eax); /* 0x100691C9: xchg dword ptr [eax], ebx */
      MEM32(eax) = ebx;
      ebx = _tmp; }
    /* cmp ebx, 3 */ /* 0x100691CB: cmp ebx, 3 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100691DA; /* 0x100691CE: je 0x100691da */
L_100691D0:
    ecx = MEM32(edi + 0xC); /* 0x100691D0: mov ecx, dword ptr [edi + 0xc] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x100691D3: push -1 */
    RECOMP_CALL(sub_1006B7A0); /* 0x100691D5: call 0x1006b7a0 */
    RECOMP_FLAGS_IN();
L_100691DA:
    _flag_a = (uint32_t)((MEM32(esp + 0x68) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(esp + 0x68) | 0xFFFFFFFFu));
    MEM32(esp + 0x68) = MEM32(esp + 0x68) | 0xFFFFFFFFu; /* 0x100691DA: or dword ptr [esp + 0x68], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esp + 0x34; /* 0x100691DF: lea ecx, [esp + 0x34] */
    RECOMP_CALL(sub_1006B745); /* 0x100691E3: call 0x1006b745 */
    RECOMP_FLAGS_IN();
L_100691E8:
    ecx = MEM32(esp + 0x60); /* 0x100691E8: mov ecx, dword ptr [esp + 0x60] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x100691EC: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x100691F3: pop ecx */
    edi = POP32_VAL(esp); /* 0x100691F4: pop edi */
    esi = POP32_VAL(esp); /* 0x100691F5: pop esi */
    ebx = POP32_VAL(esp); /* 0x100691F6: pop ebx */
    esp = ebp; /* 0x100691F7: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100691F9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x100691FA: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_100691FD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100691FDu);

L_100691FD:
    PUSH32(esp, ebp); /* 0x100691FD: push ebp */
    ebp = esp; /* 0x100691FE: mov ebp, esp */
    eax = ecx; /* 0x10069200: mov eax, ecx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x10069202: sub esp, 0xc */
    _flag_k = FK_CMP;
    ecx = MEM32(eax + 0x8); /* 0x10069205: mov ecx, dword ptr [eax + 8] */
    /* test ecx, ecx */ /* 0x10069208: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10069246; /* 0x1006920A: je 0x10069246 */
L_1006920C:
    /* cmp MEM32(eax + 0xC), 0x10069323u */ /* 0x1006920C: cmp dword ptr [eax + 0xc], 0x10069323 */
    _flag_a = (uint32_t)(MEM32(eax + 0xC)); _flag_b = (uint32_t)(0x10069323u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10069235; /* 0x10069213: jne 0x10069235 */
L_10069215:
    PUSH32(esp, ebx); /* 0x10069215: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10069216: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx + 0x10), ebx */ /* 0x10069218: cmp dword ptr [ecx + 0x10], ebx */
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1006922B; /* 0x1006921B: jle 0x1006922b */
L_1006921D:
    RECOMP_CALL(sub_100781A1); /* 0x1006921D: call 0x100781a1 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_10013576); /* 0x10069222: call 0x10013576 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x10069227: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006922D; /* 0x10069229: je 0x1006922d */
L_1006922B:
    SET_LO8(ebx, 1); /* 0x1006922B: mov bl, 1 */
L_1006922D:
    /* test LO8(ebx), LO8(ebx) */ /* 0x1006922D: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebx = POP32_VAL(esp); /* 0x1006922F: pop ebx */
    SET_LO8(eax, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x10069230: sete al */
    goto L_10069242; /* 0x10069233: jmp 0x10069242 */
L_10069235:
    PUSH32(esp, 1); /* 0x10069235: push 1 */
    RECOMP_CALL(sub_10078582); /* 0x10069237: call 0x10078582 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (LO8(eax)) != 0;
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax))); /* 0x1006923C: neg al */
    _flag_k = FK_NARROW(FK_CMP, 24);
    { uint32_t _sa = LO8(eax), _sb = LO8(eax), _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1006923E: sbb al, al */
      SET_LO8(eax, _sc ? 0xFFFFFFFFu : 0);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(eax, LO8(eax) + 1); /* 0x10069240: inc al */
    _flag_k = FK_NARROW(FK_INC, 24);
L_10069242:
    /* test LO8(eax), LO8(eax) */ /* 0x10069242: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006924A; /* 0x10069244: jne 0x1006924a */
L_10069246:
    esp = ebp; /* 0x10069246: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10069248: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10069249: ret  */
L_1006924A:
    ecx = ebp + (-0xC); /* 0x1006924A: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1009DD55); /* 0x1006924D: call 0x1009dd55 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x100DCE94u); /* 0x10069252: push 0x100dce94 */
    eax = ebp + (-0xC); /* 0x10069257: lea eax, [ebp - 0xc] */
    MEM32(ebp + (-0xC)) = 0x10067444u; /* 0x1006925A: mov dword ptr [ebp - 0xc], 0x10067444 */
    PUSH32(esp, eax); /* 0x10069261: push eax */
    RECOMP_CALL(sub_100192EB); /* 0x10069262: call 0x100192eb */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x10069267u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100692C3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100692C3u);

L_100692C3:
    PUSH32(esp, ebp); /* 0x100692C3: push ebp */
    ebp = esp; /* 0x100692C4: mov ebp, esp */
    PUSH32(esp, esi); /* 0x100692C6: push esi */
    esi = MEM32(ebp + 0x8); /* 0x100692C7: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x100692CA: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x100692CC: inc edx */
    _flag_k = FK_INC;
    eax = esi + 0x74; /* 0x100692CD: lea eax, [esi + 0x74] */
    { uint32_t _tmp = MEM32(eax); /* 0x100692D0: xchg dword ptr [eax], edx */
      MEM32(eax) = edx;
      edx = _tmp; }
    PUSH32(esp, 0xFFFFFC19u); /* 0x100692D2: push 0xfffffc19 */
    ecx = esi; /* 0x100692D7: mov ecx, esi */
    RECOMP_CALL(sub_1006A2EE); /* 0x100692D9: call 0x1006a2ee */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x100692DE: push 0 */
    ecx = esi; /* 0x100692E0: mov ecx, esi */
    RECOMP_CALL(sub_10069B8E); /* 0x100692E2: call 0x10069b8e */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x100692E7: pop esi */
    ebp = POP32_VAL(esp); /* 0x100692E8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100692E9: ret  */
    RECOMP_REGS_OUT();
}

void sub_100692EA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100692EAu);

L_100692EA:
    PUSH32(esp, ebp); /* 0x100692EA: push ebp */
    ebp = esp; /* 0x100692EB: mov ebp, esp */
    PUSH32(esp, esi); /* 0x100692ED: push esi */
    esi = MEM32(ebp + 0x8); /* 0x100692EE: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x100692F1: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100692FA; /* 0x100692F3: je 0x100692fa */
L_100692F5:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0xFFFFFFFCu; /* 0x100692F5: add esi, -4 */
    _flag_k = FK_ADD;
    goto L_100692FC; /* 0x100692F8: jmp 0x100692fc */
L_100692FA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x100692FA: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_100692FC:
    /* cmp MEM32(esi + 0x34), 0 */ /* 0x100692FC: cmp dword ptr [esi + 0x34], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x34)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1006931E; /* 0x10069300: jne 0x1006931e */
L_10069302:
    eax = MEM32(ecx + 0x8); /* 0x10069302: mov eax, dword ptr [ecx + 8] */
    ecx = MEM32(eax + 0xC); /* 0x10069305: mov ecx, dword ptr [eax + 0xc] */
    MEM32(esi + 0x34) = eax; /* 0x10069308: mov dword ptr [esi + 0x34], eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x50u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x50u; /* 0x1006930B: add ecx, 0x50 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x38) = eax; /* 0x1006930E: mov dword ptr [esi + 0x38], eax */
    eax = esi + 0x60; /* 0x10069311: lea eax, [esi + 0x60] */
    PUSH32(esp, eax); /* 0x10069314: push eax */
    RECOMP_CALL(sub_100697E0); /* 0x10069315: call 0x100697e0 */
    RECOMP_FLAGS_IN();
    MEM8(esi + 0x51) = (uint8_t)(1); /* 0x1006931A: mov byte ptr [esi + 0x51], 1 */
L_1006931E:
    esi = POP32_VAL(esp); /* 0x1006931E: pop esi */
    ebp = POP32_VAL(esp); /* 0x1006931F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10069320: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_10069323(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10069323u);

L_10069323:
    PUSH32(esp, 0x24u); /* 0x10069323: push 0x24 */
    eax = 0x100DAC1Cu; /* 0x10069325: mov eax, 0x100dac1c */
    RECOMP_CALL(sub_1001FB2C); /* 0x1006932A: call 0x1001fb2c */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_10023AF4); /* 0x1006932F: call 0x10023af4 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10069334: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006933D; /* 0x10069336: je 0x1006933d */
L_10069338:
    esi = eax + (-0x4); /* 0x10069338: lea esi, [eax - 4] */
    goto L_1006933F; /* 0x1006933B: jmp 0x1006933f */
L_1006933D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1006933D: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1006933F:
    ebx = MEM32(ebp + 0x8); /* 0x1006933F: mov ebx, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x18)) = esi; /* 0x10069342: mov dword ptr [ebp - 0x18], esi */
    edi = MEM32(ebx + 0x8); /* 0x10069345: mov edi, dword ptr [ebx + 8] */
    MEM32(ebp + (-0x14)) = edi; /* 0x10069348: mov dword ptr [ebp - 0x14], edi */
    eax = MEM32(edi + 0xC); /* 0x1006934B: mov eax, dword ptr [edi + 0xc] */
    MEM32(ebp + (-0x20)) = eax; /* 0x1006934E: mov dword ptr [ebp - 0x20], eax */
    /* test esi, esi */ /* 0x10069351: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006935A; /* 0x10069353: je 0x1006935a */
L_10069355:
    eax = esi + 0x4; /* 0x10069355: lea eax, [esi + 4] */
    goto L_1006935C; /* 0x10069358: jmp 0x1006935c */
L_1006935A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1006935A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1006935C:
    PUSH32(esp, eax); /* 0x1006935C: push eax */
    ecx = ebx; /* 0x1006935D: mov ecx, ebx */
    RECOMP_CALL(sub_100692EA); /* 0x1006935F: call 0x100692ea */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x10069364: push 0 */
    ecx = edi; /* 0x10069366: mov ecx, edi */
    RECOMP_CALL(sub_10079895); /* 0x10069368: call 0x10079895 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & 0; /* 0x1006936D: and dword ptr [ebp - 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x24)) = eax; /* 0x10069371: mov dword ptr [ebp - 0x24], eax */
    /* test eax, eax */ /* 0x10069374: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10069399; /* 0x10069376: je 0x10069399 */
L_10069378:
    /* cmp eax, 2 */ /* 0x10069378: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10069399; /* 0x1006937B: je 0x10069399 */
L_1006937D:
    /* test esi, esi */ /* 0x1006937D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10069386; /* 0x1006937F: je 0x10069386 */
L_10069381:
    ecx = esi + 0x4; /* 0x10069381: lea ecx, [esi + 4] */
    goto L_10069388; /* 0x10069384: jmp 0x10069388 */
L_10069386:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10069386: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_10069388:
    PUSH32(esp, ecx); /* 0x10069388: push ecx */
    PUSH32(esp, ecx); /* 0x10069389: push ecx */
    PUSH32(esp, 0x100692C3u); /* 0x1006938A: push 0x100692c3 */
    ecx = eax; /* 0x1006938F: mov ecx, eax */
    RECOMP_CALL(sub_10069015); /* 0x10069391: call 0x10069015 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x1C)) = eax; /* 0x10069396: mov dword ptr [ebp - 0x1c], eax */
L_10069399:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x10069399: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi + 0x18), 0 */ /* 0x1006939D: cmp dword ptr [edi + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100693C0; /* 0x100693A1: je 0x100693c0 */
L_100693A3:
    ecx = ebp + (-0x30); /* 0x100693A3: lea ecx, [ebp - 0x30] */
    RECOMP_CALL(sub_1009DD55); /* 0x100693A6: call 0x1009dd55 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x100DCEB0u); /* 0x100693AB: push 0x100dceb0 */
    eax = ebp + (-0x30); /* 0x100693B0: lea eax, [ebp - 0x30] */
    MEM32(ebp + (-0x30)) = 0x10067484u; /* 0x100693B3: mov dword ptr [ebp - 0x30], 0x10067484 */
    PUSH32(esp, eax); /* 0x100693BA: push eax */
    RECOMP_CALL(sub_100192EB); /* 0x100693BB: call 0x100192eb */
    RECOMP_FLAGS_IN();
L_100693C0:
    PUSH32(esp, ebx); /* 0x100693C0: push ebx */
    RECOMP_ICALL(MEM32(ebx + 0x4)); /* 0x100693C1: call dword ptr [ebx + 4] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100693C4: pop ecx */
    goto L_100693ED; /* 0x100693C5: jmp 0x100693ed */
L_100693ED:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x100693ED: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x100693F1: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10069410; /* 0x100693F3: je 0x10069410 */
L_100693F5:
    eax = esi + 0x4; /* 0x100693F5: lea eax, [esi + 4] */
    goto L_10069412; /* 0x100693F8: jmp 0x10069412 */
L_10069410:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10069410: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_10069412:
    ecx = MEM32(ebp + (-0x20)); /* 0x10069412: mov ecx, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x5Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x5Cu; /* 0x10069415: add eax, 0x5c */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x10069418: push eax */
    ecx = ecx + 0x50; /* 0x10069419: lea ecx, [ecx + 0x50] */
    RECOMP_CALL(sub_10069811); /* 0x1006941C: call 0x10069811 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x1C)); /* 0x10069421: mov eax, dword ptr [ebp - 0x1c] */
    /* test eax, eax */ /* 0x10069424: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10069439; /* 0x10069426: je 0x10069439 */
L_10069428:
    ecx = MEM32(ebp + (-0x24)); /* 0x10069428: mov ecx, dword ptr [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x1006942B: push eax */
    RECOMP_CALL(sub_100690DC); /* 0x1006942C: call 0x100690dc */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x1C)); /* 0x10069431: mov ecx, dword ptr [ebp - 0x1c] */
    RECOMP_CALL(sub_10068B23); /* 0x10069434: call 0x10068b23 */
    RECOMP_FLAGS_IN();
L_10069439:
    MEM32(esi + 0x6C) = 0xFFFFFFFFu; /* 0x10069439: mov dword ptr [esi + 0x6c], 0xffffffff */
    ecx = edi; /* 0x10069440: mov ecx, edi */
    MEM32(esi + 0x70) = 0xFFFFFFFFu; /* 0x10069442: mov dword ptr [esi + 0x70], 0xffffffff */
    MEM32(esi + 0x74) = 0; /* 0x10069449: mov dword ptr [esi + 0x74], 0 */
    MEM32(esi + 0x78) = 0; /* 0x10069450: mov dword ptr [esi + 0x78], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x34)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x34) = MEM32(esi + 0x34) & 0; /* 0x10069457: and dword ptr [esi + 0x34], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(esi + 0x38)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x38) = MEM32(esi + 0x38) & 0; /* 0x1006945B: and dword ptr [esi + 0x38], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebx + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(ebx + 0x8) = MEM32(ebx + 0x8) & 0; /* 0x1006945F: and dword ptr [ebx + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_10078385); /* 0x10069463: call 0x10078385 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_100149D7); /* 0x10069468: call 0x100149d7 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006946D: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006946E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006946Eu);

L_1006946E:
    PUSH32(esp, ebp); /* 0x1006946E: push ebp */
    ebp = esp; /* 0x1006946F: mov ebp, esp */
    PUSH32(esp, esi); /* 0x10069471: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10069472: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x10069475: mov esi, ecx */
    RECOMP_CALL(sub_1002D16D); /* 0x10069477: call 0x1002d16d */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x10067484u; /* 0x1006947C: mov dword ptr [esi], 0x10067484 */
    eax = esi; /* 0x10069482: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x10069484: pop esi */
    ebp = POP32_VAL(esp); /* 0x10069485: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10069486: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_100694A8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100694A8u);

L_100694A8:
    PUSH32(esp, ebp); /* 0x100694A8: push ebp */
    ebp = esp; /* 0x100694A9: mov ebp, esp */
    PUSH32(esp, edi); /* 0x100694AB: push edi */
    edi = MEM32(ebp + 0x8); /* 0x100694AC: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x100694AF: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100694B8; /* 0x100694B1: je 0x100694b8 */
L_100694B3:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0xFFFFFFFCu; /* 0x100694B3: add edi, -4 */
    _flag_k = FK_ADD;
    goto L_100694BA; /* 0x100694B6: jmp 0x100694ba */
L_100694B8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x100694B8: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_100694BA:
    /* cmp MEM32(edi + 0x34), 0 */ /* 0x100694BA: cmp dword ptr [edi + 0x34], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x34)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10069524; /* 0x100694BE: jne 0x10069524 */
L_100694C0:
    PUSH32(esp, ebx); /* 0x100694C0: push ebx */
    ebx = MEM32(ecx + 0x8); /* 0x100694C1: mov ebx, dword ptr [ecx + 8] */
    PUSH32(esp, esi); /* 0x100694C4: push esi */
    eax = MEM32(ebx + 0xC); /* 0x100694C5: mov eax, dword ptr [ebx + 0xc] */
    MEM32(edi + 0x34) = ebx; /* 0x100694C8: mov dword ptr [edi + 0x34], ebx */
    MEM32(edi + 0x38) = ebx; /* 0x100694CB: mov dword ptr [edi + 0x38], ebx */
    /* cmp MEM8(ecx + 0x11), 0 */ /* 0x100694CE: cmp byte ptr [ecx + 0x11], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x11)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(ebp + 0x8) = eax; /* 0x100694D2: mov dword ptr [ebp + 8], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100694E9; /* 0x100694D5: je 0x100694e9 */
L_100694D7:
    eax = edi + 0x60; /* 0x100694D7: lea eax, [edi + 0x60] */
    MEM8(edi + 0x51) = (uint8_t)(0); /* 0x100694DA: mov byte ptr [edi + 0x51], 0 */
    PUSH32(esp, eax); /* 0x100694DE: push eax */
    ecx = ebx + 0x1C; /* 0x100694DF: lea ecx, [ebx + 0x1c] */
    RECOMP_CALL(sub_100697E0); /* 0x100694E2: call 0x100697e0 */
    RECOMP_FLAGS_IN();
    goto L_10069522; /* 0x100694E7: jmp 0x10069522 */
L_100694E9:
    ecx = ebx + 0x20; /* 0x100694E9: lea ecx, [ebx + 0x20] */
    RECOMP_CALL(sub_1006F14E); /* 0x100694EC: call 0x1006f14e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebx + 0x30)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0x30) = MEM32(ebx + 0x30) + 1; /* 0x100694F1: inc dword ptr [ebx + 0x30] */
    _flag_k = FK_INC;
    ecx = ebx + 0x24; /* 0x100694F4: lea ecx, [ebx + 0x24] */
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x100694F7: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx + 0x20) = 0; /* 0x100694FA: mov dword ptr [ebx + 0x20], 0 */
    eax = esi; /* 0x10069501: mov eax, esi */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(ecx), _sum = MEM32(ecx) + eax; eax = _old; MEM32(ecx) = _sum; } /* 0x10069503: lock xadd dword ptr [ecx], eax */
    _flag_k = FK_ADD;
    ebx = MEM32(ebp + 0x8); /* 0x10069507: mov ebx, dword ptr [ebp + 8] */
    eax = edi + 0x60; /* 0x1006950A: lea eax, [edi + 0x60] */
    PUSH32(esp, eax); /* 0x1006950D: push eax */
    ecx = ebx + 0x50; /* 0x1006950E: lea ecx, [ebx + 0x50] */
    RECOMP_CALL(sub_100697E0); /* 0x10069511: call 0x100697e0 */
    RECOMP_FLAGS_IN();
    MEM8(edi + 0x51) = (uint8_t)(1); /* 0x10069516: mov byte ptr [edi + 0x51], 1 */
    eax = ebx + 0x64; /* 0x1006951A: lea eax, [ebx + 0x64] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + esi; esi = _old; MEM32(eax) = _sum; } /* 0x1006951D: lock xadd dword ptr [eax], esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x10069521: dec esi */
    _flag_k = FK_DEC;
L_10069522:
    esi = POP32_VAL(esp); /* 0x10069522: pop esi */
    ebx = POP32_VAL(esp); /* 0x10069523: pop ebx */
L_10069524:
    edi = POP32_VAL(esp); /* 0x10069524: pop edi */
    ebp = POP32_VAL(esp); /* 0x10069525: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10069526: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_10069529(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10069529u);

L_10069529:
    PUSH32(esp, 0xC0u); /* 0x10069529: push 0xc0 */
    eax = 0x100DAC90u; /* 0x1006952E: mov eax, 0x100dac90 */
    RECOMP_CALL(sub_1009E216); /* 0x10069533: call 0x1009e216 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x10069538: mov edi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0xB0)) = edi; /* 0x1006953B: mov dword ptr [ebp - 0xb0], edi */
    RECOMP_CALL(sub_10023AF4); /* 0x10069541: call 0x10023af4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10069546: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x10069548: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10069557; /* 0x1006954A: je 0x10069557 */
L_1006954C:
    esi = eax + (-0x4); /* 0x1006954C: lea esi, [eax - 4] */
    MEM32(ebp + (-0xAC)) = esi; /* 0x1006954F: mov dword ptr [ebp - 0xac], esi */
    goto L_1006955F; /* 0x10069555: jmp 0x1006955f */
L_10069557:
    esi = ebx; /* 0x10069557: mov esi, ebx */
    MEM32(ebp + (-0xAC)) = ebx; /* 0x10069559: mov dword ptr [ebp - 0xac], ebx */
L_1006955F:
    edi = MEM32(edi + 0x8); /* 0x1006955F: mov edi, dword ptr [edi + 8] */
    MEM32(ebp + (-0xA8)) = edi; /* 0x10069562: mov dword ptr [ebp - 0xa8], edi */
    eax = MEM32(edi + 0xC); /* 0x10069568: mov eax, dword ptr [edi + 0xc] */
    MEM32(ebp + (-0xC0)) = eax; /* 0x1006956B: mov dword ptr [ebp - 0xc0], eax */
    eax = edi + 0x1C; /* 0x10069571: lea eax, [edi + 0x1c] */
    MEM32(ebp + (-0xB8)) = eax; /* 0x10069574: mov dword ptr [ebp - 0xb8], eax */
    eax = esi + 0x4; /* 0x1006957A: lea eax, [esi + 4] */
    /* test esi, esi */ /* 0x1006957D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10069583; /* 0x1006957F: jne 0x10069583 */
L_10069581:
    eax = ebx; /* 0x10069581: mov eax, ebx */
L_10069583:
    ecx = MEM32(ebp + (-0xB0)); /* 0x10069583: mov ecx, dword ptr [ebp - 0xb0] */
    PUSH32(esp, eax); /* 0x10069589: push eax */
    RECOMP_CALL(sub_100694A8); /* 0x1006958A: call 0x100694a8 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x1006958F: push ebx */
    ecx = edi; /* 0x10069590: mov ecx, edi */
    RECOMP_CALL(sub_10079895); /* 0x10069592: call 0x10079895 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0xBC)) = eax; /* 0x10069597: mov dword ptr [ebp - 0xbc], eax */
    MEM32(ebp + (-0xB4)) = ebx; /* 0x1006959D: mov dword ptr [ebp - 0xb4], ebx */
    /* test eax, eax */ /* 0x100695A3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100695C9; /* 0x100695A5: je 0x100695c9 */
L_100695A7:
    /* cmp eax, 2 */ /* 0x100695A7: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100695C9; /* 0x100695AA: je 0x100695c9 */
L_100695AC:
    ecx = esi + 0x4; /* 0x100695AC: lea ecx, [esi + 4] */
    /* test esi, esi */ /* 0x100695AF: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100695B5; /* 0x100695B1: jne 0x100695b5 */
L_100695B3:
    ecx = ebx; /* 0x100695B3: mov ecx, ebx */
L_100695B5:
    PUSH32(esp, ecx); /* 0x100695B5: push ecx */
    PUSH32(esp, ecx); /* 0x100695B6: push ecx */
    PUSH32(esp, 0x100692C3u); /* 0x100695B7: push 0x100692c3 */
    ecx = eax; /* 0x100695BC: mov ecx, eax */
    RECOMP_CALL(sub_10069015); /* 0x100695BE: call 0x10069015 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0xB4)) = eax; /* 0x100695C3: mov dword ptr [ebp - 0xb4], eax */
L_100695C9:
    PUSH32(esp, ebx); /* 0x100695C9: push ebx */
    PUSH32(esp, edi); /* 0x100695CA: push edi */
    ecx = ebp + (-0xA4); /* 0x100695CB: lea ecx, [ebp - 0xa4] */
    MEM32(ebp + (-0x4)) = ebx; /* 0x100695D1: mov dword ptr [ebp - 4], ebx */
    RECOMP_CALL(sub_1007869D); /* 0x100695D4: call 0x1007869d */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0xA4); /* 0x100695D9: lea eax, [ebp - 0xa4] */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x100695DF: mov byte ptr [ebp - 4], 2 */
    MEM32(esi + 0x80) = eax; /* 0x100695E3: mov dword ptr [esi + 0x80], eax */
    eax = MEM32(edi + 0x64); /* 0x100695E9: mov eax, dword ptr [edi + 0x64] */
    /* cmp MEM32(eax + 0x34), ebx */ /* 0x100695EC: cmp dword ptr [eax + 0x34], ebx */
    _flag_a = (uint32_t)(MEM32(eax + 0x34)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10069623; /* 0x100695EF: jne 0x10069623 */
L_100695F1:
    eax = MEM32(ebp + (-0xBC)); /* 0x100695F1: mov eax, dword ptr [ebp - 0xbc] */
    /* test eax, eax */ /* 0x100695F7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10069605; /* 0x100695F9: je 0x10069605 */
L_100695FB:
    /* cmp eax, 2 */ /* 0x100695FB: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10069605; /* 0x100695FE: je 0x10069605 */
L_10069600:
    /* cmp MEM32(eax + 0x8), ebx */ /* 0x10069600: cmp dword ptr [eax + 8], ebx */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10069623; /* 0x10069603: jne 0x10069623 */
L_10069605:
    /* cmp MEM32(edi + 0x38), ebx */ /* 0x10069605: cmp dword ptr [edi + 0x38], ebx */
    _flag_a = (uint32_t)(MEM32(edi + 0x38)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10069616; /* 0x10069608: je 0x10069616 */
L_1006960A:
    /* cmp MEM32(edi + 0x38), 1 */ /* 0x1006960A: cmp dword ptr [edi + 0x38], 1 */
    _flag_a = (uint32_t)(MEM32(edi + 0x38)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10069616; /* 0x1006960E: je 0x10069616 */
L_10069610:
    /* cmp MEM32(edi + 0x38), 5 */ /* 0x10069610: cmp dword ptr [edi + 0x38], 5 */
    _flag_a = (uint32_t)(MEM32(edi + 0x38)); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10069623; /* 0x10069614: jne 0x10069623 */
L_10069616:
    eax = MEM32(ebp + (-0xB0)); /* 0x10069616: mov eax, dword ptr [ebp - 0xb0] */
    PUSH32(esp, eax); /* 0x1006961C: push eax */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1006961D: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10069620: pop ecx */
    goto L_1006967A; /* 0x10069621: jmp 0x1006967a */
L_10069623:
    ecx = ebp + (-0xCC); /* 0x10069623: lea ecx, [ebp - 0xcc] */
    RECOMP_CALL(sub_1009DD55); /* 0x10069629: call 0x1009dd55 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x100DCEB0u); /* 0x1006962E: push 0x100dceb0 */
    eax = ebp + (-0xCC); /* 0x10069633: lea eax, [ebp - 0xcc] */
    MEM32(ebp + (-0xCC)) = 0x10067484u; /* 0x10069639: mov dword ptr [ebp - 0xcc], 0x10067484 */
    PUSH32(esp, eax); /* 0x10069643: push eax */
    RECOMP_CALL(sub_100192EB); /* 0x10069644: call 0x100192eb */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0xAC)); /* 0x10069649: mov eax, dword ptr [ebp - 0xac] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1006964F: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(eax + 0x74), ebx */ /* 0x10069651: cmp dword ptr [eax + 0x74], ebx */
    _flag_a = (uint32_t)(MEM32(eax + 0x74)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_10069666; /* 0x10069654: jle 0x10069666 */
L_10069656:
    /* cmp MEM32(eax + 0x78), ebx */ /* 0x10069656: cmp dword ptr [eax + 0x78], ebx */
    _flag_a = (uint32_t)(MEM32(eax + 0x78)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10069666; /* 0x10069659: jne 0x10069666 */
L_1006965B:
    ecx = MEM32(ebp + (-0xA8)); /* 0x1006965B: mov ecx, dword ptr [ebp - 0xa8] */
    RECOMP_CALL(sub_10079261); /* 0x10069661: call 0x10079261 */
    RECOMP_FLAGS_IN();
L_10069666:
    eax = 0x1006966Cu; /* 0x10069666: mov eax, 0x1006966c */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006966B: ret  */
L_1006967A:
    PUSH32(esp, ebx); /* 0x1006967A: push ebx */
    eax = ebp + (-0xA4); /* 0x1006967B: lea eax, [ebp - 0xa4] */
    MEM32(ebp + (-0x4)) = 1; /* 0x10069681: mov dword ptr [ebp - 4], 1 */
    PUSH32(esp, eax); /* 0x10069688: push eax */
    RECOMP_CALL(sub_10078CEC); /* 0x10069689: call 0x10078cec */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0xA4); /* 0x1006968E: lea ecx, [ebp - 0xa4] */
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(ebx)); /* 0x10069694: mov byte ptr [ebp - 4], bl */
    RECOMP_CALL(sub_100785DA); /* 0x10069697: call 0x100785da */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1006969C: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100696F3; /* 0x100696A0: jmp 0x100696f3 */
L_100696F3:
    eax = MEM32(ebp + (-0xB0)); /* 0x100696F3: mov eax, dword ptr [ebp - 0xb0] */
    MEM32(esi + 0x80) = ebx; /* 0x100696F9: mov dword ptr [esi + 0x80], ebx */
    /* cmp MEM8(eax + 0x11), 0 */ /* 0x100696FF: cmp byte ptr [eax + 0x11], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0x11)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10069773; /* 0x10069703: jne 0x10069773 */
L_10069705:
    eax = MEM32(ebp + (-0xB8)); /* 0x10069705: mov eax, dword ptr [ebp - 0xb8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1006970B: add eax, 4 */
    _flag_k = FK_ADD;
    ecx = eax; /* 0x1006970E: mov ecx, eax */
    MEM32(ebp + (-0xAC)) = eax; /* 0x10069710: mov dword ptr [ebp - 0xac], eax */
    RECOMP_CALL(sub_1006F14E); /* 0x10069716: call 0x1006f14e */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(esi + 0x51), 0 */ /* 0x1006971B: cmp byte ptr [esi + 0x51], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x51)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = esi + 0x60; /* 0x1006971F: lea eax, [esi + 0x60] */
    PUSH32(esp, eax); /* 0x10069722: push eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10069751; /* 0x10069723: je 0x10069751 */
L_10069725:
    ecx = MEM32(ebp + (-0xC0)); /* 0x10069725: mov ecx, dword ptr [ebp - 0xc0] */
    ecx = ecx + 0x50; /* 0x1006972B: lea ecx, [ecx + 0x50] */
    RECOMP_CALL(sub_10069811); /* 0x1006972E: call 0x10069811 */
    RECOMP_FLAGS_IN();
    goto L_1006975C; /* 0x10069733: jmp 0x1006975c */
L_10069751:
    ecx = MEM32(ebp + (-0xB8)); /* 0x10069751: mov ecx, dword ptr [ebp - 0xb8] */
    RECOMP_CALL(sub_10069871); /* 0x10069757: call 0x10069871 */
    RECOMP_FLAGS_IN();
L_1006975C:
    eax = MEM32(ebp + (-0xAC)); /* 0x1006975C: mov eax, dword ptr [ebp - 0xac] */
    _flag_a = (uint32_t)((ecx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ecx | 0xFFFFFFFFu));
    ecx = ecx | 0xFFFFFFFFu; /* 0x10069762: or ecx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(edi + 0x30)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x30) = MEM32(edi + 0x30) - 1; /* 0x10069765: dec dword ptr [edi + 0x30] */
    _flag_k = FK_DEC;
    MEM32(eax) = ebx; /* 0x10069768: mov dword ptr [eax], ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1006976A: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + ecx; ecx = _old; MEM32(eax) = _sum; } /* 0x1006976D: lock xadd dword ptr [eax], ecx */
    _flag_k = FK_ADD;
    goto L_10069782; /* 0x10069771: jmp 0x10069782 */
L_10069773:
    ecx = MEM32(ebp + (-0xB8)); /* 0x10069773: mov ecx, dword ptr [ebp - 0xb8] */
    eax = esi + 0x60; /* 0x10069779: lea eax, [esi + 0x60] */
    PUSH32(esp, eax); /* 0x1006977C: push eax */
    RECOMP_CALL(sub_10069811); /* 0x1006977D: call 0x10069811 */
    RECOMP_FLAGS_IN();
L_10069782:
    /* cmp MEM32(ebp + (-0xB4)), 0 */ /* 0x10069782: cmp dword ptr [ebp - 0xb4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xB4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100697A7; /* 0x10069789: je 0x100697a7 */
L_1006978B:
    PUSH32(esp, MEM32(ebp + (-0xB4))); /* 0x1006978B: push dword ptr [ebp - 0xb4] */
    ecx = MEM32(ebp + (-0xBC)); /* 0x10069791: mov ecx, dword ptr [ebp - 0xbc] */
    RECOMP_CALL(sub_100690DC); /* 0x10069797: call 0x100690dc */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xB4)); /* 0x1006979C: mov ecx, dword ptr [ebp - 0xb4] */
    RECOMP_CALL(sub_10068B23); /* 0x100697A2: call 0x10068b23 */
    RECOMP_FLAGS_IN();
L_100697A7:
    MEM32(esi + 0x6C) = 0xFFFFFFFFu; /* 0x100697A7: mov dword ptr [esi + 0x6c], 0xffffffff */
    ecx = esi + 0x4; /* 0x100697AE: lea ecx, [esi + 4] */
    MEM32(esi + 0x70) = 0xFFFFFFFFu; /* 0x100697B1: mov dword ptr [esi + 0x70], 0xffffffff */
    MEM32(esi + 0x74) = ebx; /* 0x100697B8: mov dword ptr [esi + 0x74], ebx */
    MEM32(esi + 0x78) = ebx; /* 0x100697BB: mov dword ptr [esi + 0x78], ebx */
    RECOMP_CALL(sub_1006A234); /* 0x100697BE: call 0x1006a234 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0xB0)); /* 0x100697C3: mov eax, dword ptr [ebp - 0xb0] */
    ecx = edi; /* 0x100697C9: mov ecx, edi */
    MEM32(esi + 0x34) = ebx; /* 0x100697CB: mov dword ptr [esi + 0x34], ebx */
    MEM32(esi + 0x38) = ebx; /* 0x100697CE: mov dword ptr [esi + 0x38], ebx */
    PUSH32(esp, eax); /* 0x100697D1: push eax */
    MEM32(eax + 0x8) = ebx; /* 0x100697D2: mov dword ptr [eax + 8], ebx */
    RECOMP_CALL(sub_100788A3); /* 0x100697D5: call 0x100788a3 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_1009E207); /* 0x100697DA: call 0x1009e207 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100697DF: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006966C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006966Cu);

L_1006966C:
    edi = MEM32(ebp + (-0xA8)); /* 0x1006966C: mov edi, dword ptr [ebp - 0xa8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10069672: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ebp + (-0xAC)); /* 0x10069674: mov esi, dword ptr [ebp - 0xac] */
    PUSH32(esp, ebx); /* 0x1006967A: push ebx */
    eax = ebp + (-0xA4); /* 0x1006967B: lea eax, [ebp - 0xa4] */
    MEM32(ebp + (-0x4)) = 1; /* 0x10069681: mov dword ptr [ebp - 4], 1 */
    PUSH32(esp, eax); /* 0x10069688: push eax */
    RECOMP_CALL(sub_10078CEC); /* 0x10069689: call 0x10078cec */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0xA4); /* 0x1006968E: lea ecx, [ebp - 0xa4] */
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(ebx)); /* 0x10069694: mov byte ptr [ebp - 4], bl */
    RECOMP_CALL(sub_100785DA); /* 0x10069697: call 0x100785da */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1006969C: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100696F3; /* 0x100696A0: jmp 0x100696f3 */
L_100696F3:
    eax = MEM32(ebp + (-0xB0)); /* 0x100696F3: mov eax, dword ptr [ebp - 0xb0] */
    MEM32(esi + 0x80) = ebx; /* 0x100696F9: mov dword ptr [esi + 0x80], ebx */
    /* cmp MEM8(eax + 0x11), 0 */ /* 0x100696FF: cmp byte ptr [eax + 0x11], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0x11)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10069773; /* 0x10069703: jne 0x10069773 */
L_10069705:
    eax = MEM32(ebp + (-0xB8)); /* 0x10069705: mov eax, dword ptr [ebp - 0xb8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1006970B: add eax, 4 */
    _flag_k = FK_ADD;
    ecx = eax; /* 0x1006970E: mov ecx, eax */
    MEM32(ebp + (-0xAC)) = eax; /* 0x10069710: mov dword ptr [ebp - 0xac], eax */
    RECOMP_CALL(sub_1006F14E); /* 0x10069716: call 0x1006f14e */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(esi + 0x51), 0 */ /* 0x1006971B: cmp byte ptr [esi + 0x51], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x51)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = esi + 0x60; /* 0x1006971F: lea eax, [esi + 0x60] */
    PUSH32(esp, eax); /* 0x10069722: push eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10069751; /* 0x10069723: je 0x10069751 */
L_10069725:
    ecx = MEM32(ebp + (-0xC0)); /* 0x10069725: mov ecx, dword ptr [ebp - 0xc0] */
    ecx = ecx + 0x50; /* 0x1006972B: lea ecx, [ecx + 0x50] */
    RECOMP_CALL(sub_10069811); /* 0x1006972E: call 0x10069811 */
    RECOMP_FLAGS_IN();
    goto L_1006975C; /* 0x10069733: jmp 0x1006975c */
L_10069751:
    ecx = MEM32(ebp + (-0xB8)); /* 0x10069751: mov ecx, dword ptr [ebp - 0xb8] */
    RECOMP_CALL(sub_10069871); /* 0x10069757: call 0x10069871 */
    RECOMP_FLAGS_IN();
L_1006975C:
    eax = MEM32(ebp + (-0xAC)); /* 0x1006975C: mov eax, dword ptr [ebp - 0xac] */
    _flag_a = (uint32_t)((ecx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ecx | 0xFFFFFFFFu));
    ecx = ecx | 0xFFFFFFFFu; /* 0x10069762: or ecx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(edi + 0x30)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x30) = MEM32(edi + 0x30) - 1; /* 0x10069765: dec dword ptr [edi + 0x30] */
    _flag_k = FK_DEC;
    MEM32(eax) = ebx; /* 0x10069768: mov dword ptr [eax], ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1006976A: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + ecx; ecx = _old; MEM32(eax) = _sum; } /* 0x1006976D: lock xadd dword ptr [eax], ecx */
    _flag_k = FK_ADD;
    goto L_10069782; /* 0x10069771: jmp 0x10069782 */
L_10069773:
    ecx = MEM32(ebp + (-0xB8)); /* 0x10069773: mov ecx, dword ptr [ebp - 0xb8] */
    eax = esi + 0x60; /* 0x10069779: lea eax, [esi + 0x60] */
    PUSH32(esp, eax); /* 0x1006977C: push eax */
    RECOMP_CALL(sub_10069811); /* 0x1006977D: call 0x10069811 */
    RECOMP_FLAGS_IN();
L_10069782:
    /* cmp MEM32(ebp + (-0xB4)), 0 */ /* 0x10069782: cmp dword ptr [ebp - 0xb4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xB4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100697A7; /* 0x10069789: je 0x100697a7 */
L_1006978B:
    PUSH32(esp, MEM32(ebp + (-0xB4))); /* 0x1006978B: push dword ptr [ebp - 0xb4] */
    ecx = MEM32(ebp + (-0xBC)); /* 0x10069791: mov ecx, dword ptr [ebp - 0xbc] */
    RECOMP_CALL(sub_100690DC); /* 0x10069797: call 0x100690dc */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xB4)); /* 0x1006979C: mov ecx, dword ptr [ebp - 0xb4] */
    RECOMP_CALL(sub_10068B23); /* 0x100697A2: call 0x10068b23 */
    RECOMP_FLAGS_IN();
L_100697A7:
    MEM32(esi + 0x6C) = 0xFFFFFFFFu; /* 0x100697A7: mov dword ptr [esi + 0x6c], 0xffffffff */
    ecx = esi + 0x4; /* 0x100697AE: lea ecx, [esi + 4] */
    MEM32(esi + 0x70) = 0xFFFFFFFFu; /* 0x100697B1: mov dword ptr [esi + 0x70], 0xffffffff */
    MEM32(esi + 0x74) = ebx; /* 0x100697B8: mov dword ptr [esi + 0x74], ebx */
    MEM32(esi + 0x78) = ebx; /* 0x100697BB: mov dword ptr [esi + 0x78], ebx */
    RECOMP_CALL(sub_1006A234); /* 0x100697BE: call 0x1006a234 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0xB0)); /* 0x100697C3: mov eax, dword ptr [ebp - 0xb0] */
    ecx = edi; /* 0x100697C9: mov ecx, edi */
    MEM32(esi + 0x34) = ebx; /* 0x100697CB: mov dword ptr [esi + 0x34], ebx */
    MEM32(esi + 0x38) = ebx; /* 0x100697CE: mov dword ptr [esi + 0x38], ebx */
    PUSH32(esp, eax); /* 0x100697D1: push eax */
    MEM32(eax + 0x8) = ebx; /* 0x100697D2: mov dword ptr [eax + 8], ebx */
    RECOMP_CALL(sub_100788A3); /* 0x100697D5: call 0x100788a3 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_1009E207); /* 0x100697DA: call 0x1009e207 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100697DF: ret  */
    RECOMP_REGS_OUT();
}

void sub_100697E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100697E0u);

L_100697E0:
    PUSH32(esp, ebp); /* 0x100697E0: push ebp */
    ebp = esp; /* 0x100697E1: mov ebp, esp */
    PUSH32(esp, esi); /* 0x100697E3: push esi */
    PUSH32(esp, edi); /* 0x100697E4: push edi */
    edi = ecx; /* 0x100697E5: mov edi, ecx */
    esi = edi + 0x4; /* 0x100697E7: lea esi, [edi + 4] */
    ecx = esi; /* 0x100697EA: mov ecx, esi */
    RECOMP_CALL(sub_1006F14E); /* 0x100697EC: call 0x1006f14e */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100697F1: push dword ptr [ebp + 8] */
    ecx = edi; /* 0x100697F4: mov ecx, edi */
    RECOMP_CALL(sub_10069842); /* 0x100697F6: call 0x10069842 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0; /* 0x100697FB: mov dword ptr [esi], 0 */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10069801: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x10069804: add esi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(esi), _sum = MEM32(esi) + eax; eax = _old; MEM32(esi) = _sum; } /* 0x10069807: lock xadd dword ptr [esi], eax */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x1006980B: pop edi */
    esi = POP32_VAL(esp); /* 0x1006980C: pop esi */
    ebp = POP32_VAL(esp); /* 0x1006980D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1006980E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_10069811(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10069811u);

L_10069811:
    PUSH32(esp, ebp); /* 0x10069811: push ebp */
    ebp = esp; /* 0x10069812: mov ebp, esp */
    PUSH32(esp, esi); /* 0x10069814: push esi */
    PUSH32(esp, edi); /* 0x10069815: push edi */
    edi = ecx; /* 0x10069816: mov edi, ecx */
    esi = edi + 0x4; /* 0x10069818: lea esi, [edi + 4] */
    ecx = esi; /* 0x1006981B: mov ecx, esi */
    RECOMP_CALL(sub_1006F14E); /* 0x1006981D: call 0x1006f14e */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10069822: push dword ptr [ebp + 8] */
    ecx = edi; /* 0x10069825: mov ecx, edi */
    RECOMP_CALL(sub_10069871); /* 0x10069827: call 0x10069871 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0; /* 0x1006982C: mov dword ptr [esi], 0 */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10069832: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x10069835: add esi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(esi), _sum = MEM32(esi) + eax; eax = _old; MEM32(esi) = _sum; } /* 0x10069838: lock xadd dword ptr [esi], eax */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x1006983C: pop edi */
    esi = POP32_VAL(esp); /* 0x1006983D: pop esi */
    ebp = POP32_VAL(esp); /* 0x1006983E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1006983F: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_10069842(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10069842u);

L_10069842:
    PUSH32(esp, ebp); /* 0x10069842: push ebp */
    ebp = esp; /* 0x10069843: mov ebp, esp */
    eax = MEM32(ecx); /* 0x10069845: mov eax, dword ptr [ecx] */
    edx = MEM32(ebp + 0x8); /* 0x10069847: mov edx, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x1006984A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10069855; /* 0x1006984C: jne 0x10069855 */
L_1006984E:
    MEM32(edx + 0x4) = edx; /* 0x1006984E: mov dword ptr [edx + 4], edx */
    MEM32(edx) = edx; /* 0x10069851: mov dword ptr [edx], edx */
    goto L_1006986B; /* 0x10069853: jmp 0x1006986b */
L_10069855:
    eax = MEM32(eax + 0x4); /* 0x10069855: mov eax, dword ptr [eax + 4] */
    MEM32(edx + 0x4) = eax; /* 0x10069858: mov dword ptr [edx + 4], eax */
    eax = MEM32(ecx); /* 0x1006985B: mov eax, dword ptr [ecx] */
    MEM32(edx) = eax; /* 0x1006985D: mov dword ptr [edx], eax */
    eax = MEM32(ecx); /* 0x1006985F: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x4); /* 0x10069861: mov eax, dword ptr [eax + 4] */
    MEM32(eax) = edx; /* 0x10069864: mov dword ptr [eax], edx */
    eax = MEM32(ecx); /* 0x10069866: mov eax, dword ptr [ecx] */
    MEM32(eax + 0x4) = edx; /* 0x10069868: mov dword ptr [eax + 4], edx */
L_1006986B:
    MEM32(ecx) = edx; /* 0x1006986B: mov dword ptr [ecx], edx */
    ebp = POP32_VAL(esp); /* 0x1006986D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1006986E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_10069871(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10069871u);

L_10069871:
    PUSH32(esp, ebp); /* 0x10069871: push ebp */
    ebp = esp; /* 0x10069872: mov ebp, esp */
    PUSH32(esp, esi); /* 0x10069874: push esi */
    esi = MEM32(ebp + 0x8); /* 0x10069875: mov esi, dword ptr [ebp + 8] */
    edx = MEM32(esi + 0x4); /* 0x10069878: mov edx, dword ptr [esi + 4] */
    eax = MEM32(esi); /* 0x1006987B: mov eax, dword ptr [esi] */
    MEM32(edx) = eax; /* 0x1006987D: mov dword ptr [edx], eax */
    edx = MEM32(esi); /* 0x1006987F: mov edx, dword ptr [esi] */
    eax = MEM32(esi + 0x4); /* 0x10069881: mov eax, dword ptr [esi + 4] */
    MEM32(edx + 0x4) = eax; /* 0x10069884: mov dword ptr [edx + 4], eax */
    eax = MEM32(ecx); /* 0x10069887: mov eax, dword ptr [ecx] */
    /* cmp esi, eax */ /* 0x10069889: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = POP32_VAL(esp); /* 0x1006988B: pop esi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1006989B; /* 0x1006988C: jne 0x1006989b */
L_1006988E:
    /* cmp eax, MEM32(eax + 0x4) */ /* 0x1006988E: cmp eax, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(eax + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10069897; /* 0x10069891: jne 0x10069897 */
L_10069893:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10069893: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10069899; /* 0x10069895: jmp 0x10069899 */
L_10069897:
    eax = MEM32(eax); /* 0x10069897: mov eax, dword ptr [eax] */
L_10069899:
    MEM32(ecx) = eax; /* 0x10069899: mov dword ptr [ecx], eax */
L_1006989B:
    ebp = POP32_VAL(esp); /* 0x1006989B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1006989C: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1006989F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006989Fu);

L_1006989F:
    RECOMP_CALL(sub_10073608); /* 0x1006989F: call 0x10073608 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100698A4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100698AE; /* 0x100698A6: je 0x100698ae */
L_100698A8:
    edx = MEM32(eax); /* 0x100698A8: mov edx, dword ptr [eax] */
    ecx = eax; /* 0x100698AA: mov ecx, eax */
    { _itail_tgt = (uint32_t)(MEM32(edx)); goto _ljump; }
L_100698AE:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x100698AE: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100698B1: ret  */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_100698B2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100698B2u);

L_100698B2:
    RECOMP_CALL(sub_10073608); /* 0x100698B2: call 0x10073608 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100698B7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100698C2; /* 0x100698B9: je 0x100698c2 */
L_100698BB:
    edx = MEM32(eax); /* 0x100698BB: mov edx, dword ptr [eax] */
    ecx = eax; /* 0x100698BD: mov ecx, eax */
    { _itail_tgt = (uint32_t)(MEM32(edx + 0x4)); goto _ljump; }
L_100698C2:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x100698C2: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100698C5: ret  */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_100698C6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100698C6u);

L_100698C6:
    RECOMP_CALL(sub_10073608); /* 0x100698C6: call 0x10073608 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100698CB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100698D6; /* 0x100698CD: je 0x100698d6 */
L_100698CF:
    edx = MEM32(eax); /* 0x100698CF: mov edx, dword ptr [eax] */
    ecx = eax; /* 0x100698D1: mov ecx, eax */
    { _itail_tgt = (uint32_t)(MEM32(edx + 0x8)); goto _ljump; }
L_100698D6:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x100698D6: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100698D9: ret  */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_100698DA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100698DAu);

L_100698DA:
    RECOMP_CALL(sub_10014872); /* 0x100698DA: call 0x10014872 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x100698DF: mov ecx, eax */
    edx = MEM32(eax); /* 0x100698E1: mov edx, dword ptr [eax] */
    { _itail_tgt = (uint32_t)(MEM32(edx + 0x18)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_100698E6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100698E6u);

L_100698E6:
    RECOMP_CALL(sub_10014872); /* 0x100698E6: call 0x10014872 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x100698EB: mov ecx, eax */
    edx = MEM32(eax); /* 0x100698ED: mov edx, dword ptr [eax] */
    { _itail_tgt = (uint32_t)(MEM32(edx + 0x1C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_100698F2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100698F2u);

L_100698F2:
    RECOMP_CALL(sub_10014872); /* 0x100698F2: call 0x10014872 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x100698F7: mov ecx, eax */
    edx = MEM32(eax); /* 0x100698F9: mov edx, dword ptr [eax] */
    { _itail_tgt = (uint32_t)(MEM32(edx + 0x20)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_100698FE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100698FEu);

L_100698FE:
    RECOMP_CALL(sub_10073608); /* 0x100698FE: call 0x10073608 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10069903: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006992E; /* 0x10069905: je 0x1006992e */
L_10069907:
    ecx = MEM32(eax + 0x34); /* 0x10069907: mov ecx, dword ptr [eax + 0x34] */
    /* test ecx, ecx */ /* 0x1006990A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006992E; /* 0x1006990C: je 0x1006992e */
L_1006990E:
    eax = MEM32(ecx + 0x4); /* 0x1006990E: mov eax, dword ptr [ecx + 4] */
    if (28u) _cf = (((eax) >> 27) & 1u); /* 0x10069911: sar eax, 0x1c */
    if (28u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 28u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 28u);
    /* test LO8(eax), 1 */ /* 0x10069914: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100782D8; /* 0x10069916: jne 0x100782d8 */
L_1006991C:
    eax = MEM32(ecx + 0x64); /* 0x1006991C: mov eax, dword ptr [ecx + 0x64] */
    /* cmp eax, ecx */ /* 0x1006991F: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100793F6; /* 0x10069921: je 0x100793f6 */
L_10069927:
    ecx = eax; /* 0x10069927: mov ecx, eax */
    goto L_100793F6; /* 0x10069929: jmp 0x100793f6 */
L_1006992E:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x1006992E: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10069930: ret  */
L_100782D8:
    PUSH32(esp, ebx); /* 0x100782D8: push ebx */
    PUSH32(esp, esi); /* 0x100782D9: push esi */
    esi = ecx; /* 0x100782DA: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x100782DC: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0xC), ebx */ /* 0x100782DE: cmp dword ptr [esi + 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100782EB; /* 0x100782E1: jne 0x100782eb */
L_100782E3:
    RECOMP_CALL(sub_10014872); /* 0x100782E3: call 0x10014872 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0xC) = eax; /* 0x100782E8: mov dword ptr [esi + 0xc], eax */
L_100782EB:
    /* cmp MEM32(esi + 0x18), ebx */ /* 0x100782EB: cmp dword ptr [esi + 0x18], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x18)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100782F4; /* 0x100782EE: je 0x100782f4 */
L_100782F0:
    SET_LO8(eax, 1); /* 0x100782F0: mov al, 1 */
    goto L_10078348; /* 0x100782F2: jmp 0x10078348 */
L_100782F4:
    PUSH32(esp, ebx); /* 0x100782F4: push ebx */
    ecx = esi; /* 0x100782F5: mov ecx, esi */
    RECOMP_CALL(sub_10079895); /* 0x100782F7: call 0x10079895 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100782FC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10078313; /* 0x100782FE: je 0x10078313 */
L_10078300:
    /* cmp eax, 2 */ /* 0x10078300: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10078313; /* 0x10078303: je 0x10078313 */
L_10078305:
    /* cmp MEM32(eax + 0x8), ebx */ /* 0x10078305: cmp dword ptr [eax + 8], ebx */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10078313; /* 0x10078308: je 0x10078313 */
L_1007830A:
    ecx = esi; /* 0x1007830A: mov ecx, esi */
    RECOMP_CALL(sub_1007826A); /* 0x1007830C: call 0x1007826a */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_100782F0; /* 0x10078311: jmp 0x100782f0 */
L_10078313:
    eax = MEM32(esi + 0x4); /* 0x10078313: mov eax, dword ptr [esi + 4] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x10078316: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x10078316: shl eax, 4 */
    if (4u) _cf = (((eax) >> 3) & 1u); /* 0x10078319: sar eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 4u);
    PUSH32(esp, edi); /* 0x1007831C: push edi */
    edi = MEM32(esi + 0xC); /* 0x1007831D: mov edi, dword ptr [esi + 0xc] */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x10078320: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10078332; /* 0x10078323: je 0x10078332 */
L_10078325:
    PUSH32(esp, eax); /* 0x10078325: push eax */
    PUSH32(esp, esi); /* 0x10078326: push esi */
    ecx = edi; /* 0x10078327: mov ecx, edi */
    RECOMP_CALL(sub_1006A559); /* 0x10078329: call 0x1006a559 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1007832E: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10078342; /* 0x10078330: jne 0x10078342 */
L_10078332:
    /* cmp MEM32(edi + 0x78), ebx */ /* 0x10078332: cmp dword ptr [edi + 0x78], ebx */
    _flag_a = (uint32_t)(MEM32(edi + 0x78)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_10078345; /* 0x10078335: jle 0x10078345 */
L_10078337:
    ecx = esi; /* 0x10078337: mov ecx, esi */
    RECOMP_CALL(sub_1007981B); /* 0x10078339: call 0x1007981b */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1007833E: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10078345; /* 0x10078340: je 0x10078345 */
L_10078342:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10078342: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x10078344: inc ebx */
    _flag_k = FK_INC;
L_10078345:
    SET_LO8(eax, LO8(ebx)); /* 0x10078345: mov al, bl */
    edi = POP32_VAL(esp); /* 0x10078347: pop edi */
L_10078348:
    esi = POP32_VAL(esp); /* 0x10078348: pop esi */
    ebx = POP32_VAL(esp); /* 0x10078349: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007834A: ret  */
L_100793F6:
    PUSH32(esp, esi); /* 0x100793F6: push esi */
    esi = ecx; /* 0x100793F7: mov esi, ecx */
    /* cmp MEM32(esi + 0x34), 0 */ /* 0x100793F9: cmp dword ptr [esi + 0x34], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x34)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10079403; /* 0x100793FD: je 0x10079403 */
L_100793FF:
    SET_LO8(eax, 1); /* 0x100793FF: mov al, 1 */
    esi = POP32_VAL(esp); /* 0x10079401: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10079402: ret  */
L_10079403:
    eax = MEM32(esi + 0x8); /* 0x10079403: mov eax, dword ptr [esi + 8] */
    /* test eax, eax */ /* 0x10079406: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007941C; /* 0x10079408: je 0x1007941c */
L_1007940A:
    /* cmp eax, 2 */ /* 0x1007940A: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007941C; /* 0x1007940D: je 0x1007941c */
L_1007940F:
    /* cmp MEM32(eax + 0x8), 0 */ /* 0x1007940F: cmp dword ptr [eax + 8], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007941C; /* 0x10079413: je 0x1007941c */
L_10079415:
    RECOMP_CALL(sub_10079261); /* 0x10079415: call 0x10079261 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_100793FF; /* 0x1007941A: jmp 0x100793ff */
L_1007941C:
    PUSH32(esp, ebx); /* 0x1007941C: push ebx */
    PUSH32(esp, edi); /* 0x1007941D: push edi */
    RECOMP_CALL(sub_100787CF); /* 0x1007941E: call 0x100787cf */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x10079423: mov edi, eax */
    eax = MEM32(edi + 0x4); /* 0x10079425: mov eax, dword ptr [edi + 4] */
    ebx = MEM32(edi + 0xC); /* 0x10079428: mov ebx, dword ptr [edi + 0xc] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x1007942B: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x1007942B: shl eax, 4 */
    if (4u) _cf = (((eax) >> 3) & 1u); /* 0x1007942E: sar eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 4u);
    /* cmp eax, 0xFFFFFFFFu */ /* 0x10079431: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10079443; /* 0x10079434: je 0x10079443 */
L_10079436:
    PUSH32(esp, eax); /* 0x10079436: push eax */
    PUSH32(esp, edi); /* 0x10079437: push edi */
    ecx = ebx; /* 0x10079438: mov ecx, ebx */
    RECOMP_CALL(sub_1006A559); /* 0x1007943A: call 0x1006a559 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1007943F: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007948E; /* 0x10079441: jne 0x1007948e */
L_10079443:
    /* cmp MEM32(ebx + 0x78), 0 */ /* 0x10079443: cmp dword ptr [ebx + 0x78], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x78)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_10079454; /* 0x10079447: jle 0x10079454 */
L_10079449:
    ecx = edi; /* 0x10079449: mov ecx, edi */
    RECOMP_CALL(sub_1007981B); /* 0x1007944B: call 0x1007981b */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x10079450: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007948E; /* 0x10079452: jne 0x1007948e */
L_10079454:
    ecx = edi; /* 0x10079454: mov ecx, edi */
    RECOMP_CALL(sub_10078857); /* 0x10079456: call 0x10078857 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1007945B: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10079492; /* 0x1007945D: je 0x10079492 */
L_1007945F:
    eax = MEM32(esi + 0x4); /* 0x1007945F: mov eax, dword ptr [esi + 4] */
    edi = MEM32(esi + 0xC); /* 0x10079462: mov edi, dword ptr [esi + 0xc] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x10079465: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x10079465: shl eax, 4 */
    if (4u) _cf = (((eax) >> 3) & 1u); /* 0x10079468: sar eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 4u);
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1007946B: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007947D; /* 0x1007946E: je 0x1007947d */
L_10079470:
    PUSH32(esp, eax); /* 0x10079470: push eax */
    PUSH32(esp, esi); /* 0x10079471: push esi */
    ecx = edi; /* 0x10079472: mov ecx, edi */
    RECOMP_CALL(sub_1006A559); /* 0x10079474: call 0x1006a559 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x10079479: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007948E; /* 0x1007947B: jne 0x1007948e */
L_1007947D:
    /* cmp MEM32(edi + 0x78), 0 */ /* 0x1007947D: cmp dword ptr [edi + 0x78], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x78)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_10079492; /* 0x10079481: jle 0x10079492 */
L_10079483:
    ecx = esi; /* 0x10079483: mov ecx, esi */
    RECOMP_CALL(sub_1007981B); /* 0x10079485: call 0x1007981b */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1007948A: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10079492; /* 0x1007948C: je 0x10079492 */
L_1007948E:
    SET_LO8(eax, 1); /* 0x1007948E: mov al, 1 */
    goto L_10079494; /* 0x10079490: jmp 0x10079494 */
L_10079492:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x10079492: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_10079494:
    edi = POP32_VAL(esp); /* 0x10079494: pop edi */
    ebx = POP32_VAL(esp); /* 0x10079495: pop ebx */
    esi = POP32_VAL(esp); /* 0x10079496: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10079497: ret  */
    RECOMP_REGS_OUT();
}

void sub_10069931(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10069931u);

    goto L_10069931;
L_10014872:
    PUSH32(esp, ebp); /* 0x10014872: push ebp */
    ebp = esp; /* 0x10014873: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x10014875: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test MEM32(0x100DFDDC), 0x80000000u */ /* 0x10014878: test dword ptr [0x100dfddc], 0x80000000 */
    _flag_a = (uint32_t)(MEM32(0x100DFDDC)); _flag_b = (uint32_t)(0x80000000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10023A79; /* 0x10014882: je 0x10023a79 */
L_10014888:
    PUSH32(esp, MEM32(0x100DFDE0)); /* 0x10014888: push dword ptr [0x100dfde0] */
    RECOMP_ICALL(MEM32(0x100E514C)); /* 0x1001488E: call dword ptr [0x100e514c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10014894: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10023A79; /* 0x10014896: je 0x10023a79 */
L_1001489C:
    esp = ebp; /* 0x1001489C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1001489E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1001489F: ret  */
L_10023A79:
    RECOMP_CALL(sub_10023E43); /* 0x10023A79: call 0x10023e43 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1001489C; /* 0x10023A7E: jmp 0x1001489c */
L_10069931:
    RECOMP_BACKEDGE();
    goto L_10014872; /* 0x10069931: jmp 0x10014872 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10069936(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10069936u);

L_10069936:
    PUSH32(esp, ebp); /* 0x10069936: push ebp */
    ebp = esp; /* 0x10069937: mov ebp, esp */
    RECOMP_CALL(sub_10014872); /* 0x10069939: call 0x10014872 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1006993E: push dword ptr [ebp + 8] */
    ecx = eax; /* 0x10069941: mov ecx, eax */
    edx = MEM32(eax); /* 0x10069943: mov edx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(edx + 0x24)); /* 0x10069945: call dword ptr [edx + 0x24] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x10069948: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10069949: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006994A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006994Au);

L_1006994A:
    PUSH32(esp, ebp); /* 0x1006994A: push ebp */
    ebp = esp; /* 0x1006994B: mov ebp, esp */
    RECOMP_CALL(sub_10014872); /* 0x1006994D: call 0x10014872 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x10069952: mov ecx, dword ptr [ebp + 8] */
    MEM32(ecx) = eax; /* 0x10069955: mov dword ptr [ecx], eax */
    eax = ecx; /* 0x10069957: mov eax, ecx */
    ebp = POP32_VAL(esp); /* 0x10069959: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006995A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006995B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006995Bu);

L_1006995B:
    ecx = MEM32(ecx); /* 0x1006995B: mov ecx, dword ptr [ecx] */
    eax = MEM32(ecx); /* 0x1006995D: mov eax, dword ptr [ecx] */
    { _itail_tgt = (uint32_t)(MEM32(eax + 0x10)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_10069962(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10069962u);

L_10069962:
    PUSH32(esp, ebp); /* 0x10069962: push ebp */
    ebp = esp; /* 0x10069963: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x10069965: mov edx, dword ptr [ebp + 8] */
    eax = MEM32(edx); /* 0x10069968: mov eax, dword ptr [edx] */
    _flag_a = (uint32_t)((eax ^ MEM32(ecx))); _flag_b = (uint32_t)((eax ^ MEM32(ecx)));
    eax = eax ^ MEM32(ecx); /* 0x1006996A: xor eax, dword ptr [ecx] */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, 0x0FFFFFFFu */ /* 0x1006996C: test eax, 0xfffffff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x0FFFFFFFu);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10069980; /* 0x10069971: jne 0x10069980 */
L_10069973:
    eax = MEM32(ecx + 0x8); /* 0x10069973: mov eax, dword ptr [ecx + 8] */
    /* cmp eax, MEM32(edx + 0x8) */ /* 0x10069976: cmp eax, dword ptr [edx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10069980; /* 0x10069979: jne 0x10069980 */
L_1006997B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1006997B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1006997D: inc eax */
    _flag_k = FK_INC;
    goto L_10069982; /* 0x1006997E: jmp 0x10069982 */
L_10069980:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10069980: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_10069982:
    ebp = POP32_VAL(esp); /* 0x10069982: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10069983: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1006998D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006998Du);

L_1006998D:
    PUSH32(esp, ebp); /* 0x1006998D: push ebp */
    ebp = esp; /* 0x1006998E: mov ebp, esp */
    /* test MEM8(ebp + 0x8), 1 */ /* 0x10069990: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, esi); /* 0x10069994: push esi */
    esi = ecx; /* 0x10069995: mov esi, ecx */
    MEM32(esi) = 0x100674A4u; /* 0x10069997: mov dword ptr [esi], 0x100674a4 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_100699A6; /* 0x1006999D: je 0x100699a6 */
L_1006999F:
    PUSH32(esp, esi); /* 0x1006999F: push esi */
    RECOMP_CALL(sub_1000ECE0); /* 0x100699A0: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100699A5: pop ecx */
L_100699A6:
    eax = esi; /* 0x100699A6: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x100699A8: pop esi */
    ebp = POP32_VAL(esp); /* 0x100699A9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x100699AA: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_100699E7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100699E7u);

L_100699E7:
    PUSH32(esp, 8); /* 0x100699E7: push 8 */
    eax = 0x100DACF0u; /* 0x100699E9: mov eax, 0x100dacf0 */
    RECOMP_CALL(sub_100149A4); /* 0x100699EE: call 0x100149a4 */
    RECOMP_FLAGS_IN();
    ebx = ecx; /* 0x100699F3: mov ebx, ecx */
    edi = MEM32(ebx + 0x4); /* 0x100699F5: mov edi, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100699F8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (4u) _cf = (((edi) >> 3) & 1u); /* 0x100699FA: sar edi, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edi >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = (uint32_t)((int32_t)edi >> 4u);
    MEM32(ebp + (-0x10)) = eax; /* 0x100699FD: mov dword ptr [ebp - 0x10], eax */
    /* cmp edi, 4 */ /* 0x10069A00: cmp edi, 4 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_10069A45; /* 0x10069A03: jge 0x10069a45 */
L_10069A05:
    /* test edi, edi */ /* 0x10069A05: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10069A13; /* 0x10069A07: jle 0x10069a13 */
L_10069A09:
    eax = MEM32(ebx + 0x8); /* 0x10069A09: mov eax, dword ptr [ebx + 8] */
    eax = MEM32(eax + edi * 4 + (-0x4)); /* 0x10069A0C: mov eax, dword ptr [eax + edi*4 - 4] */
    MEM32(ebp + (-0x10)) = eax; /* 0x10069A10: mov dword ptr [ebp - 0x10], eax */
L_10069A13:
    PUSH32(esp, 8); /* 0x10069A13: push 8 */
    RECOMP_CALL(sub_1000EE11); /* 0x10069A15: call 0x1000ee11 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x10069A1A: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x10069A1C: pop ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x10069A1D: mov dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x10069A20: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x10069A24: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10069A3B; /* 0x10069A26: je 0x10069a3b */
L_10069A28:
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x10069A28: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x80u); /* 0x10069A2C: push 0x80 */
    RECOMP_CALL(sub_10011683); /* 0x10069A31: call 0x10011683 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10069A36: pop ecx */
    MEM32(esi) = eax; /* 0x10069A37: mov dword ptr [esi], eax */
    goto L_10069A3D; /* 0x10069A39: jmp 0x10069a3d */
L_10069A3B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x10069A3B: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_10069A3D:
    eax = MEM32(ebx + 0x8); /* 0x10069A3D: mov eax, dword ptr [ebx + 8] */
    MEM32(eax + edi * 4) = esi; /* 0x10069A40: mov dword ptr [eax + edi*4], esi */
    goto L_10069A8B; /* 0x10069A43: jmp 0x10069a8b */
L_10069A45:
    eax = MEM32(ebx + 0x8); /* 0x10069A45: mov eax, dword ptr [ebx + 8] */
    eax = MEM32(eax + 0xC); /* 0x10069A48: mov eax, dword ptr [eax + 0xc] */
    ecx = eax; /* 0x10069A4B: mov ecx, eax */
    MEM32(ebp + (-0x10)) = eax; /* 0x10069A4D: mov dword ptr [ebp - 0x10], eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 3; /* 0x10069A50: sub edi, 3 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10069A5E; /* 0x10069A53: je 0x10069a5e */
L_10069A55:
    MEM32(ebp + (-0x10)) = ecx; /* 0x10069A55: mov dword ptr [ebp - 0x10], ecx */
    ecx = MEM32(ecx + 0x4); /* 0x10069A58: mov ecx, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x10069A5B: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_10069A55; /* 0x10069A5C: jne 0x10069a55 */
L_10069A5E:
    PUSH32(esp, 8); /* 0x10069A5E: push 8 */
    RECOMP_CALL(sub_1000EE11); /* 0x10069A60: call 0x1000ee11 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x10069A65: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x10069A67: pop ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x10069A68: mov dword ptr [ebp - 0x14], esi */
    MEM32(ebp + (-0x4)) = 1; /* 0x10069A6B: mov dword ptr [ebp - 4], 1 */
    /* test esi, esi */ /* 0x10069A72: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10069A89; /* 0x10069A74: je 0x10069a89 */
L_10069A76:
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x10069A76: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x80u); /* 0x10069A7A: push 0x80 */
    RECOMP_CALL(sub_10011683); /* 0x10069A7F: call 0x10011683 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10069A84: pop ecx */
    MEM32(esi) = eax; /* 0x10069A85: mov dword ptr [esi], eax */
    goto L_10069A8B; /* 0x10069A87: jmp 0x10069a8b */
L_10069A89:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x10069A89: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_10069A8B:
    eax = MEM32(ebp + (-0x10)); /* 0x10069A8B: mov eax, dword ptr [ebp - 0x10] */
    /* test eax, eax */ /* 0x10069A8E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10069A95; /* 0x10069A90: je 0x10069a95 */
L_10069A92:
    MEM32(eax + 0x4) = esi; /* 0x10069A92: mov dword ptr [eax + 4], esi */
L_10069A95:
    _flag_a = (uint32_t)(MEM32(ebx + 0x4)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx + 0x4) = MEM32(ebx + 0x4) + 0x10u; /* 0x10069A95: add dword ptr [ebx + 4], 0x10 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_100149D7); /* 0x10069A99: call 0x100149d7 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10069A9E: ret  */
    RECOMP_REGS_OUT();
}

void sub_10069A9F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10069A9Fu);

L_10069A9F:
    PUSH32(esp, ebx); /* 0x10069A9F: push ebx */
    ebx = ecx; /* 0x10069AA0: mov ebx, ecx */
    /* cmp MEM32(ebx + 0x4), 0 */ /* 0x10069AA2: cmp dword ptr [ebx + 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_10069ACD; /* 0x10069AA6: jle 0x10069acd */
L_10069AA8:
    eax = MEM32(ebx + 0x8); /* 0x10069AA8: mov eax, dword ptr [ebx + 8] */
    PUSH32(esp, edi); /* 0x10069AAB: push edi */
    edi = MEM32(eax); /* 0x10069AAC: mov edi, dword ptr [eax] */
    /* test edi, edi */ /* 0x10069AAE: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10069ACC; /* 0x10069AB0: je 0x10069acc */
L_10069AB2:
    PUSH32(esp, esi); /* 0x10069AB2: push esi */
L_10069AB3:
    PUSH32(esp, MEM32(edi)); /* 0x10069AB3: push dword ptr [edi] */
    esi = MEM32(edi + 0x4); /* 0x10069AB5: mov esi, dword ptr [edi + 4] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10069AB8: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x10069ABD: push edi */
    RECOMP_CALL(sub_1000ECE0); /* 0x10069ABE: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    edi = esi; /* 0x10069AC3: mov edi, esi */
    ecx = POP32_VAL(esp); /* 0x10069AC5: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10069AC6: pop ecx */
    /* test esi, esi */ /* 0x10069AC7: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10069AB3; /* 0x10069AC9: jne 0x10069ab3 */
L_10069ACB:
    esi = POP32_VAL(esp); /* 0x10069ACB: pop esi */
L_10069ACC:
    edi = POP32_VAL(esp); /* 0x10069ACC: pop edi */
L_10069ACD:
    PUSH32(esp, MEM32(ebx + 0x8)); /* 0x10069ACD: push dword ptr [ebx + 8] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10069AD0: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10069AD5: pop ecx */
    ebx = POP32_VAL(esp); /* 0x10069AD6: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10069AD7: ret  */
    RECOMP_REGS_OUT();
}

void sub_10069AD8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10069AD8u);

L_10069AD8:
    PUSH32(esp, ebp); /* 0x10069AD8: push ebp */
    ebp = esp; /* 0x10069AD9: mov ebp, esp */
    eax = MEM32(ecx + 0x8); /* 0x10069ADB: mov eax, dword ptr [ecx + 8] */
    PUSH32(esp, esi); /* 0x10069ADE: push esi */
    esi = MEM32(ebp + 0x8); /* 0x10069ADF: mov esi, dword ptr [ebp + 8] */
    edx = esi; /* 0x10069AE2: mov edx, esi */
    if (4u) _cf = (((edx) >> 3) & 1u); /* 0x10069AE4: sar edx, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 4u);
    /* cmp edx, 4 */ /* 0x10069AE7: cmp edx, 4 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_10069AF1; /* 0x10069AEA: jge 0x10069af1 */
L_10069AEC:
    eax = MEM32(eax + edx * 4); /* 0x10069AEC: mov eax, dword ptr [eax + edx*4] */
    goto L_10069AFF; /* 0x10069AEF: jmp 0x10069aff */
L_10069AF1:
    eax = MEM32(eax + 0xC); /* 0x10069AF1: mov eax, dword ptr [eax + 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 3; /* 0x10069AF4: sub edx, 3 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10069AFF; /* 0x10069AF7: je 0x10069aff */
L_10069AF9:
    eax = MEM32(eax + 0x4); /* 0x10069AF9: mov eax, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x10069AFC: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_10069AF9; /* 0x10069AFD: jne 0x10069af9 */
L_10069AFF:
    eax = MEM32(eax); /* 0x10069AFF: mov eax, dword ptr [eax] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFu);
    esi = esi & 0xFu; /* 0x10069B01: and esi, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = eax + esi * 8; /* 0x10069B04: lea eax, [eax + esi*8] */
    esi = POP32_VAL(esp); /* 0x10069B07: pop esi */
    ebp = POP32_VAL(esp); /* 0x10069B08: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10069B09: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_10069B0C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10069B0Cu);

L_10069B0C:
    PUSH32(esp, ebp); /* 0x10069B0C: push ebp */
    ebp = esp; /* 0x10069B0D: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x10069B0F: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x10069B12: push ecx */
    PUSH32(esp, esi); /* 0x10069B13: push esi */
    esi = ecx; /* 0x10069B14: mov esi, ecx */
    RECOMP_CALL(sub_100785DA); /* 0x10069B16: call 0x100785da */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x10069B1B: push esi */
    RECOMP_CALL(sub_1000ECE0); /* 0x10069B1C: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10069B21: pop ecx */
    eax = esi; /* 0x10069B22: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x10069B24: pop esi */
    esp = ebp; /* 0x10069B25: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10069B27: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10069B28: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_10069B4A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10069B4Au);

L_10069B4A:
    PUSH32(esp, esi); /* 0x10069B4A: push esi */
    PUSH32(esp, edi); /* 0x10069B4B: push edi */
    edi = ecx; /* 0x10069B4C: mov edi, ecx */
    ecx = edi + 0x8C; /* 0x10069B4E: lea ecx, [edi + 0x8c] */
    RECOMP_CALL(sub_10069A9F); /* 0x10069B54: call 0x10069a9f */
    RECOMP_FLAGS_IN();
    esi = edi + 0x80; /* 0x10069B59: lea esi, [edi + 0x80] */
    ecx = esi; /* 0x10069B5F: mov ecx, esi */
    RECOMP_CALL(sub_1006A703); /* 0x10069B61: call 0x1006a703 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x10069B66: push dword ptr [esi + 8] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10069B69: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10069B6E: pop ecx */
    MEM32(edi) = 0x100674A4u; /* 0x10069B6F: mov dword ptr [edi], 0x100674a4 */
    edi = POP32_VAL(esp); /* 0x10069B75: pop edi */
    esi = POP32_VAL(esp); /* 0x10069B76: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10069B77: ret  */
    RECOMP_REGS_OUT();
}

void sub_10069B8E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10069B8Eu);

L_10069B8E:
    PUSH32(esp, 0x10u); /* 0x10069B8E: push 0x10 */
    eax = 0x100DADA4u; /* 0x10069B90: mov eax, 0x100dada4 */
    RECOMP_CALL(sub_100149A4); /* 0x10069B95: call 0x100149a4 */
    RECOMP_FLAGS_IN();
    eax = ecx; /* 0x10069B9A: mov eax, ecx */
    MEM32(ebp + (-0x10)) = eax; /* 0x10069B9C: mov dword ptr [ebp - 0x10], eax */
    ebx = eax + 0x50; /* 0x10069B9F: lea ebx, [eax + 0x50] */
    eax = ebx + 0x4; /* 0x10069BA2: lea eax, [ebx + 4] */
    MEM32(ebp + (-0x1C)) = ebx; /* 0x10069BA5: mov dword ptr [ebp - 0x1c], ebx */
    ecx = eax; /* 0x10069BA8: mov ecx, eax */
    MEM32(ebp + (-0x18)) = eax; /* 0x10069BAA: mov dword ptr [ebp - 0x18], eax */
    RECOMP_CALL(sub_1006F11B); /* 0x10069BAD: call 0x1006f11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x10069BB2: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ebx); /* 0x10069BB6: mov esi, dword ptr [ebx] */
    /* test esi, esi */ /* 0x10069BB8: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10069BC1; /* 0x10069BBA: je 0x10069bc1 */
L_10069BBC:
    esi = MEM32(esi + 0x4); /* 0x10069BBC: mov esi, dword ptr [esi + 4] */
    goto L_10069BC3; /* 0x10069BBF: jmp 0x10069bc3 */
L_10069BC1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x10069BC1: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_10069BC3:
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x10069BC3: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10069C47; /* 0x10069BC6: jmp 0x10069c47 */
L_10069BC8:
    edx = esi + 0x18; /* 0x10069BC8: lea edx, [esi + 0x18] */
    /* cmp MEM32(edx), 0 */ /* 0x10069BCB: cmp dword ptr [edx], 0 */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x14)) = edx; /* 0x10069BCE: mov dword ptr [ebp - 0x14], edx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_10069C3C; /* 0x10069BD1: jne 0x10069c3c */
L_10069BD3:
    edx = MEM32(esi + (-0x2C)); /* 0x10069BD3: mov edx, dword ptr [esi - 0x2c] */
    eax = MEM32(ebp + 0x8); /* 0x10069BD6: mov eax, dword ptr [ebp + 8] */
    /* cmp edx, eax */ /* 0x10069BD9: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10069C1D; /* 0x10069BDB: je 0x10069c1d */
L_10069BDD:
    /* test eax, eax */ /* 0x10069BDD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10069BF0; /* 0x10069BDF: jne 0x10069bf0 */
L_10069BE1:
    eax = MEM32(edx + 0x4); /* 0x10069BE1: mov eax, dword ptr [edx + 4] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x10069BE4: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x10069BE4: shl eax, 4 */
    if (4u) _cf = (((eax) >> 3) & 1u); /* 0x10069BE7: sar eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 4u);
    /* cmp eax, edi */ /* 0x10069BEA: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10069C3C; /* 0x10069BEC: je 0x10069c3c */
L_10069BEE:
    goto L_10069C0A; /* 0x10069BEE: jmp 0x10069c0a */
L_10069BF0:
    ecx = MEM32(eax + 0x4); /* 0x10069BF0: mov ecx, dword ptr [eax + 4] */
    if (4u) _cf = (((ecx) >> 28) & 1u); /* 0x10069BF3: shl ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 4u; /* 0x10069BF3: shl ecx, 4 */
    if (4u) _cf = (((ecx) >> 3) & 1u); /* 0x10069BF6: sar ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 4u);
    /* cmp ecx, edi */ /* 0x10069BF9: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10069C3C; /* 0x10069BFB: je 0x10069c3c */
L_10069BFD:
    eax = MEM32(edx + 0x4); /* 0x10069BFD: mov eax, dword ptr [edx + 4] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x10069C00: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x10069C00: shl eax, 4 */
    if (4u) _cf = (((eax) >> 3) & 1u); /* 0x10069C03: sar eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 4u);
    /* cmp eax, ecx */ /* 0x10069C06: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_10069C3C; /* 0x10069C08: jle 0x10069c3c */
L_10069C0A:
    ecx = MEM32(ebp + (-0x10)); /* 0x10069C0A: mov ecx, dword ptr [ebp - 0x10] */
    /* cmp MEM32(ecx + 0x3C), edi */ /* 0x10069C0D: cmp dword ptr [ecx + 0x3c], edi */
    _flag_a = (uint32_t)(MEM32(ecx + 0x3C)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10069C1D; /* 0x10069C10: je 0x10069c1d */
L_10069C12:
    PUSH32(esp, eax); /* 0x10069C12: push eax */
    PUSH32(esp, edx); /* 0x10069C13: push edx */
    RECOMP_CALL(sub_1006A559); /* 0x10069C14: call 0x1006a559 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x10069C19: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10069C3C; /* 0x10069C1B: je 0x10069c3c */
L_10069C1D:
    ecx = MEM32(ebp + (-0x14)); /* 0x10069C1D: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10069C20: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10069C22: inc eax */
    _flag_k = FK_INC;
    { uint32_t _tmp = MEM32(ecx); /* 0x10069C23: xchg dword ptr [ecx], eax */
      MEM32(ecx) = eax;
      eax = _tmp; }
    PUSH32(esp, 0xFFFFFC19u); /* 0x10069C25: push 0xfffffc19 */
    ecx = esi + (-0x5C); /* 0x10069C2A: lea ecx, [esi - 0x5c] */
    RECOMP_CALL(sub_1006A2EE); /* 0x10069C2D: call 0x1006a2ee */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x10069C32: push 0 */
    ecx = esi + (-0x5C); /* 0x10069C34: lea ecx, [esi - 0x5c] */
    RECOMP_CALL(sub_10069B8E); /* 0x10069C37: call 0x10069b8e */
    RECOMP_FLAGS_IN();
L_10069C3C:
    /* cmp esi, MEM32(ebx) */ /* 0x10069C3C: cmp esi, dword ptr [ebx] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10069C45; /* 0x10069C3E: je 0x10069c45 */
L_10069C40:
    esi = MEM32(esi + 0x4); /* 0x10069C40: mov esi, dword ptr [esi + 4] */
    goto L_10069C47; /* 0x10069C43: jmp 0x10069c47 */
L_10069C45:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x10069C45: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_10069C47:
    /* test esi, esi */ /* 0x10069C47: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10069BC8; /* 0x10069C49: jne 0x10069bc8 */
L_10069C4F:
    eax = MEM32(ebp + (-0x18)); /* 0x10069C4F: mov eax, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + edi; edi = _old; MEM32(eax) = _sum; } /* 0x10069C52: lock xadd dword ptr [eax], edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x10069C56: dec edi */
    _flag_k = FK_DEC;
    RECOMP_CALL(sub_100149D7); /* 0x10069C57: call 0x100149d7 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10069C5C: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_10069C5F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10069C5Fu);

L_10069C5F:
    PUSH32(esp, esi); /* 0x10069C5F: push esi */
    esi = ecx; /* 0x10069C60: mov esi, ecx */
    RECOMP_CALL(sub_10033D38); /* 0x10069C62: call 0x10033d38 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x1C); /* 0x10069C67: mov ecx, dword ptr [esi + 0x1c] */
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x10069C6A: push dword ptr [esi + 8] */
    eax = MEM32(ecx); /* 0x10069C6D: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x10069C6F: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x10069C72: push eax */
    PUSH32(esp, ecx); /* 0x10069C73: push ecx */
    PUSH32(esp, 2); /* 0x10069C74: push 2 */
    RECOMP_CALL(sub_10023B01); /* 0x10069C76: call 0x10023b01 */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x10069C7B: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10069C7C: ret  */
    RECOMP_REGS_OUT();
}

void sub_10069C7D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10069C7Du);

L_10069C7D:
    PUSH32(esp, ebp); /* 0x10069C7D: push ebp */
    ebp = esp; /* 0x10069C7E: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x10069C80: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2Cu; /* 0x10069C83: sub esp, 0x2c */
    _flag_k = FK_CMP;
    edx = MEM32(ebp + 0xC); /* 0x10069C86: mov edx, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x10069C89: push ebx */
    PUSH32(esp, esi); /* 0x10069C8A: push esi */
    esi = ecx; /* 0x10069C8B: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10069C8D: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10069C8F: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0xC) = ecx; /* 0x10069C91: mov dword ptr [esp + 0xc], ecx */
    PUSH32(esp, edi); /* 0x10069C95: push edi */
    edi = MEM32(esi + 0x18); /* 0x10069C96: mov edi, dword ptr [esi + 0x18] */
    MEM32(esp + 0x18) = edi; /* 0x10069C99: mov dword ptr [esp + 0x18], edi */
    /* test edx, edx */ /* 0x10069C9D: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10069CEB; /* 0x10069C9F: je 0x10069ceb */
L_10069CA1:
    /* test MEM32(edx), 0x0FFFFFFFu */ /* 0x10069CA1: test dword ptr [edx], 0xfffffff */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(0x0FFFFFFFu);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10069CEB; /* 0x10069CA7: je 0x10069ceb */
L_10069CA9:
    eax = edi + 0xC; /* 0x10069CA9: lea eax, [edi + 0xc] */
    ecx = edx; /* 0x10069CAC: mov ecx, edx */
    PUSH32(esp, eax); /* 0x10069CAE: push eax */
    RECOMP_CALL(sub_10069962); /* 0x10069CAF: call 0x10069962 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x10069CB4: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10069CE0; /* 0x10069CB6: jne 0x10069ce0 */
L_10069CB8:
    ecx = MEM32(edi + 0x100); /* 0x10069CB8: mov ecx, dword ptr [edi + 0x100] */
    edx = esp + 0x18; /* 0x10069CBE: lea edx, [esp + 0x18] */
    PUSH32(esp, edx); /* 0x10069CC2: push edx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10069CC3: push dword ptr [ebp + 0xc] */
    edx = esp + 0x38; /* 0x10069CC6: lea edx, [esp + 0x38] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10069CCA: push dword ptr [ebp + 8] */
    eax = MEM32(ecx); /* 0x10069CCD: mov eax, dword ptr [ecx] */
    PUSH32(esp, edx); /* 0x10069CCF: push edx */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x10069CD0: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
    edi = MEM32(esp + 0x18); /* 0x10069CD3: mov edi, dword ptr [esp + 0x18] */
    ebx = MEM32(eax); /* 0x10069CD7: mov ebx, dword ptr [eax] */
    eax = MEM32(eax + 0x4); /* 0x10069CD9: mov eax, dword ptr [eax + 4] */
    MEM32(esp + 0x10) = eax; /* 0x10069CDC: mov dword ptr [esp + 0x10], eax */
L_10069CE0:
    eax = MEM32(edi); /* 0x10069CE0: mov eax, dword ptr [edi] */
    ecx = edi; /* 0x10069CE2: mov ecx, edi */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x10069CE4: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esp + 0x10); /* 0x10069CE7: mov ecx, dword ptr [esp + 0x10] */
L_10069CEB:
    /* cmp MEM32(esi + 0x20), 0 */ /* 0x10069CEB: cmp dword ptr [esi + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esp + 0x20) = ebx; /* 0x10069CEF: mov dword ptr [esp + 0x20], ebx */
    MEM32(esp + 0x24) = ecx; /* 0x10069CF3: mov dword ptr [esp + 0x24], ecx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_10069D04; /* 0x10069CF7: jne 0x10069d04 */
L_10069CF9:
    ecx = esi; /* 0x10069CF9: mov ecx, esi */
    RECOMP_CALL(sub_1006A175); /* 0x10069CFB: call 0x1006a175 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esp + 0x10); /* 0x10069D00: mov ecx, dword ptr [esp + 0x10] */
L_10069D04:
    edx = MEM32(esi + 0x20); /* 0x10069D04: mov edx, dword ptr [esi + 0x20] */
    MEM32(esp + 0x2C) = ecx; /* 0x10069D07: mov dword ptr [esp + 0x2c], ecx */
    ecx = MEM32(esp + 0x10); /* 0x10069D0B: mov ecx, dword ptr [esp + 0x10] */
    MEM32(esp + 0x28) = ebx; /* 0x10069D0F: mov dword ptr [esp + 0x28], ebx */
    edi = MEM32(edx + 0x4); /* 0x10069D13: mov edi, dword ptr [edx + 4] */
    eax = MEM32(edx + 0x8); /* 0x10069D16: mov eax, dword ptr [edx + 8] */
    MEM32(esp + 0x14) = eax; /* 0x10069D19: mov dword ptr [esp + 0x14], eax */
    eax = MEM32(edx); /* 0x10069D1D: mov eax, dword ptr [edx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x14));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esp + 0x14); /* 0x10069D1F: add eax, dword ptr [esp + 0x14] */
    _flag_k = FK_ADD;
    MEM32(esp + 0x1C) = edi; /* 0x10069D23: mov dword ptr [esp + 0x1c], edi */
    /* cmp edi, eax */ /* 0x10069D27: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_10069D65; /* 0x10069D29: jge 0x10069d65 */
L_10069D2B:
    /* test ebx, ebx */ /* 0x10069D2B: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10069D4D; /* 0x10069D2D: je 0x10069d4d */
L_10069D2F:
    _flag_a = (uint32_t)(MEM32(esp + 0x14)); _flag_b = (uint32_t)(edi);
    MEM32(esp + 0x14) = MEM32(esp + 0x14) & edi; /* 0x10069D2F: and dword ptr [esp + 0x14], edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(edx + 0x10); /* 0x10069D33: mov eax, dword ptr [edx + 0x10] */
    ecx = MEM32(esp + 0x14); /* 0x10069D36: mov ecx, dword ptr [esp + 0x14] */
    _flag_a = (uint32_t)((MEM32(ebp + 0x8) | 1)); _flag_b = (uint32_t)((MEM32(ebp + 0x8) | 1));
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) | 1; /* 0x10069D3A: or dword ptr [ebp + 8], 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + ecx * 8) = ebx; /* 0x10069D3E: mov dword ptr [eax + ecx*8], ebx */
    ebx = MEM32(esp + 0x14); /* 0x10069D41: mov ebx, dword ptr [esp + 0x14] */
    ecx = MEM32(esp + 0x10); /* 0x10069D45: mov ecx, dword ptr [esp + 0x10] */
    MEM32(eax + ebx * 8 + 0x4) = ecx; /* 0x10069D49: mov dword ptr [eax + ebx*8 + 4], ecx */
L_10069D4D:
    eax = MEM32(edx + 0xC); /* 0x10069D4D: mov eax, dword ptr [edx + 0xc] */
    ecx = edi; /* 0x10069D50: mov ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx + 0x8));
    ecx = ecx & MEM32(edx + 0x8); /* 0x10069D52: and ecx, dword ptr [edx + 8] */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(ebp + 0x8); /* 0x10069D55: mov edi, dword ptr [ebp + 8] */
    MEM32(eax + ecx * 4) = edi; /* 0x10069D58: mov dword ptr [eax + ecx*4], edi */
    eax = MEM32(esp + 0x1C); /* 0x10069D5B: mov eax, dword ptr [esp + 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10069D5F: inc eax */
    _flag_k = FK_INC;
    MEM32(edx + 0x4) = eax; /* 0x10069D60: mov dword ptr [edx + 4], eax */
    goto L_10069D78; /* 0x10069D63: jmp 0x10069d78 */
L_10069D65:
    PUSH32(esp, ecx); /* 0x10069D65: push ecx */
    PUSH32(esp, ecx); /* 0x10069D66: push ecx */
    eax = esp; /* 0x10069D67: mov eax, esp */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10069D69: push dword ptr [ebp + 8] */
    MEM32(eax + 0x4) = ecx; /* 0x10069D6C: mov dword ptr [eax + 4], ecx */
    ecx = edx; /* 0x10069D6F: mov ecx, edx */
    MEM32(eax) = ebx; /* 0x10069D71: mov dword ptr [eax], ebx */
    RECOMP_CALL(sub_1006A94B); /* 0x10069D73: call 0x1006a94b */
    RECOMP_FLAGS_IN();
L_10069D78:
    /* cmp MEM8(esi + 0x4C), 0 */ /* 0x10069D78: cmp byte ptr [esi + 0x4c], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x4C)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = MEM32(esi + 0x9C); /* 0x10069D7C: mov eax, dword ptr [esi + 0x9c] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10069D89; /* 0x10069D82: je 0x10069d89 */
L_10069D84:
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x8) = MEM32(eax + 0x8) + 1; /* 0x10069D84: inc dword ptr [eax + 8] */
    _flag_k = FK_INC;
    goto L_10069D8C; /* 0x10069D87: jmp 0x10069d8c */
L_10069D89:
    _flag_a = (uint32_t)(MEM32(eax + 0x68)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x68) = MEM32(eax + 0x68) + 1; /* 0x10069D89: inc dword ptr [eax + 0x68] */
    _flag_k = FK_INC;
L_10069D8C:
    eax = MEM32(esi + 0x1C); /* 0x10069D8C: mov eax, dword ptr [esi + 0x1c] */
    ecx = MEM32(eax + 0x1B8); /* 0x10069D8F: mov ecx, dword ptr [eax + 0x1b8] */
    eax = MEM32(eax + 0x1B4); /* 0x10069D95: mov eax, dword ptr [eax + 0x1b4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x10069D9B: sub eax, ecx */
    _flag_k = FK_CMP;
    /* test eax, eax */ /* 0x10069D9D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10069DBF; /* 0x10069D9F: jle 0x10069dbf */
L_10069DA1:
    eax = MEM32(esp + 0x18); /* 0x10069DA1: mov eax, dword ptr [esp + 0x18] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x10069DA5: sub esp, 0x10 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x10069DA8: add eax, 0xc */
    _flag_k = FK_ADD;
    ecx = esp; /* 0x10069DAB: mov ecx, esp */
    PUSH32(esp, eax); /* 0x10069DAD: push eax */
    RECOMP_CALL(sub_1002762F); /* 0x10069DAE: call 0x1002762f */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x1C); /* 0x10069DB3: mov ecx, dword ptr [esi + 0x1c] */
    PUSH32(esp, MEM32(esp + 0x28)); /* 0x10069DB6: push dword ptr [esp + 0x28] */
    eax = MEM32(ecx); /* 0x10069DBA: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x38)); /* 0x10069DBC: call dword ptr [eax + 0x38] */
    RECOMP_FLAGS_IN();
L_10069DBF:
    edi = POP32_VAL(esp); /* 0x10069DBF: pop edi */
    esi = POP32_VAL(esp); /* 0x10069DC0: pop esi */
    ebx = POP32_VAL(esp); /* 0x10069DC1: pop ebx */
    esp = ebp; /* 0x10069DC2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10069DC4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x10069DC5: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_10069DC8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10069DC8u);

L_10069DC8:
    PUSH32(esp, ebp); /* 0x10069DC8: push ebp */
    ebp = esp; /* 0x10069DC9: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x10069DCB: push ebx */
    PUSH32(esp, esi); /* 0x10069DCC: push esi */
    esi = ecx; /* 0x10069DCD: mov esi, ecx */
    PUSH32(esp, edi); /* 0x10069DCF: push edi */
    /* cmp MEM32(esi + 0x20), 0 */ /* 0x10069DD0: cmp dword ptr [esi + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10069DDB; /* 0x10069DD4: jne 0x10069ddb */
L_10069DD6:
    RECOMP_CALL(sub_1006A175); /* 0x10069DD6: call 0x1006a175 */
    RECOMP_FLAGS_IN();
L_10069DDB:
    edx = MEM32(esi + 0x20); /* 0x10069DDB: mov edx, dword ptr [esi + 0x20] */
    ebx = MEM32(edx + 0x4); /* 0x10069DDE: mov ebx, dword ptr [edx + 4] */
    eax = MEM32(edx); /* 0x10069DE1: mov eax, dword ptr [edx] */
    edi = MEM32(edx + 0x8); /* 0x10069DE3: mov edi, dword ptr [edx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x10069DE6: add eax, edi */
    _flag_k = FK_ADD;
    /* cmp ebx, eax */ /* 0x10069DE8: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_10069DFF; /* 0x10069DEA: jge 0x10069dff */
L_10069DEC:
    ecx = MEM32(edx + 0xC); /* 0x10069DEC: mov ecx, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    edi = edi & ebx; /* 0x10069DEF: and edi, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0x8); /* 0x10069DF1: mov eax, dword ptr [ebp + 8] */
    MEM32(ecx + edi * 4) = eax; /* 0x10069DF4: mov dword ptr [ecx + edi*4], eax */
    eax = ebx + 0x1; /* 0x10069DF7: lea eax, [ebx + 1] */
    MEM32(edx + 0x4) = eax; /* 0x10069DFA: mov dword ptr [edx + 4], eax */
    goto L_10069E14; /* 0x10069DFD: jmp 0x10069e14 */
L_10069DFF:
    PUSH32(esp, ecx); /* 0x10069DFF: push ecx */
    PUSH32(esp, ecx); /* 0x10069E00: push ecx */
    eax = esp; /* 0x10069E01: mov eax, esp */
    ecx = edx; /* 0x10069E03: mov ecx, edx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10069E05: push dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x10069E08: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) & 0; /* 0x10069E0B: and dword ptr [eax + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1006A94B); /* 0x10069E0F: call 0x1006a94b */
    RECOMP_FLAGS_IN();
L_10069E14:
    /* cmp MEM8(esi + 0x4C), 0 */ /* 0x10069E14: cmp byte ptr [esi + 0x4c], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x4C)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = MEM32(esi + 0x9C); /* 0x10069E18: mov eax, dword ptr [esi + 0x9c] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10069E25; /* 0x10069E1E: je 0x10069e25 */
L_10069E20:
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x8) = MEM32(eax + 0x8) + 1; /* 0x10069E20: inc dword ptr [eax + 8] */
    _flag_k = FK_INC;
    goto L_10069E28; /* 0x10069E23: jmp 0x10069e28 */
L_10069E25:
    _flag_a = (uint32_t)(MEM32(eax + 0x68)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x68) = MEM32(eax + 0x68) + 1; /* 0x10069E25: inc dword ptr [eax + 0x68] */
    _flag_k = FK_INC;
L_10069E28:
    eax = MEM32(esi + 0x1C); /* 0x10069E28: mov eax, dword ptr [esi + 0x1c] */
    ecx = MEM32(eax + 0x1B8); /* 0x10069E2B: mov ecx, dword ptr [eax + 0x1b8] */
    eax = MEM32(eax + 0x1B4); /* 0x10069E31: mov eax, dword ptr [eax + 0x1b4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x10069E37: sub eax, ecx */
    _flag_k = FK_CMP;
    /* test eax, eax */ /* 0x10069E39: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10069E57; /* 0x10069E3B: jle 0x10069e57 */
L_10069E3D:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x10069E3D: sub esp, 0x10 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10069E40: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esp; /* 0x10069E42: mov eax, esp */
    MEM32(eax) = ecx; /* 0x10069E44: mov dword ptr [eax], ecx */
    MEM32(eax + 0x8) = ecx; /* 0x10069E46: mov dword ptr [eax + 8], ecx */
    MEM32(eax + 0xC) = ecx; /* 0x10069E49: mov dword ptr [eax + 0xc], ecx */
    ecx = MEM32(esi + 0x1C); /* 0x10069E4C: mov ecx, dword ptr [esi + 0x1c] */
    PUSH32(esp, MEM32(esi + 0x18)); /* 0x10069E4F: push dword ptr [esi + 0x18] */
    eax = MEM32(ecx); /* 0x10069E52: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x38)); /* 0x10069E54: call dword ptr [eax + 0x38] */
    RECOMP_FLAGS_IN();
L_10069E57:
    edi = POP32_VAL(esp); /* 0x10069E57: pop edi */
    esi = POP32_VAL(esp); /* 0x10069E58: pop esi */
    ebx = POP32_VAL(esp); /* 0x10069E59: pop ebx */
    ebp = POP32_VAL(esp); /* 0x10069E5A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10069E5B: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_10069E5E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10069E5Eu);

L_10069E5E:
    PUSH32(esp, ebp); /* 0x10069E5E: push ebp */
    ebp = esp; /* 0x10069E5F: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x10069E61: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x24u; /* 0x10069E64: sub esp, 0x24 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x10069E67: push ebx */
    PUSH32(esp, esi); /* 0x10069E68: push esi */
    esi = ecx; /* 0x10069E69: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10069E6B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0xC); /* 0x10069E6D: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10069E70: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x8) = eax; /* 0x10069E72: mov dword ptr [esp + 8], eax */
    PUSH32(esp, edi); /* 0x10069E76: push edi */
    edi = MEM32(esi + 0x18); /* 0x10069E77: mov edi, dword ptr [esi + 0x18] */
    MEM32(esp + 0x10) = edi; /* 0x10069E7A: mov dword ptr [esp + 0x10], edi */
    /* test ecx, ecx */ /* 0x10069E7E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10069EC6; /* 0x10069E80: je 0x10069ec6 */
L_10069E82:
    /* test MEM32(ecx), 0x0FFFFFFFu */ /* 0x10069E82: test dword ptr [ecx], 0xfffffff */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0x0FFFFFFFu);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10069EC6; /* 0x10069E88: je 0x10069ec6 */
L_10069E8A:
    eax = edi + 0xC; /* 0x10069E8A: lea eax, [edi + 0xc] */
    PUSH32(esp, eax); /* 0x10069E8D: push eax */
    RECOMP_CALL(sub_10069962); /* 0x10069E8E: call 0x10069962 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x10069E93: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10069EBF; /* 0x10069E95: jne 0x10069ebf */
L_10069E97:
    ecx = MEM32(edi + 0x100); /* 0x10069E97: mov ecx, dword ptr [edi + 0x100] */
    edx = esp + 0x10; /* 0x10069E9D: lea edx, [esp + 0x10] */
    PUSH32(esp, edx); /* 0x10069EA1: push edx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10069EA2: push dword ptr [ebp + 0xc] */
    edx = esp + 0x30; /* 0x10069EA5: lea edx, [esp + 0x30] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10069EA9: push dword ptr [ebp + 8] */
    eax = MEM32(ecx); /* 0x10069EAC: mov eax, dword ptr [ecx] */
    PUSH32(esp, edx); /* 0x10069EAE: push edx */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x10069EAF: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
    edi = MEM32(esp + 0x10); /* 0x10069EB2: mov edi, dword ptr [esp + 0x10] */
    ebx = MEM32(eax); /* 0x10069EB6: mov ebx, dword ptr [eax] */
    eax = MEM32(eax + 0x4); /* 0x10069EB8: mov eax, dword ptr [eax + 4] */
    MEM32(esp + 0xC) = eax; /* 0x10069EBB: mov dword ptr [esp + 0xc], eax */
L_10069EBF:
    eax = MEM32(edi); /* 0x10069EBF: mov eax, dword ptr [edi] */
    ecx = edi; /* 0x10069EC1: mov ecx, edi */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x10069EC3: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_10069EC6:
    /* cmp MEM32(esi + 0x20), 0 */ /* 0x10069EC6: cmp dword ptr [esi + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = MEM32(esp + 0xC); /* 0x10069ECA: mov edi, dword ptr [esp + 0xc] */
    MEM32(esp + 0x18) = ebx; /* 0x10069ECE: mov dword ptr [esp + 0x18], ebx */
    MEM32(esp + 0x1C) = edi; /* 0x10069ED2: mov dword ptr [esp + 0x1c], edi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_10069EDF; /* 0x10069ED6: jne 0x10069edf */
L_10069ED8:
    ecx = esi; /* 0x10069ED8: mov ecx, esi */
    RECOMP_CALL(sub_1006A0F6); /* 0x10069EDA: call 0x1006a0f6 */
    RECOMP_FLAGS_IN();
L_10069EDF:
    edx = MEM32(esi + 0x20); /* 0x10069EDF: mov edx, dword ptr [esi + 0x20] */
    MEM32(esp + 0x20) = ebx; /* 0x10069EE2: mov dword ptr [esp + 0x20], ebx */
    MEM32(esp + 0x24) = edi; /* 0x10069EE6: mov dword ptr [esp + 0x24], edi */
    ecx = MEM32(edx + 0x50); /* 0x10069EEA: mov ecx, dword ptr [edx + 0x50] */
    eax = MEM32(edx + 0x54); /* 0x10069EED: mov eax, dword ptr [edx + 0x54] */
    MEM32(esp + 0xC) = eax; /* 0x10069EF0: mov dword ptr [esp + 0xc], eax */
    eax = MEM32(edx + 0x4C); /* 0x10069EF4: mov eax, dword ptr [edx + 0x4c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esp + 0xC); /* 0x10069EF7: add eax, dword ptr [esp + 0xc] */
    _flag_k = FK_ADD;
    MEM32(esp + 0x14) = ecx; /* 0x10069EFB: mov dword ptr [esp + 0x14], ecx */
    /* cmp ecx, eax */ /* 0x10069EFF: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_10069F3C; /* 0x10069F01: jge 0x10069f3c */
L_10069F03:
    /* test ebx, ebx */ /* 0x10069F03: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10069F1D; /* 0x10069F05: je 0x10069f1d */
L_10069F07:
    _flag_a = (uint32_t)(MEM32(esp + 0xC)); _flag_b = (uint32_t)(ecx);
    MEM32(esp + 0xC) = MEM32(esp + 0xC) & ecx; /* 0x10069F07: and dword ptr [esp + 0xc], ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(edx + 0x6C); /* 0x10069F0B: mov eax, dword ptr [edx + 0x6c] */
    ecx = MEM32(esp + 0xC); /* 0x10069F0E: mov ecx, dword ptr [esp + 0xc] */
    _flag_a = (uint32_t)((MEM32(ebp + 0x8) | 1)); _flag_b = (uint32_t)((MEM32(ebp + 0x8) | 1));
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) | 1; /* 0x10069F12: or dword ptr [ebp + 8], 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + ecx * 8) = ebx; /* 0x10069F16: mov dword ptr [eax + ecx*8], ebx */
    MEM32(eax + ecx * 8 + 0x4) = edi; /* 0x10069F19: mov dword ptr [eax + ecx*8 + 4], edi */
L_10069F1D:
    ecx = MEM32(edx + 0x54); /* 0x10069F1D: mov ecx, dword ptr [edx + 0x54] */
    ebx = MEM32(esp + 0x14); /* 0x10069F20: mov ebx, dword ptr [esp + 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    ecx = ecx & ebx; /* 0x10069F24: and ecx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(edx + 0x68); /* 0x10069F26: mov eax, dword ptr [edx + 0x68] */
    edi = MEM32(ebp + 0x8); /* 0x10069F29: mov edi, dword ptr [ebp + 8] */
    MEM32(eax + ecx * 4) = edi; /* 0x10069F2C: mov dword ptr [eax + ecx*4], edi */
    eax = ebx + 0x1; /* 0x10069F2F: lea eax, [ebx + 1] */
    edi = MEM32(edx + 0x58); /* 0x10069F32: mov edi, dword ptr [edx + 0x58] */
    MEM32(edx + 0x50) = eax; /* 0x10069F35: mov dword ptr [edx + 0x50], eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ebx; /* 0x10069F38: add edi, ebx */
    _flag_k = FK_ADD;
    goto L_10069F52; /* 0x10069F3A: jmp 0x10069f52 */
L_10069F3C:
    PUSH32(esp, ecx); /* 0x10069F3C: push ecx */
    PUSH32(esp, ecx); /* 0x10069F3D: push ecx */
    eax = esp; /* 0x10069F3E: mov eax, esp */
    ecx = edx + 0x4C; /* 0x10069F40: lea ecx, [edx + 0x4c] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10069F43: push dword ptr [ebp + 8] */
    MEM32(eax) = ebx; /* 0x10069F46: mov dword ptr [eax], ebx */
    MEM32(eax + 0x4) = edi; /* 0x10069F48: mov dword ptr [eax + 4], edi */
    RECOMP_CALL(sub_1006AB18); /* 0x10069F4B: call 0x1006ab18 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x10069F50: mov edi, eax */
L_10069F52:
    /* cmp MEM8(esi + 0x4C), 0 */ /* 0x10069F52: cmp byte ptr [esi + 0x4c], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x4C)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = MEM32(esi + 0x9C); /* 0x10069F56: mov eax, dword ptr [esi + 0x9c] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10069F63; /* 0x10069F5C: je 0x10069f63 */
L_10069F5E:
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x8) = MEM32(eax + 0x8) + 1; /* 0x10069F5E: inc dword ptr [eax + 8] */
    _flag_k = FK_INC;
    goto L_10069F66; /* 0x10069F61: jmp 0x10069f66 */
L_10069F63:
    _flag_a = (uint32_t)(MEM32(eax + 0x68)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x68) = MEM32(eax + 0x68) + 1; /* 0x10069F63: inc dword ptr [eax + 0x68] */
    _flag_k = FK_INC;
L_10069F66:
    eax = MEM32(esi + 0x1C); /* 0x10069F66: mov eax, dword ptr [esi + 0x1c] */
    ecx = MEM32(eax + 0x1B8); /* 0x10069F69: mov ecx, dword ptr [eax + 0x1b8] */
    eax = MEM32(eax + 0x1B4); /* 0x10069F6F: mov eax, dword ptr [eax + 0x1b4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x10069F75: sub eax, ecx */
    _flag_k = FK_CMP;
    /* test eax, eax */ /* 0x10069F77: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10069F99; /* 0x10069F79: jle 0x10069f99 */
L_10069F7B:
    eax = MEM32(esp + 0x10); /* 0x10069F7B: mov eax, dword ptr [esp + 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x10069F7F: sub esp, 0x10 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x10069F82: add eax, 0xc */
    _flag_k = FK_ADD;
    ecx = esp; /* 0x10069F85: mov ecx, esp */
    PUSH32(esp, eax); /* 0x10069F87: push eax */
    RECOMP_CALL(sub_1002762F); /* 0x10069F88: call 0x1002762f */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x1C); /* 0x10069F8D: mov ecx, dword ptr [esi + 0x1c] */
    PUSH32(esp, MEM32(esp + 0x20)); /* 0x10069F90: push dword ptr [esp + 0x20] */
    edx = MEM32(ecx); /* 0x10069F94: mov edx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(edx + 0x38)); /* 0x10069F96: call dword ptr [edx + 0x38] */
    RECOMP_FLAGS_IN();
L_10069F99:
    eax = edi; /* 0x10069F99: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x10069F9B: pop edi */
    esi = POP32_VAL(esp); /* 0x10069F9C: pop esi */
    ebx = POP32_VAL(esp); /* 0x10069F9D: pop ebx */
    esp = ebp; /* 0x10069F9E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10069FA0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x10069FA1: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_10069FA4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10069FA4u);

L_10069FA4:
    PUSH32(esp, ebp); /* 0x10069FA4: push ebp */
    ebp = esp; /* 0x10069FA5: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x10069FA7: push ebx */
    PUSH32(esp, esi); /* 0x10069FA8: push esi */
    esi = ecx; /* 0x10069FA9: mov esi, ecx */
    PUSH32(esp, edi); /* 0x10069FAB: push edi */
    /* cmp MEM32(esi + 0x20), 0 */ /* 0x10069FAC: cmp dword ptr [esi + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10069FB7; /* 0x10069FB0: jne 0x10069fb7 */
L_10069FB2:
    RECOMP_CALL(sub_1006A0F6); /* 0x10069FB2: call 0x1006a0f6 */
    RECOMP_FLAGS_IN();
L_10069FB7:
    edx = MEM32(esi + 0x20); /* 0x10069FB7: mov edx, dword ptr [esi + 0x20] */
    ebx = MEM32(edx + 0x50); /* 0x10069FBA: mov ebx, dword ptr [edx + 0x50] */
    eax = MEM32(edx + 0x4C); /* 0x10069FBD: mov eax, dword ptr [edx + 0x4c] */
    edi = MEM32(edx + 0x54); /* 0x10069FC0: mov edi, dword ptr [edx + 0x54] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x10069FC3: add eax, edi */
    _flag_k = FK_ADD;
    /* cmp ebx, eax */ /* 0x10069FC5: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_10069FE1; /* 0x10069FC7: jge 0x10069fe1 */
L_10069FC9:
    ecx = MEM32(edx + 0x68); /* 0x10069FC9: mov ecx, dword ptr [edx + 0x68] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    edi = edi & ebx; /* 0x10069FCC: and edi, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0x8); /* 0x10069FCE: mov eax, dword ptr [ebp + 8] */
    MEM32(ecx + edi * 4) = eax; /* 0x10069FD1: mov dword ptr [ecx + edi*4], eax */
    eax = ebx + 0x1; /* 0x10069FD4: lea eax, [ebx + 1] */
    edi = MEM32(edx + 0x58); /* 0x10069FD7: mov edi, dword ptr [edx + 0x58] */
    MEM32(edx + 0x50) = eax; /* 0x10069FDA: mov dword ptr [edx + 0x50], eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ebx; /* 0x10069FDD: add edi, ebx */
    _flag_k = FK_ADD;
    goto L_10069FF9; /* 0x10069FDF: jmp 0x10069ff9 */
L_10069FE1:
    PUSH32(esp, ecx); /* 0x10069FE1: push ecx */
    PUSH32(esp, ecx); /* 0x10069FE2: push ecx */
    eax = esp; /* 0x10069FE3: mov eax, esp */
    ecx = edx + 0x4C; /* 0x10069FE5: lea ecx, [edx + 0x4c] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10069FE8: push dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x10069FEB: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) & 0; /* 0x10069FEE: and dword ptr [eax + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1006AB18); /* 0x10069FF2: call 0x1006ab18 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x10069FF7: mov edi, eax */
L_10069FF9:
    /* cmp MEM8(esi + 0x4C), 0 */ /* 0x10069FF9: cmp byte ptr [esi + 0x4c], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x4C)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = MEM32(esi + 0x9C); /* 0x10069FFD: mov eax, dword ptr [esi + 0x9c] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006A00A; /* 0x1006A003: je 0x1006a00a */
L_1006A005:
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x8) = MEM32(eax + 0x8) + 1; /* 0x1006A005: inc dword ptr [eax + 8] */
    _flag_k = FK_INC;
    goto L_1006A00D; /* 0x1006A008: jmp 0x1006a00d */
L_1006A00A:
    _flag_a = (uint32_t)(MEM32(eax + 0x68)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x68) = MEM32(eax + 0x68) + 1; /* 0x1006A00A: inc dword ptr [eax + 0x68] */
    _flag_k = FK_INC;
L_1006A00D:
    eax = MEM32(esi + 0x1C); /* 0x1006A00D: mov eax, dword ptr [esi + 0x1c] */
    ecx = MEM32(eax + 0x1B8); /* 0x1006A010: mov ecx, dword ptr [eax + 0x1b8] */
    eax = MEM32(eax + 0x1B4); /* 0x1006A016: mov eax, dword ptr [eax + 0x1b4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1006A01C: sub eax, ecx */
    _flag_k = FK_CMP;
    /* test eax, eax */ /* 0x1006A01E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1006A03C; /* 0x1006A020: jle 0x1006a03c */
L_1006A022:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1006A022: sub esp, 0x10 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1006A025: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esp; /* 0x1006A027: mov ecx, esp */
    MEM32(ecx) = eax; /* 0x1006A029: mov dword ptr [ecx], eax */
    MEM32(ecx + 0x8) = eax; /* 0x1006A02B: mov dword ptr [ecx + 8], eax */
    MEM32(ecx + 0xC) = eax; /* 0x1006A02E: mov dword ptr [ecx + 0xc], eax */
    ecx = MEM32(esi + 0x1C); /* 0x1006A031: mov ecx, dword ptr [esi + 0x1c] */
    PUSH32(esp, MEM32(esi + 0x18)); /* 0x1006A034: push dword ptr [esi + 0x18] */
    edx = MEM32(ecx); /* 0x1006A037: mov edx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(edx + 0x38)); /* 0x1006A039: call dword ptr [edx + 0x38] */
    RECOMP_FLAGS_IN();
L_1006A03C:
    eax = edi; /* 0x1006A03C: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1006A03E: pop edi */
    esi = POP32_VAL(esp); /* 0x1006A03F: pop esi */
    ebx = POP32_VAL(esp); /* 0x1006A040: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1006A041: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1006A042: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1006A045(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006A045u);

L_1006A045:
    edx = MEM32(ecx + 0x20); /* 0x1006A045: mov edx, dword ptr [ecx + 0x20] */
    PUSH32(esp, ebx); /* 0x1006A048: push ebx */
    PUSH32(esp, esi); /* 0x1006A049: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1006A04A: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(edx + 0x4); /* 0x1006A04C: mov esi, dword ptr [edx + 4] */
    ecx = MEM32(edx + 0x8); /* 0x1006A04F: mov ecx, dword ptr [edx + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1006A052: dec esi */
    _flag_k = FK_DEC;
    eax = MEM32(edx + 0xC); /* 0x1006A053: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    ecx = ecx & esi; /* 0x1006A056: and ecx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0x4) = esi; /* 0x1006A058: mov dword ptr [edx + 4], esi */
    eax = eax + ecx * 4; /* 0x1006A05B: lea eax, [eax + ecx*4] */
    { uint32_t _tmp = MEM32(eax); /* 0x1006A05E: xchg dword ptr [eax], ebx */
      MEM32(eax) = ebx;
      ebx = _tmp; }
    /* test ebx, ebx */ /* 0x1006A060: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006A06A; /* 0x1006A062: jne 0x1006a06a */
L_1006A064:
    eax = esi + 0x1; /* 0x1006A064: lea eax, [esi + 1] */
    MEM32(edx + 0x4) = eax; /* 0x1006A067: mov dword ptr [edx + 4], eax */
L_1006A06A:
    /* test LO8(ebx), 1 */ /* 0x1006A06A: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006A08B; /* 0x1006A06D: je 0x1006a08b */
L_1006A06F:
    ecx = MEM32(edx + 0x8); /* 0x1006A06F: mov ecx, dword ptr [edx + 8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    ebx = ebx & 0xFFFFFFFEu; /* 0x1006A072: and ebx, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(edx + 0x10); /* 0x1006A075: mov eax, dword ptr [edx + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    ecx = ecx & esi; /* 0x1006A078: and ecx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0); /* 0x1006A07A: push 0 */
    ecx = eax + ecx * 8; /* 0x1006A07C: lea ecx, [eax + ecx*8] */
    RECOMP_CALL(sub_1006ACAB); /* 0x1006A07F: call 0x1006acab */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1006A084: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006A08B; /* 0x1006A086: jne 0x1006a08b */
L_1006A088:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1006A088: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1006A08A: inc ebx */
    _flag_k = FK_INC;
L_1006A08B:
    esi = POP32_VAL(esp); /* 0x1006A08B: pop esi */
    eax = ebx; /* 0x1006A08C: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x1006A08E: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006A08F: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006A090(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006A090u);

L_1006A090:
    PUSH32(esp, ebp); /* 0x1006A090: push ebp */
    ebp = esp; /* 0x1006A091: mov ebp, esp */
    edx = MEM32(ecx + 0x20); /* 0x1006A093: mov edx, dword ptr [ecx + 0x20] */
    PUSH32(esp, ebx); /* 0x1006A096: push ebx */
    PUSH32(esp, esi); /* 0x1006A097: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1006A098: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edx + 0x58));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(edx + 0x58); /* 0x1006A09B: sub esi, dword ptr [edx + 0x58] */
    _flag_k = FK_CMP;
    eax = MEM32(edx + 0x50); /* 0x1006A09E: mov eax, dword ptr [edx + 0x50] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1006A0A1: dec eax */
    _flag_k = FK_DEC;
    /* cmp esi, eax */ /* 0x1006A0A2: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1006A0B2; /* 0x1006A0A4: jne 0x1006a0b2 */
L_1006A0A6:
    ecx = edx + 0x4C; /* 0x1006A0A6: lea ecx, [edx + 0x4c] */
    RECOMP_CALL(sub_1006AABE); /* 0x1006A0A9: call 0x1006aabe */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1006A0AE: mov ebx, eax */
    goto L_1006A0EE; /* 0x1006A0B0: jmp 0x1006a0ee */
L_1006A0B2:
    /* cmp esi, MEM32(edx + 0x50) */ /* 0x1006A0B2: cmp esi, dword ptr [edx + 0x50] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edx + 0x50));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1006A0EC; /* 0x1006A0B5: jge 0x1006a0ec */
L_1006A0B7:
    /* cmp esi, MEM32(edx + 0x4C) */ /* 0x1006A0B7: cmp esi, dword ptr [edx + 0x4c] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edx + 0x4C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1006A0EC; /* 0x1006A0BA: jl 0x1006a0ec */
L_1006A0BC:
    eax = MEM32(edx + 0x68); /* 0x1006A0BC: mov eax, dword ptr [edx + 0x68] */
    ecx = esi; /* 0x1006A0BF: mov ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx + 0x54));
    ecx = ecx & MEM32(edx + 0x54); /* 0x1006A0C1: and ecx, dword ptr [edx + 0x54] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1006A0C4: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = eax + ecx * 4; /* 0x1006A0C6: lea eax, [eax + ecx*4] */
    { uint32_t _tmp = MEM32(eax); /* 0x1006A0C9: xchg dword ptr [eax], ebx */
      MEM32(eax) = ebx;
      ebx = _tmp; }
    /* test LO8(ebx), 1 */ /* 0x1006A0CB: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006A0EE; /* 0x1006A0CE: je 0x1006a0ee */
L_1006A0D0:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edx + 0x54));
    esi = esi & MEM32(edx + 0x54); /* 0x1006A0D0: and esi, dword ptr [edx + 0x54] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    ebx = ebx & 0xFFFFFFFEu; /* 0x1006A0D3: and ebx, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(edx + 0x6C); /* 0x1006A0D6: mov eax, dword ptr [edx + 0x6c] */
    PUSH32(esp, 0); /* 0x1006A0D9: push 0 */
    ecx = eax + esi * 8; /* 0x1006A0DB: lea ecx, [eax + esi*8] */
    RECOMP_CALL(sub_1006ACAB); /* 0x1006A0DE: call 0x1006acab */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1006A0E3: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006A0EE; /* 0x1006A0E5: jne 0x1006a0ee */
L_1006A0E7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1006A0E7: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1006A0E9: inc ebx */
    _flag_k = FK_INC;
    goto L_1006A0EE; /* 0x1006A0EA: jmp 0x1006a0ee */
L_1006A0EC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1006A0EC: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1006A0EE:
    esi = POP32_VAL(esp); /* 0x1006A0EE: pop esi */
    eax = ebx; /* 0x1006A0EF: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x1006A0F1: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1006A0F2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1006A0F3: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1006A0F6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006A0F6u);

L_1006A0F6:
    PUSH32(esp, 4); /* 0x1006A0F6: push 4 */
    eax = 0x100DADF8u; /* 0x1006A0F8: mov eax, 0x100dadf8 */
    RECOMP_CALL(sub_100149A4); /* 0x1006A0FD: call 0x100149a4 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1006A102: mov esi, ecx */
    ecx = MEM32(esi + 0x18); /* 0x1006A104: mov ecx, dword ptr [esi + 0x18] */
    RECOMP_CALL(sub_10072B19); /* 0x1006A107: call 0x10072b19 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x20) = eax; /* 0x1006A10C: mov dword ptr [esi + 0x20], eax */
    /* test eax, eax */ /* 0x1006A10F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006A169; /* 0x1006A111: jne 0x1006a169 */
L_1006A113:
    eax = MEM32(esi + 0x18); /* 0x1006A113: mov eax, dword ptr [esi + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x58u; /* 0x1006A116: add eax, 0x58 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1006A119: push eax */
    RECOMP_ICALL(MEM32(0x100E512C)); /* 0x1006A11A: call dword ptr [0x100e512c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1006A120: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edi; /* 0x1006A122: mov ecx, edi */
    /* test eax, eax */ /* 0x1006A124: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006A12B; /* 0x1006A126: je 0x1006a12b */
L_1006A128:
    ecx = eax + (-0x18); /* 0x1006A128: lea ecx, [eax - 0x18] */
L_1006A12B:
    MEM32(esi + 0x20) = ecx; /* 0x1006A12B: mov dword ptr [esi + 0x20], ecx */
    /* test ecx, ecx */ /* 0x1006A12E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006A156; /* 0x1006A130: jne 0x1006a156 */
L_1006A132:
    PUSH32(esp, 0x74u); /* 0x1006A132: push 0x74 */
    RECOMP_CALL(sub_1000EE11); /* 0x1006A134: call 0x1000ee11 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1006A139: pop ecx */
    MEM32(ebp + (-0x10)) = eax; /* 0x1006A13A: mov dword ptr [ebp - 0x10], eax */
    MEM32(ebp + (-0x4)) = edi; /* 0x1006A13D: mov dword ptr [ebp - 4], edi */
    /* test eax, eax */ /* 0x1006A140: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006A14D; /* 0x1006A142: je 0x1006a14d */
L_1006A144:
    ecx = eax; /* 0x1006A144: mov ecx, eax */
    RECOMP_CALL(sub_1007AE9C); /* 0x1006A146: call 0x1007ae9c */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1006A14B: mov edi, eax */
L_1006A14D:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1006A14D: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x20) = edi; /* 0x1006A151: mov dword ptr [esi + 0x20], edi */
    goto L_1006A15B; /* 0x1006A154: jmp 0x1006a15b */
L_1006A156:
    RECOMP_CALL(sub_1007B147); /* 0x1006A156: call 0x1007b147 */
    RECOMP_FLAGS_IN();
L_1006A15B:
    ecx = MEM32(esi + 0x18); /* 0x1006A15B: mov ecx, dword ptr [esi + 0x18] */
    PUSH32(esp, MEM32(esi + 0x20)); /* 0x1006A15E: push dword ptr [esi + 0x20] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x58u; /* 0x1006A161: add ecx, 0x58 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1006A760); /* 0x1006A164: call 0x1006a760 */
    RECOMP_FLAGS_IN();
L_1006A169:
    eax = MEM32(esi + 0x20); /* 0x1006A169: mov eax, dword ptr [esi + 0x20] */
    MEM32(eax + 0x48) = esi; /* 0x1006A16C: mov dword ptr [eax + 0x48], esi */
    RECOMP_CALL(sub_100149D7); /* 0x1006A16F: call 0x100149d7 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006A174: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006A175(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006A175u);

L_1006A175:
    PUSH32(esp, ebp); /* 0x1006A175: push ebp */
    ebp = esp; /* 0x1006A176: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x1006A178: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1006A17B: push -1 */
    PUSH32(esp, 0x100DAE4Cu); /* 0x1006A17D: push 0x100dae4c */
    eax = MEM32(FS_BASE + (0)); /* 0x1006A182: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x1006A188: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1006A189: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1006A18C: push esi */
    PUSH32(esp, edi); /* 0x1006A18D: push edi */
    eax = MEM32(0x100DF7B8); /* 0x1006A18E: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x1006A193: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1006A195: push eax */
    eax = esp + 0x18; /* 0x1006A196: lea eax, [esp + 0x18] */
    MEM32(FS_BASE + (0)) = eax; /* 0x1006A19A: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x1006A1A0: mov esi, ecx */
    eax = MEM32(esi + 0x18); /* 0x1006A1A2: mov eax, dword ptr [esi + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x58u; /* 0x1006A1A5: add eax, 0x58 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1006A1A8: push eax */
    RECOMP_ICALL(MEM32(0x100E512C)); /* 0x1006A1A9: call dword ptr [0x100e512c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1006A1AF: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edi; /* 0x1006A1B1: mov ecx, edi */
    /* test eax, eax */ /* 0x1006A1B3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006A1BA; /* 0x1006A1B5: je 0x1006a1ba */
L_1006A1B7:
    ecx = eax + (-0x18); /* 0x1006A1B7: lea ecx, [eax - 0x18] */
L_1006A1BA:
    MEM32(esi + 0x20) = ecx; /* 0x1006A1BA: mov dword ptr [esi + 0x20], ecx */
    /* test ecx, ecx */ /* 0x1006A1BD: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006A1F8; /* 0x1006A1BF: jne 0x1006a1f8 */
L_1006A1C1:
    ecx = MEM32(esi + 0x18); /* 0x1006A1C1: mov ecx, dword ptr [esi + 0x18] */
    RECOMP_CALL(sub_10072B19); /* 0x1006A1C4: call 0x10072b19 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x20) = eax; /* 0x1006A1C9: mov dword ptr [esi + 0x20], eax */
    /* test eax, eax */ /* 0x1006A1CC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006A20B; /* 0x1006A1CE: jne 0x1006a20b */
L_1006A1D0:
    PUSH32(esp, 0x74u); /* 0x1006A1D0: push 0x74 */
    RECOMP_CALL(sub_1000EE11); /* 0x1006A1D2: call 0x1000ee11 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1006A1D7: pop ecx */
    MEM32(esp + 0x10) = eax; /* 0x1006A1D8: mov dword ptr [esp + 0x10], eax */
    MEM32(esp + 0x20) = edi; /* 0x1006A1DC: mov dword ptr [esp + 0x20], edi */
    /* test eax, eax */ /* 0x1006A1E0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006A1ED; /* 0x1006A1E2: je 0x1006a1ed */
L_1006A1E4:
    ecx = eax; /* 0x1006A1E4: mov ecx, eax */
    RECOMP_CALL(sub_1007AE9C); /* 0x1006A1E6: call 0x1007ae9c */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1006A1EB: mov edi, eax */
L_1006A1ED:
    _flag_a = (uint32_t)((MEM32(esp + 0x20) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(esp + 0x20) | 0xFFFFFFFFu));
    MEM32(esp + 0x20) = MEM32(esp + 0x20) | 0xFFFFFFFFu; /* 0x1006A1ED: or dword ptr [esp + 0x20], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x20) = edi; /* 0x1006A1F2: mov dword ptr [esi + 0x20], edi */
    PUSH32(esp, edi); /* 0x1006A1F5: push edi */
    goto L_1006A200; /* 0x1006A1F6: jmp 0x1006a200 */
L_1006A1F8:
    RECOMP_CALL(sub_1007B147); /* 0x1006A1F8: call 0x1007b147 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x20)); /* 0x1006A1FD: push dword ptr [esi + 0x20] */
L_1006A200:
    ecx = MEM32(esi + 0x18); /* 0x1006A200: mov ecx, dword ptr [esi + 0x18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x58u; /* 0x1006A203: add ecx, 0x58 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1006A760); /* 0x1006A206: call 0x1006a760 */
    RECOMP_FLAGS_IN();
L_1006A20B:
    eax = MEM32(esi + 0x20); /* 0x1006A20B: mov eax, dword ptr [esi + 0x20] */
    MEM32(eax + 0x48) = esi; /* 0x1006A20E: mov dword ptr [eax + 0x48], esi */
    ecx = MEM32(esp + 0x18); /* 0x1006A211: mov ecx, dword ptr [esp + 0x18] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1006A215: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1006A21C: pop ecx */
    edi = POP32_VAL(esp); /* 0x1006A21D: pop edi */
    esi = POP32_VAL(esp); /* 0x1006A21E: pop esi */
    esp = ebp; /* 0x1006A21F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1006A221: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006A222: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006A223(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006A223u);

L_1006A223:
    eax = MEM32(ecx + 0x18); /* 0x1006A223: mov eax, dword ptr [ecx + 0x18] */
    /* test eax, eax */ /* 0x1006A226: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006A231; /* 0x1006A228: je 0x1006a231 */
L_1006A22A:
    eax = MEM32(eax + 0x100); /* 0x1006A22A: mov eax, dword ptr [eax + 0x100] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006A230: ret  */
L_1006A231:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1006A231: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006A233: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006A234(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006A234u);

L_1006A234:
    PUSH32(esp, ebp); /* 0x1006A234: push ebp */
    ebp = esp; /* 0x1006A235: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1006A237: push ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1006A238: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1006A23C: push esi */
    PUSH32(esp, edi); /* 0x1006A23D: push edi */
    edi = ecx + 0x80; /* 0x1006A23E: lea edi, [ecx + 0x80] */
    goto L_1006A257; /* 0x1006A244: jmp 0x1006a257 */
L_1006A246:
    ecx = MEM32(esi + 0x8); /* 0x1006A246: mov ecx, dword ptr [esi + 8] */
    RECOMP_CALL(sub_10078792); /* 0x1006A249: call 0x10078792 */
    RECOMP_FLAGS_IN();
    esi = MEM32(esi); /* 0x1006A24E: mov esi, dword ptr [esi] */
    /* test esi, esi */ /* 0x1006A250: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006A246; /* 0x1006A252: jne 0x1006a246 */
L_1006A254:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 1; /* 0x1006A254: inc dword ptr [ebp - 4] */
    _flag_k = FK_INC;
L_1006A257:
    eax = ebp + (-0x4); /* 0x1006A257: lea eax, [ebp - 4] */
    ecx = edi; /* 0x1006A25A: mov ecx, edi */
    PUSH32(esp, eax); /* 0x1006A25C: push eax */
    RECOMP_CALL(sub_1006AD09); /* 0x1006A25D: call 0x1006ad09 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1006A262: mov esi, eax */
    /* test esi, esi */ /* 0x1006A264: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006A246; /* 0x1006A266: jne 0x1006a246 */
L_1006A268:
    ecx = edi; /* 0x1006A268: mov ecx, edi */
    RECOMP_CALL(sub_1006A703); /* 0x1006A26A: call 0x1006a703 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x1006A26F: pop edi */
    esi = POP32_VAL(esp); /* 0x1006A270: pop esi */
    esp = ebp; /* 0x1006A271: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1006A273: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006A274: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006A275(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006A275u);

L_1006A275:
    PUSH32(esp, esi); /* 0x1006A275: push esi */
    PUSH32(esp, edi); /* 0x1006A276: push edi */
    edi = ecx; /* 0x1006A277: mov edi, ecx */
    ecx = 0x0FFFFFFFu; /* 0x1006A279: mov ecx, 0xfffffff */
    esi = MEM32(edi + 0x34); /* 0x1006A27E: mov esi, dword ptr [edi + 0x34] */
    eax = MEM32(esi + 0x4); /* 0x1006A281: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x1006A284: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ecx */ /* 0x1006A286: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006A28E; /* 0x1006A288: je 0x1006a28e */
L_1006A28A:
    esi = MEM32(esi); /* 0x1006A28A: mov esi, dword ptr [esi] */
    goto L_1006A290; /* 0x1006A28C: jmp 0x1006a290 */
L_1006A28E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1006A28E: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1006A290:
    /* test esi, esi */ /* 0x1006A290: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006A2E1; /* 0x1006A292: je 0x1006a2e1 */
L_1006A294:
    /* cmp esi, MEM32(edi + 0x30) */ /* 0x1006A294: cmp esi, dword ptr [edi + 0x30] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi + 0x30));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006A2BE; /* 0x1006A297: je 0x1006a2be */
L_1006A299:
    PUSH32(esp, 0); /* 0x1006A299: push 0 */
    ecx = esi; /* 0x1006A29B: mov ecx, esi */
    RECOMP_CALL(sub_10079895); /* 0x1006A29D: call 0x10079895 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1006A2A2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006A2BE; /* 0x1006A2A4: jne 0x1006a2be */
L_1006A2A6:
    eax = MEM32(esi + 0x4); /* 0x1006A2A6: mov eax, dword ptr [esi + 4] */
    ecx = 0x0FFFFFFFu; /* 0x1006A2A9: mov ecx, 0xfffffff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x1006A2AE: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ecx */ /* 0x1006A2B0: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006A2B8; /* 0x1006A2B2: je 0x1006a2b8 */
L_1006A2B4:
    esi = MEM32(esi); /* 0x1006A2B4: mov esi, dword ptr [esi] */
    goto L_1006A2BA; /* 0x1006A2B6: jmp 0x1006a2ba */
L_1006A2B8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1006A2B8: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1006A2BA:
    /* test esi, esi */ /* 0x1006A2BA: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006A294; /* 0x1006A2BC: jne 0x1006a294 */
L_1006A2BE:
    /* test esi, esi */ /* 0x1006A2BE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006A2E1; /* 0x1006A2C0: je 0x1006a2e1 */
L_1006A2C2:
    /* cmp esi, MEM32(edi + 0x30) */ /* 0x1006A2C2: cmp esi, dword ptr [edi + 0x30] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi + 0x30));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006A2E1; /* 0x1006A2C5: je 0x1006a2e1 */
L_1006A2C7:
    PUSH32(esp, 0); /* 0x1006A2C7: push 0 */
    ecx = esi; /* 0x1006A2C9: mov ecx, esi */
    RECOMP_CALL(sub_10079895); /* 0x1006A2CB: call 0x10079895 */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x38) = eax; /* 0x1006A2D0: mov dword ptr [edi + 0x38], eax */
    eax = MEM32(esi + 0x4); /* 0x1006A2D3: mov eax, dword ptr [esi + 4] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x1006A2D6: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x1006A2D6: shl eax, 4 */
    if (4u) _cf = (((eax) >> 3) & 1u); /* 0x1006A2D9: sar eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 4u);
    MEM32(edi + 0x3C) = eax; /* 0x1006A2DC: mov dword ptr [edi + 0x3c], eax */
    goto L_1006A2E9; /* 0x1006A2DF: jmp 0x1006a2e9 */
L_1006A2E1:
    _flag_a = (uint32_t)(MEM32(edi + 0x38)); _flag_b = (uint32_t)(0);
    MEM32(edi + 0x38) = MEM32(edi + 0x38) & 0; /* 0x1006A2E1: and dword ptr [edi + 0x38], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(edi + 0x3C) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(edi + 0x3C) | 0xFFFFFFFFu));
    MEM32(edi + 0x3C) = MEM32(edi + 0x3C) | 0xFFFFFFFFu; /* 0x1006A2E5: or dword ptr [edi + 0x3c], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1006A2E9:
    edi = POP32_VAL(esp); /* 0x1006A2E9: pop edi */
    esi = POP32_VAL(esp); /* 0x1006A2EA: pop esi */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1006A2EB: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1006A2EE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006A2EEu);

L_1006A2EE:
    PUSH32(esp, ebp); /* 0x1006A2EE: push ebp */
    ebp = esp; /* 0x1006A2EF: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1006A2F1: push ebx */
    PUSH32(esp, esi); /* 0x1006A2F2: push esi */
    esi = ecx; /* 0x1006A2F3: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1006A2F5: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1006A2F7: push edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1006A2F8: inc edx */
    _flag_k = FK_INC;
    eax = esi + 0x70; /* 0x1006A2F9: lea eax, [esi + 0x70] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + edx; edx = _old; MEM32(eax) = _sum; } /* 0x1006A2FC: lock xadd dword ptr [eax], edx */
    _flag_k = FK_ADD;
    edi = MEM32(ebp + 0x8); /* 0x1006A300: mov edi, dword ptr [ebp + 8] */
    ebx = esi + 0x68; /* 0x1006A303: lea ebx, [esi + 0x68] */
    edx = MEM32(ebx); /* 0x1006A306: mov edx, dword ptr [ebx] */
L_1006A308:
    /* cmp edx, 0xFFFFFFFFu */ /* 0x1006A308: cmp edx, -1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006A311; /* 0x1006A30B: je 0x1006a311 */
L_1006A30D:
    /* cmp edi, edx */ /* 0x1006A30D: cmp edi, edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1006A336; /* 0x1006A30F: jg 0x1006a336 */
L_1006A311:
    ecx = edi; /* 0x1006A311: mov ecx, edi */
    eax = edx; /* 0x1006A313: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(ebx); if (eax == _d) { MEM32(ebx) = ecx; } else { eax = _d; } } /* 0x1006A315: lock cmpxchg dword ptr [ebx], ecx */
    _flag_k = FK_CMP;
    /* cmp eax, edx */ /* 0x1006A319: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006A321; /* 0x1006A31B: je 0x1006a321 */
L_1006A31D:
    edx = eax; /* 0x1006A31D: mov edx, eax */
    RECOMP_BACKEDGE();
    goto L_1006A308; /* 0x1006A31F: jmp 0x1006a308 */
L_1006A321:
    /* cmp MEM32(esi + 0x74), 0 */ /* 0x1006A321: cmp dword ptr [esi + 0x74], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x74)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006A32C; /* 0x1006A325: je 0x1006a32c */
L_1006A327:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1006A327: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1006A32E; /* 0x1006A32A: jmp 0x1006a32e */
L_1006A32C:
    eax = edi; /* 0x1006A32C: mov eax, edi */
L_1006A32E:
    PUSH32(esp, eax); /* 0x1006A32E: push eax */
    ecx = esi; /* 0x1006A32F: mov ecx, esi */
    RECOMP_CALL(sub_1006A487); /* 0x1006A331: call 0x1006a487 */
    RECOMP_FLAGS_IN();
L_1006A336:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x6Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x6Cu; /* 0x1006A336: add esi, 0x6c */
    _flag_k = FK_ADD;
    edx = MEM32(esi); /* 0x1006A339: mov edx, dword ptr [esi] */
L_1006A33B:
    /* cmp edx, 0xFFFFFFFFu */ /* 0x1006A33B: cmp edx, -1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006A344; /* 0x1006A33E: je 0x1006a344 */
L_1006A340:
    /* cmp edi, edx */ /* 0x1006A340: cmp edi, edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1006A354; /* 0x1006A342: jl 0x1006a354 */
L_1006A344:
    ecx = edi; /* 0x1006A344: mov ecx, edi */
    eax = edx; /* 0x1006A346: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(esi); if (eax == _d) { MEM32(esi) = ecx; } else { eax = _d; } } /* 0x1006A348: lock cmpxchg dword ptr [esi], ecx */
    _flag_k = FK_CMP;
    /* cmp eax, edx */ /* 0x1006A34C: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006A354; /* 0x1006A34E: je 0x1006a354 */
L_1006A350:
    edx = eax; /* 0x1006A350: mov edx, eax */
    RECOMP_BACKEDGE();
    goto L_1006A33B; /* 0x1006A352: jmp 0x1006a33b */
L_1006A354:
    edi = POP32_VAL(esp); /* 0x1006A354: pop edi */
    esi = POP32_VAL(esp); /* 0x1006A355: pop esi */
    ebx = POP32_VAL(esp); /* 0x1006A356: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1006A357: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1006A358: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1006A35B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006A35Bu);

L_1006A35B:
    PUSH32(esp, esi); /* 0x1006A35B: push esi */
    esi = ecx; /* 0x1006A35C: mov esi, ecx */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1006A35E: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1006A361: push edi */
    edi = esi + 0x6C; /* 0x1006A362: lea edi, [esi + 0x6c] */
    { uint32_t _tmp = MEM32(edi); /* 0x1006A365: xchg dword ptr [edi], eax */
      MEM32(edi) = eax;
      eax = _tmp; }
    edx = MEM32(esi + 0x74); /* 0x1006A367: mov edx, dword ptr [esi + 0x74] */
    ecx = MEM32(esi + 0x34); /* 0x1006A36A: mov ecx, dword ptr [esi + 0x34] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edx);
    _cf = (edx) != 0;
    edx = (uint32_t)(-(int32_t)edx); /* 0x1006A36D: neg edx */
    _flag_k = FK_CMP;
    { uint32_t _sa = edx, _sb = edx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1006A36F: sbb edx, edx */
      edx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFC1Au);
    edx = edx & 0xFFFFFC1Au; /* 0x1006A371: and edx, 0xfffffc1a */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1006A377: dec edx */
    _flag_k = FK_DEC;
    /* test ecx, ecx */ /* 0x1006A378: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006A3C3; /* 0x1006A37A: je 0x1006a3c3 */
L_1006A37C:
    PUSH32(esp, ebx); /* 0x1006A37C: push ebx */
    ebx = 0x0FFFFFFFu; /* 0x1006A37D: mov ebx, 0xfffffff */
L_1006A382:
    /* cmp ecx, MEM32(esi + 0x30) */ /* 0x1006A382: cmp ecx, dword ptr [esi + 0x30] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x30));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006A3C2; /* 0x1006A385: je 0x1006a3c2 */
L_1006A387:
    eax = MEM32(ecx + 0x4); /* 0x1006A387: mov eax, dword ptr [ecx + 4] */
    if (28u) _cf = (((eax) >> 27) & 1u); /* 0x1006A38A: sar eax, 0x1c */
    if (28u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 28u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 28u);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(eax, LO8(eax) & 1); /* 0x1006A38D: and al, 1 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006A397; /* 0x1006A38F: je 0x1006a397 */
L_1006A391:
    /* test MEM8(ecx + 0x18), 3 */ /* 0x1006A391: test byte ptr [ecx + 0x18], 3 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x18)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006A3B9; /* 0x1006A395: jne 0x1006a3b9 */
L_1006A397:
    /* test LO8(eax), LO8(eax) */ /* 0x1006A397: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006A3A4; /* 0x1006A399: jne 0x1006a3a4 */
L_1006A39B:
    eax = MEM32(ecx + 0x64); /* 0x1006A39B: mov eax, dword ptr [ecx + 0x64] */
    /* cmp MEM32(eax + 0x34), 0 */ /* 0x1006A39E: cmp dword ptr [eax + 0x34], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x34)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1006A3B9; /* 0x1006A3A2: jne 0x1006a3b9 */
L_1006A3A4:
    eax = MEM32(ecx + 0x4); /* 0x1006A3A4: mov eax, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    eax = eax & ebx; /* 0x1006A3A7: and eax, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ebx */ /* 0x1006A3A9: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006A3B1; /* 0x1006A3AB: je 0x1006a3b1 */
L_1006A3AD:
    ecx = MEM32(ecx); /* 0x1006A3AD: mov ecx, dword ptr [ecx] */
    goto L_1006A3B3; /* 0x1006A3AF: jmp 0x1006a3b3 */
L_1006A3B1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1006A3B1: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1006A3B3:
    /* test ecx, ecx */ /* 0x1006A3B3: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006A3C2; /* 0x1006A3B5: je 0x1006a3c2 */
L_1006A3B7:
    RECOMP_BACKEDGE();
    goto L_1006A382; /* 0x1006A3B7: jmp 0x1006a382 */
L_1006A3B9:
    edx = MEM32(ecx + 0x4); /* 0x1006A3B9: mov edx, dword ptr [ecx + 4] */
    if (4u) _cf = (((edx) >> 28) & 1u); /* 0x1006A3BC: shl edx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((edx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 4u; /* 0x1006A3BC: shl edx, 4 */
    if (4u) _cf = (((edx) >> 3) & 1u); /* 0x1006A3BF: sar edx, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 4u);
L_1006A3C2:
    ebx = POP32_VAL(esp); /* 0x1006A3C2: pop ebx */
L_1006A3C3:
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x1006A3C3: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1006A3C6:
    /* cmp esi, 0xFFFFFFFFu */ /* 0x1006A3C6: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006A3CF; /* 0x1006A3C9: je 0x1006a3cf */
L_1006A3CB:
    /* cmp edx, esi */ /* 0x1006A3CB: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1006A3DF; /* 0x1006A3CD: jl 0x1006a3df */
L_1006A3CF:
    ecx = edx; /* 0x1006A3CF: mov ecx, edx */
    eax = esi; /* 0x1006A3D1: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(edi); if (eax == _d) { MEM32(edi) = ecx; } else { eax = _d; } } /* 0x1006A3D3: lock cmpxchg dword ptr [edi], ecx */
    _flag_k = FK_CMP;
    /* cmp eax, esi */ /* 0x1006A3D7: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006A3DF; /* 0x1006A3D9: je 0x1006a3df */
L_1006A3DB:
    esi = eax; /* 0x1006A3DB: mov esi, eax */
    RECOMP_BACKEDGE();
    goto L_1006A3C6; /* 0x1006A3DD: jmp 0x1006a3c6 */
L_1006A3DF:
    edi = POP32_VAL(esp); /* 0x1006A3DF: pop edi */
    esi = POP32_VAL(esp); /* 0x1006A3E0: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006A3E1: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006A3E2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006A3E2u);

L_1006A3E2:
    PUSH32(esp, ebp); /* 0x1006A3E2: push ebp */
    ebp = esp; /* 0x1006A3E3: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1006A3E5: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x1006A3E8: push ebx */
    PUSH32(esp, esi); /* 0x1006A3E9: push esi */
    PUSH32(esp, edi); /* 0x1006A3EA: push edi */
    edi = ecx; /* 0x1006A3EB: mov edi, ecx */
    _flag_a = (uint32_t)((ebx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ebx | 0xFFFFFFFFu));
    ebx = ebx | 0xFFFFFFFFu; /* 0x1006A3ED: or ebx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = ebx; /* 0x1006A3F0: mov esi, ebx */
    edx = edi + 0x68; /* 0x1006A3F2: lea edx, [edi + 0x68] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(edx); if (eax == _d) { MEM32(edx) = esi; } else { eax = _d; } } /* 0x1006A3F5: lock cmpxchg dword ptr [edx], esi */
    _flag_k = FK_CMP;
    RECOMP_CALL(sub_1006A35B); /* 0x1006A3F9: call 0x1006a35b */
    RECOMP_FLAGS_IN();
    eax = edi + 0x70; /* 0x1006A3FE: lea eax, [edi + 0x70] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + ebx; ebx = _old; MEM32(eax) = _sum; } /* 0x1006A401: lock xadd dword ptr [eax], ebx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x1006A405: dec ebx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ebx);
    _cf = (ebx) != 0;
    ebx = (uint32_t)(-(int32_t)ebx); /* 0x1006A406: neg ebx */
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x1006A408: pop edi */
    { uint32_t _sa = ebx, _sb = ebx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1006A409: sbb ebx, ebx */
      ebx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    esi = POP32_VAL(esp); /* 0x1006A40B: pop esi */
    eax = ebx + 0x1; /* 0x1006A40C: lea eax, [ebx + 1] */
    ebx = POP32_VAL(esp); /* 0x1006A40F: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1006A410: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1006A411: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1006A414(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006A414u);

L_1006A414:
    PUSH32(esp, ebp); /* 0x1006A414: push ebp */
    ebp = esp; /* 0x1006A415: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1006A417: push ecx */
    PUSH32(esp, ebx); /* 0x1006A418: push ebx */
    PUSH32(esp, esi); /* 0x1006A419: push esi */
    PUSH32(esp, edi); /* 0x1006A41A: push edi */
    edi = ecx; /* 0x1006A41B: mov edi, ecx */
    esi = MEM32(edi + 0x34); /* 0x1006A41D: mov esi, dword ptr [edi + 0x34] */
    /* test esi, esi */ /* 0x1006A420: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006A42F; /* 0x1006A422: je 0x1006a42f */
L_1006A424:
    esi = MEM32(esi + 0x4); /* 0x1006A424: mov esi, dword ptr [esi + 4] */
    if (4u) _cf = (((esi) >> 28) & 1u); /* 0x1006A427: shl esi, 4 */
    if (4u) { _flag_a = recomp_flags_pack((esi << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 4u; /* 0x1006A427: shl esi, 4 */
    if (4u) _cf = (((esi) >> 3) & 1u); /* 0x1006A42A: sar esi, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)esi >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = (uint32_t)((int32_t)esi >> 4u);
    goto L_1006A432; /* 0x1006A42D: jmp 0x1006a432 */
L_1006A42F:
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x1006A42F: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1006A432:
    ebx = edi + 0x8C; /* 0x1006A432: lea ebx, [edi + 0x8c] */
    eax = MEM32(ebx); /* 0x1006A438: mov eax, dword ptr [ebx] */
    /* cmp eax, MEM32(ebx + 0x4) */ /* 0x1006A43A: cmp eax, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1006A446; /* 0x1006A43D: jl 0x1006a446 */
L_1006A43F:
    ecx = ebx; /* 0x1006A43F: mov ecx, ebx */
    RECOMP_CALL(sub_100699E7); /* 0x1006A441: call 0x100699e7 */
    RECOMP_FLAGS_IN();
L_1006A446:
    PUSH32(esp, MEM32(ebx)); /* 0x1006A446: push dword ptr [ebx] */
    ecx = ebx; /* 0x1006A448: mov ecx, ebx */
    RECOMP_CALL(sub_10069AD8); /* 0x1006A44A: call 0x10069ad8 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1006A44F: mov ecx, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1006A451: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x4); /* 0x1006A453: lea eax, [ebp - 4] */
    MEM32(ecx) = 0; /* 0x1006A456: mov dword ptr [ecx], 0 */
    MEM32(ecx + 0x4) = esi; /* 0x1006A45C: mov dword ptr [ecx + 4], esi */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(1);
    MEM32(ebx) = MEM32(ebx) + 1; /* 0x1006A45F: inc dword ptr [ebx] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)((MEM32(eax) | edx)); _flag_b = (uint32_t)((MEM32(eax) | edx));
    MEM32(eax) = MEM32(eax) | edx; /* 0x1006A461: lock or dword ptr [eax], edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi + 0x74), edx */ /* 0x1006A464: cmp dword ptr [edi + 0x74], edx */
    _flag_a = (uint32_t)(MEM32(edi + 0x74)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1006A477; /* 0x1006A467: jne 0x1006a477 */
L_1006A469:
    /* cmp MEM32(edi + 0x68), 0xFFFFFFFFu */ /* 0x1006A469: cmp dword ptr [edi + 0x68], -1 */
    _flag_a = (uint32_t)(MEM32(edi + 0x68)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006A47E; /* 0x1006A46D: je 0x1006a47e */
L_1006A46F:
    eax = MEM32(edi + 0x68); /* 0x1006A46F: mov eax, dword ptr [edi + 0x68] */
    /* cmp eax, MEM32(ecx + 0x4) */ /* 0x1006A472: cmp eax, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1006A47E; /* 0x1006A475: jg 0x1006a47e */
L_1006A477:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1006A477: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1006A479: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(ecx), _sum = MEM32(ecx) + eax; eax = _old; MEM32(ecx) = _sum; } /* 0x1006A47A: lock xadd dword ptr [ecx], eax */
    _flag_k = FK_ADD;
L_1006A47E:
    edi = POP32_VAL(esp); /* 0x1006A47E: pop edi */
    esi = POP32_VAL(esp); /* 0x1006A47F: pop esi */
    eax = ecx; /* 0x1006A480: mov eax, ecx */
    ebx = POP32_VAL(esp); /* 0x1006A482: pop ebx */
    esp = ebp; /* 0x1006A483: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1006A485: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006A486: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006A487(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006A487u);

L_1006A487:
    PUSH32(esp, ebp); /* 0x1006A487: push ebp */
    ebp = esp; /* 0x1006A488: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1006A48A: push ebx */
    ebx = ecx; /* 0x1006A48B: mov ebx, ecx */
    PUSH32(esp, esi); /* 0x1006A48D: push esi */
    PUSH32(esp, edi); /* 0x1006A48E: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1006A48F: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebx + 0x8C; /* 0x1006A491: lea eax, [ebx + 0x8c] */
    edi = MEM32(eax); /* 0x1006A497: mov edi, dword ptr [eax] */
    /* test edi, edi */ /* 0x1006A499: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1006A4CC; /* 0x1006A49B: jle 0x1006a4cc */
L_1006A49D:
    PUSH32(esp, esi); /* 0x1006A49D: push esi */
    ecx = eax; /* 0x1006A49E: mov ecx, eax */
    RECOMP_CALL(sub_10069AD8); /* 0x1006A4A0: call 0x10069ad8 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1006A4A5: mov ecx, eax */
    eax = MEM32(ebp + 0x8); /* 0x1006A4A7: mov eax, dword ptr [ebp + 8] */
    /* cmp MEM32(ecx + 0x4), eax */ /* 0x1006A4AA: cmp dword ptr [ecx + 4], eax */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1006A4C1; /* 0x1006A4AD: jl 0x1006a4c1 */
L_1006A4AF:
    /* cmp MEM32(ebx + 0x3C), 0xFFFFFFFFu */ /* 0x1006A4AF: cmp dword ptr [ebx + 0x3c], -1 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x3C)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006A4BA; /* 0x1006A4B3: je 0x1006a4ba */
L_1006A4B5:
    /* cmp MEM32(ebx + 0x3C), eax */ /* 0x1006A4B5: cmp dword ptr [ebx + 0x3c], eax */
    _flag_a = (uint32_t)(MEM32(ebx + 0x3C)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1006A4C1; /* 0x1006A4B8: jg 0x1006a4c1 */
L_1006A4BA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1006A4BA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1006A4BC: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(ecx), _sum = MEM32(ecx) + eax; eax = _old; MEM32(ecx) = _sum; } /* 0x1006A4BD: lock xadd dword ptr [ecx], eax */
    _flag_k = FK_ADD;
L_1006A4C1:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1006A4C1: inc esi */
    _flag_k = FK_INC;
    eax = ebx + 0x8C; /* 0x1006A4C2: lea eax, [ebx + 0x8c] */
    /* cmp esi, edi */ /* 0x1006A4C8: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1006A49D; /* 0x1006A4CA: jl 0x1006a49d */
L_1006A4CC:
    edi = POP32_VAL(esp); /* 0x1006A4CC: pop edi */
    esi = POP32_VAL(esp); /* 0x1006A4CD: pop esi */
    ebx = POP32_VAL(esp); /* 0x1006A4CE: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1006A4CF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1006A4D0: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1006A4D3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006A4D3u);

L_1006A4D3:
    PUSH32(esp, ebp); /* 0x1006A4D3: push ebp */
    ebp = esp; /* 0x1006A4D4: mov ebp, esp */
    /* cmp MEM8(ebp + 0xC), 0 */ /* 0x1006A4D6: cmp byte ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, esi); /* 0x1006A4DA: push esi */
    esi = ecx; /* 0x1006A4DB: mov esi, ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006A4F8; /* 0x1006A4DD: je 0x1006a4f8 */
L_1006A4DF:
    ecx = MEM32(ebp + 0x8); /* 0x1006A4DF: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, 0); /* 0x1006A4E2: push 0 */
    RECOMP_CALL(sub_10079895); /* 0x1006A4E4: call 0x10079895 */
    RECOMP_FLAGS_IN();
    /* cmp eax, 2 */ /* 0x1006A4E9: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006A4F4; /* 0x1006A4EC: je 0x1006a4f4 */
L_1006A4EE:
    /* cmp MEM32(eax + 0x8), 0 */ /* 0x1006A4EE: cmp dword ptr [eax + 8], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1006A4F8; /* 0x1006A4F2: jne 0x1006a4f8 */
L_1006A4F4:
    SET_LO8(eax, 1); /* 0x1006A4F4: mov al, 1 */
    goto L_1006A51B; /* 0x1006A4F6: jmp 0x1006a51b */
L_1006A4F8:
    eax = MEM32(esi + 0x3C); /* 0x1006A4F8: mov eax, dword ptr [esi + 0x3c] */
    /* cmp MEM32(esi + 0x6C), eax */ /* 0x1006A4FB: cmp dword ptr [esi + 0x6c], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x6C)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1006A519; /* 0x1006A4FE: jge 0x1006a519 */
L_1006A500:
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1006A500: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006A519; /* 0x1006A503: je 0x1006a519 */
L_1006A505:
    ecx = MEM32(esi + 0x38); /* 0x1006A505: mov ecx, dword ptr [esi + 0x38] */
    /* cmp ecx, 2 */ /* 0x1006A508: cmp ecx, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006A4F4; /* 0x1006A50B: je 0x1006a4f4 */
L_1006A50D:
    ecx = MEM32(ecx + 0x8); /* 0x1006A50D: mov ecx, dword ptr [ecx + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1006A510: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x1006A512: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x1006A514: sete al */
    goto L_1006A51B; /* 0x1006A517: jmp 0x1006a51b */
L_1006A519:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x1006A519: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_1006A51B:
    esi = POP32_VAL(esp); /* 0x1006A51B: pop esi */
    ebp = POP32_VAL(esp); /* 0x1006A51C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1006A51D: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1006A520(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006A520u);

L_1006A520:
    PUSH32(esp, ebp); /* 0x1006A520: push ebp */
    ebp = esp; /* 0x1006A521: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1006A523: push ebx */
    PUSH32(esp, esi); /* 0x1006A524: push esi */
    esi = ecx; /* 0x1006A525: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1006A527: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x70), ebx */ /* 0x1006A529: cmp dword ptr [esi + 0x70], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x70)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1006A53D; /* 0x1006A52C: jle 0x1006a53d */
L_1006A52E:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1006A52E: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1006A531: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1006A4D3); /* 0x1006A534: call 0x1006a4d3 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1006A539: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006A54E; /* 0x1006A53B: je 0x1006a54e */
L_1006A53D:
    /* cmp MEM32(esi + 0x78), ebx */ /* 0x1006A53D: cmp dword ptr [esi + 0x78], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x78)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1006A551; /* 0x1006A540: jle 0x1006a551 */
L_1006A542:
    ecx = MEM32(ebp + 0x8); /* 0x1006A542: mov ecx, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1007981B); /* 0x1006A545: call 0x1007981b */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1006A54A: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006A551; /* 0x1006A54C: je 0x1006a551 */
L_1006A54E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1006A54E: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1006A550: inc ebx */
    _flag_k = FK_INC;
L_1006A551:
    esi = POP32_VAL(esp); /* 0x1006A551: pop esi */
    SET_LO8(eax, LO8(ebx)); /* 0x1006A552: mov al, bl */
    ebx = POP32_VAL(esp); /* 0x1006A554: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1006A555: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1006A556: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1006A559(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006A559u);

L_1006A559:
    PUSH32(esp, ebp); /* 0x1006A559: push ebp */
    ebp = esp; /* 0x1006A55A: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1006A55C: push ebx */
    PUSH32(esp, esi); /* 0x1006A55D: push esi */
    PUSH32(esp, edi); /* 0x1006A55E: push edi */
    edi = ecx; /* 0x1006A55F: mov edi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1006A561: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi + 0x70), ebx */ /* 0x1006A563: cmp dword ptr [edi + 0x70], ebx */
    _flag_a = (uint32_t)(MEM32(edi + 0x70)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1006A621; /* 0x1006A566: jle 0x1006a621 */
L_1006A56C:
    ecx = MEM32(ebp + 0xC); /* 0x1006A56C: mov ecx, dword ptr [ebp + 0xc] */
    /* cmp MEM32(edi + 0x68), ecx */ /* 0x1006A56F: cmp dword ptr [edi + 0x68], ecx */
    _flag_a = (uint32_t)(MEM32(edi + 0x68)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1006A621; /* 0x1006A572: jg 0x1006a621 */
L_1006A578:
    /* cmp MEM32(edi + 0x3C), 0xFFFFFFFFu */ /* 0x1006A578: cmp dword ptr [edi + 0x3c], -1 */
    _flag_a = (uint32_t)(MEM32(edi + 0x3C)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006A648; /* 0x1006A57C: je 0x1006a648 */
L_1006A582:
    eax = MEM32(edi + 0x68); /* 0x1006A582: mov eax, dword ptr [edi + 0x68] */
    /* cmp eax, MEM32(edi + 0x3C) */ /* 0x1006A585: cmp eax, dword ptr [edi + 0x3c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x3C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1006A648; /* 0x1006A588: jge 0x1006a648 */
L_1006A58E:
    eax = MEM32(edi + 0x34); /* 0x1006A58E: mov eax, dword ptr [edi + 0x34] */
    esi = MEM32(ebp + 0x8); /* 0x1006A591: mov esi, dword ptr [ebp + 8] */
    /* cmp esi, eax */ /* 0x1006A594: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1006A5B9; /* 0x1006A596: jne 0x1006a5b9 */
L_1006A598:
    eax = MEM32(eax + 0x4); /* 0x1006A598: mov eax, dword ptr [eax + 4] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x1006A59B: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x1006A59B: shl eax, 4 */
    if (4u) _cf = (((eax) >> 3) & 1u); /* 0x1006A59E: sar eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 4u);
    /* cmp ecx, eax */ /* 0x1006A5A1: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1006A5B9; /* 0x1006A5A3: jne 0x1006a5b9 */
L_1006A5A5:
    ecx = MEM32(edi + 0x38); /* 0x1006A5A5: mov ecx, dword ptr [edi + 0x38] */
    /* cmp ecx, 2 */ /* 0x1006A5A8: cmp ecx, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006A621; /* 0x1006A5AB: je 0x1006a621 */
L_1006A5AD:
    ecx = MEM32(ecx + 0x8); /* 0x1006A5AD: mov ecx, dword ptr [ecx + 8] */
L_1006A5B0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1006A5B0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x1006A5B2: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1006A5B4: setne al */
    goto L_1006A623; /* 0x1006A5B7: jmp 0x1006a623 */
L_1006A5B9:
    /* cmp esi, MEM32(edi + 0x30) */ /* 0x1006A5B9: cmp esi, dword ptr [edi + 0x30] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi + 0x30));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006A61D; /* 0x1006A5BC: je 0x1006a61d */
L_1006A5BE:
    eax = MEM32(esi + 0x4); /* 0x1006A5BE: mov eax, dword ptr [esi + 4] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x1006A5C1: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x1006A5C1: shl eax, 4 */
    if (4u) _cf = (((eax) >> 3) & 1u); /* 0x1006A5C4: sar eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 4u);
    /* cmp eax, ecx */ /* 0x1006A5C7: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006A61D; /* 0x1006A5C9: je 0x1006a61d */
L_1006A5CB:
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1006A5CB: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006A5D4; /* 0x1006A5CE: je 0x1006a5d4 */
L_1006A5D0:
    esi = MEM32(esi); /* 0x1006A5D0: mov esi, dword ptr [esi] */
    goto L_1006A5D6; /* 0x1006A5D2: jmp 0x1006a5d6 */
L_1006A5D4:
    esi = ebx; /* 0x1006A5D4: mov esi, ebx */
L_1006A5D6:
    /* test esi, esi */ /* 0x1006A5D6: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006A61D; /* 0x1006A5D8: je 0x1006a61d */
L_1006A5DA:
    RECOMP_BACKEDGE();
    goto L_1006A5B9; /* 0x1006A5DA: jmp 0x1006a5b9 */
L_1006A5DC:
    /* cmp esi, MEM32(edi + 0x30) */ /* 0x1006A5DC: cmp esi, dword ptr [edi + 0x30] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi + 0x30));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006A62A; /* 0x1006A5DF: je 0x1006a62a */
L_1006A5E1:
    PUSH32(esp, ebx); /* 0x1006A5E1: push ebx */
    ecx = esi; /* 0x1006A5E2: mov ecx, esi */
    RECOMP_CALL(sub_10079895); /* 0x1006A5E4: call 0x10079895 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1006A5E9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006A62A; /* 0x1006A5EB: jne 0x1006a62a */
L_1006A5ED:
    eax = MEM32(esi + 0x4); /* 0x1006A5ED: mov eax, dword ptr [esi + 4] */
    if (28u) _cf = (((eax) >> 27) & 1u); /* 0x1006A5F0: sar eax, 0x1c */
    if (28u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 28u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 28u);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(eax, LO8(eax) & 1); /* 0x1006A5F3: and al, 1 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006A5FD; /* 0x1006A5F5: je 0x1006a5fd */
L_1006A5F7:
    /* test MEM8(esi + 0x18), 3 */ /* 0x1006A5F7: test byte ptr [esi + 0x18], 3 */
    _flag_a = (uint32_t)(MEM8(esi + 0x18)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006A648; /* 0x1006A5FB: jne 0x1006a648 */
L_1006A5FD:
    /* test LO8(eax), LO8(eax) */ /* 0x1006A5FD: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006A609; /* 0x1006A5FF: jne 0x1006a609 */
L_1006A601:
    eax = MEM32(esi + 0x64); /* 0x1006A601: mov eax, dword ptr [esi + 0x64] */
    /* cmp MEM32(eax + 0x34), ebx */ /* 0x1006A604: cmp dword ptr [eax + 0x34], ebx */
    _flag_a = (uint32_t)(MEM32(eax + 0x34)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1006A648; /* 0x1006A607: jne 0x1006a648 */
L_1006A609:
    eax = MEM32(esi + 0x4); /* 0x1006A609: mov eax, dword ptr [esi + 4] */
    ecx = 0x0FFFFFFFu; /* 0x1006A60C: mov ecx, 0xfffffff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x1006A611: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ecx */ /* 0x1006A613: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006A61B; /* 0x1006A615: je 0x1006a61b */
L_1006A617:
    esi = MEM32(esi); /* 0x1006A617: mov esi, dword ptr [esi] */
    goto L_1006A61D; /* 0x1006A619: jmp 0x1006a61d */
L_1006A61B:
    esi = ebx; /* 0x1006A61B: mov esi, ebx */
L_1006A61D:
    /* test esi, esi */ /* 0x1006A61D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006A5DC; /* 0x1006A61F: jne 0x1006a5dc */
L_1006A621:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x1006A621: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_1006A623:
    edi = POP32_VAL(esp); /* 0x1006A623: pop edi */
    esi = POP32_VAL(esp); /* 0x1006A624: pop esi */
    ebx = POP32_VAL(esp); /* 0x1006A625: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1006A626: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1006A627: ret 8 */
L_1006A62A:
    /* test esi, esi */ /* 0x1006A62A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006A621; /* 0x1006A62C: je 0x1006a621 */
L_1006A62E:
    /* cmp esi, MEM32(edi + 0x30) */ /* 0x1006A62E: cmp esi, dword ptr [edi + 0x30] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi + 0x30));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006A621; /* 0x1006A631: je 0x1006a621 */
L_1006A633:
    PUSH32(esp, ebx); /* 0x1006A633: push ebx */
    ecx = esi; /* 0x1006A634: mov ecx, esi */
    RECOMP_CALL(sub_10079895); /* 0x1006A636: call 0x10079895 */
    RECOMP_FLAGS_IN();
    /* cmp eax, 2 */ /* 0x1006A63B: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006A621; /* 0x1006A63E: je 0x1006a621 */
L_1006A640:
    ecx = MEM32(eax + 0x8); /* 0x1006A640: mov ecx, dword ptr [eax + 8] */
    RECOMP_BACKEDGE();
    goto L_1006A5B0; /* 0x1006A643: jmp 0x1006a5b0 */
L_1006A648:
    SET_LO8(eax, 1); /* 0x1006A648: mov al, 1 */
    RECOMP_BACKEDGE();
    goto L_1006A623; /* 0x1006A64A: jmp 0x1006a623 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1006A64C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006A64Cu);

L_1006A64C:
    PUSH32(esp, esi); /* 0x1006A64C: push esi */
    esi = ecx; /* 0x1006A64D: mov esi, ecx */
    RECOMP_CALL(sub_10014872); /* 0x1006A64F: call 0x10014872 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1006A654: mov ecx, eax */
    RECOMP_CALL(sub_1006A414); /* 0x1006A656: call 0x1006a414 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = eax; /* 0x1006A65B: mov dword ptr [esi], eax */
    eax = esi; /* 0x1006A65D: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1006A65F: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006A660: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006A661(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006A661u);

L_1006A661:
    RECOMP_CALL(sub_10014872); /* 0x1006A661: call 0x10014872 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(eax + 0x8C)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x8C) = MEM32(eax + 0x8C) - 1; /* 0x1006A666: dec dword ptr [eax + 0x8c] */
    _flag_k = FK_DEC;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006A66C: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006A66D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006A66Du);

L_1006A66D:
    PUSH32(esp, esi); /* 0x1006A66D: push esi */
    esi = ecx; /* 0x1006A66E: mov esi, ecx */
    RECOMP_CALL(sub_10014872); /* 0x1006A670: call 0x10014872 */
    RECOMP_FLAGS_IN();
    edx = MEM32(esi); /* 0x1006A675: mov edx, dword ptr [esi] */
    ecx = eax; /* 0x1006A677: mov ecx, eax */
    PUSH32(esp, MEM32(edx + 0x4)); /* 0x1006A679: push dword ptr [edx + 4] */
    PUSH32(esp, MEM32(eax + 0x34)); /* 0x1006A67C: push dword ptr [eax + 0x34] */
    RECOMP_CALL(sub_1006A559); /* 0x1006A67F: call 0x1006a559 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1006A684: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006A691; /* 0x1006A686: jne 0x1006a691 */
L_1006A688:
    ecx = MEM32(esi); /* 0x1006A688: mov ecx, dword ptr [esi] */
    _flag_a = (uint32_t)((edx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edx | 0xFFFFFFFFu));
    edx = edx | 0xFFFFFFFFu; /* 0x1006A68A: or edx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(ecx), _sum = MEM32(ecx) + edx; edx = _old; MEM32(ecx) = _sum; } /* 0x1006A68D: lock xadd dword ptr [ecx], edx */
    _flag_k = FK_ADD;
L_1006A691:
    esi = POP32_VAL(esp); /* 0x1006A691: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006A692: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006A693(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006A693u);

L_1006A693:
    RECOMP_CALL(sub_10014872); /* 0x1006A693: call 0x10014872 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x40u; /* 0x1006A698: add eax, 0x40 */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006A69B: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006A69C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006A69Cu);

L_1006A69C:
    PUSH32(esp, ebp); /* 0x1006A69C: push ebp */
    ebp = esp; /* 0x1006A69D: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1006A69F: push ecx */
    PUSH32(esp, ebx); /* 0x1006A6A0: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1006A6A1: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1006A6A4: push esi */
    PUSH32(esp, edi); /* 0x1006A6A5: push edi */
    edi = ecx; /* 0x1006A6A6: mov edi, ecx */
    ecx = ebx; /* 0x1006A6A8: mov ecx, ebx */
    edx = MEM32(edi); /* 0x1006A6AA: mov edx, dword ptr [edi] */
    RECOMP_CALL(sub_1002614A); /* 0x1006A6AC: call 0x1002614a */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi + 0x8); /* 0x1006A6B1: mov ecx, dword ptr [edi + 8] */
    MEM32(ebp + 0x8) = eax; /* 0x1006A6B4: mov dword ptr [ebp + 8], eax */
    edx = MEM32(ecx + eax * 4); /* 0x1006A6B7: mov edx, dword ptr [ecx + eax*4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1006A6BA: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = ecx; /* 0x1006A6BC: mov esi, ecx */
    /* test edx, edx */ /* 0x1006A6BE: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006A6D1; /* 0x1006A6C0: je 0x1006a6d1 */
L_1006A6C2:
    eax = MEM32(ebx); /* 0x1006A6C2: mov eax, dword ptr [ebx] */
L_1006A6C4:
    /* cmp MEM32(edx + 0x4), eax */ /* 0x1006A6C4: cmp dword ptr [edx + 4], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x4)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006A6EB; /* 0x1006A6C7: je 0x1006a6eb */
L_1006A6C9:
    esi = edx; /* 0x1006A6C9: mov esi, edx */
    edx = MEM32(edx); /* 0x1006A6CB: mov edx, dword ptr [edx] */
    /* test edx, edx */ /* 0x1006A6CD: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006A6C4; /* 0x1006A6CF: jne 0x1006a6c4 */
L_1006A6D1:
    edx = ecx; /* 0x1006A6D1: mov edx, ecx */
L_1006A6D3:
    edi = POP32_VAL(esp); /* 0x1006A6D3: pop edi */
    esi = POP32_VAL(esp); /* 0x1006A6D4: pop esi */
    ebx = POP32_VAL(esp); /* 0x1006A6D5: pop ebx */
    /* test edx, edx */ /* 0x1006A6D6: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006A6E3; /* 0x1006A6D8: je 0x1006a6e3 */
L_1006A6DA:
    PUSH32(esp, edx); /* 0x1006A6DA: push edx */
    RECOMP_CALL(sub_1000ECE0); /* 0x1006A6DB: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1006A6E0: pop ecx */
    SET_LO8(ecx, 1); /* 0x1006A6E1: mov cl, 1 */
L_1006A6E3:
    SET_LO8(eax, LO8(ecx)); /* 0x1006A6E3: mov al, cl */
    esp = ebp; /* 0x1006A6E5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1006A6E7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1006A6E8: ret 4 */
L_1006A6EB:
    eax = MEM32(edx); /* 0x1006A6EB: mov eax, dword ptr [edx] */
    /* test esi, esi */ /* 0x1006A6ED: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006A6FC; /* 0x1006A6EF: jne 0x1006a6fc */
L_1006A6F1:
    esi = MEM32(ebp + 0x8); /* 0x1006A6F1: mov esi, dword ptr [ebp + 8] */
    ebx = MEM32(edi + 0x8); /* 0x1006A6F4: mov ebx, dword ptr [edi + 8] */
    MEM32(ebx + esi * 4) = eax; /* 0x1006A6F7: mov dword ptr [ebx + esi*4], eax */
    goto L_1006A6FE; /* 0x1006A6FA: jmp 0x1006a6fe */
L_1006A6FC:
    MEM32(esi) = eax; /* 0x1006A6FC: mov dword ptr [esi], eax */
L_1006A6FE:
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x4) = MEM32(edi + 0x4) - 1; /* 0x1006A6FE: dec dword ptr [edi + 4] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    goto L_1006A6D3; /* 0x1006A701: jmp 0x1006a6d3 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1006A703(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006A703u);

L_1006A703:
    PUSH32(esp, edi); /* 0x1006A703: push edi */
    edi = ecx; /* 0x1006A704: mov edi, ecx */
    /* cmp MEM32(edi + 0x4), 0 */ /* 0x1006A706: cmp dword ptr [edi + 4], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1006A74B; /* 0x1006A70A: jle 0x1006a74b */
L_1006A70C:
    PUSH32(esp, ebx); /* 0x1006A70C: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1006A70D: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi), ebx */ /* 0x1006A70F: cmp dword ptr [edi], ebx */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1006A733; /* 0x1006A711: jle 0x1006a733 */
L_1006A713:
    PUSH32(esp, esi); /* 0x1006A713: push esi */
L_1006A714:
    eax = MEM32(edi + 0x8); /* 0x1006A714: mov eax, dword ptr [edi + 8] */
    eax = MEM32(eax + ebx * 4); /* 0x1006A717: mov eax, dword ptr [eax + ebx*4] */
    /* test eax, eax */ /* 0x1006A71A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006A72D; /* 0x1006A71C: je 0x1006a72d */
L_1006A71E:
    esi = MEM32(eax); /* 0x1006A71E: mov esi, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1006A720: push eax */
    RECOMP_CALL(sub_1000ECE0); /* 0x1006A721: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1006A726: mov eax, esi */
    ecx = POP32_VAL(esp); /* 0x1006A728: pop ecx */
    /* test esi, esi */ /* 0x1006A729: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006A71E; /* 0x1006A72B: jne 0x1006a71e */
L_1006A72D:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1006A72D: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, MEM32(edi) */ /* 0x1006A72E: cmp ebx, dword ptr [edi] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1006A714; /* 0x1006A730: jl 0x1006a714 */
L_1006A732:
    esi = POP32_VAL(esp); /* 0x1006A732: pop esi */
L_1006A733:
    eax = MEM32(edi); /* 0x1006A733: mov eax, dword ptr [edi] */
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(edi + 0x4) = MEM32(edi + 0x4) & 0; /* 0x1006A735: and dword ptr [edi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1006A739: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1006A739: shl eax, 2 */
    PUSH32(esp, eax); /* 0x1006A73C: push eax */
    PUSH32(esp, 0); /* 0x1006A73D: push 0 */
    PUSH32(esp, MEM32(edi + 0x8)); /* 0x1006A73F: push dword ptr [edi + 8] */
    RECOMP_CALL(sub_10011533); /* 0x1006A742: call 0x10011533 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1006A747: add esp, 0xc */
    _flag_k = FK_ADD;
    ebx = POP32_VAL(esp); /* 0x1006A74A: pop ebx */
L_1006A74B:
    edi = POP32_VAL(esp); /* 0x1006A74B: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006A74C: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006A760(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006A760u);

L_1006A760:
    PUSH32(esp, ebp); /* 0x1006A760: push ebp */
    ebp = esp; /* 0x1006A761: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x1006A763: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x24u; /* 0x1006A766: sub esp, 0x24 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1006A769: push ebx */
    PUSH32(esp, esi); /* 0x1006A76A: push esi */
    PUSH32(esp, edi); /* 0x1006A76B: push edi */
    esi = ecx; /* 0x1006A76C: mov esi, ecx */
    MEM8(esp + 0x13) = (uint8_t)(0); /* 0x1006A76E: mov byte ptr [esp + 0x13], 0 */
    PUSH32(esp, 4); /* 0x1006A773: push 4 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1006A775: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = POP32_VAL(esp); /* 0x1006A777: pop eax */
    edx = MEM32(esi + 0x30); /* 0x1006A778: mov edx, dword ptr [esi + 0x30] */
    MEM32(esp + 0x14) = edx; /* 0x1006A77B: mov dword ptr [esp + 0x14], edx */
L_1006A77F:
    ebx = edx + 0x8; /* 0x1006A77F: lea ebx, [edx + 8] */
    /* cmp MEM32(ebx), 0xFFFFFFFFu */ /* 0x1006A782: cmp dword ptr [ebx], -1 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esp + 0x18) = ebx; /* 0x1006A785: mov dword ptr [esp + 0x18], ebx */
    if (CMP_L(_flag_a, _flag_b)) goto L_1006A7CA; /* 0x1006A789: jl 0x1006a7ca */
L_1006A78B:
    ebx = MEM32(edx); /* 0x1006A78B: mov ebx, dword ptr [edx] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1006A78D: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x28), edx */ /* 0x1006A78F: cmp dword ptr [esi + 0x28], edx */
    _flag_a = (uint32_t)(MEM32(esi + 0x28)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1006A7C2; /* 0x1006A792: jle 0x1006a7c2 */
L_1006A794:
    /* cmp MEM32(ebx), 0 */ /* 0x1006A794: cmp dword ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1006A7BA; /* 0x1006A797: jne 0x1006a7ba */
L_1006A799:
    ecx = MEM32(ebp + 0x8); /* 0x1006A799: mov ecx, dword ptr [ebp + 8] */
    eax = edx + edi; /* 0x1006A79C: lea eax, [edx + edi] */
    MEM32(ecx + 0x44) = eax; /* 0x1006A79F: mov dword ptr [ecx + 0x44], eax */
    eax = MEM32(esi + 0x40); /* 0x1006A7A2: mov eax, dword ptr [esi + 0x40] */
    MEM32(esp + 0x1C) = eax; /* 0x1006A7A5: mov dword ptr [esp + 0x1c], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1006A7A9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(ebx); if (eax == _d) { MEM32(ebx) = ecx; } else { eax = _d; } } /* 0x1006A7AB: lock cmpxchg dword ptr [ebx], ecx */
    _flag_k = FK_CMP;
    /* test eax, eax */ /* 0x1006A7AF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006A84B; /* 0x1006A7B1: je 0x1006a84b */
L_1006A7B7:
    PUSH32(esp, 4); /* 0x1006A7B7: push 4 */
    eax = POP32_VAL(esp); /* 0x1006A7B9: pop eax */
L_1006A7BA:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1006A7BA: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x1006A7BB: add ebx, eax */
    _flag_k = FK_ADD;
    /* cmp edx, MEM32(esi + 0x28) */ /* 0x1006A7BD: cmp edx, dword ptr [esi + 0x28] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0x28));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1006A794; /* 0x1006A7C0: jl 0x1006a794 */
L_1006A7C2:
    ebx = MEM32(esp + 0x18); /* 0x1006A7C2: mov ebx, dword ptr [esp + 0x18] */
L_1006A7C6:
    edx = MEM32(esp + 0x14); /* 0x1006A7C6: mov edx, dword ptr [esp + 0x14] */
L_1006A7CA:
    /* cmp MEM8(esp + 0x13), 0 */ /* 0x1006A7CA: cmp byte ptr [esp + 0x13], 0 */
    _flag_a = (uint32_t)(MEM8(esp + 0x13)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1006A8B1; /* 0x1006A7CF: jne 0x1006a8b1 */
L_1006A7D5:
    PUSH32(esp, 0xFFFFFFFEu); /* 0x1006A7D5: push -2 */
    ecx = POP32_VAL(esp); /* 0x1006A7D7: pop ecx */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1006A7D8: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(ebx); if (eax == _d) { MEM32(ebx) = ecx; } else { eax = _d; } } /* 0x1006A7DB: lock cmpxchg dword ptr [ebx], ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x28));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(esi + 0x28); /* 0x1006A7DF: add edi, dword ptr [esi + 0x28] */
    _flag_k = FK_ADD;
    ebx = edx + 0x4; /* 0x1006A7E2: lea ebx, [edx + 4] */
    /* cmp MEM32(ebx), 0 */ /* 0x1006A7E5: cmp dword ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1006A88D; /* 0x1006A7E8: jne 0x1006a88d */
L_1006A7EE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1006A7EE: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1006A7F0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1006A7F2: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(ebx); if (eax == _d) { MEM32(ebx) = ecx; } else { eax = _d; } } /* 0x1006A7F3: lock cmpxchg dword ptr [ebx], ecx */
    _flag_k = FK_CMP;
    /* test eax, eax */ /* 0x1006A7F7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006A88D; /* 0x1006A7F9: jne 0x1006a88d */
L_1006A7FF:
    eax = MEM32(esi + 0x28); /* 0x1006A7FF: mov eax, dword ptr [esi + 0x28] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1006A802: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x1006A804: push 4 */
    edx = POP32_VAL(esp); /* 0x1006A806: pop edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x1006A807: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1006A809: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1006A80C: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1006A80E: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1006A810: push ecx */
    RECOMP_CALL(sub_10011683); /* 0x1006A811: call 0x10011683 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1006A816: mov ecx, eax */
    eax = MEM32(esi + 0x28); /* 0x1006A818: mov eax, dword ptr [esi + 0x28] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1006A81B: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1006A81B: shl eax, 2 */
    PUSH32(esp, eax); /* 0x1006A81E: push eax */
    PUSH32(esp, 0); /* 0x1006A81F: push 0 */
    PUSH32(esp, ecx); /* 0x1006A821: push ecx */
    MEM32(esp + 0x2C) = ecx; /* 0x1006A822: mov dword ptr [esp + 0x2c], ecx */
    RECOMP_CALL(sub_10011533); /* 0x1006A826: call 0x10011533 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xCu); /* 0x1006A82B: push 0xc */
    RECOMP_CALL(sub_1000EE11); /* 0x1006A82D: call 0x1000ee11 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1006A832: mov ecx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1006A834: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test ecx, ecx */ /* 0x1006A837: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006A874; /* 0x1006A839: je 0x1006a874 */
L_1006A83B:
    eax = MEM32(esp + 0x1C); /* 0x1006A83B: mov eax, dword ptr [esp + 0x1c] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) & 0; /* 0x1006A83F: and dword ptr [ecx + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ecx + 0x8) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ecx + 0x8) | 0xFFFFFFFFu));
    MEM32(ecx + 0x8) = MEM32(ecx + 0x8) | 0xFFFFFFFFu; /* 0x1006A843: or dword ptr [ecx + 8], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx) = eax; /* 0x1006A847: mov dword ptr [ecx], eax */
    goto L_1006A876; /* 0x1006A849: jmp 0x1006a876 */
L_1006A84B:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edx; /* 0x1006A84B: add edi, edx */
    _flag_k = FK_ADD;
    MEM8(esp + 0x13) = (uint8_t)(1); /* 0x1006A84D: mov byte ptr [esp + 0x13], 1 */
    /* cmp edi, MEM32(esp + 0x1C) */ /* 0x1006A852: cmp edi, dword ptr [esp + 0x1c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esp + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1006A862; /* 0x1006A856: jl 0x1006a862 */
L_1006A858:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1006A858: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi + 0x40; /* 0x1006A85A: lea eax, [esi + 0x40] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1006A85D: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + ecx; ecx = _old; MEM32(eax) = _sum; } /* 0x1006A85E: lock xadd dword ptr [eax], ecx */
    _flag_k = FK_ADD;
L_1006A862:
    ebx = MEM32(esp + 0x18); /* 0x1006A862: mov ebx, dword ptr [esp + 0x18] */
    _flag_a = (uint32_t)((ecx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ecx | 0xFFFFFFFFu));
    ecx = ecx | 0xFFFFFFFFu; /* 0x1006A866: or ecx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edx; /* 0x1006A869: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(ebx); if (eax == _d) { MEM32(ebx) = ecx; } else { eax = _d; } } /* 0x1006A86B: lock cmpxchg dword ptr [ebx], ecx */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    goto L_1006A7C6; /* 0x1006A86F: jmp 0x1006a7c6 */
L_1006A874:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1006A874: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1006A876:
    edx = MEM32(esi + 0x3C); /* 0x1006A876: mov edx, dword ptr [esi + 0x3c] */
    /* cmp edx, MEM32(esi + 0x38) */ /* 0x1006A879: cmp edx, dword ptr [esi + 0x38] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0x38));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1006A887; /* 0x1006A87C: jge 0x1006a887 */
L_1006A87E:
    eax = MEM32(esi + 0x34); /* 0x1006A87E: mov eax, dword ptr [esi + 0x34] */
    MEM32(eax + edx * 4) = ecx; /* 0x1006A881: mov dword ptr [eax + edx*4], ecx */
    _flag_a = (uint32_t)(MEM32(esi + 0x3C)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x3C) = MEM32(esi + 0x3C) + 1; /* 0x1006A884: inc dword ptr [esi + 0x3c] */
    _flag_k = FK_INC;
L_1006A887:
    { uint32_t _tmp = MEM32(ebx); /* 0x1006A887: xchg dword ptr [ebx], ecx */
      MEM32(ebx) = ecx;
      ecx = _tmp; }
    edx = MEM32(esp + 0x14); /* 0x1006A889: mov edx, dword ptr [esp + 0x14] */
L_1006A88D:
    /* cmp MEM32(ebx), 1 */ /* 0x1006A88D: cmp dword ptr [ebx], 1 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1006A8B1; /* 0x1006A890: jne 0x1006a8b1 */
L_1006A892:
    _flag_a = (uint32_t)(MEM32(esp + 0x28)); _flag_b = (uint32_t)(0);
    MEM32(esp + 0x28) = MEM32(esp + 0x28) & 0; /* 0x1006A892: and dword ptr [esp + 0x28], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x2C) = 0x1007A46Cu; /* 0x1006A897: mov dword ptr [esp + 0x2c], 0x1007a46c */
L_1006A89F:
    ecx = esp + 0x20; /* 0x1006A89F: lea ecx, [esp + 0x20] */
    RECOMP_CALL(sub_10068D76); /* 0x1006A8A3: call 0x10068d76 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebx), 1 */ /* 0x1006A8A8: cmp dword ptr [ebx], 1 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006A89F; /* 0x1006A8AB: je 0x1006a89f */
L_1006A8AD:
    edx = MEM32(esp + 0x14); /* 0x1006A8AD: mov edx, dword ptr [esp + 0x14] */
L_1006A8B1:
    /* cmp MEM8(esp + 0x13), 0 */ /* 0x1006A8B1: cmp byte ptr [esp + 0x13], 0 */
    _flag_a = (uint32_t)(MEM8(esp + 0x13)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    edx = MEM32(edx + 0x4); /* 0x1006A8B6: mov edx, dword ptr [edx + 4] */
    PUSH32(esp, 4); /* 0x1006A8B9: push 4 */
    MEM32(esp + 0x18) = edx; /* 0x1006A8BB: mov dword ptr [esp + 0x18], edx */
    eax = POP32_VAL(esp); /* 0x1006A8BF: pop eax */
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006A77F; /* 0x1006A8C0: je 0x1006a77f */
L_1006A8C6:
    eax = edi; /* 0x1006A8C6: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1006A8C8: pop edi */
    esi = POP32_VAL(esp); /* 0x1006A8C9: pop esi */
    ebx = POP32_VAL(esp); /* 0x1006A8CA: pop ebx */
    esp = ebp; /* 0x1006A8CB: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1006A8CD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1006A8CE: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1006A8DE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006A8DEu);

L_1006A8DE:
    PUSH32(esp, ebx); /* 0x1006A8DE: push ebx */
    PUSH32(esp, esi); /* 0x1006A8DF: push esi */
    esi = ecx; /* 0x1006A8E0: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1006A8E2: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1006A8E4:
    eax = MEM32(esi + 0x8); /* 0x1006A8E4: mov eax, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x1006A8E7: sub eax, ebx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1006A8FD; /* 0x1006A8E9: jne 0x1006a8fd */
L_1006A8EB:
    PUSH32(esp, MEM32(0x100E066C)); /* 0x1006A8EB: push dword ptr [0x100e066c] */
    ecx = esi; /* 0x1006A8F1: mov ecx, esi */
    MEM32(esi + 0x8) = ebx; /* 0x1006A8F3: mov dword ptr [esi + 8], ebx */
    RECOMP_CALL(sub_1006AF24); /* 0x1006A8F6: call 0x1006af24 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1006A8E4; /* 0x1006A8FB: jmp 0x1006a8e4 */
L_1006A8FD:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1006A8FD: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1006A933; /* 0x1006A8FE: je 0x1006a933 */
L_1006A900:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1006A900: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1006A91F; /* 0x1006A901: je 0x1006a91f */
L_1006A903:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1006A903: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1006A90B; /* 0x1006A904: je 0x1006a90b */
L_1006A906:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1006A906: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1006A91B; /* 0x1006A907: jne 0x1006a91b */
L_1006A909:
    goto L_1006A92D; /* 0x1006A909: jmp 0x1006a92d */
L_1006A90B:
    PUSH32(esp, MEM32(0x100E066C)); /* 0x1006A90B: push dword ptr [0x100e066c] */
    ecx = esi; /* 0x1006A911: mov ecx, esi */
    MEM32(esi + 0x8) = ebx; /* 0x1006A913: mov dword ptr [esi + 8], ebx */
    RECOMP_CALL(sub_1006AF24); /* 0x1006A916: call 0x1006af24 */
    RECOMP_FLAGS_IN();
L_1006A91B:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x1006A91B: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_1006A948; /* 0x1006A91D: jmp 0x1006a948 */
L_1006A91F:
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) - 1; /* 0x1006A91F: dec dword ptr [esi + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1006A92B; /* 0x1006A922: jne 0x1006a92b */
L_1006A924:
    MEM32(esi + 0x8) = 3; /* 0x1006A924: mov dword ptr [esi + 8], 3 */
L_1006A92B:
    SET_LO8(ebx, 1); /* 0x1006A92B: mov bl, 1 */
L_1006A92D:
    /* pause */ /* 0x1006A92D: pause  */
    SET_LO8(eax, LO8(ebx)); /* 0x1006A92F: mov al, bl */
    goto L_1006A948; /* 0x1006A931: jmp 0x1006a948 */
L_1006A933:
    /* pause */ /* 0x1006A933: pause  */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(1);
    MEM32(esi) = MEM32(esi) - 1; /* 0x1006A935: dec dword ptr [esi] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1006A946; /* 0x1006A937: jne 0x1006a946 */
L_1006A939:
    eax = MEM32(esi + 0x4); /* 0x1006A939: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1006A93C: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1006A93E: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 3; /* 0x1006A940: add eax, 3 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x8) = eax; /* 0x1006A943: mov dword ptr [esi + 8], eax */
L_1006A946:
    SET_LO8(eax, 1); /* 0x1006A946: mov al, 1 */
L_1006A948:
    esi = POP32_VAL(esp); /* 0x1006A948: pop esi */
    ebx = POP32_VAL(esp); /* 0x1006A949: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006A94A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006A94B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006A94Bu);

L_1006A94B:
    PUSH32(esp, ebp); /* 0x1006A94B: push ebp */
    ebp = esp; /* 0x1006A94C: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x1006A94E: sub esp, 0x28 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1006A951: push ebx */
    PUSH32(esp, esi); /* 0x1006A952: push esi */
    PUSH32(esp, edi); /* 0x1006A953: push edi */
    edi = ecx; /* 0x1006A954: mov edi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1006A956: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x1006A958: push 4 */
    edx = POP32_VAL(esp); /* 0x1006A95A: pop edx */
    eax = MEM32(edi + 0x8); /* 0x1006A95B: mov eax, dword ptr [edi + 8] */
    ebx = eax * 2 + 0x2; /* 0x1006A95E: lea ebx, [eax*2 + 2] */
    eax = ebx; /* 0x1006A965: mov eax, ebx */
    MEM32(ebp + (-0x18)) = ebx; /* 0x1006A967: mov dword ptr [ebp - 0x18], ebx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x1006A96A: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1006A96C: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1006A96F: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1006A971: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1006A973: push ecx */
    RECOMP_CALL(sub_10011683); /* 0x1006A974: call 0x10011683 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1006A979: pop ecx */
    MEM32(ebp + (-0x10)) = eax; /* 0x1006A97A: mov dword ptr [ebp - 0x10], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1006A97D: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(edi + 0xC); /* 0x1006A97F: mov eax, dword ptr [edi + 0xc] */
    MEM32(ebp + (-0x20)) = eax; /* 0x1006A982: mov dword ptr [ebp - 0x20], eax */
    eax = ebx; /* 0x1006A985: mov eax, ebx */
    PUSH32(esp, 8); /* 0x1006A987: push 8 */
    esi = POP32_VAL(esp); /* 0x1006A989: pop esi */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(esi); /* 0x1006A98A: mul esi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1006A98C: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1006A98F: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1006A991: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1006A993: push ecx */
    RECOMP_CALL(sub_10011683); /* 0x1006A994: call 0x10011683 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x14)) = eax; /* 0x1006A999: mov dword ptr [ebp - 0x14], eax */
    ecx = POP32_VAL(esp); /* 0x1006A99C: pop ecx */
    /* test eax, eax */ /* 0x1006A99D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006A9B8; /* 0x1006A99F: je 0x1006a9b8 */
L_1006A9A1:
    edx = ebx + (-0x1); /* 0x1006A9A1: lea edx, [ebx - 1] */
    ecx = eax; /* 0x1006A9A4: mov ecx, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1006A9A6: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edx, edx */ /* 0x1006A9A8: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1006A9BD; /* 0x1006A9AA: js 0x1006a9bd */
L_1006A9AC:
    MEM32(ecx) = ebx; /* 0x1006A9AC: mov dword ptr [ecx], ebx */
    MEM32(ecx + 0x4) = ebx; /* 0x1006A9AE: mov dword ptr [ecx + 4], ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1006A9B1: add ecx, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1006A9B3: dec edx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_1006A9BD; /* 0x1006A9B4: js 0x1006a9bd */
L_1006A9B6:
    RECOMP_BACKEDGE();
    goto L_1006A9AC; /* 0x1006A9B6: jmp 0x1006a9ac */
L_1006A9B8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1006A9B8: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = ebx; /* 0x1006A9BA: mov dword ptr [ebp - 0x14], ebx */
L_1006A9BD:
    eax = MEM32(edi + 0x10); /* 0x1006A9BD: mov eax, dword ptr [edi + 0x10] */
    esi = MEM32(edi + 0x14); /* 0x1006A9C0: mov esi, dword ptr [edi + 0x14] */
    MEM32(ebp + (-0x24)) = eax; /* 0x1006A9C3: mov dword ptr [ebp - 0x24], eax */
    MEM32(ebp + (-0x1C)) = esi; /* 0x1006A9C6: mov dword ptr [ebp - 0x1c], esi */
    RECOMP_CALL(sub_10023AF4); /* 0x1006A9C9: call 0x10023af4 */
    RECOMP_FLAGS_IN();
    ecx = esi; /* 0x1006A9CE: mov ecx, esi */
    RECOMP_CALL(sub_10023D1E); /* 0x1006A9D0: call 0x10023d1e */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x4); /* 0x1006A9D5: mov eax, dword ptr [edi + 4] */
    edx = ebx; /* 0x1006A9D8: mov edx, ebx */
    eax = MEM32(edi); /* 0x1006A9DA: mov eax, dword ptr [edi] */
    ecx = MEM32(edi + 0x4); /* 0x1006A9DC: mov ecx, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(edi); /* 0x1006A9DF: sub ecx, dword ptr [edi] */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xC)) = eax; /* 0x1006A9E1: mov dword ptr [ebp - 0xc], eax */
    MEM32(ebp + (-0x4)) = ecx; /* 0x1006A9E4: mov dword ptr [ebp - 4], ecx */
    MEM32(ebp + (-0x8)) = edx; /* 0x1006A9E7: mov dword ptr [ebp - 8], edx */
    /* test ecx, ecx */ /* 0x1006A9EA: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1006AA33; /* 0x1006A9EC: jle 0x1006aa33 */
L_1006A9EE:
    ebx = MEM32(ebp + (-0x14)); /* 0x1006A9EE: mov ebx, dword ptr [ebp - 0x14] */
L_1006A9F1:
    esi = MEM32(ebp + (-0x8)); /* 0x1006A9F1: mov esi, dword ptr [ebp - 8] */
    ecx = eax; /* 0x1006A9F4: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0x8));
    ecx = ecx & MEM32(edi + 0x8); /* 0x1006A9F6: and ecx, dword ptr [edi + 8] */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(edi + 0xC); /* 0x1006A9F9: mov eax, dword ptr [edi + 0xc] */
    eax = MEM32(eax + ecx * 4); /* 0x1006A9FC: mov eax, dword ptr [eax + ecx*4] */
    ecx = MEM32(ebp + (-0x10)); /* 0x1006A9FF: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(ecx + edx * 4) = eax; /* 0x1006AA02: mov dword ptr [ecx + edx*4], eax */
    edx = MEM32(ebp + (-0xC)); /* 0x1006AA05: mov edx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(edi + 0x8));
    edx = edx & MEM32(edi + 0x8); /* 0x1006AA08: and edx, dword ptr [edi + 8] */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(edi + 0x10); /* 0x1006AA0B: mov ecx, dword ptr [edi + 0x10] */
    eax = MEM32(ecx + edx * 8); /* 0x1006AA0E: mov eax, dword ptr [ecx + edx*8] */
    MEM32(ebx + esi * 8) = eax; /* 0x1006AA11: mov dword ptr [ebx + esi*8], eax */
    eax = MEM32(ecx + edx * 8 + 0x4); /* 0x1006AA14: mov eax, dword ptr [ecx + edx*8 + 4] */
    edx = esi; /* 0x1006AA18: mov edx, esi */
    MEM32(ebx + edx * 8 + 0x4) = eax; /* 0x1006AA1A: mov dword ptr [ebx + edx*8 + 4], eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1006AA1E: inc edx */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0xC)); /* 0x1006AA1F: mov eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1006AA22: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x8)) = edx; /* 0x1006AA23: mov dword ptr [ebp - 8], edx */
    MEM32(ebp + (-0xC)) = eax; /* 0x1006AA26: mov dword ptr [ebp - 0xc], eax */
    /* cmp edx, MEM32(ebp + (-0x4)) */ /* 0x1006AA29: cmp edx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1006A9F1; /* 0x1006AA2C: jl 0x1006a9f1 */
L_1006AA2E:
    ecx = MEM32(ebp + (-0x4)); /* 0x1006AA2E: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1006AA31: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1006AA33:
    esi = MEM32(ebp + (-0x18)); /* 0x1006AA33: mov esi, dword ptr [ebp - 0x18] */
    eax = esi; /* 0x1006AA36: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1006AA38: sub eax, ecx */
    _flag_k = FK_CMP;
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1006AA3A: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1006AA3A: shl eax, 2 */
    PUSH32(esp, eax); /* 0x1006AA3D: push eax */
    eax = MEM32(ebp + (-0x10)); /* 0x1006AA3E: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, ebx); /* 0x1006AA41: push ebx */
    eax = eax + ecx * 4; /* 0x1006AA42: lea eax, [eax + ecx*4] */
    PUSH32(esp, eax); /* 0x1006AA45: push eax */
    RECOMP_CALL(sub_10011533); /* 0x1006AA46: call 0x10011533 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x10)); /* 0x1006AA4B: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1006AA4E: add esp, 0xc */
    _flag_k = FK_ADD;
    edx = MEM32(ebp + (-0x4)); /* 0x1006AA51: mov edx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1006AA54: dec esi */
    _flag_k = FK_DEC;
    MEM32(edi + 0xC) = eax; /* 0x1006AA55: mov dword ptr [edi + 0xc], eax */
    eax = MEM32(ebp + (-0x14)); /* 0x1006AA58: mov eax, dword ptr [ebp - 0x14] */
    MEM32(edi + 0x10) = eax; /* 0x1006AA5B: mov dword ptr [edi + 0x10], eax */
    eax = MEM32(ebp + 0xC); /* 0x1006AA5E: mov eax, dword ptr [ebp + 0xc] */
    MEM32(edi) = ebx; /* 0x1006AA61: mov dword ptr [edi], ebx */
    MEM32(edi + 0x8) = esi; /* 0x1006AA63: mov dword ptr [edi + 8], esi */
    /* test eax, eax */ /* 0x1006AA66: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006AA7F; /* 0x1006AA68: je 0x1006aa7f */
L_1006AA6A:
    ecx = MEM32(edi + 0x10); /* 0x1006AA6A: mov ecx, dword ptr [edi + 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    esi = esi & edx; /* 0x1006AA6D: and esi, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ebp + 0x8) | 1)); _flag_b = (uint32_t)((MEM32(ebp + 0x8) | 1));
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) | 1; /* 0x1006AA6F: or dword ptr [ebp + 8], 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx + esi * 8) = eax; /* 0x1006AA73: mov dword ptr [ecx + esi*8], eax */
    eax = MEM32(ebp + 0x10); /* 0x1006AA76: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ecx + esi * 8 + 0x4) = eax; /* 0x1006AA79: mov dword ptr [ecx + esi*8 + 4], eax */
    goto L_1006AA85; /* 0x1006AA7D: jmp 0x1006aa85 */
L_1006AA7F:
    eax = MEM32(ebp + 0x8); /* 0x1006AA7F: mov eax, dword ptr [ebp + 8] */
    MEM32(ebp + 0x8) = eax; /* 0x1006AA82: mov dword ptr [ebp + 8], eax */
L_1006AA85:
    eax = MEM32(edi + 0xC); /* 0x1006AA85: mov eax, dword ptr [edi + 0xc] */
    ecx = edx; /* 0x1006AA88: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0x8));
    ecx = ecx & MEM32(edi + 0x8); /* 0x1006AA8A: and ecx, dword ptr [edi + 8] */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ebp + 0x8); /* 0x1006AA8D: mov esi, dword ptr [ebp + 8] */
    MEM32(eax + ecx * 4) = esi; /* 0x1006AA90: mov dword ptr [eax + ecx*4], esi */
    eax = edx + 0x1; /* 0x1006AA93: lea eax, [edx + 1] */
    esi = MEM32(ebp + (-0x1C)); /* 0x1006AA96: mov esi, dword ptr [ebp - 0x1c] */
    MEM32(edi + 0x4) = eax; /* 0x1006AA99: mov dword ptr [edi + 4], eax */
    MEM32(esi) = ebx; /* 0x1006AA9C: mov dword ptr [esi], ebx */
    RECOMP_CALL(sub_10023AF4); /* 0x1006AA9E: call 0x10023af4 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x1006AAA3: push dword ptr [ebp - 0x20] */
    RECOMP_CALL(sub_1000ECE0); /* 0x1006AAA6: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1006AAAB: pop ecx */
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x1006AAAC: push dword ptr [ebp - 0x24] */
    RECOMP_CALL(sub_1000ECE0); /* 0x1006AAAF: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1006AAB4: pop ecx */
    edi = POP32_VAL(esp); /* 0x1006AAB5: pop edi */
    esi = POP32_VAL(esp); /* 0x1006AAB6: pop esi */
    ebx = POP32_VAL(esp); /* 0x1006AAB7: pop ebx */
    esp = ebp; /* 0x1006AAB8: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1006AABA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1006AABB: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1006AABE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006AABEu);

L_1006AABE:
    PUSH32(esp, ebx); /* 0x1006AABE: push ebx */
    edx = ecx; /* 0x1006AABF: mov edx, ecx */
    PUSH32(esp, esi); /* 0x1006AAC1: push esi */
    PUSH32(esp, edi); /* 0x1006AAC2: push edi */
    edi = edx + 0x4; /* 0x1006AAC3: lea edi, [edx + 4] */
L_1006AAC6:
    esi = MEM32(edi); /* 0x1006AAC6: mov esi, dword ptr [edi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1006AAC8: dec esi */
    _flag_k = FK_DEC;
    eax = esi; /* 0x1006AAC9: mov eax, esi */
    { uint32_t _tmp = MEM32(edi); /* 0x1006AACB: xchg dword ptr [edi], eax */
      MEM32(edi) = eax;
      eax = _tmp; }
    /* cmp MEM32(edx), esi */ /* 0x1006AACD: cmp dword ptr [edx], esi */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1006AB09; /* 0x1006AACF: jg 0x1006ab09 */
L_1006AAD1:
    ecx = MEM32(edx + 0x8); /* 0x1006AAD1: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(edx + 0x1C); /* 0x1006AAD4: mov eax, dword ptr [edx + 0x1c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    ecx = ecx & esi; /* 0x1006AAD7: and ecx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = MEM32(eax + ecx * 4); /* 0x1006AAD9: mov ebx, dword ptr [eax + ecx*4] */
    /* test ebx, ebx */ /* 0x1006AADC: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006AAC6; /* 0x1006AADE: je 0x1006aac6 */
L_1006AAE0:
    /* test LO8(ebx), 1 */ /* 0x1006AAE0: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006AB05; /* 0x1006AAE3: je 0x1006ab05 */
L_1006AAE5:
    ecx = MEM32(edx + 0x8); /* 0x1006AAE5: mov ecx, dword ptr [edx + 8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    ebx = ebx & 0xFFFFFFFEu; /* 0x1006AAE8: and ebx, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(edx + 0x20); /* 0x1006AAEB: mov eax, dword ptr [edx + 0x20] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    ecx = ecx & esi; /* 0x1006AAEE: and ecx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0); /* 0x1006AAF0: push 0 */
    ecx = eax + ecx * 8; /* 0x1006AAF2: lea ecx, [eax + ecx*8] */
    RECOMP_CALL(sub_1006ACAB); /* 0x1006AAF5: call 0x1006acab */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1006AAFA: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006AB05; /* 0x1006AAFC: jne 0x1006ab05 */
L_1006AAFE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1006AAFE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1006AB00: inc eax */
    _flag_k = FK_INC;
L_1006AB01:
    edi = POP32_VAL(esp); /* 0x1006AB01: pop edi */
    esi = POP32_VAL(esp); /* 0x1006AB02: pop esi */
    ebx = POP32_VAL(esp); /* 0x1006AB03: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006AB04: ret  */
L_1006AB05:
    eax = ebx; /* 0x1006AB05: mov eax, ebx */
    RECOMP_BACKEDGE();
    goto L_1006AB01; /* 0x1006AB07: jmp 0x1006ab01 */
L_1006AB09:
    eax = esi + 0x1; /* 0x1006AB09: lea eax, [esi + 1] */
    ecx = edx; /* 0x1006AB0C: mov ecx, edx */
    MEM32(edi) = eax; /* 0x1006AB0E: mov dword ptr [edi], eax */
    edi = POP32_VAL(esp); /* 0x1006AB10: pop edi */
    esi = POP32_VAL(esp); /* 0x1006AB11: pop esi */
    ebx = POP32_VAL(esp); /* 0x1006AB12: pop ebx */
    goto L_1006AE48; /* 0x1006AB13: jmp 0x1006ae48 */
L_1006AE48:
    PUSH32(esp, 0xCu); /* 0x1006AE48: push 0xc */
    eax = 0x100DAE9Cu; /* 0x1006AE4A: mov eax, 0x100dae9c */
    RECOMP_CALL(sub_100149A4); /* 0x1006AE4F: call 0x100149a4 */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x1006AE54: mov edi, ecx */
    esi = MEM32(edi + 0x10); /* 0x1006AE56: mov esi, dword ptr [edi + 0x10] */
    MEM32(ebp + (-0x10)) = esi; /* 0x1006AE59: mov dword ptr [ebp - 0x10], esi */
    RECOMP_CALL(sub_10023AF4); /* 0x1006AE5C: call 0x10023af4 */
    RECOMP_FLAGS_IN();
    ecx = esi; /* 0x1006AE61: mov ecx, esi */
    RECOMP_CALL(sub_10023D1E); /* 0x1006AE63: call 0x10023d1e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1006AE68: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ecx; /* 0x1006AE6A: mov dword ptr [ebp - 4], ecx */
    ebx = ecx; /* 0x1006AE6D: mov ebx, ecx */
    esi = MEM32(edi + 0x4); /* 0x1006AE6F: mov esi, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1006AE72: dec esi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x18)) = ecx; /* 0x1006AE73: mov dword ptr [ebp - 0x18], ecx */
    MEM32(ebp + (-0x14)) = ecx; /* 0x1006AE76: mov dword ptr [ebp - 0x14], ecx */
    MEM32(edi + 0x4) = esi; /* 0x1006AE79: mov dword ptr [edi + 4], esi */
    /* cmp MEM32(edi), esi */ /* 0x1006AE7C: cmp dword ptr [edi], esi */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1006AE9F; /* 0x1006AE7E: jg 0x1006ae9f */
L_1006AE80:
    edx = MEM32(edi + 0x8); /* 0x1006AE80: mov edx, dword ptr [edi + 8] */
    eax = MEM32(edi + 0x1C); /* 0x1006AE83: mov eax, dword ptr [edi + 0x1c] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    edx = edx & esi; /* 0x1006AE86: and edx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(edi + 0x20); /* 0x1006AE88: mov ecx, dword ptr [edi + 0x20] */
    ebx = MEM32(eax + edx * 4); /* 0x1006AE8B: mov ebx, dword ptr [eax + edx*4] */
    eax = MEM32(ecx + edx * 8); /* 0x1006AE8E: mov eax, dword ptr [ecx + edx*8] */
    MEM32(ebp + (-0x18)) = eax; /* 0x1006AE91: mov dword ptr [ebp - 0x18], eax */
    eax = MEM32(ecx + edx * 8 + 0x4); /* 0x1006AE94: mov eax, dword ptr [ecx + edx*8 + 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1006AE98: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = eax; /* 0x1006AE9A: mov dword ptr [ebp - 0x14], eax */
    goto L_1006AEA5; /* 0x1006AE9D: jmp 0x1006aea5 */
L_1006AE9F:
    eax = esi + 0x1; /* 0x1006AE9F: lea eax, [esi + 1] */
    MEM32(edi + 0x4) = eax; /* 0x1006AEA2: mov dword ptr [edi + 4], eax */
L_1006AEA5:
    /* cmp MEM32(edi), esi */ /* 0x1006AEA5: cmp dword ptr [edi], esi */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1006AEB9; /* 0x1006AEA7: jl 0x1006aeb9 */
L_1006AEA9:
    eax = MEM32(edi); /* 0x1006AEA9: mov eax, dword ptr [edi] */
    _flag_a = (uint32_t)(MEM32(edi + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi + 0xC) = MEM32(edi + 0xC) + eax; /* 0x1006AEAB: add dword ptr [edi + 0xc], eax */
    _flag_k = FK_ADD;
    MEM32(edi) = ecx; /* 0x1006AEAE: mov dword ptr [edi], ecx */
    MEM32(edi + 0x4) = ecx; /* 0x1006AEB0: mov dword ptr [edi + 4], ecx */
    MEM32(edi + 0x18) = ecx; /* 0x1006AEB3: mov dword ptr [edi + 0x18], ecx */
    MEM8(edi + 0x14) = (uint8_t)(LO8(ecx)); /* 0x1006AEB6: mov byte ptr [edi + 0x14], cl */
L_1006AEB9:
    /* test LO8(ebx), 1 */ /* 0x1006AEB9: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006AED1; /* 0x1006AEBC: je 0x1006aed1 */
L_1006AEBE:
    PUSH32(esp, ecx); /* 0x1006AEBE: push ecx */
    ecx = ebp + (-0x18); /* 0x1006AEBF: lea ecx, [ebp - 0x18] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    ebx = ebx & 0xFFFFFFFEu; /* 0x1006AEC2: and ebx, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1006ACAB); /* 0x1006AEC5: call 0x1006acab */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1006AECA: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006AED1; /* 0x1006AECC: jne 0x1006aed1 */
L_1006AECE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1006AECE: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1006AED0: inc ebx */
    _flag_k = FK_INC;
L_1006AED1:
    ecx = MEM32(ebp + (-0x10)); /* 0x1006AED1: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(ecx) = 0; /* 0x1006AED4: mov dword ptr [ecx], 0 */
    RECOMP_CALL(sub_10023AF4); /* 0x1006AEDA: call 0x10023af4 */
    RECOMP_FLAGS_IN();
    eax = ebx; /* 0x1006AEDF: mov eax, ebx */
    RECOMP_CALL(sub_100149D7); /* 0x1006AEE1: call 0x100149d7 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006AEE6: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006AB18(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006AB18u);

L_1006AB18:
    PUSH32(esp, ebp); /* 0x1006AB18: push ebp */
    ebp = esp; /* 0x1006AB19: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x1006AB1B: sub esp, 0x28 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1006AB1E: push ebx */
    PUSH32(esp, esi); /* 0x1006AB1F: push esi */
    PUSH32(esp, edi); /* 0x1006AB20: push edi */
    edi = ecx; /* 0x1006AB21: mov edi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1006AB23: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x1006AB25: push 4 */
    edx = POP32_VAL(esp); /* 0x1006AB27: pop edx */
    MEM32(ebp + (-0x14)) = edi; /* 0x1006AB28: mov dword ptr [ebp - 0x14], edi */
    eax = MEM32(edi + 0x8); /* 0x1006AB2B: mov eax, dword ptr [edi + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1006AB2E: inc eax */
    _flag_k = FK_INC;
    ebx = eax + eax; /* 0x1006AB2F: lea ebx, [eax + eax] */
    eax = MEM32(edi + 0x4); /* 0x1006AB32: mov eax, dword ptr [edi + 4] */
    eax = MEM32(edi); /* 0x1006AB35: mov eax, dword ptr [edi] */
    eax = ebx; /* 0x1006AB37: mov eax, ebx */
    MEM32(ebp + (-0x1C)) = ebx; /* 0x1006AB39: mov dword ptr [ebp - 0x1c], ebx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x1006AB3C: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1006AB3E: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1006AB41: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1006AB43: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1006AB45: push ecx */
    RECOMP_CALL(sub_10011683); /* 0x1006AB46: call 0x10011683 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1006AB4B: pop ecx */
    MEM32(ebp + (-0x10)) = eax; /* 0x1006AB4C: mov dword ptr [ebp - 0x10], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1006AB4F: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(edi + 0x1C); /* 0x1006AB51: mov eax, dword ptr [edi + 0x1c] */
    MEM32(ebp + (-0x20)) = eax; /* 0x1006AB54: mov dword ptr [ebp - 0x20], eax */
    eax = ebx; /* 0x1006AB57: mov eax, ebx */
    PUSH32(esp, 8); /* 0x1006AB59: push 8 */
    esi = POP32_VAL(esp); /* 0x1006AB5B: pop esi */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(esi); /* 0x1006AB5C: mul esi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1006AB5E: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1006AB61: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1006AB63: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1006AB65: push ecx */
    RECOMP_CALL(sub_10011683); /* 0x1006AB66: call 0x10011683 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = eax; /* 0x1006AB6B: mov dword ptr [ebp - 4], eax */
    ecx = POP32_VAL(esp); /* 0x1006AB6E: pop ecx */
    /* test eax, eax */ /* 0x1006AB6F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006AB8A; /* 0x1006AB71: je 0x1006ab8a */
L_1006AB73:
    edx = ebx + (-0x1); /* 0x1006AB73: lea edx, [ebx - 1] */
    ecx = eax; /* 0x1006AB76: mov ecx, eax */
    /* test edx, edx */ /* 0x1006AB78: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1006AB8E; /* 0x1006AB7A: js 0x1006ab8e */
L_1006AB7C:
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0);
    MEM32(ecx) = MEM32(ecx) & 0; /* 0x1006AB7C: and dword ptr [ecx], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) & 0; /* 0x1006AB7F: and dword ptr [ecx + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1006AB83: add ecx, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1006AB85: dec edx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_1006AB8E; /* 0x1006AB86: js 0x1006ab8e */
L_1006AB88:
    RECOMP_BACKEDGE();
    goto L_1006AB7C; /* 0x1006AB88: jmp 0x1006ab7c */
L_1006AB8A:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1006AB8A: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1006AB8E:
    eax = MEM32(edi + 0x20); /* 0x1006AB8E: mov eax, dword ptr [edi + 0x20] */
    esi = MEM32(edi + 0x10); /* 0x1006AB91: mov esi, dword ptr [edi + 0x10] */
    MEM32(ebp + (-0x24)) = eax; /* 0x1006AB94: mov dword ptr [ebp - 0x24], eax */
    MEM32(ebp + (-0x18)) = esi; /* 0x1006AB97: mov dword ptr [ebp - 0x18], esi */
    RECOMP_CALL(sub_10023AF4); /* 0x1006AB9A: call 0x10023af4 */
    RECOMP_FLAGS_IN();
    ecx = esi; /* 0x1006AB9F: mov ecx, esi */
    RECOMP_CALL(sub_10023D1E); /* 0x1006ABA1: call 0x10023d1e */
    RECOMP_FLAGS_IN();
    ebx = MEM32(edi); /* 0x1006ABA6: mov ebx, dword ptr [edi] */
    edx = MEM32(edi + 0x4); /* 0x1006ABA8: mov edx, dword ptr [edi + 4] */
    ecx = MEM32(edi + 0xC); /* 0x1006ABAB: mov ecx, dword ptr [edi + 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ebx; /* 0x1006ABAE: sub edx, ebx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(edi + 0x8));
    ebx = ebx & MEM32(edi + 0x8); /* 0x1006ABB0: and ebx, dword ptr [edi + 8] */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(edi + 0x4); /* 0x1006ABB3: mov eax, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - ebx; /* 0x1006ABB6: sub ecx, ebx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x1006ABB8: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1006ABBC: sub ecx, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1006ABBE: add eax, ecx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xC)) = edx; /* 0x1006ABC0: mov dword ptr [ebp - 0xc], edx */
    MEM32(edi + 0xC) = eax; /* 0x1006ABC3: mov dword ptr [edi + 0xc], eax */
    eax = ebx + edx; /* 0x1006ABC6: lea eax, [ebx + edx] */
    MEM32(edi) = ebx; /* 0x1006ABC9: mov dword ptr [edi], ebx */
    MEM32(edi + 0x4) = eax; /* 0x1006ABCB: mov dword ptr [edi + 4], eax */
    /* test edx, edx */ /* 0x1006ABCE: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1006AC18; /* 0x1006ABD0: jle 0x1006ac18 */
L_1006ABD2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1006ABD2: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1006ABD4:
    eax = MEM32(edi + 0x1C); /* 0x1006ABD4: mov eax, dword ptr [edi + 0x1c] */
    ecx = ebx; /* 0x1006ABD7: mov ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0x8));
    ecx = ecx & MEM32(edi + 0x8); /* 0x1006ABD9: and ecx, dword ptr [edi + 8] */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ebp + (-0x4)); /* 0x1006ABDC: mov esi, dword ptr [ebp - 4] */
    eax = MEM32(eax + ecx * 4); /* 0x1006ABDF: mov eax, dword ptr [eax + ecx*4] */
    ecx = MEM32(ebp + (-0x10)); /* 0x1006ABE2: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(ecx + edx * 4) = eax; /* 0x1006ABE5: mov dword ptr [ecx + edx*4], eax */
    edx = ebx; /* 0x1006ABE8: mov edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(edi + 0x8));
    edx = edx & MEM32(edi + 0x8); /* 0x1006ABEA: and edx, dword ptr [edi + 8] */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(edi + 0x20); /* 0x1006ABED: mov ecx, dword ptr [edi + 0x20] */
    edi = MEM32(ebp + (-0x8)); /* 0x1006ABF0: mov edi, dword ptr [ebp - 8] */
    eax = MEM32(ecx + edx * 8); /* 0x1006ABF3: mov eax, dword ptr [ecx + edx*8] */
    MEM32(esi + edi * 8) = eax; /* 0x1006ABF6: mov dword ptr [esi + edi*8], eax */
    eax = MEM32(ecx + edx * 8 + 0x4); /* 0x1006ABF9: mov eax, dword ptr [ecx + edx*8 + 4] */
    edx = edi; /* 0x1006ABFD: mov edx, edi */
    edi = MEM32(ebp + (-0x14)); /* 0x1006ABFF: mov edi, dword ptr [ebp - 0x14] */
    ecx = esi; /* 0x1006AC02: mov ecx, esi */
    MEM32(ecx + edx * 8 + 0x4) = eax; /* 0x1006AC04: mov dword ptr [ecx + edx*8 + 4], eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1006AC08: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1006AC09: inc ebx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x8)) = edx; /* 0x1006AC0A: mov dword ptr [ebp - 8], edx */
    /* cmp edx, MEM32(ebp + (-0xC)) */ /* 0x1006AC0D: cmp edx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1006ABD4; /* 0x1006AC10: jl 0x1006abd4 */
L_1006AC12:
    esi = MEM32(ebp + (-0x18)); /* 0x1006AC12: mov esi, dword ptr [ebp - 0x18] */
    edx = MEM32(ebp + (-0xC)); /* 0x1006AC15: mov edx, dword ptr [ebp - 0xc] */
L_1006AC18:
    eax = MEM32(ebp + (-0x10)); /* 0x1006AC18: mov eax, dword ptr [ebp - 0x10] */
    MEM32(edi + 0x1C) = eax; /* 0x1006AC1B: mov dword ptr [edi + 0x1c], eax */
    eax = MEM32(ebp + (-0x4)); /* 0x1006AC1E: mov eax, dword ptr [ebp - 4] */
    MEM32(edi + 0x20) = eax; /* 0x1006AC21: mov dword ptr [edi + 0x20], eax */
    eax = MEM32(edi); /* 0x1006AC24: mov eax, dword ptr [edi] */
    _flag_a = (uint32_t)(MEM32(edi + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi + 0xC) = MEM32(edi + 0xC) + eax; /* 0x1006AC26: add dword ptr [edi + 0xc], eax */
    _flag_k = FK_ADD;
    /* cmp MEM8(edi + 0x14), 0 */ /* 0x1006AC29: cmp byte ptr [edi + 0x14], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x14)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006AC34; /* 0x1006AC2D: je 0x1006ac34 */
L_1006AC2F:
    eax = MEM32(edi); /* 0x1006AC2F: mov eax, dword ptr [edi] */
    _flag_a = (uint32_t)(MEM32(edi + 0x18)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(edi + 0x18) = MEM32(edi + 0x18) - eax; /* 0x1006AC31: sub dword ptr [edi + 0x18], eax */
    _flag_k = FK_CMP;
L_1006AC34:
    eax = MEM32(ebp + (-0x1C)); /* 0x1006AC34: mov eax, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1006AC37: dec eax */
    _flag_k = FK_DEC;
    MEM32(edi + 0x8) = eax; /* 0x1006AC38: mov dword ptr [edi + 8], eax */
    MEM32(edi) = 0; /* 0x1006AC3B: mov dword ptr [edi], 0 */
    MEM32(edi + 0x4) = edx; /* 0x1006AC41: mov dword ptr [edi + 4], edx */
    ebx = MEM32(edi + 0x4); /* 0x1006AC44: mov ebx, dword ptr [edi + 4] */
    eax = MEM32(ebp + 0xC); /* 0x1006AC47: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x1006AC4A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006AC68; /* 0x1006AC4C: je 0x1006ac68 */
L_1006AC4E:
    ecx = MEM32(edi + 0x20); /* 0x1006AC4E: mov ecx, dword ptr [edi + 0x20] */
    edx = ebx; /* 0x1006AC51: mov edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(edi + 0x8));
    edx = edx & MEM32(edi + 0x8); /* 0x1006AC53: and edx, dword ptr [edi + 8] */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx + edx * 8) = eax; /* 0x1006AC56: mov dword ptr [ecx + edx*8], eax */
    eax = MEM32(ebp + 0x10); /* 0x1006AC59: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ecx + edx * 8 + 0x4) = eax; /* 0x1006AC5C: mov dword ptr [ecx + edx*8 + 4], eax */
    edx = MEM32(ebp + 0x8); /* 0x1006AC60: mov edx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)((edx | 1)); _flag_b = (uint32_t)((edx | 1));
    edx = edx | 1; /* 0x1006AC63: or edx, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1006AC6B; /* 0x1006AC66: jmp 0x1006ac6b */
L_1006AC68:
    edx = MEM32(ebp + 0x8); /* 0x1006AC68: mov edx, dword ptr [ebp + 8] */
L_1006AC6B:
    eax = MEM32(edi + 0x1C); /* 0x1006AC6B: mov eax, dword ptr [edi + 0x1c] */
    ecx = ebx; /* 0x1006AC6E: mov ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0x8));
    ecx = ecx & MEM32(edi + 0x8); /* 0x1006AC70: and ecx, dword ptr [edi + 8] */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + ecx * 4) = edx; /* 0x1006AC73: mov dword ptr [eax + ecx*4], edx */
    eax = ebx + 0x1; /* 0x1006AC76: lea eax, [ebx + 1] */
    MEM32(edi + 0x4) = eax; /* 0x1006AC79: mov dword ptr [edi + 4], eax */
    MEM32(esi) = 0; /* 0x1006AC7C: mov dword ptr [esi], 0 */
    RECOMP_CALL(sub_10023AF4); /* 0x1006AC82: call 0x10023af4 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x1006AC87: push dword ptr [ebp - 0x20] */
    RECOMP_CALL(sub_1000ECE0); /* 0x1006AC8A: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1006AC8F: pop ecx */
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x1006AC90: push dword ptr [ebp - 0x24] */
    RECOMP_CALL(sub_1000ECE0); /* 0x1006AC93: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x4); /* 0x1006AC98: mov eax, dword ptr [edi + 4] */
    ecx = POP32_VAL(esp); /* 0x1006AC9B: pop ecx */
    ecx = MEM32(edi + 0xC); /* 0x1006AC9C: mov ecx, dword ptr [edi + 0xc] */
    edi = POP32_VAL(esp); /* 0x1006AC9F: pop edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1006ACA0: dec ecx */
    _flag_k = FK_DEC;
    esi = POP32_VAL(esp); /* 0x1006ACA1: pop esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1006ACA2: add eax, ecx */
    _flag_k = FK_ADD;
    ebx = POP32_VAL(esp); /* 0x1006ACA4: pop ebx */
    esp = ebp; /* 0x1006ACA5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1006ACA7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1006ACA8: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1006ACAB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006ACABu);

L_1006ACAB:
    PUSH32(esp, ebp); /* 0x1006ACAB: push ebp */
    ebp = esp; /* 0x1006ACAC: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1006ACAE: push esi */
    esi = ecx; /* 0x1006ACAF: mov esi, ecx */
    PUSH32(esp, edi); /* 0x1006ACB1: push edi */
    eax = MEM32(esi); /* 0x1006ACB2: mov eax, dword ptr [esi] */
    edx = MEM32(esi + 0x4); /* 0x1006ACB4: mov edx, dword ptr [esi + 4] */
    eax = MEM32(eax + 0xC); /* 0x1006ACB7: mov eax, dword ptr [eax + 0xc] */
    edi = MEM32(eax + edx * 4); /* 0x1006ACBA: mov edi, dword ptr [eax + edx*4] */
    /* cmp edi, 1 */ /* 0x1006ACBD: cmp edi, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006ACE3; /* 0x1006ACC0: je 0x1006ace3 */
L_1006ACC2:
    eax = MEM32(esi); /* 0x1006ACC2: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1006ACC4: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(esi + 0x4); /* 0x1006ACC6: mov ecx, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1006ACC9: inc edx */
    _flag_k = FK_INC;
    eax = MEM32(eax + 0xC); /* 0x1006ACCA: mov eax, dword ptr [eax + 0xc] */
    eax = eax + ecx * 4; /* 0x1006ACCD: lea eax, [eax + ecx*4] */
    { uint32_t _tmp = MEM32(eax); /* 0x1006ACD0: xchg dword ptr [eax], edx */
      MEM32(eax) = edx;
      edx = _tmp; }
    /* cmp edx, edi */ /* 0x1006ACD2: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1006ACE3; /* 0x1006ACD4: jne 0x1006ace3 */
L_1006ACD6:
    ecx = MEM32(ebp + 0x8); /* 0x1006ACD6: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x1006ACD9: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006ACDF; /* 0x1006ACDB: je 0x1006acdf */
L_1006ACDD:
    MEM32(ecx) = edi; /* 0x1006ACDD: mov dword ptr [ecx], edi */
L_1006ACDF:
    SET_LO8(eax, 1); /* 0x1006ACDF: mov al, 1 */
    goto L_1006AD03; /* 0x1006ACE1: jmp 0x1006ad03 */
L_1006ACE3:
    edx = MEM32(esi); /* 0x1006ACE3: mov edx, dword ptr [esi] */
    _flag_a = (uint32_t)((ecx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ecx | 0xFFFFFFFFu));
    ecx = ecx | 0xFFFFFFFFu; /* 0x1006ACE5: or ecx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edx + 0x14; /* 0x1006ACE8: lea eax, [edx + 0x14] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + ecx; ecx = _old; MEM32(eax) = _sum; } /* 0x1006ACEB: lock xadd dword ptr [eax], ecx */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_1006AD01; /* 0x1006ACEF: jne 0x1006ad01 */
L_1006ACF1:
    PUSH32(esp, MEM32(edx)); /* 0x1006ACF1: push dword ptr [edx] */
    ecx = edx + 0x1C; /* 0x1006ACF3: lea ecx, [edx + 0x1c] */
    PUSH32(esp, edx); /* 0x1006ACF6: push edx */
    PUSH32(esp, 0x1006AF48u); /* 0x1006ACF7: push 0x1006af48 */
    RECOMP_CALL(sub_10074CBB); /* 0x1006ACFC: call 0x10074cbb */
    RECOMP_FLAGS_IN();
L_1006AD01:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x1006AD01: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_1006AD03:
    edi = POP32_VAL(esp); /* 0x1006AD03: pop edi */
    esi = POP32_VAL(esp); /* 0x1006AD04: pop esi */
    ebp = POP32_VAL(esp); /* 0x1006AD05: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1006AD06: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1006AD09(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006AD09u);

L_1006AD09:
    PUSH32(esp, ebp); /* 0x1006AD09: push ebp */
    ebp = esp; /* 0x1006AD0A: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x1006AD0C: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1006AD0F: push esi */
    esi = MEM32(ecx); /* 0x1006AD10: mov esi, dword ptr [ecx] */
    PUSH32(esp, edi); /* 0x1006AD12: push edi */
    eax = MEM32(edx); /* 0x1006AD13: mov eax, dword ptr [edx] */
    /* cmp eax, esi */ /* 0x1006AD15: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1006AD2C; /* 0x1006AD17: jge 0x1006ad2c */
L_1006AD19:
    edi = MEM32(ecx + 0x8); /* 0x1006AD19: mov edi, dword ptr [ecx + 8] */
    ecx = edi + eax * 4; /* 0x1006AD1C: lea ecx, [edi + eax*4] */
L_1006AD1F:
    /* cmp MEM32(ecx), 0 */ /* 0x1006AD1F: cmp dword ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1006AD34; /* 0x1006AD22: jne 0x1006ad34 */
L_1006AD24:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1006AD24: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x1006AD25: add ecx, 4 */
    _flag_k = FK_ADD;
    /* cmp eax, esi */ /* 0x1006AD28: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1006AD1F; /* 0x1006AD2A: jl 0x1006ad1f */
L_1006AD2C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1006AD2C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1006AD2E:
    edi = POP32_VAL(esp); /* 0x1006AD2E: pop edi */
    esi = POP32_VAL(esp); /* 0x1006AD2F: pop esi */
    ebp = POP32_VAL(esp); /* 0x1006AD30: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1006AD31: ret 4 */
L_1006AD34:
    MEM32(edx) = eax; /* 0x1006AD34: mov dword ptr [edx], eax */
    eax = MEM32(edi + eax * 4); /* 0x1006AD36: mov eax, dword ptr [edi + eax*4] */
    RECOMP_BACKEDGE();
    goto L_1006AD2E; /* 0x1006AD39: jmp 0x1006ad2e */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1006AD3B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006AD3Bu);

L_1006AD3B:
    PUSH32(esp, ebp); /* 0x1006AD3B: push ebp */
    ebp = esp; /* 0x1006AD3C: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1006AD3E: push ecx */
    edx = MEM32(ebp + 0xC); /* 0x1006AD3F: mov edx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1006AD42: push esi */
    esi = ecx; /* 0x1006AD43: mov esi, ecx */
    PUSH32(esp, edi); /* 0x1006AD45: push edi */
    ecx = MEM32(esi + 0x2C); /* 0x1006AD46: mov ecx, dword ptr [esi + 0x2c] */
    edi = MEM32(esi + 0x28); /* 0x1006AD49: mov edi, dword ptr [esi + 0x28] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : (((edx) >> 31) & 1u)); /* 0x1006AD4C: sar edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> ((LO8(ecx)) & 31))), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> ((LO8(ecx)) & 31));
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1006AD4E: dec edi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    edi = edi & MEM32(ebp + 0xC); /* 0x1006AD4F: and edi, dword ptr [ebp + 0xc] */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, MEM32(esi + 0x3C) */ /* 0x1006AD52: cmp edx, dword ptr [esi + 0x3c] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0x3C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1006AD5E; /* 0x1006AD55: jl 0x1006ad5e */
L_1006AD57:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x1006AD57: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_1006AE2D; /* 0x1006AD59: jmp 0x1006ae2d */
L_1006AD5E:
    ecx = MEM32(esi + 0x38); /* 0x1006AD5E: mov ecx, dword ptr [esi + 0x38] */
    eax = MEM32(esi + 0x34); /* 0x1006AD61: mov eax, dword ptr [esi + 0x34] */
    PUSH32(esp, ebx); /* 0x1006AD64: push ebx */
    /* cmp edx, ecx */ /* 0x1006AD65: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1006AD7A; /* 0x1006AD67: jl 0x1006ad7a */
L_1006AD69:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x1006AD69: sub edx, ecx */
    _flag_k = FK_CMP;
    ebx = MEM32(eax + ecx * 4 + (-0x4)); /* 0x1006AD6B: mov ebx, dword ptr [eax + ecx*4 - 4] */
    if (/* sub result */ CMP_S(_flag_a, _flag_b)) goto L_1006AD7D; /* 0x1006AD6F: js 0x1006ad7d */
L_1006AD71:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1006AD71: inc edx */
    _flag_k = FK_INC;
L_1006AD72:
    ebx = MEM32(ebx + 0x4); /* 0x1006AD72: mov ebx, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1006AD75: dec edx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1006AD7D; /* 0x1006AD76: je 0x1006ad7d */
L_1006AD78:
    RECOMP_BACKEDGE();
    goto L_1006AD72; /* 0x1006AD78: jmp 0x1006ad72 */
L_1006AD7A:
    ebx = MEM32(eax + edx * 4); /* 0x1006AD7A: mov ebx, dword ptr [eax + edx*4] */
L_1006AD7D:
    eax = MEM32(ebx); /* 0x1006AD7D: mov eax, dword ptr [ebx] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1006AD7F: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x8); /* 0x1006AD81: mov ecx, dword ptr [ebp + 8] */
    MEM32(ebp + 0xC) = ecx; /* 0x1006AD84: mov dword ptr [ebp + 0xc], ecx */
    ecx = eax + edi * 4; /* 0x1006AD87: lea ecx, [eax + edi*4] */
    eax = MEM32(ebp + 0xC); /* 0x1006AD8A: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(ecx); if (eax == _d) { MEM32(ecx) = edx; } else { eax = _d; } } /* 0x1006AD8D: lock cmpxchg dword ptr [ecx], edx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = eax; /* 0x1006AD91: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + (-0x4)); /* 0x1006AD94: mov eax, dword ptr [ebp - 4] */
    /* cmp eax, MEM32(ebp + 0xC) */ /* 0x1006AD97: cmp eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1006AE2A; /* 0x1006AD9A: jne 0x1006ae2a */
L_1006ADA0:
    PUSH32(esp, 0xFFFFFFFEu); /* 0x1006ADA0: push -2 */
    ecx = ebx + 0x8; /* 0x1006ADA2: lea ecx, [ebx + 8] */
    eax = POP32_VAL(esp); /* 0x1006ADA5: pop eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(ecx); if (eax == _d) { MEM32(ecx) = edi; } else { eax = _d; } } /* 0x1006ADA6: lock cmpxchg dword ptr [ecx], edi */
    _flag_k = FK_CMP;
    ebx = MEM32(0x100E5134); /* 0x1006ADAA: mov ebx, dword ptr [0x100e5134] */
    PUSH32(esp, esi); /* 0x1006ADB0: push esi */
    RECOMP_ICALL(ebx); /* 0x1006ADB1: call ebx */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO16(eax); /* 0x1006ADB3: movzx eax, ax */
    /* cmp eax, MEM32(esi + 0x44) */ /* 0x1006ADB6: cmp eax, dword ptr [esi + 0x44] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x44));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1006AE18; /* 0x1006ADB9: jle 0x1006ae18 */
L_1006ADBB:
    eax = MEM32(ebp + 0x8); /* 0x1006ADBB: mov eax, dword ptr [ebp + 8] */
    edi = esi + 0x8; /* 0x1006ADBE: lea edi, [esi + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x18u; /* 0x1006ADC1: add eax, 0x18 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1006ADC4: push eax */
    PUSH32(esp, edi); /* 0x1006ADC5: push edi */
    RECOMP_ICALL(MEM32(0x100E5138)); /* 0x1006ADC6: call dword ptr [0x100e5138] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x1006ADCC: push edi */
    RECOMP_ICALL(ebx); /* 0x1006ADCD: call ebx */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO16(eax); /* 0x1006ADCF: movzx eax, ax */
    /* cmp eax, MEM32(esi + 0x44) */ /* 0x1006ADD2: cmp eax, dword ptr [esi + 0x44] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x44));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1006AE26; /* 0x1006ADD5: jle 0x1006ae26 */
L_1006ADD7:
    eax = MEM32(esi + 0x24); /* 0x1006ADD7: mov eax, dword ptr [esi + 0x24] */
    ecx = 0xA0000000u; /* 0x1006ADDA: mov ecx, 0xa0000000 */
    eax = MEM32(eax + 0x194); /* 0x1006ADDF: mov eax, dword ptr [eax + 0x194] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x1006ADE5: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ecx */ /* 0x1006ADE7: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006AE26; /* 0x1006ADE9: je 0x1006ae26 */
L_1006ADEB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1006ADEB: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi + 0x48; /* 0x1006ADED: lea ecx, [esi + 0x48] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1006ADF0: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1006ADF1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(ecx); if (eax == _d) { MEM32(ecx) = edx; } else { eax = _d; } } /* 0x1006ADF3: lock cmpxchg dword ptr [ecx], edx */
    _flag_k = FK_CMP;
    /* test eax, eax */ /* 0x1006ADF7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006AE26; /* 0x1006ADF9: jne 0x1006ae26 */
L_1006ADFB:
    PUSH32(esp, edi); /* 0x1006ADFB: push edi */
    RECOMP_ICALL(MEM32(0x100E5130)); /* 0x1006ADFC: call dword ptr [0x100e5130] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x24)); /* 0x1006AE02: push dword ptr [esi + 0x24] */
    ecx = esi + 0x14; /* 0x1006AE05: lea ecx, [esi + 0x14] */
    MEM32(esi + 0x10) = eax; /* 0x1006AE08: mov dword ptr [esi + 0x10], eax */
    PUSH32(esp, esi); /* 0x1006AE0B: push esi */
    PUSH32(esp, 0x1006AEE7u); /* 0x1006AE0C: push 0x1006aee7 */
    RECOMP_CALL(sub_10074CBB); /* 0x1006AE11: call 0x10074cbb */
    RECOMP_FLAGS_IN();
    goto L_1006AE26; /* 0x1006AE16: jmp 0x1006ae26 */
L_1006AE18:
    ecx = MEM32(ebp + 0x8); /* 0x1006AE18: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x18u; /* 0x1006AE1B: add ecx, 0x18 */
    _flag_k = FK_ADD;
    PUSH32(esp, ecx); /* 0x1006AE1E: push ecx */
    PUSH32(esp, esi); /* 0x1006AE1F: push esi */
    RECOMP_ICALL(MEM32(0x100E5138)); /* 0x1006AE20: call dword ptr [0x100e5138] */
    RECOMP_FLAGS_IN();
L_1006AE26:
    SET_LO8(eax, 1); /* 0x1006AE26: mov al, 1 */
    goto L_1006AE2C; /* 0x1006AE28: jmp 0x1006ae2c */
L_1006AE2A:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x1006AE2A: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_1006AE2C:
    ebx = POP32_VAL(esp); /* 0x1006AE2C: pop ebx */
L_1006AE2D:
    edi = POP32_VAL(esp); /* 0x1006AE2D: pop edi */
    esi = POP32_VAL(esp); /* 0x1006AE2E: pop esi */
    esp = ebp; /* 0x1006AE2F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1006AE31: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1006AE32: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1006AE35(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006AE35u);

L_1006AE35:
    /* pause */ /* 0x1006AE35: pause  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006AE37: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006AE38(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006AE38u);

L_1006AE38:
    PUSH32(esp, MEM32(0x100E066C)); /* 0x1006AE38: push dword ptr [0x100e066c] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(ecx + 0x8) = MEM32(ecx + 0x8) & 0; /* 0x1006AE3E: and dword ptr [ecx + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1006AF24); /* 0x1006AE42: call 0x1006af24 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006AE47: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006AEE7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006AEE7u);

L_1006AEE7:
    PUSH32(esp, ebp); /* 0x1006AEE7: push ebp */
    ebp = esp; /* 0x1006AEE8: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1006AEEA: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1006AEEB: mov esi, dword ptr [ebp + 8] */
    ecx = 0xA0000000u; /* 0x1006AEEE: mov ecx, 0xa0000000 */
    eax = MEM32(esi + 0x24); /* 0x1006AEF3: mov eax, dword ptr [esi + 0x24] */
    eax = MEM32(eax + 0x194); /* 0x1006AEF6: mov eax, dword ptr [eax + 0x194] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x1006AEFC: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ecx */ /* 0x1006AEFE: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006AF21; /* 0x1006AF00: je 0x1006af21 */
L_1006AF02:
    PUSH32(esp, edi); /* 0x1006AF02: push edi */
    edi = MEM32(esi + 0x10); /* 0x1006AF03: mov edi, dword ptr [esi + 0x10] */
    goto L_1006AF12; /* 0x1006AF06: jmp 0x1006af12 */
L_1006AF08:
    ecx = edi + (-0x18); /* 0x1006AF08: lea ecx, [edi - 0x18] */
    edi = MEM32(edi); /* 0x1006AF0B: mov edi, dword ptr [edi] */
    RECOMP_CALL(sub_1006AF6F); /* 0x1006AF0D: call 0x1006af6f */
    RECOMP_FLAGS_IN();
L_1006AF12:
    /* test edi, edi */ /* 0x1006AF12: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006AF08; /* 0x1006AF14: jne 0x1006af08 */
L_1006AF16:
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(edi);
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & edi; /* 0x1006AF16: and dword ptr [esi + 0x10], edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi + 0x48; /* 0x1006AF19: lea eax, [esi + 0x48] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1006AF1C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _tmp = MEM32(eax); /* 0x1006AF1E: xchg dword ptr [eax], ecx */
      MEM32(eax) = ecx;
      ecx = _tmp; }
    edi = POP32_VAL(esp); /* 0x1006AF20: pop edi */
L_1006AF21:
    esi = POP32_VAL(esp); /* 0x1006AF21: pop esi */
    ebp = POP32_VAL(esp); /* 0x1006AF22: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006AF23: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006AF24(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006AF24u);

L_1006AF24:
    PUSH32(esp, ebp); /* 0x1006AF24: push ebp */
    ebp = esp; /* 0x1006AF25: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1006AF27: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x1006AF2A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006AF37; /* 0x1006AF2C: jne 0x1006af37 */
L_1006AF2E:
    MEM32(ecx + 0x8) = 4; /* 0x1006AF2E: mov dword ptr [ecx + 8], 4 */
    goto L_1006AF44; /* 0x1006AF35: jmp 0x1006af44 */
L_1006AF37:
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) & 0; /* 0x1006AF37: and dword ptr [ecx + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx) = eax; /* 0x1006AF3B: mov dword ptr [ecx], eax */
    MEM32(ecx + 0x8) = 1; /* 0x1006AF3D: mov dword ptr [ecx + 8], 1 */
L_1006AF44:
    ebp = POP32_VAL(esp); /* 0x1006AF44: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1006AF45: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1006AF48(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006AF48u);

L_1006AF48:
    PUSH32(esp, ebp); /* 0x1006AF48: push ebp */
    ebp = esp; /* 0x1006AF49: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1006AF4B: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1006AF4C: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x1006AF4F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006AF6C; /* 0x1006AF51: je 0x1006af6c */
L_1006AF53:
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x1006AF53: push dword ptr [esi + 0xc] */
    RECOMP_CALL(sub_1000ECE0); /* 0x1006AF56: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x1006AF5B: push dword ptr [esi + 8] */
    RECOMP_CALL(sub_1000ECE0); /* 0x1006AF5E: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1006AF63: push esi */
    RECOMP_CALL(sub_1000ECE0); /* 0x1006AF64: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1006AF69: add esp, 0xc */
    _flag_k = FK_ADD;
L_1006AF6C:
    esi = POP32_VAL(esp); /* 0x1006AF6C: pop esi */
    ebp = POP32_VAL(esp); /* 0x1006AF6D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006AF6E: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006AF6F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006AF6Fu);

L_1006AF6F:
    PUSH32(esp, esi); /* 0x1006AF6F: push esi */
    esi = ecx; /* 0x1006AF70: mov esi, ecx */
    /* test esi, esi */ /* 0x1006AF72: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006AF9F; /* 0x1006AF74: je 0x1006af9f */
L_1006AF76:
    PUSH32(esp, MEM32(esi + 0x68)); /* 0x1006AF76: push dword ptr [esi + 0x68] */
    RECOMP_CALL(sub_1000ECE0); /* 0x1006AF79: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x6C)); /* 0x1006AF7E: push dword ptr [esi + 0x6c] */
    RECOMP_CALL(sub_1000ECE0); /* 0x1006AF81: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x1006AF86: push dword ptr [esi + 0xc] */
    RECOMP_CALL(sub_1000ECE0); /* 0x1006AF89: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x10)); /* 0x1006AF8E: push dword ptr [esi + 0x10] */
    RECOMP_CALL(sub_1000ECE0); /* 0x1006AF91: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1006AF96: push esi */
    RECOMP_CALL(sub_1000ECE0); /* 0x1006AF97: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1006AF9C: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1006AF9F:
    esi = POP32_VAL(esp); /* 0x1006AF9F: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006AFA0: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006AFB8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006AFB8u);

L_1006AFB8:
    RECOMP_CALL(sub_10073624); /* 0x1006AFB8: call 0x10073624 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1006AFBD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006AFC8; /* 0x1006AFBF: je 0x1006afc8 */
L_1006AFC1:
    edx = MEM32(eax); /* 0x1006AFC1: mov edx, dword ptr [eax] */
    ecx = eax; /* 0x1006AFC3: mov ecx, eax */
    { _itail_tgt = (uint32_t)(MEM32(edx + 0x4)); goto _ljump; }
L_1006AFC8:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1006AFC8: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006AFCB: ret  */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1006AFCC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006AFCCu);

L_1006AFCC:
    RECOMP_CALL(sub_10073624); /* 0x1006AFCC: call 0x10073624 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1006AFD1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006AFDC; /* 0x1006AFD3: je 0x1006afdc */
L_1006AFD5:
    edx = MEM32(eax); /* 0x1006AFD5: mov edx, dword ptr [eax] */
    ecx = eax; /* 0x1006AFD7: mov ecx, eax */
    { _itail_tgt = (uint32_t)(MEM32(edx + 0x8)); goto _ljump; }
L_1006AFDC:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1006AFDC: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006AFDF: ret  */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1006AFE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006AFE0u);

L_1006AFE0:
    PUSH32(esp, ebp); /* 0x1006AFE0: push ebp */
    ebp = esp; /* 0x1006AFE1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1006AFE3: push ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1006AFE4: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_10014872); /* 0x1006AFE8: call 0x10014872 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1006AFED: push dword ptr [ebp + 8] */
    ecx = MEM32(eax + 0x1C); /* 0x1006AFF0: mov ecx, dword ptr [eax + 0x1c] */
    edx = MEM32(ecx); /* 0x1006AFF3: mov edx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(edx + 0xC)); /* 0x1006AFF5: call dword ptr [edx + 0xc] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1006AFF8: mov eax, dword ptr [ebp + 8] */
    esp = ebp; /* 0x1006AFFB: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1006AFFD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006AFFE: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006AFFF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006AFFFu);

L_1006AFFF:
    RECOMP_CALL(sub_10014872); /* 0x1006AFFF: call 0x10014872 */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax + 0x1C); /* 0x1006B004: mov eax, dword ptr [eax + 0x1c] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006B007: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006B008(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006B008u);

L_1006B008:
    PUSH32(esp, ebp); /* 0x1006B008: push ebp */
    ebp = esp; /* 0x1006B009: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x1006B00B: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1006B00E: push esi */
    RECOMP_CALL(sub_10026A07); /* 0x1006B00F: call 0x10026a07 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1006B014: mov esi, eax */
    ecx = esi; /* 0x1006B016: mov ecx, esi */
    RECOMP_CALL(sub_10024FC6); /* 0x1006B018: call 0x10024fc6 */
    RECOMP_FLAGS_IN();
    edx = MEM32(esi); /* 0x1006B01D: mov edx, dword ptr [esi] */
    ecx = esi; /* 0x1006B01F: mov ecx, esi */
    esi = POP32_VAL(esp); /* 0x1006B021: pop esi */
    ebp = POP32_VAL(esp); /* 0x1006B022: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(edx + 0x1C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1006B026(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006B026u);

L_1006B026:
    PUSH32(esp, ebp); /* 0x1006B026: push ebp */
    ebp = esp; /* 0x1006B027: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1006B029: sub esp, 0xc */
    _flag_k = FK_CMP;
    RECOMP_CALL(sub_10073624); /* 0x1006B02C: call 0x10073624 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1006B031: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006B040; /* 0x1006B033: je 0x1006b040 */
L_1006B035:
    ecx = eax; /* 0x1006B035: mov ecx, eax */
    RECOMP_CALL(sub_10073F58); /* 0x1006B037: call 0x10073f58 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1006B03C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1006B03E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006B03F: ret  */
L_1006B040:
    ecx = ebp + (-0xC); /* 0x1006B040: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1009DD55); /* 0x1006B043: call 0x1009dd55 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x100DCECCu); /* 0x1006B048: push 0x100dcecc */
    eax = ebp + (-0xC); /* 0x1006B04D: lea eax, [ebp - 0xc] */
    MEM32(ebp + (-0xC)) = 0x100674D4u; /* 0x1006B050: mov dword ptr [ebp - 0xc], 0x100674d4 */
    PUSH32(esp, eax); /* 0x1006B057: push eax */
    RECOMP_CALL(sub_100192EB); /* 0x1006B058: call 0x100192eb */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1006B05Du, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1006B05E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006B05Eu);

L_1006B05E:
    PUSH32(esp, ebp); /* 0x1006B05E: push ebp */
    ebp = esp; /* 0x1006B05F: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1006B061: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1006B062: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x1006B065: mov esi, ecx */
    RECOMP_CALL(sub_1002D16D); /* 0x1006B067: call 0x1002d16d */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x100674D4u; /* 0x1006B06C: mov dword ptr [esi], 0x100674d4 */
    eax = esi; /* 0x1006B072: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1006B074: pop esi */
    ebp = POP32_VAL(esp); /* 0x1006B075: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1006B076: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1006B098(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006B098u);

L_1006B098:
    PUSH32(esp, ebp); /* 0x1006B098: push ebp */
    ebp = esp; /* 0x1006B099: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1006B09B: sub esp, 0xc */
    _flag_k = FK_CMP;
    RECOMP_CALL(sub_10073624); /* 0x1006B09E: call 0x10073624 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1006B0A3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006B0B5; /* 0x1006B0A5: je 0x1006b0b5 */
L_1006B0A7:
    edx = MEM32(eax); /* 0x1006B0A7: mov edx, dword ptr [eax] */
    ecx = eax; /* 0x1006B0A9: mov ecx, eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1006B0AB: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(edx + 0x18)); /* 0x1006B0AE: call dword ptr [edx + 0x18] */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1006B0B1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1006B0B3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006B0B4: ret  */
L_1006B0B5:
    ecx = ebp + (-0xC); /* 0x1006B0B5: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1009DD55); /* 0x1006B0B8: call 0x1009dd55 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x100DCECCu); /* 0x1006B0BD: push 0x100dcecc */
    eax = ebp + (-0xC); /* 0x1006B0C2: lea eax, [ebp - 0xc] */
    MEM32(ebp + (-0xC)) = 0x100674D4u; /* 0x1006B0C5: mov dword ptr [ebp - 0xc], 0x100674d4 */
    PUSH32(esp, eax); /* 0x1006B0CC: push eax */
    RECOMP_CALL(sub_100192EB); /* 0x1006B0CD: call 0x100192eb */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1006B0D2u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1006B0D3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006B0D3u);

L_1006B0D3:
    RECOMP_CALL(sub_10014872); /* 0x1006B0D3: call 0x10014872 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(eax + 0x1C); /* 0x1006B0D8: mov ecx, dword ptr [eax + 0x1c] */
    eax = MEM32(ecx); /* 0x1006B0DB: mov eax, dword ptr [ecx] */
    { _itail_tgt = (uint32_t)(MEM32(eax + 0x24)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1006B0E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006B0E0u);

L_1006B0E0:
    PUSH32(esp, ebp); /* 0x1006B0E0: push ebp */
    ebp = esp; /* 0x1006B0E1: mov ebp, esp */
    RECOMP_CALL(sub_10014872); /* 0x1006B0E3: call 0x10014872 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1006B0E8: push dword ptr [ebp + 8] */
    ecx = MEM32(eax + 0x1C); /* 0x1006B0EB: mov ecx, dword ptr [eax + 0x1c] */
    eax = MEM32(ecx); /* 0x1006B0EE: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x20)); /* 0x1006B0F0: call dword ptr [eax + 0x20] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1006B0F3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006B0F4: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006B0F5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006B0F5u);

L_1006B0F5:
    PUSH32(esp, ebp); /* 0x1006B0F5: push ebp */
    ebp = esp; /* 0x1006B0F6: mov ebp, esp */
    RECOMP_CALL(sub_10014872); /* 0x1006B0F8: call 0x10014872 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1006B0FD: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1006B100: push dword ptr [ebp + 8] */
    ecx = MEM32(eax + 0x1C); /* 0x1006B103: mov ecx, dword ptr [eax + 0x1c] */
    eax = MEM32(ecx); /* 0x1006B106: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x2C)); /* 0x1006B108: call dword ptr [eax + 0x2c] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1006B10B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006B10C: ret  */
    RECOMP_REGS_OUT();
}
