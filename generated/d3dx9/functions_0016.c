#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_1204EE68(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204EE68u);

L_1204EE68:
    edi = edi; /* 0x1204EE68: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204EE6A: push ebp */
    ebp = esp; /* 0x1204EE6B: mov ebp, esp */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1204EE6D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0xC), eax */ /* 0x1204EE6F: cmp dword ptr [ebp + 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1204EE87; /* 0x1204EE72: jbe 0x1204ee87 */
L_1204EE74:
    SET_LO16(ecx, MEM16(ebp + 0x10)); /* 0x1204EE74: mov cx, word ptr [ebp + 0x10] */
    edx = MEM32(ebp + 0x8); /* 0x1204EE78: mov edx, dword ptr [ebp + 8] */
L_1204EE7B:
    /* cmp MEM16(edx + eax * 2), LO16(ecx) */ /* 0x1204EE7B: cmp word ptr [edx + eax*2], cx */
    _flag_a = (uint32_t)(MEM16(edx + eax * 2)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204EE8D; /* 0x1204EE7F: je 0x1204ee8d */
L_1204EE81:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1204EE81: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, MEM32(ebp + 0xC) */ /* 0x1204EE82: cmp eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1204EE7B; /* 0x1204EE85: jb 0x1204ee7b */
L_1204EE87:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x1204EE87: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_1204EE89:
    ebp = POP32_VAL(esp); /* 0x1204EE89: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1204EE8A: ret 0xc */
L_1204EE8D:
    SET_LO8(eax, 1); /* 0x1204EE8D: mov al, 1 */
    RECOMP_BACKEDGE();
    goto L_1204EE89; /* 0x1204EE8F: jmp 0x1204ee89 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1204EE96(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204EE96u);

L_1204EE96:
    edi = edi; /* 0x1204EE96: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204EE98: push ebp */
    ebp = esp; /* 0x1204EE99: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1204EE9B: push ebx */
    PUSH32(esp, esi); /* 0x1204EE9C: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1204EE9D: mov esi, dword ptr [ebp + 8] */
    esi = MEM32(esi); /* 0x1204EEA0: mov esi, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x1204EEA2: push edi */
    /* test esi, esi */ /* 0x1204EEA3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1204EED3; /* 0x1204EEA5: jne 0x1204eed3 */
L_1204EEA7:
    PUSH32(esp, 0x120014BCu); /* 0x1204EEA7: push 0x120014bc */
    PUSH32(esp, 4); /* 0x1204EEAC: push 4 */
    RECOMP_CALL(sub_12018970); /* 0x1204EEAE: call 0x12018970 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1204EEB3: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1204EEB5: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1204EEB6: pop ecx */
    /* test esi, esi */ /* 0x1204EEB7: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1204EEC2; /* 0x1204EEB9: jne 0x1204eec2 */
L_1204EEBB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1204EEBB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1204EF43; /* 0x1204EEBD: jmp 0x1204ef43 */
L_1204EEC2:
    edi = MEM32(ebp + 0x10); /* 0x1204EEC2: mov edi, dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x14); /* 0x1204EEC5: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    MEM32(edi) = MEM32(edi) & 0; /* 0x1204EEC8: and dword ptr [edi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = 2; /* 0x1204EECB: mov dword ptr [eax], 2 */
    goto L_1204EF2D; /* 0x1204EED1: jmp 0x1204ef2d */
L_1204EED3:
    ebx = MEM32(ebp + 0x14); /* 0x1204EED3: mov ebx, dword ptr [ebp + 0x14] */
    eax = MEM32(ebx); /* 0x1204EED6: mov eax, dword ptr [ebx] */
    edi = MEM32(ebp + 0x10); /* 0x1204EED8: mov edi, dword ptr [ebp + 0x10] */
    /* cmp MEM32(edi), eax */ /* 0x1204EEDB: cmp dword ptr [edi], eax */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204EF2D; /* 0x1204EEDD: jne 0x1204ef2d */
L_1204EEDF:
    PUSH32(esp, 0x120014BCu); /* 0x1204EEDF: push 0x120014bc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1204EEE4: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 2); /* 0x1204EEE6: push 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1204EEE8: add eax, eax */
    _flag_k = FK_ADD;
    edx = POP32_VAL(esp); /* 0x1204EEEA: pop edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x1204EEEB: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1204EEED: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1204EEF0: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1204EEF2: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1204EEF4: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x1204EEF5: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1204EEFA: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1204EEFB: pop ecx */
    MEM32(ebp + 0x10) = eax; /* 0x1204EEFC: mov dword ptr [ebp + 0x10], eax */
    /* test eax, eax */ /* 0x1204EEFF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204EEBB; /* 0x1204EF01: je 0x1204eebb */
L_1204EF03:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1204EF03: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi), ecx */ /* 0x1204EF05: cmp dword ptr [edi], ecx */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1204EF21; /* 0x1204EF07: jbe 0x1204ef21 */
L_1204EF09:
    ebx = esi; /* 0x1204EF09: mov ebx, esi */
    edx = eax; /* 0x1204EF0B: mov edx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - eax; /* 0x1204EF0D: sub ebx, eax */
    _flag_k = FK_CMP;
L_1204EF0F:
    SET_LO16(eax, MEM16(ebx + edx)); /* 0x1204EF0F: mov ax, word ptr [ebx + edx] */
    MEM16(edx) = (uint16_t)(LO16(eax)); /* 0x1204EF13: mov word ptr [edx], ax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1204EF16: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x1204EF17: add edx, 2 */
    _flag_k = FK_ADD;
    /* cmp ecx, MEM32(edi) */ /* 0x1204EF1A: cmp ecx, dword ptr [edi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1204EF0F; /* 0x1204EF1C: jb 0x1204ef0f */
L_1204EF1E:
    ebx = MEM32(ebp + 0x14); /* 0x1204EF1E: mov ebx, dword ptr [ebp + 0x14] */
L_1204EF21:
    if (1u) _cf = (((MEM32(ebx)) >> 31) & 1u); /* 0x1204EF21: shl dword ptr [ebx], 1 */
    if (1u) { _flag_a = recomp_flags_pack((MEM32(ebx) << 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    MEM32(ebx) = MEM32(ebx) << 1u; /* 0x1204EF21: shl dword ptr [ebx], 1 */
    PUSH32(esp, esi); /* 0x1204EF23: push esi */
    RECOMP_CALL(sub_121BF388); /* 0x1204EF24: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x10); /* 0x1204EF29: mov esi, dword ptr [ebp + 0x10] */
    ecx = POP32_VAL(esp); /* 0x1204EF2C: pop ecx */
L_1204EF2D:
    eax = MEM32(ebp + 0xC); /* 0x1204EF2D: mov eax, dword ptr [ebp + 0xc] */
    SET_LO16(eax, MEM16(eax)); /* 0x1204EF30: mov ax, word ptr [eax] */
    ecx = MEM32(edi); /* 0x1204EF33: mov ecx, dword ptr [edi] */
    MEM16(esi + ecx * 2) = (uint16_t)(LO16(eax)); /* 0x1204EF35: mov word ptr [esi + ecx*2], ax */
    eax = MEM32(ebp + 0x8); /* 0x1204EF39: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(1);
    MEM32(edi) = MEM32(edi) + 1; /* 0x1204EF3C: inc dword ptr [edi] */
    _flag_k = FK_INC;
    MEM32(eax) = esi; /* 0x1204EF3E: mov dword ptr [eax], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1204EF40: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1204EF42: inc eax */
    _flag_k = FK_INC;
L_1204EF43:
    edi = POP32_VAL(esp); /* 0x1204EF43: pop edi */
    esi = POP32_VAL(esp); /* 0x1204EF44: pop esi */
    ebx = POP32_VAL(esp); /* 0x1204EF45: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1204EF46: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1204EF47: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1204EF4F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204EF4Fu);

L_1204EF4F:
    edi = edi; /* 0x1204EF4F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204EF51: push ebp */
    ebp = esp; /* 0x1204EF52: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x1204EF54: mov ecx, dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x10); /* 0x1204EF57: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x1204EF5A: push ebx */
    ebx = MEM32(eax + 0x4); /* 0x1204EF5B: mov ebx, dword ptr [eax + 4] */
    eax = MEM32(ecx + 0x4); /* 0x1204EF5E: mov eax, dword ptr [ecx + 4] */
    PUSH32(esp, esi); /* 0x1204EF61: push esi */
    PUSH32(esp, edi); /* 0x1204EF62: push edi */
    edi = (uint32_t)MEM16(ecx); /* 0x1204EF63: movzx edi, word ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x1204EF66: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1204EF69: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 3); /* 0x1204EF6B: push 3 */
    ecx = POP32_VAL(esp); /* 0x1204EF6D: pop ecx */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x1204EF6E: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    eax = edi; /* 0x1204EF70: mov eax, edi */
    eax = (uint32_t)((int32_t)eax * (int32_t)3); /* 0x1204EF72: imul eax, eax, 3 */
    ecx = 0xFFFFu; /* 0x1204EF75: mov ecx, 0xffff */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x1204EF7A: add edx, eax */
    _flag_k = FK_ADD;
    esi = (uint32_t)MEM16(ebx + edx * 2); /* 0x1204EF7C: movzx esi, word ptr [ebx + edx*2] */
    /* cmp esi, ecx */ /* 0x1204EF80: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204EF94; /* 0x1204EF82: je 0x1204ef94 */
L_1204EF84:
    eax = esi; /* 0x1204EF84: mov eax, esi */
    eax = (uint32_t)((int32_t)eax * (int32_t)6); /* 0x1204EF86: imul eax, eax, 6 */
    PUSH32(esp, edi); /* 0x1204EF89: push edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x1204EF8A: add eax, ebx */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1204EF8C: push eax */
    RECOMP_CALL(sub_1204CE0F); /* 0x1204EF8D: call 0x1204ce0f */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1204EF92: mov ecx, eax */
L_1204EF94:
    eax = MEM32(ebp + 0x8); /* 0x1204EF94: mov eax, dword ptr [ebp + 8] */
    edi = POP32_VAL(esp); /* 0x1204EF97: pop edi */
    MEM32(eax) = esi; /* 0x1204EF98: mov dword ptr [eax], esi */
    esi = POP32_VAL(esp); /* 0x1204EF9A: pop esi */
    MEM32(eax + 0x4) = ecx; /* 0x1204EF9B: mov dword ptr [eax + 4], ecx */
    ebx = POP32_VAL(esp); /* 0x1204EF9E: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1204EF9F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1204EFA0: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1204EFA8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204EFA8u);

L_1204EFA8:
    edi = edi; /* 0x1204EFA8: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204EFAA: push ebp */
    ebp = esp; /* 0x1204EFAB: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x1204EFAD: mov ecx, dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x10); /* 0x1204EFB0: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x1204EFB3: push ebx */
    PUSH32(esp, esi); /* 0x1204EFB4: push esi */
    esi = MEM32(eax + 0x4); /* 0x1204EFB5: mov esi, dword ptr [eax + 4] */
    eax = MEM32(ecx + 0x4); /* 0x1204EFB8: mov eax, dword ptr [ecx + 4] */
    PUSH32(esp, edi); /* 0x1204EFBB: push edi */
    edi = MEM32(ecx); /* 0x1204EFBC: mov edi, dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x1204EFBE: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1204EFC1: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 3); /* 0x1204EFC3: push 3 */
    ebx = POP32_VAL(esp); /* 0x1204EFC5: pop ebx */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ebx; /* 0x1204EFC6: div ebx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    eax = edi; /* 0x1204EFC8: mov eax, edi */
    eax = (uint32_t)((int32_t)eax * (int32_t)3); /* 0x1204EFCA: imul eax, eax, 3 */
    _flag_a = (uint32_t)((ecx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ecx | 0xFFFFFFFFu));
    ecx = ecx | 0xFFFFFFFFu; /* 0x1204EFCD: or ecx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x1204EFD0: add edx, eax */
    _flag_k = FK_ADD;
    edx = MEM32(esi + edx * 4); /* 0x1204EFD2: mov edx, dword ptr [esi + edx*4] */
    /* cmp edx, ecx */ /* 0x1204EFD5: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204EFEE; /* 0x1204EFD7: je 0x1204efee */
L_1204EFD9:
    eax = edx; /* 0x1204EFD9: mov eax, edx */
    eax = (uint32_t)((int32_t)eax * (int32_t)0xCu); /* 0x1204EFDB: imul eax, eax, 0xc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1204EFDE: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x1204EFE0: add eax, esi */
    _flag_k = FK_ADD;
L_1204EFE2:
    /* cmp MEM32(eax), edi */ /* 0x1204EFE2: cmp dword ptr [eax], edi */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204EFEE; /* 0x1204EFE4: je 0x1204efee */
L_1204EFE6:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1204EFE6: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1204EFE7: add eax, 4 */
    _flag_k = FK_ADD;
    /* cmp ecx, ebx */ /* 0x1204EFEA: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1204EFE2; /* 0x1204EFEC: jb 0x1204efe2 */
L_1204EFEE:
    eax = MEM32(ebp + 0x8); /* 0x1204EFEE: mov eax, dword ptr [ebp + 8] */
    edi = POP32_VAL(esp); /* 0x1204EFF1: pop edi */
    esi = POP32_VAL(esp); /* 0x1204EFF2: pop esi */
    MEM32(eax) = edx; /* 0x1204EFF3: mov dword ptr [eax], edx */
    MEM32(eax + 0x4) = ecx; /* 0x1204EFF5: mov dword ptr [eax + 4], ecx */
    ebx = POP32_VAL(esp); /* 0x1204EFF8: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1204EFF9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1204EFFA: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1204F002(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204F002u);

L_1204F002:
    edi = edi; /* 0x1204F002: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204F004: push ebp */
    ebp = esp; /* 0x1204F005: mov ebp, esp */
    /* test MEM8(ecx + 0x218), 2 */ /* 0x1204F007: test byte ptr [ecx + 0x218], 2 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x218)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204F02A; /* 0x1204F00E: je 0x1204f02a */
L_1204F010:
    edx = MEM32(ebp + 0x8); /* 0x1204F010: mov edx, dword ptr [ebp + 8] */
    eax = MEM32(ebp + 0xC); /* 0x1204F013: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1204F016: push esi */
    esi = MEM32(ecx + 0x244); /* 0x1204F017: mov esi, dword ptr [ecx + 0x244] */
    ecx = (uint32_t)MEM16(esi + edx * 2); /* 0x1204F01D: movzx ecx, word ptr [esi + edx*2] */
    SET_LO16(eax, MEM16(eax + ecx * 4)); /* 0x1204F021: mov ax, word ptr [eax + ecx*4] */
    MEM16(esi + edx * 2) = (uint16_t)(LO16(eax)); /* 0x1204F025: mov word ptr [esi + edx*2], ax */
    esi = POP32_VAL(esp); /* 0x1204F029: pop esi */
L_1204F02A:
    ebp = POP32_VAL(esp); /* 0x1204F02A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1204F02B: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1204F033(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204F033u);

L_1204F033:
    edi = edi; /* 0x1204F033: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204F035: push ebp */
    ebp = esp; /* 0x1204F036: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1204F038: mov eax, dword ptr [ebp + 8] */
    eax = (uint32_t)((int32_t)eax * (int32_t)6); /* 0x1204F03B: imul eax, eax, 6 */
    PUSH32(esp, esi); /* 0x1204F03E: push esi */
    PUSH32(esp, edi); /* 0x1204F03F: push edi */
    edi = ecx; /* 0x1204F040: mov edi, ecx */
    esi = MEM32(edi + 0x24C); /* 0x1204F042: mov esi, dword ptr [edi + 0x24c] */
    edx = MEM32(edi + 0x250); /* 0x1204F048: mov edx, dword ptr [edi + 0x250] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x1204F04E: add esi, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x1204F050: add edx, eax */
    _flag_k = FK_ADD;
    /* cmp MEM16(esi), 0xFFFFu */ /* 0x1204F052: cmp word ptr [esi], 0xffff */
    _flag_a = (uint32_t)(MEM16(esi)) << 16; _flag_b = (uint32_t)(0xFFFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204F098; /* 0x1204F057: je 0x1204f098 */
L_1204F059:
    PUSH32(esp, ebx); /* 0x1204F059: push ebx */
    PUSH32(esp, 3); /* 0x1204F05A: push 3 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edx; /* 0x1204F05C: sub esi, edx */
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1204F05E: pop ecx */
L_1204F05F:
    eax = (uint32_t)MEM16(esi + edx); /* 0x1204F05F: movzx eax, word ptr [esi + edx] */
    ebx = MEM32(ebp + 0xC); /* 0x1204F063: mov ebx, dword ptr [ebp + 0xc] */
    SET_LO16(eax, MEM16(ebx + eax * 4)); /* 0x1204F066: mov ax, word ptr [ebx + eax*4] */
    ebx = MEM32(ebp + 0x10); /* 0x1204F06A: mov ebx, dword ptr [ebp + 0x10] */
    MEM16(esi + edx) = (uint16_t)(LO16(eax)); /* 0x1204F06D: mov word ptr [esi + edx], ax */
    /* test MEM8(edi + 0x218), 1 */ /* 0x1204F071: test byte ptr [edi + 0x218], 1 */
    _flag_a = (uint32_t)(MEM8(edi + 0x218)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204F091; /* 0x1204F078: je 0x1204f091 */
L_1204F07A:
    eax = (uint32_t)MEM16(edx); /* 0x1204F07A: movzx eax, word ptr [edx] */
    /* cmp LO16(eax), 0xFFFFu */ /* 0x1204F07D: cmp ax, 0xffff */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0xFFFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204F08C; /* 0x1204F081: je 0x1204f08c */
L_1204F083:
    SET_LO16(eax, MEM16(ebx + eax * 4)); /* 0x1204F083: mov ax, word ptr [ebx + eax*4] */
    MEM16(edx) = (uint16_t)(LO16(eax)); /* 0x1204F087: mov word ptr [edx], ax */
    goto L_1204F091; /* 0x1204F08A: jmp 0x1204f091 */
L_1204F08C:
    _flag_a = (uint32_t)((MEM16(edx) | 0xFFFFu)) << 16; _flag_b = (uint32_t)((MEM16(edx) | 0xFFFFu)) << 16;
    MEM16(edx) = (uint16_t)(MEM16(edx) | 0xFFFFu); /* 0x1204F08C: or word ptr [edx], 0xffff */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
L_1204F091:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x1204F091: add edx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1204F094: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1204F05F; /* 0x1204F095: jne 0x1204f05f */
L_1204F097:
    ebx = POP32_VAL(esp); /* 0x1204F097: pop ebx */
L_1204F098:
    edi = POP32_VAL(esp); /* 0x1204F098: pop edi */
    esi = POP32_VAL(esp); /* 0x1204F099: pop esi */
    ebp = POP32_VAL(esp); /* 0x1204F09A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1204F09B: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1204F0A3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204F0A3u);

L_1204F0A3:
    edi = edi; /* 0x1204F0A3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204F0A5: push ebp */
    ebp = esp; /* 0x1204F0A6: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1204F0A8: push ecx */
    PUSH32(esp, ecx); /* 0x1204F0A9: push ecx */
    eax = MEM32(0x121D9590); /* 0x1204F0AA: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1204F0AF: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1204F0B1: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x1204F0B4: push ebx */
    PUSH32(esp, esi); /* 0x1204F0B5: push esi */
    esi = ecx; /* 0x1204F0B6: mov esi, ecx */
    eax = MEM32(esi + 0x238); /* 0x1204F0B8: mov eax, dword ptr [esi + 0x238] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1204F0BE: add eax, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x1204F0C1: push edi */
    MEM32(ebp + (-0x8)) = esi; /* 0x1204F0C2: mov dword ptr [ebp - 8], esi */
    /* cmp eax, 0x400u */ /* 0x1204F0C5: cmp eax, 0x400 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x400u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1204F0DF; /* 0x1204F0CA: ja 0x1204f0df */
L_1204F0CC:
    RECOMP_CALL(sub_121BF530); /* 0x1204F0CC: call 0x121bf530 */
    RECOMP_FLAGS_IN();
    ebx = esp; /* 0x1204F0D1: mov ebx, esp */
    /* test ebx, ebx */ /* 0x1204F0D3: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204F0F5; /* 0x1204F0D5: je 0x1204f0f5 */
L_1204F0D7:
    MEM32(ebx) = 0xCCCCu; /* 0x1204F0D7: mov dword ptr [ebx], 0xcccc */
    goto L_1204F0F2; /* 0x1204F0DD: jmp 0x1204f0f2 */
L_1204F0DF:
    PUSH32(esp, eax); /* 0x1204F0DF: push eax */
    RECOMP_CALL(sub_121BF524); /* 0x1204F0E0: call 0x121bf524 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1204F0E5: mov ebx, eax */
    ecx = POP32_VAL(esp); /* 0x1204F0E7: pop ecx */
    /* test ebx, ebx */ /* 0x1204F0E8: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204F0F5; /* 0x1204F0EA: je 0x1204f0f5 */
L_1204F0EC:
    MEM32(ebx) = 0xDDDDu; /* 0x1204F0EC: mov dword ptr [ebx], 0xdddd */
L_1204F0F2:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 8; /* 0x1204F0F2: add ebx, 8 */
    _flag_k = FK_ADD;
L_1204F0F5:
    eax = MEM32(esi + 0x238); /* 0x1204F0F5: mov eax, dword ptr [esi + 0x238] */
    esi = eax; /* 0x1204F0FB: mov esi, eax */
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(ebp + 0xC)); /* 0x1204F0FD: imul esi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + 0x10); /* 0x1204F101: add esi, dword ptr [ebp + 0x10] */
    _flag_k = FK_ADD;
    edi = eax; /* 0x1204F104: mov edi, eax */
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(ebp + 0x8)); /* 0x1204F106: imul edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebp + 0x10); /* 0x1204F10A: add edi, dword ptr [ebp + 0x10] */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1204F10D: push eax */
    PUSH32(esp, esi); /* 0x1204F10E: push esi */
    PUSH32(esp, ebx); /* 0x1204F10F: push ebx */
    RECOMP_CALL(sub_121BF440); /* 0x1204F110: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x8)); /* 0x1204F115: mov eax, dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(eax + 0x238)); /* 0x1204F118: push dword ptr [eax + 0x238] */
    PUSH32(esp, edi); /* 0x1204F11E: push edi */
    PUSH32(esp, esi); /* 0x1204F11F: push esi */
    RECOMP_CALL(sub_121BF440); /* 0x1204F120: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x8)); /* 0x1204F125: mov esi, dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(esi + 0x238)); /* 0x1204F128: push dword ptr [esi + 0x238] */
    PUSH32(esp, ebx); /* 0x1204F12E: push ebx */
    PUSH32(esp, edi); /* 0x1204F12F: push edi */
    RECOMP_CALL(sub_121BF440); /* 0x1204F130: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x24u; /* 0x1204F135: add esp, 0x24 */
    _flag_k = FK_ADD;
    /* test MEM8(esi + 0x218), 2 */ /* 0x1204F138: test byte ptr [esi + 0x218], 2 */
    _flag_a = (uint32_t)(MEM8(esi + 0x218)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204F163; /* 0x1204F13F: je 0x1204f163 */
L_1204F141:
    ecx = MEM32(esi + 0x244); /* 0x1204F141: mov ecx, dword ptr [esi + 0x244] */
    ebx = MEM32(ebp + 0x8); /* 0x1204F147: mov ebx, dword ptr [ebp + 8] */
    edi = MEM32(ebp + 0xC); /* 0x1204F14A: mov edi, dword ptr [ebp + 0xc] */
    SET_LO16(eax, MEM16(ecx + ebx * 2)); /* 0x1204F14D: mov ax, word ptr [ecx + ebx*2] */
    edx = (uint32_t)MEM16(ecx + edi * 2); /* 0x1204F151: movzx edx, word ptr [ecx + edi*2] */
    MEM16(ecx + edi * 2) = (uint16_t)(LO16(eax)); /* 0x1204F155: mov word ptr [ecx + edi*2], ax */
    eax = MEM32(esi + 0x244); /* 0x1204F159: mov eax, dword ptr [esi + 0x244] */
    MEM16(eax + ebx * 2) = (uint16_t)(LO16(edx)); /* 0x1204F15F: mov word ptr [eax + ebx*2], dx */
L_1204F163:
    esp = ebp + (-0x14); /* 0x1204F163: lea esp, [ebp - 0x14] */
    edi = POP32_VAL(esp); /* 0x1204F166: pop edi */
    esi = POP32_VAL(esp); /* 0x1204F167: pop esi */
    ebx = POP32_VAL(esp); /* 0x1204F168: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x1204F169: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1204F16C: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x1204F16E: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1204F173: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1204F174: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1204F17C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204F17Cu);

L_1204F17C:
    edi = edi; /* 0x1204F17C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204F17E: push ebp */
    ebp = esp; /* 0x1204F17F: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1204F181: sub esp, 0xc */
    _flag_k = FK_CMP;
    edx = MEM32(ebp + 0xC); /* 0x1204F184: mov edx, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x1204F187: push ebx */
    edx = (uint32_t)((int32_t)edx * (int32_t)6); /* 0x1204F188: imul edx, edx, 6 */
    PUSH32(esp, esi); /* 0x1204F18B: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1204F18C: mov esi, dword ptr [ebp + 8] */
    esi = (uint32_t)((int32_t)esi * (int32_t)6); /* 0x1204F18F: imul esi, esi, 6 */
    ebx = ecx; /* 0x1204F192: mov ebx, ecx */
    eax = MEM32(ebx + 0x24C); /* 0x1204F194: mov eax, dword ptr [ebx + 0x24c] */
    ecx = edx + eax; /* 0x1204F19A: lea ecx, [edx + eax] */
    PUSH32(esp, edi); /* 0x1204F19D: push edi */
    edi = eax + esi; /* 0x1204F19E: lea edi, [eax + esi] */
    eax = MEM32(ebx + 0x250); /* 0x1204F1A1: mov eax, dword ptr [ebx + 0x250] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x1204F1A7: add esi, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1204F1A9: add eax, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edi; /* 0x1204F1AB: sub ecx, edi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x1204F1AD: sub eax, edi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edi; /* 0x1204F1AF: sub esi, edi */
    _flag_k = FK_CMP;
    PUSH32(esp, 3); /* 0x1204F1B1: push 3 */
    MEM32(ebp + (-0xC)) = ecx; /* 0x1204F1B3: mov dword ptr [ebp - 0xc], ecx */
    MEM32(ebp + (-0x4)) = eax; /* 0x1204F1B6: mov dword ptr [ebp - 4], eax */
    MEM32(ebp + (-0x8)) = esi; /* 0x1204F1B9: mov dword ptr [ebp - 8], esi */
    edx = POP32_VAL(esp); /* 0x1204F1BC: pop edx */
L_1204F1BD:
    ecx = (uint32_t)MEM16(ecx + edi); /* 0x1204F1BD: movzx ecx, word ptr [ecx + edi] */
    SET_LO16(eax, MEM16(edi)); /* 0x1204F1C1: mov ax, word ptr [edi] */
    esi = MEM32(ebp + (-0xC)); /* 0x1204F1C4: mov esi, dword ptr [ebp - 0xc] */
    MEM16(esi + edi) = (uint16_t)(LO16(eax)); /* 0x1204F1C7: mov word ptr [esi + edi], ax */
    MEM16(edi) = (uint16_t)(LO16(ecx)); /* 0x1204F1CB: mov word ptr [edi], cx */
    /* test MEM8(ebx + 0x218), 1 */ /* 0x1204F1CE: test byte ptr [ebx + 0x218], 1 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x218)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204F1F3; /* 0x1204F1D5: je 0x1204f1f3 */
L_1204F1D7:
    eax = MEM32(ebp + (-0x4)); /* 0x1204F1D7: mov eax, dword ptr [ebp - 4] */
    ecx = (uint32_t)MEM16(eax + edi); /* 0x1204F1DA: movzx ecx, word ptr [eax + edi] */
    esi = MEM32(ebp + (-0x8)); /* 0x1204F1DE: mov esi, dword ptr [ebp - 8] */
    SET_LO16(eax, MEM16(esi + edi)); /* 0x1204F1E1: mov ax, word ptr [esi + edi] */
    esi = MEM32(ebp + (-0x4)); /* 0x1204F1E5: mov esi, dword ptr [ebp - 4] */
    MEM16(esi + edi) = (uint16_t)(LO16(eax)); /* 0x1204F1E8: mov word ptr [esi + edi], ax */
    esi = MEM32(ebp + (-0x8)); /* 0x1204F1EC: mov esi, dword ptr [ebp - 8] */
    MEM16(esi + edi) = (uint16_t)(LO16(ecx)); /* 0x1204F1EF: mov word ptr [esi + edi], cx */
L_1204F1F3:
    ecx = MEM32(ebp + (-0xC)); /* 0x1204F1F3: mov ecx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x1204F1F6: add edi, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1204F1F9: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1204F1BD; /* 0x1204F1FA: jne 0x1204f1bd */
L_1204F1FC:
    /* test MEM8(ebx + 0x218), 4 */ /* 0x1204F1FC: test byte ptr [ebx + 0x218], 4 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x218)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edi = MEM32(ebp + 0xC); /* 0x1204F203: mov edi, dword ptr [ebp + 0xc] */
    esi = MEM32(ebp + 0x8); /* 0x1204F206: mov esi, dword ptr [ebp + 8] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204F223; /* 0x1204F209: je 0x1204f223 */
L_1204F20B:
    ecx = MEM32(ebx + 0x254); /* 0x1204F20B: mov ecx, dword ptr [ebx + 0x254] */
    eax = MEM32(ecx + esi * 4); /* 0x1204F211: mov eax, dword ptr [ecx + esi*4] */
    edx = MEM32(ecx + edi * 4); /* 0x1204F214: mov edx, dword ptr [ecx + edi*4] */
    MEM32(ecx + edi * 4) = eax; /* 0x1204F217: mov dword ptr [ecx + edi*4], eax */
    eax = MEM32(ebx + 0x254); /* 0x1204F21A: mov eax, dword ptr [ebx + 0x254] */
    MEM32(eax + esi * 4) = edx; /* 0x1204F220: mov dword ptr [eax + esi*4], edx */
L_1204F223:
    /* test MEM8(ebx + 0x218), 8 */ /* 0x1204F223: test byte ptr [ebx + 0x218], 8 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x218)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204F248; /* 0x1204F22A: je 0x1204f248 */
L_1204F22C:
    ecx = MEM32(ebx + 0x258); /* 0x1204F22C: mov ecx, dword ptr [ebx + 0x258] */
    SET_LO16(eax, MEM16(ecx + esi * 2)); /* 0x1204F232: mov ax, word ptr [ecx + esi*2] */
    edx = (uint32_t)MEM16(ecx + edi * 2); /* 0x1204F236: movzx edx, word ptr [ecx + edi*2] */
    MEM16(ecx + edi * 2) = (uint16_t)(LO16(eax)); /* 0x1204F23A: mov word ptr [ecx + edi*2], ax */
    eax = MEM32(ebx + 0x258); /* 0x1204F23E: mov eax, dword ptr [ebx + 0x258] */
    MEM16(eax + esi * 2) = (uint16_t)(LO16(edx)); /* 0x1204F244: mov word ptr [eax + esi*2], dx */
L_1204F248:
    edi = POP32_VAL(esp); /* 0x1204F248: pop edi */
    esi = POP32_VAL(esp); /* 0x1204F249: pop esi */
    ebx = POP32_VAL(esp); /* 0x1204F24A: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1204F24B: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1204F24C: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1204F254(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204F254u);

L_1204F254:
    edi = edi; /* 0x1204F254: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204F256: push ebp */
    ebp = esp; /* 0x1204F257: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1204F259: push ebx */
    PUSH32(esp, esi); /* 0x1204F25A: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1204F25B: mov esi, dword ptr [ebp + 8] */
    esi = MEM32(esi); /* 0x1204F25E: mov esi, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x1204F260: push edi */
    /* test esi, esi */ /* 0x1204F261: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1204F28E; /* 0x1204F263: jne 0x1204f28e */
L_1204F265:
    PUSH32(esp, 0x120014BCu); /* 0x1204F265: push 0x120014bc */
    PUSH32(esp, 8); /* 0x1204F26A: push 8 */
    RECOMP_CALL(sub_12018970); /* 0x1204F26C: call 0x12018970 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1204F271: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1204F273: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1204F274: pop ecx */
    /* test esi, esi */ /* 0x1204F275: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1204F27D; /* 0x1204F277: jne 0x1204f27d */
L_1204F279:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1204F279: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1204F2FA; /* 0x1204F27B: jmp 0x1204f2fa */
L_1204F27D:
    edi = MEM32(ebp + 0x10); /* 0x1204F27D: mov edi, dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x14); /* 0x1204F280: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    MEM32(edi) = MEM32(edi) & 0; /* 0x1204F283: and dword ptr [edi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = 2; /* 0x1204F286: mov dword ptr [eax], 2 */
    goto L_1204F2E6; /* 0x1204F28C: jmp 0x1204f2e6 */
L_1204F28E:
    ebx = MEM32(ebp + 0x14); /* 0x1204F28E: mov ebx, dword ptr [ebp + 0x14] */
    eax = MEM32(ebx); /* 0x1204F291: mov eax, dword ptr [ebx] */
    edi = MEM32(ebp + 0x10); /* 0x1204F293: mov edi, dword ptr [ebp + 0x10] */
    /* cmp MEM32(edi), eax */ /* 0x1204F296: cmp dword ptr [edi], eax */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204F2E6; /* 0x1204F298: jne 0x1204f2e6 */
L_1204F29A:
    PUSH32(esp, 0x120014BCu); /* 0x1204F29A: push 0x120014bc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1204F29F: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x1204F2A1: push 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1204F2A3: add eax, eax */
    _flag_k = FK_ADD;
    edx = POP32_VAL(esp); /* 0x1204F2A5: pop edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x1204F2A6: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1204F2A8: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1204F2AB: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1204F2AD: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1204F2AF: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x1204F2B0: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1204F2B5: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1204F2B6: pop ecx */
    MEM32(ebp + 0x10) = eax; /* 0x1204F2B7: mov dword ptr [ebp + 0x10], eax */
    /* test eax, eax */ /* 0x1204F2BA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204F279; /* 0x1204F2BC: je 0x1204f279 */
L_1204F2BE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1204F2BE: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi), ecx */ /* 0x1204F2C0: cmp dword ptr [edi], ecx */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1204F2DA; /* 0x1204F2C2: jbe 0x1204f2da */
L_1204F2C4:
    ebx = esi; /* 0x1204F2C4: mov ebx, esi */
    edx = eax; /* 0x1204F2C6: mov edx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - eax; /* 0x1204F2C8: sub ebx, eax */
    _flag_k = FK_CMP;
L_1204F2CA:
    eax = MEM32(ebx + edx); /* 0x1204F2CA: mov eax, dword ptr [ebx + edx] */
    MEM32(edx) = eax; /* 0x1204F2CD: mov dword ptr [edx], eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1204F2CF: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x1204F2D0: add edx, 4 */
    _flag_k = FK_ADD;
    /* cmp ecx, MEM32(edi) */ /* 0x1204F2D3: cmp ecx, dword ptr [edi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1204F2CA; /* 0x1204F2D5: jb 0x1204f2ca */
L_1204F2D7:
    ebx = MEM32(ebp + 0x14); /* 0x1204F2D7: mov ebx, dword ptr [ebp + 0x14] */
L_1204F2DA:
    if (1u) _cf = (((MEM32(ebx)) >> 31) & 1u); /* 0x1204F2DA: shl dword ptr [ebx], 1 */
    if (1u) { _flag_a = recomp_flags_pack((MEM32(ebx) << 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    MEM32(ebx) = MEM32(ebx) << 1u; /* 0x1204F2DA: shl dword ptr [ebx], 1 */
    PUSH32(esp, esi); /* 0x1204F2DC: push esi */
    RECOMP_CALL(sub_121BF388); /* 0x1204F2DD: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x10); /* 0x1204F2E2: mov esi, dword ptr [ebp + 0x10] */
    ecx = POP32_VAL(esp); /* 0x1204F2E5: pop ecx */
L_1204F2E6:
    ecx = MEM32(edi); /* 0x1204F2E6: mov ecx, dword ptr [edi] */
    eax = MEM32(ebp + 0xC); /* 0x1204F2E8: mov eax, dword ptr [ebp + 0xc] */
    eax = MEM32(eax); /* 0x1204F2EB: mov eax, dword ptr [eax] */
    MEM32(esi + ecx * 4) = eax; /* 0x1204F2ED: mov dword ptr [esi + ecx*4], eax */
    eax = MEM32(ebp + 0x8); /* 0x1204F2F0: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(1);
    MEM32(edi) = MEM32(edi) + 1; /* 0x1204F2F3: inc dword ptr [edi] */
    _flag_k = FK_INC;
    MEM32(eax) = esi; /* 0x1204F2F5: mov dword ptr [eax], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1204F2F7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1204F2F9: inc eax */
    _flag_k = FK_INC;
L_1204F2FA:
    edi = POP32_VAL(esp); /* 0x1204F2FA: pop edi */
    esi = POP32_VAL(esp); /* 0x1204F2FB: pop esi */
    ebx = POP32_VAL(esp); /* 0x1204F2FC: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1204F2FD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1204F2FE: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1204F306(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204F306u);

L_1204F306:
    edi = edi; /* 0x1204F306: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204F308: push ebp */
    ebp = esp; /* 0x1204F309: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1204F30B: push ebx */
    PUSH32(esp, esi); /* 0x1204F30C: push esi */
    esi = (uint32_t)MEM16(ebp + 0x8); /* 0x1204F30D: movzx esi, word ptr [ebp + 8] */
    esi = (uint32_t)((int32_t)esi * (int32_t)6); /* 0x1204F311: imul esi, esi, 6 */
    edx = ecx; /* 0x1204F314: mov edx, ecx */
    eax = MEM32(edx + 0x10); /* 0x1204F316: mov eax, dword ptr [edx + 0x10] */
    /* cmp MEM16(eax + esi + 0x2), 0xFFFFu */ /* 0x1204F319: cmp word ptr [eax + esi + 2], 0xffff */
    _flag_a = (uint32_t)(MEM16(eax + esi + 0x2)) << 16; _flag_b = (uint32_t)(0xFFFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    PUSH32(esp, edi); /* 0x1204F320: push edi */
    ecx = eax; /* 0x1204F321: mov ecx, eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204F34F; /* 0x1204F323: je 0x1204f34f */
L_1204F325:
    ebx = (uint32_t)MEM16(ecx + esi + 0x2); /* 0x1204F325: movzx ebx, word ptr [ecx + esi + 2] */
    edi = (uint32_t)MEM16(ecx + esi + 0x4); /* 0x1204F32A: movzx edi, word ptr [ecx + esi + 4] */
    eax = ebx; /* 0x1204F32F: mov eax, ebx */
    eax = (uint32_t)((int32_t)eax * (int32_t)6); /* 0x1204F331: imul eax, eax, 6 */
    MEM16(eax + ecx + 0x4) = (uint16_t)(LO16(edi)); /* 0x1204F334: mov word ptr [eax + ecx + 4], di */
    /* cmp LO16(edi), 0xFFFFu */ /* 0x1204F339: cmp di, 0xffff */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(0xFFFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204F372; /* 0x1204F33E: je 0x1204f372 */
L_1204F340:
    eax = MEM32(edx + 0x10); /* 0x1204F340: mov eax, dword ptr [edx + 0x10] */
    ecx = edi; /* 0x1204F343: mov ecx, edi */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)6); /* 0x1204F345: imul ecx, ecx, 6 */
    MEM16(ecx + eax + 0x2) = (uint16_t)(LO16(ebx)); /* 0x1204F348: mov word ptr [ecx + eax + 2], bx */
    goto L_1204F372; /* 0x1204F34D: jmp 0x1204f372 */
L_1204F34F:
    eax = (uint32_t)MEM8(ecx + esi + 0x1); /* 0x1204F34F: movzx eax, byte ptr [ecx + esi + 1] */
    ecx = (uint32_t)MEM16(ecx + esi + 0x4); /* 0x1204F354: movzx ecx, word ptr [ecx + esi + 4] */
    MEM16(edx + eax * 2 + 0x8) = (uint16_t)(LO16(ecx)); /* 0x1204F359: mov word ptr [edx + eax*2 + 8], cx */
    /* cmp LO16(ecx), 0xFFFFu */ /* 0x1204F35E: cmp cx, 0xffff */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(0xFFFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204F372; /* 0x1204F363: je 0x1204f372 */
L_1204F365:
    eax = MEM32(edx + 0x10); /* 0x1204F365: mov eax, dword ptr [edx + 0x10] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)6); /* 0x1204F368: imul ecx, ecx, 6 */
    _flag_a = (uint32_t)((MEM16(ecx + eax + 0x2) | 0xFFFFu)) << 16; _flag_b = (uint32_t)((MEM16(ecx + eax + 0x2) | 0xFFFFu)) << 16;
    MEM16(ecx + eax + 0x2) = (uint16_t)(MEM16(ecx + eax + 0x2) | 0xFFFFu); /* 0x1204F36B: or word ptr [ecx + eax + 2], 0xffff */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
L_1204F372:
    eax = MEM32(edx + 0x10); /* 0x1204F372: mov eax, dword ptr [edx + 0x10] */
    _flag_a = (uint32_t)((MEM16(eax + esi + 0x4) | 0xFFFFu)) << 16; _flag_b = (uint32_t)((MEM16(eax + esi + 0x4) | 0xFFFFu)) << 16;
    MEM16(eax + esi + 0x4) = (uint16_t)(MEM16(eax + esi + 0x4) | 0xFFFFu); /* 0x1204F375: or word ptr [eax + esi + 4], 0xffff */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    eax = MEM32(edx + 0x10); /* 0x1204F37C: mov eax, dword ptr [edx + 0x10] */
    _flag_a = (uint32_t)((MEM16(eax + esi + 0x2) | 0xFFFFu)) << 16; _flag_b = (uint32_t)((MEM16(eax + esi + 0x2) | 0xFFFFu)) << 16;
    MEM16(eax + esi + 0x2) = (uint16_t)(MEM16(eax + esi + 0x2) | 0xFFFFu); /* 0x1204F37F: or word ptr [eax + esi + 2], 0xffff */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    edi = POP32_VAL(esp); /* 0x1204F386: pop edi */
    esi = POP32_VAL(esp); /* 0x1204F387: pop esi */
    ebx = POP32_VAL(esp); /* 0x1204F388: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1204F389: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1204F38A: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1204F392(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204F392u);

L_1204F392:
    edi = edi; /* 0x1204F392: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204F394: push ebp */
    ebp = esp; /* 0x1204F395: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1204F397: push ebx */
    PUSH32(esp, esi); /* 0x1204F398: push esi */
    PUSH32(esp, edi); /* 0x1204F399: push edi */
    SET_LO16(edi, MEM16(ebp + 0x8)); /* 0x1204F39A: mov di, word ptr [ebp + 8] */
    ebx = (uint32_t)LO16(edi); /* 0x1204F39E: movzx ebx, di */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)6); /* 0x1204F3A1: imul ebx, ebx, 6 */
    esi = ecx; /* 0x1204F3A4: mov esi, ecx */
    edx = MEM32(esi + 0x10); /* 0x1204F3A6: mov edx, dword ptr [esi + 0x10] */
    eax = (uint32_t)MEM8(edx + ebx + 0x1); /* 0x1204F3A9: movzx eax, byte ptr [edx + ebx + 1] */
    MEM32(ebp + 0x8) = eax; /* 0x1204F3AE: mov dword ptr [ebp + 8], eax */
    eax = (uint32_t)MEM16(esi + eax * 2 + 0x8); /* 0x1204F3B1: movzx eax, word ptr [esi + eax*2 + 8] */
    MEM16(edx + ebx + 0x4) = (uint16_t)(LO16(eax)); /* 0x1204F3B6: mov word ptr [edx + ebx + 4], ax */
    /* cmp LO16(eax), 0xFFFFu */ /* 0x1204F3BB: cmp ax, 0xffff */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0xFFFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204F3CE; /* 0x1204F3BF: je 0x1204f3ce */
L_1204F3C1:
    ecx = eax; /* 0x1204F3C1: mov ecx, eax */
    eax = MEM32(esi + 0x10); /* 0x1204F3C3: mov eax, dword ptr [esi + 0x10] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)6); /* 0x1204F3C6: imul ecx, ecx, 6 */
    MEM16(ecx + eax + 0x2) = (uint16_t)(LO16(edi)); /* 0x1204F3C9: mov word ptr [ecx + eax + 2], di */
L_1204F3CE:
    eax = MEM32(ebp + 0x8); /* 0x1204F3CE: mov eax, dword ptr [ebp + 8] */
    MEM16(esi + eax * 2 + 0x8) = (uint16_t)(LO16(edi)); /* 0x1204F3D1: mov word ptr [esi + eax*2 + 8], di */
    eax = MEM32(esi + 0x10); /* 0x1204F3D6: mov eax, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)((MEM16(eax + ebx + 0x2) | 0xFFFFu)) << 16; _flag_b = (uint32_t)((MEM16(eax + ebx + 0x2) | 0xFFFFu)) << 16;
    MEM16(eax + ebx + 0x2) = (uint16_t)(MEM16(eax + ebx + 0x2) | 0xFFFFu); /* 0x1204F3D9: or word ptr [eax + ebx + 2], 0xffff */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    edi = POP32_VAL(esp); /* 0x1204F3E0: pop edi */
    esi = POP32_VAL(esp); /* 0x1204F3E1: pop esi */
    ebx = POP32_VAL(esp); /* 0x1204F3E2: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1204F3E3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1204F3E4: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1204F3EC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204F3ECu);

L_1204F3EC:
    edi = edi; /* 0x1204F3EC: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204F3EE: push ebp */
    ebp = esp; /* 0x1204F3EF: mov ebp, esp */
    SET_LO16(eax, MEM16(ebp + 0x8)); /* 0x1204F3F1: mov ax, word ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1204F3F5: push esi */
    PUSH32(esp, edi); /* 0x1204F3F6: push edi */
    edi = ecx; /* 0x1204F3F7: mov edi, ecx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(edi + 0x14)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO16(eax, LO16(eax) - MEM16(edi + 0x14)); /* 0x1204F3F9: sub ax, word ptr [edi + 0x14] */
    _flag_k = FK_NARROW(FK_CMP, 16);
    esi = (uint32_t)LO16(eax); /* 0x1204F3FD: movzx esi, ax */
    PUSH32(esp, esi); /* 0x1204F400: push esi */
    RECOMP_CALL(sub_1204F306); /* 0x1204F401: call 0x1204f306 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x10); /* 0x1204F406: mov eax, dword ptr [edi + 0x10] */
    edx = esi; /* 0x1204F409: mov edx, esi */
    edx = (uint32_t)((int32_t)edx * (int32_t)6); /* 0x1204F40B: imul edx, edx, 6 */
    eax = edx + eax + 0x1; /* 0x1204F40E: lea eax, [edx + eax + 1] */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) - 1); /* 0x1204F412: dec byte ptr [eax] */
    _flag_k = FK_NARROW(FK_DEC, 24);
    PUSH32(esp, esi); /* 0x1204F414: push esi */
    ecx = edi; /* 0x1204F415: mov ecx, edi */
    RECOMP_CALL(sub_1204F392); /* 0x1204F417: call 0x1204f392 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x1204F41C: pop edi */
    esi = POP32_VAL(esp); /* 0x1204F41D: pop esi */
    ebp = POP32_VAL(esp); /* 0x1204F41E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1204F41F: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1204F427(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204F427u);

L_1204F427:
    edi = edi; /* 0x1204F427: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204F429: push ebp */
    ebp = esp; /* 0x1204F42A: mov ebp, esp */
    /* test MEM8(ecx + 0x218), 2 */ /* 0x1204F42C: test byte ptr [ecx + 0x218], 2 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x218)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204F44C; /* 0x1204F433: je 0x1204f44c */
L_1204F435:
    edx = MEM32(ebp + 0x8); /* 0x1204F435: mov edx, dword ptr [ebp + 8] */
    eax = MEM32(ebp + 0xC); /* 0x1204F438: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1204F43B: push esi */
    esi = MEM32(ecx + 0x244); /* 0x1204F43C: mov esi, dword ptr [ecx + 0x244] */
    ecx = MEM32(esi + edx * 4); /* 0x1204F442: mov ecx, dword ptr [esi + edx*4] */
    eax = MEM32(eax + ecx * 4); /* 0x1204F445: mov eax, dword ptr [eax + ecx*4] */
    MEM32(esi + edx * 4) = eax; /* 0x1204F448: mov dword ptr [esi + edx*4], eax */
    esi = POP32_VAL(esp); /* 0x1204F44B: pop esi */
L_1204F44C:
    ebp = POP32_VAL(esp); /* 0x1204F44C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1204F44D: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1204F455(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204F455u);

L_1204F455:
    edi = edi; /* 0x1204F455: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204F457: push ebp */
    ebp = esp; /* 0x1204F458: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1204F45A: mov eax, dword ptr [ebp + 8] */
    edx = MEM32(ecx + 0x250); /* 0x1204F45D: mov edx, dword ptr [ecx + 0x250] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0xCu); /* 0x1204F463: imul eax, eax, 0xc */
    PUSH32(esp, esi); /* 0x1204F466: push esi */
    esi = MEM32(ecx + 0x24C); /* 0x1204F467: mov esi, dword ptr [ecx + 0x24c] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x1204F46D: add esi, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x1204F46F: add edx, eax */
    _flag_k = FK_ADD;
    /* cmp MEM32(esi), 0xFFFFFFFFu */ /* 0x1204F471: cmp dword ptr [esi], -1 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204F4AE; /* 0x1204F474: je 0x1204f4ae */
L_1204F476:
    PUSH32(esp, ebx); /* 0x1204F476: push ebx */
    PUSH32(esp, edi); /* 0x1204F477: push edi */
    PUSH32(esp, 3); /* 0x1204F478: push 3 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edx; /* 0x1204F47A: sub esi, edx */
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x1204F47C: pop edi */
L_1204F47D:
    eax = MEM32(esi + edx); /* 0x1204F47D: mov eax, dword ptr [esi + edx] */
    ebx = MEM32(ebp + 0xC); /* 0x1204F480: mov ebx, dword ptr [ebp + 0xc] */
    eax = MEM32(ebx + eax * 4); /* 0x1204F483: mov eax, dword ptr [ebx + eax*4] */
    ebx = MEM32(ebp + 0x10); /* 0x1204F486: mov ebx, dword ptr [ebp + 0x10] */
    MEM32(esi + edx) = eax; /* 0x1204F489: mov dword ptr [esi + edx], eax */
    /* test MEM8(ecx + 0x218), 1 */ /* 0x1204F48C: test byte ptr [ecx + 0x218], 1 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x218)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204F4A6; /* 0x1204F493: je 0x1204f4a6 */
L_1204F495:
    eax = MEM32(edx); /* 0x1204F495: mov eax, dword ptr [edx] */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1204F497: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204F4A3; /* 0x1204F49A: je 0x1204f4a3 */
L_1204F49C:
    eax = MEM32(ebx + eax * 4); /* 0x1204F49C: mov eax, dword ptr [ebx + eax*4] */
    MEM32(edx) = eax; /* 0x1204F49F: mov dword ptr [edx], eax */
    goto L_1204F4A6; /* 0x1204F4A1: jmp 0x1204f4a6 */
L_1204F4A3:
    _flag_a = (uint32_t)((MEM32(edx) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(edx) | 0xFFFFFFFFu));
    MEM32(edx) = MEM32(edx) | 0xFFFFFFFFu; /* 0x1204F4A3: or dword ptr [edx], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1204F4A6:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x1204F4A6: add edx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1204F4A9: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1204F47D; /* 0x1204F4AA: jne 0x1204f47d */
L_1204F4AC:
    edi = POP32_VAL(esp); /* 0x1204F4AC: pop edi */
    ebx = POP32_VAL(esp); /* 0x1204F4AD: pop ebx */
L_1204F4AE:
    esi = POP32_VAL(esp); /* 0x1204F4AE: pop esi */
    ebp = POP32_VAL(esp); /* 0x1204F4AF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1204F4B0: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1204F4B8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204F4B8u);

L_1204F4B8:
    edi = edi; /* 0x1204F4B8: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204F4BA: push ebp */
    ebp = esp; /* 0x1204F4BB: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1204F4BD: push ecx */
    PUSH32(esp, ecx); /* 0x1204F4BE: push ecx */
    eax = MEM32(0x121D9590); /* 0x1204F4BF: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1204F4C4: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1204F4C6: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x1204F4C9: push ebx */
    PUSH32(esp, esi); /* 0x1204F4CA: push esi */
    esi = ecx; /* 0x1204F4CB: mov esi, ecx */
    eax = MEM32(esi + 0x238); /* 0x1204F4CD: mov eax, dword ptr [esi + 0x238] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1204F4D3: add eax, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x1204F4D6: push edi */
    MEM32(ebp + (-0x8)) = esi; /* 0x1204F4D7: mov dword ptr [ebp - 8], esi */
    /* cmp eax, 0x400u */ /* 0x1204F4DA: cmp eax, 0x400 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x400u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1204F4F4; /* 0x1204F4DF: ja 0x1204f4f4 */
L_1204F4E1:
    RECOMP_CALL(sub_121BF530); /* 0x1204F4E1: call 0x121bf530 */
    RECOMP_FLAGS_IN();
    ebx = esp; /* 0x1204F4E6: mov ebx, esp */
    /* test ebx, ebx */ /* 0x1204F4E8: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204F50A; /* 0x1204F4EA: je 0x1204f50a */
L_1204F4EC:
    MEM32(ebx) = 0xCCCCu; /* 0x1204F4EC: mov dword ptr [ebx], 0xcccc */
    goto L_1204F507; /* 0x1204F4F2: jmp 0x1204f507 */
L_1204F4F4:
    PUSH32(esp, eax); /* 0x1204F4F4: push eax */
    RECOMP_CALL(sub_121BF524); /* 0x1204F4F5: call 0x121bf524 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1204F4FA: mov ebx, eax */
    ecx = POP32_VAL(esp); /* 0x1204F4FC: pop ecx */
    /* test ebx, ebx */ /* 0x1204F4FD: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204F50A; /* 0x1204F4FF: je 0x1204f50a */
L_1204F501:
    MEM32(ebx) = 0xDDDDu; /* 0x1204F501: mov dword ptr [ebx], 0xdddd */
L_1204F507:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 8; /* 0x1204F507: add ebx, 8 */
    _flag_k = FK_ADD;
L_1204F50A:
    eax = MEM32(esi + 0x238); /* 0x1204F50A: mov eax, dword ptr [esi + 0x238] */
    esi = eax; /* 0x1204F510: mov esi, eax */
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(ebp + 0xC)); /* 0x1204F512: imul esi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + 0x10); /* 0x1204F516: add esi, dword ptr [ebp + 0x10] */
    _flag_k = FK_ADD;
    edi = eax; /* 0x1204F519: mov edi, eax */
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(ebp + 0x8)); /* 0x1204F51B: imul edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebp + 0x10); /* 0x1204F51F: add edi, dword ptr [ebp + 0x10] */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1204F522: push eax */
    PUSH32(esp, esi); /* 0x1204F523: push esi */
    PUSH32(esp, ebx); /* 0x1204F524: push ebx */
    RECOMP_CALL(sub_121BF440); /* 0x1204F525: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x8)); /* 0x1204F52A: mov eax, dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(eax + 0x238)); /* 0x1204F52D: push dword ptr [eax + 0x238] */
    PUSH32(esp, edi); /* 0x1204F533: push edi */
    PUSH32(esp, esi); /* 0x1204F534: push esi */
    RECOMP_CALL(sub_121BF440); /* 0x1204F535: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x8)); /* 0x1204F53A: mov esi, dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(esi + 0x238)); /* 0x1204F53D: push dword ptr [esi + 0x238] */
    PUSH32(esp, ebx); /* 0x1204F543: push ebx */
    PUSH32(esp, edi); /* 0x1204F544: push edi */
    RECOMP_CALL(sub_121BF440); /* 0x1204F545: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x24u; /* 0x1204F54A: add esp, 0x24 */
    _flag_k = FK_ADD;
    /* test MEM8(esi + 0x218), 2 */ /* 0x1204F54D: test byte ptr [esi + 0x218], 2 */
    _flag_a = (uint32_t)(MEM8(esi + 0x218)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204F574; /* 0x1204F554: je 0x1204f574 */
L_1204F556:
    ecx = MEM32(esi + 0x244); /* 0x1204F556: mov ecx, dword ptr [esi + 0x244] */
    ebx = MEM32(ebp + 0x8); /* 0x1204F55C: mov ebx, dword ptr [ebp + 8] */
    edi = MEM32(ebp + 0xC); /* 0x1204F55F: mov edi, dword ptr [ebp + 0xc] */
    eax = MEM32(ecx + ebx * 4); /* 0x1204F562: mov eax, dword ptr [ecx + ebx*4] */
    edx = MEM32(ecx + edi * 4); /* 0x1204F565: mov edx, dword ptr [ecx + edi*4] */
    MEM32(ecx + edi * 4) = eax; /* 0x1204F568: mov dword ptr [ecx + edi*4], eax */
    eax = MEM32(esi + 0x244); /* 0x1204F56B: mov eax, dword ptr [esi + 0x244] */
    MEM32(eax + ebx * 4) = edx; /* 0x1204F571: mov dword ptr [eax + ebx*4], edx */
L_1204F574:
    esp = ebp + (-0x14); /* 0x1204F574: lea esp, [ebp - 0x14] */
    edi = POP32_VAL(esp); /* 0x1204F577: pop edi */
    esi = POP32_VAL(esp); /* 0x1204F578: pop esi */
    ebx = POP32_VAL(esp); /* 0x1204F579: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x1204F57A: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1204F57D: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x1204F57F: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1204F584: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1204F585: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1204F58D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204F58Du);

L_1204F58D:
    edi = edi; /* 0x1204F58D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204F58F: push ebp */
    ebp = esp; /* 0x1204F590: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1204F592: sub esp, 0xc */
    _flag_k = FK_CMP;
    edx = MEM32(ebp + 0xC); /* 0x1204F595: mov edx, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x1204F598: push ebx */
    edx = (uint32_t)((int32_t)edx * (int32_t)0xCu); /* 0x1204F599: imul edx, edx, 0xc */
    PUSH32(esp, esi); /* 0x1204F59C: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1204F59D: mov esi, dword ptr [ebp + 8] */
    esi = (uint32_t)((int32_t)esi * (int32_t)0xCu); /* 0x1204F5A0: imul esi, esi, 0xc */
    ebx = ecx; /* 0x1204F5A3: mov ebx, ecx */
    eax = MEM32(ebx + 0x24C); /* 0x1204F5A5: mov eax, dword ptr [ebx + 0x24c] */
    ecx = edx + eax; /* 0x1204F5AB: lea ecx, [edx + eax] */
    PUSH32(esp, edi); /* 0x1204F5AE: push edi */
    edi = eax + esi; /* 0x1204F5AF: lea edi, [eax + esi] */
    eax = MEM32(ebx + 0x250); /* 0x1204F5B2: mov eax, dword ptr [ebx + 0x250] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x1204F5B8: add esi, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1204F5BA: add eax, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edi; /* 0x1204F5BC: sub ecx, edi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x1204F5BE: sub eax, edi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edi; /* 0x1204F5C0: sub esi, edi */
    _flag_k = FK_CMP;
    PUSH32(esp, 3); /* 0x1204F5C2: push 3 */
    MEM32(ebp + (-0xC)) = ecx; /* 0x1204F5C4: mov dword ptr [ebp - 0xc], ecx */
    MEM32(ebp + (-0x4)) = eax; /* 0x1204F5C7: mov dword ptr [ebp - 4], eax */
    MEM32(ebp + (-0x8)) = esi; /* 0x1204F5CA: mov dword ptr [ebp - 8], esi */
    edx = POP32_VAL(esp); /* 0x1204F5CD: pop edx */
L_1204F5CE:
    eax = MEM32(edi); /* 0x1204F5CE: mov eax, dword ptr [edi] */
    ecx = MEM32(ecx + edi); /* 0x1204F5D0: mov ecx, dword ptr [ecx + edi] */
    esi = MEM32(ebp + (-0xC)); /* 0x1204F5D3: mov esi, dword ptr [ebp - 0xc] */
    MEM32(esi + edi) = eax; /* 0x1204F5D6: mov dword ptr [esi + edi], eax */
    MEM32(edi) = ecx; /* 0x1204F5D9: mov dword ptr [edi], ecx */
    /* test MEM8(ebx + 0x218), 1 */ /* 0x1204F5DB: test byte ptr [ebx + 0x218], 1 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x218)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204F5FC; /* 0x1204F5E2: je 0x1204f5fc */
L_1204F5E4:
    eax = MEM32(ebp + (-0x4)); /* 0x1204F5E4: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax + edi); /* 0x1204F5E7: mov ecx, dword ptr [eax + edi] */
    esi = MEM32(ebp + (-0x8)); /* 0x1204F5EA: mov esi, dword ptr [ebp - 8] */
    eax = MEM32(esi + edi); /* 0x1204F5ED: mov eax, dword ptr [esi + edi] */
    esi = MEM32(ebp + (-0x4)); /* 0x1204F5F0: mov esi, dword ptr [ebp - 4] */
    MEM32(esi + edi) = eax; /* 0x1204F5F3: mov dword ptr [esi + edi], eax */
    esi = MEM32(ebp + (-0x8)); /* 0x1204F5F6: mov esi, dword ptr [ebp - 8] */
    MEM32(esi + edi) = ecx; /* 0x1204F5F9: mov dword ptr [esi + edi], ecx */
L_1204F5FC:
    ecx = MEM32(ebp + (-0xC)); /* 0x1204F5FC: mov ecx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x1204F5FF: add edi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1204F602: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1204F5CE; /* 0x1204F603: jne 0x1204f5ce */
L_1204F605:
    /* test MEM8(ebx + 0x218), 4 */ /* 0x1204F605: test byte ptr [ebx + 0x218], 4 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x218)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edi = MEM32(ebp + 0xC); /* 0x1204F60C: mov edi, dword ptr [ebp + 0xc] */
    esi = MEM32(ebp + 0x8); /* 0x1204F60F: mov esi, dword ptr [ebp + 8] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204F62C; /* 0x1204F612: je 0x1204f62c */
L_1204F614:
    ecx = MEM32(ebx + 0x254); /* 0x1204F614: mov ecx, dword ptr [ebx + 0x254] */
    eax = MEM32(ecx + esi * 4); /* 0x1204F61A: mov eax, dword ptr [ecx + esi*4] */
    edx = MEM32(ecx + edi * 4); /* 0x1204F61D: mov edx, dword ptr [ecx + edi*4] */
    MEM32(ecx + edi * 4) = eax; /* 0x1204F620: mov dword ptr [ecx + edi*4], eax */
    eax = MEM32(ebx + 0x254); /* 0x1204F623: mov eax, dword ptr [ebx + 0x254] */
    MEM32(eax + esi * 4) = edx; /* 0x1204F629: mov dword ptr [eax + esi*4], edx */
L_1204F62C:
    /* test MEM8(ebx + 0x218), 8 */ /* 0x1204F62C: test byte ptr [ebx + 0x218], 8 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x218)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204F651; /* 0x1204F633: je 0x1204f651 */
L_1204F635:
    ecx = MEM32(ebx + 0x258); /* 0x1204F635: mov ecx, dword ptr [ebx + 0x258] */
    SET_LO16(eax, MEM16(ecx + esi * 2)); /* 0x1204F63B: mov ax, word ptr [ecx + esi*2] */
    edx = (uint32_t)MEM16(ecx + edi * 2); /* 0x1204F63F: movzx edx, word ptr [ecx + edi*2] */
    MEM16(ecx + edi * 2) = (uint16_t)(LO16(eax)); /* 0x1204F643: mov word ptr [ecx + edi*2], ax */
    eax = MEM32(ebx + 0x258); /* 0x1204F647: mov eax, dword ptr [ebx + 0x258] */
    MEM16(eax + esi * 2) = (uint16_t)(LO16(edx)); /* 0x1204F64D: mov word ptr [eax + esi*2], dx */
L_1204F651:
    edi = POP32_VAL(esp); /* 0x1204F651: pop edi */
    esi = POP32_VAL(esp); /* 0x1204F652: pop esi */
    ebx = POP32_VAL(esp); /* 0x1204F653: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1204F654: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1204F655: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1204F65D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204F65Du);

L_1204F65D:
    edi = edi; /* 0x1204F65D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204F65F: push ebp */
    ebp = esp; /* 0x1204F660: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x1204F662: mov edx, dword ptr [ebp + 8] */
    edx = (uint32_t)((int32_t)edx * (int32_t)0xCu); /* 0x1204F665: imul edx, edx, 0xc */
    PUSH32(esp, ebx); /* 0x1204F668: push ebx */
    PUSH32(esp, esi); /* 0x1204F669: push esi */
    esi = ecx; /* 0x1204F66A: mov esi, ecx */
    eax = MEM32(esi + 0x18); /* 0x1204F66C: mov eax, dword ptr [esi + 0x18] */
    /* cmp MEM32(eax + edx + 0x4), 0xFFFFFFFFu */ /* 0x1204F66F: cmp dword ptr [eax + edx + 4], -1 */
    _flag_a = (uint32_t)(MEM32(eax + edx + 0x4)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x1204F674: push edi */
    ecx = eax; /* 0x1204F675: mov ecx, eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204F69B; /* 0x1204F677: je 0x1204f69b */
L_1204F679:
    ebx = MEM32(ecx + edx + 0x4); /* 0x1204F679: mov ebx, dword ptr [ecx + edx + 4] */
    edi = MEM32(ecx + edx + 0x8); /* 0x1204F67D: mov edi, dword ptr [ecx + edx + 8] */
    eax = ebx; /* 0x1204F681: mov eax, ebx */
    eax = (uint32_t)((int32_t)eax * (int32_t)0xCu); /* 0x1204F683: imul eax, eax, 0xc */
    MEM32(eax + ecx + 0x8) = edi; /* 0x1204F686: mov dword ptr [eax + ecx + 8], edi */
    /* cmp edi, 0xFFFFFFFFu */ /* 0x1204F68A: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204F6B8; /* 0x1204F68D: je 0x1204f6b8 */
L_1204F68F:
    eax = MEM32(esi + 0x18); /* 0x1204F68F: mov eax, dword ptr [esi + 0x18] */
    edi = (uint32_t)((int32_t)edi * (int32_t)0xCu); /* 0x1204F692: imul edi, edi, 0xc */
    MEM32(edi + eax + 0x4) = ebx; /* 0x1204F695: mov dword ptr [edi + eax + 4], ebx */
    goto L_1204F6B8; /* 0x1204F699: jmp 0x1204f6b8 */
L_1204F69B:
    eax = (uint32_t)MEM8(ecx + edx + 0x1); /* 0x1204F69B: movzx eax, byte ptr [ecx + edx + 1] */
    ecx = MEM32(ecx + edx + 0x8); /* 0x1204F6A0: mov ecx, dword ptr [ecx + edx + 8] */
    MEM32(esi + eax * 4 + 0x8) = ecx; /* 0x1204F6A4: mov dword ptr [esi + eax*4 + 8], ecx */
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x1204F6A8: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204F6B8; /* 0x1204F6AB: je 0x1204f6b8 */
L_1204F6AD:
    eax = MEM32(esi + 0x18); /* 0x1204F6AD: mov eax, dword ptr [esi + 0x18] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xCu); /* 0x1204F6B0: imul ecx, ecx, 0xc */
    _flag_a = (uint32_t)((MEM32(ecx + eax + 0x4) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ecx + eax + 0x4) | 0xFFFFFFFFu));
    MEM32(ecx + eax + 0x4) = MEM32(ecx + eax + 0x4) | 0xFFFFFFFFu; /* 0x1204F6B3: or dword ptr [ecx + eax + 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1204F6B8:
    eax = MEM32(esi + 0x18); /* 0x1204F6B8: mov eax, dword ptr [esi + 0x18] */
    _flag_a = (uint32_t)((MEM32(eax + edx + 0x8) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(eax + edx + 0x8) | 0xFFFFFFFFu));
    MEM32(eax + edx + 0x8) = MEM32(eax + edx + 0x8) | 0xFFFFFFFFu; /* 0x1204F6BB: or dword ptr [eax + edx + 8], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(esi + 0x18); /* 0x1204F6C0: mov eax, dword ptr [esi + 0x18] */
    _flag_a = (uint32_t)((MEM32(eax + edx + 0x4) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(eax + edx + 0x4) | 0xFFFFFFFFu));
    MEM32(eax + edx + 0x4) = MEM32(eax + edx + 0x4) | 0xFFFFFFFFu; /* 0x1204F6C3: or dword ptr [eax + edx + 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x1204F6C8: pop edi */
    esi = POP32_VAL(esp); /* 0x1204F6C9: pop esi */
    ebx = POP32_VAL(esp); /* 0x1204F6CA: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1204F6CB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1204F6CC: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1204F6D4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204F6D4u);

L_1204F6D4:
    edi = edi; /* 0x1204F6D4: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204F6D6: push ebp */
    ebp = esp; /* 0x1204F6D7: mov ebp, esp */
    edx = MEM32(ecx + 0x18); /* 0x1204F6D9: mov edx, dword ptr [ecx + 0x18] */
    PUSH32(esp, ebx); /* 0x1204F6DC: push ebx */
    PUSH32(esp, esi); /* 0x1204F6DD: push esi */
    PUSH32(esp, edi); /* 0x1204F6DE: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1204F6DF: mov edi, dword ptr [ebp + 8] */
    ebx = edi; /* 0x1204F6E2: mov ebx, edi */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0xCu); /* 0x1204F6E4: imul ebx, ebx, 0xc */
    eax = (uint32_t)MEM8(edx + ebx + 0x1); /* 0x1204F6E7: movzx eax, byte ptr [edx + ebx + 1] */
    esi = MEM32(ecx + eax * 4 + 0x8); /* 0x1204F6EC: mov esi, dword ptr [ecx + eax*4 + 8] */
    MEM32(ebp + 0x8) = eax; /* 0x1204F6F0: mov dword ptr [ebp + 8], eax */
    MEM32(edx + ebx + 0x8) = esi; /* 0x1204F6F3: mov dword ptr [edx + ebx + 8], esi */
    /* cmp esi, 0xFFFFFFFFu */ /* 0x1204F6F7: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204F709; /* 0x1204F6FA: je 0x1204f709 */
L_1204F6FC:
    eax = MEM32(ecx + 0x18); /* 0x1204F6FC: mov eax, dword ptr [ecx + 0x18] */
    esi = (uint32_t)((int32_t)esi * (int32_t)0xCu); /* 0x1204F6FF: imul esi, esi, 0xc */
    MEM32(esi + eax + 0x4) = edi; /* 0x1204F702: mov dword ptr [esi + eax + 4], edi */
    eax = MEM32(ebp + 0x8); /* 0x1204F706: mov eax, dword ptr [ebp + 8] */
L_1204F709:
    MEM32(ecx + eax * 4 + 0x8) = edi; /* 0x1204F709: mov dword ptr [ecx + eax*4 + 8], edi */
    eax = MEM32(ecx + 0x18); /* 0x1204F70D: mov eax, dword ptr [ecx + 0x18] */
    _flag_a = (uint32_t)((MEM32(eax + ebx + 0x4) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(eax + ebx + 0x4) | 0xFFFFFFFFu));
    MEM32(eax + ebx + 0x4) = MEM32(eax + ebx + 0x4) | 0xFFFFFFFFu; /* 0x1204F710: or dword ptr [eax + ebx + 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x1204F715: pop edi */
    esi = POP32_VAL(esp); /* 0x1204F716: pop esi */
    ebx = POP32_VAL(esp); /* 0x1204F717: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1204F718: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1204F719: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1204F721(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204F721u);

L_1204F721:
    edi = edi; /* 0x1204F721: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204F723: push ebp */
    ebp = esp; /* 0x1204F724: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1204F726: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1204F727: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1204F72A: push edi */
    edi = ecx; /* 0x1204F72B: mov edi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(edi + 0x1C); /* 0x1204F72D: sub esi, dword ptr [edi + 0x1c] */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1204F730: push esi */
    RECOMP_CALL(sub_1204F65D); /* 0x1204F731: call 0x1204f65d */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x18); /* 0x1204F736: mov eax, dword ptr [edi + 0x18] */
    edx = esi; /* 0x1204F739: mov edx, esi */
    edx = (uint32_t)((int32_t)edx * (int32_t)0xCu); /* 0x1204F73B: imul edx, edx, 0xc */
    eax = edx + eax + 0x1; /* 0x1204F73E: lea eax, [edx + eax + 1] */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) - 1); /* 0x1204F742: dec byte ptr [eax] */
    _flag_k = FK_NARROW(FK_DEC, 24);
    PUSH32(esp, esi); /* 0x1204F744: push esi */
    ecx = edi; /* 0x1204F745: mov ecx, edi */
    RECOMP_CALL(sub_1204F6D4); /* 0x1204F747: call 0x1204f6d4 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x1204F74C: pop edi */
    esi = POP32_VAL(esp); /* 0x1204F74D: pop esi */
    ebp = POP32_VAL(esp); /* 0x1204F74E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1204F74F: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1204F757(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204F757u);

L_1204F757:
    edi = edi; /* 0x1204F757: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204F759: push ebp */
    ebp = esp; /* 0x1204F75A: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x30u; /* 0x1204F75C: sub esp, 0x30 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1204F75F: push ebx */
    PUSH32(esp, esi); /* 0x1204F760: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1204F761: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1204F764: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1204F765: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 3); /* 0x1204F767: push 3 */
    eax = esi + 0x1; /* 0x1204F769: lea eax, [esi + 1] */
    ebx = POP32_VAL(esp); /* 0x1204F76C: pop ebx */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ebx; /* 0x1204F76D: div ebx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    eax = MEM32(ecx + 0xCC); /* 0x1204F76F: mov eax, dword ptr [ecx + 0xcc] */
    MEM32(ebp + (-0x8)) = ecx; /* 0x1204F775: mov dword ptr [ebp - 8], ecx */
    MEM32(ebp + (-0xC)) = ebx; /* 0x1204F778: mov dword ptr [ebp - 0xc], ebx */
    MEM32(ebp + (-0x4)) = edx; /* 0x1204F77B: mov dword ptr [ebp - 4], edx */
    edx = MEM32(ebp + 0x8); /* 0x1204F77E: mov edx, dword ptr [ebp + 8] */
    edi = edx; /* 0x1204F781: mov edi, edx */
    edi = (uint32_t)((int32_t)edi * (int32_t)0xCu); /* 0x1204F783: imul edi, edi, 0xc */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(eax + 0x24C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(eax + 0x24C); /* 0x1204F786: add edi, dword ptr [eax + 0x24c] */
    _flag_k = FK_ADD;
    eax = MEM32(eax + 0x250); /* 0x1204F78C: mov eax, dword ptr [eax + 0x250] */
    ecx = edx; /* 0x1204F792: mov ecx, edx */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)3); /* 0x1204F794: imul ecx, ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1204F797: add ecx, esi */
    _flag_k = FK_ADD;
    esi = MEM32(eax + ecx * 4); /* 0x1204F799: mov esi, dword ptr [eax + ecx*4] */
    /* cmp esi, 0xFFFFFFFFu */ /* 0x1204F79C: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204F806; /* 0x1204F79F: je 0x1204f806 */
L_1204F7A1:
    eax = MEM32(ebp + (-0x8)); /* 0x1204F7A1: mov eax, dword ptr [ebp - 8] */
    eax = MEM32(eax + 0xCC); /* 0x1204F7A4: mov eax, dword ptr [eax + 0xcc] */
    ecx = esi; /* 0x1204F7AA: mov ecx, esi */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xCu); /* 0x1204F7AC: imul ecx, ecx, 0xc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1204F7AF: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x250));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax + 0x250); /* 0x1204F7B1: add ecx, dword ptr [eax + 0x250] */
    _flag_k = FK_ADD;
    PUSH32(esp, 3); /* 0x1204F7B7: push 3 */
    eax = POP32_VAL(esp); /* 0x1204F7B9: pop eax */
L_1204F7BA:
    /* cmp MEM32(ecx), edx */ /* 0x1204F7BA: cmp dword ptr [ecx], edx */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204F7C6; /* 0x1204F7BC: je 0x1204f7c6 */
L_1204F7BE:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1204F7BE: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x1204F7BF: add ecx, 4 */
    _flag_k = FK_ADD;
    /* cmp ebx, eax */ /* 0x1204F7C2: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1204F7BA; /* 0x1204F7C4: jb 0x1204f7ba */
L_1204F7C6:
    eax = MEM32(ebp + (-0x8)); /* 0x1204F7C6: mov eax, dword ptr [ebp - 8] */
    esi = (uint32_t)((int32_t)esi * (int32_t)3); /* 0x1204F7C9: imul esi, esi, 3 */
    eax = MEM32(eax + 0xCC); /* 0x1204F7CC: mov eax, dword ptr [eax + 0xcc] */
    ecx = MEM32(eax + 0x24C); /* 0x1204F7D2: mov ecx, dword ptr [eax + 0x24c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1204F7D8: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebx + 0x1; /* 0x1204F7DA: lea eax, [ebx + 1] */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)MEM32(ebp + (-0xC)); /* 0x1204F7DD: div dword ptr [ebp - 0xc] */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    eax = MEM32(ebp + 0xC); /* 0x1204F7E0: mov eax, dword ptr [ebp + 0xc] */
    eax = MEM32(edi + eax * 4); /* 0x1204F7E3: mov eax, dword ptr [edi + eax*4] */
    MEM32(ebp + 0x8) = ecx; /* 0x1204F7E6: mov dword ptr [ebp + 8], ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x1204F7E9: add edx, esi */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ecx + edx * 4) */ /* 0x1204F7EB: cmp eax, dword ptr [ecx + edx*4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + edx * 4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204F806; /* 0x1204F7EE: jne 0x1204f806 */
L_1204F7F0:
    edx = MEM32(ebp + 0x8); /* 0x1204F7F0: mov edx, dword ptr [ebp + 8] */
    ecx = esi + ebx; /* 0x1204F7F3: lea ecx, [esi + ebx] */
    esi = MEM32(ebp + (-0x4)); /* 0x1204F7F6: mov esi, dword ptr [ebp - 4] */
    eax = MEM32(edi + esi * 4); /* 0x1204F7F9: mov eax, dword ptr [edi + esi*4] */
    /* cmp eax, MEM32(edx + ecx * 4) */ /* 0x1204F7FC: cmp eax, dword ptr [edx + ecx*4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + ecx * 4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204F809; /* 0x1204F7FF: jne 0x1204f809 */
L_1204F801:
    goto L_1204F8BA; /* 0x1204F801: jmp 0x1204f8ba */
L_1204F806:
    esi = MEM32(ebp + (-0x4)); /* 0x1204F806: mov esi, dword ptr [ebp - 4] */
L_1204F809:
    edx = MEM32(edi + esi * 4); /* 0x1204F809: mov edx, dword ptr [edi + esi*4] */
    eax = MEM32(ebp + (-0x8)); /* 0x1204F80C: mov eax, dword ptr [ebp - 8] */
    ecx = MEM32(eax + 0xC8); /* 0x1204F80F: mov ecx, dword ptr [eax + 0xc8] */
    ebx = MEM32(ebp + 0xC); /* 0x1204F815: mov ebx, dword ptr [ebp + 0xc] */
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx); /* 0x1204F818: imul edx, ecx */
    ebx = MEM32(edi + ebx * 4); /* 0x1204F81B: mov ebx, dword ptr [edi + ebx*4] */
    eax = MEM32(eax + 0x90); /* 0x1204F81E: mov eax, dword ptr [eax + 0x90] */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)ecx); /* 0x1204F824: imul ebx, ecx */
    eax = (uint32_t)MEM16(eax + 0x2); /* 0x1204F827: movzx eax, word ptr [eax + 2] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x1204F82B: add ebx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(ebp + 0x14); /* 0x1204F82D: add ebx, dword ptr [ebp + 0x14] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x1204F830: add edx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + 0x14); /* 0x1204F832: add edx, dword ptr [ebp + 0x14] */
    _flag_k = FK_ADD;
    esi = ebp + (-0x30); /* 0x1204F835: lea esi, [ebp - 0x30] */
    fp_push(*(float*)&MEM32(ebx)); /* 0x1204F838: fld dword ptr [ebx] */
    edi = ebp + (-0x24); /* 0x1204F83A: lea edi, [ebp - 0x24] */
    _st[0] -= (double)*(float*)ADDR(edx); /* 0x1204F83D: fsub dword ptr [edx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x1204F83F: fstp dword ptr [ebp - 0x30] */
    fp_push(*(float*)&MEM32(ebx + 0x4)); /* 0x1204F842: fld dword ptr [ebx + 4] */
    _st[0] -= (double)*(float*)ADDR(edx + 0x4); /* 0x1204F845: fsub dword ptr [edx + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x1204F848: fstp dword ptr [ebp - 0x2c] */
    fp_push(*(float*)&MEM32(ebx + 0x8)); /* 0x1204F84B: fld dword ptr [ebx + 8] */
    _st[0] -= (double)*(float*)ADDR(edx + 0x8); /* 0x1204F84E: fsub dword ptr [edx + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x1204F851: fstp dword ptr [ebp - 0x28] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1204F854: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1204F855: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1204F856: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = MEM32(ebp + 0x10); /* 0x1204F857: mov esi, dword ptr [ebp + 0x10] */
    edi = ebp + (-0x18); /* 0x1204F85A: lea edi, [ebp - 0x18] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1204F85D: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1204F85E: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1204F85F: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x1204F860: fld dword ptr [ebp - 0x18] */
    _st[0] -= (double)*(float*)ADDR(ebx); /* 0x1204F863: fsub dword ptr [ebx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x1204F865: fstp dword ptr [ebp - 0x18] */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x1204F868: fld dword ptr [ebp - 0x14] */
    _st[0] -= (double)*(float*)ADDR(ebx + 0x4); /* 0x1204F86B: fsub dword ptr [ebx + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x1204F86E: fstp dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x1204F871: fld dword ptr [ebp - 0x10] */
    _st[0] -= (double)*(float*)ADDR(ebx + 0x8); /* 0x1204F874: fsub dword ptr [ebx + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x1204F877: fstp dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0x2C))); /* 0x1204F87A: fld dword ptr [ebp - 0x2c] */
    fp_push(_st[0]); /* 0x1204F87D: fld st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x30))); /* 0x1204F87F: fld dword ptr [ebp - 0x30] */
    fp_push(_st[0]); /* 0x1204F882: fld st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x1204F884: fld dword ptr [ebp - 0x28] */
    fp_push(_st[0]); /* 0x1204F887: fld st(0) */
    fp_xch(2); /* 0x1204F889: fxch st(2) */
    _st[0] *= _st[0]; /* 0x1204F88B: fmul st(0), st(0) */
    fp_xch(4); /* 0x1204F88D: fxch st(4) */
    _st[0] *= _st[0]; /* 0x1204F88F: fmul st(0), st(0) */
    { double _v = fp_pop(); _st[3] += _v; } /* 0x1204F891: faddp st(4) */
    fp_xch(1); /* 0x1204F893: fxch st(1) */
    _st[0] *= _st[0]; /* 0x1204F895: fmul st(0), st(0) */
    { double _v = fp_pop(); _st[2] += _v; } /* 0x1204F897: faddp st(3) */
    fp_xch(2); /* 0x1204F899: fxch st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x1204F89B: fstp dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(0x120061D8)); /* 0x1204F89E: fld dword ptr [0x120061d8] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x1204F8A4: fld dword ptr [ebp + 0xc] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1204F8A7: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1204F8A9: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1204F8AB: fstp st(1) */
    /* test HI8(eax), 0x41u */ /* 0x1204F8AD: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1204F8C1; /* 0x1204F8B0: jp 0x1204f8c1 */
L_1204F8B2:
    { _st[3] = _st[0]; g_st_i64[3] = g_st_i64[0]; fp_pop(); } /* 0x1204F8B2: fstp st(3) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1204F8B4: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1204F8B6: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1204F8B8: fstp st(0) */
L_1204F8BA:
    fp_push(0.0); /* 0x1204F8BA: fldz  */
    goto L_1204F945; /* 0x1204F8BC: jmp 0x1204f945 */
L_1204F8C1:
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x1204F8C1: fld dword ptr [ebp - 0x14] */
    esi = ebp + (-0x18); /* 0x1204F8C4: lea esi, [ebp - 0x18] */
    { double _v = fp_pop(); _st[3] *= _v; } /* 0x1204F8C7: fmulp st(4) */
    edi = ebp + (-0x30); /* 0x1204F8C9: lea edi, [ebp - 0x30] */
    fp_push(_st[1]); /* 0x1204F8CC: fld st(1) */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1204F8CE: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x1204F8CF: fld dword ptr [ebp - 0x18] */
    fp_push(_st[0]); /* 0x1204F8D2: fld st(0) */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1204F8D4: movsd dword ptr es:[edi], dword ptr [esi] */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x1204F8D5: fmulp st(2) */
    fp_xch(5); /* 0x1204F8D7: fxch st(5) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1204F8D9: faddp st(1) */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1204F8DB: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x1204F8DC: fld dword ptr [ebp - 0x10] */
    { double _v = fp_pop(); _st[3] *= _v; } /* 0x1204F8DF: fmulp st(4) */
    { double _v = fp_pop(); _st[2] += _v; } /* 0x1204F8E1: faddp st(3) */
    fp_xch(2); /* 0x1204F8E3: fxch st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x1204F8E5: fstp dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x1204F8E8: fld dword ptr [ebp + 0xc] */
    { double _v = fp_pop(); _st[1] = _st[1] == 0.0 ? _v : _v / _st[1]; } /* 0x1204F8EB: fdivrp st(2) */
    fp_xch(1); /* 0x1204F8ED: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x1204F8EF: fstp dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x1204F8F2: fld dword ptr [ebp + 0xc] */
    fp_push(_st[0]); /* 0x1204F8F5: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x1204F8F7: fmulp st(2) */
    fp_xch(1); /* 0x1204F8F9: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x1204F8FB: fstp dword ptr [ebp - 0x24] */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x1204F8FE: fld dword ptr [ebp - 0x20] */
    fp_push(_st[1]); /* 0x1204F901: fld st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x1204F903: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x1204F905: fstp dword ptr [ebp - 0x20] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x1C)); /* 0x1204F908: fmul dword ptr [ebp - 0x1c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x1204F90B: fstp dword ptr [ebp - 0x1c] */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x24)); /* 0x1204F90E: fsub dword ptr [ebp - 0x24] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x1204F911: fstp dword ptr [ebp - 0x30] */
    fp_push(*(float*)&MEM32(ebp + (-0x2C))); /* 0x1204F914: fld dword ptr [ebp - 0x2c] */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x20)); /* 0x1204F917: fsub dword ptr [ebp - 0x20] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x1204F91A: fstp dword ptr [ebp - 0x2c] */
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x1204F91D: fld dword ptr [ebp - 0x28] */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x1C)); /* 0x1204F920: fsub dword ptr [ebp - 0x1c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x1204F923: fstp dword ptr [ebp - 0x28] */
    fp_push(*(float*)&MEM32(ebp + (-0x2C))); /* 0x1204F926: fld dword ptr [ebp - 0x2c] */
    fp_push(*(float*)&MEM32(ebp + (-0x30))); /* 0x1204F929: fld dword ptr [ebp - 0x30] */
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x1204F92C: fld dword ptr [ebp - 0x28] */
    fp_xch(2); /* 0x1204F92F: fxch st(2) */
    _st[0] *= _st[0]; /* 0x1204F931: fmul st(0), st(0) */
    fp_xch(1); /* 0x1204F933: fxch st(1) */
    _st[0] *= _st[0]; /* 0x1204F935: fmul st(0), st(0) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1204F937: faddp st(1) */
    fp_xch(1); /* 0x1204F939: fxch st(1) */
    _st[0] *= _st[0]; /* 0x1204F93B: fmul st(0), st(0) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1204F93D: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x1204F93F: fstp dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x1204F942: fld dword ptr [ebp + 0xc] */
L_1204F945:
    edi = POP32_VAL(esp); /* 0x1204F945: pop edi */
    esi = POP32_VAL(esp); /* 0x1204F946: pop esi */
    ebx = POP32_VAL(esp); /* 0x1204F947: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1204F948: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1204F949: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1204F951(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204F951u);

L_1204F951:
    edi = edi; /* 0x1204F951: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204F953: push ebp */
    ebp = esp; /* 0x1204F954: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x30u; /* 0x1204F956: sub esp, 0x30 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1204F959: push ebx */
    ebx = (uint32_t)MEM16(ebp + 0xC); /* 0x1204F95A: movzx ebx, word ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1204F95E: push esi */
    PUSH32(esp, edi); /* 0x1204F95F: push edi */
    eax = ebx + 0x1; /* 0x1204F960: lea eax, [ebx + 1] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1204F963: cdq  */
    PUSH32(esp, 3); /* 0x1204F964: push 3 */
    esi = POP32_VAL(esp); /* 0x1204F966: pop esi */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)esi; /* 0x1204F967: idiv esi */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    MEM32(ebp + (-0x8)) = ecx; /* 0x1204F969: mov dword ptr [ebp - 8], ecx */
    MEM32(ebp + (-0xC)) = esi; /* 0x1204F96C: mov dword ptr [ebp - 0xc], esi */
    eax = (uint32_t)LO16(edx); /* 0x1204F96F: movzx eax, dx */
    edx = MEM32(ebp + 0x8); /* 0x1204F972: mov edx, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1204F975: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ecx + 0xCC); /* 0x1204F978: mov eax, dword ptr [ecx + 0xcc] */
    ecx = (uint32_t)LO16(edx); /* 0x1204F97E: movzx ecx, dx */
    esi = ecx; /* 0x1204F981: mov esi, ecx */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)3); /* 0x1204F983: imul ecx, ecx, 3 */
    esi = (uint32_t)((int32_t)esi * (int32_t)6); /* 0x1204F986: imul esi, esi, 6 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax + 0x24C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(eax + 0x24C); /* 0x1204F989: add esi, dword ptr [eax + 0x24c] */
    _flag_k = FK_ADD;
    eax = MEM32(eax + 0x250); /* 0x1204F98F: mov eax, dword ptr [eax + 0x250] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ebx; /* 0x1204F995: add ecx, ebx */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM16(eax + ecx * 2); /* 0x1204F997: movzx eax, word ptr [eax + ecx*2] */
    /* cmp LO16(eax), 0xFFFFu */ /* 0x1204F99B: cmp ax, 0xffff */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0xFFFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204FA0A; /* 0x1204F99F: je 0x1204fa0a */
L_1204F9A1:
    edi = eax; /* 0x1204F9A1: mov edi, eax */
    eax = MEM32(ebp + (-0x8)); /* 0x1204F9A3: mov eax, dword ptr [ebp - 8] */
    eax = MEM32(eax + 0xCC); /* 0x1204F9A6: mov eax, dword ptr [eax + 0xcc] */
    ecx = edi; /* 0x1204F9AC: mov ecx, edi */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)6); /* 0x1204F9AE: imul ecx, ecx, 6 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x250));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax + 0x250); /* 0x1204F9B1: add ecx, dword ptr [eax + 0x250] */
    _flag_k = FK_ADD;
    PUSH32(esp, edx); /* 0x1204F9B7: push edx */
    PUSH32(esp, ecx); /* 0x1204F9B8: push ecx */
    RECOMP_CALL(sub_1204CE0F); /* 0x1204F9B9: call 0x1204ce0f */
    RECOMP_FLAGS_IN();
    edi = (uint32_t)((int32_t)edi * (int32_t)3); /* 0x1204F9BE: imul edi, edi, 3 */
    ecx = (uint32_t)LO16(eax); /* 0x1204F9C1: movzx ecx, ax */
    eax = MEM32(ebp + (-0x8)); /* 0x1204F9C4: mov eax, dword ptr [ebp - 8] */
    eax = MEM32(eax + 0xCC); /* 0x1204F9C7: mov eax, dword ptr [eax + 0xcc] */
    eax = MEM32(eax + 0x24C); /* 0x1204F9CD: mov eax, dword ptr [eax + 0x24c] */
    MEM32(ebp + 0x8) = eax; /* 0x1204F9D3: mov dword ptr [ebp + 8], eax */
    eax = ecx + 0x1; /* 0x1204F9D6: lea eax, [ecx + 1] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1204F9D9: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)MEM32(ebp + (-0xC)); /* 0x1204F9DA: idiv dword ptr [ebp - 0xc] */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    SET_LO16(eax, MEM16(esi + ebx * 2)); /* 0x1204F9DD: mov ax, word ptr [esi + ebx*2] */
    ebx = MEM32(ebp + 0x8); /* 0x1204F9E1: mov ebx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edi; /* 0x1204F9E4: add edx, edi */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), MEM16(ebx + edx * 2) */ /* 0x1204F9E6: cmp ax, word ptr [ebx + edx*2] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebx + edx * 2)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    ebx = (uint32_t)MEM16(ebp + 0xC); /* 0x1204F9EA: movzx ebx, word ptr [ebp + 0xc] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204FA0A; /* 0x1204F9EE: jne 0x1204fa0a */
L_1204F9F0:
    edx = MEM32(ebp + 0x8); /* 0x1204F9F0: mov edx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x1204F9F3: add ecx, edi */
    _flag_k = FK_ADD;
    edi = MEM32(ebp + (-0x4)); /* 0x1204F9F5: mov edi, dword ptr [ebp - 4] */
    eax = (uint32_t)LO16(edi); /* 0x1204F9F8: movzx eax, di */
    SET_LO16(eax, MEM16(esi + eax * 2)); /* 0x1204F9FB: mov ax, word ptr [esi + eax*2] */
    /* cmp LO16(eax), MEM16(edx + ecx * 2) */ /* 0x1204F9FF: cmp ax, word ptr [edx + ecx*2] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(edx + ecx * 2)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204FA0D; /* 0x1204FA03: jne 0x1204fa0d */
L_1204FA05:
    goto L_1204FAC0; /* 0x1204FA05: jmp 0x1204fac0 */
L_1204FA0A:
    edi = MEM32(ebp + (-0x4)); /* 0x1204FA0A: mov edi, dword ptr [ebp - 4] */
L_1204FA0D:
    ebx = (uint32_t)MEM16(esi + ebx * 2); /* 0x1204FA0D: movzx ebx, word ptr [esi + ebx*2] */
    eax = MEM32(ebp + (-0x8)); /* 0x1204FA11: mov eax, dword ptr [ebp - 8] */
    edx = MEM32(eax + 0xC8); /* 0x1204FA14: mov edx, dword ptr [eax + 0xc8] */
    eax = MEM32(eax + 0x90); /* 0x1204FA1A: mov eax, dword ptr [eax + 0x90] */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)edx); /* 0x1204FA20: imul ebx, edx */
    ecx = (uint32_t)MEM16(eax + 0x2); /* 0x1204FA23: movzx ecx, word ptr [eax + 2] */
    eax = (uint32_t)LO16(edi); /* 0x1204FA27: movzx eax, di */
    eax = (uint32_t)MEM16(esi + eax * 2); /* 0x1204FA2A: movzx eax, word ptr [esi + eax*2] */
    eax = (uint32_t)((int32_t)eax * (int32_t)edx); /* 0x1204FA2E: imul eax, edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ecx; /* 0x1204FA31: add ebx, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(ebp + 0x14); /* 0x1204FA33: add ebx, dword ptr [ebp + 0x14] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1204FA36: add eax, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0x14); /* 0x1204FA38: add eax, dword ptr [ebp + 0x14] */
    _flag_k = FK_ADD;
    esi = ebp + (-0x30); /* 0x1204FA3B: lea esi, [ebp - 0x30] */
    fp_push(*(float*)&MEM32(ebx)); /* 0x1204FA3E: fld dword ptr [ebx] */
    edi = ebp + (-0x24); /* 0x1204FA40: lea edi, [ebp - 0x24] */
    _st[0] -= (double)*(float*)ADDR(eax); /* 0x1204FA43: fsub dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x1204FA45: fstp dword ptr [ebp - 0x30] */
    fp_push(*(float*)&MEM32(ebx + 0x4)); /* 0x1204FA48: fld dword ptr [ebx + 4] */
    _st[0] -= (double)*(float*)ADDR(eax + 0x4); /* 0x1204FA4B: fsub dword ptr [eax + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x1204FA4E: fstp dword ptr [ebp - 0x2c] */
    fp_push(*(float*)&MEM32(ebx + 0x8)); /* 0x1204FA51: fld dword ptr [ebx + 8] */
    _st[0] -= (double)*(float*)ADDR(eax + 0x8); /* 0x1204FA54: fsub dword ptr [eax + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x1204FA57: fstp dword ptr [ebp - 0x28] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1204FA5A: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1204FA5B: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1204FA5C: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = MEM32(ebp + 0x10); /* 0x1204FA5D: mov esi, dword ptr [ebp + 0x10] */
    edi = ebp + (-0x18); /* 0x1204FA60: lea edi, [ebp - 0x18] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1204FA63: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1204FA64: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1204FA65: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x1204FA66: fld dword ptr [ebp - 0x18] */
    _st[0] -= (double)*(float*)ADDR(ebx); /* 0x1204FA69: fsub dword ptr [ebx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x1204FA6B: fstp dword ptr [ebp - 0x18] */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x1204FA6E: fld dword ptr [ebp - 0x14] */
    _st[0] -= (double)*(float*)ADDR(ebx + 0x4); /* 0x1204FA71: fsub dword ptr [ebx + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x1204FA74: fstp dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x1204FA77: fld dword ptr [ebp - 0x10] */
    _st[0] -= (double)*(float*)ADDR(ebx + 0x8); /* 0x1204FA7A: fsub dword ptr [ebx + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x1204FA7D: fstp dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0x2C))); /* 0x1204FA80: fld dword ptr [ebp - 0x2c] */
    fp_push(_st[0]); /* 0x1204FA83: fld st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x30))); /* 0x1204FA85: fld dword ptr [ebp - 0x30] */
    fp_push(_st[0]); /* 0x1204FA88: fld st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x1204FA8A: fld dword ptr [ebp - 0x28] */
    fp_push(_st[0]); /* 0x1204FA8D: fld st(0) */
    fp_xch(2); /* 0x1204FA8F: fxch st(2) */
    _st[0] *= _st[0]; /* 0x1204FA91: fmul st(0), st(0) */
    fp_xch(4); /* 0x1204FA93: fxch st(4) */
    _st[0] *= _st[0]; /* 0x1204FA95: fmul st(0), st(0) */
    { double _v = fp_pop(); _st[3] += _v; } /* 0x1204FA97: faddp st(4) */
    fp_xch(1); /* 0x1204FA99: fxch st(1) */
    _st[0] *= _st[0]; /* 0x1204FA9B: fmul st(0), st(0) */
    { double _v = fp_pop(); _st[2] += _v; } /* 0x1204FA9D: faddp st(3) */
    fp_xch(2); /* 0x1204FA9F: fxch st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x1204FAA1: fstp dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(0x120061D8)); /* 0x1204FAA4: fld dword ptr [0x120061d8] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x1204FAAA: fld dword ptr [ebp + 0xc] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1204FAAD: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1204FAAF: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1204FAB1: fstp st(1) */
    /* test HI8(eax), 0x41u */ /* 0x1204FAB3: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1204FAC7; /* 0x1204FAB6: jp 0x1204fac7 */
L_1204FAB8:
    { _st[3] = _st[0]; g_st_i64[3] = g_st_i64[0]; fp_pop(); } /* 0x1204FAB8: fstp st(3) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1204FABA: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1204FABC: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1204FABE: fstp st(0) */
L_1204FAC0:
    fp_push(0.0); /* 0x1204FAC0: fldz  */
    goto L_1204FB4B; /* 0x1204FAC2: jmp 0x1204fb4b */
L_1204FAC7:
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x1204FAC7: fld dword ptr [ebp - 0x14] */
    esi = ebp + (-0x18); /* 0x1204FACA: lea esi, [ebp - 0x18] */
    { double _v = fp_pop(); _st[3] *= _v; } /* 0x1204FACD: fmulp st(4) */
    edi = ebp + (-0x30); /* 0x1204FACF: lea edi, [ebp - 0x30] */
    fp_push(_st[1]); /* 0x1204FAD2: fld st(1) */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1204FAD4: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x1204FAD5: fld dword ptr [ebp - 0x18] */
    fp_push(_st[0]); /* 0x1204FAD8: fld st(0) */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1204FADA: movsd dword ptr es:[edi], dword ptr [esi] */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x1204FADB: fmulp st(2) */
    fp_xch(5); /* 0x1204FADD: fxch st(5) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1204FADF: faddp st(1) */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1204FAE1: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x1204FAE2: fld dword ptr [ebp - 0x10] */
    { double _v = fp_pop(); _st[3] *= _v; } /* 0x1204FAE5: fmulp st(4) */
    { double _v = fp_pop(); _st[2] += _v; } /* 0x1204FAE7: faddp st(3) */
    fp_xch(2); /* 0x1204FAE9: fxch st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x1204FAEB: fstp dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x1204FAEE: fld dword ptr [ebp + 0xc] */
    { double _v = fp_pop(); _st[1] = _st[1] == 0.0 ? _v : _v / _st[1]; } /* 0x1204FAF1: fdivrp st(2) */
    fp_xch(1); /* 0x1204FAF3: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x1204FAF5: fstp dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x1204FAF8: fld dword ptr [ebp + 0xc] */
    fp_push(_st[0]); /* 0x1204FAFB: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x1204FAFD: fmulp st(2) */
    fp_xch(1); /* 0x1204FAFF: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x1204FB01: fstp dword ptr [ebp - 0x24] */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x1204FB04: fld dword ptr [ebp - 0x20] */
    fp_push(_st[1]); /* 0x1204FB07: fld st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x1204FB09: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x1204FB0B: fstp dword ptr [ebp - 0x20] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x1C)); /* 0x1204FB0E: fmul dword ptr [ebp - 0x1c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x1204FB11: fstp dword ptr [ebp - 0x1c] */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x24)); /* 0x1204FB14: fsub dword ptr [ebp - 0x24] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x1204FB17: fstp dword ptr [ebp - 0x30] */
    fp_push(*(float*)&MEM32(ebp + (-0x2C))); /* 0x1204FB1A: fld dword ptr [ebp - 0x2c] */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x20)); /* 0x1204FB1D: fsub dword ptr [ebp - 0x20] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x1204FB20: fstp dword ptr [ebp - 0x2c] */
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x1204FB23: fld dword ptr [ebp - 0x28] */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x1C)); /* 0x1204FB26: fsub dword ptr [ebp - 0x1c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x1204FB29: fstp dword ptr [ebp - 0x28] */
    fp_push(*(float*)&MEM32(ebp + (-0x2C))); /* 0x1204FB2C: fld dword ptr [ebp - 0x2c] */
    fp_push(*(float*)&MEM32(ebp + (-0x30))); /* 0x1204FB2F: fld dword ptr [ebp - 0x30] */
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x1204FB32: fld dword ptr [ebp - 0x28] */
    fp_xch(2); /* 0x1204FB35: fxch st(2) */
    _st[0] *= _st[0]; /* 0x1204FB37: fmul st(0), st(0) */
    fp_xch(1); /* 0x1204FB39: fxch st(1) */
    _st[0] *= _st[0]; /* 0x1204FB3B: fmul st(0), st(0) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1204FB3D: faddp st(1) */
    fp_xch(1); /* 0x1204FB3F: fxch st(1) */
    _st[0] *= _st[0]; /* 0x1204FB41: fmul st(0), st(0) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1204FB43: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x1204FB45: fstp dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x1204FB48: fld dword ptr [ebp + 0xc] */
L_1204FB4B:
    edi = POP32_VAL(esp); /* 0x1204FB4B: pop edi */
    esi = POP32_VAL(esp); /* 0x1204FB4C: pop esi */
    ebx = POP32_VAL(esp); /* 0x1204FB4D: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1204FB4E: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1204FB4F: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1204FB57(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204FB57u);

L_1204FB57:
    edi = edi; /* 0x1204FB57: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204FB59: push ebp */
    ebp = esp; /* 0x1204FB5A: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x50u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x50u; /* 0x1204FB5C: sub esp, 0x50 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x1204FB5F: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1204FB64: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1204FB66: mov dword ptr [ebp - 4], eax */
    edx = MEM32(ebp + 0x14); /* 0x1204FB69: mov edx, dword ptr [ebp + 0x14] */
    eax = MEM32(ebp + 0x8); /* 0x1204FB6C: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0xC); /* 0x1204FB6F: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x1204FB72: push ebx */
    ebx = MEM32(ebp + 0x24); /* 0x1204FB73: mov ebx, dword ptr [ebp + 0x24] */
    PUSH32(esp, esi); /* 0x1204FB76: push esi */
    esi = MEM32(ebp + 0x10); /* 0x1204FB77: mov esi, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x38)) = edx; /* 0x1204FB7A: mov dword ptr [ebp - 0x38], edx */
    edx = MEM32(ebp + 0x18); /* 0x1204FB7D: mov edx, dword ptr [ebp + 0x18] */
    PUSH32(esp, edi); /* 0x1204FB80: push edi */
    edi = MEM32(ebp + 0x20); /* 0x1204FB81: mov edi, dword ptr [ebp + 0x20] */
    MEM32(ebp + (-0x44)) = edx; /* 0x1204FB84: mov dword ptr [ebp - 0x44], edx */
    edx = MEM32(ebp + 0x1C); /* 0x1204FB87: mov edx, dword ptr [ebp + 0x1c] */
    MEM32(ebp + (-0x40)) = edx; /* 0x1204FB8A: mov dword ptr [ebp - 0x40], edx */
    MEM32(ebp + (-0x3C)) = ebx; /* 0x1204FB8D: mov dword ptr [ebp - 0x3c], ebx */
    /* test edi, edi */ /* 0x1204FB90: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204FCF8; /* 0x1204FB92: je 0x1204fcf8 */
L_1204FB98:
    edx = ebx; /* 0x1204FB98: mov edx, ebx */
    edx = (uint32_t)((int32_t)edx * (int32_t)eax); /* 0x1204FB9A: imul edx, eax */
    eax = ebx; /* 0x1204FB9D: mov eax, ebx */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx); /* 0x1204FB9F: imul eax, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edi; /* 0x1204FBA2: add edx, edi */
    _flag_k = FK_ADD;
    ecx = ebx; /* 0x1204FBA4: mov ecx, ebx */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)esi); /* 0x1204FBA6: imul ecx, esi */
    fp_push(*(float*)&MEM32(edx)); /* 0x1204FBA9: fld dword ptr [edx] */
    _st[0] -= (double)*(float*)ADDR(eax + edi); /* 0x1204FBAB: fsub dword ptr [eax + edi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x34)) = _v; } /* 0x1204FBAE: fstp dword ptr [ebp - 0x34] */
    fp_push(*(float*)&MEM32(edx + 0x4)); /* 0x1204FBB1: fld dword ptr [edx + 4] */
    _st[0] -= (double)*(float*)ADDR(eax + edi + 0x4); /* 0x1204FBB4: fsub dword ptr [eax + edi + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x1204FBB8: fstp dword ptr [ebp - 0x30] */
    esi = ebx; /* 0x1204FBBB: mov esi, ebx */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(ebp + (-0x44))); /* 0x1204FBBD: imul ebx, dword ptr [ebp - 0x44] */
    fp_push(*(float*)&MEM32(edx + 0x8)); /* 0x1204FBC1: fld dword ptr [edx + 8] */
    _st[0] -= (double)*(float*)ADDR(eax + edi + 0x8); /* 0x1204FBC4: fsub dword ptr [eax + edi + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x1204FBC8: fstp dword ptr [ebp - 0x2c] */
    fp_push(*(float*)&MEM32(edx)); /* 0x1204FBCB: fld dword ptr [edx] */
    _st[0] -= (double)*(float*)ADDR(ecx + edi); /* 0x1204FBCD: fsub dword ptr [ecx + edi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x1204FBD0: fstp dword ptr [ebp - 0x28] */
    fp_push(*(float*)&MEM32(edx + 0x4)); /* 0x1204FBD3: fld dword ptr [edx + 4] */
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(ebp + (-0x38))); /* 0x1204FBD6: imul esi, dword ptr [ebp - 0x38] */
    _st[0] -= (double)*(float*)ADDR(ecx + edi + 0x4); /* 0x1204FBDA: fsub dword ptr [ecx + edi + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x1204FBDE: fstp dword ptr [ebp - 0x24] */
    fp_push(*(float*)&MEM32(edx + 0x8)); /* 0x1204FBE1: fld dword ptr [edx + 8] */
    _st[0] -= (double)*(float*)ADDR(ecx + edi + 0x8); /* 0x1204FBE4: fsub dword ptr [ecx + edi + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x1204FBE8: fstp dword ptr [ebp - 0x20] */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x1204FBEB: fld dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edi; /* 0x1204FBEE: add esi, edi */
    _flag_k = FK_ADD;
    fp_push(_st[0]); /* 0x1204FBF0: fld st(0) */
    MEM32(ebp + (-0x38)) = esi; /* 0x1204FBF2: mov dword ptr [ebp - 0x38], esi */
    fp_push(*(float*)&MEM32(ebp + (-0x30))); /* 0x1204FBF5: fld dword ptr [ebp - 0x30] */
    esi = MEM32(ebp + (-0x3C)); /* 0x1204FBF8: mov esi, dword ptr [ebp - 0x3c] */
    fp_push(_st[0]); /* 0x1204FBFB: fld st(0) */
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(ebp + (-0x40))); /* 0x1204FBFD: imul esi, dword ptr [ebp - 0x40] */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x1204FC01: fmulp st(2) */
    fp_push(*(float*)&MEM32(ebp + (-0x24))); /* 0x1204FC03: fld dword ptr [ebp - 0x24] */
    fp_push(_st[0]); /* 0x1204FC06: fld st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x2C))); /* 0x1204FC08: fld dword ptr [ebp - 0x2c] */
    fp_push(_st[0]); /* 0x1204FC0B: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x1204FC0D: fmulp st(2) */
    fp_xch(4); /* 0x1204FC0F: fxch st(4) */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x1204FC11: fsubrp st(1) */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edi; /* 0x1204FC13: add esi, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edi; /* 0x1204FC15: add ebx, edi */
    _flag_k = FK_ADD;
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x1204FC17: fstp dword ptr [ebp - 0x10] */
    MEM32(ebp + (-0x3C)) = esi; /* 0x1204FC1A: mov dword ptr [ebp - 0x3c], esi */
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x1204FC1D: fld dword ptr [ebp - 0x28] */
    esi = ebp + (-0x10); /* 0x1204FC20: lea esi, [ebp - 0x10] */
    fp_push(_st[0]); /* 0x1204FC23: fld st(0) */
    edi = ebp + (-0x1C); /* 0x1204FC25: lea edi, [ebp - 0x1c] */
    { double _v = fp_pop(); _st[3] *= _v; } /* 0x1204FC28: fmulp st(4) */
    eax = ebp + (-0x1C); /* 0x1204FC2A: lea eax, [ebp - 0x1c] */
    fp_push(*(float*)&MEM32(ebp + (-0x34))); /* 0x1204FC2D: fld dword ptr [ebp - 0x34] */
    PUSH32(esp, eax); /* 0x1204FC30: push eax */
    fp_push(_st[0]); /* 0x1204FC31: fld st(0) */
    PUSH32(esp, eax); /* 0x1204FC33: push eax */
    { double _v = fp_pop(); _st[5] *= _v; } /* 0x1204FC34: fmulp st(6) */
    fp_xch(4); /* 0x1204FC36: fxch st(4) */
    { double _v = fp_pop(); _st[4] = _v - _st[4]; } /* 0x1204FC38: fsubrp st(5) */
    fp_xch(4); /* 0x1204FC3A: fxch st(4) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x1204FC3C: fstp dword ptr [ebp - 0xc] */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x1204FC3F: fmulp st(2) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x1204FC41: fmulp st(2) */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x1204FC43: fsubrp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x1204FC45: fstp dword ptr [ebp - 8] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1204FC48: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1204FC49: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1204FC4A: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_120301D9); /* 0x1204FC4B: call 0x120301d9 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x38)); /* 0x1204FC50: mov eax, dword ptr [ebp - 0x38] */
    fp_push(*(float*)&MEM32(eax)); /* 0x1204FC53: fld dword ptr [eax] */
    _st[0] -= (double)*(float*)ADDR(ebx); /* 0x1204FC55: fsub dword ptr [ebx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x1204FC57: fstp dword ptr [ebp - 0x28] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x1204FC5A: fld dword ptr [eax + 4] */
    _st[0] -= (double)*(float*)ADDR(ebx + 0x4); /* 0x1204FC5D: fsub dword ptr [ebx + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x1204FC60: fstp dword ptr [ebp - 0x24] */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x1204FC63: fld dword ptr [eax + 8] */
    _st[0] -= (double)*(float*)ADDR(ebx + 0x8); /* 0x1204FC66: fsub dword ptr [ebx + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x1204FC69: fstp dword ptr [ebp - 0x20] */
    ecx = MEM32(ebp + (-0x3C)); /* 0x1204FC6C: mov ecx, dword ptr [ebp - 0x3c] */
    fp_push(*(float*)&MEM32(eax)); /* 0x1204FC6F: fld dword ptr [eax] */
    _st[0] -= (double)*(float*)ADDR(ecx); /* 0x1204FC71: fsub dword ptr [ecx] */
    esi = ebp + (-0x50); /* 0x1204FC73: lea esi, [ebp - 0x50] */
    edi = ebp + (-0x10); /* 0x1204FC76: lea edi, [ebp - 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x34)) = _v; } /* 0x1204FC79: fstp dword ptr [ebp - 0x34] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x1204FC7C: fld dword ptr [eax + 4] */
    _st[0] -= (double)*(float*)ADDR(ecx + 0x4); /* 0x1204FC7F: fsub dword ptr [ecx + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x1204FC82: fstp dword ptr [ebp - 0x30] */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x1204FC85: fld dword ptr [eax + 8] */
    eax = ebp + (-0x10); /* 0x1204FC88: lea eax, [ebp - 0x10] */
    _st[0] -= (double)*(float*)ADDR(ecx + 0x8); /* 0x1204FC8B: fsub dword ptr [ecx + 8] */
    PUSH32(esp, eax); /* 0x1204FC8E: push eax */
    PUSH32(esp, eax); /* 0x1204FC8F: push eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x1204FC90: fstp dword ptr [ebp - 0x2c] */
    fp_push(*(float*)&MEM32(ebp + (-0x2C))); /* 0x1204FC93: fld dword ptr [ebp - 0x2c] */
    fp_push(_st[0]); /* 0x1204FC96: fld st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x24))); /* 0x1204FC98: fld dword ptr [ebp - 0x24] */
    fp_push(_st[0]); /* 0x1204FC9B: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x1204FC9D: fmulp st(2) */
    fp_push(*(float*)&MEM32(ebp + (-0x30))); /* 0x1204FC9F: fld dword ptr [ebp - 0x30] */
    fp_push(_st[0]); /* 0x1204FCA2: fld st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x1204FCA4: fld dword ptr [ebp - 0x20] */
    fp_push(_st[0]); /* 0x1204FCA7: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x1204FCA9: fmulp st(2) */
    fp_xch(4); /* 0x1204FCAB: fxch st(4) */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x1204FCAD: fsubrp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x50)) = _v; } /* 0x1204FCAF: fstp dword ptr [ebp - 0x50] */
    fp_push(*(float*)&MEM32(ebp + (-0x34))); /* 0x1204FCB2: fld dword ptr [ebp - 0x34] */
    fp_push(_st[0]); /* 0x1204FCB5: fld st(0) */
    { double _v = fp_pop(); _st[3] *= _v; } /* 0x1204FCB7: fmulp st(4) */
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x1204FCB9: fld dword ptr [ebp - 0x28] */
    fp_push(_st[0]); /* 0x1204FCBC: fld st(0) */
    { double _v = fp_pop(); _st[5] *= _v; } /* 0x1204FCBE: fmulp st(6) */
    fp_xch(4); /* 0x1204FCC0: fxch st(4) */
    { double _v = fp_pop(); _st[4] = _v - _st[4]; } /* 0x1204FCC2: fsubrp st(5) */
    fp_xch(4); /* 0x1204FCC4: fxch st(4) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4C)) = _v; } /* 0x1204FCC6: fstp dword ptr [ebp - 0x4c] */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x1204FCC9: fmulp st(2) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x1204FCCB: fmulp st(2) */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x1204FCCD: fsubrp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x48)) = _v; } /* 0x1204FCCF: fstp dword ptr [ebp - 0x48] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1204FCD2: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1204FCD3: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1204FCD4: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_120301D9); /* 0x1204FCD5: call 0x120301d9 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x1204FCDA: fld dword ptr [ebp - 0x18] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xC)); /* 0x1204FCDD: fmul dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x1204FCE0: fld dword ptr [ebp - 0x1c] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x10)); /* 0x1204FCE3: fmul dword ptr [ebp - 0x10] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1204FCE6: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x1204FCE8: fld dword ptr [ebp - 0x14] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x8)); /* 0x1204FCEB: fmul dword ptr [ebp - 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1204FCEE: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x40)) = _v; } /* 0x1204FCF0: fstp dword ptr [ebp - 0x40] */
    fp_push(*(float*)&MEM32(ebp + (-0x40))); /* 0x1204FCF3: fld dword ptr [ebp - 0x40] */
    goto L_1204FCFA; /* 0x1204FCF6: jmp 0x1204fcfa */
L_1204FCF8:
    fp_push(0.0); /* 0x1204FCF8: fldz  */
L_1204FCFA:
    ecx = MEM32(ebp + (-0x4)); /* 0x1204FCFA: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1204FCFD: pop edi */
    esi = POP32_VAL(esp); /* 0x1204FCFE: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1204FCFF: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1204FD01: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x1204FD02: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1204FD07: leave  */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x1204FD08: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_1204FD10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204FD10u);

L_1204FD10:
    edi = edi; /* 0x1204FD10: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204FD12: push ebp */
    ebp = esp; /* 0x1204FD13: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1204FD15: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1204FD18: push ebx */
    PUSH32(esp, esi); /* 0x1204FD19: push esi */
    PUSH32(esp, edi); /* 0x1204FD1A: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1204FD1B: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1204FD1E: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edi; /* 0x1204FD20: mov eax, edi */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)MEM32(ebp + 0x18); /* 0x1204FD22: div dword ptr [ebp + 0x18] */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    ecx = MEM32(ebp + 0x14); /* 0x1204FD25: mov ecx, dword ptr [ebp + 0x14] */
    ebx = MEM32(ebp + 0x1C); /* 0x1204FD28: mov ebx, dword ptr [ebp + 0x1c] */
    eax = edx; /* 0x1204FD2B: mov eax, edx */
    esi = MEM32(ecx + eax * 4); /* 0x1204FD2D: mov esi, dword ptr [ecx + eax*4] */
    edx = MEM32(ebp + 0xC); /* 0x1204FD30: mov edx, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x10)) = eax; /* 0x1204FD33: mov dword ptr [ebp - 0x10], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1204FD36: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1204FD48; /* 0x1204FD38: jmp 0x1204fd48 */
L_1204FD3A:
    /* cmp MEM32(esi + 0x4), edx */ /* 0x1204FD3A: cmp dword ptr [esi + 4], edx */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204FD43; /* 0x1204FD3D: jne 0x1204fd43 */
L_1204FD3F:
    /* cmp MEM32(esi), edi */ /* 0x1204FD3F: cmp dword ptr [esi], edi */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204FD51; /* 0x1204FD41: je 0x1204fd51 */
L_1204FD43:
    ecx = esi; /* 0x1204FD43: mov ecx, esi */
    esi = MEM32(esi + 0x10); /* 0x1204FD45: mov esi, dword ptr [esi + 0x10] */
L_1204FD48:
    MEM32(ebp + 0x18) = ecx; /* 0x1204FD48: mov dword ptr [ebp + 0x18], ecx */
    /* test esi, esi */ /* 0x1204FD4B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1204FD3A; /* 0x1204FD4D: jne 0x1204fd3a */
L_1204FD4F:
    goto L_1204FD54; /* 0x1204FD4F: jmp 0x1204fd54 */
L_1204FD51:
    ebx = MEM32(esi + 0xC); /* 0x1204FD51: mov ebx, dword ptr [esi + 0xc] */
L_1204FD54:
    /* test esi, esi */ /* 0x1204FD54: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204FDD7; /* 0x1204FD56: je 0x1204fdd7 */
L_1204FD58:
    edi = MEM32(esi + 0x10); /* 0x1204FD58: mov edi, dword ptr [esi + 0x10] */
    MEM32(ebp + (-0x4)) = esi; /* 0x1204FD5B: mov dword ptr [ebp - 4], esi */
    /* test edi, edi */ /* 0x1204FD5E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204FDD7; /* 0x1204FD60: je 0x1204fdd7 */
L_1204FD62:
    /* cmp MEM32(edi + 0x4), edx */ /* 0x1204FD62: cmp dword ptr [edi + 4], edx */
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204FDCA; /* 0x1204FD65: jne 0x1204fdca */
L_1204FD67:
    eax = MEM32(ebp + 0x8); /* 0x1204FD67: mov eax, dword ptr [ebp + 8] */
    /* cmp MEM32(edi), eax */ /* 0x1204FD6A: cmp dword ptr [edi], eax */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204FDCA; /* 0x1204FD6C: jne 0x1204fdca */
L_1204FD6E:
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x1204FD6E: push dword ptr [ebp + 0x24] */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x1204FD71: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1204FD74: push dword ptr [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x1204FD77: push eax */
    PUSH32(esp, edx); /* 0x1204FD78: push edx */
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x1204FD79: push dword ptr [esi + 8] */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x1204FD7C: push dword ptr [esi + 4] */
    PUSH32(esp, MEM32(esi)); /* 0x1204FD7F: push dword ptr [esi] */
    RECOMP_CALL(sub_1204FB57); /* 0x1204FD81: call 0x1204fb57 */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x1204FD86: fstp dword ptr [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x1204FD89: push dword ptr [ebp + 0x24] */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x1204FD8C: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1204FD8F: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1204FD92: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1204FD95: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(edi + 0x8)); /* 0x1204FD98: push dword ptr [edi + 8] */
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x1204FD9B: push dword ptr [edi + 4] */
    PUSH32(esp, MEM32(edi)); /* 0x1204FD9E: push dword ptr [edi] */
    RECOMP_CALL(sub_1204FB57); /* 0x1204FDA0: call 0x1204fb57 */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x1204FDA5: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x1204FDA8: fld dword ptr [ebp - 8] */
    edx = MEM32(ebp + 0xC); /* 0x1204FDAB: mov edx, dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x1204FDAE: fld dword ptr [ebp - 0xc] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1204FDB1: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1204FDB3: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1204FDB5: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1204FDC7; /* 0x1204FDB8: jp 0x1204fdc7 */
L_1204FDBA:
    ecx = MEM32(ebp + (-0x4)); /* 0x1204FDBA: mov ecx, dword ptr [ebp - 4] */
    ebx = MEM32(edi + 0xC); /* 0x1204FDBD: mov ebx, dword ptr [edi + 0xc] */
    esi = edi; /* 0x1204FDC0: mov esi, edi */
    MEM32(ebp + 0x18) = ecx; /* 0x1204FDC2: mov dword ptr [ebp + 0x18], ecx */
    goto L_1204FDCA; /* 0x1204FDC5: jmp 0x1204fdca */
L_1204FDC7:
    ecx = MEM32(ebp + 0x18); /* 0x1204FDC7: mov ecx, dword ptr [ebp + 0x18] */
L_1204FDCA:
    MEM32(ebp + (-0x4)) = edi; /* 0x1204FDCA: mov dword ptr [ebp - 4], edi */
    edi = MEM32(edi + 0x10); /* 0x1204FDCD: mov edi, dword ptr [edi + 0x10] */
    /* test edi, edi */ /* 0x1204FDD0: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1204FD62; /* 0x1204FDD2: jne 0x1204fd62 */
L_1204FDD4:
    eax = MEM32(ebp + (-0x10)); /* 0x1204FDD4: mov eax, dword ptr [ebp - 0x10] */
L_1204FDD7:
    /* cmp ebx, MEM32(ebp + 0x1C) */ /* 0x1204FDD7: cmp ebx, dword ptr [ebp + 0x1c] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1204FDF1; /* 0x1204FDDA: je 0x1204fdf1 */
L_1204FDDC:
    /* test ecx, ecx */ /* 0x1204FDDC: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204FDE8; /* 0x1204FDDE: je 0x1204fde8 */
L_1204FDE0:
    eax = MEM32(esi + 0x10); /* 0x1204FDE0: mov eax, dword ptr [esi + 0x10] */
    MEM32(ecx + 0x10) = eax; /* 0x1204FDE3: mov dword ptr [ecx + 0x10], eax */
    goto L_1204FDF1; /* 0x1204FDE6: jmp 0x1204fdf1 */
L_1204FDE8:
    ecx = MEM32(esi + 0x10); /* 0x1204FDE8: mov ecx, dword ptr [esi + 0x10] */
    edx = MEM32(ebp + 0x14); /* 0x1204FDEB: mov edx, dword ptr [ebp + 0x14] */
    MEM32(edx + eax * 4) = ecx; /* 0x1204FDEE: mov dword ptr [edx + eax*4], ecx */
L_1204FDF1:
    edi = POP32_VAL(esp); /* 0x1204FDF1: pop edi */
    esi = POP32_VAL(esp); /* 0x1204FDF2: pop esi */
    eax = ebx; /* 0x1204FDF3: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x1204FDF5: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1204FDF6: leave  */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x1204FDF7: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_1204FDFF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204FDFFu);

L_1204FDFF:
    edi = edi; /* 0x1204FDFF: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204FE01: push ebp */
    ebp = esp; /* 0x1204FE02: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1204FE04: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1204FE05: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1204FE08: push edi */
    eax = esi + 0x4; /* 0x1204FE09: lea eax, [esi + 4] */
    PUSH32(esp, eax); /* 0x1204FE0C: push eax */
    RECOMP_ICALL(MEM32(0x120010F8)); /* 0x1204FE0D: call dword ptr [0x120010f8] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1204FE13: mov edi, eax */
    /* test edi, edi */ /* 0x1204FE15: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1204FE2B; /* 0x1204FE17: jne 0x1204fe2b */
L_1204FE19:
    /* test esi, esi */ /* 0x1204FE19: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204FE2B; /* 0x1204FE1B: je 0x1204fe2b */
L_1204FE1D:
    ecx = esi; /* 0x1204FE1D: mov ecx, esi */
    RECOMP_CALL(sub_12049DE0); /* 0x1204FE1F: call 0x12049de0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1204FE24: push esi */
    RECOMP_CALL(sub_121BF388); /* 0x1204FE25: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1204FE2A: pop ecx */
L_1204FE2B:
    eax = edi; /* 0x1204FE2B: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1204FE2D: pop edi */
    esi = POP32_VAL(esp); /* 0x1204FE2E: pop esi */
    ebp = POP32_VAL(esp); /* 0x1204FE2F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1204FE30: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1204FE38(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204FE38u);

L_1204FE38:
    edi = edi; /* 0x1204FE38: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204FE3A: push ebp */
    ebp = esp; /* 0x1204FE3B: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1204FE3D: push ecx */
    /* test MEM8(ebp + 0x8), 2 */ /* 0x1204FE3E: test byte ptr [ebp + 8], 2 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, esi); /* 0x1204FE42: push esi */
    esi = ecx; /* 0x1204FE43: mov esi, ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204FE7A; /* 0x1204FE45: je 0x1204fe7a */
L_1204FE47:
    PUSH32(esp, ebx); /* 0x1204FE47: push ebx */
    PUSH32(esp, edi); /* 0x1204FE48: push edi */
    edi = esi + (-0x4); /* 0x1204FE49: lea edi, [esi - 4] */
    eax = MEM32(edi); /* 0x1204FE4C: mov eax, dword ptr [edi] */
    ebx = eax; /* 0x1204FE4E: mov ebx, eax */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x50u); /* 0x1204FE50: imul ebx, ebx, 0x50 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + esi; /* 0x1204FE53: add ebx, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1204FE55: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_1204FE67; /* 0x1204FE56: js 0x1204fe67 */
L_1204FE58:
    esi = eax; /* 0x1204FE58: mov esi, eax */
L_1204FE5A:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x50u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 0x50u; /* 0x1204FE5A: sub ebx, 0x50 */
    _flag_k = FK_CMP;
    ecx = ebx; /* 0x1204FE5D: mov ecx, ebx */
    RECOMP_CALL(sub_12049F14); /* 0x1204FE5F: call 0x12049f14 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1204FE64: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NS(_flag_a, _flag_b)) goto L_1204FE5A; /* 0x1204FE65: jns 0x1204fe5a */
L_1204FE67:
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1204FE67: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204FE74; /* 0x1204FE6B: je 0x1204fe74 */
L_1204FE6D:
    PUSH32(esp, edi); /* 0x1204FE6D: push edi */
    RECOMP_CALL(sub_121BF388); /* 0x1204FE6E: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1204FE73: pop ecx */
L_1204FE74:
    eax = edi; /* 0x1204FE74: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1204FE76: pop edi */
    ebx = POP32_VAL(esp); /* 0x1204FE77: pop ebx */
    goto L_1204FE8E; /* 0x1204FE78: jmp 0x1204fe8e */
L_1204FE7A:
    RECOMP_CALL(sub_12049F14); /* 0x1204FE7A: call 0x12049f14 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1204FE7F: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204FE8C; /* 0x1204FE83: je 0x1204fe8c */
L_1204FE85:
    PUSH32(esp, esi); /* 0x1204FE85: push esi */
    RECOMP_CALL(sub_121BF388); /* 0x1204FE86: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1204FE8B: pop ecx */
L_1204FE8C:
    eax = esi; /* 0x1204FE8C: mov eax, esi */
L_1204FE8E:
    esi = POP32_VAL(esp); /* 0x1204FE8E: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1204FE8F: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1204FE90: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1204FE98(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204FE98u);

L_1204FE98:
    edi = edi; /* 0x1204FE98: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204FE9A: push ebp */
    ebp = esp; /* 0x1204FE9B: mov ebp, esp */
    eax = MEM32(ebp + 0x10); /* 0x1204FE9D: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x1204FEA0: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1204FEA3: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1204FEA4: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1204FEA7: push edi */
    PUSH32(esp, 4); /* 0x1204FEA8: push 4 */
    ecx = POP32_VAL(esp); /* 0x1204FEAA: pop ecx */
    edi = 0x12018314u; /* 0x1204FEAB: mov edi, 0x12018314 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1204FEB0: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x1204FEB2: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1204FEC7; /* 0x1204FEB4: je 0x1204fec7 */
L_1204FEB6:
    esi = MEM32(ebp + 0xC); /* 0x1204FEB6: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, 4); /* 0x1204FEB9: push 4 */
    ecx = POP32_VAL(esp); /* 0x1204FEBB: pop ecx */
    edi = 0x12001BB8u; /* 0x1204FEBC: mov edi, 0x12001bb8 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1204FEC1: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x1204FEC3: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1204FED6; /* 0x1204FEC5: jne 0x1204fed6 */
L_1204FEC7:
    ecx = MEM32(ebp + 0x8); /* 0x1204FEC7: mov ecx, dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x1204FECA: mov dword ptr [eax], ecx */
    eax = MEM32(ecx); /* 0x1204FECC: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x1204FECE: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1204FECF: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1204FED2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1204FEDB; /* 0x1204FED4: jmp 0x1204fedb */
L_1204FED6:
    eax = 0x80004002u; /* 0x1204FED6: mov eax, 0x80004002 */
L_1204FEDB:
    edi = POP32_VAL(esp); /* 0x1204FEDB: pop edi */
    esi = POP32_VAL(esp); /* 0x1204FEDC: pop esi */
    ebp = POP32_VAL(esp); /* 0x1204FEDD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1204FEDE: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1204FEE6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204FEE6u);

L_1204FEE6:
    edi = edi; /* 0x1204FEE6: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204FEE8: push ebp */
    ebp = esp; /* 0x1204FEE9: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1204FEEB: push ebx */
    PUSH32(esp, esi); /* 0x1204FEEC: push esi */
    PUSH32(esp, edi); /* 0x1204FEED: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1204FEEE: mov edi, dword ptr [ebp + 8] */
    esi = ecx; /* 0x1204FEF1: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1204FEF3: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x234) = 1; /* 0x1204FEF5: mov dword ptr [esi + 0x234], 1 */
    /* test edi, edi */ /* 0x1204FEFF: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204FF67; /* 0x1204FF01: je 0x1204ff67 */
L_1204FF03:
    /* cmp MEM32(esi + 0x4), ebx */ /* 0x1204FF03: cmp dword ptr [esi + 4], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1204FF67; /* 0x1204FF06: jne 0x1204ff67 */
L_1204FF08:
    PUSH32(esp, 0x120014BCu); /* 0x1204FF08: push 0x120014bc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1204FF0D: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x50u); /* 0x1204FF0F: push 0x50 */
    edx = POP32_VAL(esp); /* 0x1204FF11: pop edx */
    eax = edi; /* 0x1204FF12: mov eax, edi */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x1204FF14: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1204FF16: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1204FF19: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1204FF1B: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1204FF1D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x1204FF1F: add ecx, 4 */
    _flag_k = FK_ADD;
    SET_LO8(eax, (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) ? 1 : 0); /* 0x1204FF22: setb al */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1204FF25: neg eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x1204FF27: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1204FF29: push eax */
    RECOMP_CALL(sub_12018970); /* 0x1204FF2A: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1204FF2F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1204FF30: pop ecx */
    /* test eax, eax */ /* 0x1204FF31: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204FF57; /* 0x1204FF33: je 0x1204ff57 */
L_1204FF35:
    edx = edi + (-0x1); /* 0x1204FF35: lea edx, [edi - 1] */
    MEM32(eax) = edi; /* 0x1204FF38: mov dword ptr [eax], edi */
    ecx = eax + 0x4; /* 0x1204FF3A: lea ecx, [eax + 4] */
    /* test edx, edx */ /* 0x1204FF3D: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1204FF59; /* 0x1204FF3F: js 0x1204ff59 */
L_1204FF41:
    eax = ecx + 0x8; /* 0x1204FF41: lea eax, [ecx + 8] */
L_1204FF44:
    MEM32(eax + (-0x8)) = ebx; /* 0x1204FF44: mov dword ptr [eax - 8], ebx */
    MEM32(eax + (-0x4)) = ebx; /* 0x1204FF47: mov dword ptr [eax - 4], ebx */
    MEM32(eax) = ebx; /* 0x1204FF4A: mov dword ptr [eax], ebx */
    MEM32(eax + 0x4) = ebx; /* 0x1204FF4C: mov dword ptr [eax + 4], ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x50u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x50u; /* 0x1204FF4F: add eax, 0x50 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1204FF52: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NS(_flag_a, _flag_b)) goto L_1204FF44; /* 0x1204FF53: jns 0x1204ff44 */
L_1204FF55:
    goto L_1204FF59; /* 0x1204FF55: jmp 0x1204ff59 */
L_1204FF57:
    ecx = ebx; /* 0x1204FF57: mov ecx, ebx */
L_1204FF59:
    MEM32(esi + 0x4) = ecx; /* 0x1204FF59: mov dword ptr [esi + 4], ecx */
    /* test ecx, ecx */ /* 0x1204FF5C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1204FF67; /* 0x1204FF5E: jne 0x1204ff67 */
L_1204FF60:
    eax = 0x8007000Eu; /* 0x1204FF60: mov eax, 0x8007000e */
    goto L_1204FFA4; /* 0x1204FF65: jmp 0x1204ffa4 */
L_1204FF67:
    eax = MEM32(esi + 0x1C); /* 0x1204FF67: mov eax, dword ptr [esi + 0x1c] */
    PUSH32(esp, 0x120014BCu); /* 0x1204FF6A: push 0x120014bc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1204FF6F: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x1204FF71: push 4 */
    edx = POP32_VAL(esp); /* 0x1204FF73: pop edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x1204FF74: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1204FF76: seto cl */
    MEM32(esi + 0x8) = edi; /* 0x1204FF79: mov dword ptr [esi + 8], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1204FF7C: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1204FF7E: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1204FF80: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x1204FF81: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1204FF86: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1204FF87: pop ecx */
    ecx = eax; /* 0x1204FF88: mov ecx, eax */
    MEM32(esi + 0x10) = ecx; /* 0x1204FF8A: mov dword ptr [esi + 0x10], ecx */
    /* test ecx, ecx */ /* 0x1204FF8D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1204FF60; /* 0x1204FF8F: je 0x1204ff60 */
L_1204FF91:
    eax = MEM32(esi + 0x1C); /* 0x1204FF91: mov eax, dword ptr [esi + 0x1c] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1204FF94: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1204FF94: shl eax, 2 */
    PUSH32(esp, eax); /* 0x1204FF97: push eax */
    PUSH32(esp, ebx); /* 0x1204FF98: push ebx */
    PUSH32(esp, ecx); /* 0x1204FF99: push ecx */
    RECOMP_CALL(sub_121BF434); /* 0x1204FF9A: call 0x121bf434 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1204FF9F: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1204FFA2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1204FFA4:
    edi = POP32_VAL(esp); /* 0x1204FFA4: pop edi */
    esi = POP32_VAL(esp); /* 0x1204FFA5: pop esi */
    ebx = POP32_VAL(esp); /* 0x1204FFA6: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1204FFA7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1204FFA8: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1204FFB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204FFB0u);

L_1204FFB0:
    edi = edi; /* 0x1204FFB0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204FFB2: push ebp */
    ebp = esp; /* 0x1204FFB3: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1204FFB5: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1204FFB8: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1204FFB9: push dword ptr [ebp + 0xc] */
    esi = ecx; /* 0x1204FFBC: mov esi, ecx */
    MEM32(esi + 0x1C) = eax; /* 0x1204FFBE: mov dword ptr [esi + 0x1c], eax */
    eax = MEM32(esi); /* 0x1204FFC1: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x1204FFC3: push esi */
    RECOMP_ICALL(MEM32(eax + 0x54)); /* 0x1204FFC4: call dword ptr [eax + 0x54] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1204FFC7: push dword ptr [ebp + 0x10] */
    ecx = esi; /* 0x1204FFCA: mov ecx, esi */
    RECOMP_CALL(sub_1204FEE6); /* 0x1204FFCC: call 0x1204fee6 */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x1204FFD1: pop esi */
    ebp = POP32_VAL(esp); /* 0x1204FFD2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1204FFD3: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1204FFDB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204FFDBu);

L_1204FFDB:
    edi = edi; /* 0x1204FFDB: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204FFDD: push ebp */
    ebp = esp; /* 0x1204FFDE: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1204FFE0: push dword ptr [ebp + 0x14] */
    eax = MEM32(ebp + 0x10); /* 0x1204FFE3: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1204FFE6: push dword ptr [ebp + 0xc] */
    MEM32(ecx + 0x4) = eax; /* 0x1204FFE9: mov dword ptr [ecx + 4], eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1204FFEC: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1204FFB0); /* 0x1204FFEF: call 0x1204ffb0 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1204FFF4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1204FFF5: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1204FFFD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1204FFFDu);

L_1204FFFD:
    edi = edi; /* 0x1204FFFD: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1204FFFF: push ebp */
    ebp = esp; /* 0x12050000: mov ebp, esp */
    PUSH32(esp, 0); /* 0x12050002: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12050004: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1204B4B3); /* 0x12050007: call 0x1204b4b3 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1205000C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12050017; /* 0x1205000E: jne 0x12050017 */
L_12050010:
    eax = 0x8876086Cu; /* 0x12050010: mov eax, 0x8876086c */
    goto L_12050048; /* 0x12050015: jmp 0x12050048 */
L_12050017:
    PUSH32(esp, esi); /* 0x12050017: push esi */
    PUSH32(esp, edi); /* 0x12050018: push edi */
    edi = MEM32(ebp + 0x8); /* 0x12050019: mov edi, dword ptr [ebp + 8] */
    PUSH32(esp, 1); /* 0x1205001C: push 1 */
    esi = edi + 0x20; /* 0x1205001E: lea esi, [edi + 0x20] */
    PUSH32(esp, esi); /* 0x12050021: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12050022: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1204B0D0); /* 0x12050025: call 0x1204b0d0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1205002A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_12050031; /* 0x1205002C: jns 0x12050031 */
L_1205002E:
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x1205002E: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_12050031:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12050031: push dword ptr [ebp + 0xc] */
    eax = edi + 0x24; /* 0x12050034: lea eax, [edi + 0x24] */
    PUSH32(esp, eax); /* 0x12050037: push eax */
    RECOMP_CALL(sub_1204BFE1); /* 0x12050038: call 0x1204bfe1 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(edi + 0x230)); _flag_b = (uint32_t)(0xFFFFFFFBu);
    MEM32(edi + 0x230) = MEM32(edi + 0x230) & 0xFFFFFFFBu; /* 0x1205003D: and dword ptr [edi + 0x230], 0xfffffffb */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x12050044: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12050045: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x12050047: pop esi */
L_12050048:
    ebp = POP32_VAL(esp); /* 0x12050048: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x12050049: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_12050051(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12050051u);

L_12050051:
    edi = edi; /* 0x12050051: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12050053: push ebp */
    ebp = esp; /* 0x12050054: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x12050056: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x24u; /* 0x12050059: add eax, 0x24 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1205005C: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1205005D: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1204BFE1); /* 0x12050060: call 0x1204bfe1 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12050065: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x12050067: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x12050068: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_12050070(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12050070u);

L_12050070:
    edi = edi; /* 0x12050070: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12050072: push ebp */
    ebp = esp; /* 0x12050073: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x12050075: push ecx */
    PUSH32(esp, ebx); /* 0x12050076: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x12050077: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1205007A: push esi */
    PUSH32(esp, edi); /* 0x1205007B: push edi */
    eax = ebx + 0x24C; /* 0x1205007C: lea eax, [ebx + 0x24c] */
    PUSH32(esp, 0x10u); /* 0x12050082: push 0x10 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x12050084: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x12050086: push eax */
    ecx = ebx; /* 0x12050087: mov ecx, ebx */
    edi = esi; /* 0x12050089: mov edi, esi */
    RECOMP_CALL(sub_1204B530); /* 0x1205008B: call 0x1204b530 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx); /* 0x12050090: mov eax, dword ptr [ebx] */
    ecx = ebp + 0x8; /* 0x12050092: lea ecx, [ebp + 8] */
    PUSH32(esp, ecx); /* 0x12050095: push ecx */
    PUSH32(esp, esi); /* 0x12050096: push esi */
    PUSH32(esp, ebx); /* 0x12050097: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x4C)); /* 0x12050098: call dword ptr [eax + 0x4c] */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + 0x8), esi */ /* 0x1205009B: cmp dword ptr [ebp + 8], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120500BB; /* 0x1205009E: jne 0x120500bb */
L_120500A0:
    eax = ebp + 0x8; /* 0x120500A0: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x120500A3: push eax */
    eax = ebp + (-0x4); /* 0x120500A4: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x120500A7: push eax */
    ecx = ebx; /* 0x120500A8: mov ecx, ebx */
    MEM32(ebp + (-0x4)) = esi; /* 0x120500AA: mov dword ptr [ebp - 4], esi */
    RECOMP_CALL(sub_1204BB2D); /* 0x120500AD: call 0x1204bb2d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x120500B2: push dword ptr [ebp - 4] */
    RECOMP_CALL(sub_121BF388); /* 0x120500B5: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120500BA: pop ecx */
L_120500BB:
    eax = MEM32(ebx + 0x248); /* 0x120500BB: mov eax, dword ptr [ebx + 0x248] */
    ecx = MEM32(eax); /* 0x120500C1: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x120500C3: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x120500C4: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x120500C7: mov ecx, dword ptr [ebp + 8] */
    MEM32(ebx + 0x24C) = esi; /* 0x120500CA: mov dword ptr [ebx + 0x24c], esi */
    /* test ecx, ecx */ /* 0x120500D0: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120500E2; /* 0x120500D2: je 0x120500e2 */
L_120500D4:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + esi; /* 0x120500D4: add esi, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((esi | 1)); _flag_b = (uint32_t)((esi | 1));
    esi = esi | 1; /* 0x120500D6: or esi, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx; /* 0x120500D9: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    eax = eax & esi; /* 0x120500DB: and eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x120500DD: inc edi */
    _flag_k = FK_INC;
    /* cmp eax, ecx */ /* 0x120500DE: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_120500D4; /* 0x120500E0: jne 0x120500d4 */
L_120500E2:
    eax = MEM32(ebp + 0xC); /* 0x120500E2: mov eax, dword ptr [ebp + 0xc] */
    MEM32(eax) = esi; /* 0x120500E5: mov dword ptr [eax], esi */
    eax = MEM32(ebp + 0x10); /* 0x120500E7: mov eax, dword ptr [ebp + 0x10] */
    MEM32(eax) = edi; /* 0x120500EA: mov dword ptr [eax], edi */
    edi = POP32_VAL(esp); /* 0x120500EC: pop edi */
    esi = POP32_VAL(esp); /* 0x120500ED: pop esi */
    ebx = POP32_VAL(esp); /* 0x120500EE: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120500EF: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x120500F0: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_120500F8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120500F8u);

L_120500F8:
    edi = edi; /* 0x120500F8: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120500FA: push ebp */
    ebp = esp; /* 0x120500FB: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x120500FD: push ecx */
    PUSH32(esp, ebx); /* 0x120500FE: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x120500FF: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x12050102: push esi */
    PUSH32(esp, edi); /* 0x12050103: push edi */
    eax = ebx + 0x24C; /* 0x12050104: lea eax, [ebx + 0x24c] */
    PUSH32(esp, 0x10u); /* 0x1205010A: push 0x10 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1205010C: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1205010E: push eax */
    ecx = ebx; /* 0x1205010F: mov ecx, ebx */
    edi = esi; /* 0x12050111: mov edi, esi */
    RECOMP_CALL(sub_1204B530); /* 0x12050113: call 0x1204b530 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx); /* 0x12050118: mov eax, dword ptr [ebx] */
    ecx = ebp + 0x8; /* 0x1205011A: lea ecx, [ebp + 8] */
    PUSH32(esp, ecx); /* 0x1205011D: push ecx */
    PUSH32(esp, esi); /* 0x1205011E: push esi */
    PUSH32(esp, ebx); /* 0x1205011F: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x4C)); /* 0x12050120: call dword ptr [eax + 0x4c] */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + 0x8), esi */ /* 0x12050123: cmp dword ptr [ebp + 8], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12050143; /* 0x12050126: jne 0x12050143 */
L_12050128:
    eax = ebp + 0x8; /* 0x12050128: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x1205012B: push eax */
    eax = ebp + (-0x4); /* 0x1205012C: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1205012F: push eax */
    ecx = ebx; /* 0x12050130: mov ecx, ebx */
    MEM32(ebp + (-0x4)) = esi; /* 0x12050132: mov dword ptr [ebp - 4], esi */
    RECOMP_CALL(sub_1204C275); /* 0x12050135: call 0x1204c275 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1205013A: push dword ptr [ebp - 4] */
    RECOMP_CALL(sub_121BF388); /* 0x1205013D: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12050142: pop ecx */
L_12050143:
    eax = MEM32(ebx + 0x248); /* 0x12050143: mov eax, dword ptr [ebx + 0x248] */
    ecx = MEM32(eax); /* 0x12050149: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1205014B: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x1205014C: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x1205014F: mov ecx, dword ptr [ebp + 8] */
    MEM32(ebx + 0x24C) = esi; /* 0x12050152: mov dword ptr [ebx + 0x24c], esi */
    /* test ecx, ecx */ /* 0x12050158: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1205016A; /* 0x1205015A: je 0x1205016a */
L_1205015C:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + esi; /* 0x1205015C: add esi, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((esi | 1)); _flag_b = (uint32_t)((esi | 1));
    esi = esi | 1; /* 0x1205015E: or esi, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx; /* 0x12050161: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    eax = eax & esi; /* 0x12050163: and eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x12050165: inc edi */
    _flag_k = FK_INC;
    /* cmp eax, ecx */ /* 0x12050166: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1205015C; /* 0x12050168: jne 0x1205015c */
L_1205016A:
    eax = MEM32(ebp + 0xC); /* 0x1205016A: mov eax, dword ptr [ebp + 0xc] */
    MEM32(eax) = esi; /* 0x1205016D: mov dword ptr [eax], esi */
    eax = MEM32(ebp + 0x10); /* 0x1205016F: mov eax, dword ptr [ebp + 0x10] */
    MEM32(eax) = edi; /* 0x12050172: mov dword ptr [eax], edi */
    edi = POP32_VAL(esp); /* 0x12050174: pop edi */
    esi = POP32_VAL(esp); /* 0x12050175: pop esi */
    ebx = POP32_VAL(esp); /* 0x12050176: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12050177: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x12050178: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_12050180(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12050180u);

L_12050180:
    edi = edi; /* 0x12050180: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12050182: push ebp */
    ebp = esp; /* 0x12050183: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x12050185: sub esp, 0x18 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12050188: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1205018A: push edi */
    MEM32(ebp + (-0x4)) = eax; /* 0x1205018B: mov dword ptr [ebp - 4], eax */
    MEM32(ebp + (-0x8)) = eax; /* 0x1205018E: mov dword ptr [ebp - 8], eax */
    edi = eax; /* 0x12050191: mov edi, eax */
    /* cmp MEM32(ebp + 0xC), eax */ /* 0x12050193: cmp dword ptr [ebp + 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120504FD; /* 0x12050196: je 0x120504fd */
L_1205019C:
    /* cmp MEM32(ebp + 0x10), eax */ /* 0x1205019C: cmp dword ptr [ebp + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120501AB; /* 0x1205019F: jne 0x120501ab */
L_120501A1:
    eax = 0x8876086Cu; /* 0x120501A1: mov eax, 0x8876086c */
    goto L_120504FD; /* 0x120501A6: jmp 0x120504fd */
L_120501AB:
    PUSH32(esp, ebx); /* 0x120501AB: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x120501AC: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x120501AF: push esi */
    ecx = ebx; /* 0x120501B0: mov ecx, ebx */
    RECOMP_CALL(sub_1204A410); /* 0x120501B2: call 0x1204a410 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120501B7: mov esi, eax */
    /* test esi, esi */ /* 0x120501B9: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120504D1; /* 0x120501BB: js 0x120504d1 */
L_120501C1:
    esi = MEM32(ebp + 0xC); /* 0x120501C1: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, 0x120014BCu); /* 0x120501C4: push 0x120014bc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120501C9: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x120501CB: push 4 */
    edi = POP32_VAL(esp); /* 0x120501CD: pop edi */
    eax = esi; /* 0x120501CE: mov eax, esi */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edi); /* 0x120501D0: mul edi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x120501D2: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x120501D5: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x120501D7: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x120501D9: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x120501DA: call 0x12018970 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0xC)) = eax; /* 0x120501DF: mov dword ptr [ebp - 0xc], eax */
    eax = MEM32(ebx + 0xC); /* 0x120501E2: mov eax, dword ptr [ebx + 0xc] */
    eax = (uint32_t)((int32_t)eax * (int32_t)esi); /* 0x120501E5: imul eax, esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120501E8: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edi); /* 0x120501EA: mul edi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x120501EC: seto cl */
    PUSH32(esp, 0x120014BCu); /* 0x120501EF: push 0x120014bc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x120501F4: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x120501F6: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x120501F8: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x120501F9: call 0x12018970 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = eax; /* 0x120501FE: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebx + 0xC); /* 0x12050201: mov eax, dword ptr [ebx + 0xc] */
    eax = (uint32_t)((int32_t)eax * (int32_t)esi); /* 0x12050204: imul eax, esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x12050207: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edi); /* 0x12050209: mul edi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1205020B: seto cl */
    PUSH32(esp, 0x120014BCu); /* 0x1205020E: push 0x120014bc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x12050213: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x12050215: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x12050217: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x12050218: call 0x12018970 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebx + 0x8); /* 0x1205021D: mov edi, dword ptr [ebx + 8] */
    MEM32(ebp + (-0x8)) = eax; /* 0x12050220: mov dword ptr [ebp - 8], eax */
    PUSH32(esp, 0x120014BCu); /* 0x12050223: push 0x120014bc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x12050228: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x50u); /* 0x1205022A: push 0x50 */
    edx = POP32_VAL(esp); /* 0x1205022C: pop edx */
    eax = edi; /* 0x1205022D: mov eax, edi */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x1205022F: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x12050231: seto cl */
    MEM32(ebp + (-0x10)) = edi; /* 0x12050234: mov dword ptr [ebp - 0x10], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x12050237: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x12050239: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1205023B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x1205023D: add ecx, 4 */
    _flag_k = FK_ADD;
    SET_LO8(eax, (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) ? 1 : 0); /* 0x12050240: setb al */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x12050243: neg eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x12050245: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x12050247: push eax */
    RECOMP_CALL(sub_12018970); /* 0x12050248: call 0x12018970 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x1205024D: add esp, 0x20 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x12050250: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1205027C; /* 0x12050252: je 0x1205027c */
L_12050254:
    ecx = MEM32(ebp + (-0x10)); /* 0x12050254: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x12050257: dec ecx */
    _flag_k = FK_DEC;
    MEM32(eax) = edi; /* 0x12050258: mov dword ptr [eax], edi */
    edi = eax + 0x4; /* 0x1205025A: lea edi, [eax + 4] */
    MEM32(ebp + (-0x14)) = edi; /* 0x1205025D: mov dword ptr [ebp - 0x14], edi */
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_12050281; /* 0x12050260: js 0x12050281 */
L_12050262:
    eax = edi + 0x8; /* 0x12050262: lea eax, [edi + 8] */
L_12050265:
    _flag_a = (uint32_t)(MEM32(eax + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(eax + (-0x8)) = MEM32(eax + (-0x8)) & 0; /* 0x12050265: and dword ptr [eax - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(eax + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(eax + (-0x4)) = MEM32(eax + (-0x4)) & 0; /* 0x12050269: and dword ptr [eax - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x1205026D: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) & 0; /* 0x12050270: and dword ptr [eax + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x50u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x50u; /* 0x12050274: add eax, 0x50 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x12050277: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NS(_flag_a, _flag_b)) goto L_12050265; /* 0x12050278: jns 0x12050265 */
L_1205027A:
    goto L_12050281; /* 0x1205027A: jmp 0x12050281 */
L_1205027C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1205027C: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = edi; /* 0x1205027E: mov dword ptr [ebp - 0x14], edi */
L_12050281:
    eax = MEM32(ebp + (-0xC)); /* 0x12050281: mov eax, dword ptr [ebp - 0xc] */
    /* test eax, eax */ /* 0x12050284: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120504CA; /* 0x12050286: je 0x120504ca */
L_1205028C:
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x1205028C: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120504CA; /* 0x12050290: je 0x120504ca */
L_12050296:
    /* cmp MEM32(ebp + (-0x8)), 0 */ /* 0x12050296: cmp dword ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120504CA; /* 0x1205029A: je 0x120504ca */
L_120502A0:
    /* test edi, edi */ /* 0x120502A0: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120504CA; /* 0x120502A2: je 0x120504ca */
L_120502A8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120502A8: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = edx; /* 0x120502AA: mov dword ptr [ebp - 0x10], edx */
    /* test esi, esi */ /* 0x120502AD: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12050344; /* 0x120502AF: je 0x12050344 */
L_120502B5:
    esi = MEM32(ebp + 0x10); /* 0x120502B5: mov esi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x120502B8: sub eax, esi */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x18)) = eax; /* 0x120502BA: mov dword ptr [ebp - 0x18], eax */
L_120502BD:
    ecx = MEM32(esi); /* 0x120502BD: mov ecx, dword ptr [esi] */
    eax = MEM32(ebx + 0x10); /* 0x120502BF: mov eax, dword ptr [ebx + 0x10] */
    eax = MEM32(eax + ecx * 4); /* 0x120502C2: mov eax, dword ptr [eax + ecx*4] */
    ecx = MEM32(ebp + (-0x18)); /* 0x120502C5: mov ecx, dword ptr [ebp - 0x18] */
    MEM32(ecx + esi) = eax; /* 0x120502C8: mov dword ptr [ecx + esi], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120502CB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x10) = eax; /* 0x120502CD: mov dword ptr [ebp + 0x10], eax */
    /* cmp MEM32(ebx + 0xC), eax */ /* 0x120502D0: cmp dword ptr [ebx + 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ebx + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_12050334; /* 0x120502D3: jbe 0x12050334 */
L_120502D5:
    edx = MEM32(ebx + 0xC); /* 0x120502D5: mov edx, dword ptr [ebx + 0xc] */
    ecx = MEM32(esi); /* 0x120502D8: mov ecx, dword ptr [esi] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx); /* 0x120502DA: imul ecx, edx */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + (-0x10))); /* 0x120502DD: imul edx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + 0x10); /* 0x120502E1: add edx, dword ptr [ebp + 0x10] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x120502E4: add ecx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebx + 0x14); /* 0x120502E6: mov eax, dword ptr [ebx + 0x14] */
    eax = MEM32(eax + ecx * 4); /* 0x120502E9: mov eax, dword ptr [eax + ecx*4] */
    ecx = MEM32(ebp + (-0x4)); /* 0x120502EC: mov ecx, dword ptr [ebp - 4] */
    MEM32(ecx + edx * 4) = eax; /* 0x120502EF: mov dword ptr [ecx + edx*4], eax */
    edx = MEM32(ebx + 0xC); /* 0x120502F2: mov edx, dword ptr [ebx + 0xc] */
    ecx = MEM32(esi); /* 0x120502F5: mov ecx, dword ptr [esi] */
    eax = MEM32(ebx + 0x18); /* 0x120502F7: mov eax, dword ptr [ebx + 0x18] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx); /* 0x120502FA: imul ecx, edx */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + (-0x10))); /* 0x120502FD: imul edx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + 0x10); /* 0x12050301: add ecx, dword ptr [ebp + 0x10] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + 0x10); /* 0x12050304: add edx, dword ptr [ebp + 0x10] */
    _flag_k = FK_ADD;
    fp_push(*(float*)&MEM32(eax + ecx * 4)); /* 0x12050307: fld dword ptr [eax + ecx*4] */
    eax = MEM32(ebp + (-0x8)); /* 0x1205030A: mov eax, dword ptr [ebp - 8] */
    ecx = MEM32(ebp + (-0x4)); /* 0x1205030D: mov ecx, dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + edx * 4) = _v; } /* 0x12050310: fstp dword ptr [eax + edx*4] */
    eax = MEM32(ebx + 0xC); /* 0x12050313: mov eax, dword ptr [ebx + 0xc] */
    edx = MEM32(ebp + (-0x10)); /* 0x12050316: mov edx, dword ptr [ebp - 0x10] */
    eax = (uint32_t)((int32_t)eax * (int32_t)edx); /* 0x12050319: imul eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0x10); /* 0x1205031C: add eax, dword ptr [ebp + 0x10] */
    _flag_k = FK_ADD;
    eax = MEM32(ecx + eax * 4); /* 0x1205031F: mov eax, dword ptr [ecx + eax*4] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x50u); /* 0x12050322: imul eax, eax, 0x50 */
    _flag_a = (uint32_t)(MEM32(eax + edi)); _flag_b = (uint32_t)(1);
    MEM32(eax + edi) = MEM32(eax + edi) + 1; /* 0x12050325: inc dword ptr [eax + edi] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + 0x10); /* 0x12050328: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1205032B: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + 0x10) = eax; /* 0x1205032C: mov dword ptr [ebp + 0x10], eax */
    /* cmp eax, MEM32(ebx + 0xC) */ /* 0x1205032F: cmp eax, dword ptr [ebx + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120502D5; /* 0x12050332: jb 0x120502d5 */
L_12050334:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x12050334: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x12050335: add esi, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x10)) = edx; /* 0x12050338: mov dword ptr [ebp - 0x10], edx */
    /* cmp edx, MEM32(ebp + 0xC) */ /* 0x1205033B: cmp edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120502BD; /* 0x1205033E: jb 0x120502bd */
L_12050344:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0; /* 0x12050344: and dword ptr [ebp - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebx + 0x8), 0 */ /* 0x12050348: cmp dword ptr [ebx + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120503EF; /* 0x1205034C: jbe 0x120503ef */
L_12050352:
    PUSH32(esp, 0xFFFFFFFCu); /* 0x12050352: push -4 */
    eax = POP32_VAL(esp); /* 0x12050354: pop eax */
    esi = edi + 0x4; /* 0x12050355: lea esi, [edi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x12050358: sub eax, edi */
    _flag_k = FK_CMP;
    MEM32(ebp + 0x10) = esi; /* 0x1205035A: mov dword ptr [ebp + 0x10], esi */
    MEM32(ebp + (-0x18)) = eax; /* 0x1205035D: mov dword ptr [ebp - 0x18], eax */
L_12050360:
    eax = MEM32(esi + (-0x4)); /* 0x12050360: mov eax, dword ptr [esi - 4] */
    PUSH32(esp, 0x120014BCu); /* 0x12050363: push 0x120014bc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x12050368: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x1205036A: push 4 */
    edi = POP32_VAL(esp); /* 0x1205036C: pop edi */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edi); /* 0x1205036D: mul edi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1205036F: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x12050372: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x12050374: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x12050376: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x12050377: call 0x12018970 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = eax; /* 0x1205037C: mov dword ptr [esi], eax */
    eax = MEM32(esi + (-0x4)); /* 0x1205037E: mov eax, dword ptr [esi - 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x12050381: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edi); /* 0x12050383: mul edi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x12050385: seto cl */
    PUSH32(esp, 0x120014BCu); /* 0x12050388: push 0x120014bc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1205038D: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1205038F: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x12050391: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x12050392: call 0x12018970 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x12050397: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* cmp MEM32(esi), 0 */ /* 0x1205039A: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi + 0x4) = eax; /* 0x1205039D: mov dword ptr [esi + 4], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120504BD; /* 0x120503A0: je 0x120504bd */
L_120503A6:
    /* test eax, eax */ /* 0x120503A6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120504BD; /* 0x120503A8: je 0x120504bd */
L_120503AE:
    eax = MEM32(ebx + 0x4); /* 0x120503AE: mov eax, dword ptr [ebx + 4] */
    ecx = MEM32(ebp + (-0x18)); /* 0x120503B1: mov ecx, dword ptr [ebp - 0x18] */
    edi = MEM32(ebp + 0x10); /* 0x120503B4: mov edi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x120503B7: add ecx, esi */
    _flag_k = FK_ADD;
    eax = MEM32(ecx + eax + 0xC); /* 0x120503B9: mov eax, dword ptr [ecx + eax + 0xc] */
    MEM32(esi + 0x8) = eax; /* 0x120503BD: mov dword ptr [esi + 8], eax */
    eax = MEM32(ebx + 0x4); /* 0x120503C0: mov eax, dword ptr [ebx + 4] */
    esi = ecx + eax + 0x10; /* 0x120503C3: lea esi, [ecx + eax + 0x10] */
    eax = MEM32(ebp + (-0x10)); /* 0x120503C7: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0xCu; /* 0x120503CA: add edi, 0xc */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x10u); /* 0x120503CD: push 0x10 */
    ecx = POP32_VAL(esp); /* 0x120503CF: pop ecx */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x120503D0: rep movsd dword ptr es:[edi], dword ptr [esi] */
    esi = MEM32(ebp + 0x10); /* 0x120503D2: mov esi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(MEM32(esi + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(esi + (-0x4)) = MEM32(esi + (-0x4)) & 0; /* 0x120503D5: and dword ptr [esi - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x120503D9: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x50u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x50u; /* 0x120503DA: add esi, 0x50 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x10)) = eax; /* 0x120503DD: mov dword ptr [ebp - 0x10], eax */
    MEM32(ebp + 0x10) = esi; /* 0x120503E0: mov dword ptr [ebp + 0x10], esi */
    /* cmp eax, MEM32(ebx + 0x8) */ /* 0x120503E3: cmp eax, dword ptr [ebx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12050360; /* 0x120503E6: jb 0x12050360 */
L_120503EC:
    edi = MEM32(ebp + (-0x14)); /* 0x120503EC: mov edi, dword ptr [ebp - 0x14] */
L_120503EF:
    ecx = MEM32(ebp + 0xC); /* 0x120503EF: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120503F2: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x10) = edx; /* 0x120503F4: mov dword ptr [ebp + 0x10], edx */
    /* test ecx, ecx */ /* 0x120503F7: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12050457; /* 0x120503F9: je 0x12050457 */
L_120503FB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120503FB: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = esi; /* 0x120503FD: mov dword ptr [ebp - 0x14], esi */
    /* cmp MEM32(ebx + 0xC), esi */ /* 0x12050400: cmp dword ptr [ebx + 0xc], esi */
    _flag_a = (uint32_t)(MEM32(ebx + 0xC)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1205044F; /* 0x12050403: jbe 0x1205044f */
L_12050405:
    eax = MEM32(ebx + 0xC); /* 0x12050405: mov eax, dword ptr [ebx + 0xc] */
    ecx = MEM32(ebp + (-0x4)); /* 0x12050408: mov ecx, dword ptr [ebp - 4] */
    eax = (uint32_t)((int32_t)eax * (int32_t)edx); /* 0x1205040B: imul eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x1205040E: add eax, esi */
    _flag_k = FK_ADD;
    esi = MEM32(ecx + eax * 4); /* 0x12050410: mov esi, dword ptr [ecx + eax*4] */
    esi = (uint32_t)((int32_t)esi * (int32_t)0x50u); /* 0x12050413: imul esi, esi, 0x50 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edi; /* 0x12050416: add esi, edi */
    _flag_k = FK_ADD;
    ecx = MEM32(esi); /* 0x12050418: mov ecx, dword ptr [esi] */
    eax = MEM32(esi + 0x4); /* 0x1205041A: mov eax, dword ptr [esi + 4] */
    MEM32(eax + ecx * 4) = edx; /* 0x1205041D: mov dword ptr [eax + ecx*4], edx */
    edx = MEM32(ebx + 0xC); /* 0x12050420: mov edx, dword ptr [ebx + 0xc] */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + 0x10)); /* 0x12050423: imul edx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + (-0x14)); /* 0x12050427: add edx, dword ptr [ebp - 0x14] */
    _flag_k = FK_ADD;
    ecx = MEM32(esi); /* 0x1205042A: mov ecx, dword ptr [esi] */
    ebx = MEM32(ebp + (-0x8)); /* 0x1205042C: mov ebx, dword ptr [ebp - 8] */
    eax = MEM32(esi + 0x8); /* 0x1205042F: mov eax, dword ptr [esi + 8] */
    fp_push(*(float*)&MEM32(ebx + edx * 4)); /* 0x12050432: fld dword ptr [ebx + edx*4] */
    ebx = MEM32(ebp + 0x8); /* 0x12050435: mov ebx, dword ptr [ebp + 8] */
    edx = MEM32(ebp + 0x10); /* 0x12050438: mov edx, dword ptr [ebp + 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + ecx * 4) = _v; } /* 0x1205043B: fstp dword ptr [eax + ecx*4] */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(1);
    MEM32(esi) = MEM32(esi) + 1; /* 0x1205043E: inc dword ptr [esi] */
    _flag_k = FK_INC;
    esi = MEM32(ebp + (-0x14)); /* 0x12050440: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x12050443: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x14)) = esi; /* 0x12050444: mov dword ptr [ebp - 0x14], esi */
    /* cmp esi, MEM32(ebx + 0xC) */ /* 0x12050447: cmp esi, dword ptr [ebx + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebx + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12050405; /* 0x1205044A: jb 0x12050405 */
L_1205044C:
    ecx = MEM32(ebp + 0xC); /* 0x1205044C: mov ecx, dword ptr [ebp + 0xc] */
L_1205044F:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1205044F: inc edx */
    _flag_k = FK_INC;
    MEM32(ebp + 0x10) = edx; /* 0x12050450: mov dword ptr [ebp + 0x10], edx */
    /* cmp edx, ecx */ /* 0x12050453: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120503FB; /* 0x12050455: jb 0x120503fb */
L_12050457:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x12050457: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebx + 0x8), edx */ /* 0x12050459: cmp dword ptr [ebx + 8], edx */
    _flag_a = (uint32_t)(MEM32(ebx + 0x8)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_12050471; /* 0x1205045C: jbe 0x12050471 */
L_1205045E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1205045E: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_12050460:
    eax = MEM32(ebx + 0x4); /* 0x12050460: mov eax, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(MEM32(esi + eax + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(esi + eax + 0xC) = MEM32(esi + eax + 0xC) & 0; /* 0x12050463: and dword ptr [esi + eax + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x12050468: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x50u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x50u; /* 0x12050469: add esi, 0x50 */
    _flag_k = FK_ADD;
    /* cmp edx, MEM32(ebx + 0x8) */ /* 0x1205046C: cmp edx, dword ptr [ebx + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12050460; /* 0x1205046F: jb 0x12050460 */
L_12050471:
    PUSH32(esp, MEM32(ebx + 0x10)); /* 0x12050471: push dword ptr [ebx + 0x10] */
    MEM32(ebx + 0x1C) = ecx; /* 0x12050474: mov dword ptr [ebx + 0x1c], ecx */
    RECOMP_CALL(sub_121BF388); /* 0x12050477: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0xC)); /* 0x1205047C: mov eax, dword ptr [ebp - 0xc] */
    PUSH32(esp, MEM32(ebx + 0x14)); /* 0x1205047F: push dword ptr [ebx + 0x14] */
    MEM32(ebx + 0x10) = eax; /* 0x12050482: mov dword ptr [ebx + 0x10], eax */
    RECOMP_CALL(sub_121BF388); /* 0x12050485: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x1205048A: mov eax, dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebx + 0x18)); /* 0x1205048D: push dword ptr [ebx + 0x18] */
    MEM32(ebx + 0x14) = eax; /* 0x12050490: mov dword ptr [ebx + 0x14], eax */
    RECOMP_CALL(sub_121BF388); /* 0x12050493: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx + 0x4); /* 0x12050498: mov ecx, dword ptr [ebx + 4] */
    eax = MEM32(ebp + (-0x8)); /* 0x1205049B: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1205049E: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebx + 0x18) = eax; /* 0x120504A1: mov dword ptr [ebx + 0x18], eax */
    /* test ecx, ecx */ /* 0x120504A4: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120504AF; /* 0x120504A6: je 0x120504af */
L_120504A8:
    PUSH32(esp, 3); /* 0x120504A8: push 3 */
    RECOMP_CALL(sub_1204FE38); /* 0x120504AA: call 0x1204fe38 */
    RECOMP_FLAGS_IN();
L_120504AF:
    _flag_a = (uint32_t)(MEM32(ebx + 0x230)); _flag_b = (uint32_t)(0xFFFFFFFBu);
    MEM32(ebx + 0x230) = MEM32(ebx + 0x230) & 0xFFFFFFFBu; /* 0x120504AF: and dword ptr [ebx + 0x230], 0xfffffffb */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx + 0x4) = edi; /* 0x120504B6: mov dword ptr [ebx + 4], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120504B9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_120504FB; /* 0x120504BB: jmp 0x120504fb */
L_120504BD:
    edi = MEM32(ebp + (-0x14)); /* 0x120504BD: mov edi, dword ptr [ebp - 0x14] */
    eax = MEM32(ebp + (-0xC)); /* 0x120504C0: mov eax, dword ptr [ebp - 0xc] */
    esi = 0x8007000Eu; /* 0x120504C3: mov esi, 0x8007000e */
    goto L_120504D3; /* 0x120504C8: jmp 0x120504d3 */
L_120504CA:
    esi = 0x8007000Eu; /* 0x120504CA: mov esi, 0x8007000e */
    goto L_120504D3; /* 0x120504CF: jmp 0x120504d3 */
L_120504D1:
    eax = edi; /* 0x120504D1: mov eax, edi */
L_120504D3:
    PUSH32(esp, eax); /* 0x120504D3: push eax */
    RECOMP_CALL(sub_121BF388); /* 0x120504D4: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x120504D9: push dword ptr [ebp - 4] */
    RECOMP_CALL(sub_121BF388); /* 0x120504DC: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x120504E1: push dword ptr [ebp - 8] */
    RECOMP_CALL(sub_121BF388); /* 0x120504E4: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x120504E9: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x120504EC: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120504F9; /* 0x120504EE: je 0x120504f9 */
L_120504F0:
    PUSH32(esp, 3); /* 0x120504F0: push 3 */
    ecx = edi; /* 0x120504F2: mov ecx, edi */
    RECOMP_CALL(sub_1204FE38); /* 0x120504F4: call 0x1204fe38 */
    RECOMP_FLAGS_IN();
L_120504F9:
    eax = esi; /* 0x120504F9: mov eax, esi */
L_120504FB:
    esi = POP32_VAL(esp); /* 0x120504FB: pop esi */
    ebx = POP32_VAL(esp); /* 0x120504FC: pop ebx */
L_120504FD:
    edi = POP32_VAL(esp); /* 0x120504FD: pop edi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120504FE: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x120504FF: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_12050507(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12050507u);

L_12050507:
    edi = edi; /* 0x12050507: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12050509: push ebp */
    ebp = esp; /* 0x1205050A: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x38u; /* 0x1205050C: sub esp, 0x38 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0xC); /* 0x1205050F: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x12050512: mov ecx, dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(eax)); /* 0x12050515: fld dword ptr [eax] */
    _st[0] -= (double)*(float*)ADDR(ecx); /* 0x12050517: fsub dword ptr [ecx] */
    edx = MEM32(ebp + 0x18); /* 0x12050519: mov edx, dword ptr [ebp + 0x18] */
    PUSH32(esp, esi); /* 0x1205051C: push esi */
    PUSH32(esp, edi); /* 0x1205051D: push edi */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x1205051E: fstp dword ptr [ebp - 0x2c] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x12050521: fld dword ptr [eax + 4] */
    _st[0] -= (double)*(float*)ADDR(ecx + 0x4); /* 0x12050524: fsub dword ptr [ecx + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x12050527: fstp dword ptr [ebp - 0x28] */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x1205052A: fld dword ptr [eax + 8] */
    eax = MEM32(ebp + 0x10); /* 0x1205052D: mov eax, dword ptr [ebp + 0x10] */
    _st[0] -= (double)*(float*)ADDR(ecx + 0x8); /* 0x12050530: fsub dword ptr [ecx + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x12050533: fstp dword ptr [ebp - 0x24] */
    fp_push(*(float*)&MEM32(eax)); /* 0x12050536: fld dword ptr [eax] */
    _st[0] -= (double)*(float*)ADDR(ecx); /* 0x12050538: fsub dword ptr [ecx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x1205053A: fstp dword ptr [ebp - 0x20] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x1205053D: fld dword ptr [eax + 4] */
    _st[0] -= (double)*(float*)ADDR(ecx + 0x4); /* 0x12050540: fsub dword ptr [ecx + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x12050543: fstp dword ptr [ebp - 0x1c] */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x12050546: fld dword ptr [eax + 8] */
    _st[0] -= (double)*(float*)ADDR(ecx + 0x8); /* 0x12050549: fsub dword ptr [ecx + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x1205054C: fstp dword ptr [ebp - 0x18] */
    fp_push(*(float*)&MEM32(edx + 0x4)); /* 0x1205054F: fld dword ptr [edx + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x12050552: fld dword ptr [ebp - 0x18] */
    fp_push(_st[0]); /* 0x12050555: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12050557: fmulp st(2) */
    fp_push(*(float*)&MEM32(edx + 0x8)); /* 0x12050559: fld dword ptr [edx + 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x1205055C: fld dword ptr [ebp - 0x1c] */
    fp_push(_st[0]); /* 0x1205055F: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12050561: fmulp st(2) */
    fp_xch(3); /* 0x12050563: fxch st(3) */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x12050565: fsubrp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x12050567: fstp dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(edx + 0x8)); /* 0x1205056A: fld dword ptr [edx + 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x1205056D: fld dword ptr [ebp - 0x20] */
    fp_push(_st[0]); /* 0x12050570: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12050572: fmulp st(2) */
    fp_push(*(float*)&MEM32(edx)); /* 0x12050574: fld dword ptr [edx] */
    { double _v = fp_pop(); _st[2] *= _v; } /* 0x12050576: fmulp st(3) */
    fp_xch(1); /* 0x12050578: fxch st(1) */
    { double _v = fp_pop(); _st[1] = _v - _st[1]; } /* 0x1205057A: fsubrp st(2) */
    fp_xch(1); /* 0x1205057C: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x1205057E: fstp dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(edx)); /* 0x12050581: fld dword ptr [edx] */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12050583: fmulp st(2) */
    _st[0] *= (double)*(float*)ADDR(edx + 0x4); /* 0x12050585: fmul dword ptr [edx + 4] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x12050588: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x1205058A: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x1205058D: fld dword ptr [ebp - 0x28] */
    fp_push(_st[0]); /* 0x12050590: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x10)); /* 0x12050592: fmul dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x12050595: fld dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0x2C))); /* 0x12050598: fld dword ptr [ebp - 0x2c] */
    fp_push(_st[0]); /* 0x1205059B: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x1205059D: fmulp st(2) */
    fp_xch(2); /* 0x1205059F: fxch st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120505A1: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x24))); /* 0x120505A3: fld dword ptr [ebp - 0x24] */
    fp_push(_st[0]); /* 0x120505A6: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xC)); /* 0x120505A8: fmul dword ptr [ebp - 0xc] */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x120505AB: faddp st(2) */
    fp_xch(1); /* 0x120505AD: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x120505AF: fstp dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x120505B2: fld dword ptr [ebp + 0xc] */
    fp_push(0.0); /* 0x120505B5: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x120505B7: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120505B9: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x120505BB: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_120505E0; /* 0x120505BE: jp 0x120505e0 */
L_120505C0:
    eax = MEM32(ebp + 0x14); /* 0x120505C0: mov eax, dword ptr [ebp + 0x14] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120505C3: fstp st(0) */
    fp_push(*(float*)&MEM32(eax)); /* 0x120505C5: fld dword ptr [eax] */
    _st[0] -= (double)*(float*)ADDR(ecx); /* 0x120505C7: fsub dword ptr [ecx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x38)) = _v; } /* 0x120505C9: fstp dword ptr [ebp - 0x38] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x120505CC: fld dword ptr [eax + 4] */
    _st[0] -= (double)*(float*)ADDR(ecx + 0x4); /* 0x120505CF: fsub dword ptr [ecx + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x34)) = _v; } /* 0x120505D2: fstp dword ptr [ebp - 0x34] */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x120505D5: fld dword ptr [eax + 8] */
    _st[0] -= (double)*(float*)ADDR(ecx + 0x8); /* 0x120505D8: fsub dword ptr [ecx + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x120505DB: fstp dword ptr [ebp - 0x30] */
    goto L_1205060B; /* 0x120505DE: jmp 0x1205060b */
L_120505E0:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x120505E0: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120505E2: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x120505E4: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120506D0; /* 0x120505E7: jne 0x120506d0 */
L_120505ED:
    eax = MEM32(ebp + 0x14); /* 0x120505ED: mov eax, dword ptr [ebp + 0x14] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x120505F0: fld dword ptr [ecx] */
    _st[0] -= (double)*(float*)ADDR(eax); /* 0x120505F2: fsub dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x38)) = _v; } /* 0x120505F4: fstp dword ptr [ebp - 0x38] */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x120505F7: fld dword ptr [ecx + 4] */
    _st[0] -= (double)*(float*)ADDR(eax + 0x4); /* 0x120505FA: fsub dword ptr [eax + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x34)) = _v; } /* 0x120505FD: fstp dword ptr [ebp - 0x34] */
    fp_push(*(float*)&MEM32(ecx + 0x8)); /* 0x12050600: fld dword ptr [ecx + 8] */
    _st[0] -= (double)*(float*)ADDR(eax + 0x8); /* 0x12050603: fsub dword ptr [eax + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x12050606: fstp dword ptr [ebp - 0x30] */
    _st[0] = -_st[0]; /* 0x12050609: fchs  */
L_1205060B:
    fp_push(1.0); /* 0x1205060B: fld1  */
    edi = ebp + (-0x2C); /* 0x1205060D: lea edi, [ebp - 0x2c] */
    { double _v = fp_pop(); _st[0] = _st[0] == 0.0 ? _v : _v / _st[0]; } /* 0x12050610: fdivrp st(1) */
    esi = ebp + (-0x38); /* 0x12050612: lea esi, [ebp - 0x38] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12050615: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12050616: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12050617: movsd dword ptr es:[edi], dword ptr [esi] */
    eax = MEM32(ebp + 0x1C); /* 0x12050618: mov eax, dword ptr [ebp + 0x1c] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x1205061B: fstp qword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x1205061E: fld dword ptr [ebp - 0x28] */
    fp_push(_st[0]); /* 0x12050621: fld st(0) */
    fp_push(_st[2]); /* 0x12050623: fld st(2) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12050625: fmulp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x24))); /* 0x12050627: fld dword ptr [ebp - 0x24] */
    fp_push(_st[0]); /* 0x1205062A: fld st(0) */
    fp_push(_st[6]); /* 0x1205062C: fld st(6) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x1205062E: fmulp st(1) */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x12050630: fsubp st(2) */
    fp_xch(1); /* 0x12050632: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x38)) = _v; } /* 0x12050634: fstp dword ptr [ebp - 0x38] */
    fp_push(_st[3]); /* 0x12050637: fld st(3) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12050639: fmulp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x2C))); /* 0x1205063B: fld dword ptr [ebp - 0x2c] */
    fp_push(_st[0]); /* 0x1205063E: fld st(0) */
    { double _v = fp_pop(); _st[3] *= _v; } /* 0x12050640: fmulp st(4) */
    fp_xch(1); /* 0x12050642: fxch st(1) */
    { double _v = fp_pop(); _st[2] = _v - _st[2]; } /* 0x12050644: fsubrp st(3) */
    fp_xch(2); /* 0x12050646: fxch st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x34)) = _v; } /* 0x12050648: fstp dword ptr [ebp - 0x34] */
    fp_push(_st[1]); /* 0x1205064B: fld st(1) */
    { double _v = fp_pop(); _st[3] *= _v; } /* 0x1205064D: fmulp st(4) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x1205064F: fmulp st(2) */
    fp_xch(2); /* 0x12050651: fxch st(2) */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x12050653: fsubrp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x12050655: fstp dword ptr [ebp - 0x30] */
    fp_push(*(float*)&MEM32(edx)); /* 0x12050658: fld dword ptr [edx] */
    fp_push(*(float*)&MEM32(ebp + (-0x38))); /* 0x1205065A: fld dword ptr [ebp - 0x38] */
    fp_push(_st[0]); /* 0x1205065D: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x1205065F: fmulp st(2) */
    fp_push(*(float*)&MEM32(edx + 0x4)); /* 0x12050661: fld dword ptr [edx + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x34))); /* 0x12050664: fld dword ptr [ebp - 0x34] */
    fp_push(_st[0]); /* 0x12050667: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12050669: fmulp st(2) */
    fp_xch(3); /* 0x1205066B: fxch st(3) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1205066D: faddp st(1) */
    fp_push(*(float*)&MEM32(edx + 0x8)); /* 0x1205066F: fld dword ptr [edx + 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x30))); /* 0x12050672: fld dword ptr [ebp - 0x30] */
    fp_push(_st[0]); /* 0x12050675: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12050677: fmulp st(2) */
    fp_xch(2); /* 0x12050679: fxch st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1205067B: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x14) = _v; } /* 0x1205067D: fstp dword ptr [ebp + 0x14] */
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x12050680: fld dword ptr [ebp + 0x14] */
    _st[0] *= *(double*)ADDR(ebp + (-0x8)); /* 0x12050683: fmul qword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x12050686: fld dword ptr [ebp - 0x28] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x10)); /* 0x12050689: fmul dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x1205068C: fld dword ptr [ebp - 0x14] */
    { double _v = fp_pop(); _st[5] *= _v; } /* 0x1205068F: fmulp st(6) */
    { double _v = fp_pop(); _st[4] += _v; } /* 0x12050691: faddp st(5) */
    fp_push(*(float*)&MEM32(ebp + (-0x24))); /* 0x12050693: fld dword ptr [ebp - 0x24] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xC)); /* 0x12050696: fmul dword ptr [ebp - 0xc] */
    { double _v = fp_pop(); _st[4] += _v; } /* 0x12050699: faddp st(5) */
    fp_xch(4); /* 0x1205069B: fxch st(4) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x14) = _v; } /* 0x1205069D: fstp dword ptr [ebp + 0x14] */
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x120506A0: fld dword ptr [ebp + 0x14] */
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x120506A3: fld qword ptr [ebp - 8] */
    _st[1] *= _st[0]; /* 0x120506A6: fmul st(1), st(0) */
    fp_xch(1); /* 0x120506A8: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x120506AA: fstp dword ptr [eax] */
    eax = MEM32(ebp + 0x20); /* 0x120506AC: mov eax, dword ptr [ebp + 0x20] */
    fp_xch(4); /* 0x120506AF: fxch st(4) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x120506B1: fstp dword ptr [eax] */
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x120506B3: fld dword ptr [ebp - 0x1c] */
    { double _v = fp_pop(); _st[2] *= _v; } /* 0x120506B6: fmulp st(3) */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x120506B8: fld dword ptr [ebp - 0x20] */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x120506BB: fmulp st(2) */
    fp_xch(2); /* 0x120506BD: fxch st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120506BF: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x120506C1: fld dword ptr [ebp - 0x18] */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x120506C4: fmulp st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120506C6: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x14) = _v; } /* 0x120506C8: fstp dword ptr [ebp + 0x14] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x14); /* 0x120506CB: fmul dword ptr [ebp + 0x14] */
    goto L_120506DA; /* 0x120506CE: jmp 0x120506da */
L_120506D0:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120506D0: fstp st(0) */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x120506D2: fstp st(2) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120506D4: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120506D6: fstp st(0) */
    fp_push(0.0); /* 0x120506D8: fldz  */
L_120506DA:
    eax = MEM32(ebp + 0x24); /* 0x120506DA: mov eax, dword ptr [ebp + 0x24] */
    edi = POP32_VAL(esp); /* 0x120506DD: pop edi */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x120506DE: fstp dword ptr [eax] */
    esi = POP32_VAL(esp); /* 0x120506E0: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120506E1: leave  */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x120506E2: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_120506EA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120506EAu);

L_120506EA:
    edi = edi; /* 0x120506EA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120506EC: push ebp */
    ebp = esp; /* 0x120506ED: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x50u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x50u; /* 0x120506EF: sub esp, 0x50 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x120506F2: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x120506F7: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x120506F9: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x120506FC: push ebx */
    PUSH32(esp, esi); /* 0x120506FD: push esi */
    esi = MEM32(ebp + 0xC); /* 0x120506FE: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x12050701: push edi */
    edi = MEM32(ebp + 0x8); /* 0x12050702: mov edi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x12050705: push edi */
    ecx = ebp + (-0x44); /* 0x12050706: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1204BA56); /* 0x12050709: call 0x1204ba56 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1205070E: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebx; /* 0x12050710: mov ecx, ebx */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x4E))) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    MEM16(ebp + (-0x4E)) = (uint16_t)(MEM16(ebp + (-0x4E)) & LO16(ecx)); /* 0x12050712: and word ptr [ebp - 0x4e], cx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    MEM32(ebp + (-0x48)) = ecx; /* 0x12050716: mov dword ptr [ebp - 0x48], ecx */
    MEM16(ebp + (-0x50)) = (uint16_t)(0xFFu); /* 0x12050719: mov word ptr [ebp - 0x50], 0xff */
    MEM32(ebp + (-0x4C)) = 0x11u; /* 0x1205071F: mov dword ptr [ebp - 0x4c], 0x11 */
    /* test edi, 0x6001u */ /* 0x12050726: test edi, 0x6001 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x6001u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120508A5; /* 0x1205072C: jne 0x120508a5 */
L_12050732:
    eax = edi; /* 0x12050732: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xF00u);
    eax = eax & 0xF00u; /* 0x12050734: and eax, 0xf00 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x800u */ /* 0x12050739: cmp eax, 0x800 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x800u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120508A5; /* 0x1205073E: ja 0x120508a5 */
L_12050744:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x400Eu);
    edi = edi & 0x400Eu; /* 0x12050744: and edi, 0x400e */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12050773; /* 0x1205074A: je 0x12050773 */
L_1205074C:
    _flag_a = (uint32_t)(MEM16(esi)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    MEM16(esi) = (uint16_t)(MEM16(esi) & LO16(ecx)); /* 0x1205074C: and word ptr [esi], cx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)(MEM16(esi + 0x2)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    MEM16(esi + 0x2) = (uint16_t)(MEM16(esi + 0x2) & LO16(ecx)); /* 0x1205074F: and word ptr [esi + 2], cx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    /* cmp edi, 4 */ /* 0x12050753: cmp edi, 4 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12050763; /* 0x12050756: jne 0x12050763 */
L_12050758:
    MEM32(esi + 0x4) = 0x00090003u; /* 0x12050758: mov dword ptr [esi + 4], 0x90003 */
    PUSH32(esp, 0x10u); /* 0x1205075F: push 0x10 */
    goto L_1205076C; /* 0x12050761: jmp 0x1205076c */
L_12050763:
    MEM32(esi + 0x4) = 2; /* 0x12050763: mov dword ptr [esi + 4], 2 */
    PUSH32(esp, 0xCu); /* 0x1205076A: push 0xc */
L_1205076C:
    ecx = POP32_VAL(esp); /* 0x1205076C: pop ecx */
    MEM32(ebp + (-0x48)) = ecx; /* 0x1205076D: mov dword ptr [ebp - 0x48], ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 8; /* 0x12050770: add esi, 8 */
    _flag_k = FK_ADD;
L_12050773:
    eax = MEM32(ebp + (-0xC)); /* 0x12050773: mov eax, dword ptr [ebp - 0xc] */
    PUSH32(esp, 8); /* 0x12050776: push 8 */
    edi = POP32_VAL(esp); /* 0x12050778: pop edi */
    /* test eax, eax */ /* 0x12050779: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120507EF; /* 0x1205077B: je 0x120507ef */
L_1205077D:
    /* test MEM32(ebp + (-0x44)), 0x9000u */ /* 0x1205077D: test dword ptr [ebp - 0x44], 0x9000 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x44))); _flag_b = (uint32_t)(0x9000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120507CC; /* 0x12050784: je 0x120507cc */
L_12050786:
    /* cmp eax, 1 */ /* 0x12050786: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120507A1; /* 0x12050789: jbe 0x120507a1 */
L_1205078B:
    PUSH32(esp, ebx); /* 0x1205078B: push ebx */
    ecx = ebp + (-0x48); /* 0x1205078C: lea ecx, [ebp - 0x48] */
    PUSH32(esp, ecx); /* 0x1205078F: push ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFFEu; /* 0x12050790: add eax, -2 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x12050793: push eax */
    PUSH32(esp, 1); /* 0x12050794: push 1 */
    PUSH32(esp, esi); /* 0x12050796: push esi */
    RECOMP_CALL(sub_1204B032); /* 0x12050797: call 0x1204b032 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x48)); /* 0x1205079C: mov ecx, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edi; /* 0x1205079F: add esi, edi */
    _flag_k = FK_ADD;
L_120507A1:
    _flag_a = (uint32_t)(MEM16(esi)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    MEM16(esi) = (uint16_t)(MEM16(esi) & LO16(ebx)); /* 0x120507A1: and word ptr [esi], bx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    eax = (uint32_t)LO8(ecx); /* 0x120507A4: movzx eax, cl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x120507A7: add ecx, 4 */
    _flag_k = FK_ADD;
    /* test MEM32(ebp + (-0x44)), 0x1000u */ /* 0x120507AA: test dword ptr [ebp - 0x44], 0x1000 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x44))); _flag_b = (uint32_t)(0x1000u);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esi + 0x2) = (uint16_t)(LO16(eax)); /* 0x120507B1: mov word ptr [esi + 2], ax */
    MEM32(ebp + (-0x48)) = ecx; /* 0x120507B5: mov dword ptr [ebp - 0x48], ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_120507C3; /* 0x120507B8: je 0x120507c3 */
L_120507BA:
    MEM32(esi + 0x4) = 0x00020005u; /* 0x120507BA: mov dword ptr [esi + 4], 0x20005 */
    goto L_120507ED; /* 0x120507C1: jmp 0x120507ed */
L_120507C3:
    MEM32(esi + 0x4) = 0x00020004u; /* 0x120507C3: mov dword ptr [esi + 4], 0x20004 */
    goto L_120507ED; /* 0x120507CA: jmp 0x120507ed */
L_120507CC:
    /* cmp eax, 5 */ /* 0x120507CC: cmp eax, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120507DB; /* 0x120507CF: jne 0x120507db */
L_120507D1:
    ebx = 0x8876086Cu; /* 0x120507D1: mov ebx, 0x8876086c */
    goto L_120508A1; /* 0x120507D6: jmp 0x120508a1 */
L_120507DB:
    PUSH32(esp, ebx); /* 0x120507DB: push ebx */
    ecx = ebp + (-0x48); /* 0x120507DC: lea ecx, [ebp - 0x48] */
    PUSH32(esp, ecx); /* 0x120507DF: push ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120507E0: dec eax */
    _flag_k = FK_DEC;
    PUSH32(esp, eax); /* 0x120507E1: push eax */
    PUSH32(esp, 1); /* 0x120507E2: push 1 */
    PUSH32(esp, esi); /* 0x120507E4: push esi */
    RECOMP_CALL(sub_1204B032); /* 0x120507E5: call 0x1204b032 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x48)); /* 0x120507EA: mov ecx, dword ptr [ebp - 0x48] */
L_120507ED:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edi; /* 0x120507ED: add esi, edi */
    _flag_k = FK_ADD;
L_120507EF:
    edx = MEM32(ebp + 0x8); /* 0x120507EF: mov edx, dword ptr [ebp + 8] */
    /* test LO8(edx), 0x10u */ /* 0x120507F2: test dl, 0x10 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12050810; /* 0x120507F5: je 0x12050810 */
L_120507F7:
    _flag_a = (uint32_t)(MEM16(esi)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    MEM16(esi) = (uint16_t)(MEM16(esi) & LO16(ebx)); /* 0x120507F7: and word ptr [esi], bx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    eax = (uint32_t)LO8(ecx); /* 0x120507FA: movzx eax, cl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xCu; /* 0x120507FD: add ecx, 0xc */
    _flag_k = FK_ADD;
    MEM16(esi + 0x2) = (uint16_t)(LO16(eax)); /* 0x12050800: mov word ptr [esi + 2], ax */
    MEM32(esi + 0x4) = 0x00030002u; /* 0x12050804: mov dword ptr [esi + 4], 0x30002 */
    MEM32(ebp + (-0x48)) = ecx; /* 0x1205080B: mov dword ptr [ebp - 0x48], ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edi; /* 0x1205080E: add esi, edi */
    _flag_k = FK_ADD;
L_12050810:
    /* test LO8(edx), 0x20u */ /* 0x12050810: test dl, 0x20 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1205082E; /* 0x12050813: je 0x1205082e */
L_12050815:
    _flag_a = (uint32_t)(MEM16(esi)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    MEM16(esi) = (uint16_t)(MEM16(esi) & LO16(ebx)); /* 0x12050815: and word ptr [esi], bx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    eax = (uint32_t)LO8(ecx); /* 0x12050818: movzx eax, cl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x1205081B: add ecx, 4 */
    _flag_k = FK_ADD;
    MEM16(esi + 0x2) = (uint16_t)(LO16(eax)); /* 0x1205081E: mov word ptr [esi + 2], ax */
    MEM32(esi + 0x4) = 0x00040000u; /* 0x12050822: mov dword ptr [esi + 4], 0x40000 */
    MEM32(ebp + (-0x48)) = ecx; /* 0x12050829: mov dword ptr [ebp - 0x48], ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edi; /* 0x1205082C: add esi, edi */
    _flag_k = FK_ADD;
L_1205082E:
    /* test LO8(edx), 0x40u */ /* 0x1205082E: test dl, 0x40 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1205084C; /* 0x12050831: je 0x1205084c */
L_12050833:
    _flag_a = (uint32_t)(MEM16(esi)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    MEM16(esi) = (uint16_t)(MEM16(esi) & LO16(ebx)); /* 0x12050833: and word ptr [esi], bx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    eax = (uint32_t)LO8(ecx); /* 0x12050836: movzx eax, cl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x12050839: add ecx, 4 */
    _flag_k = FK_ADD;
    MEM16(esi + 0x2) = (uint16_t)(LO16(eax)); /* 0x1205083C: mov word ptr [esi + 2], ax */
    MEM32(esi + 0x4) = 0x000A0004u; /* 0x12050840: mov dword ptr [esi + 4], 0xa0004 */
    MEM32(ebp + (-0x48)) = ecx; /* 0x12050847: mov dword ptr [ebp - 0x48], ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edi; /* 0x1205084A: add esi, edi */
    _flag_k = FK_ADD;
L_1205084C:
    /* test LO8(edx), LO8(edx) */ /* 0x1205084C: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_12050869; /* 0x1205084E: jns 0x12050869 */
L_12050850:
    _flag_a = (uint32_t)(MEM16(esi)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    MEM16(esi) = (uint16_t)(MEM16(esi) & LO16(ebx)); /* 0x12050850: and word ptr [esi], bx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    eax = (uint32_t)LO8(ecx); /* 0x12050853: movzx eax, cl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x12050856: add ecx, 4 */
    _flag_k = FK_ADD;
    MEM16(esi + 0x2) = (uint16_t)(LO16(eax)); /* 0x12050859: mov word ptr [esi + 2], ax */
    MEM32(esi + 0x4) = 0x010A0004u; /* 0x1205085D: mov dword ptr [esi + 4], 0x10a0004 */
    MEM32(ebp + (-0x48)) = ecx; /* 0x12050864: mov dword ptr [ebp - 0x48], ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edi; /* 0x12050867: add esi, edi */
    _flag_k = FK_ADD;
L_12050869:
    eax = MEM32(ebp + (-0x8)); /* 0x12050869: mov eax, dword ptr [ebp - 8] */
    /* test eax, eax */ /* 0x1205086C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12050896; /* 0x1205086E: je 0x12050896 */
L_12050870:
    edi = ebx; /* 0x12050870: mov edi, ebx */
L_12050872:
    PUSH32(esp, edi); /* 0x12050872: push edi */
    eax = ebp + (-0x48); /* 0x12050873: lea eax, [ebp - 0x48] */
    PUSH32(esp, eax); /* 0x12050876: push eax */
    PUSH32(esp, edi); /* 0x12050877: push edi */
    ecx = ebp + (-0x44); /* 0x12050878: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1204BC72); /* 0x1205087B: call 0x1204bc72 */
    RECOMP_FLAGS_IN();
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x12050880: shr eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 2u; /* 0x12050880: shr eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x12050883: dec eax */
    _flag_k = FK_DEC;
    PUSH32(esp, eax); /* 0x12050884: push eax */
    PUSH32(esp, 5); /* 0x12050885: push 5 */
    PUSH32(esp, esi); /* 0x12050887: push esi */
    RECOMP_CALL(sub_1204B032); /* 0x12050888: call 0x1204b032 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 8; /* 0x1205088D: add esi, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x12050890: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(ebp + (-0x8)) */ /* 0x12050891: cmp edi, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12050872; /* 0x12050894: jb 0x12050872 */
L_12050896:
    ecx = MEM32(ebp + (-0x50)); /* 0x12050896: mov ecx, dword ptr [ebp - 0x50] */
    MEM32(esi) = ecx; /* 0x12050899: mov dword ptr [esi], ecx */
    ecx = MEM32(ebp + (-0x4C)); /* 0x1205089B: mov ecx, dword ptr [ebp - 0x4c] */
    MEM32(esi + 0x4) = ecx; /* 0x1205089E: mov dword ptr [esi + 4], ecx */
L_120508A1:
    eax = ebx; /* 0x120508A1: mov eax, ebx */
    goto L_120508AA; /* 0x120508A3: jmp 0x120508aa */
L_120508A5:
    eax = 0x8876086Cu; /* 0x120508A5: mov eax, 0x8876086c */
L_120508AA:
    ecx = MEM32(ebp + (-0x4)); /* 0x120508AA: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x120508AD: pop edi */
    esi = POP32_VAL(esp); /* 0x120508AE: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x120508AF: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x120508B1: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x120508B2: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120508B7: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x120508B8: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_120508C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120508C0u);

L_120508C0:
    edi = edi; /* 0x120508C0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120508C2: push ebp */
    ebp = esp; /* 0x120508C3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x3Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x3Cu; /* 0x120508C5: sub esp, 0x3c */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x120508C8: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x120508CD: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x120508CF: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0xD4); /* 0x120508D2: mov eax, dword ptr [ebp + 0xd4] */
    ecx = MEM32(ebp + 0xD8); /* 0x120508D8: mov ecx, dword ptr [ebp + 0xd8] */
    PUSH32(esp, esi); /* 0x120508DE: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120508DF: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x120508E1: push edi */
    edi = MEM32(ebp + 0xDC); /* 0x120508E2: mov edi, dword ptr [ebp + 0xdc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x120508E8: inc esi */
    _flag_k = FK_INC;
    /* test MEM8(ebp + 0xCC), 1 */ /* 0x120508E9: test byte ptr [ebp + 0xcc], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xCC)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(ebp + (-0x3C)) = eax; /* 0x120508F0: mov dword ptr [ebp - 0x3c], eax */
    MEM32(ebp + (-0x30)) = ecx; /* 0x120508F3: mov dword ptr [ebp - 0x30], ecx */
    MEM32(ebp + (-0x28)) = edi; /* 0x120508F6: mov dword ptr [ebp - 0x28], edi */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120509D8; /* 0x120508F9: jne 0x120509d8 */
L_120508FF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120508FF: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x34)) = edx; /* 0x12050901: mov dword ptr [ebp - 0x34], edx */
    /* cmp MEM32(eax), edx */ /* 0x12050904: cmp dword ptr [eax], edx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120509D8; /* 0x12050906: je 0x120509d8 */
L_1205090C:
    PUSH32(esp, ebx); /* 0x1205090C: push ebx */
    MEM32(ebp + (-0x38)) = edx; /* 0x1205090D: mov dword ptr [ebp - 0x38], edx */
    ebx = eax; /* 0x12050910: mov ebx, eax */
    MEM32(ebp + (-0x2C)) = eax; /* 0x12050912: mov dword ptr [ebp - 0x2c], eax */
L_12050915:
    PUSH32(esp, 4); /* 0x12050915: push 4 */
    eax = ebp + (-0x14); /* 0x12050917: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1205091A: push eax */
    PUSH32(esp, ecx); /* 0x1205091B: push ecx */
    PUSH32(esp, MEM32(ebx)); /* 0x1205091C: push dword ptr [ebx] */
    ecx = ebp + 0x8; /* 0x1205091E: lea ecx, [ebp + 8] */
    RECOMP_CALL(sub_120BD342); /* 0x12050921: call 0x120bd342 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 4); /* 0x12050926: push 4 */
    eax = ebp + (-0x24); /* 0x12050928: lea eax, [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x1205092B: push eax */
    PUSH32(esp, edi); /* 0x1205092C: push edi */
    PUSH32(esp, MEM32(ebx)); /* 0x1205092D: push dword ptr [ebx] */
    ecx = ebp + 0x8; /* 0x1205092F: lea ecx, [ebp + 8] */
    RECOMP_CALL(sub_120BD342); /* 0x12050932: call 0x120bd342 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x38)); /* 0x12050937: mov edx, dword ptr [ebp - 0x38] */
    ebx = MEM32(ebp + 0xD0); /* 0x1205093A: mov ebx, dword ptr [ebp + 0xd0] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x12050940: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x12050942: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x12050943: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_12050945:
    /* test edi, edi */ /* 0x12050945: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12050970; /* 0x12050947: je 0x12050970 */
L_12050949:
    fp_push(*(float*)&MEM32(ebp + ecx + (-0x24))); /* 0x12050949: fld dword ptr [ebp + ecx - 0x24] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1205094D: sub esp, 0xc */
    _flag_k = FK_CMP;
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x8) = _v; } /* 0x12050950: fstp dword ptr [esp + 8] */
    fp_push(*(float*)&MEM32(ebp + ecx + (-0x14))); /* 0x12050954: fld dword ptr [ebp + ecx - 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x12050958: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(edx + ebx)); /* 0x1205095C: fld dword ptr [edx + ebx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x1205095F: fstp dword ptr [esp] */
    RECOMP_CALL(sub_1204B388); /* 0x12050962: call 0x1204b388 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12050967: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12050970; /* 0x12050969: je 0x12050970 */
L_1205096B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1205096B: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1205096D: inc edi */
    _flag_k = FK_INC;
    goto L_12050972; /* 0x1205096E: jmp 0x12050972 */
L_12050970:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x12050970: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_12050972:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x12050972: add ecx, 4 */
    _flag_k = FK_ADD;
    /* cmp ecx, 0x10u */ /* 0x12050975: cmp ecx, 0x10 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12050945; /* 0x12050978: jb 0x12050945 */
L_1205097A:
    ebx = MEM32(ebp + (-0x2C)); /* 0x1205097A: mov ebx, dword ptr [ebp - 0x2c] */
    /* test edi, edi */ /* 0x1205097D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1205099D; /* 0x1205097F: je 0x1205099d */
L_12050981:
    /* test MEM8(ebp + 0xCC), 2 */ /* 0x12050981: test byte ptr [ebp + 0xcc], 2 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xCC)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1205099D; /* 0x12050988: je 0x1205099d */
L_1205098A:
    PUSH32(esp, 4); /* 0x1205098A: push 4 */
    eax = ebp + (-0x14); /* 0x1205098C: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1205098F: push eax */
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x12050990: push dword ptr [ebp - 0x28] */
    ecx = ebp + 0x8; /* 0x12050993: lea ecx, [ebp + 8] */
    PUSH32(esp, MEM32(ebx)); /* 0x12050996: push dword ptr [ebx] */
    RECOMP_CALL(sub_120BD76B); /* 0x12050998: call 0x120bd76b */
    RECOMP_FLAGS_IN();
L_1205099D:
    /* test esi, esi */ /* 0x1205099D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120509AA; /* 0x1205099F: je 0x120509aa */
L_120509A1:
    /* test edi, edi */ /* 0x120509A1: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120509AA; /* 0x120509A3: je 0x120509aa */
L_120509A5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120509A5: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x120509A7: inc esi */
    _flag_k = FK_INC;
    goto L_120509AC; /* 0x120509A8: jmp 0x120509ac */
L_120509AA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120509AA: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_120509AC:
    eax = MEM32(ebp + (-0x34)); /* 0x120509AC: mov eax, dword ptr [ebp - 0x34] */
    edi = MEM32(ebp + (-0x28)); /* 0x120509AF: mov edi, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x120509B2: inc eax */
    _flag_k = FK_INC;
    ecx = eax; /* 0x120509B3: mov ecx, eax */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x120509B5: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x120509B5: shl ecx, 2 */
    MEM32(ebp + (-0x34)) = eax; /* 0x120509B8: mov dword ptr [ebp - 0x34], eax */
    eax = MEM32(ebp + (-0x3C)); /* 0x120509BB: mov eax, dword ptr [ebp - 0x3c] */
    ebx = ecx + eax; /* 0x120509BE: lea ebx, [ecx + eax] */
    /* cmp MEM32(ebx), 0 */ /* 0x120509C1: cmp dword ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x38)) = ecx; /* 0x120509C4: mov dword ptr [ebp - 0x38], ecx */
    ecx = MEM32(ebp + (-0x30)); /* 0x120509C7: mov ecx, dword ptr [ebp - 0x30] */
    MEM32(ebp + (-0x2C)) = ebx; /* 0x120509CA: mov dword ptr [ebp - 0x2c], ebx */
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_12050915; /* 0x120509CD: jne 0x12050915 */
L_120509D3:
    ebx = POP32_VAL(esp); /* 0x120509D3: pop ebx */
    /* test esi, esi */ /* 0x120509D4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12050A03; /* 0x120509D6: je 0x12050a03 */
L_120509D8:
    /* test MEM8(ebp + 0xCC), 4 */ /* 0x120509D8: test byte ptr [ebp + 0xcc], 4 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xCC)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12050A03; /* 0x120509DF: je 0x12050a03 */
L_120509E1:
    edx = MEM32(ebp + 0x50); /* 0x120509E1: mov edx, dword ptr [ebp + 0x50] */
    PUSH32(esp, MEM32(ebp + 0xC8)); /* 0x120509E4: push dword ptr [ebp + 0xc8] */
    ecx = edx; /* 0x120509EA: mov ecx, edx */
    edx = (uint32_t)((int32_t)edx * (int32_t)edi); /* 0x120509EC: imul edx, edi */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + (-0x30))); /* 0x120509EF: imul ecx, dword ptr [ebp - 0x30] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + 0x10); /* 0x120509F3: add ecx, dword ptr [ebp + 0x10] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + 0x10); /* 0x120509F6: add edx, dword ptr [ebp + 0x10] */
    _flag_k = FK_ADD;
    PUSH32(esp, ecx); /* 0x120509F9: push ecx */
    PUSH32(esp, edx); /* 0x120509FA: push edx */
    RECOMP_CALL(sub_121BF440); /* 0x120509FB: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x12050A00: add esp, 0xc */
    _flag_k = FK_ADD;
L_12050A03:
    ecx = MEM32(ebp + (-0x4)); /* 0x12050A03: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x12050A06: pop edi */
    eax = esi; /* 0x12050A07: mov eax, esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x12050A09: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x12050A0B: pop esi */
    RECOMP_CALL(sub_121BECF5); /* 0x12050A0C: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12050A11: leave  */
    RECOMP_FLAGS_OUT(); esp += 220; { RECOMP_REGS_OUT(); return; } /* 0x12050A12: ret 0xd8 */
    RECOMP_REGS_OUT();
}

void sub_12050A1A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12050A1Au);

L_12050A1A:
    edi = edi; /* 0x12050A1A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12050A1C: push ebp */
    ebp = esp; /* 0x12050A1D: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x56Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x56Cu; /* 0x12050A1F: sub esp, 0x56c */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x12050A25: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x12050A2A: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x12050A2C: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x14); /* 0x12050A2F: mov eax, dword ptr [ebp + 0x14] */
    MEM32(ebp + (-0x42C)) = eax; /* 0x12050A32: mov dword ptr [ebp - 0x42c], eax */
    eax = MEM32(ebp + 0x18); /* 0x12050A38: mov eax, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x12050A3B: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x12050A3D: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x12050A3E: mov ebx, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x450)) = eax; /* 0x12050A41: mov dword ptr [ebp - 0x450], eax */
    eax = MEM32(ebp + 0x1C); /* 0x12050A47: mov eax, dword ptr [ebp + 0x1c] */
    PUSH32(esp, esi); /* 0x12050A4A: push esi */
    MEM32(ebp + (-0x458)) = eax; /* 0x12050A4B: mov dword ptr [ebp - 0x458], eax */
    eax = MEM32(ebp + 0x20); /* 0x12050A51: mov eax, dword ptr [ebp + 0x20] */
    MEM32(ebp + (-0x428)) = ecx; /* 0x12050A54: mov dword ptr [ebp - 0x428], ecx */
    MEM32(ebp + (-0x420)) = ecx; /* 0x12050A5A: mov dword ptr [ebp - 0x420], ecx */
    MEM32(ebp + (-0x41C)) = ecx; /* 0x12050A60: mov dword ptr [ebp - 0x41c], ecx */
    MEM32(ebp + (-0x440)) = ecx; /* 0x12050A66: mov dword ptr [ebp - 0x440], ecx */
    MEM32(ebp + (-0x448)) = ecx; /* 0x12050A6C: mov dword ptr [ebp - 0x448], ecx */
    MEM32(ebp + (-0x438)) = ecx; /* 0x12050A72: mov dword ptr [ebp - 0x438], ecx */
    PUSH32(esp, edi); /* 0x12050A78: push edi */
    ecx = ebp + (-0x418); /* 0x12050A79: lea ecx, [ebp - 0x418] */
    MEM32(ebp + (-0x45C)) = ebx; /* 0x12050A7F: mov dword ptr [ebp - 0x45c], ebx */
    MEM32(ebp + (-0x454)) = eax; /* 0x12050A85: mov dword ptr [ebp - 0x454], eax */
    RECOMP_CALL(sub_12047093); /* 0x12050A8B: call 0x12047093 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x10); /* 0x12050A90: mov esi, dword ptr [ebp + 0x10] */
    /* test esi, esi */ /* 0x12050A93: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12050B03; /* 0x12050A95: jne 0x12050b03 */
L_12050A97:
    fp_push(*(float*)&MEM32(0x120061D8)); /* 0x12050A97: fld dword ptr [0x120061d8] */
    esi = ebp + (-0x354); /* 0x12050A9D: lea esi, [ebp - 0x354] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x354)) = _v; } /* 0x12050AA3: fst dword ptr [ebp - 0x354] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x350)) = _v; } /* 0x12050AA9: fst dword ptr [ebp - 0x350] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x34C)) = _v; } /* 0x12050AAF: fst dword ptr [ebp - 0x34c] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x348)) = _v; } /* 0x12050AB5: fst dword ptr [ebp - 0x348] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x344)) = _v; } /* 0x12050ABB: fst dword ptr [ebp - 0x344] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x340)) = _v; } /* 0x12050AC1: fst dword ptr [ebp - 0x340] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x338)) = _v; } /* 0x12050AC7: fst dword ptr [ebp - 0x338] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x33C)) = _v; } /* 0x12050ACD: fst dword ptr [ebp - 0x33c] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x330)) = _v; } /* 0x12050AD3: fst dword ptr [ebp - 0x330] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x334)) = _v; } /* 0x12050AD9: fst dword ptr [ebp - 0x334] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x328)) = _v; } /* 0x12050ADF: fst dword ptr [ebp - 0x328] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x32C)) = _v; } /* 0x12050AE5: fst dword ptr [ebp - 0x32c] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x320)) = _v; } /* 0x12050AEB: fst dword ptr [ebp - 0x320] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x324)) = _v; } /* 0x12050AF1: fst dword ptr [ebp - 0x324] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x31C)) = _v; } /* 0x12050AF7: fst dword ptr [ebp - 0x31c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x318)) = _v; } /* 0x12050AFD: fstp dword ptr [ebp - 0x318] */
L_12050B03:
    /* test ebx, ebx */ /* 0x12050B03: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12050EF2; /* 0x12050B05: je 0x12050ef2 */
L_12050B0B:
    edi = MEM32(ebp + 0xC); /* 0x12050B0B: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, 0xFFFFFFF0u */ /* 0x12050B0E: test edi, 0xfffffff0 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFF0u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12050EF2; /* 0x12050B14: jne 0x12050ef2 */
L_12050B1A:
    eax = MEM32(ebx); /* 0x12050B1A: mov eax, dword ptr [ebx] */
    ecx = ebp + (-0x310); /* 0x12050B1C: lea ecx, [ebp - 0x310] */
    PUSH32(esp, ecx); /* 0x12050B22: push ecx */
    PUSH32(esp, ebx); /* 0x12050B23: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x1C)); /* 0x12050B24: call dword ptr [eax + 0x1c] */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x310); /* 0x12050B27: lea eax, [ebp - 0x310] */
    PUSH32(esp, eax); /* 0x12050B2D: push eax */
    ecx = ebp + (-0x418); /* 0x12050B2E: lea ecx, [ebp - 0x418] */
    RECOMP_CALL(sub_1202BF19); /* 0x12050B34: call 0x1202bf19 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x56C); /* 0x12050B39: lea eax, [ebp - 0x56c] */
    PUSH32(esp, eax); /* 0x12050B3F: push eax */
    eax = ebp + (-0x108); /* 0x12050B40: lea eax, [ebp - 0x108] */
    PUSH32(esp, eax); /* 0x12050B46: push eax */
    eax = ebp + (-0x310); /* 0x12050B47: lea eax, [ebp - 0x310] */
    PUSH32(esp, eax); /* 0x12050B4D: push eax */
    PUSH32(esp, esi); /* 0x12050B4E: push esi */
    RECOMP_CALL(sub_1204B3CE); /* 0x12050B4F: call 0x1204b3ce */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx); /* 0x12050B54: mov eax, dword ptr [ebx] */
    PUSH32(esp, ebx); /* 0x12050B56: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x24)); /* 0x12050B57: call dword ptr [eax + 0x24] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x12050B5A: mov esi, eax */
    /* test esi, 0x440u */ /* 0x12050B5C: test esi, 0x440 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x440u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12050EF2; /* 0x12050B62: jne 0x12050ef2 */
L_12050B68:
    eax = MEM32(ebx); /* 0x12050B68: mov eax, dword ptr [ebx] */
    PUSH32(esp, ebx); /* 0x12050B6A: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x12050B6B: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x424)) = eax; /* 0x12050B6E: mov dword ptr [ebp - 0x424], eax */
    eax = MEM32(ebx); /* 0x12050B74: mov eax, dword ptr [ebx] */
    PUSH32(esp, ebx); /* 0x12050B76: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x12050B77: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    esi = ~esi; /* 0x12050B7A: not esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi & 1; /* 0x12050B7C: and esi, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x42C)), 0 */ /* 0x12050B7F: cmp dword ptr [ebp - 0x42c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x42C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, 4); /* 0x12050B86: push 4 */
    MEM32(ebp + (-0x444)) = eax; /* 0x12050B88: mov dword ptr [ebp - 0x444], eax */
    MEM32(ebp + (-0x460)) = esi; /* 0x12050B8E: mov dword ptr [ebp - 0x460], esi */
    edx = POP32_VAL(esp); /* 0x12050B94: pop edx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_12050BEE; /* 0x12050B95: jne 0x12050bee */
L_12050B97:
    eax = (uint32_t)((int32_t)eax * (int32_t)3); /* 0x12050B97: imul eax, eax, 3 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x12050B9A: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x12050B9C: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x12050B9E: seto cl */
    PUSH32(esp, 0x120014BCu); /* 0x12050BA1: push 0x120014bc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x12050BA6: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x12050BA8: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x12050BAA: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x12050BAB: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12050BB0: pop ecx */
    ecx = POP32_VAL(esp); /* 0x12050BB1: pop ecx */
    ecx = eax; /* 0x12050BB2: mov ecx, eax */
    MEM32(ebp + (-0x440)) = ecx; /* 0x12050BB4: mov dword ptr [ebp - 0x440], ecx */
    /* test ecx, ecx */ /* 0x12050BBA: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12050BC8; /* 0x12050BBC: jne 0x12050bc8 */
L_12050BBE:
    esi = 0x8007000Eu; /* 0x12050BBE: mov esi, 0x8007000e */
    goto L_12050EF7; /* 0x12050BC3: jmp 0x12050ef7 */
L_12050BC8:
    fp_push(0.0); /* 0x12050BC8: fldz  */
    eax = MEM32(ebx); /* 0x12050BCA: mov eax, dword ptr [ebx] */
    PUSH32(esp, ecx); /* 0x12050BCC: push ecx */
    PUSH32(esp, ecx); /* 0x12050BCD: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x12050BCE: fstp dword ptr [esp] */
    PUSH32(esp, ebx); /* 0x12050BD1: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x58)); /* 0x12050BD2: call dword ptr [eax + 0x58] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x12050BD5: mov esi, eax */
    /* test esi, esi */ /* 0x12050BD7: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12050EF7; /* 0x12050BD9: js 0x12050ef7 */
L_12050BDF:
    eax = MEM32(ebp + (-0x440)); /* 0x12050BDF: mov eax, dword ptr [ebp - 0x440] */
    PUSH32(esp, 4); /* 0x12050BE5: push 4 */
    MEM32(ebp + (-0x42C)) = eax; /* 0x12050BE7: mov dword ptr [ebp - 0x42c], eax */
    edx = POP32_VAL(esp); /* 0x12050BED: pop edx */
L_12050BEE:
    eax = MEM32(ebp + (-0x424)); /* 0x12050BEE: mov eax, dword ptr [ebp - 0x424] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x12050BF4: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x12050BF6: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x12050BF8: seto cl */
    PUSH32(esp, 0x120014BCu); /* 0x12050BFB: push 0x120014bc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x12050C00: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x12050C02: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x12050C04: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x12050C05: call 0x12018970 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x120014BCu); /* 0x12050C0A: push 0x120014bc */
    esi = eax; /* 0x12050C0F: mov esi, eax */
    eax = MEM32(ebp + (-0x424)); /* 0x12050C11: mov eax, dword ptr [ebp - 0x424] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x12050C17: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x12050C19: push 4 */
    edx = POP32_VAL(esp); /* 0x12050C1B: pop edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x12050C1C: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x12050C1E: seto cl */
    MEM32(ebp + (-0x41C)) = esi; /* 0x12050C21: mov dword ptr [ebp - 0x41c], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x12050C27: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x12050C29: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x12050C2B: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x12050C2C: call 0x12018970 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x120014BCu); /* 0x12050C31: push 0x120014bc */
    MEM32(ebp + (-0x428)) = eax; /* 0x12050C36: mov dword ptr [ebp - 0x428], eax */
    eax = MEM32(ebp + (-0x424)); /* 0x12050C3C: mov eax, dword ptr [ebp - 0x424] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x12050C42: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x12050C44: push 4 */
    edx = POP32_VAL(esp); /* 0x12050C46: pop edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x12050C47: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x12050C49: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x12050C4C: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x12050C4E: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x12050C50: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x12050C51: call 0x12018970 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x12050C56: add esp, 0x18 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x420)) = eax; /* 0x12050C59: mov dword ptr [ebp - 0x420], eax */
    /* test esi, esi */ /* 0x12050C5F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_12050BBE; /* 0x12050C61: je 0x12050bbe */
L_12050C67:
    edx = MEM32(ebp + (-0x428)); /* 0x12050C67: mov edx, dword ptr [ebp - 0x428] */
    /* test edx, edx */ /* 0x12050C6D: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_12050BBE; /* 0x12050C6F: je 0x12050bbe */
L_12050C75:
    /* test eax, eax */ /* 0x12050C75: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_12050BBE; /* 0x12050C77: je 0x12050bbe */
L_12050C7D:
    ecx = MEM32(ebp + (-0x424)); /* 0x12050C7D: mov ecx, dword ptr [ebp - 0x424] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12050C83: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x12050C85: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12050C91; /* 0x12050C87: je 0x12050c91 */
L_12050C89:
    MEM32(esi + eax * 4) = eax; /* 0x12050C89: mov dword ptr [esi + eax*4], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x12050C8C: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, ecx */ /* 0x12050C8D: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12050C89; /* 0x12050C8F: jb 0x12050c89 */
L_12050C91:
    eax = MEM32(ebx); /* 0x12050C91: mov eax, dword ptr [ebx] */
    PUSH32(esp, edx); /* 0x12050C93: push edx */
    PUSH32(esp, MEM32(ebp + (-0x42C))); /* 0x12050C94: push dword ptr [ebp - 0x42c] */
    PUSH32(esp, ebx); /* 0x12050C9A: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x54)); /* 0x12050C9B: call dword ptr [eax + 0x54] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x12050C9E: mov esi, eax */
    /* test esi, esi */ /* 0x12050CA0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12050EF7; /* 0x12050CA2: js 0x12050ef7 */
L_12050CA8:
    PUSH32(esp, MEM32(ebp + (-0x420))); /* 0x12050CA8: push dword ptr [ebp - 0x420] */
    eax = ebp + (-0x434); /* 0x12050CAE: lea eax, [ebp - 0x434] */
    PUSH32(esp, eax); /* 0x12050CB4: push eax */
    PUSH32(esp, MEM32(ebp + (-0x424))); /* 0x12050CB5: push dword ptr [ebp - 0x424] */
    PUSH32(esp, MEM32(ebp + (-0x428))); /* 0x12050CBB: push dword ptr [ebp - 0x428] */
    RECOMP_CALL(sub_1204B317); /* 0x12050CC1: call 0x1204b317 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x12050CC6: mov esi, eax */
    /* test esi, esi */ /* 0x12050CC8: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12050EF7; /* 0x12050CCA: js 0x12050ef7 */
L_12050CD0:
    ecx = MEM32(ebx); /* 0x12050CD0: mov ecx, dword ptr [ebx] */
    eax = ebp + (-0x438); /* 0x12050CD2: lea eax, [ebp - 0x438] */
    PUSH32(esp, eax); /* 0x12050CD8: push eax */
    eax = edi; /* 0x12050CD9: mov eax, edi */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(6) << 24;
    SET_LO8(eax, LO8(eax) & 6); /* 0x12050CDB: and al, 6 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = (uint32_t)LO8(eax); /* 0x12050CDD: movzx eax, al */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x12050CE0: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x12050CE2: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFF0u);
    eax = eax & 0xFFFFFFF0u; /* 0x12050CE4: and eax, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x12050CE7: add eax, 0x10 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x12050CEA: push eax */
    PUSH32(esp, ebx); /* 0x12050CEB: push ebx */
    RECOMP_ICALL(MEM32(ecx + 0x3C)); /* 0x12050CEC: call dword ptr [ecx + 0x3c] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x12050CEF: mov esi, eax */
    /* test esi, esi */ /* 0x12050CF1: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12050EF7; /* 0x12050CF3: js 0x12050ef7 */
L_12050CF9:
    PUSH32(esp, MEM32(ebp + (-0x358))); /* 0x12050CF9: push dword ptr [ebp - 0x358] */
    ecx = ebp + (-0x418); /* 0x12050CFF: lea ecx, [ebp - 0x418] */
    PUSH32(esp, MEM32(ebp + (-0x438))); /* 0x12050D05: push dword ptr [ebp - 0x438] */
    PUSH32(esp, 0); /* 0x12050D0B: push 0 */
    RECOMP_CALL(sub_120BD30F); /* 0x12050D0D: call 0x120bd30f */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x434)), 0 */ /* 0x12050D12: cmp dword ptr [ebp - 0x434], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x434))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12050EAD; /* 0x12050D19: jne 0x12050ead */
L_12050D1F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12050D1F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x43C)) = eax; /* 0x12050D21: mov dword ptr [ebp - 0x43c], eax */
    /* cmp MEM32(ebp + (-0x424)), eax */ /* 0x12050D27: cmp dword ptr [ebp - 0x424], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x424))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_12050EAD; /* 0x12050D2D: jbe 0x12050ead */
L_12050D33:
    ecx = MEM32(ebp + (-0x420)); /* 0x12050D33: mov ecx, dword ptr [ebp - 0x420] */
    ebx = MEM32(ebp + (-0x428)); /* 0x12050D39: mov ebx, dword ptr [ebp - 0x428] */
    edx = ecx; /* 0x12050D3F: mov edx, ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - ecx; /* 0x12050D41: sub ebx, ecx */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0x424)); /* 0x12050D43: mov ecx, dword ptr [ebp - 0x424] */
    MEM32(ebp + (-0x434)) = edx; /* 0x12050D49: mov dword ptr [ebp - 0x434], edx */
    MEM32(ebp + (-0x464)) = ebx; /* 0x12050D4F: mov dword ptr [ebp - 0x464], ebx */
L_12050D55:
    /* cmp MEM32(ebx + edx), eax */ /* 0x12050D55: cmp dword ptr [ebx + edx], eax */
    _flag_a = (uint32_t)(MEM32(ebx + edx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12050E26; /* 0x12050D58: jne 0x12050e26 */
L_12050D5E:
    /* cmp MEM32(edx), eax */ /* 0x12050D5E: cmp dword ptr [edx], eax */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12050E26; /* 0x12050D60: je 0x12050e26 */
L_12050D66:
    esi = MEM32(ebp + (-0x41C)); /* 0x12050D66: mov esi, dword ptr [ebp - 0x41c] */
    ecx = eax; /* 0x12050D6C: mov ecx, eax */
    MEM32(ebp + (-0x430)) = ecx; /* 0x12050D6E: mov dword ptr [ebp - 0x430], ecx */
L_12050D74:
    ebx = ecx; /* 0x12050D74: mov ebx, ecx */
    if (2u) _cf = (((ebx) >> 30) & 1u); /* 0x12050D76: shl ebx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ebx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 2u; /* 0x12050D76: shl ebx, 2 */
    MEM32(ebp + (-0x468)) = ebx; /* 0x12050D79: mov dword ptr [ebp - 0x468], ebx */
    /* cmp MEM32(ebx + esi), ecx */ /* 0x12050D7F: cmp dword ptr [ebx + esi], ecx */
    _flag_a = (uint32_t)(MEM32(ebx + esi)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12050E03; /* 0x12050D82: jne 0x12050e03 */
L_12050D84:
    ebx = MEM32(edx); /* 0x12050D84: mov ebx, dword ptr [edx] */
    edx = MEM32(ebp + (-0x420)); /* 0x12050D86: mov edx, dword ptr [ebp - 0x420] */
L_12050D8C:
    /* cmp ebx, ecx */ /* 0x12050D8C: cmp ebx, ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12050DF0; /* 0x12050D8E: je 0x12050df0 */
L_12050D90:
    /* cmp MEM32(esi + ebx * 4), ebx */ /* 0x12050D90: cmp dword ptr [esi + ebx*4], ebx */
    _flag_a = (uint32_t)(MEM32(esi + ebx * 4)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12050DF0; /* 0x12050D93: jne 0x12050df0 */
L_12050D95:
    PUSH32(esp, ebx); /* 0x12050D95: push ebx */
    PUSH32(esp, ecx); /* 0x12050D96: push ecx */
    eax = ebp + (-0x56C); /* 0x12050D97: lea eax, [ebp - 0x56c] */
    PUSH32(esp, eax); /* 0x12050D9D: push eax */
    eax = ebp + (-0x108); /* 0x12050D9E: lea eax, [ebp - 0x108] */
    PUSH32(esp, eax); /* 0x12050DA4: push eax */
    PUSH32(esp, edi); /* 0x12050DA5: push edi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xC4u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xC4u; /* 0x12050DA6: sub esp, 0xc4 */
    _flag_k = FK_CMP;
    PUSH32(esp, 0x31u); /* 0x12050DAC: push 0x31 */
    ecx = POP32_VAL(esp); /* 0x12050DAE: pop ecx */
    edi = esp; /* 0x12050DAF: mov edi, esp */
    esi = ebp + (-0x418); /* 0x12050DB1: lea esi, [ebp - 0x418] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x12050DB7: rep movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_120508C0); /* 0x12050DB9: call 0x120508c0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x430)); /* 0x12050DBE: mov ecx, dword ptr [ebp - 0x430] */
    esi = MEM32(ebp + (-0x41C)); /* 0x12050DC4: mov esi, dword ptr [ebp - 0x41c] */
    edi = MEM32(ebp + 0xC); /* 0x12050DCA: mov edi, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + (-0x420)); /* 0x12050DCD: mov edx, dword ptr [ebp - 0x420] */
    /* test eax, eax */ /* 0x12050DD3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x43C)); /* 0x12050DD5: mov eax, dword ptr [ebp - 0x43c] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_12050DF0; /* 0x12050DDB: je 0x12050df0 */
L_12050DDD:
    /* test MEM8(ebp + 0xC), 4 */ /* 0x12050DDD: test byte ptr [ebp + 0xc], 4 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12050DF0; /* 0x12050DE1: jne 0x12050df0 */
L_12050DE3:
    MEM32(esi + ebx * 4) = ecx; /* 0x12050DE3: mov dword ptr [esi + ebx*4], ecx */
    MEM32(ebp + (-0x448)) = 1; /* 0x12050DE6: mov dword ptr [ebp - 0x448], 1 */
L_12050DF0:
    ebx = MEM32(edx + ebx * 4); /* 0x12050DF0: mov ebx, dword ptr [edx + ebx*4] */
    /* cmp ebx, eax */ /* 0x12050DF3: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_12050D8C; /* 0x12050DF5: jne 0x12050d8c */
L_12050DF7:
    edx = MEM32(ebp + (-0x434)); /* 0x12050DF7: mov edx, dword ptr [ebp - 0x434] */
    ebx = MEM32(ebp + (-0x468)); /* 0x12050DFD: mov ebx, dword ptr [ebp - 0x468] */
L_12050E03:
    ecx = MEM32(ebp + (-0x420)); /* 0x12050E03: mov ecx, dword ptr [ebp - 0x420] */
    ecx = MEM32(ebx + ecx); /* 0x12050E09: mov ecx, dword ptr [ebx + ecx] */
    MEM32(ebp + (-0x430)) = ecx; /* 0x12050E0C: mov dword ptr [ebp - 0x430], ecx */
    /* cmp ecx, eax */ /* 0x12050E12: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_12050D74; /* 0x12050E14: jne 0x12050d74 */
L_12050E1A:
    ecx = MEM32(ebp + (-0x424)); /* 0x12050E1A: mov ecx, dword ptr [ebp - 0x424] */
    ebx = MEM32(ebp + (-0x464)); /* 0x12050E20: mov ebx, dword ptr [ebp - 0x464] */
L_12050E26:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x12050E26: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x12050E27: add edx, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x43C)) = eax; /* 0x12050E2A: mov dword ptr [ebp - 0x43c], eax */
    MEM32(ebp + (-0x434)) = edx; /* 0x12050E30: mov dword ptr [ebp - 0x434], edx */
    /* cmp eax, ecx */ /* 0x12050E36: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12050D55; /* 0x12050E38: jb 0x12050d55 */
L_12050E3E:
    eax = MEM32(ebp + (-0x448)); /* 0x12050E3E: mov eax, dword ptr [ebp - 0x448] */
    ebx = MEM32(ebp + (-0x45C)); /* 0x12050E44: mov ebx, dword ptr [ebp - 0x45c] */
    /* test eax, eax */ /* 0x12050E4A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12050EAD; /* 0x12050E4C: je 0x12050ead */
L_12050E4E:
    eax = MEM32(ebx); /* 0x12050E4E: mov eax, dword ptr [ebx] */
    ecx = ebp + (-0x44C); /* 0x12050E50: lea ecx, [ebp - 0x44c] */
    PUSH32(esp, ecx); /* 0x12050E56: push ecx */
    PUSH32(esp, 0); /* 0x12050E57: push 0 */
    PUSH32(esp, ebx); /* 0x12050E59: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x44)); /* 0x12050E5A: call dword ptr [eax + 0x44] */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x444)); /* 0x12050E5D: mov edx, dword ptr [ebp - 0x444] */
    esi = MEM32(ebp + (-0x44C)); /* 0x12050E63: mov esi, dword ptr [ebp - 0x44c] */
    edx = (uint32_t)((int32_t)edx * (int32_t)3); /* 0x12050E69: imul edx, edx, 3 */
    edi = MEM32(ebp + (-0x41C)); /* 0x12050E6C: mov edi, dword ptr [ebp - 0x41c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x12050E72: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x460)), ecx */ /* 0x12050E74: cmp dword ptr [ebp - 0x460], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x460))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12050E93; /* 0x12050E7A: je 0x12050e93 */
L_12050E7C:
    /* test edx, edx */ /* 0x12050E7C: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12050EA5; /* 0x12050E7E: je 0x12050ea5 */
L_12050E80:
    eax = (uint32_t)MEM16(esi + ecx * 2); /* 0x12050E80: movzx eax, word ptr [esi + ecx*2] */
    SET_LO16(eax, MEM16(edi + eax * 4)); /* 0x12050E84: mov ax, word ptr [edi + eax*4] */
    MEM16(esi + ecx * 2) = (uint16_t)(LO16(eax)); /* 0x12050E88: mov word ptr [esi + ecx*2], ax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x12050E8C: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, edx */ /* 0x12050E8D: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12050E80; /* 0x12050E8F: jb 0x12050e80 */
L_12050E91:
    goto L_12050EA5; /* 0x12050E91: jmp 0x12050ea5 */
L_12050E93:
    /* test edx, edx */ /* 0x12050E93: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12050EA5; /* 0x12050E95: je 0x12050ea5 */
L_12050E97:
    eax = MEM32(esi + ecx * 4); /* 0x12050E97: mov eax, dword ptr [esi + ecx*4] */
    eax = MEM32(edi + eax * 4); /* 0x12050E9A: mov eax, dword ptr [edi + eax*4] */
    MEM32(esi + ecx * 4) = eax; /* 0x12050E9D: mov dword ptr [esi + ecx*4], eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x12050EA0: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, edx */ /* 0x12050EA1: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12050E97; /* 0x12050EA3: jb 0x12050e97 */
L_12050EA5:
    eax = MEM32(ebx); /* 0x12050EA5: mov eax, dword ptr [ebx] */
    PUSH32(esp, ebx); /* 0x12050EA7: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x48)); /* 0x12050EA8: call dword ptr [eax + 0x48] */
    RECOMP_FLAGS_IN();
    goto L_12050EB3; /* 0x12050EAB: jmp 0x12050eb3 */
L_12050EAD:
    edi = MEM32(ebp + (-0x41C)); /* 0x12050EAD: mov edi, dword ptr [ebp - 0x41c] */
L_12050EB3:
    eax = MEM32(ebx); /* 0x12050EB3: mov eax, dword ptr [ebx] */
    PUSH32(esp, ebx); /* 0x12050EB5: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x40)); /* 0x12050EB6: call dword ptr [eax + 0x40] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x454))); /* 0x12050EB9: push dword ptr [ebp - 0x454] */
    ecx = MEM32(ebp + 0xC); /* 0x12050EBF: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x458))); /* 0x12050EC2: push dword ptr [ebp - 0x458] */
    eax = MEM32(ebx); /* 0x12050EC8: mov eax, dword ptr [ebx] */
    PUSH32(esp, MEM32(ebp + (-0x450))); /* 0x12050ECA: push dword ptr [ebp - 0x450] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x438))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x438)) = MEM32(ebp + (-0x438)) & 0; /* 0x12050ED0: and dword ptr [ebp - 0x438], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + (-0x42C))); /* 0x12050ED7: push dword ptr [ebp - 0x42c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    ecx = ecx & 8; /* 0x12050EDD: and ecx, 8 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (26u) _cf = (((ecx) >> 6) & 1u); /* 0x12050EE0: shl ecx, 0x1a */
    if (26u) { _flag_a = recomp_flags_pack((ecx << 26u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 26u; /* 0x12050EE0: shl ecx, 0x1a */
    _flag_a = (uint32_t)((ecx | 0x02000000u)); _flag_b = (uint32_t)((ecx | 0x02000000u));
    ecx = ecx | 0x02000000u; /* 0x12050EE3: or ecx, 0x2000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x12050EE9: push ecx */
    PUSH32(esp, ebx); /* 0x12050EEA: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x6C)); /* 0x12050EEB: call dword ptr [eax + 0x6c] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x12050EEE: mov esi, eax */
    goto L_12050EFD; /* 0x12050EF0: jmp 0x12050efd */
L_12050EF2:
    esi = 0x8876086Cu; /* 0x12050EF2: mov esi, 0x8876086c */
L_12050EF7:
    edi = MEM32(ebp + (-0x41C)); /* 0x12050EF7: mov edi, dword ptr [ebp - 0x41c] */
L_12050EFD:
    /* cmp MEM32(ebp + (-0x438)), 0 */ /* 0x12050EFD: cmp dword ptr [ebp - 0x438], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x438))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12050F0C; /* 0x12050F04: je 0x12050f0c */
L_12050F06:
    eax = MEM32(ebx); /* 0x12050F06: mov eax, dword ptr [ebx] */
    PUSH32(esp, ebx); /* 0x12050F08: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x40)); /* 0x12050F09: call dword ptr [eax + 0x40] */
    RECOMP_FLAGS_IN();
L_12050F0C:
    PUSH32(esp, MEM32(ebp + (-0x420))); /* 0x12050F0C: push dword ptr [ebp - 0x420] */
    RECOMP_CALL(sub_121BF388); /* 0x12050F12: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x428))); /* 0x12050F17: push dword ptr [ebp - 0x428] */
    RECOMP_CALL(sub_121BF388); /* 0x12050F1D: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x12050F22: push edi */
    RECOMP_CALL(sub_121BF388); /* 0x12050F23: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x440))); /* 0x12050F28: push dword ptr [ebp - 0x440] */
    RECOMP_CALL(sub_121BF388); /* 0x12050F2E: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x12050F33: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x12050F36: add esp, 0x10 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x12050F39: pop edi */
    eax = esi; /* 0x12050F3A: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x12050F3C: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x12050F3D: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x12050F3F: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x12050F40: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12050F45: leave  */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x12050F46: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_12050F4E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12050F4Eu);

L_12050F4E:
    edi = edi; /* 0x12050F4E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12050F50: push ebp */
    ebp = esp; /* 0x12050F51: mov ebp, esp */
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x12050F53: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x12050F57: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x12050F5A: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12050F5D: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12050F60: push dword ptr [ebp + 8] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_12050F6C; /* 0x12050F63: jne 0x12050f6c */
L_12050F65:
    RECOMP_CALL(sub_1204C9BC); /* 0x12050F65: call 0x1204c9bc */
    RECOMP_FLAGS_IN();
    goto L_12050F71; /* 0x12050F6A: jmp 0x12050f71 */
L_12050F6C:
    RECOMP_CALL(sub_1204CAB0); /* 0x12050F6C: call 0x1204cab0 */
    RECOMP_FLAGS_IN();
L_12050F71:
    ebp = POP32_VAL(esp); /* 0x12050F71: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x12050F72: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_12050F7A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12050F7Au);

L_12050F7A:
    edi = edi; /* 0x12050F7A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12050F7C: push ebp */
    ebp = esp; /* 0x12050F7D: mov ebp, esp */
    PUSH32(esp, esi); /* 0x12050F7F: push esi */
    esi = MEM32(ebp + 0x8); /* 0x12050F80: mov esi, dword ptr [ebp + 8] */
    ecx = MEM32(esi + 0x274); /* 0x12050F83: mov ecx, dword ptr [esi + 0x274] */
    /* test ecx, ecx */ /* 0x12050F89: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12050F95; /* 0x12050F8B: je 0x12050f95 */
L_12050F8D:
    eax = MEM32(ecx); /* 0x12050F8D: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x12050F8F: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x12050F90: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    goto L_12050FBB; /* 0x12050F93: jmp 0x12050fbb */
L_12050F95:
    eax = MEM32(esi + 0x26C); /* 0x12050F95: mov eax, dword ptr [esi + 0x26c] */
    PUSH32(esp, edi); /* 0x12050F9B: push edi */
    edi = eax + (-0x1); /* 0x12050F9C: lea edi, [eax - 1] */
    MEM32(esi + 0x26C) = edi; /* 0x12050F9F: mov dword ptr [esi + 0x26c], edi */
    /* cmp eax, 1 */ /* 0x12050FA5: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12050FB8; /* 0x12050FA8: jne 0x12050fb8 */
L_12050FAA:
    ecx = esi; /* 0x12050FAA: mov ecx, esi */
    RECOMP_CALL(sub_1204B55A); /* 0x12050FAC: call 0x1204b55a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x12050FB1: push esi */
    RECOMP_CALL(sub_121BF388); /* 0x12050FB2: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12050FB7: pop ecx */
L_12050FB8:
    eax = edi; /* 0x12050FB8: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x12050FBA: pop edi */
L_12050FBB:
    esi = POP32_VAL(esp); /* 0x12050FBB: pop esi */
    ebp = POP32_VAL(esp); /* 0x12050FBC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12050FBD: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12050FC5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12050FC5u);

L_12050FC5:
    edi = edi; /* 0x12050FC5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12050FC7: push ebp */
    ebp = esp; /* 0x12050FC8: mov ebp, esp */
    PUSH32(esp, esi); /* 0x12050FCA: push esi */
    PUSH32(esp, edi); /* 0x12050FCB: push edi */
    edi = MEM32(ebp + 0xC); /* 0x12050FCC: mov edi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x12050FCF: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x12050FD1: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12050FDD; /* 0x12050FD3: je 0x12050fdd */
L_12050FD5:
    /* cmp edi, 0x7FFFFFFFu */ /* 0x12050FD5: cmp edi, 0x7fffffff */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_12050FE2; /* 0x12050FDB: jbe 0x12050fe2 */
L_12050FDD:
    esi = 0x80070057u; /* 0x12050FDD: mov esi, 0x80070057 */
L_12050FE2:
    /* test esi, esi */ /* 0x12050FE2: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12051014; /* 0x12050FE4: js 0x12051014 */
L_12050FE6:
    PUSH32(esp, ebx); /* 0x12050FE6: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x12050FE7: mov ebx, dword ptr [ebp + 8] */
    eax = ebp + 0x14; /* 0x12050FEA: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x12050FED: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x12050FEE: push dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x12050FF1: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x12050FF3: dec edi */
    _flag_k = FK_DEC;
    PUSH32(esp, edi); /* 0x12050FF4: push edi */
    PUSH32(esp, ebx); /* 0x12050FF5: push ebx */
    RECOMP_CALL(sub_121BED16); /* 0x12050FF6: call 0x121bed16 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x12050FFB: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x12050FFE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1205100A; /* 0x12051000: js 0x1205100a */
L_12051002:
    /* cmp eax, edi */ /* 0x12051002: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1205100A; /* 0x12051004: ja 0x1205100a */
L_12051006:
    if (CMP_NE(_flag_a, _flag_b)) goto L_12051013; /* 0x12051006: jne 0x12051013 */
L_12051008:
    goto L_1205100F; /* 0x12051008: jmp 0x1205100f */
L_1205100A:
    esi = 0x8007007Au; /* 0x1205100A: mov esi, 0x8007007a */
L_1205100F:
    MEM8(edi + ebx) = (uint8_t)(0); /* 0x1205100F: mov byte ptr [edi + ebx], 0 */
L_12051013:
    ebx = POP32_VAL(esp); /* 0x12051013: pop ebx */
L_12051014:
    edi = POP32_VAL(esp); /* 0x12051014: pop edi */
    eax = esi; /* 0x12051015: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x12051017: pop esi */
    ebp = POP32_VAL(esp); /* 0x12051018: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x12051019: ret  */
    RECOMP_REGS_OUT();
}

void sub_1205101F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1205101Fu);

L_1205101F:
    edi = edi; /* 0x1205101F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12051021: push ebp */
    ebp = esp; /* 0x12051022: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x12051024: push ecx */
    PUSH32(esp, ebx); /* 0x12051025: push ebx */
    PUSH32(esp, edi); /* 0x12051026: push edi */
    edi = MEM32(ebp + 0x8); /* 0x12051027: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1205102A: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1205102C: mov dword ptr [ebp - 4], ebx */
    /* cmp MEM32(edi + 0x234), ebx */ /* 0x1205102F: cmp dword ptr [edi + 0x234], ebx */
    _flag_a = (uint32_t)(MEM32(edi + 0x234)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12051193; /* 0x12051035: je 0x12051193 */
L_1205103B:
    eax = MEM32(edi + 0x230); /* 0x1205103B: mov eax, dword ptr [edi + 0x230] */
    ecx = MEM32(eax); /* 0x12051041: mov ecx, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12051043: push esi */
    PUSH32(esp, MEM32(edi + 0x8)); /* 0x12051044: push dword ptr [edi + 8] */
    PUSH32(esp, eax); /* 0x12051047: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x15C)); /* 0x12051048: call dword ptr [ecx + 0x15c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(edi + 0x238)); /* 0x1205104E: push dword ptr [edi + 0x238] */
    eax = MEM32(edi + 0x230); /* 0x12051054: mov eax, dword ptr [edi + 0x230] */
    ecx = MEM32(eax); /* 0x1205105A: mov ecx, dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x1205105C: push ebx */
    PUSH32(esp, MEM32(edi + 0x234)); /* 0x1205105D: push dword ptr [edi + 0x234] */
    PUSH32(esp, ebx); /* 0x12051063: push ebx */
    PUSH32(esp, eax); /* 0x12051064: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x190)); /* 0x12051065: call dword ptr [ecx + 0x190] */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x230); /* 0x1205106B: mov eax, dword ptr [edi + 0x230] */
    PUSH32(esp, MEM32(edi + 0x248)); /* 0x12051071: push dword ptr [edi + 0x248] */
    ecx = MEM32(eax); /* 0x12051077: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x12051079: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x1A0)); /* 0x1205107A: call dword ptr [ecx + 0x1a0] */
    RECOMP_FLAGS_IN();
    /* test MEM8(edi + 0x218), 0x10u */ /* 0x12051080: test byte ptr [edi + 0x218], 0x10 */
    _flag_a = (uint32_t)(MEM8(edi + 0x218)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12051111; /* 0x12051087: je 0x12051111 */
L_1205108D:
    esi = MEM32(edi + 0x260); /* 0x1205108D: mov esi, dword ptr [edi + 0x260] */
    edx = MEM32(ebp + 0xC); /* 0x12051093: mov edx, dword ptr [ebp + 0xc] */
    /* cmp edx, esi */ /* 0x12051096: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120510AE; /* 0x12051098: jae 0x120510ae */
L_1205109A:
    eax = MEM32(edi + 0x25C); /* 0x1205109A: mov eax, dword ptr [edi + 0x25c] */
    ecx = edx; /* 0x120510A0: mov ecx, edx */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x14u); /* 0x120510A2: imul ecx, ecx, 0x14 */
    /* cmp MEM32(ecx + eax), edx */ /* 0x120510A5: cmp dword ptr [ecx + eax], edx */
    _flag_a = (uint32_t)(MEM32(ecx + eax)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120510AE; /* 0x120510A8: jne 0x120510ae */
L_120510AA:
    ecx = edx; /* 0x120510AA: mov ecx, edx */
    goto L_120510C6; /* 0x120510AC: jmp 0x120510c6 */
L_120510AE:
    ecx = ebx; /* 0x120510AE: mov ecx, ebx */
    /* test esi, esi */ /* 0x120510B0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120510C6; /* 0x120510B2: je 0x120510c6 */
L_120510B4:
    eax = MEM32(edi + 0x25C); /* 0x120510B4: mov eax, dword ptr [edi + 0x25c] */
L_120510BA:
    /* cmp MEM32(eax), edx */ /* 0x120510BA: cmp dword ptr [eax], edx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120510C6; /* 0x120510BC: je 0x120510c6 */
L_120510BE:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120510BE: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x14u; /* 0x120510BF: add eax, 0x14 */
    _flag_k = FK_ADD;
    /* cmp ecx, esi */ /* 0x120510C2: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120510BA; /* 0x120510C4: jb 0x120510ba */
L_120510C6:
    /* cmp ecx, esi */ /* 0x120510C6: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_12051192; /* 0x120510C8: jae 0x12051192 */
L_120510CE:
    eax = MEM32(edi + 0x25C); /* 0x120510CE: mov eax, dword ptr [edi + 0x25c] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x14u); /* 0x120510D4: imul ecx, ecx, 0x14 */
    MEM32(ebp + 0xC) = ecx; /* 0x120510D7: mov dword ptr [ebp + 0xc], ecx */
    /* cmp MEM32(ecx + eax + 0x8), ebx */ /* 0x120510DA: cmp dword ptr [ecx + eax + 8], ebx */
    _flag_a = (uint32_t)(MEM32(ecx + eax + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_12051192; /* 0x120510DE: jbe 0x12051192 */
L_120510E4:
    esi = MEM32(edi + 0x230); /* 0x120510E4: mov esi, dword ptr [edi + 0x230] */
    edi = MEM32(ebp + 0xC); /* 0x120510EA: mov edi, dword ptr [ebp + 0xc] */
    ecx = eax; /* 0x120510ED: mov ecx, eax */
    eax = MEM32(edi + ecx + 0x4); /* 0x120510EF: mov eax, dword ptr [edi + ecx + 4] */
    PUSH32(esp, MEM32(edi + ecx + 0x8)); /* 0x120510F3: push dword ptr [edi + ecx + 8] */
    eax = (uint32_t)((int32_t)eax * (int32_t)3); /* 0x120510F7: imul eax, eax, 3 */
    edx = MEM32(esi); /* 0x120510FA: mov edx, dword ptr [esi] */
    PUSH32(esp, eax); /* 0x120510FC: push eax */
    PUSH32(esp, MEM32(edi + ecx + 0x10)); /* 0x120510FD: push dword ptr [edi + ecx + 0x10] */
    PUSH32(esp, MEM32(edi + ecx + 0xC)); /* 0x12051101: push dword ptr [edi + ecx + 0xc] */
    PUSH32(esp, ebx); /* 0x12051105: push ebx */
    PUSH32(esp, 4); /* 0x12051106: push 4 */
    PUSH32(esp, esi); /* 0x12051108: push esi */
    RECOMP_ICALL(MEM32(edx + 0x148)); /* 0x12051109: call dword ptr [edx + 0x148] */
    RECOMP_FLAGS_IN();
    goto L_12051190; /* 0x1205110F: jmp 0x12051190 */
L_12051111:
    esi = ebx; /* 0x12051111: mov esi, ebx */
    edx = ebx; /* 0x12051113: mov edx, ebx */
    MEM32(ebp + 0x8) = ebx; /* 0x12051115: mov dword ptr [ebp + 8], ebx */
    /* cmp MEM32(edi + 0x264), ebx */ /* 0x12051118: cmp dword ptr [edi + 0x264], ebx */
    _flag_a = (uint32_t)(MEM32(edi + 0x264)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_12051192; /* 0x1205111E: jbe 0x12051192 */
L_12051120:
    ecx = MEM32(ebp + 0xC); /* 0x12051120: mov ecx, dword ptr [ebp + 0xc] */
L_12051123:
    eax = MEM32(edi + 0x254); /* 0x12051123: mov eax, dword ptr [edi + 0x254] */
    /* cmp MEM32(eax + edx * 4), ecx */ /* 0x12051129: cmp dword ptr [eax + edx*4], ecx */
    _flag_a = (uint32_t)(MEM32(eax + edx * 4)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12051131; /* 0x1205112C: jne 0x12051131 */
L_1205112E:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1205112E: inc esi */
    _flag_k = FK_INC;
    goto L_12051160; /* 0x1205112F: jmp 0x12051160 */
L_12051131:
    /* test esi, esi */ /* 0x12051131: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1205115E; /* 0x12051133: je 0x1205115e */
L_12051135:
    eax = MEM32(ebp + 0x8); /* 0x12051135: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(edi + 0x230); /* 0x12051138: mov ecx, dword ptr [edi + 0x230] */
    edx = MEM32(ecx); /* 0x1205113E: mov edx, dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x12051140: sub eax, esi */
    _flag_k = FK_CMP;
    eax = (uint32_t)((int32_t)eax * (int32_t)3); /* 0x12051142: imul eax, eax, 3 */
    PUSH32(esp, esi); /* 0x12051145: push esi */
    PUSH32(esp, eax); /* 0x12051146: push eax */
    PUSH32(esp, MEM32(edi + 0x23C)); /* 0x12051147: push dword ptr [edi + 0x23c] */
    PUSH32(esp, ebx); /* 0x1205114D: push ebx */
    PUSH32(esp, ebx); /* 0x1205114E: push ebx */
    PUSH32(esp, 4); /* 0x1205114F: push 4 */
    PUSH32(esp, ecx); /* 0x12051151: push ecx */
    RECOMP_ICALL(MEM32(edx + 0x148)); /* 0x12051152: call dword ptr [edx + 0x148] */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0x8); /* 0x12051158: mov edx, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0xC); /* 0x1205115B: mov ecx, dword ptr [ebp + 0xc] */
L_1205115E:
    esi = ebx; /* 0x1205115E: mov esi, ebx */
L_12051160:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x12051160: inc edx */
    _flag_k = FK_INC;
    MEM32(ebp + 0x8) = edx; /* 0x12051161: mov dword ptr [ebp + 8], edx */
    /* cmp edx, MEM32(edi + 0x264) */ /* 0x12051164: cmp edx, dword ptr [edi + 0x264] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(edi + 0x264));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12051123; /* 0x1205116A: jb 0x12051123 */
L_1205116C:
    /* test esi, esi */ /* 0x1205116C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12051192; /* 0x1205116E: je 0x12051192 */
L_12051170:
    eax = MEM32(edi + 0x230); /* 0x12051170: mov eax, dword ptr [edi + 0x230] */
    ecx = MEM32(eax); /* 0x12051176: mov ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - esi; /* 0x12051178: sub edx, esi */
    _flag_k = FK_CMP;
    edx = (uint32_t)((int32_t)edx * (int32_t)3); /* 0x1205117A: imul edx, edx, 3 */
    PUSH32(esp, esi); /* 0x1205117D: push esi */
    PUSH32(esp, edx); /* 0x1205117E: push edx */
    PUSH32(esp, MEM32(edi + 0x23C)); /* 0x1205117F: push dword ptr [edi + 0x23c] */
    PUSH32(esp, ebx); /* 0x12051185: push ebx */
    PUSH32(esp, ebx); /* 0x12051186: push ebx */
    PUSH32(esp, 4); /* 0x12051187: push 4 */
    PUSH32(esp, eax); /* 0x12051189: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x148)); /* 0x1205118A: call dword ptr [ecx + 0x148] */
    RECOMP_FLAGS_IN();
L_12051190:
    ebx = eax; /* 0x12051190: mov ebx, eax */
L_12051192:
    esi = POP32_VAL(esp); /* 0x12051192: pop esi */
L_12051193:
    edi = POP32_VAL(esp); /* 0x12051193: pop edi */
    eax = ebx; /* 0x12051194: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x12051196: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12051197: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x12051198: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_120511A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120511A0u);

L_120511A0:
    edi = edi; /* 0x120511A0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120511A2: push ebp */
    ebp = esp; /* 0x120511A3: mov ebp, esp */
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x120511A5: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120511B2; /* 0x120511A9: jne 0x120511b2 */
L_120511AB:
    eax = 0x8876086Cu; /* 0x120511AB: mov eax, 0x8876086c */
    goto L_120511C3; /* 0x120511B0: jmp 0x120511c3 */
L_120511B2:
    eax = MEM32(ebp + 0x8); /* 0x120511B2: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x120511B5: add eax, 0xc */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x120511B8: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120511B9: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1204BFE1); /* 0x120511BC: call 0x1204bfe1 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120511C1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120511C3:
    ebp = POP32_VAL(esp); /* 0x120511C3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x120511C4: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_120511CC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120511CCu);

L_120511CC:
    edi = edi; /* 0x120511CC: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120511CE: push ebp */
    ebp = esp; /* 0x120511CF: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20Cu; /* 0x120511D1: sub esp, 0x20c */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x120511D7: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x120511DC: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x120511DE: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x120511E1: push ebx */
    ebx = MEM32(ebp + 0x18); /* 0x120511E2: mov ebx, dword ptr [ebp + 0x18] */
    PUSH32(esp, esi); /* 0x120511E5: push esi */
    esi = MEM32(ebp + 0x8); /* 0x120511E6: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x120511E9: push edi */
    edi = MEM32(ebp + 0x14); /* 0x120511EA: mov edi, dword ptr [ebp + 0x14] */
    eax = ebp + (-0x20C); /* 0x120511ED: lea eax, [ebp - 0x20c] */
    PUSH32(esp, eax); /* 0x120511F3: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120511F4: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_120506EA); /* 0x120511F7: call 0x120506ea */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120511FC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12051212; /* 0x120511FE: js 0x12051212 */
L_12051200:
    eax = MEM32(esi); /* 0x12051200: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x12051202: push ebx */
    PUSH32(esp, edi); /* 0x12051203: push edi */
    ecx = ebp + (-0x20C); /* 0x12051204: lea ecx, [ebp - 0x20c] */
    PUSH32(esp, ecx); /* 0x1205120A: push ecx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1205120B: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1205120E: push esi */
    RECOMP_ICALL(MEM32(eax + 0x30)); /* 0x1205120F: call dword ptr [eax + 0x30] */
    RECOMP_FLAGS_IN();
L_12051212:
    ecx = MEM32(ebp + (-0x4)); /* 0x12051212: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x12051215: pop edi */
    esi = POP32_VAL(esp); /* 0x12051216: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x12051217: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x12051219: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x1205121A: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1205121F: leave  */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x12051220: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_12051228(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12051228u);

L_12051228:
    edi = edi; /* 0x12051228: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1205122A: push ebp */
    ebp = esp; /* 0x1205122B: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x5BCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x5BCu; /* 0x1205122D: sub esp, 0x5bc */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x12051233: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x12051238: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1205123A: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x1205123D: push ebx */
    ebx = ecx; /* 0x1205123E: mov ebx, ecx */
    eax = MEM32(ebx + 0x268); /* 0x12051240: mov eax, dword ptr [ebx + 0x268] */
    PUSH32(esp, esi); /* 0x12051246: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x12051247: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x12051249: push edi */
    MEM32(ebp + (-0x5A4)) = eax; /* 0x1205124A: mov dword ptr [ebp - 0x5a4], eax */
    MEM32(ebp + (-0x5BC)) = eax; /* 0x12051250: mov dword ptr [ebp - 0x5bc], eax */
    MEM32(ebp + (-0x5B4)) = eax; /* 0x12051256: mov dword ptr [ebp - 0x5b4], eax */
    eax = MEM32(ebx + 0x240); /* 0x1205125C: mov eax, dword ptr [ebx + 0x240] */
    edi = ebx + 0x8; /* 0x12051262: lea edi, [ebx + 8] */
    MEM32(ebp + (-0x5A8)) = esi; /* 0x12051265: mov dword ptr [ebp - 0x5a8], esi */
    MEM32(ebp + (-0x59C)) = esi; /* 0x1205126B: mov dword ptr [ebp - 0x59c], esi */
    MEM32(ebp + (-0x598)) = esi; /* 0x12051271: mov dword ptr [ebp - 0x598], esi */
    MEM32(ebp + (-0x5B8)) = eax; /* 0x12051277: mov dword ptr [ebp - 0x5b8], eax */
    MEM32(ebp + (-0x594)) = esi; /* 0x1205127D: mov dword ptr [ebp - 0x594], esi */
    MEM32(ebp + (-0x5B0)) = esi; /* 0x12051283: mov dword ptr [ebp - 0x5b0], esi */
    MEM32(ebp + (-0x5A0)) = esi; /* 0x12051289: mov dword ptr [ebp - 0x5a0], esi */
    MEM32(ebp + (-0x5AC)) = esi; /* 0x1205128F: mov dword ptr [ebp - 0x5ac], esi */
    /* cmp MEM32(edi), esi */ /* 0x12051295: cmp dword ptr [edi], esi */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120512C9; /* 0x12051297: jne 0x120512c9 */
L_12051299:
    PUSH32(esp, 1); /* 0x12051299: push 1 */
    RECOMP_CALL(sub_12019381); /* 0x1205129B: call 0x12019381 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx + 0x230); /* 0x120512A0: mov ecx, dword ptr [ebx + 0x230] */
    edx = MEM32(ecx); /* 0x120512A6: mov edx, dword ptr [ecx] */
    PUSH32(esp, edi); /* 0x120512A8: push edi */
    eax = ebx + 0xC; /* 0x120512A9: lea eax, [ebx + 0xc] */
    PUSH32(esp, eax); /* 0x120512AC: push eax */
    PUSH32(esp, ecx); /* 0x120512AD: push ecx */
    RECOMP_ICALL(MEM32(edx + 0x158)); /* 0x120512AE: call dword ptr [edx + 0x158] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x120512B4: push 0 */
    esi = eax; /* 0x120512B6: mov esi, eax */
    RECOMP_CALL(sub_12019381); /* 0x120512B8: call 0x12019381 */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x120512BD: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_120512C7; /* 0x120512BF: jns 0x120512c7 */
L_120512C1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120512C1: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi) = esi; /* 0x120512C3: mov dword ptr [edi], esi */
    goto L_120512C9; /* 0x120512C5: jmp 0x120512c9 */
L_120512C7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120512C7: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_120512C9:
    edi = MEM32(ebp + 0x8); /* 0x120512C9: mov edi, dword ptr [ebp + 8] */
    ecx = 0xFFFFu; /* 0x120512CC: mov ecx, 0xffff */
    /* cmp edi, ecx */ /* 0x120512D1: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120517F7; /* 0x120512D3: jae 0x120517f7 */
L_120512D9:
    eax = MEM32(ebp + 0xC); /* 0x120512D9: mov eax, dword ptr [ebp + 0xc] */
    /* cmp eax, ecx */ /* 0x120512DC: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120517F7; /* 0x120512DE: jae 0x120517f7 */
L_120512E4:
    /* cmp MEM32(ebx + 0x268), edi */ /* 0x120512E4: cmp dword ptr [ebx + 0x268], edi */
    _flag_a = (uint32_t)(MEM32(ebx + 0x268)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120514BA; /* 0x120512EA: jae 0x120514ba */
L_120512F0:
    ecx = MEM32(ebx + 0x230); /* 0x120512F0: mov ecx, dword ptr [ebx + 0x230] */
    edx = MEM32(ecx); /* 0x120512F6: mov edx, dword ptr [ecx] */
    PUSH32(esp, esi); /* 0x120512F8: push esi */
    eax = ebp + (-0x594); /* 0x120512F9: lea eax, [ebp - 0x594] */
    PUSH32(esp, eax); /* 0x120512FF: push eax */
    PUSH32(esp, MEM32(ebx + 0x21C)); /* 0x12051300: push dword ptr [ebx + 0x21c] */
    eax = edi; /* 0x12051306: mov eax, edi */
    eax = (uint32_t)((int32_t)eax * (int32_t)6); /* 0x12051308: imul eax, eax, 6 */
    PUSH32(esp, 0x65u); /* 0x1205130B: push 0x65 */
    PUSH32(esp, MEM32(ebx + 0x224)); /* 0x1205130D: push dword ptr [ebx + 0x224] */
    PUSH32(esp, eax); /* 0x12051313: push eax */
    PUSH32(esp, ecx); /* 0x12051314: push ecx */
    RECOMP_ICALL(MEM32(edx + 0x6C)); /* 0x12051315: call dword ptr [edx + 0x6c] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x12051318: mov esi, eax */
    /* test esi, esi */ /* 0x1205131A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120517FC; /* 0x1205131C: js 0x120517fc */
L_12051322:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x12051322: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebx + 0x264), esi */ /* 0x12051324: cmp dword ptr [ebx + 0x264], esi */
    _flag_a = (uint32_t)(MEM32(ebx + 0x264)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120513F2; /* 0x1205132A: jbe 0x120513f2 */
L_12051330:
    eax = MEM32(ebx + 0x248); /* 0x12051330: mov eax, dword ptr [ebx + 0x248] */
    ecx = MEM32(eax); /* 0x12051336: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0x800u); /* 0x12051338: push 0x800 */
    edx = ebp + (-0x5B0); /* 0x1205133D: lea edx, [ebp - 0x5b0] */
    PUSH32(esp, edx); /* 0x12051343: push edx */
    PUSH32(esp, esi); /* 0x12051344: push esi */
    PUSH32(esp, esi); /* 0x12051345: push esi */
    PUSH32(esp, eax); /* 0x12051346: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x2C)); /* 0x12051347: call dword ptr [ecx + 0x2c] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1205134A: mov esi, eax */
    /* test esi, esi */ /* 0x1205134C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120517FC; /* 0x1205134E: js 0x120517fc */
L_12051354:
    eax = MEM32(ebp + (-0x594)); /* 0x12051354: mov eax, dword ptr [ebp - 0x594] */
    ecx = MEM32(eax); /* 0x1205135A: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0x800u); /* 0x1205135C: push 0x800 */
    edx = ebp + (-0x5A0); /* 0x12051361: lea edx, [ebp - 0x5a0] */
    PUSH32(esp, edx); /* 0x12051367: push edx */
    PUSH32(esp, 0); /* 0x12051368: push 0 */
    PUSH32(esp, 0); /* 0x1205136A: push 0 */
    PUSH32(esp, eax); /* 0x1205136C: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x2C)); /* 0x1205136D: call dword ptr [ecx + 0x2c] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x12051370: mov esi, eax */
    /* test esi, esi */ /* 0x12051372: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120517FC; /* 0x12051374: js 0x120517fc */
L_1205137A:
    eax = MEM32(ebx + 0x264); /* 0x1205137A: mov eax, dword ptr [ebx + 0x264] */
    eax = (uint32_t)((int32_t)eax * (int32_t)6); /* 0x12051380: imul eax, eax, 6 */
    PUSH32(esp, eax); /* 0x12051383: push eax */
    PUSH32(esp, MEM32(ebp + (-0x5B0))); /* 0x12051384: push dword ptr [ebp - 0x5b0] */
    PUSH32(esp, MEM32(ebp + (-0x5A0))); /* 0x1205138A: push dword ptr [ebp - 0x5a0] */
    RECOMP_CALL(sub_121BF440); /* 0x12051390: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx + 0x264); /* 0x12051395: mov ecx, dword ptr [ebx + 0x264] */
    eax = edi; /* 0x1205139B: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1205139D: sub eax, ecx */
    _flag_k = FK_CMP;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)6); /* 0x1205139F: imul ecx, ecx, 6 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x5A0)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + (-0x5A0)); /* 0x120513A2: add ecx, dword ptr [ebp - 0x5a0] */
    _flag_k = FK_ADD;
    eax = (uint32_t)((int32_t)eax * (int32_t)6); /* 0x120513A8: imul eax, eax, 6 */
    PUSH32(esp, eax); /* 0x120513AB: push eax */
    PUSH32(esp, 0); /* 0x120513AC: push 0 */
    PUSH32(esp, ecx); /* 0x120513AE: push ecx */
    RECOMP_CALL(sub_121BF434); /* 0x120513AF: call 0x121bf434 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x594)); /* 0x120513B4: mov eax, dword ptr [ebp - 0x594] */
    ecx = MEM32(eax); /* 0x120513BA: mov ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x120513BC: add esp, 0x18 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x120513BF: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x120513C0: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120513C3: mov esi, eax */
    /* test esi, esi */ /* 0x120513C5: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120517FC; /* 0x120513C7: js 0x120517fc */
L_120513CD:
    eax = MEM32(ebx + 0x248); /* 0x120513CD: mov eax, dword ptr [ebx + 0x248] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x5A0))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x5A0)) = MEM32(ebp + (-0x5A0)) & 0; /* 0x120513D3: and dword ptr [ebp - 0x5a0], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(eax); /* 0x120513DA: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x120513DC: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x120513DD: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120513E0: mov esi, eax */
    /* test esi, esi */ /* 0x120513E2: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120517FC; /* 0x120513E4: js 0x120517fc */
L_120513EA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120513EA: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x5B0)) = esi; /* 0x120513EC: mov dword ptr [ebp - 0x5b0], esi */
L_120513F2:
    ecx = MEM32(ebx + 0x248); /* 0x120513F2: mov ecx, dword ptr [ebx + 0x248] */
    /* test ecx, ecx */ /* 0x120513F8: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12051408; /* 0x120513FA: je 0x12051408 */
L_120513FC:
    eax = MEM32(ecx); /* 0x120513FC: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120513FE: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120513FF: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    MEM32(ebx + 0x248) = esi; /* 0x12051402: mov dword ptr [ebx + 0x248], esi */
L_12051408:
    /* test MEM8(ebx + 0x218), 1 */ /* 0x12051408: test byte ptr [ebx + 0x218], 1 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x218)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = MEM32(ebp + (-0x594)); /* 0x1205140F: mov eax, dword ptr [ebp - 0x594] */
    MEM32(ebx + 0x248) = eax; /* 0x12051415: mov dword ptr [ebx + 0x248], eax */
    MEM32(ebp + (-0x594)) = esi; /* 0x1205141B: mov dword ptr [ebp - 0x594], esi */
    MEM32(ebx + 0x268) = edi; /* 0x12051421: mov dword ptr [ebx + 0x268], edi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1205144B; /* 0x12051427: je 0x1205144b */
L_12051429:
    eax = ebp + (-0x5A4); /* 0x12051429: lea eax, [ebp - 0x5a4] */
    PUSH32(esp, eax); /* 0x1205142F: push eax */
    PUSH32(esp, MEM32(ebx + 0x264)); /* 0x12051430: push dword ptr [ebx + 0x264] */
    eax = ebx + 0x250; /* 0x12051436: lea eax, [ebx + 0x250] */
    PUSH32(esp, edi); /* 0x1205143C: push edi */
    PUSH32(esp, eax); /* 0x1205143D: push eax */
    RECOMP_CALL(sub_1204CCAE); /* 0x1205143E: call 0x1204ccae */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12051443: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120514ED; /* 0x12051445: je 0x120514ed */
L_1205144B:
    /* test MEM8(ebx + 0x218), 4 */ /* 0x1205144B: test byte ptr [ebx + 0x218], 4 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x218)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12051490; /* 0x12051452: je 0x12051490 */
L_12051454:
    eax = ebp + (-0x5BC); /* 0x12051454: lea eax, [ebp - 0x5bc] */
    PUSH32(esp, eax); /* 0x1205145A: push eax */
    PUSH32(esp, MEM32(ebx + 0x264)); /* 0x1205145B: push dword ptr [ebx + 0x264] */
    esi = ebx + 0x254; /* 0x12051461: lea esi, [ebx + 0x254] */
    PUSH32(esp, edi); /* 0x12051467: push edi */
    PUSH32(esp, esi); /* 0x12051468: push esi */
    RECOMP_CALL(sub_1204CEE9); /* 0x12051469: call 0x1204cee9 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1205146E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120514ED; /* 0x12051470: je 0x120514ed */
L_12051472:
    ecx = MEM32(ebx + 0x264); /* 0x12051472: mov ecx, dword ptr [ebx + 0x264] */
    eax = edi; /* 0x12051478: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1205147A: sub eax, ecx */
    _flag_k = FK_CMP;
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1205147C: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1205147C: shl eax, 2 */
    PUSH32(esp, eax); /* 0x1205147F: push eax */
    eax = MEM32(esi); /* 0x12051480: mov eax, dword ptr [esi] */
    eax = eax + ecx * 4; /* 0x12051482: lea eax, [eax + ecx*4] */
    PUSH32(esp, 0); /* 0x12051485: push 0 */
    PUSH32(esp, eax); /* 0x12051487: push eax */
    RECOMP_CALL(sub_121BF434); /* 0x12051488: call 0x121bf434 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1205148D: add esp, 0xc */
    _flag_k = FK_ADD;
L_12051490:
    /* test MEM8(ebx + 0x218), 8 */ /* 0x12051490: test byte ptr [ebx + 0x218], 8 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x218)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_120514B7; /* 0x12051497: je 0x120514b7 */
L_12051499:
    eax = ebp + (-0x5B4); /* 0x12051499: lea eax, [ebp - 0x5b4] */
    PUSH32(esp, eax); /* 0x1205149F: push eax */
    PUSH32(esp, MEM32(ebx + 0x264)); /* 0x120514A0: push dword ptr [ebx + 0x264] */
    eax = ebx + 0x258; /* 0x120514A6: lea eax, [ebx + 0x258] */
    PUSH32(esp, edi); /* 0x120514AC: push edi */
    PUSH32(esp, eax); /* 0x120514AD: push eax */
    RECOMP_CALL(sub_1204CD65); /* 0x120514AE: call 0x1204cd65 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120514B3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120514ED; /* 0x120514B5: je 0x120514ed */
L_120514B7:
    eax = MEM32(ebp + 0xC); /* 0x120514B7: mov eax, dword ptr [ebp + 0xc] */
L_120514BA:
    /* cmp MEM32(ebx + 0x240), eax */ /* 0x120514BA: cmp dword ptr [ebx + 0x240], eax */
    _flag_a = (uint32_t)(MEM32(ebx + 0x240)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1205164E; /* 0x120514C0: jae 0x1205164e */
L_120514C6:
    /* test MEM8(ebx + 0x218), 2 */ /* 0x120514C6: test byte ptr [ebx + 0x218], 2 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x218)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_120514FA; /* 0x120514CD: je 0x120514fa */
L_120514CF:
    ecx = ebp + (-0x5B8); /* 0x120514CF: lea ecx, [ebp - 0x5b8] */
    PUSH32(esp, ecx); /* 0x120514D5: push ecx */
    PUSH32(esp, MEM32(ebx + 0x23C)); /* 0x120514D6: push dword ptr [ebx + 0x23c] */
    PUSH32(esp, eax); /* 0x120514DC: push eax */
    eax = ebx + 0x244; /* 0x120514DD: lea eax, [ebx + 0x244] */
    PUSH32(esp, eax); /* 0x120514E3: push eax */
    RECOMP_CALL(sub_1204CD65); /* 0x120514E4: call 0x1204cd65 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120514E9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120514F7; /* 0x120514EB: jne 0x120514f7 */
L_120514ED:
    esi = 0x8007000Eu; /* 0x120514ED: mov esi, 0x8007000e */
    goto L_120517FC; /* 0x120514F2: jmp 0x120517fc */
L_120514F7:
    eax = MEM32(ebp + 0xC); /* 0x120514F7: mov eax, dword ptr [ebp + 0xc] */
L_120514FA:
    /* test MEM8(ebx + 0x218), 0x20u */ /* 0x120514FA: test byte ptr [ebx + 0x218], 0x20 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x218)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1205164E; /* 0x12051501: jne 0x1205164e */
L_12051507:
    edx = MEM32(ebx + 0x230); /* 0x12051507: mov edx, dword ptr [ebx + 0x230] */
    ecx = MEM32(edx); /* 0x1205150D: mov ecx, dword ptr [edx] */
    PUSH32(esp, 0); /* 0x1205150F: push 0 */
    eax = ebp + (-0x598); /* 0x12051511: lea eax, [ebp - 0x598] */
    PUSH32(esp, eax); /* 0x12051517: push eax */
    eax = MEM32(ebx + 0x238); /* 0x12051518: mov eax, dword ptr [ebx + 0x238] */
    PUSH32(esp, MEM32(ebx + 0x220)); /* 0x1205151E: push dword ptr [ebx + 0x220] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0xC)); /* 0x12051524: imul eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebx + 0x4)); /* 0x12051528: push dword ptr [ebx + 4] */
    PUSH32(esp, MEM32(ebx + 0x228)); /* 0x1205152B: push dword ptr [ebx + 0x228] */
    PUSH32(esp, eax); /* 0x12051531: push eax */
    PUSH32(esp, edx); /* 0x12051532: push edx */
    RECOMP_ICALL(MEM32(ecx + 0x68)); /* 0x12051533: call dword ptr [ecx + 0x68] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x12051536: mov esi, eax */
    /* test esi, esi */ /* 0x12051538: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120517FC; /* 0x1205153A: js 0x120517fc */
L_12051540:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x12051540: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebx + 0x23C), esi */ /* 0x12051542: cmp dword ptr [ebx + 0x23c], esi */
    _flag_a = (uint32_t)(MEM32(ebx + 0x23C)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1205161D; /* 0x12051548: jbe 0x1205161d */
L_1205154E:
    eax = MEM32(ebx + 0x234); /* 0x1205154E: mov eax, dword ptr [ebx + 0x234] */
    ecx = MEM32(eax); /* 0x12051554: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0x800u); /* 0x12051556: push 0x800 */
    edx = ebp + (-0x5A8); /* 0x1205155B: lea edx, [ebp - 0x5a8] */
    PUSH32(esp, edx); /* 0x12051561: push edx */
    PUSH32(esp, esi); /* 0x12051562: push esi */
    PUSH32(esp, esi); /* 0x12051563: push esi */
    PUSH32(esp, eax); /* 0x12051564: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x2C)); /* 0x12051565: call dword ptr [ecx + 0x2c] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x12051568: mov esi, eax */
    /* test esi, esi */ /* 0x1205156A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120517FC; /* 0x1205156C: js 0x120517fc */
L_12051572:
    eax = MEM32(ebp + (-0x598)); /* 0x12051572: mov eax, dword ptr [ebp - 0x598] */
    ecx = MEM32(eax); /* 0x12051578: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0x800u); /* 0x1205157A: push 0x800 */
    edx = ebp + (-0x59C); /* 0x1205157F: lea edx, [ebp - 0x59c] */
    PUSH32(esp, edx); /* 0x12051585: push edx */
    PUSH32(esp, 0); /* 0x12051586: push 0 */
    PUSH32(esp, 0); /* 0x12051588: push 0 */
    PUSH32(esp, eax); /* 0x1205158A: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x2C)); /* 0x1205158B: call dword ptr [ecx + 0x2c] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1205158E: mov esi, eax */
    /* test esi, esi */ /* 0x12051590: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120517FC; /* 0x12051592: js 0x120517fc */
L_12051598:
    eax = MEM32(ebx + 0x238); /* 0x12051598: mov eax, dword ptr [ebx + 0x238] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebx + 0x23C)); /* 0x1205159E: imul eax, dword ptr [ebx + 0x23c] */
    PUSH32(esp, eax); /* 0x120515A5: push eax */
    PUSH32(esp, MEM32(ebp + (-0x5A8))); /* 0x120515A6: push dword ptr [ebp - 0x5a8] */
    PUSH32(esp, MEM32(ebp + (-0x59C))); /* 0x120515AC: push dword ptr [ebp - 0x59c] */
    RECOMP_CALL(sub_121BF440); /* 0x120515B2: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x120515B7: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebx + 0x238); /* 0x120515BA: mov ecx, dword ptr [ebx + 0x238] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x23C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebx + 0x23C); /* 0x120515C0: sub eax, dword ptr [ebx + 0x23c] */
    _flag_k = FK_CMP;
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx); /* 0x120515C6: imul eax, ecx */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebx + 0x23C)); /* 0x120515C9: imul ecx, dword ptr [ebx + 0x23c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x59C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + (-0x59C)); /* 0x120515D0: add ecx, dword ptr [ebp - 0x59c] */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x120515D6: push eax */
    PUSH32(esp, 0); /* 0x120515D7: push 0 */
    PUSH32(esp, ecx); /* 0x120515D9: push ecx */
    RECOMP_CALL(sub_121BF434); /* 0x120515DA: call 0x121bf434 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x598)); /* 0x120515DF: mov eax, dword ptr [ebp - 0x598] */
    ecx = MEM32(eax); /* 0x120515E5: mov ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x120515E7: add esp, 0x18 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x120515EA: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x120515EB: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120515EE: mov esi, eax */
    /* test esi, esi */ /* 0x120515F0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120517FC; /* 0x120515F2: js 0x120517fc */
L_120515F8:
    eax = MEM32(ebx + 0x234); /* 0x120515F8: mov eax, dword ptr [ebx + 0x234] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x59C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x59C)) = MEM32(ebp + (-0x59C)) & 0; /* 0x120515FE: and dword ptr [ebp - 0x59c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(eax); /* 0x12051605: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x12051607: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x12051608: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1205160B: mov esi, eax */
    /* test esi, esi */ /* 0x1205160D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120517FC; /* 0x1205160F: js 0x120517fc */
L_12051615:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x12051615: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x5A8)) = esi; /* 0x12051617: mov dword ptr [ebp - 0x5a8], esi */
L_1205161D:
    ecx = MEM32(ebx + 0x234); /* 0x1205161D: mov ecx, dword ptr [ebx + 0x234] */
    /* test ecx, ecx */ /* 0x12051623: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12051633; /* 0x12051625: je 0x12051633 */
L_12051627:
    eax = MEM32(ecx); /* 0x12051627: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x12051629: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1205162A: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    MEM32(ebx + 0x234) = esi; /* 0x1205162D: mov dword ptr [ebx + 0x234], esi */
L_12051633:
    eax = MEM32(ebp + (-0x598)); /* 0x12051633: mov eax, dword ptr [ebp - 0x598] */
    MEM32(ebx + 0x234) = eax; /* 0x12051639: mov dword ptr [ebx + 0x234], eax */
    eax = MEM32(ebp + 0xC); /* 0x1205163F: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x598)) = esi; /* 0x12051642: mov dword ptr [ebp - 0x598], esi */
    MEM32(ebx + 0x240) = eax; /* 0x12051648: mov dword ptr [ebx + 0x240], eax */
L_1205164E:
    MEM32(ebx + 0x23C) = eax; /* 0x1205164E: mov dword ptr [ebx + 0x23c], eax */
    eax = MEM32(ebx + 0x230); /* 0x12051654: mov eax, dword ptr [ebx + 0x230] */
    edx = ebp + (-0x144); /* 0x1205165A: lea edx, [ebp - 0x144] */
    PUSH32(esp, edx); /* 0x12051660: push edx */
    MEM32(ebx + 0x264) = edi; /* 0x12051661: mov dword ptr [ebx + 0x264], edi */
    ecx = MEM32(eax); /* 0x12051667: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x12051669: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x1C)); /* 0x1205166A: call dword ptr [ecx + 0x1c] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1205166D: mov esi, eax */
    /* test esi, esi */ /* 0x1205166F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120517FC; /* 0x12051671: js 0x120517fc */
L_12051677:
    eax = MEM32(ebx + 0x230); /* 0x12051677: mov eax, dword ptr [ebx + 0x230] */
    ecx = MEM32(eax); /* 0x1205167D: mov ecx, dword ptr [eax] */
    edx = ebp + (-0x5AC); /* 0x1205167F: lea edx, [ebp - 0x5ac] */
    PUSH32(esp, edx); /* 0x12051685: push edx */
    PUSH32(esp, eax); /* 0x12051686: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x18)); /* 0x12051687: call dword ptr [ecx + 0x18] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1205168A: mov esi, eax */
    /* test esi, esi */ /* 0x1205168C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120517FC; /* 0x1205168E: js 0x120517fc */
L_12051694:
    eax = MEM32(0x121D9AD8); /* 0x12051694: mov eax, dword ptr [0x121d9ad8] */
    /* cmp eax, MEM32(ebx + 0x230) */ /* 0x12051699: cmp eax, dword ptr [ebx + 0x230] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x230));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120517DF; /* 0x1205169F: je 0x120517df */
L_120516A5:
    eax = MEM32(ebp + (-0x5AC)); /* 0x120516A5: mov eax, dword ptr [ebp - 0x5ac] */
    ecx = MEM32(eax); /* 0x120516AB: mov ecx, dword ptr [eax] */
    edx = ebp + (-0x590); /* 0x120516AD: lea edx, [ebp - 0x590] */
    PUSH32(esp, edx); /* 0x120516B3: push edx */
    PUSH32(esp, 0); /* 0x120516B4: push 0 */
    PUSH32(esp, MEM32(ebp + (-0x140))); /* 0x120516B6: push dword ptr [ebp - 0x140] */
    PUSH32(esp, eax); /* 0x120516BC: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x14)); /* 0x120516BD: call dword ptr [ecx + 0x14] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120516C0: mov esi, eax */
    /* test esi, esi */ /* 0x120516C2: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120517FC; /* 0x120516C4: js 0x120517fc */
L_120516CA:
    /* cmp MEM32(ebp + (-0x168)), 0x1002u */ /* 0x120516CA: cmp dword ptr [ebp - 0x168], 0x1002 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x168))); _flag_b = (uint32_t)(0x1002u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120516F9; /* 0x120516D4: jne 0x120516f9 */
L_120516D6:
    eax = MEM32(ebp + (-0x164)); /* 0x120516D6: mov eax, dword ptr [ebp - 0x164] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFAEBCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFAEBCu; /* 0x120516DC: add eax, 0xffffaebc */
    _flag_k = FK_ADD;
    /* cmp eax, 3 */ /* 0x120516E1: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120516F9; /* 0x120516E4: ja 0x120516f9 */
L_120516E6:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0; /* 0x120516E6: and dword ptr [ebp - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120516EA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120516EC: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = eax; /* 0x120516EE: mov dword ptr [ebp - 0xc], eax */
    MEM32(ebp + (-0x8)) = ecx; /* 0x120516F1: mov dword ptr [ebp - 8], ecx */
    goto L_120517BB; /* 0x120516F4: jmp 0x120517bb */
L_120516F9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120516F9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ebp + (-0x14); /* 0x120516FB: lea edi, [ebp - 0x14] */
    MEM32(edi) = eax; edi += _df * 4; /* 0x120516FE: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x120516FF: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x12051700: stosd dword ptr es:[edi], eax */
    PUSH32(esp, 0); /* 0x12051701: push 0 */
    MEM32(edi) = eax; edi += _df * 4; /* 0x12051703: stosd dword ptr es:[edi], eax */
    eax = MEM32(ebx + 0x230); /* 0x12051704: mov eax, dword ptr [ebx + 0x230] */
    ecx = MEM32(eax); /* 0x1205170A: mov ecx, dword ptr [eax] */
    PUSH32(esp, 4); /* 0x1205170C: push 4 */
    PUSH32(esp, eax); /* 0x1205170E: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x1D8)); /* 0x1205170F: call dword ptr [ecx + 0x1d8] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12051715: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12051785; /* 0x12051717: js 0x12051785 */
L_12051719:
    eax = MEM32(ebx + 0x230); /* 0x12051719: mov eax, dword ptr [ebx + 0x230] */
    ecx = MEM32(eax); /* 0x1205171F: mov ecx, dword ptr [eax] */
    edx = ebp + (-0x5A4); /* 0x12051721: lea edx, [ebp - 0x5a4] */
    PUSH32(esp, edx); /* 0x12051727: push edx */
    PUSH32(esp, 4); /* 0x12051728: push 4 */
    PUSH32(esp, eax); /* 0x1205172A: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x1D8)); /* 0x1205172B: call dword ptr [ecx + 0x1d8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x12051731: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x12051733: inc edi */
    _flag_k = FK_INC;
    /* test eax, eax */ /* 0x12051734: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12051788; /* 0x12051736: js 0x12051788 */
L_12051738:
    eax = MEM32(ebp + (-0x5A4)); /* 0x12051738: mov eax, dword ptr [ebp - 0x5a4] */
    ecx = MEM32(eax); /* 0x1205173E: mov ecx, dword ptr [eax] */
    PUSH32(esp, edi); /* 0x12051740: push edi */
    PUSH32(esp, eax); /* 0x12051741: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x18)); /* 0x12051742: call dword ptr [ecx + 0x18] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x12051745: mov esi, eax */
    /* test esi, esi */ /* 0x12051747: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1205176A; /* 0x12051749: js 0x1205176a */
L_1205174B:
    esi = edi; /* 0x1205174B: mov esi, edi */
    /* test esi, esi */ /* 0x1205174D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
L_1205174F:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1205176A; /* 0x1205174F: je 0x1205176a */
L_12051751:
    eax = MEM32(ebp + (-0x5A4)); /* 0x12051751: mov eax, dword ptr [ebp - 0x5a4] */
    ecx = MEM32(eax); /* 0x12051757: mov ecx, dword ptr [eax] */
    PUSH32(esp, edi); /* 0x12051759: push edi */
    PUSH32(esp, 0x10u); /* 0x1205175A: push 0x10 */
    edx = ebp + (-0x14); /* 0x1205175C: lea edx, [ebp - 0x14] */
    PUSH32(esp, edx); /* 0x1205175F: push edx */
    PUSH32(esp, eax); /* 0x12051760: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x1C)); /* 0x12051761: call dword ptr [ecx + 0x1c] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x12051764: mov esi, eax */
    /* test esi, esi */ /* 0x12051766: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1205174F; /* 0x12051768: jns 0x1205174f */
L_1205176A:
    eax = MEM32(ebp + (-0x5A4)); /* 0x1205176A: mov eax, dword ptr [ebp - 0x5a4] */
    ecx = MEM32(eax); /* 0x12051770: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x12051772: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x12051773: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x12051776: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12051788; /* 0x12051778: js 0x12051788 */
L_1205177A:
    ecx = MEM32(ebp + (-0x8)); /* 0x1205177A: mov ecx, dword ptr [ebp - 8] */
    eax = MEM32(ebp + (-0xC)); /* 0x1205177D: mov eax, dword ptr [ebp - 0xc] */
    edi = MEM32(ebp + (-0x10)); /* 0x12051780: mov edi, dword ptr [ebp - 0x10] */
    goto L_12051799; /* 0x12051783: jmp 0x12051799 */
L_12051785:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x12051785: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x12051787: inc edi */
    _flag_k = FK_INC;
L_12051788:
    PUSH32(esp, 0xCu); /* 0x12051788: push 0xc */
    eax = POP32_VAL(esp); /* 0x1205178A: pop eax */
    PUSH32(esp, 7); /* 0x1205178B: push 7 */
    ecx = POP32_VAL(esp); /* 0x1205178D: pop ecx */
    MEM32(ebp + (-0x10)) = edi; /* 0x1205178E: mov dword ptr [ebp - 0x10], edi */
    MEM32(ebp + (-0xC)) = eax; /* 0x12051791: mov dword ptr [ebp - 0xc], eax */
    MEM32(ebp + (-0x8)) = ecx; /* 0x12051794: mov dword ptr [ebp - 8], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x12051797: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_12051799:
    /* test edi, edi */ /* 0x12051799: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120517A7; /* 0x1205179B: jne 0x120517a7 */
L_1205179D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1205179D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1205179F: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = eax; /* 0x120517A1: mov dword ptr [ebp - 0xc], eax */
    MEM32(ebp + (-0x8)) = ecx; /* 0x120517A4: mov dword ptr [ebp - 8], ecx */
L_120517A7:
    edx = MEM32(ebx + 0x278); /* 0x120517A7: mov edx, dword ptr [ebx + 0x278] */
    /* cmp MEM32(ebx + 0x27C), edx */ /* 0x120517AD: cmp dword ptr [ebx + 0x27c], edx */
    _flag_a = (uint32_t)(MEM32(ebx + 0x27C)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120517BB; /* 0x120517B3: jbe 0x120517bb */
L_120517B5:
    MEM32(ebx + 0x27C) = edx; /* 0x120517B5: mov dword ptr [ebx + 0x27c], edx */
L_120517BB:
    MEM32(0x121D9ADC) = eax; /* 0x120517BB: mov dword ptr [0x121d9adc], eax */
    MEM32(0x121D9AE0) = ecx; /* 0x120517C0: mov dword ptr [0x121d9ae0], ecx */
    MEM32(ebx + 0x278) = eax; /* 0x120517C6: mov dword ptr [ebx + 0x278], eax */
    eax = MEM32(ebx + 0x230); /* 0x120517CC: mov eax, dword ptr [ebx + 0x230] */
    MEM32(ebx + 0x27C) = ecx; /* 0x120517D2: mov dword ptr [ebx + 0x27c], ecx */
    MEM32(0x121D9AD8) = eax; /* 0x120517D8: mov dword ptr [0x121d9ad8], eax */
    goto L_120517FC; /* 0x120517DD: jmp 0x120517fc */
L_120517DF:
    eax = MEM32(0x121D9ADC); /* 0x120517DF: mov eax, dword ptr [0x121d9adc] */
    MEM32(ebx + 0x278) = eax; /* 0x120517E4: mov dword ptr [ebx + 0x278], eax */
    eax = MEM32(0x121D9AE0); /* 0x120517EA: mov eax, dword ptr [0x121d9ae0] */
    MEM32(ebx + 0x27C) = eax; /* 0x120517EF: mov dword ptr [ebx + 0x27c], eax */
    goto L_120517FC; /* 0x120517F5: jmp 0x120517fc */
L_120517F7:
    esi = 0x8876086Cu; /* 0x120517F7: mov esi, 0x8876086c */
L_120517FC:
    ecx = MEM32(ebp + (-0x5AC)); /* 0x120517FC: mov ecx, dword ptr [ebp - 0x5ac] */
    /* test ecx, ecx */ /* 0x12051802: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12051813; /* 0x12051804: je 0x12051813 */
L_12051806:
    eax = MEM32(ecx); /* 0x12051806: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x12051808: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x12051809: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x5AC))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x5AC)) = MEM32(ebp + (-0x5AC)) & 0; /* 0x1205180C: and dword ptr [ebp - 0x5ac], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_12051813:
    /* cmp MEM32(ebp + (-0x5A0)), 0 */ /* 0x12051813: cmp dword ptr [ebp - 0x5a0], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x5A0))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12051828; /* 0x1205181A: je 0x12051828 */
L_1205181C:
    eax = MEM32(ebp + (-0x594)); /* 0x1205181C: mov eax, dword ptr [ebp - 0x594] */
    ecx = MEM32(eax); /* 0x12051822: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x12051824: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x12051825: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
L_12051828:
    /* cmp MEM32(ebp + (-0x5B0)), 0 */ /* 0x12051828: cmp dword ptr [ebp - 0x5b0], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x5B0))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1205183D; /* 0x1205182F: je 0x1205183d */
L_12051831:
    eax = MEM32(ebx + 0x248); /* 0x12051831: mov eax, dword ptr [ebx + 0x248] */
    ecx = MEM32(eax); /* 0x12051837: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x12051839: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x1205183A: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
L_1205183D:
    /* cmp MEM32(ebp + (-0x59C)), 0 */ /* 0x1205183D: cmp dword ptr [ebp - 0x59c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x59C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12051852; /* 0x12051844: je 0x12051852 */
L_12051846:
    eax = MEM32(ebp + (-0x598)); /* 0x12051846: mov eax, dword ptr [ebp - 0x598] */
    ecx = MEM32(eax); /* 0x1205184C: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1205184E: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x1205184F: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
L_12051852:
    /* cmp MEM32(ebp + (-0x5A8)), 0 */ /* 0x12051852: cmp dword ptr [ebp - 0x5a8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x5A8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12051867; /* 0x12051859: je 0x12051867 */
L_1205185B:
    eax = MEM32(ebx + 0x234); /* 0x1205185B: mov eax, dword ptr [ebx + 0x234] */
    ecx = MEM32(eax); /* 0x12051861: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x12051863: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x12051864: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
L_12051867:
    ecx = MEM32(ebp + (-0x4)); /* 0x12051867: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1205186A: pop edi */
    eax = esi; /* 0x1205186B: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1205186D: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1205186E: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x12051870: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x12051871: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12051876: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x12051877: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1205187F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1205187Fu);

L_1205187F:
    edi = edi; /* 0x1205187F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12051881: push ebp */
    ebp = esp; /* 0x12051882: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x3Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x3Cu; /* 0x12051884: sub esp, 0x3c */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x12051887: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x1205188A: push ebx */
    PUSH32(esp, esi); /* 0x1205188B: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1205188C: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1205188E: push edi */
    esi = ecx; /* 0x1205188F: mov esi, ecx */
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(ebx)); /* 0x12051891: mov byte ptr [ebp - 1], bl */
    /* test eax, eax */ /* 0x12051894: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120518A9; /* 0x12051896: jne 0x120518a9 */
L_12051898:
    /* cmp MEM32(esi + 0x24C), ebx */ /* 0x12051898: cmp dword ptr [esi + 0x24c], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x24C)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120518B0; /* 0x1205189E: je 0x120518b0 */
L_120518A0:
    eax = MEM32(esi + 0x24C); /* 0x120518A0: mov eax, dword ptr [esi + 0x24c] */
    MEM32(ebp + 0x8) = eax; /* 0x120518A6: mov dword ptr [ebp + 8], eax */
L_120518A9:
    edi = eax; /* 0x120518A9: mov edi, eax */
    MEM32(ebp + (-0x14)) = edi; /* 0x120518AB: mov dword ptr [ebp - 0x14], edi */
    goto L_120518D2; /* 0x120518AE: jmp 0x120518d2 */
L_120518B0:
    eax = MEM32(esi + 0x248); /* 0x120518B0: mov eax, dword ptr [esi + 0x248] */
    ecx = MEM32(eax); /* 0x120518B6: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0x810u); /* 0x120518B8: push 0x810 */
    edx = ebp + (-0x14); /* 0x120518BD: lea edx, [ebp - 0x14] */
    PUSH32(esp, edx); /* 0x120518C0: push edx */
    PUSH32(esp, ebx); /* 0x120518C1: push ebx */
    PUSH32(esp, ebx); /* 0x120518C2: push ebx */
    PUSH32(esp, eax); /* 0x120518C3: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x2C)); /* 0x120518C4: call dword ptr [ecx + 0x2c] */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0x14)); /* 0x120518C7: mov edi, dword ptr [ebp - 0x14] */
    /* test eax, eax */ /* 0x120518CA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12051B5D; /* 0x120518CC: js 0x12051b5d */
L_120518D2:
    MEM32(ebp + (-0x1C)) = ebx; /* 0x120518D2: mov dword ptr [ebp - 0x1c], ebx */
    /* cmp MEM32(esi + 0x264), ebx */ /* 0x120518D5: cmp dword ptr [esi + 0x264], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x264)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_12051B3E; /* 0x120518DB: jbe 0x12051b3e */
L_120518E1:
    eax = MEM32(esi + 0x250); /* 0x120518E1: mov eax, dword ptr [esi + 0x250] */
    MEM32(ebp + (-0x10)) = eax; /* 0x120518E7: mov dword ptr [ebp - 0x10], eax */
    edx = edi + 0x2; /* 0x120518EA: lea edx, [edi + 2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x120518ED: sub eax, edi */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xC)) = edx; /* 0x120518EF: mov dword ptr [ebp - 0xc], edx */
    MEM32(ebp + (-0x20)) = eax; /* 0x120518F2: mov dword ptr [ebp - 0x20], eax */
L_120518F5:
    eax = edx + (-0x2); /* 0x120518F5: lea eax, [edx - 2] */
    MEM32(ebp + (-0x24)) = eax; /* 0x120518F8: mov dword ptr [ebp - 0x24], eax */
    eax = (uint32_t)MEM16(eax); /* 0x120518FB: movzx eax, word ptr [eax] */
    /* cmp LO16(eax), 0xFFFFu */ /* 0x120518FE: cmp ax, 0xffff */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0xFFFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1205195A; /* 0x12051902: jne 0x1205195a */
L_12051904:
    ecx = (uint32_t)MEM16(edx); /* 0x12051904: movzx ecx, word ptr [edx] */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x12051907: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_12051B5D; /* 0x1205190A: jne 0x12051b5d */
L_12051910:
    /* cmp LO16(ecx), MEM16(edx + 0x2) */ /* 0x12051910: cmp cx, word ptr [edx + 2] */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(MEM16(edx + 0x2)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_12051B5D; /* 0x12051914: jne 0x12051b5d */
L_1205191A:
    /* test MEM8(esi + 0x218), 1 */ /* 0x1205191A: test byte ptr [esi + 0x218], 1 */
    _flag_a = (uint32_t)(MEM8(esi + 0x218)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12051B1A; /* 0x12051921: je 0x12051b1a */
L_12051927:
    eax = MEM32(ebp + (-0x10)); /* 0x12051927: mov eax, dword ptr [ebp - 0x10] */
    eax = (uint32_t)MEM16(eax); /* 0x1205192A: movzx eax, word ptr [eax] */
    /* cmp LO16(eax), 0xFFFFu */ /* 0x1205192D: cmp ax, 0xffff */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0xFFFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_12051B5D; /* 0x12051931: jne 0x12051b5d */
L_12051937:
    ecx = MEM32(ebp + (-0x20)); /* 0x12051937: mov ecx, dword ptr [ebp - 0x20] */
    ecx = (uint32_t)MEM16(ecx + edx); /* 0x1205193A: movzx ecx, word ptr [ecx + edx] */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x1205193E: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_12051B5D; /* 0x12051941: jne 0x12051b5d */
L_12051947:
    eax = MEM32(ebp + (-0x20)); /* 0x12051947: mov eax, dword ptr [ebp - 0x20] */
    /* cmp LO16(ecx), MEM16(eax + edx + 0x2) */ /* 0x1205194A: cmp cx, word ptr [eax + edx + 2] */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(MEM16(eax + edx + 0x2)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_12051B5D; /* 0x1205194F: jne 0x12051b5d */
L_12051955:
    goto L_12051B1A; /* 0x12051955: jmp 0x12051b1a */
L_1205195A:
    ecx = MEM32(esi + 0x218); /* 0x1205195A: mov ecx, dword ptr [esi + 0x218] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    ecx = ecx & 2; /* 0x12051960: and ecx, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x34)) = ecx; /* 0x12051963: mov dword ptr [ebp - 0x34], ecx */
    ecx = (uint32_t)MEM16(edx); /* 0x12051966: movzx ecx, word ptr [edx] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_120519BA; /* 0x12051969: je 0x120519ba */
L_1205196B:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x1205196B: add ecx, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1205196D: add eax, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x18)) = ecx; /* 0x1205196F: mov dword ptr [ebp - 0x18], ecx */
    ecx = MEM32(esi + 0x244); /* 0x12051972: mov ecx, dword ptr [esi + 0x244] */
    edx = MEM32(ebp + (-0x18)); /* 0x12051978: mov edx, dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0x30)) = eax; /* 0x1205197B: mov dword ptr [ebp - 0x30], eax */
    SET_LO16(eax, MEM16(eax + ecx)); /* 0x1205197E: mov ax, word ptr [eax + ecx] */
    /* cmp LO16(eax), MEM16(edx + ecx) */ /* 0x12051982: cmp ax, word ptr [edx + ecx] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(edx + ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    edx = MEM32(ebp + (-0xC)); /* 0x12051986: mov edx, dword ptr [ebp - 0xc] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120519D4; /* 0x12051989: je 0x120519d4 */
L_1205198B:
    eax = (uint32_t)MEM16(edx + 0x2); /* 0x1205198B: movzx eax, word ptr [edx + 2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1205198F: add eax, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x12051991: mov dword ptr [ebp - 8], eax */
    eax = MEM32(ebp + (-0x18)); /* 0x12051994: mov eax, dword ptr [ebp - 0x18] */
    edx = MEM32(ebp + (-0x8)); /* 0x12051997: mov edx, dword ptr [ebp - 8] */
    SET_LO16(eax, MEM16(eax + ecx)); /* 0x1205199A: mov ax, word ptr [eax + ecx] */
    /* cmp LO16(eax), MEM16(ecx + edx) */ /* 0x1205199E: cmp ax, word ptr [ecx + edx] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ecx + edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    edx = MEM32(ebp + (-0xC)); /* 0x120519A2: mov edx, dword ptr [ebp - 0xc] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120519D4; /* 0x120519A5: je 0x120519d4 */
L_120519A7:
    eax = MEM32(ebp + (-0x8)); /* 0x120519A7: mov eax, dword ptr [ebp - 8] */
    edx = MEM32(ebp + (-0x30)); /* 0x120519AA: mov edx, dword ptr [ebp - 0x30] */
    SET_LO16(eax, MEM16(ecx + eax)); /* 0x120519AD: mov ax, word ptr [ecx + eax] */
    /* cmp LO16(eax), MEM16(edx + ecx) */ /* 0x120519B1: cmp ax, word ptr [edx + ecx] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(edx + ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    edx = MEM32(ebp + (-0xC)); /* 0x120519B5: mov edx, dword ptr [ebp - 0xc] */
    goto L_120519D2; /* 0x120519B8: jmp 0x120519d2 */
L_120519BA:
    /* cmp LO16(eax), LO16(ecx) */ /* 0x120519BA: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120519D4; /* 0x120519BD: je 0x120519d4 */
L_120519BF:
    ebx = (uint32_t)MEM16(edx + 0x2); /* 0x120519BF: movzx ebx, word ptr [edx + 2] */
    PUSH32(esp, 0); /* 0x120519C3: push 0 */
    /* cmp LO16(ecx), LO16(ebx) */ /* 0x120519C5: cmp cx, bx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    ebx = POP32_VAL(esp); /* 0x120519C8: pop ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120519D4; /* 0x120519C9: je 0x120519d4 */
L_120519CB:
    ecx = (uint32_t)MEM16(edx + 0x2); /* 0x120519CB: movzx ecx, word ptr [edx + 2] */
    /* cmp LO16(ecx), LO16(eax) */ /* 0x120519CF: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
L_120519D2:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_120519D8; /* 0x120519D2: jne 0x120519d8 */
L_120519D4:
    MEM8(ebp + (-0x1)) = (uint8_t)(1); /* 0x120519D4: mov byte ptr [ebp - 1], 1 */
L_120519D8:
    /* test MEM8(esi + 0x218), 1 */ /* 0x120519D8: test byte ptr [esi + 0x218], 1 */
    _flag_a = (uint32_t)(MEM8(esi + 0x218)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12051B1A; /* 0x120519DF: je 0x12051b1a */
L_120519E5:
    ecx = MEM32(ebp + (-0x24)); /* 0x120519E5: mov ecx, dword ptr [ebp - 0x24] */
    eax = MEM32(ebp + (-0x10)); /* 0x120519E8: mov eax, dword ptr [ebp - 0x10] */
    MEM32(ebp + (-0x18)) = ecx; /* 0x120519EB: mov dword ptr [ebp - 0x18], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + (-0x18)) = MEM32(ebp + (-0x18)) - eax; /* 0x120519EE: sub dword ptr [ebp - 0x18], eax */
    _flag_k = FK_CMP;
    edx = ebx; /* 0x120519F1: mov edx, ebx */
    MEM32(ebp + (-0x8)) = eax; /* 0x120519F3: mov dword ptr [ebp - 8], eax */
    ecx = eax; /* 0x120519F6: mov ecx, eax */
L_120519F8:
    eax = MEM32(ebp + (-0x18)); /* 0x120519F8: mov eax, dword ptr [ebp - 0x18] */
    eax = (uint32_t)MEM16(eax + ecx); /* 0x120519FB: movzx eax, word ptr [eax + ecx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x120519FF: inc edx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x2C)) = eax; /* 0x12051A00: mov dword ptr [ebp - 0x2c], eax */
    MEM32(ebp + (-0x3C)) = edx; /* 0x12051A03: mov dword ptr [ebp - 0x3c], edx */
    eax = edx; /* 0x12051A06: mov eax, edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x12051A08: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 3); /* 0x12051A0A: push 3 */
    ecx = POP32_VAL(esp); /* 0x12051A0C: pop ecx */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x12051A0D: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    ecx = MEM32(ebp + (-0x24)); /* 0x12051A0F: mov ecx, dword ptr [ebp - 0x24] */
    eax = (uint32_t)MEM16(ecx + edx * 2); /* 0x12051A12: movzx eax, word ptr [ecx + edx*2] */
    edx = MEM32(esi + 0x23C); /* 0x12051A16: mov edx, dword ptr [esi + 0x23c] */
    ecx = MEM32(ebp + (-0x8)); /* 0x12051A1C: mov ecx, dword ptr [ebp - 8] */
    MEM32(ebp + (-0x30)) = eax; /* 0x12051A1F: mov dword ptr [ebp - 0x30], eax */
    /* cmp MEM32(ebp + (-0x2C)), edx */ /* 0x12051A22: cmp dword ptr [ebp - 0x2c], edx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_12051B5D; /* 0x12051A25: jae 0x12051b5d */
L_12051A2B:
    /* cmp eax, edx */ /* 0x12051A2B: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_12051B5D; /* 0x12051A2D: jae 0x12051b5d */
L_12051A33:
    eax = (uint32_t)MEM16(ecx); /* 0x12051A33: movzx eax, word ptr [ecx] */
    /* cmp LO16(eax), 0xFFFFu */ /* 0x12051A36: cmp ax, 0xffff */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0xFFFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12051B03; /* 0x12051A3A: je 0x12051b03 */
L_12051A40:
    /* cmp eax, MEM32(esi + 0x264) */ /* 0x12051A40: cmp eax, dword ptr [esi + 0x264] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x264));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_12051B5D; /* 0x12051A46: jae 0x12051b5d */
L_12051A4C:
    eax = (uint32_t)MEM16(ecx); /* 0x12051A4C: movzx eax, word ptr [ecx] */
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x12051A4F: push dword ptr [ebp - 0x1c] */
    eax = (uint32_t)((int32_t)eax * (int32_t)6); /* 0x12051A52: imul eax, eax, 6 */
    ecx = eax + edi; /* 0x12051A55: lea ecx, [eax + edi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x250));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esi + 0x250); /* 0x12051A58: add eax, dword ptr [esi + 0x250] */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x28)) = ecx; /* 0x12051A5E: mov dword ptr [ebp - 0x28], ecx */
    PUSH32(esp, eax); /* 0x12051A61: push eax */
    RECOMP_CALL(sub_1204CE0F); /* 0x12051A62: call 0x1204ce0f */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 3); /* 0x12051A67: push 3 */
    ecx = POP32_VAL(esp); /* 0x12051A69: pop ecx */
    /* cmp eax, ecx */ /* 0x12051A6A: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_12051B5D; /* 0x12051A6C: jae 0x12051b5d */
L_12051A72:
    /* cmp MEM32(ebp + (-0x34)), 0 */ /* 0x12051A72: cmp dword ptr [ebp - 0x34], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12051B00; /* 0x12051A76: je 0x12051b00 */
L_12051A7C:
    ecx = MEM32(ebp + (-0x28)); /* 0x12051A7C: mov ecx, dword ptr [ebp - 0x28] */
    ecx = (uint32_t)MEM16(ecx + eax * 2); /* 0x12051A7F: movzx ecx, word ptr [ecx + eax*2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x12051A83: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, 3); /* 0x12051A84: push 3 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x12051A86: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x12051A88: pop ebx */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ebx; /* 0x12051A89: div ebx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    ebx = MEM32(ebp + (-0x28)); /* 0x12051A8B: mov ebx, dword ptr [ebp - 0x28] */
    PUSH32(esp, 0); /* 0x12051A8E: push 0 */
    eax = (uint32_t)MEM16(ebx + edx * 2); /* 0x12051A90: movzx eax, word ptr [ebx + edx*2] */
    MEM32(ebp + (-0x28)) = eax; /* 0x12051A94: mov dword ptr [ebp - 0x28], eax */
    eax = MEM32(ebp + (-0x2C)); /* 0x12051A97: mov eax, dword ptr [ebp - 0x2c] */
    eax = (uint32_t)LO16(eax); /* 0x12051A9A: movzx eax, ax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x12051A9D: add eax, eax */
    _flag_k = FK_ADD;
    edx = ecx; /* 0x12051A9F: mov edx, ecx */
    ecx = MEM32(esi + 0x244); /* 0x12051AA1: mov ecx, dword ptr [esi + 0x244] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edx; /* 0x12051AA7: add edx, edx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x2C)) = eax; /* 0x12051AA9: mov dword ptr [ebp - 0x2c], eax */
    SET_LO16(eax, MEM16(eax + ecx)); /* 0x12051AAC: mov ax, word ptr [eax + ecx] */
    MEM32(ebp + (-0x38)) = edx; /* 0x12051AB0: mov dword ptr [ebp - 0x38], edx */
    ebx = POP32_VAL(esp); /* 0x12051AB3: pop ebx */
    /* cmp LO16(eax), MEM16(ecx + edx) */ /* 0x12051AB4: cmp ax, word ptr [ecx + edx] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ecx + edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_12051AD5; /* 0x12051AB8: jne 0x12051ad5 */
L_12051ABA:
    eax = MEM32(ebp + (-0x28)); /* 0x12051ABA: mov eax, dword ptr [ebp - 0x28] */
    edx = ecx; /* 0x12051ABD: mov edx, ecx */
    ecx = (uint32_t)LO16(eax); /* 0x12051ABF: movzx ecx, ax */
    eax = MEM32(ebp + (-0x30)); /* 0x12051AC2: mov eax, dword ptr [ebp - 0x30] */
    eax = (uint32_t)LO16(eax); /* 0x12051AC5: movzx eax, ax */
    SET_LO16(eax, MEM16(edx + eax * 2)); /* 0x12051AC8: mov ax, word ptr [edx + eax*2] */
    /* cmp LO16(eax), MEM16(edx + ecx * 2) */ /* 0x12051ACC: cmp ax, word ptr [edx + ecx*2] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(edx + ecx * 2)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12051B00; /* 0x12051AD0: je 0x12051b00 */
L_12051AD2:
    edx = MEM32(ebp + (-0x38)); /* 0x12051AD2: mov edx, dword ptr [ebp - 0x38] */
L_12051AD5:
    eax = MEM32(ebp + (-0x30)); /* 0x12051AD5: mov eax, dword ptr [ebp - 0x30] */
    ecx = MEM32(esi + 0x244); /* 0x12051AD8: mov ecx, dword ptr [esi + 0x244] */
    eax = (uint32_t)LO16(eax); /* 0x12051ADE: movzx eax, ax */
    SET_LO16(eax, MEM16(ecx + eax * 2)); /* 0x12051AE1: mov ax, word ptr [ecx + eax*2] */
    /* cmp LO16(eax), MEM16(ecx + edx) */ /* 0x12051AE5: cmp ax, word ptr [ecx + edx] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ecx + edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_12051B5D; /* 0x12051AE9: jne 0x12051b5d */
L_12051AEB:
    eax = MEM32(ebp + (-0x28)); /* 0x12051AEB: mov eax, dword ptr [ebp - 0x28] */
    edx = ecx; /* 0x12051AEE: mov edx, ecx */
    ecx = (uint32_t)LO16(eax); /* 0x12051AF0: movzx ecx, ax */
    eax = MEM32(ebp + (-0x2C)); /* 0x12051AF3: mov eax, dword ptr [ebp - 0x2c] */
    SET_LO16(eax, MEM16(edx + eax)); /* 0x12051AF6: mov ax, word ptr [edx + eax] */
    /* cmp LO16(eax), MEM16(edx + ecx * 2) */ /* 0x12051AFA: cmp ax, word ptr [edx + ecx*2] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(edx + ecx * 2)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_12051B5D; /* 0x12051AFE: jne 0x12051b5d */
L_12051B00:
    ecx = MEM32(ebp + (-0x8)); /* 0x12051B00: mov ecx, dword ptr [ebp - 8] */
L_12051B03:
    edx = MEM32(ebp + (-0x3C)); /* 0x12051B03: mov edx, dword ptr [ebp - 0x3c] */
    PUSH32(esp, 3); /* 0x12051B06: push 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x12051B08: add ecx, 2 */
    _flag_k = FK_ADD;
    eax = POP32_VAL(esp); /* 0x12051B0B: pop eax */
    MEM32(ebp + (-0x8)) = ecx; /* 0x12051B0C: mov dword ptr [ebp - 8], ecx */
    /* cmp edx, eax */ /* 0x12051B0F: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120519F8; /* 0x12051B11: jb 0x120519f8 */
L_12051B17:
    edx = MEM32(ebp + (-0xC)); /* 0x12051B17: mov edx, dword ptr [ebp - 0xc] */
L_12051B1A:
    ecx = MEM32(ebp + (-0x1C)); /* 0x12051B1A: mov ecx, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) + 6; /* 0x12051B1D: add dword ptr [ebp - 0x10], 6 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x12051B21: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 6; /* 0x12051B22: add edx, 6 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1C)) = ecx; /* 0x12051B25: mov dword ptr [ebp - 0x1c], ecx */
    MEM32(ebp + (-0xC)) = edx; /* 0x12051B28: mov dword ptr [ebp - 0xc], edx */
    /* cmp ecx, MEM32(esi + 0x264) */ /* 0x12051B2B: cmp ecx, dword ptr [esi + 0x264] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x264));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120518F5; /* 0x12051B31: jb 0x120518f5 */
L_12051B37:
    SET_LO8(eax, MEM8(ebp + (-0x1))); /* 0x12051B37: mov al, byte ptr [ebp - 1] */
    /* test LO8(eax), LO8(eax) */ /* 0x12051B3A: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12051B5D; /* 0x12051B3C: jne 0x12051b5d */
L_12051B3E:
    /* test MEM8(esi + 0x218), 0x10u */ /* 0x12051B3E: test byte ptr [esi + 0x218], 0x10 */
    _flag_a = (uint32_t)(MEM8(esi + 0x218)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12051B5B; /* 0x12051B45: je 0x12051b5b */
L_12051B47:
    /* cmp MEM32(esi + 0x25C), ebx */ /* 0x12051B47: cmp dword ptr [esi + 0x25c], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x25C)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12051B5B; /* 0x12051B4D: je 0x12051b5b */
L_12051B4F:
    PUSH32(esp, edi); /* 0x12051B4F: push edi */
    ecx = esi; /* 0x12051B50: mov ecx, esi */
    RECOMP_CALL(sub_1204CBD2); /* 0x12051B52: call 0x1204cbd2 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x12051B57: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12051B5D; /* 0x12051B59: je 0x12051b5d */
L_12051B5B:
    SET_LO8(ebx, 1); /* 0x12051B5B: mov bl, 1 */
L_12051B5D:
    /* test edi, edi */ /* 0x12051B5D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12051B73; /* 0x12051B5F: je 0x12051b73 */
L_12051B61:
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x12051B61: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12051B73; /* 0x12051B65: jne 0x12051b73 */
L_12051B67:
    ecx = MEM32(esi + 0x248); /* 0x12051B67: mov ecx, dword ptr [esi + 0x248] */
    edx = MEM32(ecx); /* 0x12051B6D: mov edx, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x12051B6F: push ecx */
    RECOMP_ICALL(MEM32(edx + 0x30)); /* 0x12051B70: call dword ptr [edx + 0x30] */
    RECOMP_FLAGS_IN();
L_12051B73:
    edi = POP32_VAL(esp); /* 0x12051B73: pop edi */
    esi = POP32_VAL(esp); /* 0x12051B74: pop esi */
    SET_LO8(eax, LO8(ebx)); /* 0x12051B75: mov al, bl */
    ebx = POP32_VAL(esp); /* 0x12051B77: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12051B78: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12051B79: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12051B81(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12051B81u);

L_12051B81:
    edi = edi; /* 0x12051B81: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12051B83: push ebp */
    ebp = esp; /* 0x12051B84: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x12051B86: sub esp, 0x20 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x12051B89: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x12051B8E: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x12051B90: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x12051B93: push ebx */
    PUSH32(esp, esi); /* 0x12051B94: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x12051B95: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(ebx);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & ebx; /* 0x12051B97: and dword ptr [ebp - 0x10], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x12051B9A: push edi */
    edi = MEM32(ebp + 0x8); /* 0x12051B9B: mov edi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0xC)) = ebx; /* 0x12051B9E: mov dword ptr [ebp - 0xc], ebx */
    /* cmp MEM32(edi + 0x234), ebx */ /* 0x12051BA1: cmp dword ptr [edi + 0x234], ebx */
    _flag_a = (uint32_t)(MEM32(edi + 0x234)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12051D81; /* 0x12051BA7: je 0x12051d81 */
L_12051BAD:
    /* test MEM8(edi + 0x218), 0x40u */ /* 0x12051BAD: test byte ptr [edi + 0x218], 0x40 */
    _flag_a = (uint32_t)(MEM8(edi + 0x218)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = MEM32(edi + 0x230); /* 0x12051BB4: mov eax, dword ptr [edi + 0x230] */
    PUSH32(esp, MEM32(edi + 0x8)); /* 0x12051BBA: push dword ptr [edi + 8] */
    ecx = MEM32(eax); /* 0x12051BBD: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x12051BBF: push eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_12051DB3; /* 0x12051BC0: je 0x12051db3 */
L_12051BC6:
    RECOMP_ICALL(MEM32(ecx + 0x15C)); /* 0x12051BC6: call dword ptr [ecx + 0x15c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x264); /* 0x12051BCC: mov eax, dword ptr [edi + 0x264] */
    MEM32(ebp + (-0x14)) = eax; /* 0x12051BD2: mov dword ptr [ebp - 0x14], eax */
    eax = MEM32(edi + 0x238); /* 0x12051BD5: mov eax, dword ptr [edi + 0x238] */
    eax = (uint32_t)((int32_t)eax * (int32_t)3); /* 0x12051BDB: imul eax, eax, 3 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x12051BDE: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x12051BE0: add eax, 8 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x5)) = (uint8_t)(LO8(ebx)); /* 0x12051BE3: mov byte ptr [ebp - 5], bl */
    MEM32(ebp + (-0x18)) = esi; /* 0x12051BE6: mov dword ptr [ebp - 0x18], esi */
    /* cmp eax, 0x400u */ /* 0x12051BE9: cmp eax, 0x400 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x400u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_12051C03; /* 0x12051BEE: ja 0x12051c03 */
L_12051BF0:
    RECOMP_CALL(sub_121BF530); /* 0x12051BF0: call 0x121bf530 */
    RECOMP_FLAGS_IN();
    ebx = esp; /* 0x12051BF5: mov ebx, esp */
    /* test ebx, ebx */ /* 0x12051BF7: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12051C19; /* 0x12051BF9: je 0x12051c19 */
L_12051BFB:
    MEM32(ebx) = 0xCCCCu; /* 0x12051BFB: mov dword ptr [ebx], 0xcccc */
    goto L_12051C16; /* 0x12051C01: jmp 0x12051c16 */
L_12051C03:
    PUSH32(esp, eax); /* 0x12051C03: push eax */
    RECOMP_CALL(sub_121BF524); /* 0x12051C04: call 0x121bf524 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x12051C09: mov ebx, eax */
    ecx = POP32_VAL(esp); /* 0x12051C0B: pop ecx */
    /* test ebx, ebx */ /* 0x12051C0C: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12051C19; /* 0x12051C0E: je 0x12051c19 */
L_12051C10:
    MEM32(ebx) = 0xDDDDu; /* 0x12051C10: mov dword ptr [ebx], 0xdddd */
L_12051C16:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 8; /* 0x12051C16: add ebx, 8 */
    _flag_k = FK_ADD;
L_12051C19:
    /* test MEM8(edi + 0x218), 0x10u */ /* 0x12051C19: test byte ptr [edi + 0x218], 0x10 */
    _flag_a = (uint32_t)(MEM8(edi + 0x218)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12051C6B; /* 0x12051C20: je 0x12051c6b */
L_12051C22:
    edx = MEM32(edi + 0x260); /* 0x12051C22: mov edx, dword ptr [edi + 0x260] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x12051C28: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edx, edx */ /* 0x12051C2A: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12051C43; /* 0x12051C2C: je 0x12051c43 */
L_12051C2E:
    eax = MEM32(edi + 0x25C); /* 0x12051C2E: mov eax, dword ptr [edi + 0x25c] */
    esi = MEM32(ebp + 0xC); /* 0x12051C34: mov esi, dword ptr [ebp + 0xc] */
L_12051C37:
    /* cmp MEM32(eax), esi */ /* 0x12051C37: cmp dword ptr [eax], esi */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12051C43; /* 0x12051C39: je 0x12051c43 */
L_12051C3B:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x12051C3B: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x14u; /* 0x12051C3C: add eax, 0x14 */
    _flag_k = FK_ADD;
    /* cmp ecx, edx */ /* 0x12051C3F: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12051C37; /* 0x12051C41: jb 0x12051c37 */
L_12051C43:
    /* cmp ecx, edx */ /* 0x12051C43: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12051C4E; /* 0x12051C45: jne 0x12051c4e */
L_12051C47:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12051C47: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_12051D9F; /* 0x12051C49: jmp 0x12051d9f */
L_12051C4E:
    eax = MEM32(edi + 0x25C); /* 0x12051C4E: mov eax, dword ptr [edi + 0x25c] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x14u); /* 0x12051C54: imul ecx, ecx, 0x14 */
    esi = MEM32(eax + ecx + 0x4); /* 0x12051C57: mov esi, dword ptr [eax + ecx + 4] */
    eax = MEM32(eax + ecx + 0x8); /* 0x12051C5B: mov eax, dword ptr [eax + ecx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x12051C5F: add eax, esi */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x18)) = esi; /* 0x12051C61: mov dword ptr [ebp - 0x18], esi */
    MEM32(ebp + (-0x14)) = eax; /* 0x12051C64: mov dword ptr [ebp - 0x14], eax */
    MEM8(ebp + (-0x5)) = (uint8_t)(1); /* 0x12051C67: mov byte ptr [ebp - 5], 1 */
L_12051C6B:
    eax = MEM32(edi + 0x234); /* 0x12051C6B: mov eax, dword ptr [edi + 0x234] */
    ecx = MEM32(eax); /* 0x12051C71: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0x810u); /* 0x12051C73: push 0x810 */
    edx = ebp + (-0x10); /* 0x12051C78: lea edx, [ebp - 0x10] */
    PUSH32(esp, edx); /* 0x12051C7B: push edx */
    PUSH32(esp, 0); /* 0x12051C7C: push 0 */
    PUSH32(esp, 0); /* 0x12051C7E: push 0 */
    PUSH32(esp, eax); /* 0x12051C80: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x2C)); /* 0x12051C81: call dword ptr [ecx + 0x2c] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0xC)) = eax; /* 0x12051C84: mov dword ptr [ebp - 0xc], eax */
    /* test eax, eax */ /* 0x12051C87: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12051D6C; /* 0x12051C89: js 0x12051d6c */
L_12051C8F:
    eax = edi + 0x24C; /* 0x12051C8F: lea eax, [edi + 0x24c] */
    PUSH32(esp, 0x10u); /* 0x12051C95: push 0x10 */
    PUSH32(esp, eax); /* 0x12051C97: push eax */
    ecx = edi; /* 0x12051C98: mov ecx, edi */
    RECOMP_CALL(sub_1204B530); /* 0x12051C9A: call 0x1204b530 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0xC)) = eax; /* 0x12051C9F: mov dword ptr [ebp - 0xc], eax */
    /* test eax, eax */ /* 0x12051CA2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12051D6C; /* 0x12051CA4: js 0x12051d6c */
L_12051CAA:
    /* cmp esi, MEM32(ebp + (-0x14)) */ /* 0x12051CAA: cmp esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_12051D6C; /* 0x12051CAD: jae 0x12051d6c */
L_12051CB3:
    eax = esi; /* 0x12051CB3: mov eax, esi */
    eax = (uint32_t)((int32_t)eax * (int32_t)0xCu); /* 0x12051CB5: imul eax, eax, 0xc */
    MEM32(ebp + (-0x20)) = eax; /* 0x12051CB8: mov dword ptr [ebp - 0x20], eax */
L_12051CBB:
    edx = MEM32(edi + 0x24C); /* 0x12051CBB: mov edx, dword ptr [edi + 0x24c] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x12051CC1: add edx, eax */
    _flag_k = FK_ADD;
    /* cmp MEM8(ebp + (-0x5)), 0 */ /* 0x12051CC3: cmp byte ptr [ebp - 5], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x5))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(ebp + (-0x1C)) = edx; /* 0x12051CC7: mov dword ptr [ebp - 0x1c], edx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_12051CDD; /* 0x12051CCA: jne 0x12051cdd */
L_12051CCC:
    ecx = MEM32(ebp + 0xC); /* 0x12051CCC: mov ecx, dword ptr [ebp + 0xc] */
    eax = MEM32(edi + 0x254); /* 0x12051CCF: mov eax, dword ptr [edi + 0x254] */
    /* cmp MEM32(eax + esi * 4), ecx */ /* 0x12051CD5: cmp dword ptr [eax + esi*4], ecx */
    _flag_a = (uint32_t)(MEM32(eax + esi * 4)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0x14)); /* 0x12051CD8: mov ecx, dword ptr [ebp - 0x14] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_12051D57; /* 0x12051CDB: jne 0x12051d57 */
L_12051CDD:
    eax = MEM32(edi + 0x238); /* 0x12051CDD: mov eax, dword ptr [edi + 0x238] */
    ecx = MEM32(edx); /* 0x12051CE3: mov ecx, dword ptr [edx] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax); /* 0x12051CE5: imul ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + (-0x10)); /* 0x12051CE8: add ecx, dword ptr [ebp - 0x10] */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x12051CEB: push eax */
    PUSH32(esp, ecx); /* 0x12051CEC: push ecx */
    PUSH32(esp, ebx); /* 0x12051CED: push ebx */
    RECOMP_CALL(sub_121BF440); /* 0x12051CEE: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi + 0x238); /* 0x12051CF3: mov ecx, dword ptr [edi + 0x238] */
    eax = MEM32(ebp + (-0x1C)); /* 0x12051CF9: mov eax, dword ptr [ebp - 0x1c] */
    eax = MEM32(eax + 0x4); /* 0x12051CFC: mov eax, dword ptr [eax + 4] */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx); /* 0x12051CFF: imul eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x10)); /* 0x12051D02: add eax, dword ptr [ebp - 0x10] */
    _flag_k = FK_ADD;
    PUSH32(esp, ecx); /* 0x12051D05: push ecx */
    esi = ecx + ebx; /* 0x12051D06: lea esi, [ecx + ebx] */
    PUSH32(esp, eax); /* 0x12051D09: push eax */
    PUSH32(esp, esi); /* 0x12051D0A: push esi */
    RECOMP_CALL(sub_121BF440); /* 0x12051D0B: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi + 0x238); /* 0x12051D10: mov ecx, dword ptr [edi + 0x238] */
    eax = MEM32(ebp + (-0x1C)); /* 0x12051D16: mov eax, dword ptr [ebp - 0x1c] */
    eax = MEM32(eax + 0x8); /* 0x12051D19: mov eax, dword ptr [eax + 8] */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx); /* 0x12051D1C: imul eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x10)); /* 0x12051D1F: add eax, dword ptr [ebp - 0x10] */
    _flag_k = FK_ADD;
    PUSH32(esp, ecx); /* 0x12051D22: push ecx */
    PUSH32(esp, eax); /* 0x12051D23: push eax */
    eax = ecx + esi; /* 0x12051D24: lea eax, [ecx + esi] */
    PUSH32(esp, eax); /* 0x12051D27: push eax */
    RECOMP_CALL(sub_121BF440); /* 0x12051D28: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x230); /* 0x12051D2D: mov eax, dword ptr [edi + 0x230] */
    ecx = MEM32(eax); /* 0x12051D33: mov ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x24u; /* 0x12051D35: add esp, 0x24 */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(edi + 0x238)); /* 0x12051D38: push dword ptr [edi + 0x238] */
    PUSH32(esp, ebx); /* 0x12051D3E: push ebx */
    PUSH32(esp, 1); /* 0x12051D3F: push 1 */
    PUSH32(esp, 4); /* 0x12051D41: push 4 */
    PUSH32(esp, eax); /* 0x12051D43: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x14C)); /* 0x12051D44: call dword ptr [ecx + 0x14c] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0xC)) = eax; /* 0x12051D4A: mov dword ptr [ebp - 0xc], eax */
    /* test eax, eax */ /* 0x12051D4D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12051D6C; /* 0x12051D4F: js 0x12051d6c */
L_12051D51:
    esi = MEM32(ebp + (-0x18)); /* 0x12051D51: mov esi, dword ptr [ebp - 0x18] */
    ecx = MEM32(ebp + (-0x14)); /* 0x12051D54: mov ecx, dword ptr [ebp - 0x14] */
L_12051D57:
    eax = MEM32(ebp + (-0x20)); /* 0x12051D57: mov eax, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x12051D5A: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x12051D5B: add eax, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x18)) = esi; /* 0x12051D5E: mov dword ptr [ebp - 0x18], esi */
    MEM32(ebp + (-0x20)) = eax; /* 0x12051D61: mov dword ptr [ebp - 0x20], eax */
    /* cmp esi, ecx */ /* 0x12051D64: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12051CBB; /* 0x12051D66: jb 0x12051cbb */
L_12051D6C:
    ebx = MEM32(ebp + (-0xC)); /* 0x12051D6C: mov ebx, dword ptr [ebp - 0xc] */
L_12051D6F:
    /* cmp MEM32(ebp + (-0x10)), 0 */ /* 0x12051D6F: cmp dword ptr [ebp - 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12051D81; /* 0x12051D73: je 0x12051d81 */
L_12051D75:
    eax = MEM32(edi + 0x234); /* 0x12051D75: mov eax, dword ptr [edi + 0x234] */
    ecx = MEM32(eax); /* 0x12051D7B: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x12051D7D: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x12051D7E: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
L_12051D81:
    /* cmp MEM32(edi + 0x24C), 0 */ /* 0x12051D81: cmp dword ptr [edi + 0x24c], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x24C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12051D9D; /* 0x12051D88: je 0x12051d9d */
L_12051D8A:
    eax = MEM32(edi + 0x248); /* 0x12051D8A: mov eax, dword ptr [edi + 0x248] */
    ecx = MEM32(eax); /* 0x12051D90: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x12051D92: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x12051D93: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(edi + 0x24C)); _flag_b = (uint32_t)(0);
    MEM32(edi + 0x24C) = MEM32(edi + 0x24C) & 0; /* 0x12051D96: and dword ptr [edi + 0x24c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_12051D9D:
    eax = ebx; /* 0x12051D9D: mov eax, ebx */
L_12051D9F:
    esp = ebp + (-0x2C); /* 0x12051D9F: lea esp, [ebp - 0x2c] */
    edi = POP32_VAL(esp); /* 0x12051DA2: pop edi */
    esi = POP32_VAL(esp); /* 0x12051DA3: pop esi */
    ebx = POP32_VAL(esp); /* 0x12051DA4: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x12051DA5: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x12051DA8: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x12051DAA: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12051DAF: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x12051DB0: ret 8 */
L_12051DB3:
    RECOMP_ICALL(MEM32(ecx + 0x15C)); /* 0x12051DB3: call dword ptr [ecx + 0x15c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(edi + 0x238)); /* 0x12051DB9: push dword ptr [edi + 0x238] */
    eax = MEM32(edi + 0x230); /* 0x12051DBF: mov eax, dword ptr [edi + 0x230] */
    ecx = MEM32(eax); /* 0x12051DC5: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0); /* 0x12051DC7: push 0 */
    PUSH32(esp, MEM32(edi + 0x234)); /* 0x12051DC9: push dword ptr [edi + 0x234] */
    PUSH32(esp, 0); /* 0x12051DCF: push 0 */
    PUSH32(esp, eax); /* 0x12051DD1: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x190)); /* 0x12051DD2: call dword ptr [ecx + 0x190] */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x230); /* 0x12051DD8: mov eax, dword ptr [edi + 0x230] */
    PUSH32(esp, MEM32(edi + 0x248)); /* 0x12051DDE: push dword ptr [edi + 0x248] */
    ecx = MEM32(eax); /* 0x12051DE4: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x12051DE6: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x1A0)); /* 0x12051DE7: call dword ptr [ecx + 0x1a0] */
    RECOMP_FLAGS_IN();
    /* test MEM8(edi + 0x218), 0x10u */ /* 0x12051DED: test byte ptr [edi + 0x218], 0x10 */
    _flag_a = (uint32_t)(MEM8(edi + 0x218)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12051E8C; /* 0x12051DF4: je 0x12051e8c */
L_12051DFA:
    edx = MEM32(ebp + 0xC); /* 0x12051DFA: mov edx, dword ptr [ebp + 0xc] */
    /* cmp edx, MEM32(edi + 0x260) */ /* 0x12051DFD: cmp edx, dword ptr [edi + 0x260] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(edi + 0x260));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_12051E19; /* 0x12051E03: jae 0x12051e19 */
L_12051E05:
    eax = MEM32(edi + 0x25C); /* 0x12051E05: mov eax, dword ptr [edi + 0x25c] */
    ecx = edx; /* 0x12051E0B: mov ecx, edx */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x14u); /* 0x12051E0D: imul ecx, ecx, 0x14 */
    /* cmp MEM32(ecx + eax), edx */ /* 0x12051E10: cmp dword ptr [ecx + eax], edx */
    _flag_a = (uint32_t)(MEM32(ecx + eax)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12051E19; /* 0x12051E13: jne 0x12051e19 */
L_12051E15:
    esi = edx; /* 0x12051E15: mov esi, edx */
    goto L_12051E39; /* 0x12051E17: jmp 0x12051e39 */
L_12051E19:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x12051E19: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi + 0x260), ebx */ /* 0x12051E1B: cmp dword ptr [edi + 0x260], ebx */
    _flag_a = (uint32_t)(MEM32(edi + 0x260)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_12051E39; /* 0x12051E21: jbe 0x12051e39 */
L_12051E23:
    eax = MEM32(edi + 0x25C); /* 0x12051E23: mov eax, dword ptr [edi + 0x25c] */
L_12051E29:
    /* cmp MEM32(eax), edx */ /* 0x12051E29: cmp dword ptr [eax], edx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12051E39; /* 0x12051E2B: je 0x12051e39 */
L_12051E2D:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x12051E2D: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x14u; /* 0x12051E2E: add eax, 0x14 */
    _flag_k = FK_ADD;
    /* cmp esi, MEM32(edi + 0x260) */ /* 0x12051E31: cmp esi, dword ptr [edi + 0x260] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi + 0x260));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12051E29; /* 0x12051E37: jb 0x12051e29 */
L_12051E39:
    /* cmp esi, MEM32(edi + 0x260) */ /* 0x12051E39: cmp esi, dword ptr [edi + 0x260] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi + 0x260));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_12051D6F; /* 0x12051E3F: jae 0x12051d6f */
L_12051E45:
    eax = MEM32(edi + 0x25C); /* 0x12051E45: mov eax, dword ptr [edi + 0x25c] */
    esi = (uint32_t)((int32_t)esi * (int32_t)0x14u); /* 0x12051E4B: imul esi, esi, 0x14 */
    /* cmp MEM32(eax + esi + 0x8), ebx */ /* 0x12051E4E: cmp dword ptr [eax + esi + 8], ebx */
    _flag_a = (uint32_t)(MEM32(eax + esi + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_12051D6F; /* 0x12051E52: jbe 0x12051d6f */
L_12051E58:
    PUSH32(esp, MEM32(eax + esi + 0x8)); /* 0x12051E58: push dword ptr [eax + esi + 8] */
    eax = MEM32(eax + esi + 0x4); /* 0x12051E5C: mov eax, dword ptr [eax + esi + 4] */
    ecx = MEM32(edi + 0x230); /* 0x12051E60: mov ecx, dword ptr [edi + 0x230] */
    eax = (uint32_t)((int32_t)eax * (int32_t)3); /* 0x12051E66: imul eax, eax, 3 */
    edx = MEM32(ecx); /* 0x12051E69: mov edx, dword ptr [ecx] */
    PUSH32(esp, eax); /* 0x12051E6B: push eax */
    eax = MEM32(edi + 0x25C); /* 0x12051E6C: mov eax, dword ptr [edi + 0x25c] */
    PUSH32(esp, MEM32(eax + esi + 0x10)); /* 0x12051E72: push dword ptr [eax + esi + 0x10] */
    PUSH32(esp, MEM32(eax + esi + 0xC)); /* 0x12051E76: push dword ptr [eax + esi + 0xc] */
    PUSH32(esp, 0); /* 0x12051E7A: push 0 */
    PUSH32(esp, 4); /* 0x12051E7C: push 4 */
    PUSH32(esp, ecx); /* 0x12051E7E: push ecx */
    RECOMP_ICALL(MEM32(edx + 0x148)); /* 0x12051E7F: call dword ptr [edx + 0x148] */
    RECOMP_FLAGS_IN();
L_12051E85:
    ebx = eax; /* 0x12051E85: mov ebx, eax */
    RECOMP_BACKEDGE();
    goto L_12051D6F; /* 0x12051E87: jmp 0x12051d6f */
L_12051E8C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x12051E8C: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x12051E8E: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi + 0x264), ebx */ /* 0x12051E90: cmp dword ptr [edi + 0x264], ebx */
    _flag_a = (uint32_t)(MEM32(edi + 0x264)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_12051D6F; /* 0x12051E96: jbe 0x12051d6f */
L_12051E9C:
    ecx = MEM32(ebp + 0xC); /* 0x12051E9C: mov ecx, dword ptr [ebp + 0xc] */
L_12051E9F:
    eax = MEM32(edi + 0x254); /* 0x12051E9F: mov eax, dword ptr [edi + 0x254] */
    /* cmp MEM32(eax + esi * 4), ecx */ /* 0x12051EA5: cmp dword ptr [eax + esi*4], ecx */
    _flag_a = (uint32_t)(MEM32(eax + esi * 4)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12051EAD; /* 0x12051EA8: jne 0x12051ead */
L_12051EAA:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x12051EAA: inc ebx */
    _flag_k = FK_INC;
    goto L_12051EE7; /* 0x12051EAB: jmp 0x12051ee7 */
L_12051EAD:
    /* test ebx, ebx */ /* 0x12051EAD: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12051EE5; /* 0x12051EAF: je 0x12051ee5 */
L_12051EB1:
    ecx = MEM32(edi + 0x230); /* 0x12051EB1: mov ecx, dword ptr [edi + 0x230] */
    edx = MEM32(ecx); /* 0x12051EB7: mov edx, dword ptr [ecx] */
    eax = esi; /* 0x12051EB9: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x12051EBB: sub eax, ebx */
    _flag_k = FK_CMP;
    eax = (uint32_t)((int32_t)eax * (int32_t)3); /* 0x12051EBD: imul eax, eax, 3 */
    PUSH32(esp, ebx); /* 0x12051EC0: push ebx */
    PUSH32(esp, eax); /* 0x12051EC1: push eax */
    PUSH32(esp, MEM32(edi + 0x23C)); /* 0x12051EC2: push dword ptr [edi + 0x23c] */
    PUSH32(esp, 0); /* 0x12051EC8: push 0 */
    PUSH32(esp, 0); /* 0x12051ECA: push 0 */
    PUSH32(esp, 4); /* 0x12051ECC: push 4 */
    PUSH32(esp, ecx); /* 0x12051ECE: push ecx */
    RECOMP_ICALL(MEM32(edx + 0x148)); /* 0x12051ECF: call dword ptr [edx + 0x148] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x12051ED5: mov ebx, eax */
    MEM32(ebp + (-0xC)) = ebx; /* 0x12051ED7: mov dword ptr [ebp - 0xc], ebx */
    /* test ebx, ebx */ /* 0x12051EDA: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12051D6F; /* 0x12051EDC: js 0x12051d6f */
L_12051EE2:
    ecx = MEM32(ebp + 0xC); /* 0x12051EE2: mov ecx, dword ptr [ebp + 0xc] */
L_12051EE5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x12051EE5: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_12051EE7:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x12051EE7: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(edi + 0x264) */ /* 0x12051EE8: cmp esi, dword ptr [edi + 0x264] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi + 0x264));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12051E9F; /* 0x12051EEE: jb 0x12051e9f */
L_12051EF0:
    /* test ebx, ebx */ /* 0x12051EF0: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_12051D6C; /* 0x12051EF2: je 0x12051d6c */
L_12051EF8:
    eax = MEM32(edi + 0x230); /* 0x12051EF8: mov eax, dword ptr [edi + 0x230] */
    ecx = MEM32(eax); /* 0x12051EFE: mov ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ebx; /* 0x12051F00: sub esi, ebx */
    _flag_k = FK_CMP;
    esi = (uint32_t)((int32_t)esi * (int32_t)3); /* 0x12051F02: imul esi, esi, 3 */
    PUSH32(esp, ebx); /* 0x12051F05: push ebx */
    PUSH32(esp, esi); /* 0x12051F06: push esi */
    PUSH32(esp, MEM32(edi + 0x23C)); /* 0x12051F07: push dword ptr [edi + 0x23c] */
    PUSH32(esp, 0); /* 0x12051F0D: push 0 */
    PUSH32(esp, 0); /* 0x12051F0F: push 0 */
    PUSH32(esp, 4); /* 0x12051F11: push 4 */
    PUSH32(esp, eax); /* 0x12051F13: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x148)); /* 0x12051F14: call dword ptr [ecx + 0x148] */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_12051E85; /* 0x12051F1A: jmp 0x12051e85 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_12051F24(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12051F24u);

L_12051F24:
    edi = edi; /* 0x12051F24: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12051F26: push ebp */
    ebp = esp; /* 0x12051F27: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x12051F29: push ebx */
    PUSH32(esp, esi); /* 0x12051F2A: push esi */
    esi = MEM32(ebp + 0x8); /* 0x12051F2B: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x12051F2E: push edi */
    PUSH32(esp, esi); /* 0x12051F2F: push esi */
    edi = ecx; /* 0x12051F30: mov edi, ecx */
    RECOMP_CALL(sub_1202CA43); /* 0x12051F32: call 0x1202ca43 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12051F37: push dword ptr [ebp + 0xc] */
    ecx = edi + 0xC4; /* 0x12051F3A: lea ecx, [edi + 0xc4] */
    RECOMP_CALL(sub_1202CA43); /* 0x12051F40: call 0x1202ca43 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(edi + 0x188)); _flag_b = (uint32_t)(0);
    MEM32(edi + 0x188) = MEM32(edi + 0x188) & 0; /* 0x12051F45: and dword ptr [edi + 0x188], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(esi), 0xFFu */ /* 0x12051F4C: cmp word ptr [esi], 0xff */
    _flag_a = (uint32_t)(MEM16(esi)) << 16; _flag_b = (uint32_t)(0xFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12051FAA; /* 0x12051F51: je 0x12051faa */
L_12051F53:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 6; /* 0x12051F53: add esi, 6 */
    _flag_k = FK_ADD;
L_12051F56:
    eax = (uint32_t)MEM8(esi + 0x1); /* 0x12051F56: movzx eax, byte ptr [esi + 1] */
    PUSH32(esp, eax); /* 0x12051F5A: push eax */
    eax = (uint32_t)MEM8(esi); /* 0x12051F5B: movzx eax, byte ptr [esi] */
    PUSH32(esp, eax); /* 0x12051F5E: push eax */
    ecx = edi + 0xC4; /* 0x12051F5F: lea ecx, [edi + 0xc4] */
    RECOMP_CALL(sub_1204BE0E); /* 0x12051F65: call 0x1204be0e */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x12051F6A: mov edx, eax */
    /* test edx, edx */ /* 0x12051F6C: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12051F9F; /* 0x12051F6E: je 0x12051f9f */
L_12051F70:
    /* cmp MEM8(esi + (-0x1)), 4 */ /* 0x12051F70: cmp byte ptr [esi - 1], 4 */
    _flag_a = (uint32_t)(MEM8(esi + (-0x1))) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12051F9F; /* 0x12051F74: je 0x12051f9f */
L_12051F76:
    /* cmp MEM8(edx + 0x5), 4 */ /* 0x12051F76: cmp byte ptr [edx + 5], 4 */
    _flag_a = (uint32_t)(MEM8(edx + 0x5)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12051F9F; /* 0x12051F7A: je 0x12051f9f */
L_12051F7C:
    eax = MEM32(edi + 0x188); /* 0x12051F7C: mov eax, dword ptr [edi + 0x188] */
    ecx = esi + (-0x6); /* 0x12051F82: lea ecx, [esi - 6] */
    MEM32(edi + eax * 4 + 0x18C) = ecx; /* 0x12051F85: mov dword ptr [edi + eax*4 + 0x18c], ecx */
    eax = MEM32(edi + 0x188); /* 0x12051F8C: mov eax, dword ptr [edi + 0x188] */
    MEM32(edi + eax * 4 + 0x290) = edx; /* 0x12051F92: mov dword ptr [edi + eax*4 + 0x290], edx */
    _flag_a = (uint32_t)(MEM32(edi + 0x188)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x188) = MEM32(edi + 0x188) + 1; /* 0x12051F99: inc dword ptr [edi + 0x188] */
    _flag_k = FK_INC;
L_12051F9F:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 8; /* 0x12051F9F: add esi, 8 */
    _flag_k = FK_ADD;
    /* cmp MEM16(esi + (-0x6)), 0xFFu */ /* 0x12051FA2: cmp word ptr [esi - 6], 0xff */
    _flag_a = (uint32_t)(MEM16(esi + (-0x6))) << 16; _flag_b = (uint32_t)(0xFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_12051F56; /* 0x12051FA8: jne 0x12051f56 */
L_12051FAA:
    eax = edi; /* 0x12051FAA: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x12051FAC: pop edi */
    esi = POP32_VAL(esp); /* 0x12051FAD: pop esi */
    ebx = POP32_VAL(esp); /* 0x12051FAE: pop ebx */
    ebp = POP32_VAL(esp); /* 0x12051FAF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x12051FB0: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_12051FB8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12051FB8u);

L_12051FB8:
    edi = edi; /* 0x12051FB8: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12051FBA: push ebp */
    ebp = esp; /* 0x12051FBB: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x5BCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x5BCu; /* 0x12051FBD: sub esp, 0x5bc */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x12051FC3: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x12051FC8: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x12051FCA: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x12051FCD: push ebx */
    ebx = ecx; /* 0x12051FCE: mov ebx, ecx */
    eax = MEM32(ebx + 0x268); /* 0x12051FD0: mov eax, dword ptr [ebx + 0x268] */
    PUSH32(esp, esi); /* 0x12051FD6: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x12051FD7: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x12051FD9: push edi */
    MEM32(ebp + (-0x5A4)) = eax; /* 0x12051FDA: mov dword ptr [ebp - 0x5a4], eax */
    MEM32(ebp + (-0x5BC)) = eax; /* 0x12051FE0: mov dword ptr [ebp - 0x5bc], eax */
    MEM32(ebp + (-0x5B4)) = eax; /* 0x12051FE6: mov dword ptr [ebp - 0x5b4], eax */
    eax = MEM32(ebx + 0x240); /* 0x12051FEC: mov eax, dword ptr [ebx + 0x240] */
    edi = ebx + 0x8; /* 0x12051FF2: lea edi, [ebx + 8] */
    MEM32(ebp + (-0x5A8)) = esi; /* 0x12051FF5: mov dword ptr [ebp - 0x5a8], esi */
    MEM32(ebp + (-0x59C)) = esi; /* 0x12051FFB: mov dword ptr [ebp - 0x59c], esi */
    MEM32(ebp + (-0x598)) = esi; /* 0x12052001: mov dword ptr [ebp - 0x598], esi */
    MEM32(ebp + (-0x5B8)) = eax; /* 0x12052007: mov dword ptr [ebp - 0x5b8], eax */
    MEM32(ebp + (-0x594)) = esi; /* 0x1205200D: mov dword ptr [ebp - 0x594], esi */
    MEM32(ebp + (-0x5B0)) = esi; /* 0x12052013: mov dword ptr [ebp - 0x5b0], esi */
    MEM32(ebp + (-0x5A0)) = esi; /* 0x12052019: mov dword ptr [ebp - 0x5a0], esi */
    MEM32(ebp + (-0x5AC)) = esi; /* 0x1205201F: mov dword ptr [ebp - 0x5ac], esi */
    /* cmp MEM32(edi), esi */ /* 0x12052025: cmp dword ptr [edi], esi */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12052059; /* 0x12052027: jne 0x12052059 */
L_12052029:
    PUSH32(esp, 1); /* 0x12052029: push 1 */
    RECOMP_CALL(sub_12019381); /* 0x1205202B: call 0x12019381 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx + 0x230); /* 0x12052030: mov ecx, dword ptr [ebx + 0x230] */
    edx = MEM32(ecx); /* 0x12052036: mov edx, dword ptr [ecx] */
    PUSH32(esp, edi); /* 0x12052038: push edi */
    eax = ebx + 0xC; /* 0x12052039: lea eax, [ebx + 0xc] */
    PUSH32(esp, eax); /* 0x1205203C: push eax */
    PUSH32(esp, ecx); /* 0x1205203D: push ecx */
    RECOMP_ICALL(MEM32(edx + 0x158)); /* 0x1205203E: call dword ptr [edx + 0x158] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x12052044: push 0 */
    esi = eax; /* 0x12052046: mov esi, eax */
    RECOMP_CALL(sub_12019381); /* 0x12052048: call 0x12019381 */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x1205204D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_12052057; /* 0x1205204F: jns 0x12052057 */
L_12052051:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x12052051: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi) = esi; /* 0x12052053: mov dword ptr [edi], esi */
    goto L_12052059; /* 0x12052055: jmp 0x12052059 */
L_12052057:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x12052057: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_12052059:
    edi = MEM32(ebp + 0x8); /* 0x12052059: mov edi, dword ptr [ebp + 8] */
    /* cmp edi, 0xFFFFFFFFu */ /* 0x1205205C: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120525AE; /* 0x1205205F: jae 0x120525ae */
L_12052065:
    eax = MEM32(ebp + 0xC); /* 0x12052065: mov eax, dword ptr [ebp + 0xc] */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x12052068: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120525AE; /* 0x1205206B: jae 0x120525ae */
L_12052071:
    /* cmp MEM32(ebx + 0x268), edi */ /* 0x12052071: cmp dword ptr [ebx + 0x268], edi */
    _flag_a = (uint32_t)(MEM32(ebx + 0x268)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_12052247; /* 0x12052077: jae 0x12052247 */
L_1205207D:
    ecx = MEM32(ebx + 0x230); /* 0x1205207D: mov ecx, dword ptr [ebx + 0x230] */
    edx = MEM32(ecx); /* 0x12052083: mov edx, dword ptr [ecx] */
    PUSH32(esp, esi); /* 0x12052085: push esi */
    eax = ebp + (-0x594); /* 0x12052086: lea eax, [ebp - 0x594] */
    PUSH32(esp, eax); /* 0x1205208C: push eax */
    PUSH32(esp, MEM32(ebx + 0x21C)); /* 0x1205208D: push dword ptr [ebx + 0x21c] */
    eax = edi; /* 0x12052093: mov eax, edi */
    eax = (uint32_t)((int32_t)eax * (int32_t)0xCu); /* 0x12052095: imul eax, eax, 0xc */
    PUSH32(esp, 0x66u); /* 0x12052098: push 0x66 */
    PUSH32(esp, MEM32(ebx + 0x224)); /* 0x1205209A: push dword ptr [ebx + 0x224] */
    PUSH32(esp, eax); /* 0x120520A0: push eax */
    PUSH32(esp, ecx); /* 0x120520A1: push ecx */
    RECOMP_ICALL(MEM32(edx + 0x6C)); /* 0x120520A2: call dword ptr [edx + 0x6c] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120520A5: mov esi, eax */
    /* test esi, esi */ /* 0x120520A7: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120525B3; /* 0x120520A9: js 0x120525b3 */
L_120520AF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120520AF: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebx + 0x264), esi */ /* 0x120520B1: cmp dword ptr [ebx + 0x264], esi */
    _flag_a = (uint32_t)(MEM32(ebx + 0x264)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1205217F; /* 0x120520B7: jbe 0x1205217f */
L_120520BD:
    eax = MEM32(ebx + 0x248); /* 0x120520BD: mov eax, dword ptr [ebx + 0x248] */
    ecx = MEM32(eax); /* 0x120520C3: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0x800u); /* 0x120520C5: push 0x800 */
    edx = ebp + (-0x5B0); /* 0x120520CA: lea edx, [ebp - 0x5b0] */
    PUSH32(esp, edx); /* 0x120520D0: push edx */
    PUSH32(esp, esi); /* 0x120520D1: push esi */
    PUSH32(esp, esi); /* 0x120520D2: push esi */
    PUSH32(esp, eax); /* 0x120520D3: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x2C)); /* 0x120520D4: call dword ptr [ecx + 0x2c] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120520D7: mov esi, eax */
    /* test esi, esi */ /* 0x120520D9: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120525B3; /* 0x120520DB: js 0x120525b3 */
L_120520E1:
    eax = MEM32(ebp + (-0x594)); /* 0x120520E1: mov eax, dword ptr [ebp - 0x594] */
    ecx = MEM32(eax); /* 0x120520E7: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0x800u); /* 0x120520E9: push 0x800 */
    edx = ebp + (-0x5A0); /* 0x120520EE: lea edx, [ebp - 0x5a0] */
    PUSH32(esp, edx); /* 0x120520F4: push edx */
    PUSH32(esp, 0); /* 0x120520F5: push 0 */
    PUSH32(esp, 0); /* 0x120520F7: push 0 */
    PUSH32(esp, eax); /* 0x120520F9: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x2C)); /* 0x120520FA: call dword ptr [ecx + 0x2c] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120520FD: mov esi, eax */
    /* test esi, esi */ /* 0x120520FF: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120525B3; /* 0x12052101: js 0x120525b3 */
L_12052107:
    eax = MEM32(ebx + 0x264); /* 0x12052107: mov eax, dword ptr [ebx + 0x264] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0xCu); /* 0x1205210D: imul eax, eax, 0xc */
    PUSH32(esp, eax); /* 0x12052110: push eax */
    PUSH32(esp, MEM32(ebp + (-0x5B0))); /* 0x12052111: push dword ptr [ebp - 0x5b0] */
    PUSH32(esp, MEM32(ebp + (-0x5A0))); /* 0x12052117: push dword ptr [ebp - 0x5a0] */
    RECOMP_CALL(sub_121BF440); /* 0x1205211D: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx + 0x264); /* 0x12052122: mov ecx, dword ptr [ebx + 0x264] */
    eax = edi; /* 0x12052128: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1205212A: sub eax, ecx */
    _flag_k = FK_CMP;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xCu); /* 0x1205212C: imul ecx, ecx, 0xc */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x5A0)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + (-0x5A0)); /* 0x1205212F: add ecx, dword ptr [ebp - 0x5a0] */
    _flag_k = FK_ADD;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xCu); /* 0x12052135: imul eax, eax, 0xc */
    PUSH32(esp, eax); /* 0x12052138: push eax */
    PUSH32(esp, 0); /* 0x12052139: push 0 */
    PUSH32(esp, ecx); /* 0x1205213B: push ecx */
    RECOMP_CALL(sub_121BF434); /* 0x1205213C: call 0x121bf434 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x594)); /* 0x12052141: mov eax, dword ptr [ebp - 0x594] */
    ecx = MEM32(eax); /* 0x12052147: mov ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x12052149: add esp, 0x18 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1205214C: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x1205214D: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x12052150: mov esi, eax */
    /* test esi, esi */ /* 0x12052152: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120525B3; /* 0x12052154: js 0x120525b3 */
L_1205215A:
    eax = MEM32(ebx + 0x248); /* 0x1205215A: mov eax, dword ptr [ebx + 0x248] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x5A0))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x5A0)) = MEM32(ebp + (-0x5A0)) & 0; /* 0x12052160: and dword ptr [ebp - 0x5a0], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(eax); /* 0x12052167: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x12052169: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x1205216A: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1205216D: mov esi, eax */
    /* test esi, esi */ /* 0x1205216F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120525B3; /* 0x12052171: js 0x120525b3 */
L_12052177:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x12052177: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x5B0)) = esi; /* 0x12052179: mov dword ptr [ebp - 0x5b0], esi */
L_1205217F:
    ecx = MEM32(ebx + 0x248); /* 0x1205217F: mov ecx, dword ptr [ebx + 0x248] */
    /* test ecx, ecx */ /* 0x12052185: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12052195; /* 0x12052187: je 0x12052195 */
L_12052189:
    eax = MEM32(ecx); /* 0x12052189: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x1205218B: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1205218C: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    MEM32(ebx + 0x248) = esi; /* 0x1205218F: mov dword ptr [ebx + 0x248], esi */
L_12052195:
    /* test MEM8(ebx + 0x218), 1 */ /* 0x12052195: test byte ptr [ebx + 0x218], 1 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x218)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = MEM32(ebp + (-0x594)); /* 0x1205219C: mov eax, dword ptr [ebp - 0x594] */
    MEM32(ebx + 0x248) = eax; /* 0x120521A2: mov dword ptr [ebx + 0x248], eax */
    MEM32(ebp + (-0x594)) = esi; /* 0x120521A8: mov dword ptr [ebp - 0x594], esi */
    MEM32(ebx + 0x268) = edi; /* 0x120521AE: mov dword ptr [ebx + 0x268], edi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_120521D8; /* 0x120521B4: je 0x120521d8 */
L_120521B6:
    eax = ebp + (-0x5A4); /* 0x120521B6: lea eax, [ebp - 0x5a4] */
    PUSH32(esp, eax); /* 0x120521BC: push eax */
    PUSH32(esp, MEM32(ebx + 0x264)); /* 0x120521BD: push dword ptr [ebx + 0x264] */
    eax = ebx + 0x250; /* 0x120521C3: lea eax, [ebx + 0x250] */
    PUSH32(esp, edi); /* 0x120521C9: push edi */
    PUSH32(esp, eax); /* 0x120521CA: push eax */
    RECOMP_CALL(sub_1204CE32); /* 0x120521CB: call 0x1204ce32 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120521D0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1205227A; /* 0x120521D2: je 0x1205227a */
L_120521D8:
    /* test MEM8(ebx + 0x218), 4 */ /* 0x120521D8: test byte ptr [ebx + 0x218], 4 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x218)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1205221D; /* 0x120521DF: je 0x1205221d */
L_120521E1:
    eax = ebp + (-0x5BC); /* 0x120521E1: lea eax, [ebp - 0x5bc] */
    PUSH32(esp, eax); /* 0x120521E7: push eax */
    PUSH32(esp, MEM32(ebx + 0x264)); /* 0x120521E8: push dword ptr [ebx + 0x264] */
    esi = ebx + 0x254; /* 0x120521EE: lea esi, [ebx + 0x254] */
    PUSH32(esp, edi); /* 0x120521F4: push edi */
    PUSH32(esp, esi); /* 0x120521F5: push esi */
    RECOMP_CALL(sub_1204CEE9); /* 0x120521F6: call 0x1204cee9 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120521FB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1205227A; /* 0x120521FD: je 0x1205227a */
L_120521FF:
    ecx = MEM32(ebx + 0x264); /* 0x120521FF: mov ecx, dword ptr [ebx + 0x264] */
    eax = edi; /* 0x12052205: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x12052207: sub eax, ecx */
    _flag_k = FK_CMP;
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x12052209: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x12052209: shl eax, 2 */
    PUSH32(esp, eax); /* 0x1205220C: push eax */
    eax = MEM32(esi); /* 0x1205220D: mov eax, dword ptr [esi] */
    eax = eax + ecx * 4; /* 0x1205220F: lea eax, [eax + ecx*4] */
    PUSH32(esp, 0); /* 0x12052212: push 0 */
    PUSH32(esp, eax); /* 0x12052214: push eax */
    RECOMP_CALL(sub_121BF434); /* 0x12052215: call 0x121bf434 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1205221A: add esp, 0xc */
    _flag_k = FK_ADD;
L_1205221D:
    /* test MEM8(ebx + 0x218), 8 */ /* 0x1205221D: test byte ptr [ebx + 0x218], 8 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x218)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12052244; /* 0x12052224: je 0x12052244 */
L_12052226:
    eax = ebp + (-0x5B4); /* 0x12052226: lea eax, [ebp - 0x5b4] */
    PUSH32(esp, eax); /* 0x1205222C: push eax */
    PUSH32(esp, MEM32(ebx + 0x264)); /* 0x1205222D: push dword ptr [ebx + 0x264] */
    eax = ebx + 0x258; /* 0x12052233: lea eax, [ebx + 0x258] */
    PUSH32(esp, edi); /* 0x12052239: push edi */
    PUSH32(esp, eax); /* 0x1205223A: push eax */
    RECOMP_CALL(sub_1204CD65); /* 0x1205223B: call 0x1204cd65 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12052240: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1205227A; /* 0x12052242: je 0x1205227a */
L_12052244:
    eax = MEM32(ebp + 0xC); /* 0x12052244: mov eax, dword ptr [ebp + 0xc] */
L_12052247:
    /* cmp MEM32(ebx + 0x240), eax */ /* 0x12052247: cmp dword ptr [ebx + 0x240], eax */
    _flag_a = (uint32_t)(MEM32(ebx + 0x240)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120523DB; /* 0x1205224D: jae 0x120523db */
L_12052253:
    /* test MEM8(ebx + 0x218), 2 */ /* 0x12052253: test byte ptr [ebx + 0x218], 2 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x218)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12052287; /* 0x1205225A: je 0x12052287 */
L_1205225C:
    ecx = ebp + (-0x5B8); /* 0x1205225C: lea ecx, [ebp - 0x5b8] */
    PUSH32(esp, ecx); /* 0x12052262: push ecx */
    PUSH32(esp, MEM32(ebx + 0x23C)); /* 0x12052263: push dword ptr [ebx + 0x23c] */
    PUSH32(esp, eax); /* 0x12052269: push eax */
    eax = ebx + 0x244; /* 0x1205226A: lea eax, [ebx + 0x244] */
    PUSH32(esp, eax); /* 0x12052270: push eax */
    RECOMP_CALL(sub_1204CEE9); /* 0x12052271: call 0x1204cee9 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12052276: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12052284; /* 0x12052278: jne 0x12052284 */
L_1205227A:
    esi = 0x8007000Eu; /* 0x1205227A: mov esi, 0x8007000e */
    goto L_120525B3; /* 0x1205227F: jmp 0x120525b3 */
L_12052284:
    eax = MEM32(ebp + 0xC); /* 0x12052284: mov eax, dword ptr [ebp + 0xc] */
L_12052287:
    /* test MEM8(ebx + 0x218), 0x20u */ /* 0x12052287: test byte ptr [ebx + 0x218], 0x20 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x218)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120523DB; /* 0x1205228E: jne 0x120523db */
L_12052294:
    edx = MEM32(ebx + 0x230); /* 0x12052294: mov edx, dword ptr [ebx + 0x230] */
    ecx = MEM32(edx); /* 0x1205229A: mov ecx, dword ptr [edx] */
    PUSH32(esp, 0); /* 0x1205229C: push 0 */
    eax = ebp + (-0x598); /* 0x1205229E: lea eax, [ebp - 0x598] */
    PUSH32(esp, eax); /* 0x120522A4: push eax */
    eax = MEM32(ebx + 0x238); /* 0x120522A5: mov eax, dword ptr [ebx + 0x238] */
    PUSH32(esp, MEM32(ebx + 0x220)); /* 0x120522AB: push dword ptr [ebx + 0x220] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0xC)); /* 0x120522B1: imul eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebx + 0x4)); /* 0x120522B5: push dword ptr [ebx + 4] */
    PUSH32(esp, MEM32(ebx + 0x228)); /* 0x120522B8: push dword ptr [ebx + 0x228] */
    PUSH32(esp, eax); /* 0x120522BE: push eax */
    PUSH32(esp, edx); /* 0x120522BF: push edx */
    RECOMP_ICALL(MEM32(ecx + 0x68)); /* 0x120522C0: call dword ptr [ecx + 0x68] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120522C3: mov esi, eax */
    /* test esi, esi */ /* 0x120522C5: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120525B3; /* 0x120522C7: js 0x120525b3 */
L_120522CD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120522CD: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebx + 0x23C), esi */ /* 0x120522CF: cmp dword ptr [ebx + 0x23c], esi */
    _flag_a = (uint32_t)(MEM32(ebx + 0x23C)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120523AA; /* 0x120522D5: jbe 0x120523aa */
L_120522DB:
    eax = MEM32(ebx + 0x234); /* 0x120522DB: mov eax, dword ptr [ebx + 0x234] */
    ecx = MEM32(eax); /* 0x120522E1: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0x800u); /* 0x120522E3: push 0x800 */
    edx = ebp + (-0x5A8); /* 0x120522E8: lea edx, [ebp - 0x5a8] */
    PUSH32(esp, edx); /* 0x120522EE: push edx */
    PUSH32(esp, esi); /* 0x120522EF: push esi */
    PUSH32(esp, esi); /* 0x120522F0: push esi */
    PUSH32(esp, eax); /* 0x120522F1: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x2C)); /* 0x120522F2: call dword ptr [ecx + 0x2c] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120522F5: mov esi, eax */
    /* test esi, esi */ /* 0x120522F7: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120525B3; /* 0x120522F9: js 0x120525b3 */
L_120522FF:
    eax = MEM32(ebp + (-0x598)); /* 0x120522FF: mov eax, dword ptr [ebp - 0x598] */
    ecx = MEM32(eax); /* 0x12052305: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0x800u); /* 0x12052307: push 0x800 */
    edx = ebp + (-0x59C); /* 0x1205230C: lea edx, [ebp - 0x59c] */
    PUSH32(esp, edx); /* 0x12052312: push edx */
    PUSH32(esp, 0); /* 0x12052313: push 0 */
    PUSH32(esp, 0); /* 0x12052315: push 0 */
    PUSH32(esp, eax); /* 0x12052317: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x2C)); /* 0x12052318: call dword ptr [ecx + 0x2c] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1205231B: mov esi, eax */
    /* test esi, esi */ /* 0x1205231D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120525B3; /* 0x1205231F: js 0x120525b3 */
L_12052325:
    eax = MEM32(ebx + 0x238); /* 0x12052325: mov eax, dword ptr [ebx + 0x238] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebx + 0x23C)); /* 0x1205232B: imul eax, dword ptr [ebx + 0x23c] */
    PUSH32(esp, eax); /* 0x12052332: push eax */
    PUSH32(esp, MEM32(ebp + (-0x5A8))); /* 0x12052333: push dword ptr [ebp - 0x5a8] */
    PUSH32(esp, MEM32(ebp + (-0x59C))); /* 0x12052339: push dword ptr [ebp - 0x59c] */
    RECOMP_CALL(sub_121BF440); /* 0x1205233F: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x12052344: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebx + 0x238); /* 0x12052347: mov ecx, dword ptr [ebx + 0x238] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x23C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebx + 0x23C); /* 0x1205234D: sub eax, dword ptr [ebx + 0x23c] */
    _flag_k = FK_CMP;
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx); /* 0x12052353: imul eax, ecx */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebx + 0x23C)); /* 0x12052356: imul ecx, dword ptr [ebx + 0x23c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x59C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + (-0x59C)); /* 0x1205235D: add ecx, dword ptr [ebp - 0x59c] */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x12052363: push eax */
    PUSH32(esp, 0); /* 0x12052364: push 0 */
    PUSH32(esp, ecx); /* 0x12052366: push ecx */
    RECOMP_CALL(sub_121BF434); /* 0x12052367: call 0x121bf434 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x598)); /* 0x1205236C: mov eax, dword ptr [ebp - 0x598] */
    ecx = MEM32(eax); /* 0x12052372: mov ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x12052374: add esp, 0x18 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x12052377: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x12052378: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1205237B: mov esi, eax */
    /* test esi, esi */ /* 0x1205237D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120525B3; /* 0x1205237F: js 0x120525b3 */
L_12052385:
    eax = MEM32(ebx + 0x234); /* 0x12052385: mov eax, dword ptr [ebx + 0x234] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x59C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x59C)) = MEM32(ebp + (-0x59C)) & 0; /* 0x1205238B: and dword ptr [ebp - 0x59c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(eax); /* 0x12052392: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x12052394: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x12052395: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x12052398: mov esi, eax */
    /* test esi, esi */ /* 0x1205239A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120525B3; /* 0x1205239C: js 0x120525b3 */
L_120523A2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120523A2: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x5A8)) = esi; /* 0x120523A4: mov dword ptr [ebp - 0x5a8], esi */
L_120523AA:
    ecx = MEM32(ebx + 0x234); /* 0x120523AA: mov ecx, dword ptr [ebx + 0x234] */
    /* test ecx, ecx */ /* 0x120523B0: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120523C0; /* 0x120523B2: je 0x120523c0 */
L_120523B4:
    eax = MEM32(ecx); /* 0x120523B4: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120523B6: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120523B7: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    MEM32(ebx + 0x234) = esi; /* 0x120523BA: mov dword ptr [ebx + 0x234], esi */
L_120523C0:
    eax = MEM32(ebp + (-0x598)); /* 0x120523C0: mov eax, dword ptr [ebp - 0x598] */
    MEM32(ebx + 0x234) = eax; /* 0x120523C6: mov dword ptr [ebx + 0x234], eax */
    eax = MEM32(ebp + 0xC); /* 0x120523CC: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x598)) = esi; /* 0x120523CF: mov dword ptr [ebp - 0x598], esi */
    MEM32(ebx + 0x240) = eax; /* 0x120523D5: mov dword ptr [ebx + 0x240], eax */
L_120523DB:
    MEM32(ebx + 0x23C) = eax; /* 0x120523DB: mov dword ptr [ebx + 0x23c], eax */
    eax = MEM32(ebx + 0x230); /* 0x120523E1: mov eax, dword ptr [ebx + 0x230] */
    edx = ebp + (-0x144); /* 0x120523E7: lea edx, [ebp - 0x144] */
    PUSH32(esp, edx); /* 0x120523ED: push edx */
    MEM32(ebx + 0x264) = edi; /* 0x120523EE: mov dword ptr [ebx + 0x264], edi */
    ecx = MEM32(eax); /* 0x120523F4: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x120523F6: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x1C)); /* 0x120523F7: call dword ptr [ecx + 0x1c] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120523FA: mov esi, eax */
    /* test esi, esi */ /* 0x120523FC: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120525B3; /* 0x120523FE: js 0x120525b3 */
L_12052404:
    eax = MEM32(ebx + 0x230); /* 0x12052404: mov eax, dword ptr [ebx + 0x230] */
    ecx = MEM32(eax); /* 0x1205240A: mov ecx, dword ptr [eax] */
    edx = ebp + (-0x5AC); /* 0x1205240C: lea edx, [ebp - 0x5ac] */
    PUSH32(esp, edx); /* 0x12052412: push edx */
    PUSH32(esp, eax); /* 0x12052413: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x18)); /* 0x12052414: call dword ptr [ecx + 0x18] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x12052417: mov esi, eax */
    /* test esi, esi */ /* 0x12052419: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120525B3; /* 0x1205241B: js 0x120525b3 */
L_12052421:
    eax = MEM32(ebp + (-0x8C)); /* 0x12052421: mov eax, dword ptr [ebp - 0x8c] */
    /* cmp eax, MEM32(ebx + 0x240) */ /* 0x12052427: cmp eax, dword ptr [ebx + 0x240] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x240));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_12052444; /* 0x1205242D: jb 0x12052444 */
L_1205242F:
    /* cmp eax, 0xFFFFu */ /* 0x1205242F: cmp eax, 0xffff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_12052444; /* 0x12052434: jbe 0x12052444 */
L_12052436:
    eax = MEM32(ebp + (-0x90)); /* 0x12052436: mov eax, dword ptr [ebp - 0x90] */
    /* cmp eax, MEM32(ebx + 0x268) */ /* 0x1205243C: cmp eax, dword ptr [ebx + 0x268] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x268));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1205244B; /* 0x12052442: jae 0x1205244b */
L_12052444:
    _flag_a = (uint32_t)((MEM32(ebx + 0x218) | 0x40u)); _flag_b = (uint32_t)((MEM32(ebx + 0x218) | 0x40u));
    MEM32(ebx + 0x218) = MEM32(ebx + 0x218) | 0x40u; /* 0x12052444: or dword ptr [ebx + 0x218], 0x40 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1205244B:
    eax = MEM32(0x121D9AD8); /* 0x1205244B: mov eax, dword ptr [0x121d9ad8] */
    /* cmp eax, MEM32(ebx + 0x230) */ /* 0x12052450: cmp eax, dword ptr [ebx + 0x230] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x230));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12052596; /* 0x12052456: je 0x12052596 */
L_1205245C:
    eax = MEM32(ebp + (-0x5AC)); /* 0x1205245C: mov eax, dword ptr [ebp - 0x5ac] */
    ecx = MEM32(eax); /* 0x12052462: mov ecx, dword ptr [eax] */
    edx = ebp + (-0x590); /* 0x12052464: lea edx, [ebp - 0x590] */
    PUSH32(esp, edx); /* 0x1205246A: push edx */
    PUSH32(esp, 0); /* 0x1205246B: push 0 */
    PUSH32(esp, MEM32(ebp + (-0x140))); /* 0x1205246D: push dword ptr [ebp - 0x140] */
    PUSH32(esp, eax); /* 0x12052473: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x14)); /* 0x12052474: call dword ptr [ecx + 0x14] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x12052477: mov esi, eax */
    /* test esi, esi */ /* 0x12052479: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120525B3; /* 0x1205247B: js 0x120525b3 */
L_12052481:
    /* cmp MEM32(ebp + (-0x168)), 0x1002u */ /* 0x12052481: cmp dword ptr [ebp - 0x168], 0x1002 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x168))); _flag_b = (uint32_t)(0x1002u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120524B0; /* 0x1205248B: jne 0x120524b0 */
L_1205248D:
    eax = MEM32(ebp + (-0x164)); /* 0x1205248D: mov eax, dword ptr [ebp - 0x164] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFAEBCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFAEBCu; /* 0x12052493: add eax, 0xffffaebc */
    _flag_k = FK_ADD;
    /* cmp eax, 3 */ /* 0x12052498: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120524B0; /* 0x1205249B: ja 0x120524b0 */
L_1205249D:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0; /* 0x1205249D: and dword ptr [ebp - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120524A1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120524A3: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = eax; /* 0x120524A5: mov dword ptr [ebp - 0xc], eax */
    MEM32(ebp + (-0x8)) = ecx; /* 0x120524A8: mov dword ptr [ebp - 8], ecx */
    goto L_12052572; /* 0x120524AB: jmp 0x12052572 */
L_120524B0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120524B0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ebp + (-0x14); /* 0x120524B2: lea edi, [ebp - 0x14] */
    MEM32(edi) = eax; edi += _df * 4; /* 0x120524B5: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x120524B6: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x120524B7: stosd dword ptr es:[edi], eax */
    PUSH32(esp, 0); /* 0x120524B8: push 0 */
    MEM32(edi) = eax; edi += _df * 4; /* 0x120524BA: stosd dword ptr es:[edi], eax */
    eax = MEM32(ebx + 0x230); /* 0x120524BB: mov eax, dword ptr [ebx + 0x230] */
    ecx = MEM32(eax); /* 0x120524C1: mov ecx, dword ptr [eax] */
    PUSH32(esp, 4); /* 0x120524C3: push 4 */
    PUSH32(esp, eax); /* 0x120524C5: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x1D8)); /* 0x120524C6: call dword ptr [ecx + 0x1d8] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120524CC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1205253C; /* 0x120524CE: js 0x1205253c */
L_120524D0:
    eax = MEM32(ebx + 0x230); /* 0x120524D0: mov eax, dword ptr [ebx + 0x230] */
    ecx = MEM32(eax); /* 0x120524D6: mov ecx, dword ptr [eax] */
    edx = ebp + (-0x5A4); /* 0x120524D8: lea edx, [ebp - 0x5a4] */
    PUSH32(esp, edx); /* 0x120524DE: push edx */
    PUSH32(esp, 4); /* 0x120524DF: push 4 */
    PUSH32(esp, eax); /* 0x120524E1: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x1D8)); /* 0x120524E2: call dword ptr [ecx + 0x1d8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x120524E8: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x120524EA: inc edi */
    _flag_k = FK_INC;
    /* test eax, eax */ /* 0x120524EB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1205253F; /* 0x120524ED: js 0x1205253f */
L_120524EF:
    eax = MEM32(ebp + (-0x5A4)); /* 0x120524EF: mov eax, dword ptr [ebp - 0x5a4] */
    ecx = MEM32(eax); /* 0x120524F5: mov ecx, dword ptr [eax] */
    PUSH32(esp, edi); /* 0x120524F7: push edi */
    PUSH32(esp, eax); /* 0x120524F8: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x18)); /* 0x120524F9: call dword ptr [ecx + 0x18] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120524FC: mov esi, eax */
    /* test esi, esi */ /* 0x120524FE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12052521; /* 0x12052500: js 0x12052521 */
L_12052502:
    esi = edi; /* 0x12052502: mov esi, edi */
    /* test esi, esi */ /* 0x12052504: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
L_12052506:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_12052521; /* 0x12052506: je 0x12052521 */
L_12052508:
    eax = MEM32(ebp + (-0x5A4)); /* 0x12052508: mov eax, dword ptr [ebp - 0x5a4] */
    ecx = MEM32(eax); /* 0x1205250E: mov ecx, dword ptr [eax] */
    PUSH32(esp, edi); /* 0x12052510: push edi */
    PUSH32(esp, 0x10u); /* 0x12052511: push 0x10 */
    edx = ebp + (-0x14); /* 0x12052513: lea edx, [ebp - 0x14] */
    PUSH32(esp, edx); /* 0x12052516: push edx */
    PUSH32(esp, eax); /* 0x12052517: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x1C)); /* 0x12052518: call dword ptr [ecx + 0x1c] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1205251B: mov esi, eax */
    /* test esi, esi */ /* 0x1205251D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_12052506; /* 0x1205251F: jns 0x12052506 */
L_12052521:
    eax = MEM32(ebp + (-0x5A4)); /* 0x12052521: mov eax, dword ptr [ebp - 0x5a4] */
    ecx = MEM32(eax); /* 0x12052527: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x12052529: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1205252A: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x1205252D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1205253F; /* 0x1205252F: js 0x1205253f */
L_12052531:
    ecx = MEM32(ebp + (-0x8)); /* 0x12052531: mov ecx, dword ptr [ebp - 8] */
    eax = MEM32(ebp + (-0xC)); /* 0x12052534: mov eax, dword ptr [ebp - 0xc] */
    edi = MEM32(ebp + (-0x10)); /* 0x12052537: mov edi, dword ptr [ebp - 0x10] */
    goto L_12052550; /* 0x1205253A: jmp 0x12052550 */
L_1205253C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1205253C: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1205253E: inc edi */
    _flag_k = FK_INC;
L_1205253F:
    PUSH32(esp, 0xCu); /* 0x1205253F: push 0xc */
    eax = POP32_VAL(esp); /* 0x12052541: pop eax */
    PUSH32(esp, 7); /* 0x12052542: push 7 */
    ecx = POP32_VAL(esp); /* 0x12052544: pop ecx */
    MEM32(ebp + (-0x10)) = edi; /* 0x12052545: mov dword ptr [ebp - 0x10], edi */
    MEM32(ebp + (-0xC)) = eax; /* 0x12052548: mov dword ptr [ebp - 0xc], eax */
    MEM32(ebp + (-0x8)) = ecx; /* 0x1205254B: mov dword ptr [ebp - 8], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1205254E: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_12052550:
    /* test edi, edi */ /* 0x12052550: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1205255E; /* 0x12052552: jne 0x1205255e */
L_12052554:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12052554: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x12052556: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = eax; /* 0x12052558: mov dword ptr [ebp - 0xc], eax */
    MEM32(ebp + (-0x8)) = ecx; /* 0x1205255B: mov dword ptr [ebp - 8], ecx */
L_1205255E:
    edx = MEM32(ebx + 0x278); /* 0x1205255E: mov edx, dword ptr [ebx + 0x278] */
    /* cmp MEM32(ebx + 0x27C), edx */ /* 0x12052564: cmp dword ptr [ebx + 0x27c], edx */
    _flag_a = (uint32_t)(MEM32(ebx + 0x27C)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_12052572; /* 0x1205256A: jbe 0x12052572 */
L_1205256C:
    MEM32(ebx + 0x27C) = edx; /* 0x1205256C: mov dword ptr [ebx + 0x27c], edx */
L_12052572:
    MEM32(0x121D9ADC) = eax; /* 0x12052572: mov dword ptr [0x121d9adc], eax */
    MEM32(0x121D9AE0) = ecx; /* 0x12052577: mov dword ptr [0x121d9ae0], ecx */
    MEM32(ebx + 0x278) = eax; /* 0x1205257D: mov dword ptr [ebx + 0x278], eax */
    eax = MEM32(ebx + 0x230); /* 0x12052583: mov eax, dword ptr [ebx + 0x230] */
    MEM32(ebx + 0x27C) = ecx; /* 0x12052589: mov dword ptr [ebx + 0x27c], ecx */
    MEM32(0x121D9AD8) = eax; /* 0x1205258F: mov dword ptr [0x121d9ad8], eax */
    goto L_120525B3; /* 0x12052594: jmp 0x120525b3 */
L_12052596:
    eax = MEM32(0x121D9ADC); /* 0x12052596: mov eax, dword ptr [0x121d9adc] */
    MEM32(ebx + 0x278) = eax; /* 0x1205259B: mov dword ptr [ebx + 0x278], eax */
    eax = MEM32(0x121D9AE0); /* 0x120525A1: mov eax, dword ptr [0x121d9ae0] */
    MEM32(ebx + 0x27C) = eax; /* 0x120525A6: mov dword ptr [ebx + 0x27c], eax */
    goto L_120525B3; /* 0x120525AC: jmp 0x120525b3 */
L_120525AE:
    esi = 0x8876086Cu; /* 0x120525AE: mov esi, 0x8876086c */
L_120525B3:
    ecx = MEM32(ebp + (-0x5AC)); /* 0x120525B3: mov ecx, dword ptr [ebp - 0x5ac] */
    /* test ecx, ecx */ /* 0x120525B9: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120525CA; /* 0x120525BB: je 0x120525ca */
L_120525BD:
    eax = MEM32(ecx); /* 0x120525BD: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120525BF: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120525C0: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x5AC))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x5AC)) = MEM32(ebp + (-0x5AC)) & 0; /* 0x120525C3: and dword ptr [ebp - 0x5ac], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_120525CA:
    /* cmp MEM32(ebp + (-0x5A0)), 0 */ /* 0x120525CA: cmp dword ptr [ebp - 0x5a0], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x5A0))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120525DF; /* 0x120525D1: je 0x120525df */
L_120525D3:
    eax = MEM32(ebp + (-0x594)); /* 0x120525D3: mov eax, dword ptr [ebp - 0x594] */
    ecx = MEM32(eax); /* 0x120525D9: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x120525DB: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x120525DC: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
L_120525DF:
    /* cmp MEM32(ebp + (-0x5B0)), 0 */ /* 0x120525DF: cmp dword ptr [ebp - 0x5b0], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x5B0))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120525F4; /* 0x120525E6: je 0x120525f4 */
L_120525E8:
    eax = MEM32(ebx + 0x248); /* 0x120525E8: mov eax, dword ptr [ebx + 0x248] */
    ecx = MEM32(eax); /* 0x120525EE: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x120525F0: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x120525F1: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
L_120525F4:
    /* cmp MEM32(ebp + (-0x59C)), 0 */ /* 0x120525F4: cmp dword ptr [ebp - 0x59c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x59C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12052609; /* 0x120525FB: je 0x12052609 */
L_120525FD:
    eax = MEM32(ebp + (-0x598)); /* 0x120525FD: mov eax, dword ptr [ebp - 0x598] */
    ecx = MEM32(eax); /* 0x12052603: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x12052605: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x12052606: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
L_12052609:
    /* cmp MEM32(ebp + (-0x5A8)), 0 */ /* 0x12052609: cmp dword ptr [ebp - 0x5a8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x5A8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1205261E; /* 0x12052610: je 0x1205261e */
L_12052612:
    eax = MEM32(ebx + 0x234); /* 0x12052612: mov eax, dword ptr [ebx + 0x234] */
    ecx = MEM32(eax); /* 0x12052618: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1205261A: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x1205261B: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
L_1205261E:
    ecx = MEM32(ebp + (-0x4)); /* 0x1205261E: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x12052621: pop edi */
    eax = esi; /* 0x12052622: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x12052624: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x12052625: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x12052627: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x12052628: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1205262D: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1205262E: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_12052636(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12052636u);

L_12052636:
    edi = edi; /* 0x12052636: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12052638: push ebp */
    ebp = esp; /* 0x12052639: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x44u; /* 0x1205263B: sub esp, 0x44 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x1205263E: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x12052641: push ebx */
    PUSH32(esp, esi); /* 0x12052642: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x12052643: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = ecx; /* 0x12052645: mov esi, ecx */
    PUSH32(esp, edi); /* 0x12052647: push edi */
    MEM32(ebp + (-0x20)) = esi; /* 0x12052648: mov dword ptr [ebp - 0x20], esi */
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(ebx)); /* 0x1205264B: mov byte ptr [ebp - 1], bl */
    /* test eax, eax */ /* 0x1205264E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12052663; /* 0x12052650: jne 0x12052663 */
L_12052652:
    /* cmp MEM32(esi + 0x24C), ebx */ /* 0x12052652: cmp dword ptr [esi + 0x24c], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x24C)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1205266A; /* 0x12052658: je 0x1205266a */
L_1205265A:
    eax = MEM32(esi + 0x24C); /* 0x1205265A: mov eax, dword ptr [esi + 0x24c] */
    MEM32(ebp + 0x8) = eax; /* 0x12052660: mov dword ptr [ebp + 8], eax */
L_12052663:
    edi = eax; /* 0x12052663: mov edi, eax */
    MEM32(ebp + (-0x14)) = edi; /* 0x12052665: mov dword ptr [ebp - 0x14], edi */
    goto L_1205268C; /* 0x12052668: jmp 0x1205268c */
L_1205266A:
    eax = MEM32(esi + 0x248); /* 0x1205266A: mov eax, dword ptr [esi + 0x248] */
    ecx = MEM32(eax); /* 0x12052670: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0x810u); /* 0x12052672: push 0x810 */
    edx = ebp + (-0x14); /* 0x12052677: lea edx, [ebp - 0x14] */
    PUSH32(esp, edx); /* 0x1205267A: push edx */
    PUSH32(esp, ebx); /* 0x1205267B: push ebx */
    PUSH32(esp, ebx); /* 0x1205267C: push ebx */
    PUSH32(esp, eax); /* 0x1205267D: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x2C)); /* 0x1205267E: call dword ptr [ecx + 0x2c] */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0x14)); /* 0x12052681: mov edi, dword ptr [ebp - 0x14] */
    /* test eax, eax */ /* 0x12052684: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120528D4; /* 0x12052686: js 0x120528d4 */
L_1205268C:
    eax = MEM32(esi + 0x264); /* 0x1205268C: mov eax, dword ptr [esi + 0x264] */
    MEM32(ebp + (-0x28)) = ebx; /* 0x12052692: mov dword ptr [ebp - 0x28], ebx */
    /* test eax, eax */ /* 0x12052695: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120528B5; /* 0x12052697: je 0x120528b5 */
L_1205269D:
    eax = MEM32(esi + 0x250); /* 0x1205269D: mov eax, dword ptr [esi + 0x250] */
    MEM32(ebp + (-0x3C)) = eax; /* 0x120526A3: mov dword ptr [ebp - 0x3c], eax */
    MEM32(ebp + (-0x10)) = eax; /* 0x120526A6: mov dword ptr [ebp - 0x10], eax */
    edx = edi + 0x4; /* 0x120526A9: lea edx, [edi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x120526AC: sub eax, edi */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = edx; /* 0x120526AE: mov dword ptr [ebp - 8], edx */
    MEM32(ebp + (-0x2C)) = eax; /* 0x120526B1: mov dword ptr [ebp - 0x2c], eax */
    MEM32(ebp + (-0x38)) = 3; /* 0x120526B4: mov dword ptr [ebp - 0x38], 3 */
L_120526BB:
    eax = edx + (-0x4); /* 0x120526BB: lea eax, [edx - 4] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x120526BE: mov dword ptr [ebp - 0x1c], eax */
    eax = MEM32(eax); /* 0x120526C1: mov eax, dword ptr [eax] */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x120526C3: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12052713; /* 0x120526C6: jne 0x12052713 */
L_120526C8:
    ecx = MEM32(edx); /* 0x120526C8: mov ecx, dword ptr [edx] */
    /* cmp eax, ecx */ /* 0x120526CA: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120528D4; /* 0x120526CC: jne 0x120528d4 */
L_120526D2:
    /* cmp ecx, MEM32(edx + 0x4) */ /* 0x120526D2: cmp ecx, dword ptr [edx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120528D4; /* 0x120526D5: jne 0x120528d4 */
L_120526DB:
    /* test MEM8(esi + 0x218), 1 */ /* 0x120526DB: test byte ptr [esi + 0x218], 1 */
    _flag_a = (uint32_t)(MEM8(esi + 0x218)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12052891; /* 0x120526E2: je 0x12052891 */
L_120526E8:
    ecx = MEM32(ebp + (-0x10)); /* 0x120526E8: mov ecx, dword ptr [ebp - 0x10] */
    /* cmp MEM32(ecx), eax */ /* 0x120526EB: cmp dword ptr [ecx], eax */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120528D4; /* 0x120526ED: jne 0x120528d4 */
L_120526F3:
    eax = MEM32(ebp + (-0x2C)); /* 0x120526F3: mov eax, dword ptr [ebp - 0x2c] */
    eax = MEM32(eax + edx); /* 0x120526F6: mov eax, dword ptr [eax + edx] */
    /* cmp MEM32(ecx), eax */ /* 0x120526F9: cmp dword ptr [ecx], eax */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120528D4; /* 0x120526FB: jne 0x120528d4 */
L_12052701:
    ecx = MEM32(ebp + (-0x2C)); /* 0x12052701: mov ecx, dword ptr [ebp - 0x2c] */
    /* cmp eax, MEM32(ecx + edx + 0x4) */ /* 0x12052704: cmp eax, dword ptr [ecx + edx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + edx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120528D4; /* 0x12052708: jne 0x120528d4 */
L_1205270E:
    goto L_12052891; /* 0x1205270E: jmp 0x12052891 */
L_12052713:
    ecx = MEM32(esi + 0x218); /* 0x12052713: mov ecx, dword ptr [esi + 0x218] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    ecx = ecx & 2; /* 0x12052719: and ecx, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x40)) = ecx; /* 0x1205271C: mov dword ptr [ebp - 0x40], ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_12052767; /* 0x1205271F: je 0x12052767 */
L_12052721:
    ecx = MEM32(edx); /* 0x12052721: mov ecx, dword ptr [edx] */
    MEM32(ebp + (-0x24)) = ecx; /* 0x12052723: mov dword ptr [ebp - 0x24], ecx */
    ecx = MEM32(esi + 0x244); /* 0x12052726: mov ecx, dword ptr [esi + 0x244] */
    edx = MEM32(ebp + (-0x24)); /* 0x1205272C: mov edx, dword ptr [ebp - 0x24] */
    eax = MEM32(ecx + eax * 4); /* 0x1205272F: mov eax, dword ptr [ecx + eax*4] */
    /* cmp eax, MEM32(ecx + edx * 4) */ /* 0x12052732: cmp eax, dword ptr [ecx + edx*4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + edx * 4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = MEM32(ebp + (-0x8)); /* 0x12052735: mov edx, dword ptr [ebp - 8] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12052776; /* 0x12052738: je 0x12052776 */
L_1205273A:
    eax = MEM32(edx + 0x4); /* 0x1205273A: mov eax, dword ptr [edx + 4] */
    MEM32(ebp + (-0x18)) = eax; /* 0x1205273D: mov dword ptr [ebp - 0x18], eax */
    eax = MEM32(ebp + (-0x24)); /* 0x12052740: mov eax, dword ptr [ebp - 0x24] */
    edx = MEM32(ebp + (-0x18)); /* 0x12052743: mov edx, dword ptr [ebp - 0x18] */
    eax = MEM32(ecx + eax * 4); /* 0x12052746: mov eax, dword ptr [ecx + eax*4] */
    /* cmp eax, MEM32(ecx + edx * 4) */ /* 0x12052749: cmp eax, dword ptr [ecx + edx*4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + edx * 4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = MEM32(ebp + (-0x8)); /* 0x1205274C: mov edx, dword ptr [ebp - 8] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12052776; /* 0x1205274F: je 0x12052776 */
L_12052751:
    esi = MEM32(ebp + (-0x1C)); /* 0x12052751: mov esi, dword ptr [ebp - 0x1c] */
    eax = MEM32(ebp + (-0x18)); /* 0x12052754: mov eax, dword ptr [ebp - 0x18] */
    edx = MEM32(esi); /* 0x12052757: mov edx, dword ptr [esi] */
    eax = MEM32(ecx + eax * 4); /* 0x12052759: mov eax, dword ptr [ecx + eax*4] */
    /* cmp eax, MEM32(ecx + edx * 4) */ /* 0x1205275C: cmp eax, dword ptr [ecx + edx*4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + edx * 4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = MEM32(ebp + (-0x20)); /* 0x1205275F: mov esi, dword ptr [ebp - 0x20] */
    edx = MEM32(ebp + (-0x8)); /* 0x12052762: mov edx, dword ptr [ebp - 8] */
    goto L_12052774; /* 0x12052765: jmp 0x12052774 */
L_12052767:
    /* cmp eax, MEM32(edx) */ /* 0x12052767: cmp eax, dword ptr [edx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12052776; /* 0x12052769: je 0x12052776 */
L_1205276B:
    ecx = MEM32(edx + 0x4); /* 0x1205276B: mov ecx, dword ptr [edx + 4] */
    /* cmp MEM32(edx), ecx */ /* 0x1205276E: cmp dword ptr [edx], ecx */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12052776; /* 0x12052770: je 0x12052776 */
L_12052772:
    /* cmp ecx, eax */ /* 0x12052772: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_12052774:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1205277A; /* 0x12052774: jne 0x1205277a */
L_12052776:
    MEM8(ebp + (-0x1)) = (uint8_t)(1); /* 0x12052776: mov byte ptr [ebp - 1], 1 */
L_1205277A:
    /* test MEM8(esi + 0x218), 1 */ /* 0x1205277A: test byte ptr [esi + 0x218], 1 */
    _flag_a = (uint32_t)(MEM8(esi + 0x218)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12052891; /* 0x12052781: je 0x12052891 */
L_12052787:
    esi = MEM32(ebp + (-0x1C)); /* 0x12052787: mov esi, dword ptr [ebp - 0x1c] */
    eax = MEM32(ebp + (-0x10)); /* 0x1205278A: mov eax, dword ptr [ebp - 0x10] */
    MEM32(ebp + (-0x18)) = esi; /* 0x1205278D: mov dword ptr [ebp - 0x18], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + (-0x18)) = MEM32(ebp + (-0x18)) - eax; /* 0x12052790: sub dword ptr [ebp - 0x18], eax */
    _flag_k = FK_CMP;
    esi = MEM32(ebp + (-0x20)); /* 0x12052793: mov esi, dword ptr [ebp - 0x20] */
    edx = ebx; /* 0x12052796: mov edx, ebx */
    ecx = eax; /* 0x12052798: mov ecx, eax */
    MEM32(ebp + (-0xC)) = eax; /* 0x1205279A: mov dword ptr [ebp - 0xc], eax */
L_1205279D:
    eax = MEM32(ebp + (-0x18)); /* 0x1205279D: mov eax, dword ptr [ebp - 0x18] */
    eax = MEM32(eax + ecx); /* 0x120527A0: mov eax, dword ptr [eax + ecx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x120527A3: inc edx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x24)) = eax; /* 0x120527A4: mov dword ptr [ebp - 0x24], eax */
    MEM32(ebp + (-0x44)) = edx; /* 0x120527A7: mov dword ptr [ebp - 0x44], edx */
    eax = edx; /* 0x120527AA: mov eax, edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120527AC: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)MEM32(ebp + (-0x38)); /* 0x120527AE: div dword ptr [ebp - 0x38] */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    eax = MEM32(ebp + (-0x1C)); /* 0x120527B1: mov eax, dword ptr [ebp - 0x1c] */
    edx = MEM32(eax + edx * 4); /* 0x120527B4: mov edx, dword ptr [eax + edx*4] */
    eax = MEM32(esi + 0x23C); /* 0x120527B7: mov eax, dword ptr [esi + 0x23c] */
    MEM32(ebp + (-0x30)) = edx; /* 0x120527BD: mov dword ptr [ebp - 0x30], edx */
    /* cmp MEM32(ebp + (-0x24)), eax */ /* 0x120527C0: cmp dword ptr [ebp - 0x24], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120528D4; /* 0x120527C3: jae 0x120528d4 */
L_120527C9:
    /* cmp edx, eax */ /* 0x120527C9: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120528D4; /* 0x120527CB: jae 0x120528d4 */
L_120527D1:
    /* cmp MEM32(ecx), 0xFFFFFFFFu */ /* 0x120527D1: cmp dword ptr [ecx], -1 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1205287A; /* 0x120527D4: je 0x1205287a */
L_120527DA:
    eax = MEM32(esi + 0x264); /* 0x120527DA: mov eax, dword ptr [esi + 0x264] */
    /* cmp MEM32(ecx), eax */ /* 0x120527E0: cmp dword ptr [ecx], eax */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120528D4; /* 0x120527E2: jae 0x120528d4 */
L_120527E8:
    eax = MEM32(ecx); /* 0x120527E8: mov eax, dword ptr [ecx] */
    esi = MEM32(ebp + (-0x28)); /* 0x120527EA: mov esi, dword ptr [ebp - 0x28] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0xCu); /* 0x120527ED: imul eax, eax, 0xc */
    ecx = eax + edi; /* 0x120527F0: lea ecx, [eax + edi] */
    MEM32(ebp + (-0x34)) = ecx; /* 0x120527F3: mov dword ptr [ebp - 0x34], ecx */
    ecx = MEM32(ebp + (-0x3C)); /* 0x120527F6: mov ecx, dword ptr [ebp - 0x3c] */
    edx = eax + ecx; /* 0x120527F9: lea edx, [eax + ecx] */
    PUSH32(esp, 3); /* 0x120527FC: push 3 */
    eax = ebx; /* 0x120527FE: mov eax, ebx */
    ecx = POP32_VAL(esp); /* 0x12052800: pop ecx */
L_12052801:
    /* cmp MEM32(edx + eax * 4), esi */ /* 0x12052801: cmp dword ptr [edx + eax*4], esi */
    _flag_a = (uint32_t)(MEM32(edx + eax * 4)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1205280B; /* 0x12052804: je 0x1205280b */
L_12052806:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x12052806: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, ecx */ /* 0x12052807: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12052801; /* 0x12052809: jb 0x12052801 */
L_1205280B:
    esi = MEM32(ebp + (-0x20)); /* 0x1205280B: mov esi, dword ptr [ebp - 0x20] */
    /* cmp eax, ecx */ /* 0x1205280E: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0xC)); /* 0x12052810: mov ecx, dword ptr [ebp - 0xc] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_120528D4; /* 0x12052813: jae 0x120528d4 */
L_12052819:
    /* cmp MEM32(ebp + (-0x40)), 0 */ /* 0x12052819: cmp dword ptr [ebp - 0x40], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x40))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1205287A; /* 0x1205281D: je 0x1205287a */
L_1205281F:
    ebx = MEM32(ebp + (-0x34)); /* 0x1205281F: mov ebx, dword ptr [ebp - 0x34] */
    ecx = MEM32(ebx + eax * 4); /* 0x12052822: mov ecx, dword ptr [ebx + eax*4] */
    PUSH32(esp, 3); /* 0x12052825: push 3 */
    MEM32(ebp + (-0x34)) = ecx; /* 0x12052827: mov dword ptr [ebp - 0x34], ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1205282A: inc eax */
    _flag_k = FK_INC;
    ecx = POP32_VAL(esp); /* 0x1205282B: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1205282C: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x1205282E: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    ecx = MEM32(esi + 0x244); /* 0x12052830: mov ecx, dword ptr [esi + 0x244] */
    eax = MEM32(ebp + (-0x24)); /* 0x12052836: mov eax, dword ptr [ebp - 0x24] */
    eax = MEM32(ecx + eax * 4); /* 0x12052839: mov eax, dword ptr [ecx + eax*4] */
    PUSH32(esp, 0); /* 0x1205283C: push 0 */
    edx = MEM32(ebx + edx * 4); /* 0x1205283E: mov edx, dword ptr [ebx + edx*4] */
    ebx = MEM32(ebp + (-0x34)); /* 0x12052841: mov ebx, dword ptr [ebp - 0x34] */
    /* cmp eax, MEM32(ecx + ebx * 4) */ /* 0x12052844: cmp eax, dword ptr [ecx + ebx*4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + ebx * 4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = POP32_VAL(esp); /* 0x12052847: pop ebx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_12052855; /* 0x12052848: jne 0x12052855 */
L_1205284A:
    eax = MEM32(ebp + (-0x30)); /* 0x1205284A: mov eax, dword ptr [ebp - 0x30] */
    eax = MEM32(ecx + eax * 4); /* 0x1205284D: mov eax, dword ptr [ecx + eax*4] */
    /* cmp eax, MEM32(ecx + edx * 4) */ /* 0x12052850: cmp eax, dword ptr [ecx + edx*4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + edx * 4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12052877; /* 0x12052853: je 0x12052877 */
L_12052855:
    ecx = MEM32(esi + 0x244); /* 0x12052855: mov ecx, dword ptr [esi + 0x244] */
    eax = MEM32(ebp + (-0x30)); /* 0x1205285B: mov eax, dword ptr [ebp - 0x30] */
    ebx = MEM32(ebp + (-0x34)); /* 0x1205285E: mov ebx, dword ptr [ebp - 0x34] */
    eax = MEM32(ecx + eax * 4); /* 0x12052861: mov eax, dword ptr [ecx + eax*4] */
    /* cmp eax, MEM32(ecx + ebx * 4) */ /* 0x12052864: cmp eax, dword ptr [ecx + ebx*4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + ebx * 4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, 0); /* 0x12052867: push 0 */
    ebx = POP32_VAL(esp); /* 0x12052869: pop ebx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_120528D4; /* 0x1205286A: jne 0x120528d4 */
L_1205286C:
    eax = MEM32(ebp + (-0x24)); /* 0x1205286C: mov eax, dword ptr [ebp - 0x24] */
    eax = MEM32(ecx + eax * 4); /* 0x1205286F: mov eax, dword ptr [ecx + eax*4] */
    /* cmp eax, MEM32(ecx + edx * 4) */ /* 0x12052872: cmp eax, dword ptr [ecx + edx*4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + edx * 4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120528D4; /* 0x12052875: jne 0x120528d4 */
L_12052877:
    ecx = MEM32(ebp + (-0xC)); /* 0x12052877: mov ecx, dword ptr [ebp - 0xc] */
L_1205287A:
    edx = MEM32(ebp + (-0x44)); /* 0x1205287A: mov edx, dword ptr [ebp - 0x44] */
    PUSH32(esp, 3); /* 0x1205287D: push 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x1205287F: add ecx, 4 */
    _flag_k = FK_ADD;
    eax = POP32_VAL(esp); /* 0x12052882: pop eax */
    MEM32(ebp + (-0xC)) = ecx; /* 0x12052883: mov dword ptr [ebp - 0xc], ecx */
    /* cmp edx, eax */ /* 0x12052886: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1205279D; /* 0x12052888: jb 0x1205279d */
L_1205288E:
    edx = MEM32(ebp + (-0x8)); /* 0x1205288E: mov edx, dword ptr [ebp - 8] */
L_12052891:
    ecx = MEM32(ebp + (-0x28)); /* 0x12052891: mov ecx, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) + 0xCu; /* 0x12052894: add dword ptr [ebp - 0x10], 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x12052898: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0xCu; /* 0x12052899: add edx, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x28)) = ecx; /* 0x1205289C: mov dword ptr [ebp - 0x28], ecx */
    MEM32(ebp + (-0x8)) = edx; /* 0x1205289F: mov dword ptr [ebp - 8], edx */
    /* cmp ecx, MEM32(esi + 0x264) */ /* 0x120528A2: cmp ecx, dword ptr [esi + 0x264] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x264));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120526BB; /* 0x120528A8: jb 0x120526bb */
L_120528AE:
    SET_LO8(eax, MEM8(ebp + (-0x1))); /* 0x120528AE: mov al, byte ptr [ebp - 1] */
    /* test LO8(eax), LO8(eax) */ /* 0x120528B1: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120528D4; /* 0x120528B3: jne 0x120528d4 */
L_120528B5:
    /* test MEM8(esi + 0x218), 0x10u */ /* 0x120528B5: test byte ptr [esi + 0x218], 0x10 */
    _flag_a = (uint32_t)(MEM8(esi + 0x218)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_120528D2; /* 0x120528BC: je 0x120528d2 */
L_120528BE:
    /* cmp MEM32(esi + 0x25C), ebx */ /* 0x120528BE: cmp dword ptr [esi + 0x25c], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x25C)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120528D2; /* 0x120528C4: je 0x120528d2 */
L_120528C6:
    PUSH32(esp, edi); /* 0x120528C6: push edi */
    ecx = esi; /* 0x120528C7: mov ecx, esi */
    RECOMP_CALL(sub_1204CBD2); /* 0x120528C9: call 0x1204cbd2 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x120528CE: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_120528D4; /* 0x120528D0: je 0x120528d4 */
L_120528D2:
    SET_LO8(ebx, 1); /* 0x120528D2: mov bl, 1 */
L_120528D4:
    /* test edi, edi */ /* 0x120528D4: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120528EA; /* 0x120528D6: je 0x120528ea */
L_120528D8:
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x120528D8: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120528EA; /* 0x120528DC: jne 0x120528ea */
L_120528DE:
    ecx = MEM32(esi + 0x248); /* 0x120528DE: mov ecx, dword ptr [esi + 0x248] */
    edx = MEM32(ecx); /* 0x120528E4: mov edx, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120528E6: push ecx */
    RECOMP_ICALL(MEM32(edx + 0x30)); /* 0x120528E7: call dword ptr [edx + 0x30] */
    RECOMP_FLAGS_IN();
L_120528EA:
    edi = POP32_VAL(esp); /* 0x120528EA: pop edi */
    esi = POP32_VAL(esp); /* 0x120528EB: pop esi */
    SET_LO8(eax, LO8(ebx)); /* 0x120528EC: mov al, bl */
    ebx = POP32_VAL(esp); /* 0x120528EE: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120528EF: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x120528F0: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_120528F8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120528F8u);

L_120528F8:
    edi = edi; /* 0x120528F8: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120528FA: push ebp */
    ebp = esp; /* 0x120528FB: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x48u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x48u; /* 0x120528FD: sub esp, 0x48 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x12052900: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x12052901: mov ebx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12052904: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x12052906: push esi */
    PUSH32(esp, edi); /* 0x12052907: push edi */
    edi = ecx; /* 0x12052908: mov edi, ecx */
    MEM32(ebp + (-0x14)) = eax; /* 0x1205290A: mov dword ptr [ebp - 0x14], eax */
    MEM32(ebp + (-0x8)) = eax; /* 0x1205290D: mov dword ptr [ebp - 8], eax */
    MEM32(ebp + (-0x24)) = eax; /* 0x12052910: mov dword ptr [ebp - 0x24], eax */
    MEM32(ebp + (-0x20)) = eax; /* 0x12052913: mov dword ptr [ebp - 0x20], eax */
    MEM32(ebp + (-0x1C)) = eax; /* 0x12052916: mov dword ptr [ebp - 0x1c], eax */
    MEM32(ebp + (-0x10)) = eax; /* 0x12052919: mov dword ptr [ebp - 0x10], eax */
    eax = MEM32(ebx); /* 0x1205291C: mov eax, dword ptr [ebx] */
    PUSH32(esp, ebx); /* 0x1205291E: push ebx */
    MEM32(ebp + (-0x3C)) = edi; /* 0x1205291F: mov dword ptr [ebp - 0x3c], edi */
    RECOMP_ICALL(MEM32(eax + 0x24)); /* 0x12052922: call dword ptr [eax + 0x24] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi); /* 0x12052925: mov ecx, dword ptr [edi] */
    esi = eax; /* 0x12052927: mov esi, eax */
    PUSH32(esp, edi); /* 0x12052929: push edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi & 1; /* 0x1205292A: and esi, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ICALL(MEM32(ecx + 0x24)); /* 0x1205292D: call dword ptr [ecx + 0x24] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x12052930: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, eax */ /* 0x12052933: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12052D75; /* 0x12052935: jne 0x12052d75 */
L_1205293B:
    PUSH32(esp, 0x120014BCu); /* 0x1205293B: push 0x120014bc */
    PUSH32(esp, 0x10u); /* 0x12052940: push 0x10 */
    RECOMP_CALL(sub_12018970); /* 0x12052942: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12052947: pop ecx */
    ecx = POP32_VAL(esp); /* 0x12052948: pop ecx */
    /* test eax, eax */ /* 0x12052949: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12052964; /* 0x1205294B: je 0x12052964 */
L_1205294D:
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(eax + 0x8) = MEM32(eax + 0x8) & 0; /* 0x1205294D: and dword ptr [eax + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(eax + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(eax + 0xC) = MEM32(eax + 0xC) & 0; /* 0x12052951: and dword ptr [eax + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = 0x120060CCu; /* 0x12052955: mov dword ptr [eax], 0x120060cc */
    MEM32(eax + 0x4) = 1; /* 0x1205295B: mov dword ptr [eax + 4], 1 */
    goto L_12052966; /* 0x12052962: jmp 0x12052966 */
L_12052964:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12052964: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_12052966:
    MEM32(edi + 0x20) = eax; /* 0x12052966: mov dword ptr [edi + 0x20], eax */
    /* test eax, eax */ /* 0x12052969: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12052ED0; /* 0x1205296B: je 0x12052ed0 */
L_12052971:
    eax = MEM32(ebp + 0x10); /* 0x12052971: mov eax, dword ptr [ebp + 0x10] */
    ecx = MEM32(eax); /* 0x12052974: mov ecx, dword ptr [eax] */
    esi = eax + 0x4; /* 0x12052976: lea esi, [eax + 4] */
    eax = MEM32(edi + 0x8); /* 0x12052979: mov eax, dword ptr [edi + 8] */
    MEM32(eax + 0x260) = ecx; /* 0x1205297C: mov dword ptr [eax + 0x260], ecx */
    eax = MEM32(edi + 0x8); /* 0x12052982: mov eax, dword ptr [edi + 8] */
    eax = MEM32(eax + 0x260); /* 0x12052985: mov eax, dword ptr [eax + 0x260] */
    PUSH32(esp, 0x120014BCu); /* 0x1205298B: push 0x120014bc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x12052990: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x14u); /* 0x12052992: push 0x14 */
    edx = POP32_VAL(esp); /* 0x12052994: pop edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x12052995: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x12052997: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1205299A: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1205299C: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1205299E: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x1205299F: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi + 0x8); /* 0x120529A4: mov ecx, dword ptr [edi + 8] */
    MEM32(ecx + 0x25C) = eax; /* 0x120529A7: mov dword ptr [ecx + 0x25c], eax */
    eax = MEM32(edi + 0x8); /* 0x120529AD: mov eax, dword ptr [edi + 8] */
    eax = MEM32(eax + 0x260); /* 0x120529B0: mov eax, dword ptr [eax + 0x260] */
    PUSH32(esp, 0x120014BCu); /* 0x120529B6: push 0x120014bc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120529BB: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x14u); /* 0x120529BD: push 0x14 */
    edx = POP32_VAL(esp); /* 0x120529BF: pop edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x120529C0: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x120529C2: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x120529C5: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x120529C7: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x120529C9: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x120529CA: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi + 0x8); /* 0x120529CF: mov ecx, dword ptr [edi + 8] */
    edx = ecx + 0x25C; /* 0x120529D2: lea edx, [ecx + 0x25c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x120529D8: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(edi + 0x24) = eax; /* 0x120529DB: mov dword ptr [edi + 0x24], eax */
    /* cmp MEM32(edx), 0 */ /* 0x120529DE: cmp dword ptr [edx], 0 */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x18)) = edx; /* 0x120529E1: mov dword ptr [ebp - 0x18], edx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12052ED0; /* 0x120529E4: je 0x12052ed0 */
L_120529EA:
    /* test eax, eax */ /* 0x120529EA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12052ED0; /* 0x120529EC: je 0x12052ed0 */
L_120529F2:
    _flag_a = (uint32_t)(MEM32(edi + 0x40)); _flag_b = (uint32_t)(0);
    MEM32(edi + 0x40) = MEM32(edi + 0x40) & 0; /* 0x120529F2: and dword ptr [edi + 0x40], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(edi + 0x38)); _flag_b = (uint32_t)(0);
    MEM32(edi + 0x38) = MEM32(edi + 0x38) & 0; /* 0x120529F6: and dword ptr [edi + 0x38], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120529FA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x44) = eax; /* 0x120529FC: mov dword ptr [edi + 0x44], eax */
    MEM32(ebp + (-0xC)) = eax; /* 0x120529FF: mov dword ptr [ebp - 0xc], eax */
    MEM32(ebp + 0x10) = 4; /* 0x12052A02: mov dword ptr [ebp + 0x10], 4 */
    /* cmp MEM32(ecx + 0x260), eax */ /* 0x12052A09: cmp dword ptr [ecx + 0x260], eax */
    _flag_a = (uint32_t)(MEM32(ecx + 0x260)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_12052B01; /* 0x12052A0F: jbe 0x12052b01 */
L_12052A15:
    ecx = eax; /* 0x12052A15: mov ecx, eax */
    MEM32(ebp + (-0x4)) = eax; /* 0x12052A17: mov dword ptr [ebp - 4], eax */
L_12052A1A:
    eax = MEM32(ebp + (-0x18)); /* 0x12052A1A: mov eax, dword ptr [ebp - 0x18] */
    eax = MEM32(eax); /* 0x12052A1D: mov eax, dword ptr [eax] */
    ebx = MEM32(ebp + (-0xC)); /* 0x12052A1F: mov ebx, dword ptr [ebp - 0xc] */
    MEM32(ecx + eax) = ebx; /* 0x12052A22: mov dword ptr [ecx + eax], ebx */
    eax = MEM32(edi + 0x24); /* 0x12052A25: mov eax, dword ptr [edi + 0x24] */
    MEM32(ecx + eax) = ebx; /* 0x12052A28: mov dword ptr [ecx + eax], ebx */
    ecx = MEM32(esi); /* 0x12052A2B: mov ecx, dword ptr [esi] */
    ebx = MEM32(ebp + (-0x4)); /* 0x12052A2D: mov ebx, dword ptr [ebp - 4] */
    eax = MEM32(edi + 0x8); /* 0x12052A30: mov eax, dword ptr [edi + 8] */
    eax = MEM32(eax + 0x25C); /* 0x12052A33: mov eax, dword ptr [eax + 0x25c] */
    MEM32(eax + ebx + 0x4) = ecx; /* 0x12052A39: mov dword ptr [eax + ebx + 4], ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + 0x10); /* 0x12052A3D: add esi, dword ptr [ebp + 0x10] */
    _flag_k = FK_ADD;
    eax = MEM32(edi + 0x8); /* 0x12052A40: mov eax, dword ptr [edi + 8] */
    eax = MEM32(eax + 0x25C); /* 0x12052A43: mov eax, dword ptr [eax + 0x25c] */
    ecx = MEM32(esi); /* 0x12052A49: mov ecx, dword ptr [esi] */
    MEM32(eax + ebx + 0x8) = ecx; /* 0x12052A4B: mov dword ptr [eax + ebx + 8], ecx */
    eax = MEM32(edi + 0x8); /* 0x12052A4F: mov eax, dword ptr [edi + 8] */
    eax = MEM32(eax + 0x25C); /* 0x12052A52: mov eax, dword ptr [eax + 0x25c] */
    eax = MEM32(eax + ebx + 0x4); /* 0x12052A58: mov eax, dword ptr [eax + ebx + 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + 0x10); /* 0x12052A5C: add esi, dword ptr [ebp + 0x10] */
    _flag_k = FK_ADD;
    ecx = MEM32(edi + 0x24); /* 0x12052A5F: mov ecx, dword ptr [edi + 0x24] */
    MEM32(ecx + ebx + 0x4) = eax; /* 0x12052A62: mov dword ptr [ecx + ebx + 4], eax */
    ecx = MEM32(esi); /* 0x12052A66: mov ecx, dword ptr [esi] */
    eax = MEM32(edi + 0x24); /* 0x12052A68: mov eax, dword ptr [edi + 0x24] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + 0x10); /* 0x12052A6B: add esi, dword ptr [ebp + 0x10] */
    _flag_k = FK_ADD;
    MEM32(eax + ebx + 0x8) = ecx; /* 0x12052A6E: mov dword ptr [eax + ebx + 8], ecx */
    ecx = MEM32(esi); /* 0x12052A72: mov ecx, dword ptr [esi] */
    eax = MEM32(edi + 0x8); /* 0x12052A74: mov eax, dword ptr [edi + 8] */
    eax = MEM32(eax + 0x25C); /* 0x12052A77: mov eax, dword ptr [eax + 0x25c] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + 0x10); /* 0x12052A7D: add esi, dword ptr [ebp + 0x10] */
    _flag_k = FK_ADD;
    MEM32(eax + ebx + 0xC) = ecx; /* 0x12052A80: mov dword ptr [eax + ebx + 0xc], ecx */
    ecx = MEM32(esi); /* 0x12052A84: mov ecx, dword ptr [esi] */
    eax = MEM32(edi + 0x8); /* 0x12052A86: mov eax, dword ptr [edi + 8] */
    eax = MEM32(eax + 0x25C); /* 0x12052A89: mov eax, dword ptr [eax + 0x25c] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + 0x10); /* 0x12052A8F: add esi, dword ptr [ebp + 0x10] */
    _flag_k = FK_ADD;
    MEM32(eax + ebx + 0x10) = ecx; /* 0x12052A92: mov dword ptr [eax + ebx + 0x10], ecx */
    eax = MEM32(edi + 0x8); /* 0x12052A96: mov eax, dword ptr [edi + 8] */
    eax = MEM32(eax + 0x25C); /* 0x12052A99: mov eax, dword ptr [eax + 0x25c] */
    eax = MEM32(eax + ebx + 0xC); /* 0x12052A9F: mov eax, dword ptr [eax + ebx + 0xc] */
    ecx = MEM32(edi + 0x24); /* 0x12052AA3: mov ecx, dword ptr [edi + 0x24] */
    MEM32(ecx + ebx + 0xC) = eax; /* 0x12052AA6: mov dword ptr [ecx + ebx + 0xc], eax */
    ecx = MEM32(esi); /* 0x12052AAA: mov ecx, dword ptr [esi] */
    eax = MEM32(edi + 0x24); /* 0x12052AAC: mov eax, dword ptr [edi + 0x24] */
    MEM32(eax + ebx + 0x10) = ecx; /* 0x12052AAF: mov dword ptr [eax + ebx + 0x10], ecx */
    ecx = MEM32(edi + 0x24); /* 0x12052AB3: mov ecx, dword ptr [edi + 0x24] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + 0x10); /* 0x12052AB6: add esi, dword ptr [ebp + 0x10] */
    _flag_k = FK_ADD;
    eax = ebx; /* 0x12052AB9: mov eax, ebx */
    eax = MEM32(ecx + eax + 0x10); /* 0x12052ABB: mov eax, dword ptr [ecx + eax + 0x10] */
    _flag_a = (uint32_t)(MEM32(edi + 0x40)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi + 0x40) = MEM32(edi + 0x40) + eax; /* 0x12052ABF: add dword ptr [edi + 0x40], eax */
    _flag_k = FK_ADD;
    eax = ebx; /* 0x12052AC2: mov eax, ebx */
    eax = MEM32(ecx + eax + 0x8); /* 0x12052AC4: mov eax, dword ptr [ecx + eax + 8] */
    _flag_a = (uint32_t)(MEM32(edi + 0x38)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi + 0x38) = MEM32(edi + 0x38) + eax; /* 0x12052AC8: add dword ptr [edi + 0x38], eax */
    _flag_k = FK_ADD;
    eax = MEM32(edi + 0x8); /* 0x12052ACB: mov eax, dword ptr [edi + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x25Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x25Cu; /* 0x12052ACE: add eax, 0x25c */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x18)) = eax; /* 0x12052AD3: mov dword ptr [ebp - 0x18], eax */
    eax = MEM32(eax); /* 0x12052AD6: mov eax, dword ptr [eax] */
    ecx = ebx; /* 0x12052AD8: mov ecx, ebx */
    eax = MEM32(eax + ecx + 0x10); /* 0x12052ADA: mov eax, dword ptr [eax + ecx + 0x10] */
    _flag_a = (uint32_t)(MEM32(edi + 0x44)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi + 0x44) = MEM32(edi + 0x44) + eax; /* 0x12052ADE: add dword ptr [edi + 0x44], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) + 1; /* 0x12052AE1: inc dword ptr [ebp - 0xc] */
    _flag_k = FK_INC;
    ebx = MEM32(ebp + (-0xC)); /* 0x12052AE4: mov ebx, dword ptr [ebp - 0xc] */
    PUSH32(esp, 0x14u); /* 0x12052AE7: push 0x14 */
    eax = POP32_VAL(esp); /* 0x12052AE9: pop eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x12052AEA: add ecx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(edi + 0x8); /* 0x12052AEC: mov eax, dword ptr [edi + 8] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x12052AEF: mov dword ptr [ebp - 4], ecx */
    /* cmp ebx, MEM32(eax + 0x260) */ /* 0x12052AF2: cmp ebx, dword ptr [eax + 0x260] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(eax + 0x260));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12052A1A; /* 0x12052AF8: jb 0x12052a1a */
L_12052AFE:
    ebx = MEM32(ebp + 0x8); /* 0x12052AFE: mov ebx, dword ptr [ebp + 8] */
L_12052B01:
    eax = MEM32(ebx); /* 0x12052B01: mov eax, dword ptr [ebx] */
    PUSH32(esp, ebx); /* 0x12052B03: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x12052B04: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(edi + 0x30)); _flag_b = (uint32_t)(0);
    MEM32(edi + 0x30) = MEM32(edi + 0x30) & 0; /* 0x12052B07: and dword ptr [edi + 0x30], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(ebp + 0x10); /* 0x12052B0B: mov edx, dword ptr [ebp + 0x10] */
    MEM32(edi + 0x34) = eax; /* 0x12052B0E: mov dword ptr [edi + 0x34], eax */
    MEM32(edi + 0x3C) = eax; /* 0x12052B11: mov dword ptr [edi + 0x3c], eax */
    eax = MEM32(edi + 0x44); /* 0x12052B14: mov eax, dword ptr [edi + 0x44] */
    MEM32(edi + 0x48) = eax; /* 0x12052B17: mov dword ptr [edi + 0x48], eax */
    eax = MEM32(esi); /* 0x12052B1A: mov eax, dword ptr [esi] */
    MEM16(edi + 0x7A) = (uint16_t)(LO16(eax)); /* 0x12052B1C: mov word ptr [edi + 0x7a], ax */
    eax = (uint32_t)LO16(eax); /* 0x12052B20: movzx eax, ax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x12052B23: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x12052B25: add esi, edx */
    _flag_k = FK_ADD;
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x12052B27: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x12052B29: seto cl */
    PUSH32(esp, 0x120014BCu); /* 0x12052B2C: push 0x120014bc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x12052B31: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x12052B33: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x12052B35: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x12052B36: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12052B3B: pop ecx */
    ecx = POP32_VAL(esp); /* 0x12052B3C: pop ecx */
    MEM32(edi + 0x74) = eax; /* 0x12052B3D: mov dword ptr [edi + 0x74], eax */
    /* test eax, eax */ /* 0x12052B40: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12052ED0; /* 0x12052B42: je 0x12052ed0 */
L_12052B48:
    eax = MEM32(esi); /* 0x12052B48: mov eax, dword ptr [esi] */
    ecx = MEM32(ebp + 0x10); /* 0x12052B4A: mov ecx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ecx; /* 0x12052B4D: add esi, ecx */
    _flag_k = FK_ADD;
    MEM32(edi + 0x28) = eax; /* 0x12052B4F: mov dword ptr [edi + 0x28], eax */
    eax = MEM32(esi); /* 0x12052B52: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ecx; /* 0x12052B54: add esi, ecx */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x120014BCu); /* 0x12052B56: push 0x120014bc */
    MEM32(edi + 0x2C) = eax; /* 0x12052B5B: mov dword ptr [edi + 0x2c], eax */
    eax = MEM32(esi); /* 0x12052B5E: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ecx; /* 0x12052B60: add esi, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x12052B62: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 8); /* 0x12052B64: push 8 */
    edx = POP32_VAL(esp); /* 0x12052B66: pop edx */
    MEM32(edi + 0x10) = eax; /* 0x12052B67: mov dword ptr [edi + 0x10], eax */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x12052B6A: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x12052B6C: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x12052B6F: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x12052B71: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x12052B73: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x12052B74: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12052B79: pop ecx */
    ecx = POP32_VAL(esp); /* 0x12052B7A: pop ecx */
    ecx = MEM32(edi + 0x20); /* 0x12052B7B: mov ecx, dword ptr [edi + 0x20] */
    MEM32(edi + 0xC) = eax; /* 0x12052B7E: mov dword ptr [edi + 0xc], eax */
    MEM32(ecx + 0x8) = eax; /* 0x12052B81: mov dword ptr [ecx + 8], eax */
    /* cmp MEM32(edi + 0xC), 0 */ /* 0x12052B84: cmp dword ptr [edi + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12052ED0; /* 0x12052B88: je 0x12052ed0 */
L_12052B8E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x12052B8E: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi + 0x10), edx */ /* 0x12052B90: cmp dword ptr [edi + 0x10], edx */
    _flag_a = (uint32_t)(MEM32(edi + 0x10)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_12052BC3; /* 0x12052B93: jbe 0x12052bc3 */
L_12052B95:
    ebx = MEM32(ebp + 0x10); /* 0x12052B95: mov ebx, dword ptr [ebp + 0x10] */
L_12052B98:
    ecx = MEM32(esi); /* 0x12052B98: mov ecx, dword ptr [esi] */
    eax = MEM32(edi + 0xC); /* 0x12052B9A: mov eax, dword ptr [edi + 0xc] */
    MEM32(eax + edx * 8) = ecx; /* 0x12052B9D: mov dword ptr [eax + edx*8], ecx */
    eax = MEM32(edi + 0xC); /* 0x12052BA0: mov eax, dword ptr [edi + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ebx; /* 0x12052BA3: add esi, ebx */
    _flag_k = FK_ADD;
    ecx = MEM32(esi); /* 0x12052BA5: mov ecx, dword ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ebx; /* 0x12052BA7: add esi, ebx */
    _flag_k = FK_ADD;
    MEM16(eax + edx * 8 + 0x4) = (uint16_t)(LO16(ecx)); /* 0x12052BA9: mov word ptr [eax + edx*8 + 4], cx */
    ecx = MEM32(esi); /* 0x12052BAE: mov ecx, dword ptr [esi] */
    eax = MEM32(edi + 0xC); /* 0x12052BB0: mov eax, dword ptr [edi + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ebx; /* 0x12052BB3: add esi, ebx */
    _flag_k = FK_ADD;
    MEM16(eax + edx * 8 + 0x6) = (uint16_t)(LO16(ecx)); /* 0x12052BB5: mov word ptr [eax + edx*8 + 6], cx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x12052BBA: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, MEM32(edi + 0x10) */ /* 0x12052BBB: cmp edx, dword ptr [edi + 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(edi + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12052B98; /* 0x12052BBE: jb 0x12052b98 */
L_12052BC0:
    ebx = MEM32(ebp + 0x8); /* 0x12052BC0: mov ebx, dword ptr [ebp + 8] */
L_12052BC3:
    eax = MEM32(esi); /* 0x12052BC3: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + 0x10); /* 0x12052BC5: add esi, dword ptr [ebp + 0x10] */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x120014BCu); /* 0x12052BC8: push 0x120014bc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x12052BCD: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 2); /* 0x12052BCF: push 2 */
    edx = POP32_VAL(esp); /* 0x12052BD1: pop edx */
    MEM32(edi + 0x1C) = eax; /* 0x12052BD2: mov dword ptr [edi + 0x1c], eax */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x12052BD5: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x12052BD7: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x12052BDA: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x12052BDC: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x12052BDE: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x12052BDF: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12052BE4: pop ecx */
    ecx = POP32_VAL(esp); /* 0x12052BE5: pop ecx */
    ecx = MEM32(edi + 0x20); /* 0x12052BE6: mov ecx, dword ptr [edi + 0x20] */
    MEM32(edi + 0x14) = eax; /* 0x12052BE9: mov dword ptr [edi + 0x14], eax */
    MEM32(ecx + 0xC) = eax; /* 0x12052BEC: mov dword ptr [ecx + 0xc], eax */
    /* cmp MEM32(edi + 0x14), 0 */ /* 0x12052BEF: cmp dword ptr [edi + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12052ED0; /* 0x12052BF3: je 0x12052ed0 */
L_12052BF9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x12052BF9: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi + 0x1C), ecx */ /* 0x12052BFB: cmp dword ptr [edi + 0x1c], ecx */
    _flag_a = (uint32_t)(MEM32(edi + 0x1C)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_12052C1E; /* 0x12052BFE: jbe 0x12052c1e */
L_12052C00:
    edx = MEM32(esi); /* 0x12052C00: mov edx, dword ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + 0x10); /* 0x12052C02: add esi, dword ptr [ebp + 0x10] */
    _flag_k = FK_ADD;
    /* cmp edx, 0xFFFFu */ /* 0x12052C05: cmp edx, 0xffff */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_12052D75; /* 0x12052C0B: ja 0x12052d75 */
L_12052C11:
    eax = MEM32(edi + 0x14); /* 0x12052C11: mov eax, dword ptr [edi + 0x14] */
    MEM16(eax + ecx * 2) = (uint16_t)(LO16(edx)); /* 0x12052C14: mov word ptr [eax + ecx*2], dx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x12052C18: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, MEM32(edi + 0x1C) */ /* 0x12052C19: cmp ecx, dword ptr [edi + 0x1c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12052C00; /* 0x12052C1C: jb 0x12052c00 */
L_12052C1E:
    PUSH32(esp, MEM32(edi + 0x40)); /* 0x12052C1E: push dword ptr [edi + 0x40] */
    ecx = MEM32(edi + 0x8); /* 0x12052C21: mov ecx, dword ptr [edi + 8] */
    PUSH32(esp, MEM32(edi + 0x38)); /* 0x12052C24: push dword ptr [edi + 0x38] */
    RECOMP_CALL(sub_12051228); /* 0x12052C27: call 0x12051228 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x12052C2C: mov esi, eax */
    /* test esi, esi */ /* 0x12052C2E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12052ED5; /* 0x12052C30: js 0x12052ed5 */
L_12052C36:
    eax = MEM32(ebx); /* 0x12052C36: mov eax, dword ptr [ebx] */
    ecx = ebp + (-0x8); /* 0x12052C38: lea ecx, [ebp - 8] */
    PUSH32(esp, ecx); /* 0x12052C3B: push ecx */
    PUSH32(esp, ebx); /* 0x12052C3C: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x38)); /* 0x12052C3D: call dword ptr [eax + 0x38] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x12052C40: mov esi, eax */
    /* test esi, esi */ /* 0x12052C42: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12052ED5; /* 0x12052C44: js 0x12052ed5 */
L_12052C4A:
    eax = MEM32(ebp + (-0x8)); /* 0x12052C4A: mov eax, dword ptr [ebp - 8] */
    ecx = MEM32(eax); /* 0x12052C4D: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0x800u); /* 0x12052C4F: push 0x800 */
    edx = ebp + (-0x1C); /* 0x12052C54: lea edx, [ebp - 0x1c] */
    PUSH32(esp, edx); /* 0x12052C57: push edx */
    PUSH32(esp, 0); /* 0x12052C58: push 0 */
    PUSH32(esp, 0); /* 0x12052C5A: push 0 */
    PUSH32(esp, eax); /* 0x12052C5C: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x2C)); /* 0x12052C5D: call dword ptr [ecx + 0x2c] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x12052C60: mov esi, eax */
    /* test esi, esi */ /* 0x12052C62: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12052ED5; /* 0x12052C64: js 0x12052ed5 */
L_12052C6A:
    eax = MEM32(edi + 0x8); /* 0x12052C6A: mov eax, dword ptr [edi + 8] */
    eax = MEM32(eax + 0x248); /* 0x12052C6D: mov eax, dword ptr [eax + 0x248] */
    ecx = MEM32(eax); /* 0x12052C73: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0x800u); /* 0x12052C75: push 0x800 */
    edx = ebp + (-0x10); /* 0x12052C7A: lea edx, [ebp - 0x10] */
    PUSH32(esp, edx); /* 0x12052C7D: push edx */
    PUSH32(esp, 0); /* 0x12052C7E: push 0 */
    PUSH32(esp, 0); /* 0x12052C80: push 0 */
    PUSH32(esp, eax); /* 0x12052C82: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x2C)); /* 0x12052C83: call dword ptr [ecx + 0x2c] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x12052C86: mov esi, eax */
    /* test esi, esi */ /* 0x12052C88: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12052ED5; /* 0x12052C8A: js 0x12052ed5 */
L_12052C90:
    eax = MEM32(ebx); /* 0x12052C90: mov eax, dword ptr [ebx] */
    ecx = ebp + (-0x14); /* 0x12052C92: lea ecx, [ebp - 0x14] */
    PUSH32(esp, ecx); /* 0x12052C95: push ecx */
    PUSH32(esp, ebx); /* 0x12052C96: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x34)); /* 0x12052C97: call dword ptr [eax + 0x34] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x12052C9A: mov esi, eax */
    /* test esi, esi */ /* 0x12052C9C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12052ED5; /* 0x12052C9E: js 0x12052ed5 */
L_12052CA4:
    eax = MEM32(ebp + (-0x14)); /* 0x12052CA4: mov eax, dword ptr [ebp - 0x14] */
    ecx = MEM32(eax); /* 0x12052CA7: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0x800u); /* 0x12052CA9: push 0x800 */
    edx = ebp + (-0x24); /* 0x12052CAE: lea edx, [ebp - 0x24] */
    PUSH32(esp, edx); /* 0x12052CB1: push edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x12052CB2: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x12052CB4: push ebx */
    PUSH32(esp, ebx); /* 0x12052CB5: push ebx */
    PUSH32(esp, eax); /* 0x12052CB6: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x2C)); /* 0x12052CB7: call dword ptr [ecx + 0x2c] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x12052CBA: mov esi, eax */
    /* test esi, esi */ /* 0x12052CBC: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12052ED5; /* 0x12052CBE: js 0x12052ed5 */
L_12052CC4:
    eax = MEM32(edi + 0x8); /* 0x12052CC4: mov eax, dword ptr [edi + 8] */
    eax = MEM32(eax + 0x234); /* 0x12052CC7: mov eax, dword ptr [eax + 0x234] */
    ecx = MEM32(eax); /* 0x12052CCD: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0x800u); /* 0x12052CCF: push 0x800 */
    edx = ebp + (-0x20); /* 0x12052CD4: lea edx, [ebp - 0x20] */
    PUSH32(esp, edx); /* 0x12052CD7: push edx */
    PUSH32(esp, ebx); /* 0x12052CD8: push ebx */
    PUSH32(esp, ebx); /* 0x12052CD9: push ebx */
    PUSH32(esp, eax); /* 0x12052CDA: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x2C)); /* 0x12052CDB: call dword ptr [ecx + 0x2c] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x12052CDE: mov esi, eax */
    MEM32(ebp + (-0x48)) = esi; /* 0x12052CE0: mov dword ptr [ebp - 0x48], esi */
    /* test esi, esi */ /* 0x12052CE3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12052ED5; /* 0x12052CE5: js 0x12052ed5 */
L_12052CEB:
    eax = MEM32(ebp + (-0x1C)); /* 0x12052CEB: mov eax, dword ptr [ebp - 0x1c] */
    MEM32(ebp + (-0x18)) = eax; /* 0x12052CEE: mov dword ptr [ebp - 0x18], eax */
    eax = MEM32(edi + 0x8); /* 0x12052CF1: mov eax, dword ptr [edi + 8] */
    MEM32(ebp + 0x8) = ebx; /* 0x12052CF4: mov dword ptr [ebp + 8], ebx */
    MEM32(ebp + (-0xC)) = ebx; /* 0x12052CF7: mov dword ptr [ebp - 0xc], ebx */
    /* cmp MEM32(eax + 0x260), ebx */ /* 0x12052CFA: cmp dword ptr [eax + 0x260], ebx */
    _flag_a = (uint32_t)(MEM32(eax + 0x260)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_12052EAF; /* 0x12052D00: jbe 0x12052eaf */
L_12052D06:
    ecx = ebx; /* 0x12052D06: mov ecx, ebx */
    MEM32(ebp + (-0x4)) = ebx; /* 0x12052D08: mov dword ptr [ebp - 4], ebx */
L_12052D0B:
    eax = MEM32(edi + 0x8); /* 0x12052D0B: mov eax, dword ptr [edi + 8] */
    edx = MEM32(eax + 0x25C); /* 0x12052D0E: mov edx, dword ptr [eax + 0x25c] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x12052D14: add edx, ecx */
    _flag_k = FK_ADD;
    ebx = MEM32(edx + 0x4); /* 0x12052D16: mov ebx, dword ptr [edx + 4] */
    eax = MEM32(edx + 0x8); /* 0x12052D19: mov eax, dword ptr [edx + 8] */
    esi = ebx + eax; /* 0x12052D1C: lea esi, [ebx + eax] */
    MEM32(ebp + (-0x34)) = esi; /* 0x12052D1F: mov dword ptr [ebp - 0x34], esi */
    esi = MEM32(ebp + 0x8); /* 0x12052D22: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + eax; /* 0x12052D25: add dword ptr [ebp + 8], eax */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x28)) = esi; /* 0x12052D28: mov dword ptr [ebp - 0x28], esi */
    esi = MEM32(ebp + (-0xC)); /* 0x12052D2B: mov esi, dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x44)) = edx; /* 0x12052D2E: mov dword ptr [ebp - 0x44], edx */
    MEM32(ebp + (-0x30)) = ebx; /* 0x12052D31: mov dword ptr [ebp - 0x30], ebx */
    /* cmp ebx, MEM32(ebp + (-0x34)) */ /* 0x12052D34: cmp ebx, dword ptr [ebp - 0x34] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x34)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_12052E3F; /* 0x12052D37: jae 0x12052e3f */
L_12052D3D:
    edx = ebx; /* 0x12052D3D: mov edx, ebx */
    edx = (uint32_t)((int32_t)edx * (int32_t)6); /* 0x12052D3F: imul edx, edx, 6 */
L_12052D42:
    eax = MEM32(edi + 0x8); /* 0x12052D42: mov eax, dword ptr [edi + 8] */
    eax = MEM32(eax + 0x258); /* 0x12052D45: mov eax, dword ptr [eax + 0x258] */
    MEM16(eax + ebx * 2) = (uint16_t)(LO16(esi)); /* 0x12052D4B: mov word ptr [eax + ebx*2], si */
    esi = MEM32(ebp + (-0x4)); /* 0x12052D4F: mov esi, dword ptr [ebp - 4] */
    ebx = MEM32(ebp + 0xC); /* 0x12052D52: mov ebx, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x2C)) = 3; /* 0x12052D55: mov dword ptr [ebp - 0x2c], 3 */
L_12052D5C:
    /* cmp MEM32(ebx), 0xFFFFFFFFu */ /* 0x12052D5C: cmp dword ptr [ebx], -1 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12052D7F; /* 0x12052D5F: jne 0x12052d7f */
L_12052D61:
    eax = MEM32(edi + 0x8); /* 0x12052D61: mov eax, dword ptr [edi + 8] */
    eax = MEM32(eax + 0x250); /* 0x12052D64: mov eax, dword ptr [eax + 0x250] */
    _flag_a = (uint32_t)((MEM16(edx + eax) | 0xFFFFu)) << 16; _flag_b = (uint32_t)((MEM16(edx + eax) | 0xFFFFu)) << 16;
    MEM16(edx + eax) = (uint16_t)(MEM16(edx + eax) | 0xFFFFu); /* 0x12052D6A: or word ptr [edx + eax], 0xffff */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    goto L_12052E03; /* 0x12052D70: jmp 0x12052e03 */
L_12052D75:
    esi = 0x8876086Cu; /* 0x12052D75: mov esi, 0x8876086c */
    goto L_12052ED5; /* 0x12052D7A: jmp 0x12052ed5 */
L_12052D7F:
    eax = (uint32_t)MEM16(ebx); /* 0x12052D7F: movzx eax, word ptr [ebx] */
    MEM32(ebp + (-0x38)) = eax; /* 0x12052D82: mov dword ptr [ebp - 0x38], eax */
    /* cmp eax, MEM32(ebp + (-0x28)) */ /* 0x12052D85: cmp eax, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x28)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_12052D9D; /* 0x12052D88: jb 0x12052d9d */
L_12052D8A:
    /* cmp eax, MEM32(ebp + 0x8) */ /* 0x12052D8A: cmp eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_12052D9D; /* 0x12052D8D: jae 0x12052d9d */
L_12052D8F:
    eax = MEM32(edi + 0x24); /* 0x12052D8F: mov eax, dword ptr [edi + 0x24] */
    SET_LO16(ecx, MEM16(esi + eax + 0x4)); /* 0x12052D92: mov cx, word ptr [esi + eax + 4] */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x28))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO16(ecx, LO16(ecx) - MEM16(ebp + (-0x28))); /* 0x12052D97: sub cx, word ptr [ebp - 0x28] */
    _flag_k = FK_NARROW(FK_CMP, 16);
    goto L_12052DF0; /* 0x12052D9B: jmp 0x12052df0 */
L_12052D9D:
    eax = MEM32(edi + 0x8); /* 0x12052D9D: mov eax, dword ptr [edi + 8] */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & 0; /* 0x12052DA0: and dword ptr [ebp + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x12052DA4: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(eax + 0x260), ecx */ /* 0x12052DA6: cmp dword ptr [eax + 0x260], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x260)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_12052E03; /* 0x12052DAC: jbe 0x12052e03 */
L_12052DAE:
    eax = MEM32(eax + 0x25C); /* 0x12052DAE: mov eax, dword ptr [eax + 0x25c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x12052DB4: add eax, 8 */
    _flag_k = FK_ADD;
L_12052DB7:
    edi = MEM32(ebp + 0xC); /* 0x12052DB7: mov edi, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x40)) = edi; /* 0x12052DBA: mov dword ptr [ebp - 0x40], edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(eax); /* 0x12052DBD: add edi, dword ptr [eax] */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + (-0x38)), edi */ /* 0x12052DBF: cmp dword ptr [ebp - 0x38], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x38))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0xC) = edi; /* 0x12052DC2: mov dword ptr [ebp + 0xc], edi */
    edi = MEM32(ebp + (-0x3C)); /* 0x12052DC5: mov edi, dword ptr [ebp - 0x3c] */
    if (CMP_B(_flag_a, _flag_b)) goto L_12052DE1; /* 0x12052DC8: jb 0x12052de1 */
L_12052DCA:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x14u; /* 0x12052DCA: add eax, 0x14 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x40)) = eax; /* 0x12052DCD: mov dword ptr [ebp - 0x40], eax */
    eax = MEM32(edi + 0x8); /* 0x12052DD0: mov eax, dword ptr [edi + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x12052DD3: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, MEM32(eax + 0x260) */ /* 0x12052DD4: cmp ecx, dword ptr [eax + 0x260] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x260));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x40)); /* 0x12052DDA: mov eax, dword ptr [ebp - 0x40] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12052DB7; /* 0x12052DDD: jb 0x12052db7 */
L_12052DDF:
    goto L_12052E03; /* 0x12052DDF: jmp 0x12052e03 */
L_12052DE1:
    eax = MEM32(edi + 0x24); /* 0x12052DE1: mov eax, dword ptr [edi + 0x24] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x14u); /* 0x12052DE4: imul ecx, ecx, 0x14 */
    SET_LO16(ecx, MEM16(ecx + eax + 0x4)); /* 0x12052DE7: mov cx, word ptr [ecx + eax + 4] */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x40))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO16(ecx, LO16(ecx) - MEM16(ebp + (-0x40))); /* 0x12052DEC: sub cx, word ptr [ebp - 0x40] */
    _flag_k = FK_NARROW(FK_CMP, 16);
L_12052DF0:
    eax = (uint32_t)MEM16(ebx); /* 0x12052DF0: movzx eax, word ptr [ebx] */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO16(ecx, LO16(ecx) + LO16(eax)); /* 0x12052DF3: add cx, ax */
    _flag_k = FK_NARROW(FK_ADD, 16);
    eax = MEM32(edi + 0x8); /* 0x12052DF6: mov eax, dword ptr [edi + 8] */
    eax = MEM32(eax + 0x250); /* 0x12052DF9: mov eax, dword ptr [eax + 0x250] */
    MEM16(edx + eax) = (uint16_t)(LO16(ecx)); /* 0x12052DFF: mov word ptr [edx + eax], cx */
L_12052E03:
    eax = MEM32(ebp + (-0x18)); /* 0x12052E03: mov eax, dword ptr [ebp - 0x18] */
    SET_LO16(ecx, MEM16(eax)); /* 0x12052E06: mov cx, word ptr [eax] */
    eax = MEM32(ebp + (-0x10)); /* 0x12052E09: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(ebp + 0x10); /* 0x12052E0C: add ebx, dword ptr [ebp + 0x10] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x18)) = MEM32(ebp + (-0x18)) + 2; /* 0x12052E0F: add dword ptr [ebp - 0x18], 2 */
    _flag_k = FK_ADD;
    MEM16(edx + eax) = (uint16_t)(LO16(ecx)); /* 0x12052E13: mov word ptr [edx + eax], cx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x12052E17: add edx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x2C)) = MEM32(ebp + (-0x2C)) - 1; /* 0x12052E1A: dec dword ptr [ebp - 0x2c] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12052D5C; /* 0x12052E1D: jne 0x12052d5c */
L_12052E23:
    esi = MEM32(ebp + (-0xC)); /* 0x12052E23: mov esi, dword ptr [ebp - 0xc] */
    MEM32(ebp + 0xC) = ebx; /* 0x12052E26: mov dword ptr [ebp + 0xc], ebx */
    ebx = MEM32(ebp + (-0x30)); /* 0x12052E29: mov ebx, dword ptr [ebp - 0x30] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x12052E2C: inc ebx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x30)) = ebx; /* 0x12052E2D: mov dword ptr [ebp - 0x30], ebx */
    /* cmp ebx, MEM32(ebp + (-0x34)) */ /* 0x12052E30: cmp ebx, dword ptr [ebp - 0x34] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x34)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12052D42; /* 0x12052E33: jb 0x12052d42 */
L_12052E39:
    edx = MEM32(ebp + (-0x44)); /* 0x12052E39: mov edx, dword ptr [ebp - 0x44] */
    ecx = MEM32(ebp + (-0x4)); /* 0x12052E3C: mov ecx, dword ptr [ebp - 4] */
L_12052E3F:
    eax = MEM32(edi + 0x24); /* 0x12052E3F: mov eax, dword ptr [edi + 0x24] */
    ebx = MEM32(ecx + eax + 0x8); /* 0x12052E42: mov ebx, dword ptr [ecx + eax + 8] */
    ecx = MEM32(edx + 0x8); /* 0x12052E46: mov ecx, dword ptr [edx + 8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(edx + 0x4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(edx + 0x4); /* 0x12052E49: add ebx, dword ptr [edx + 4] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx + 0x4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(edx + 0x4); /* 0x12052E4C: add ecx, dword ptr [edx + 4] */
    _flag_k = FK_ADD;
    /* cmp ecx, ebx */ /* 0x12052E4F: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_12052E8E; /* 0x12052E51: jae 0x12052e8e */
L_12052E53:
    edx = ecx; /* 0x12052E53: mov edx, ecx */
    edx = (uint32_t)((int32_t)edx * (int32_t)6); /* 0x12052E55: imul edx, edx, 6 */
L_12052E58:
    eax = MEM32(edi + 0x8); /* 0x12052E58: mov eax, dword ptr [edi + 8] */
    eax = MEM32(eax + 0x258); /* 0x12052E5B: mov eax, dword ptr [eax + 0x258] */
    PUSH32(esp, 3); /* 0x12052E61: push 3 */
    MEM16(eax + ecx * 2) = (uint16_t)(LO16(esi)); /* 0x12052E63: mov word ptr [eax + ecx*2], si */
    esi = POP32_VAL(esp); /* 0x12052E67: pop esi */
L_12052E68:
    eax = MEM32(edi + 0x8); /* 0x12052E68: mov eax, dword ptr [edi + 8] */
    eax = MEM32(eax + 0x250); /* 0x12052E6B: mov eax, dword ptr [eax + 0x250] */
    _flag_a = (uint32_t)((MEM16(edx + eax) | 0xFFFFu)) << 16; _flag_b = (uint32_t)((MEM16(edx + eax) | 0xFFFFu)) << 16;
    MEM16(edx + eax) = (uint16_t)(MEM16(edx + eax) | 0xFFFFu); /* 0x12052E71: or word ptr [edx + eax], 0xffff */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    eax = MEM32(ebp + (-0x10)); /* 0x12052E77: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((MEM16(edx + eax) | 0xFFFFu)) << 16; _flag_b = (uint32_t)((MEM16(edx + eax) | 0xFFFFu)) << 16;
    MEM16(edx + eax) = (uint16_t)(MEM16(edx + eax) | 0xFFFFu); /* 0x12052E7A: or word ptr [edx + eax], 0xffff */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x12052E80: add edx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x12052E83: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12052E68; /* 0x12052E84: jne 0x12052e68 */
L_12052E86:
    esi = MEM32(ebp + (-0xC)); /* 0x12052E86: mov esi, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x12052E89: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, ebx */ /* 0x12052E8A: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12052E58; /* 0x12052E8C: jb 0x12052e58 */
L_12052E8E:
    ecx = MEM32(ebp + (-0x4)); /* 0x12052E8E: mov ecx, dword ptr [ebp - 4] */
    PUSH32(esp, 0x14u); /* 0x12052E91: push 0x14 */
    eax = POP32_VAL(esp); /* 0x12052E93: pop eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x12052E94: add ecx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(edi + 0x8); /* 0x12052E96: mov eax, dword ptr [edi + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x12052E99: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0xC)) = esi; /* 0x12052E9A: mov dword ptr [ebp - 0xc], esi */
    MEM32(ebp + (-0x4)) = ecx; /* 0x12052E9D: mov dword ptr [ebp - 4], ecx */
    /* cmp esi, MEM32(eax + 0x260) */ /* 0x12052EA0: cmp esi, dword ptr [eax + 0x260] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax + 0x260));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12052D0B; /* 0x12052EA6: jb 0x12052d0b */
L_12052EAC:
    esi = MEM32(ebp + (-0x48)); /* 0x12052EAC: mov esi, dword ptr [ebp - 0x48] */
L_12052EAF:
    eax = MEM32(edi + 0x8); /* 0x12052EAF: mov eax, dword ptr [edi + 8] */
    ecx = MEM32(eax + 0x23C); /* 0x12052EB2: mov ecx, dword ptr [eax + 0x23c] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(eax + 0x238)); /* 0x12052EB8: imul ecx, dword ptr [eax + 0x238] */
    PUSH32(esp, ecx); /* 0x12052EBF: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x12052EC0: push dword ptr [ebp - 0x24] */
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x12052EC3: push dword ptr [ebp - 0x20] */
    RECOMP_CALL(sub_121BF440); /* 0x12052EC6: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x12052ECB: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_12052ED5; /* 0x12052ECE: jmp 0x12052ed5 */
L_12052ED0:
    esi = 0x8007000Eu; /* 0x12052ED0: mov esi, 0x8007000e */
L_12052ED5:
    /* cmp MEM32(ebp + (-0x10)), 0 */ /* 0x12052ED5: cmp dword ptr [ebp - 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12052EEA; /* 0x12052ED9: je 0x12052eea */
L_12052EDB:
    eax = MEM32(edi + 0x8); /* 0x12052EDB: mov eax, dword ptr [edi + 8] */
    eax = MEM32(eax + 0x248); /* 0x12052EDE: mov eax, dword ptr [eax + 0x248] */
    ecx = MEM32(eax); /* 0x12052EE4: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x12052EE6: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x12052EE7: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
L_12052EEA:
    /* cmp MEM32(ebp + (-0x1C)), 0 */ /* 0x12052EEA: cmp dword ptr [ebp - 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12052EF9; /* 0x12052EEE: je 0x12052ef9 */
L_12052EF0:
    eax = MEM32(ebp + (-0x8)); /* 0x12052EF0: mov eax, dword ptr [ebp - 8] */
    ecx = MEM32(eax); /* 0x12052EF3: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x12052EF5: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x12052EF6: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
L_12052EF9:
    ecx = MEM32(ebp + (-0x8)); /* 0x12052EF9: mov ecx, dword ptr [ebp - 8] */
    /* test ecx, ecx */ /* 0x12052EFC: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12052F0A; /* 0x12052EFE: je 0x12052f0a */
L_12052F00:
    eax = MEM32(ecx); /* 0x12052F00: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x12052F02: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x12052F03: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x12052F06: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_12052F0A:
    /* cmp MEM32(ebp + (-0x20)), 0 */ /* 0x12052F0A: cmp dword ptr [ebp - 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12052F1F; /* 0x12052F0E: je 0x12052f1f */
L_12052F10:
    eax = MEM32(edi + 0x8); /* 0x12052F10: mov eax, dword ptr [edi + 8] */
    eax = MEM32(eax + 0x234); /* 0x12052F13: mov eax, dword ptr [eax + 0x234] */
    ecx = MEM32(eax); /* 0x12052F19: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x12052F1B: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x12052F1C: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
L_12052F1F:
    /* cmp MEM32(ebp + (-0x24)), 0 */ /* 0x12052F1F: cmp dword ptr [ebp - 0x24], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12052F2E; /* 0x12052F23: je 0x12052f2e */
L_12052F25:
    eax = MEM32(ebp + (-0x14)); /* 0x12052F25: mov eax, dword ptr [ebp - 0x14] */
    ecx = MEM32(eax); /* 0x12052F28: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x12052F2A: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x12052F2B: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
L_12052F2E:
    ecx = MEM32(ebp + (-0x14)); /* 0x12052F2E: mov ecx, dword ptr [ebp - 0x14] */
    /* test ecx, ecx */ /* 0x12052F31: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12052F3B; /* 0x12052F33: je 0x12052f3b */
L_12052F35:
    eax = MEM32(ecx); /* 0x12052F35: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x12052F37: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x12052F38: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_12052F3B:
    edi = POP32_VAL(esp); /* 0x12052F3B: pop edi */
    eax = esi; /* 0x12052F3C: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x12052F3E: pop esi */
    ebx = POP32_VAL(esp); /* 0x12052F3F: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12052F40: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x12052F41: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_12052F49(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12052F49u);

L_12052F49:
    edi = edi; /* 0x12052F49: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12052F4B: push ebp */
    ebp = esp; /* 0x12052F4C: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x44u; /* 0x12052F4E: sub esp, 0x44 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x12052F51: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x12052F52: mov ebx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12052F55: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x12052F57: push esi */
    PUSH32(esp, edi); /* 0x12052F58: push edi */
    MEM32(ebp + (-0x14)) = eax; /* 0x12052F59: mov dword ptr [ebp - 0x14], eax */
    MEM32(ebp + (-0x8)) = eax; /* 0x12052F5C: mov dword ptr [ebp - 8], eax */
    MEM32(ebp + (-0x20)) = eax; /* 0x12052F5F: mov dword ptr [ebp - 0x20], eax */
    MEM32(ebp + (-0x1C)) = eax; /* 0x12052F62: mov dword ptr [ebp - 0x1c], eax */
    MEM32(ebp + (-0x18)) = eax; /* 0x12052F65: mov dword ptr [ebp - 0x18], eax */
    MEM32(ebp + (-0x10)) = eax; /* 0x12052F68: mov dword ptr [ebp - 0x10], eax */
    eax = MEM32(ebx); /* 0x12052F6B: mov eax, dword ptr [ebx] */
    PUSH32(esp, ebx); /* 0x12052F6D: push ebx */
    edi = ecx; /* 0x12052F6E: mov edi, ecx */
    RECOMP_ICALL(MEM32(eax + 0x24)); /* 0x12052F70: call dword ptr [eax + 0x24] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi); /* 0x12052F73: mov ecx, dword ptr [edi] */
    esi = eax; /* 0x12052F75: mov esi, eax */
    PUSH32(esp, edi); /* 0x12052F77: push edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi & 1; /* 0x12052F78: and esi, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ICALL(MEM32(ecx + 0x24)); /* 0x12052F7B: call dword ptr [ecx + 0x24] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x12052F7E: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, eax */ /* 0x12052F81: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120533BE; /* 0x12052F83: jne 0x120533be */
L_12052F89:
    PUSH32(esp, 0x120014BCu); /* 0x12052F89: push 0x120014bc */
    PUSH32(esp, 0x10u); /* 0x12052F8E: push 0x10 */
    RECOMP_CALL(sub_12018970); /* 0x12052F90: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12052F95: pop ecx */
    ecx = POP32_VAL(esp); /* 0x12052F96: pop ecx */
    /* test eax, eax */ /* 0x12052F97: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12052FB2; /* 0x12052F99: je 0x12052fb2 */
L_12052F9B:
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(eax + 0x8) = MEM32(eax + 0x8) & 0; /* 0x12052F9B: and dword ptr [eax + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(eax + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(eax + 0xC) = MEM32(eax + 0xC) & 0; /* 0x12052F9F: and dword ptr [eax + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = 0x120060CCu; /* 0x12052FA3: mov dword ptr [eax], 0x120060cc */
    MEM32(eax + 0x4) = 1; /* 0x12052FA9: mov dword ptr [eax + 4], 1 */
    goto L_12052FB4; /* 0x12052FB0: jmp 0x12052fb4 */
L_12052FB2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12052FB2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_12052FB4:
    MEM32(edi + 0x20) = eax; /* 0x12052FB4: mov dword ptr [edi + 0x20], eax */
    /* test eax, eax */ /* 0x12052FB7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1205351A; /* 0x12052FB9: je 0x1205351a */
L_12052FBF:
    eax = MEM32(ebp + 0x10); /* 0x12052FBF: mov eax, dword ptr [ebp + 0x10] */
    ecx = MEM32(eax); /* 0x12052FC2: mov ecx, dword ptr [eax] */
    esi = eax + 0x4; /* 0x12052FC4: lea esi, [eax + 4] */
    eax = MEM32(edi + 0x8); /* 0x12052FC7: mov eax, dword ptr [edi + 8] */
    MEM32(eax + 0x260) = ecx; /* 0x12052FCA: mov dword ptr [eax + 0x260], ecx */
    eax = MEM32(edi + 0x8); /* 0x12052FD0: mov eax, dword ptr [edi + 8] */
    eax = MEM32(eax + 0x260); /* 0x12052FD3: mov eax, dword ptr [eax + 0x260] */
    PUSH32(esp, 0x120014BCu); /* 0x12052FD9: push 0x120014bc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x12052FDE: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x14u); /* 0x12052FE0: push 0x14 */
    edx = POP32_VAL(esp); /* 0x12052FE2: pop edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x12052FE3: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x12052FE5: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x12052FE8: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x12052FEA: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x12052FEC: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x12052FED: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi + 0x8); /* 0x12052FF2: mov ecx, dword ptr [edi + 8] */
    MEM32(ecx + 0x25C) = eax; /* 0x12052FF5: mov dword ptr [ecx + 0x25c], eax */
    eax = MEM32(edi + 0x8); /* 0x12052FFB: mov eax, dword ptr [edi + 8] */
    eax = MEM32(eax + 0x260); /* 0x12052FFE: mov eax, dword ptr [eax + 0x260] */
    PUSH32(esp, 0x120014BCu); /* 0x12053004: push 0x120014bc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x12053009: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x14u); /* 0x1205300B: push 0x14 */
    edx = POP32_VAL(esp); /* 0x1205300D: pop edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x1205300E: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x12053010: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x12053013: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x12053015: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x12053017: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x12053018: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi + 0x8); /* 0x1205301D: mov ecx, dword ptr [edi + 8] */
    edx = ecx + 0x25C; /* 0x12053020: lea edx, [ecx + 0x25c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x12053026: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(edi + 0x24) = eax; /* 0x12053029: mov dword ptr [edi + 0x24], eax */
    /* cmp MEM32(edx), 0 */ /* 0x1205302C: cmp dword ptr [edx], 0 */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x24)) = edx; /* 0x1205302F: mov dword ptr [ebp - 0x24], edx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1205351A; /* 0x12053032: je 0x1205351a */
L_12053038:
    /* test eax, eax */ /* 0x12053038: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1205351A; /* 0x1205303A: je 0x1205351a */
L_12053040:
    _flag_a = (uint32_t)(MEM32(edi + 0x40)); _flag_b = (uint32_t)(0);
    MEM32(edi + 0x40) = MEM32(edi + 0x40) & 0; /* 0x12053040: and dword ptr [edi + 0x40], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(edi + 0x38)); _flag_b = (uint32_t)(0);
    MEM32(edi + 0x38) = MEM32(edi + 0x38) & 0; /* 0x12053044: and dword ptr [edi + 0x38], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12053048: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x44) = eax; /* 0x1205304A: mov dword ptr [edi + 0x44], eax */
    MEM32(ebp + (-0xC)) = eax; /* 0x1205304D: mov dword ptr [ebp - 0xc], eax */
    MEM32(ebp + 0x10) = 4; /* 0x12053050: mov dword ptr [ebp + 0x10], 4 */
    /* cmp MEM32(ecx + 0x260), eax */ /* 0x12053057: cmp dword ptr [ecx + 0x260], eax */
    _flag_a = (uint32_t)(MEM32(ecx + 0x260)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1205314F; /* 0x1205305D: jbe 0x1205314f */
L_12053063:
    ecx = eax; /* 0x12053063: mov ecx, eax */
    MEM32(ebp + (-0x4)) = eax; /* 0x12053065: mov dword ptr [ebp - 4], eax */
L_12053068:
    eax = MEM32(ebp + (-0x24)); /* 0x12053068: mov eax, dword ptr [ebp - 0x24] */
    eax = MEM32(eax); /* 0x1205306B: mov eax, dword ptr [eax] */
    ebx = MEM32(ebp + (-0xC)); /* 0x1205306D: mov ebx, dword ptr [ebp - 0xc] */
    MEM32(ecx + eax) = ebx; /* 0x12053070: mov dword ptr [ecx + eax], ebx */
    eax = MEM32(edi + 0x24); /* 0x12053073: mov eax, dword ptr [edi + 0x24] */
    MEM32(ecx + eax) = ebx; /* 0x12053076: mov dword ptr [ecx + eax], ebx */
    ecx = MEM32(esi); /* 0x12053079: mov ecx, dword ptr [esi] */
    ebx = MEM32(ebp + (-0x4)); /* 0x1205307B: mov ebx, dword ptr [ebp - 4] */
    eax = MEM32(edi + 0x8); /* 0x1205307E: mov eax, dword ptr [edi + 8] */
    eax = MEM32(eax + 0x25C); /* 0x12053081: mov eax, dword ptr [eax + 0x25c] */
    MEM32(eax + ebx + 0x4) = ecx; /* 0x12053087: mov dword ptr [eax + ebx + 4], ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + 0x10); /* 0x1205308B: add esi, dword ptr [ebp + 0x10] */
    _flag_k = FK_ADD;
    eax = MEM32(edi + 0x8); /* 0x1205308E: mov eax, dword ptr [edi + 8] */
    eax = MEM32(eax + 0x25C); /* 0x12053091: mov eax, dword ptr [eax + 0x25c] */
    ecx = MEM32(esi); /* 0x12053097: mov ecx, dword ptr [esi] */
    MEM32(eax + ebx + 0x8) = ecx; /* 0x12053099: mov dword ptr [eax + ebx + 8], ecx */
    eax = MEM32(edi + 0x8); /* 0x1205309D: mov eax, dword ptr [edi + 8] */
    eax = MEM32(eax + 0x25C); /* 0x120530A0: mov eax, dword ptr [eax + 0x25c] */
    eax = MEM32(eax + ebx + 0x4); /* 0x120530A6: mov eax, dword ptr [eax + ebx + 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + 0x10); /* 0x120530AA: add esi, dword ptr [ebp + 0x10] */
    _flag_k = FK_ADD;
    ecx = MEM32(edi + 0x24); /* 0x120530AD: mov ecx, dword ptr [edi + 0x24] */
    MEM32(ecx + ebx + 0x4) = eax; /* 0x120530B0: mov dword ptr [ecx + ebx + 4], eax */
    ecx = MEM32(esi); /* 0x120530B4: mov ecx, dword ptr [esi] */
    eax = MEM32(edi + 0x24); /* 0x120530B6: mov eax, dword ptr [edi + 0x24] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + 0x10); /* 0x120530B9: add esi, dword ptr [ebp + 0x10] */
    _flag_k = FK_ADD;
    MEM32(eax + ebx + 0x8) = ecx; /* 0x120530BC: mov dword ptr [eax + ebx + 8], ecx */
    ecx = MEM32(esi); /* 0x120530C0: mov ecx, dword ptr [esi] */
    eax = MEM32(edi + 0x8); /* 0x120530C2: mov eax, dword ptr [edi + 8] */
    eax = MEM32(eax + 0x25C); /* 0x120530C5: mov eax, dword ptr [eax + 0x25c] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + 0x10); /* 0x120530CB: add esi, dword ptr [ebp + 0x10] */
    _flag_k = FK_ADD;
    MEM32(eax + ebx + 0xC) = ecx; /* 0x120530CE: mov dword ptr [eax + ebx + 0xc], ecx */
    ecx = MEM32(esi); /* 0x120530D2: mov ecx, dword ptr [esi] */
    eax = MEM32(edi + 0x8); /* 0x120530D4: mov eax, dword ptr [edi + 8] */
    eax = MEM32(eax + 0x25C); /* 0x120530D7: mov eax, dword ptr [eax + 0x25c] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + 0x10); /* 0x120530DD: add esi, dword ptr [ebp + 0x10] */
    _flag_k = FK_ADD;
    MEM32(eax + ebx + 0x10) = ecx; /* 0x120530E0: mov dword ptr [eax + ebx + 0x10], ecx */
    eax = MEM32(edi + 0x8); /* 0x120530E4: mov eax, dword ptr [edi + 8] */
    eax = MEM32(eax + 0x25C); /* 0x120530E7: mov eax, dword ptr [eax + 0x25c] */
    eax = MEM32(eax + ebx + 0xC); /* 0x120530ED: mov eax, dword ptr [eax + ebx + 0xc] */
    ecx = MEM32(edi + 0x24); /* 0x120530F1: mov ecx, dword ptr [edi + 0x24] */
    MEM32(ecx + ebx + 0xC) = eax; /* 0x120530F4: mov dword ptr [ecx + ebx + 0xc], eax */
    ecx = MEM32(esi); /* 0x120530F8: mov ecx, dword ptr [esi] */
    eax = MEM32(edi + 0x24); /* 0x120530FA: mov eax, dword ptr [edi + 0x24] */
    MEM32(eax + ebx + 0x10) = ecx; /* 0x120530FD: mov dword ptr [eax + ebx + 0x10], ecx */
    ecx = MEM32(edi + 0x24); /* 0x12053101: mov ecx, dword ptr [edi + 0x24] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + 0x10); /* 0x12053104: add esi, dword ptr [ebp + 0x10] */
    _flag_k = FK_ADD;
    eax = ebx; /* 0x12053107: mov eax, ebx */
    eax = MEM32(ecx + eax + 0x10); /* 0x12053109: mov eax, dword ptr [ecx + eax + 0x10] */
    _flag_a = (uint32_t)(MEM32(edi + 0x40)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi + 0x40) = MEM32(edi + 0x40) + eax; /* 0x1205310D: add dword ptr [edi + 0x40], eax */
    _flag_k = FK_ADD;
    eax = ebx; /* 0x12053110: mov eax, ebx */
    eax = MEM32(ecx + eax + 0x8); /* 0x12053112: mov eax, dword ptr [ecx + eax + 8] */
    _flag_a = (uint32_t)(MEM32(edi + 0x38)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi + 0x38) = MEM32(edi + 0x38) + eax; /* 0x12053116: add dword ptr [edi + 0x38], eax */
    _flag_k = FK_ADD;
    eax = MEM32(edi + 0x8); /* 0x12053119: mov eax, dword ptr [edi + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x25Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x25Cu; /* 0x1205311C: add eax, 0x25c */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x24)) = eax; /* 0x12053121: mov dword ptr [ebp - 0x24], eax */
    eax = MEM32(eax); /* 0x12053124: mov eax, dword ptr [eax] */
    ecx = ebx; /* 0x12053126: mov ecx, ebx */
    eax = MEM32(eax + ecx + 0x10); /* 0x12053128: mov eax, dword ptr [eax + ecx + 0x10] */
    _flag_a = (uint32_t)(MEM32(edi + 0x44)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi + 0x44) = MEM32(edi + 0x44) + eax; /* 0x1205312C: add dword ptr [edi + 0x44], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) + 1; /* 0x1205312F: inc dword ptr [ebp - 0xc] */
    _flag_k = FK_INC;
    ebx = MEM32(ebp + (-0xC)); /* 0x12053132: mov ebx, dword ptr [ebp - 0xc] */
    PUSH32(esp, 0x14u); /* 0x12053135: push 0x14 */
    eax = POP32_VAL(esp); /* 0x12053137: pop eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x12053138: add ecx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(edi + 0x8); /* 0x1205313A: mov eax, dword ptr [edi + 8] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x1205313D: mov dword ptr [ebp - 4], ecx */
    /* cmp ebx, MEM32(eax + 0x260) */ /* 0x12053140: cmp ebx, dword ptr [eax + 0x260] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(eax + 0x260));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12053068; /* 0x12053146: jb 0x12053068 */
L_1205314C:
    ebx = MEM32(ebp + 0x8); /* 0x1205314C: mov ebx, dword ptr [ebp + 8] */
L_1205314F:
    eax = MEM32(ebx); /* 0x1205314F: mov eax, dword ptr [ebx] */
    PUSH32(esp, ebx); /* 0x12053151: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x12053152: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(edi + 0x30)); _flag_b = (uint32_t)(0);
    MEM32(edi + 0x30) = MEM32(edi + 0x30) & 0; /* 0x12053155: and dword ptr [edi + 0x30], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(ebp + 0x10); /* 0x12053159: mov edx, dword ptr [ebp + 0x10] */
    MEM32(edi + 0x34) = eax; /* 0x1205315C: mov dword ptr [edi + 0x34], eax */
    MEM32(edi + 0x3C) = eax; /* 0x1205315F: mov dword ptr [edi + 0x3c], eax */
    eax = MEM32(edi + 0x44); /* 0x12053162: mov eax, dword ptr [edi + 0x44] */
    MEM32(edi + 0x48) = eax; /* 0x12053165: mov dword ptr [edi + 0x48], eax */
    eax = MEM32(esi); /* 0x12053168: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1205316A: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x1205316C: add esi, edx */
    _flag_k = FK_ADD;
    MEM32(edi + 0xA0) = eax; /* 0x1205316E: mov dword ptr [edi + 0xa0], eax */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x12053174: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x12053176: seto cl */
    PUSH32(esp, 0x120014BCu); /* 0x12053179: push 0x120014bc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1205317E: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x12053180: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x12053182: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x12053183: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12053188: pop ecx */
    ecx = POP32_VAL(esp); /* 0x12053189: pop ecx */
    MEM32(edi + 0x98) = eax; /* 0x1205318A: mov dword ptr [edi + 0x98], eax */
    /* test eax, eax */ /* 0x12053190: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1205351A; /* 0x12053192: je 0x1205351a */
L_12053198:
    eax = MEM32(esi); /* 0x12053198: mov eax, dword ptr [esi] */
    ecx = MEM32(ebp + 0x10); /* 0x1205319A: mov ecx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ecx; /* 0x1205319D: add esi, ecx */
    _flag_k = FK_ADD;
    MEM32(edi + 0x28) = eax; /* 0x1205319F: mov dword ptr [edi + 0x28], eax */
    eax = MEM32(esi); /* 0x120531A2: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ecx; /* 0x120531A4: add esi, ecx */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x120014BCu); /* 0x120531A6: push 0x120014bc */
    MEM32(edi + 0x2C) = eax; /* 0x120531AB: mov dword ptr [edi + 0x2c], eax */
    eax = MEM32(esi); /* 0x120531AE: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ecx; /* 0x120531B0: add esi, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120531B2: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 8); /* 0x120531B4: push 8 */
    edx = POP32_VAL(esp); /* 0x120531B6: pop edx */
    MEM32(edi + 0x10) = eax; /* 0x120531B7: mov dword ptr [edi + 0x10], eax */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x120531BA: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x120531BC: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x120531BF: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x120531C1: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x120531C3: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x120531C4: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120531C9: pop ecx */
    ecx = POP32_VAL(esp); /* 0x120531CA: pop ecx */
    ecx = MEM32(edi + 0x20); /* 0x120531CB: mov ecx, dword ptr [edi + 0x20] */
    MEM32(edi + 0xC) = eax; /* 0x120531CE: mov dword ptr [edi + 0xc], eax */
    MEM32(ecx + 0x8) = eax; /* 0x120531D1: mov dword ptr [ecx + 8], eax */
    /* cmp MEM32(edi + 0xC), 0 */ /* 0x120531D4: cmp dword ptr [edi + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1205351A; /* 0x120531D8: je 0x1205351a */
L_120531DE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120531DE: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi + 0x10), edx */ /* 0x120531E0: cmp dword ptr [edi + 0x10], edx */
    _flag_a = (uint32_t)(MEM32(edi + 0x10)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_12053213; /* 0x120531E3: jbe 0x12053213 */
L_120531E5:
    ebx = MEM32(ebp + 0x10); /* 0x120531E5: mov ebx, dword ptr [ebp + 0x10] */
L_120531E8:
    ecx = MEM32(esi); /* 0x120531E8: mov ecx, dword ptr [esi] */
    eax = MEM32(edi + 0xC); /* 0x120531EA: mov eax, dword ptr [edi + 0xc] */
    MEM32(eax + edx * 8) = ecx; /* 0x120531ED: mov dword ptr [eax + edx*8], ecx */
    eax = MEM32(edi + 0xC); /* 0x120531F0: mov eax, dword ptr [edi + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ebx; /* 0x120531F3: add esi, ebx */
    _flag_k = FK_ADD;
    ecx = MEM32(esi); /* 0x120531F5: mov ecx, dword ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ebx; /* 0x120531F7: add esi, ebx */
    _flag_k = FK_ADD;
    MEM16(eax + edx * 8 + 0x4) = (uint16_t)(LO16(ecx)); /* 0x120531F9: mov word ptr [eax + edx*8 + 4], cx */
    ecx = MEM32(esi); /* 0x120531FE: mov ecx, dword ptr [esi] */
    eax = MEM32(edi + 0xC); /* 0x12053200: mov eax, dword ptr [edi + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ebx; /* 0x12053203: add esi, ebx */
    _flag_k = FK_ADD;
    MEM16(eax + edx * 8 + 0x6) = (uint16_t)(LO16(ecx)); /* 0x12053205: mov word ptr [eax + edx*8 + 6], cx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1205320A: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, MEM32(edi + 0x10) */ /* 0x1205320B: cmp edx, dword ptr [edi + 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(edi + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120531E8; /* 0x1205320E: jb 0x120531e8 */
L_12053210:
    ebx = MEM32(ebp + 0x8); /* 0x12053210: mov ebx, dword ptr [ebp + 8] */
L_12053213:
    eax = MEM32(esi); /* 0x12053213: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + 0x10); /* 0x12053215: add esi, dword ptr [ebp + 0x10] */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x120014BCu); /* 0x12053218: push 0x120014bc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1205321D: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 2); /* 0x1205321F: push 2 */
    edx = POP32_VAL(esp); /* 0x12053221: pop edx */
    MEM32(edi + 0x1C) = eax; /* 0x12053222: mov dword ptr [edi + 0x1c], eax */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x12053225: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x12053227: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1205322A: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1205322C: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1205322E: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x1205322F: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12053234: pop ecx */
    ecx = POP32_VAL(esp); /* 0x12053235: pop ecx */
    ecx = MEM32(edi + 0x20); /* 0x12053236: mov ecx, dword ptr [edi + 0x20] */
    MEM32(edi + 0x14) = eax; /* 0x12053239: mov dword ptr [edi + 0x14], eax */
    MEM32(ecx + 0xC) = eax; /* 0x1205323C: mov dword ptr [ecx + 0xc], eax */
    /* cmp MEM32(edi + 0x14), 0 */ /* 0x1205323F: cmp dword ptr [edi + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1205351A; /* 0x12053243: je 0x1205351a */
L_12053249:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x12053249: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi + 0x1C), ecx */ /* 0x1205324B: cmp dword ptr [edi + 0x1c], ecx */
    _flag_a = (uint32_t)(MEM32(edi + 0x1C)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1205326E; /* 0x1205324E: jbe 0x1205326e */
L_12053250:
    edx = MEM32(esi); /* 0x12053250: mov edx, dword ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + 0x10); /* 0x12053252: add esi, dword ptr [ebp + 0x10] */
    _flag_k = FK_ADD;
    /* cmp edx, 0xFFFFu */ /* 0x12053255: cmp edx, 0xffff */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120533BE; /* 0x1205325B: ja 0x120533be */
L_12053261:
    eax = MEM32(edi + 0x14); /* 0x12053261: mov eax, dword ptr [edi + 0x14] */
    MEM16(eax + ecx * 2) = (uint16_t)(LO16(edx)); /* 0x12053264: mov word ptr [eax + ecx*2], dx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x12053268: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, MEM32(edi + 0x1C) */ /* 0x12053269: cmp ecx, dword ptr [edi + 0x1c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12053250; /* 0x1205326C: jb 0x12053250 */
L_1205326E:
    PUSH32(esp, MEM32(edi + 0x40)); /* 0x1205326E: push dword ptr [edi + 0x40] */
    ecx = MEM32(edi + 0x8); /* 0x12053271: mov ecx, dword ptr [edi + 8] */
    PUSH32(esp, MEM32(edi + 0x38)); /* 0x12053274: push dword ptr [edi + 0x38] */
    RECOMP_CALL(sub_12051FB8); /* 0x12053277: call 0x12051fb8 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1205327C: mov esi, eax */
    /* test esi, esi */ /* 0x1205327E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1205351F; /* 0x12053280: js 0x1205351f */
L_12053286:
    eax = MEM32(ebx); /* 0x12053286: mov eax, dword ptr [ebx] */
    ecx = ebp + (-0x8); /* 0x12053288: lea ecx, [ebp - 8] */
    PUSH32(esp, ecx); /* 0x1205328B: push ecx */
    PUSH32(esp, ebx); /* 0x1205328C: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x38)); /* 0x1205328D: call dword ptr [eax + 0x38] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x12053290: mov esi, eax */
    /* test esi, esi */ /* 0x12053292: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1205351F; /* 0x12053294: js 0x1205351f */
L_1205329A:
    eax = MEM32(ebp + (-0x8)); /* 0x1205329A: mov eax, dword ptr [ebp - 8] */
    ecx = MEM32(eax); /* 0x1205329D: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0x800u); /* 0x1205329F: push 0x800 */
    edx = ebp + (-0x18); /* 0x120532A4: lea edx, [ebp - 0x18] */
    PUSH32(esp, edx); /* 0x120532A7: push edx */
    PUSH32(esp, 0); /* 0x120532A8: push 0 */
    PUSH32(esp, 0); /* 0x120532AA: push 0 */
    PUSH32(esp, eax); /* 0x120532AC: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x2C)); /* 0x120532AD: call dword ptr [ecx + 0x2c] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120532B0: mov esi, eax */
    /* test esi, esi */ /* 0x120532B2: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1205351F; /* 0x120532B4: js 0x1205351f */
L_120532BA:
    eax = MEM32(edi + 0x8); /* 0x120532BA: mov eax, dword ptr [edi + 8] */
    eax = MEM32(eax + 0x248); /* 0x120532BD: mov eax, dword ptr [eax + 0x248] */
    ecx = MEM32(eax); /* 0x120532C3: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0x800u); /* 0x120532C5: push 0x800 */
    edx = ebp + (-0x10); /* 0x120532CA: lea edx, [ebp - 0x10] */
    PUSH32(esp, edx); /* 0x120532CD: push edx */
    PUSH32(esp, 0); /* 0x120532CE: push 0 */
    PUSH32(esp, 0); /* 0x120532D0: push 0 */
    PUSH32(esp, eax); /* 0x120532D2: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x2C)); /* 0x120532D3: call dword ptr [ecx + 0x2c] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120532D6: mov esi, eax */
    /* test esi, esi */ /* 0x120532D8: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1205351F; /* 0x120532DA: js 0x1205351f */
L_120532E0:
    eax = MEM32(ebx); /* 0x120532E0: mov eax, dword ptr [ebx] */
    ecx = ebp + (-0x14); /* 0x120532E2: lea ecx, [ebp - 0x14] */
    PUSH32(esp, ecx); /* 0x120532E5: push ecx */
    PUSH32(esp, ebx); /* 0x120532E6: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x34)); /* 0x120532E7: call dword ptr [eax + 0x34] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120532EA: mov esi, eax */
    /* test esi, esi */ /* 0x120532EC: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1205351F; /* 0x120532EE: js 0x1205351f */
L_120532F4:
    eax = MEM32(ebp + (-0x14)); /* 0x120532F4: mov eax, dword ptr [ebp - 0x14] */
    ecx = MEM32(eax); /* 0x120532F7: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0x800u); /* 0x120532F9: push 0x800 */
    edx = ebp + (-0x20); /* 0x120532FE: lea edx, [ebp - 0x20] */
    PUSH32(esp, edx); /* 0x12053301: push edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x12053302: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x12053304: push ebx */
    PUSH32(esp, ebx); /* 0x12053305: push ebx */
    PUSH32(esp, eax); /* 0x12053306: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x2C)); /* 0x12053307: call dword ptr [ecx + 0x2c] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1205330A: mov esi, eax */
    /* test esi, esi */ /* 0x1205330C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1205351F; /* 0x1205330E: js 0x1205351f */
L_12053314:
    eax = MEM32(edi + 0x8); /* 0x12053314: mov eax, dword ptr [edi + 8] */
    eax = MEM32(eax + 0x234); /* 0x12053317: mov eax, dword ptr [eax + 0x234] */
    ecx = MEM32(eax); /* 0x1205331D: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0x800u); /* 0x1205331F: push 0x800 */
    edx = ebp + (-0x1C); /* 0x12053324: lea edx, [ebp - 0x1c] */
    PUSH32(esp, edx); /* 0x12053327: push edx */
    PUSH32(esp, ebx); /* 0x12053328: push ebx */
    PUSH32(esp, ebx); /* 0x12053329: push ebx */
    PUSH32(esp, eax); /* 0x1205332A: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x2C)); /* 0x1205332B: call dword ptr [ecx + 0x2c] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1205332E: mov esi, eax */
    MEM32(ebp + (-0x44)) = esi; /* 0x12053330: mov dword ptr [ebp - 0x44], esi */
    /* test esi, esi */ /* 0x12053333: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1205351F; /* 0x12053335: js 0x1205351f */
L_1205333B:
    eax = MEM32(ebp + (-0x18)); /* 0x1205333B: mov eax, dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0xC)) = eax; /* 0x1205333E: mov dword ptr [ebp - 0xc], eax */
    eax = MEM32(edi + 0x8); /* 0x12053341: mov eax, dword ptr [edi + 8] */
    edx = ebx; /* 0x12053344: mov edx, ebx */
    MEM32(ebp + 0x8) = ebx; /* 0x12053346: mov dword ptr [ebp + 8], ebx */
    /* cmp MEM32(eax + 0x260), ebx */ /* 0x12053349: cmp dword ptr [eax + 0x260], ebx */
    _flag_a = (uint32_t)(MEM32(eax + 0x260)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120534F9; /* 0x1205334F: jbe 0x120534f9 */
L_12053355:
    MEM32(ebp + (-0x4)) = ebx; /* 0x12053355: mov dword ptr [ebp - 4], ebx */
L_12053358:
    eax = MEM32(edi + 0x8); /* 0x12053358: mov eax, dword ptr [edi + 8] */
    ecx = MEM32(eax + 0x25C); /* 0x1205335B: mov ecx, dword ptr [eax + 0x25c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ebx; /* 0x12053361: add ecx, ebx */
    _flag_k = FK_ADD;
    ebx = MEM32(ecx + 0x4); /* 0x12053363: mov ebx, dword ptr [ecx + 4] */
    eax = MEM32(ecx + 0x8); /* 0x12053366: mov eax, dword ptr [ecx + 8] */
    esi = ebx + eax; /* 0x12053369: lea esi, [ebx + eax] */
    MEM32(ebp + (-0x24)) = edx; /* 0x1205336C: mov dword ptr [ebp - 0x24], edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x1205336F: add edx, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x3C)) = esi; /* 0x12053371: mov dword ptr [ebp - 0x3c], esi */
    /* cmp ebx, esi */ /* 0x12053374: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = MEM32(ebp + 0x8); /* 0x12053376: mov esi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x40)) = ecx; /* 0x12053379: mov dword ptr [ebp - 0x40], ecx */
    MEM32(ebp + (-0x30)) = ebx; /* 0x1205337C: mov dword ptr [ebp - 0x30], ebx */
    MEM32(ebp + (-0x34)) = edx; /* 0x1205337F: mov dword ptr [ebp - 0x34], edx */
    if (CMP_AE(_flag_a, _flag_b)) goto L_1205347E; /* 0x12053382: jae 0x1205347e */
L_12053388:
    edx = ebx; /* 0x12053388: mov edx, ebx */
    edx = (uint32_t)((int32_t)edx * (int32_t)0xCu); /* 0x1205338A: imul edx, edx, 0xc */
L_1205338D:
    eax = MEM32(edi + 0x8); /* 0x1205338D: mov eax, dword ptr [edi + 8] */
    eax = MEM32(eax + 0x258); /* 0x12053390: mov eax, dword ptr [eax + 0x258] */
    MEM16(eax + ebx * 2) = (uint16_t)(LO16(esi)); /* 0x12053396: mov word ptr [eax + ebx*2], si */
    ebx = MEM32(ebp + (-0x4)); /* 0x1205339A: mov ebx, dword ptr [ebp - 4] */
    MEM32(ebp + (-0x2C)) = 3; /* 0x1205339D: mov dword ptr [ebp - 0x2c], 3 */
L_120533A4:
    ecx = MEM32(ebp + 0xC); /* 0x120533A4: mov ecx, dword ptr [ebp + 0xc] */
    /* cmp MEM32(ecx), 0xFFFFFFFFu */ /* 0x120533A7: cmp dword ptr [ecx], -1 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120533C8; /* 0x120533AA: jne 0x120533c8 */
L_120533AC:
    eax = MEM32(edi + 0x8); /* 0x120533AC: mov eax, dword ptr [edi + 8] */
    eax = MEM32(eax + 0x250); /* 0x120533AF: mov eax, dword ptr [eax + 0x250] */
    _flag_a = (uint32_t)((MEM32(edx + eax) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(edx + eax) | 0xFFFFFFFFu));
    MEM32(edx + eax) = MEM32(edx + eax) | 0xFFFFFFFFu; /* 0x120533B5: or dword ptr [edx + eax], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_12053449; /* 0x120533B9: jmp 0x12053449 */
L_120533BE:
    esi = 0x8876086Cu; /* 0x120533BE: mov esi, 0x8876086c */
    goto L_1205351F; /* 0x120533C3: jmp 0x1205351f */
L_120533C8:
    eax = MEM32(ebp + (-0x24)); /* 0x120533C8: mov eax, dword ptr [ebp - 0x24] */
    /* cmp MEM32(ecx), eax */ /* 0x120533CB: cmp dword ptr [ecx], eax */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_120533E2; /* 0x120533CD: jb 0x120533e2 */
L_120533CF:
    eax = MEM32(ebp + (-0x34)); /* 0x120533CF: mov eax, dword ptr [ebp - 0x34] */
    /* cmp MEM32(ecx), eax */ /* 0x120533D2: cmp dword ptr [ecx], eax */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120533E2; /* 0x120533D4: jae 0x120533e2 */
L_120533D6:
    eax = MEM32(edi + 0x24); /* 0x120533D6: mov eax, dword ptr [edi + 0x24] */
    ecx = MEM32(ebx + eax + 0x4); /* 0x120533D9: mov ecx, dword ptr [ebx + eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x24)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0x24)); /* 0x120533DD: sub ecx, dword ptr [ebp - 0x24] */
    _flag_k = FK_CMP;
    goto L_12053438; /* 0x120533E0: jmp 0x12053438 */
L_120533E2:
    eax = MEM32(edi + 0x8); /* 0x120533E2: mov eax, dword ptr [edi + 8] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x28))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x28)) = MEM32(ebp + (-0x28)) & 0; /* 0x120533E5: and dword ptr [ebp - 0x28], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120533E9: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(eax + 0x260), ecx */ /* 0x120533EB: cmp dword ptr [eax + 0x260], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x260)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_12053449; /* 0x120533F1: jbe 0x12053449 */
L_120533F3:
    eax = MEM32(eax + 0x25C); /* 0x120533F3: mov eax, dword ptr [eax + 0x25c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x120533F9: add eax, 8 */
    _flag_k = FK_ADD;
L_120533FC:
    esi = MEM32(ebp + (-0x28)); /* 0x120533FC: mov esi, dword ptr [ebp - 0x28] */
    ebx = MEM32(ebp + 0xC); /* 0x120533FF: mov ebx, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x38)) = esi; /* 0x12053402: mov dword ptr [ebp - 0x38], esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(eax); /* 0x12053405: add esi, dword ptr [eax] */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebx), esi */ /* 0x12053407: cmp dword ptr [ebx], esi */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = MEM32(ebp + (-0x4)); /* 0x12053409: mov ebx, dword ptr [ebp - 4] */
    MEM32(ebp + (-0x28)) = esi; /* 0x1205340C: mov dword ptr [ebp - 0x28], esi */
    esi = MEM32(ebp + 0x8); /* 0x1205340F: mov esi, dword ptr [ebp + 8] */
    if (CMP_B(_flag_a, _flag_b)) goto L_1205342B; /* 0x12053412: jb 0x1205342b */
L_12053414:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x14u; /* 0x12053414: add eax, 0x14 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x38)) = eax; /* 0x12053417: mov dword ptr [ebp - 0x38], eax */
    eax = MEM32(edi + 0x8); /* 0x1205341A: mov eax, dword ptr [edi + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1205341D: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, MEM32(eax + 0x260) */ /* 0x1205341E: cmp ecx, dword ptr [eax + 0x260] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x260));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x38)); /* 0x12053424: mov eax, dword ptr [ebp - 0x38] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120533FC; /* 0x12053427: jb 0x120533fc */
L_12053429:
    goto L_12053449; /* 0x12053429: jmp 0x12053449 */
L_1205342B:
    eax = MEM32(edi + 0x24); /* 0x1205342B: mov eax, dword ptr [edi + 0x24] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x14u); /* 0x1205342E: imul ecx, ecx, 0x14 */
    ecx = MEM32(ecx + eax + 0x4); /* 0x12053431: mov ecx, dword ptr [ecx + eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x38)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0x38)); /* 0x12053435: sub ecx, dword ptr [ebp - 0x38] */
    _flag_k = FK_CMP;
L_12053438:
    eax = MEM32(ebp + 0xC); /* 0x12053438: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax); /* 0x1205343B: add ecx, dword ptr [eax] */
    _flag_k = FK_ADD;
    eax = MEM32(edi + 0x8); /* 0x1205343D: mov eax, dword ptr [edi + 8] */
    eax = MEM32(eax + 0x250); /* 0x12053440: mov eax, dword ptr [eax + 0x250] */
    MEM32(edx + eax) = ecx; /* 0x12053446: mov dword ptr [edx + eax], ecx */
L_12053449:
    eax = MEM32(ebp + 0x10); /* 0x12053449: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + eax; /* 0x1205344C: add dword ptr [ebp + 0xc], eax */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x1205344F: mov ecx, dword ptr [ebp - 0xc] */
    eax = MEM32(ebp + (-0x10)); /* 0x12053452: mov eax, dword ptr [ebp - 0x10] */
    ecx = MEM32(ecx); /* 0x12053455: mov ecx, dword ptr [ecx] */
    MEM32(edx + eax) = ecx; /* 0x12053457: mov dword ptr [edx + eax], ecx */
    eax = MEM32(ebp + 0x10); /* 0x1205345A: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) + eax; /* 0x1205345D: add dword ptr [ebp - 0xc], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x12053460: add edx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x2C)) = MEM32(ebp + (-0x2C)) - 1; /* 0x12053462: dec dword ptr [ebp - 0x2c] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120533A4; /* 0x12053465: jne 0x120533a4 */
L_1205346B:
    ebx = MEM32(ebp + (-0x30)); /* 0x1205346B: mov ebx, dword ptr [ebp - 0x30] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1205346E: inc ebx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x30)) = ebx; /* 0x1205346F: mov dword ptr [ebp - 0x30], ebx */
    /* cmp ebx, MEM32(ebp + (-0x3C)) */ /* 0x12053472: cmp ebx, dword ptr [ebp - 0x3c] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x3C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1205338D; /* 0x12053475: jb 0x1205338d */
L_1205347B:
    ecx = MEM32(ebp + (-0x40)); /* 0x1205347B: mov ecx, dword ptr [ebp - 0x40] */
L_1205347E:
    eax = MEM32(edi + 0x24); /* 0x1205347E: mov eax, dword ptr [edi + 0x24] */
    ebx = MEM32(ebp + (-0x4)); /* 0x12053481: mov ebx, dword ptr [ebp - 4] */
    ebx = MEM32(ebx + eax + 0x8); /* 0x12053484: mov ebx, dword ptr [ebx + eax + 8] */
    edx = MEM32(ecx + 0x8); /* 0x12053488: mov edx, dword ptr [ecx + 8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ecx + 0x4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(ecx + 0x4); /* 0x1205348B: add ebx, dword ptr [ecx + 4] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ecx + 0x4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ecx + 0x4); /* 0x1205348E: add edx, dword ptr [ecx + 4] */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x40)) = ebx; /* 0x12053491: mov dword ptr [ebp - 0x40], ebx */
    /* cmp edx, ebx */ /* 0x12053494: cmp edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120534D2; /* 0x12053496: jae 0x120534d2 */
L_12053498:
    ecx = edx; /* 0x12053498: mov ecx, edx */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xCu); /* 0x1205349A: imul ecx, ecx, 0xc */
L_1205349D:
    eax = MEM32(edi + 0x8); /* 0x1205349D: mov eax, dword ptr [edi + 8] */
    eax = MEM32(eax + 0x258); /* 0x120534A0: mov eax, dword ptr [eax + 0x258] */
    ebx = MEM32(ebp + 0x10); /* 0x120534A6: mov ebx, dword ptr [ebp + 0x10] */
    PUSH32(esp, 3); /* 0x120534A9: push 3 */
    MEM16(eax + edx * 2) = (uint16_t)(LO16(esi)); /* 0x120534AB: mov word ptr [eax + edx*2], si */
    esi = POP32_VAL(esp); /* 0x120534AF: pop esi */
L_120534B0:
    eax = MEM32(edi + 0x8); /* 0x120534B0: mov eax, dword ptr [edi + 8] */
    eax = MEM32(eax + 0x250); /* 0x120534B3: mov eax, dword ptr [eax + 0x250] */
    _flag_a = (uint32_t)((MEM32(ecx + eax) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ecx + eax) | 0xFFFFFFFFu));
    MEM32(ecx + eax) = MEM32(ecx + eax) | 0xFFFFFFFFu; /* 0x120534B9: or dword ptr [ecx + eax], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x10)); /* 0x120534BD: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((MEM32(ecx + eax) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ecx + eax) | 0xFFFFFFFFu));
    MEM32(ecx + eax) = MEM32(ecx + eax) | 0xFFFFFFFFu; /* 0x120534C0: or dword ptr [ecx + eax], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ebx; /* 0x120534C4: add ecx, ebx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x120534C6: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120534B0; /* 0x120534C7: jne 0x120534b0 */
L_120534C9:
    esi = MEM32(ebp + 0x8); /* 0x120534C9: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x120534CC: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, MEM32(ebp + (-0x40)) */ /* 0x120534CD: cmp edx, dword ptr [ebp - 0x40] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x40)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1205349D; /* 0x120534D0: jb 0x1205349d */
L_120534D2:
    ebx = MEM32(ebp + (-0x4)); /* 0x120534D2: mov ebx, dword ptr [ebp - 4] */
    edx = MEM32(ebp + 0x8); /* 0x120534D5: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, 0x14u); /* 0x120534D8: push 0x14 */
    eax = POP32_VAL(esp); /* 0x120534DA: pop eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x120534DB: add ebx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(edi + 0x8); /* 0x120534DD: mov eax, dword ptr [edi + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x120534E0: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, MEM32(eax + 0x260) */ /* 0x120534E1: cmp edx, dword ptr [eax + 0x260] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax + 0x260));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = edx; /* 0x120534E7: mov dword ptr [ebp + 8], edx */
    edx = MEM32(ebp + (-0x34)); /* 0x120534EA: mov edx, dword ptr [ebp - 0x34] */
    MEM32(ebp + (-0x4)) = ebx; /* 0x120534ED: mov dword ptr [ebp - 4], ebx */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12053358; /* 0x120534F0: jb 0x12053358 */
L_120534F6:
    esi = MEM32(ebp + (-0x44)); /* 0x120534F6: mov esi, dword ptr [ebp - 0x44] */
L_120534F9:
    eax = MEM32(edi + 0x8); /* 0x120534F9: mov eax, dword ptr [edi + 8] */
    ecx = MEM32(eax + 0x23C); /* 0x120534FC: mov ecx, dword ptr [eax + 0x23c] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(eax + 0x238)); /* 0x12053502: imul ecx, dword ptr [eax + 0x238] */
    PUSH32(esp, ecx); /* 0x12053509: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x1205350A: push dword ptr [ebp - 0x20] */
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x1205350D: push dword ptr [ebp - 0x1c] */
    RECOMP_CALL(sub_121BF440); /* 0x12053510: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x12053515: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_1205351F; /* 0x12053518: jmp 0x1205351f */
L_1205351A:
    esi = 0x8007000Eu; /* 0x1205351A: mov esi, 0x8007000e */
L_1205351F:
    /* cmp MEM32(ebp + (-0x10)), 0 */ /* 0x1205351F: cmp dword ptr [ebp - 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12053534; /* 0x12053523: je 0x12053534 */
L_12053525:
    eax = MEM32(edi + 0x8); /* 0x12053525: mov eax, dword ptr [edi + 8] */
    eax = MEM32(eax + 0x248); /* 0x12053528: mov eax, dword ptr [eax + 0x248] */
    ecx = MEM32(eax); /* 0x1205352E: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x12053530: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x12053531: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
L_12053534:
    /* cmp MEM32(ebp + (-0x18)), 0 */ /* 0x12053534: cmp dword ptr [ebp - 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12053543; /* 0x12053538: je 0x12053543 */
L_1205353A:
    eax = MEM32(ebp + (-0x8)); /* 0x1205353A: mov eax, dword ptr [ebp - 8] */
    ecx = MEM32(eax); /* 0x1205353D: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1205353F: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x12053540: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
L_12053543:
    ecx = MEM32(ebp + (-0x8)); /* 0x12053543: mov ecx, dword ptr [ebp - 8] */
    /* test ecx, ecx */ /* 0x12053546: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12053554; /* 0x12053548: je 0x12053554 */
L_1205354A:
    eax = MEM32(ecx); /* 0x1205354A: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x1205354C: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1205354D: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x12053550: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_12053554:
    /* cmp MEM32(ebp + (-0x1C)), 0 */ /* 0x12053554: cmp dword ptr [ebp - 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12053569; /* 0x12053558: je 0x12053569 */
L_1205355A:
    eax = MEM32(edi + 0x8); /* 0x1205355A: mov eax, dword ptr [edi + 8] */
    eax = MEM32(eax + 0x234); /* 0x1205355D: mov eax, dword ptr [eax + 0x234] */
    ecx = MEM32(eax); /* 0x12053563: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x12053565: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x12053566: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
L_12053569:
    /* cmp MEM32(ebp + (-0x20)), 0 */ /* 0x12053569: cmp dword ptr [ebp - 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12053578; /* 0x1205356D: je 0x12053578 */
L_1205356F:
    eax = MEM32(ebp + (-0x14)); /* 0x1205356F: mov eax, dword ptr [ebp - 0x14] */
    ecx = MEM32(eax); /* 0x12053572: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x12053574: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x12053575: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
L_12053578:
    ecx = MEM32(ebp + (-0x14)); /* 0x12053578: mov ecx, dword ptr [ebp - 0x14] */
    /* test ecx, ecx */ /* 0x1205357B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12053585; /* 0x1205357D: je 0x12053585 */
L_1205357F:
    eax = MEM32(ecx); /* 0x1205357F: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x12053581: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x12053582: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_12053585:
    edi = POP32_VAL(esp); /* 0x12053585: pop edi */
    eax = esi; /* 0x12053586: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x12053588: pop esi */
    ebx = POP32_VAL(esp); /* 0x12053589: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1205358A: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1205358B: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_12053593(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12053593u);

L_12053593:
    edi = edi; /* 0x12053593: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12053595: push ebp */
    ebp = esp; /* 0x12053596: mov ebp, esp */
    SET_LO8(eax, MEM8(ebp + 0x10)); /* 0x12053598: mov al, byte ptr [ebp + 0x10] */
    SET_LO16(edx, MEM16(ebp + 0xC)); /* 0x1205359B: mov dx, word ptr [ebp + 0xc] */
    /* cmp LO8(eax), 2 */ /* 0x1205359F: cmp al, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, ebx); /* 0x120535A1: push ebx */
    PUSH32(esp, esi); /* 0x120535A2: push esi */
    SET_LO16(esi, MEM16(ebp + 0x8)); /* 0x120535A3: mov si, word ptr [ebp + 8] */
    SET_LO8(ebx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x120535A7: setne bl */
    /* test LO8(eax), LO8(eax) */ /* 0x120535AA: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, edi); /* 0x120535AC: push edi */
    edi = ecx; /* 0x120535AD: mov edi, ecx */
    ecx = MEM32(edi + 0xC); /* 0x120535AF: mov ecx, dword ptr [edi + 0xc] */
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x120535B2: setne al */
    MEM8(edi + 0x11) = (uint8_t)(LO8(eax)); /* 0x120535B5: mov byte ptr [edi + 0x11], al */
    eax = (uint32_t)LO16(edx); /* 0x120535B8: movzx eax, dx */
    PUSH32(esp, eax); /* 0x120535BB: push eax */
    eax = (uint32_t)LO16(esi); /* 0x120535BC: movzx eax, si */
    eax = (uint32_t)((int32_t)eax * (int32_t)6); /* 0x120535BF: imul eax, eax, 6 */
    MEM16(edi) = (uint16_t)(LO16(esi)); /* 0x120535C2: mov word ptr [edi], si */
    MEM16(edi + 0x2) = (uint16_t)(LO16(edx)); /* 0x120535C5: mov word ptr [edi + 2], dx */
    MEM16(edi + 0x4) = (uint16_t)(LO16(esi)); /* 0x120535C9: mov word ptr [edi + 4], si */
    MEM8(edi + 0x10) = (uint8_t)(LO8(ebx)); /* 0x120535CD: mov byte ptr [edi + 0x10], bl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x24C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x24C); /* 0x120535D0: add eax, dword ptr [ecx + 0x24c] */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x120535D6: push eax */
    RECOMP_CALL(sub_1204CC49); /* 0x120535D7: call 0x1204cc49 */
    RECOMP_FLAGS_IN();
    MEM16(edi + 0x8) = (uint16_t)(LO16(eax)); /* 0x120535DC: mov word ptr [edi + 8], ax */
    /* test LO8(ebx), LO8(ebx) */ /* 0x120535E0: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120535F4; /* 0x120535E2: jne 0x120535f4 */
L_120535E4:
    eax = (uint32_t)LO16(eax); /* 0x120535E4: movzx eax, ax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x120535E7: add eax, 2 */
    _flag_k = FK_ADD;
    PUSH32(esp, 3); /* 0x120535EA: push 3 */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x120535EC: cdq  */
    ecx = POP32_VAL(esp); /* 0x120535ED: pop ecx */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x120535EE: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    MEM16(edi + 0x8) = (uint16_t)(LO16(edx)); /* 0x120535F0: mov word ptr [edi + 8], dx */
L_120535F4:
    SET_LO16(eax, MEM16(edi + 0x8)); /* 0x120535F4: mov ax, word ptr [edi + 8] */
    MEM16(edi + 0x6) = (uint16_t)(LO16(eax)); /* 0x120535F8: mov word ptr [edi + 6], ax */
    edi = POP32_VAL(esp); /* 0x120535FC: pop edi */
    esi = POP32_VAL(esp); /* 0x120535FD: pop esi */
    ebx = POP32_VAL(esp); /* 0x120535FE: pop ebx */
    ebp = POP32_VAL(esp); /* 0x120535FF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x12053600: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_12053608(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12053608u);

L_12053608:
    edi = edi; /* 0x12053608: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1205360A: push ebp */
    ebp = esp; /* 0x1205360B: mov ebp, esp */
    SET_LO8(eax, MEM8(ebp + 0x10)); /* 0x1205360D: mov al, byte ptr [ebp + 0x10] */
    edx = MEM32(ebp + 0xC); /* 0x12053610: mov edx, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x12053613: push ebx */
    PUSH32(esp, esi); /* 0x12053614: push esi */
    esi = MEM32(ebp + 0x8); /* 0x12053615: mov esi, dword ptr [ebp + 8] */
    /* cmp LO8(eax), 2 */ /* 0x12053618: cmp al, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    SET_LO8(ebx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x1205361A: setne bl */
    PUSH32(esp, edi); /* 0x1205361D: push edi */
    edi = ecx; /* 0x1205361E: mov edi, ecx */
    ecx = MEM32(edi + 0x14); /* 0x12053620: mov ecx, dword ptr [edi + 0x14] */
    /* test LO8(eax), LO8(eax) */ /* 0x12053623: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x12053625: setne al */
    MEM32(edi) = esi; /* 0x12053628: mov dword ptr [edi], esi */
    MEM32(edi + 0x8) = esi; /* 0x1205362A: mov dword ptr [edi + 8], esi */
    esi = (uint32_t)((int32_t)esi * (int32_t)0xCu); /* 0x1205362D: imul esi, esi, 0xc */
    MEM32(edi + 0x4) = edx; /* 0x12053630: mov dword ptr [edi + 4], edx */
    MEM8(edi + 0x18) = (uint8_t)(LO8(ebx)); /* 0x12053633: mov byte ptr [edi + 0x18], bl */
    MEM8(edi + 0x19) = (uint8_t)(LO8(eax)); /* 0x12053636: mov byte ptr [edi + 0x19], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ecx + 0x24C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ecx + 0x24C); /* 0x12053639: add esi, dword ptr [ecx + 0x24c] */
    _flag_k = FK_ADD;
    PUSH32(esp, edx); /* 0x1205363F: push edx */
    PUSH32(esp, esi); /* 0x12053640: push esi */
    RECOMP_CALL(sub_1204CC83); /* 0x12053641: call 0x1204cc83 */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x10) = eax; /* 0x12053646: mov dword ptr [edi + 0x10], eax */
    /* test LO8(ebx), LO8(ebx) */ /* 0x12053649: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1205365A; /* 0x1205364B: jne 0x1205365a */
L_1205364D:
    PUSH32(esp, 3); /* 0x1205364D: push 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x1205364F: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x12053652: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x12053654: pop ecx */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x12053655: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    MEM32(edi + 0x10) = edx; /* 0x12053657: mov dword ptr [edi + 0x10], edx */
L_1205365A:
    eax = MEM32(edi + 0x10); /* 0x1205365A: mov eax, dword ptr [edi + 0x10] */
    MEM32(edi + 0xC) = eax; /* 0x1205365D: mov dword ptr [edi + 0xc], eax */
    edi = POP32_VAL(esp); /* 0x12053660: pop edi */
    esi = POP32_VAL(esp); /* 0x12053661: pop esi */
    ebx = POP32_VAL(esp); /* 0x12053662: pop ebx */
    ebp = POP32_VAL(esp); /* 0x12053663: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x12053664: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1205366C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1205366Cu);

L_1205366C:
    edi = edi; /* 0x1205366C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1205366E: push ebp */
    ebp = esp; /* 0x1205366F: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x12053671: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x12053674: push ebx */
    PUSH32(esp, esi); /* 0x12053675: push esi */
    PUSH32(esp, edi); /* 0x12053676: push edi */
    PUSH32(esp, 0x800u); /* 0x12053677: push 0x800 */
    esi = ecx; /* 0x1205367C: mov esi, ecx */
    eax = MEM32(esi + 0x248); /* 0x1205367E: mov eax, dword ptr [esi + 0x248] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x12053684: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x10); /* 0x12053686: lea ecx, [ebp - 0x10] */
    PUSH32(esp, ecx); /* 0x12053689: push ecx */
    PUSH32(esp, ebx); /* 0x1205368A: push ebx */
    PUSH32(esp, ebx); /* 0x1205368B: push ebx */
    MEM32(ebp + (-0x4)) = ebx; /* 0x1205368C: mov dword ptr [ebp - 4], ebx */
    MEM32(ebp + (-0x8)) = ebx; /* 0x1205368F: mov dword ptr [ebp - 8], ebx */
    MEM32(ebp + (-0xC)) = ebx; /* 0x12053692: mov dword ptr [ebp - 0xc], ebx */
    MEM32(ebp + (-0x10)) = ebx; /* 0x12053695: mov dword ptr [ebp - 0x10], ebx */
    edx = MEM32(eax); /* 0x12053698: mov edx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1205369A: push eax */
    RECOMP_ICALL(MEM32(edx + 0x2C)); /* 0x1205369B: call dword ptr [edx + 0x2c] */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x1205369E: mov edi, dword ptr [ebp + 8] */
    ebx = eax; /* 0x120536A1: mov ebx, eax */
    /* test ebx, ebx */ /* 0x120536A3: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120538A8; /* 0x120536A5: js 0x120538a8 */
L_120536AB:
    eax = MEM32(edi + 0x248); /* 0x120536AB: mov eax, dword ptr [edi + 0x248] */
    ecx = MEM32(eax); /* 0x120536B1: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0x810u); /* 0x120536B3: push 0x810 */
    edx = ebp + (-0xC); /* 0x120536B8: lea edx, [ebp - 0xc] */
    PUSH32(esp, edx); /* 0x120536BB: push edx */
    PUSH32(esp, 0); /* 0x120536BC: push 0 */
    PUSH32(esp, 0); /* 0x120536BE: push 0 */
    PUSH32(esp, eax); /* 0x120536C0: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x2C)); /* 0x120536C1: call dword ptr [ecx + 0x2c] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x120536C4: mov ebx, eax */
    /* test ebx, ebx */ /* 0x120536C6: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120538A8; /* 0x120536C8: js 0x120538a8 */
L_120536CE:
    eax = MEM32(esi + 0x264); /* 0x120536CE: mov eax, dword ptr [esi + 0x264] */
    eax = (uint32_t)((int32_t)eax * (int32_t)6); /* 0x120536D4: imul eax, eax, 6 */
    PUSH32(esp, eax); /* 0x120536D7: push eax */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x120536D8: push dword ptr [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x120536DB: push dword ptr [ebp - 0x10] */
    RECOMP_CALL(sub_121BF440); /* 0x120536DE: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    eax = esi + 0x218; /* 0x120536E3: lea eax, [esi + 0x218] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x120536E9: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test MEM8(eax), 1 */ /* 0x120536EC: test byte ptr [eax], 1 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1205371E; /* 0x120536EF: je 0x1205371e */
L_120536F1:
    /* test MEM8(edi + 0x218), 1 */ /* 0x120536F1: test byte ptr [edi + 0x218], 1 */
    _flag_a = (uint32_t)(MEM8(edi + 0x218)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1205371E; /* 0x120536F8: je 0x1205371e */
L_120536FA:
    eax = MEM32(esi + 0x264); /* 0x120536FA: mov eax, dword ptr [esi + 0x264] */
    eax = (uint32_t)((int32_t)eax * (int32_t)6); /* 0x12053700: imul eax, eax, 6 */
    PUSH32(esp, eax); /* 0x12053703: push eax */
    PUSH32(esp, MEM32(edi + 0x250)); /* 0x12053704: push dword ptr [edi + 0x250] */
    PUSH32(esp, MEM32(esi + 0x250)); /* 0x1205370A: push dword ptr [esi + 0x250] */
    RECOMP_CALL(sub_121BF440); /* 0x12053710: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x12053715: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = esi + 0x218; /* 0x12053718: lea eax, [esi + 0x218] */
L_1205371E:
    /* test MEM8(eax), 4 */ /* 0x1205371E: test byte ptr [eax], 4 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12053750; /* 0x12053721: je 0x12053750 */
L_12053723:
    /* test MEM8(edi + 0x218), 4 */ /* 0x12053723: test byte ptr [edi + 0x218], 4 */
    _flag_a = (uint32_t)(MEM8(edi + 0x218)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12053750; /* 0x1205372A: je 0x12053750 */
L_1205372C:
    eax = MEM32(esi + 0x264); /* 0x1205372C: mov eax, dword ptr [esi + 0x264] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x12053732: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x12053732: shl eax, 2 */
    PUSH32(esp, eax); /* 0x12053735: push eax */
    PUSH32(esp, MEM32(edi + 0x254)); /* 0x12053736: push dword ptr [edi + 0x254] */
    PUSH32(esp, MEM32(esi + 0x254)); /* 0x1205373C: push dword ptr [esi + 0x254] */
    RECOMP_CALL(sub_121BF440); /* 0x12053742: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x12053747: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = esi + 0x218; /* 0x1205374A: lea eax, [esi + 0x218] */
L_12053750:
    /* test MEM8(eax), 8 */ /* 0x12053750: test byte ptr [eax], 8 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12053781; /* 0x12053753: je 0x12053781 */
L_12053755:
    /* test MEM8(edi + 0x218), 8 */ /* 0x12053755: test byte ptr [edi + 0x218], 8 */
    _flag_a = (uint32_t)(MEM8(edi + 0x218)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12053781; /* 0x1205375C: je 0x12053781 */
L_1205375E:
    eax = MEM32(esi + 0x264); /* 0x1205375E: mov eax, dword ptr [esi + 0x264] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x12053764: add eax, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x12053766: push eax */
    PUSH32(esp, MEM32(edi + 0x258)); /* 0x12053767: push dword ptr [edi + 0x258] */
    PUSH32(esp, MEM32(esi + 0x258)); /* 0x1205376D: push dword ptr [esi + 0x258] */
    RECOMP_CALL(sub_121BF440); /* 0x12053773: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x12053778: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = esi + 0x218; /* 0x1205377B: lea eax, [esi + 0x218] */
L_12053781:
    /* test MEM8(edi + 0x218), 0x10u */ /* 0x12053781: test byte ptr [edi + 0x218], 0x10 */
    _flag_a = (uint32_t)(MEM8(edi + 0x218)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1205380E; /* 0x12053788: je 0x1205380e */
L_1205378E:
    /* test MEM8(eax), 0x10u */ /* 0x1205378E: test byte ptr [eax], 0x10 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_120537A1; /* 0x12053791: je 0x120537a1 */
L_12053793:
    eax = MEM32(esi + 0x260); /* 0x12053793: mov eax, dword ptr [esi + 0x260] */
    /* cmp eax, MEM32(edi + 0x260) */ /* 0x12053799: cmp eax, dword ptr [edi + 0x260] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x260));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120537F0; /* 0x1205379F: je 0x120537f0 */
L_120537A1:
    PUSH32(esp, MEM32(esi + 0x25C)); /* 0x120537A1: push dword ptr [esi + 0x25c] */
    RECOMP_CALL(sub_121BF388); /* 0x120537A7: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x260); /* 0x120537AC: mov eax, dword ptr [edi + 0x260] */
    MEM32(esp) = 0x120014BCu; /* 0x120537B2: mov dword ptr [esp], 0x120014bc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120537B9: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x14u); /* 0x120537BB: push 0x14 */
    edx = POP32_VAL(esp); /* 0x120537BD: pop edx */
    MEM32(esi + 0x260) = eax; /* 0x120537BE: mov dword ptr [esi + 0x260], eax */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x120537C4: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x120537C6: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x120537C9: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x120537CB: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x120537CD: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x120537CE: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120537D3: pop ecx */
    ecx = POP32_VAL(esp); /* 0x120537D4: pop ecx */
    MEM32(esi + 0x25C) = eax; /* 0x120537D5: mov dword ptr [esi + 0x25c], eax */
    /* test eax, eax */ /* 0x120537DB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120537E9; /* 0x120537DD: jne 0x120537e9 */
L_120537DF:
    ebx = 0x8007000Eu; /* 0x120537DF: mov ebx, 0x8007000e */
    goto L_120538A8; /* 0x120537E4: jmp 0x120538a8 */
L_120537E9:
    _flag_a = (uint32_t)((MEM32(esi + 0x218) | 0x10u)); _flag_b = (uint32_t)((MEM32(esi + 0x218) | 0x10u));
    MEM32(esi + 0x218) = MEM32(esi + 0x218) | 0x10u; /* 0x120537E9: or dword ptr [esi + 0x218], 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
L_120537F0:
    eax = MEM32(esi + 0x260); /* 0x120537F0: mov eax, dword ptr [esi + 0x260] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x14u); /* 0x120537F6: imul eax, eax, 0x14 */
    PUSH32(esp, eax); /* 0x120537F9: push eax */
    PUSH32(esp, MEM32(edi + 0x25C)); /* 0x120537FA: push dword ptr [edi + 0x25c] */
    PUSH32(esp, MEM32(esi + 0x25C)); /* 0x12053800: push dword ptr [esi + 0x25c] */
    RECOMP_CALL(sub_121BF440); /* 0x12053806: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1205380B: add esp, 0xc */
    _flag_k = FK_ADD;
L_1205380E:
    eax = MEM32(esi + 0x23C); /* 0x1205380E: mov eax, dword ptr [esi + 0x23c] */
    /* test eax, eax */ /* 0x12053814: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120538A8; /* 0x12053816: je 0x120538a8 */
L_1205381C:
    /* test MEM8(esi + 0x218), 2 */ /* 0x1205381C: test byte ptr [esi + 0x218], 2 */
    _flag_a = (uint32_t)(MEM8(esi + 0x218)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12053845; /* 0x12053823: je 0x12053845 */
L_12053825:
    /* test MEM8(edi + 0x218), 2 */ /* 0x12053825: test byte ptr [edi + 0x218], 2 */
    _flag_a = (uint32_t)(MEM8(edi + 0x218)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12053845; /* 0x1205382C: je 0x12053845 */
L_1205382E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1205382E: add eax, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x12053830: push eax */
    PUSH32(esp, MEM32(edi + 0x244)); /* 0x12053831: push dword ptr [edi + 0x244] */
    PUSH32(esp, MEM32(esi + 0x244)); /* 0x12053837: push dword ptr [esi + 0x244] */
    RECOMP_CALL(sub_121BF440); /* 0x1205383D: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x12053842: add esp, 0xc */
    _flag_k = FK_ADD;
L_12053845:
    /* test MEM8(esi + 0x218), 0x20u */ /* 0x12053845: test byte ptr [esi + 0x218], 0x20 */
    _flag_a = (uint32_t)(MEM8(esi + 0x218)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120538A8; /* 0x1205384C: jne 0x120538a8 */
L_1205384E:
    eax = MEM32(edi + 0x234); /* 0x1205384E: mov eax, dword ptr [edi + 0x234] */
    ecx = MEM32(eax); /* 0x12053854: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0x810u); /* 0x12053856: push 0x810 */
    edx = ebp + (-0x8); /* 0x1205385B: lea edx, [ebp - 8] */
    PUSH32(esp, edx); /* 0x1205385E: push edx */
    PUSH32(esp, 0); /* 0x1205385F: push 0 */
    PUSH32(esp, 0); /* 0x12053861: push 0 */
    PUSH32(esp, eax); /* 0x12053863: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x2C)); /* 0x12053864: call dword ptr [ecx + 0x2c] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x12053867: mov ebx, eax */
    /* test ebx, ebx */ /* 0x12053869: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120538A8; /* 0x1205386B: js 0x120538a8 */
L_1205386D:
    eax = MEM32(esi + 0x234); /* 0x1205386D: mov eax, dword ptr [esi + 0x234] */
    ecx = MEM32(eax); /* 0x12053873: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0x800u); /* 0x12053875: push 0x800 */
    edx = ebp + (-0x4); /* 0x1205387A: lea edx, [ebp - 4] */
    PUSH32(esp, edx); /* 0x1205387D: push edx */
    PUSH32(esp, 0); /* 0x1205387E: push 0 */
    PUSH32(esp, 0); /* 0x12053880: push 0 */
    PUSH32(esp, eax); /* 0x12053882: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x2C)); /* 0x12053883: call dword ptr [ecx + 0x2c] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x12053886: mov ebx, eax */
    /* test ebx, ebx */ /* 0x12053888: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120538A8; /* 0x1205388A: js 0x120538a8 */
L_1205388C:
    eax = MEM32(esi + 0x238); /* 0x1205388C: mov eax, dword ptr [esi + 0x238] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esi + 0x23C)); /* 0x12053892: imul eax, dword ptr [esi + 0x23c] */
    PUSH32(esp, eax); /* 0x12053899: push eax */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x1205389A: push dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1205389D: push dword ptr [ebp - 4] */
    RECOMP_CALL(sub_121BF440); /* 0x120538A0: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x120538A5: add esp, 0xc */
    _flag_k = FK_ADD;
L_120538A8:
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x120538A8: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120538BA; /* 0x120538AC: je 0x120538ba */
L_120538AE:
    eax = MEM32(esi + 0x234); /* 0x120538AE: mov eax, dword ptr [esi + 0x234] */
    ecx = MEM32(eax); /* 0x120538B4: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x120538B6: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x120538B7: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
L_120538BA:
    /* cmp MEM32(ebp + (-0x8)), 0 */ /* 0x120538BA: cmp dword ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120538CC; /* 0x120538BE: je 0x120538cc */
L_120538C0:
    eax = MEM32(edi + 0x234); /* 0x120538C0: mov eax, dword ptr [edi + 0x234] */
    ecx = MEM32(eax); /* 0x120538C6: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x120538C8: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x120538C9: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
L_120538CC:
    /* cmp MEM32(ebp + (-0xC)), 0 */ /* 0x120538CC: cmp dword ptr [ebp - 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120538DE; /* 0x120538D0: je 0x120538de */
L_120538D2:
    eax = MEM32(edi + 0x248); /* 0x120538D2: mov eax, dword ptr [edi + 0x248] */
    ecx = MEM32(eax); /* 0x120538D8: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x120538DA: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x120538DB: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
L_120538DE:
    /* cmp MEM32(ebp + (-0x10)), 0 */ /* 0x120538DE: cmp dword ptr [ebp - 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120538F0; /* 0x120538E2: je 0x120538f0 */
L_120538E4:
    eax = MEM32(esi + 0x248); /* 0x120538E4: mov eax, dword ptr [esi + 0x248] */
    ecx = MEM32(eax); /* 0x120538EA: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x120538EC: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x120538ED: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
L_120538F0:
    /* test ebx, ebx */ /* 0x120538F0: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_120538FB; /* 0x120538F2: jns 0x120538fb */
L_120538F4:
    ecx = esi; /* 0x120538F4: mov ecx, esi */
    RECOMP_CALL(sub_1204EAC2); /* 0x120538F6: call 0x1204eac2 */
    RECOMP_FLAGS_IN();
L_120538FB:
    edi = POP32_VAL(esp); /* 0x120538FB: pop edi */
    esi = POP32_VAL(esp); /* 0x120538FC: pop esi */
    eax = ebx; /* 0x120538FD: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x120538FF: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12053900: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12053901: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12053909(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12053909u);

L_12053909:
    edi = edi; /* 0x12053909: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1205390B: push ebp */
    ebp = esp; /* 0x1205390C: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1205390E: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x12053911: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x12053912: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x12053915: push esi */
    esi = ecx; /* 0x12053916: mov esi, ecx */
    eax = MEM32(esi + 0x218); /* 0x12053918: mov eax, dword ptr [esi + 0x218] */
    _flag_a = (uint32_t)((eax ^ MEM32(ebx + 0x218))); _flag_b = (uint32_t)((eax ^ MEM32(ebx + 0x218)));
    eax = eax ^ MEM32(ebx + 0x218); /* 0x1205391E: xor eax, dword ptr [ebx + 0x218] */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x12053924: push edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    eax = eax & 0x20u; /* 0x12053925: and eax, 0x20 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ MEM32(esi + 0x218))); _flag_b = (uint32_t)((eax ^ MEM32(esi + 0x218)));
    eax = eax ^ MEM32(esi + 0x218); /* 0x12053928: xor eax, dword ptr [esi + 0x218] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1205392E: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx + 0x218) = eax; /* 0x12053930: mov dword ptr [ebx + 0x218], eax */
    PUSH32(esp, MEM32(esi + 0x23C)); /* 0x12053936: push dword ptr [esi + 0x23c] */
    ecx = ebx; /* 0x1205393C: mov ecx, ebx */
    PUSH32(esp, MEM32(esi + 0x264)); /* 0x1205393E: push dword ptr [esi + 0x264] */
    MEM32(ebp + (-0x10)) = esi; /* 0x12053944: mov dword ptr [ebp - 0x10], esi */
    MEM32(ebp + (-0x8)) = edi; /* 0x12053947: mov dword ptr [ebp - 8], edi */
    MEM32(ebp + (-0xC)) = edi; /* 0x1205394A: mov dword ptr [ebp - 0xc], edi */
    RECOMP_CALL(sub_12051228); /* 0x1205394D: call 0x12051228 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12053952: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12053AF1; /* 0x12053954: js 0x12053af1 */
L_1205395A:
    eax = MEM32(ebx + 0x248); /* 0x1205395A: mov eax, dword ptr [ebx + 0x248] */
    ecx = MEM32(eax); /* 0x12053960: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0x800u); /* 0x12053962: push 0x800 */
    edx = ebp + (-0xC); /* 0x12053967: lea edx, [ebp - 0xc] */
    PUSH32(esp, edx); /* 0x1205396A: push edx */
    PUSH32(esp, edi); /* 0x1205396B: push edi */
    PUSH32(esp, edi); /* 0x1205396C: push edi */
    PUSH32(esp, eax); /* 0x1205396D: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x2C)); /* 0x1205396E: call dword ptr [ecx + 0x2c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12053971: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12053AF1; /* 0x12053973: js 0x12053af1 */
L_12053979:
    eax = MEM32(esi + 0x248); /* 0x12053979: mov eax, dword ptr [esi + 0x248] */
    ecx = MEM32(eax); /* 0x1205397F: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0x810u); /* 0x12053981: push 0x810 */
    edx = ebp + (-0x8); /* 0x12053986: lea edx, [ebp - 8] */
    PUSH32(esp, edx); /* 0x12053989: push edx */
    PUSH32(esp, edi); /* 0x1205398A: push edi */
    PUSH32(esp, edi); /* 0x1205398B: push edi */
    PUSH32(esp, eax); /* 0x1205398C: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x2C)); /* 0x1205398D: call dword ptr [ecx + 0x2c] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = eax; /* 0x12053990: mov dword ptr [ebp - 4], eax */
    /* test eax, eax */ /* 0x12053993: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12053AF1; /* 0x12053995: js 0x12053af1 */
L_1205399B:
    /* test MEM8(esi + 0x218), 4 */ /* 0x1205399B: test byte ptr [esi + 0x218], 4 */
    _flag_a = (uint32_t)(MEM8(esi + 0x218)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_120539C2; /* 0x120539A2: je 0x120539c2 */
L_120539A4:
    eax = MEM32(esi + 0x264); /* 0x120539A4: mov eax, dword ptr [esi + 0x264] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x120539AA: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x120539AA: shl eax, 2 */
    PUSH32(esp, eax); /* 0x120539AD: push eax */
    PUSH32(esp, MEM32(esi + 0x254)); /* 0x120539AE: push dword ptr [esi + 0x254] */
    PUSH32(esp, MEM32(ebx + 0x254)); /* 0x120539B4: push dword ptr [ebx + 0x254] */
    RECOMP_CALL(sub_121BF440); /* 0x120539BA: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x120539BF: add esp, 0xc */
    _flag_k = FK_ADD;
L_120539C2:
    /* test MEM8(esi + 0x218), 8 */ /* 0x120539C2: test byte ptr [esi + 0x218], 8 */
    _flag_a = (uint32_t)(MEM8(esi + 0x218)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_120539E8; /* 0x120539C9: je 0x120539e8 */
L_120539CB:
    eax = MEM32(esi + 0x264); /* 0x120539CB: mov eax, dword ptr [esi + 0x264] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x120539D1: add eax, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x120539D3: push eax */
    PUSH32(esp, MEM32(esi + 0x258)); /* 0x120539D4: push dword ptr [esi + 0x258] */
    PUSH32(esp, MEM32(ebx + 0x258)); /* 0x120539DA: push dword ptr [ebx + 0x258] */
    RECOMP_CALL(sub_121BF440); /* 0x120539E0: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x120539E5: add esp, 0xc */
    _flag_k = FK_ADD;
L_120539E8:
    /* cmp MEM32(esi + 0x25C), edi */ /* 0x120539E8: cmp dword ptr [esi + 0x25c], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x25C)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12053A4C; /* 0x120539EE: je 0x12053a4c */
L_120539F0:
    eax = MEM32(esi + 0x260); /* 0x120539F0: mov eax, dword ptr [esi + 0x260] */
    PUSH32(esp, 0x120014BCu); /* 0x120539F6: push 0x120014bc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120539FB: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x14u); /* 0x120539FD: push 0x14 */
    edx = POP32_VAL(esp); /* 0x120539FF: pop edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x12053A00: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x12053A02: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x12053A05: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x12053A07: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x12053A09: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x12053A0A: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12053A0F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x12053A10: pop ecx */
    ecx = eax; /* 0x12053A11: mov ecx, eax */
    MEM32(ebx + 0x25C) = ecx; /* 0x12053A13: mov dword ptr [ebx + 0x25c], ecx */
    /* test ecx, ecx */ /* 0x12053A19: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12053A27; /* 0x12053A1B: jne 0x12053a27 */
L_12053A1D:
    edi = 0x8007000Eu; /* 0x12053A1D: mov edi, 0x8007000e */
    goto L_12053AF3; /* 0x12053A22: jmp 0x12053af3 */
L_12053A27:
    eax = MEM32(esi + 0x260); /* 0x12053A27: mov eax, dword ptr [esi + 0x260] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x14u); /* 0x12053A2D: imul eax, eax, 0x14 */
    PUSH32(esp, eax); /* 0x12053A30: push eax */
    PUSH32(esp, MEM32(esi + 0x25C)); /* 0x12053A31: push dword ptr [esi + 0x25c] */
    PUSH32(esp, ecx); /* 0x12053A37: push ecx */
    RECOMP_CALL(sub_121BF440); /* 0x12053A38: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x260); /* 0x12053A3D: mov eax, dword ptr [esi + 0x260] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x12053A43: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebx + 0x260) = eax; /* 0x12053A46: mov dword ptr [ebx + 0x260], eax */
L_12053A4C:
    edx = edi; /* 0x12053A4C: mov edx, edi */
    /* cmp MEM32(esi + 0x264), edi */ /* 0x12053A4E: cmp dword ptr [esi + 0x264], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x264)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_12053A97; /* 0x12053A54: jbe 0x12053a97 */
L_12053A56:
    ebx = edi; /* 0x12053A56: mov ebx, edi */
L_12053A58:
    eax = MEM32(ebp + (-0xC)); /* 0x12053A58: mov eax, dword ptr [ebp - 0xc] */
    ecx = ebx + eax; /* 0x12053A5B: lea ecx, [ebx + eax] */
    eax = MEM32(ebp + (-0x8)); /* 0x12053A5E: mov eax, dword ptr [ebp - 8] */
    edi = ebx + eax; /* 0x12053A61: lea edi, [ebx + eax] */
    PUSH32(esp, 3); /* 0x12053A64: push 3 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ecx; /* 0x12053A66: sub edi, ecx */
    _flag_k = FK_CMP;
    esi = POP32_VAL(esp); /* 0x12053A68: pop esi */
L_12053A69:
    eax = (uint32_t)MEM16(edi + ecx); /* 0x12053A69: movzx eax, word ptr [edi + ecx] */
    /* cmp LO16(eax), 0xFFFFu */ /* 0x12053A6D: cmp ax, 0xffff */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0xFFFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12053A78; /* 0x12053A71: je 0x12053a78 */
L_12053A73:
    MEM16(ecx) = (uint16_t)(LO16(eax)); /* 0x12053A73: mov word ptr [ecx], ax */
    goto L_12053A7D; /* 0x12053A76: jmp 0x12053a7d */
L_12053A78:
    _flag_a = (uint32_t)((MEM16(ecx) | 0xFFFFu)) << 16; _flag_b = (uint32_t)((MEM16(ecx) | 0xFFFFu)) << 16;
    MEM16(ecx) = (uint16_t)(MEM16(ecx) | 0xFFFFu); /* 0x12053A78: or word ptr [ecx], 0xffff */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
L_12053A7D:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x12053A7D: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x12053A80: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12053A69; /* 0x12053A81: jne 0x12053a69 */
L_12053A83:
    esi = MEM32(ebp + (-0x10)); /* 0x12053A83: mov esi, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x12053A86: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 6; /* 0x12053A87: add ebx, 6 */
    _flag_k = FK_ADD;
    /* cmp edx, MEM32(esi + 0x264) */ /* 0x12053A8A: cmp edx, dword ptr [esi + 0x264] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0x264));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12053A58; /* 0x12053A90: jb 0x12053a58 */
L_12053A92:
    ebx = MEM32(ebp + 0x8); /* 0x12053A92: mov ebx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x12053A95: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_12053A97:
    /* test MEM8(esi + 0x218), 1 */ /* 0x12053A97: test byte ptr [esi + 0x218], 1 */
    _flag_a = (uint32_t)(MEM8(esi + 0x218)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12053AEC; /* 0x12053A9E: je 0x12053aec */
L_12053AA0:
    /* cmp MEM32(esi + 0x264), edi */ /* 0x12053AA0: cmp dword ptr [esi + 0x264], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x264)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_12053AEC; /* 0x12053AA6: jbe 0x12053aec */
L_12053AA8:
    ecx = edi; /* 0x12053AA8: mov ecx, edi */
L_12053AAA:
    eax = MEM32(ebx + 0x250); /* 0x12053AAA: mov eax, dword ptr [ebx + 0x250] */
    ebx = MEM32(esi + 0x250); /* 0x12053AB0: mov ebx, dword ptr [esi + 0x250] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x12053AB6: add eax, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ecx; /* 0x12053AB8: add ebx, ecx */
    _flag_k = FK_ADD;
    PUSH32(esp, 3); /* 0x12053ABA: push 3 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - eax; /* 0x12053ABC: sub ebx, eax */
    _flag_k = FK_CMP;
    esi = POP32_VAL(esp); /* 0x12053ABE: pop esi */
L_12053ABF:
    edx = (uint32_t)MEM16(eax + ebx); /* 0x12053ABF: movzx edx, word ptr [eax + ebx] */
    /* cmp LO16(edx), 0xFFFFu */ /* 0x12053AC3: cmp dx, 0xffff */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(0xFFFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12053ACF; /* 0x12053AC8: je 0x12053acf */
L_12053ACA:
    MEM16(eax) = (uint16_t)(LO16(edx)); /* 0x12053ACA: mov word ptr [eax], dx */
    goto L_12053AD4; /* 0x12053ACD: jmp 0x12053ad4 */
L_12053ACF:
    _flag_a = (uint32_t)((MEM16(eax) | 0xFFFFu)) << 16; _flag_b = (uint32_t)((MEM16(eax) | 0xFFFFu)) << 16;
    MEM16(eax) = (uint16_t)(MEM16(eax) | 0xFFFFu); /* 0x12053ACF: or word ptr [eax], 0xffff */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
L_12053AD4:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x12053AD4: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x12053AD7: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12053ABF; /* 0x12053AD8: jne 0x12053abf */
L_12053ADA:
    esi = MEM32(ebp + (-0x10)); /* 0x12053ADA: mov esi, dword ptr [ebp - 0x10] */
    ebx = MEM32(ebp + 0x8); /* 0x12053ADD: mov ebx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x12053AE0: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 6; /* 0x12053AE1: add ecx, 6 */
    _flag_k = FK_ADD;
    /* cmp edi, MEM32(esi + 0x264) */ /* 0x12053AE4: cmp edi, dword ptr [esi + 0x264] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x264));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12053AAA; /* 0x12053AEA: jb 0x12053aaa */
L_12053AEC:
    edi = MEM32(ebp + (-0x4)); /* 0x12053AEC: mov edi, dword ptr [ebp - 4] */
    goto L_12053AF3; /* 0x12053AEF: jmp 0x12053af3 */
L_12053AF1:
    edi = eax; /* 0x12053AF1: mov edi, eax */
L_12053AF3:
    /* cmp MEM32(ebp + (-0x8)), 0 */ /* 0x12053AF3: cmp dword ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12053B05; /* 0x12053AF7: je 0x12053b05 */
L_12053AF9:
    eax = MEM32(esi + 0x248); /* 0x12053AF9: mov eax, dword ptr [esi + 0x248] */
    ecx = MEM32(eax); /* 0x12053AFF: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x12053B01: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x12053B02: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
L_12053B05:
    /* cmp MEM32(ebp + (-0xC)), 0 */ /* 0x12053B05: cmp dword ptr [ebp - 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12053B17; /* 0x12053B09: je 0x12053b17 */
L_12053B0B:
    eax = MEM32(ebx + 0x248); /* 0x12053B0B: mov eax, dword ptr [ebx + 0x248] */
    ecx = MEM32(eax); /* 0x12053B11: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x12053B13: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x12053B14: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
L_12053B17:
    eax = edi; /* 0x12053B17: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x12053B19: pop edi */
    esi = POP32_VAL(esp); /* 0x12053B1A: pop esi */
    ebx = POP32_VAL(esp); /* 0x12053B1B: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12053B1C: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12053B1D: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12053B25(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12053B25u);

L_12053B25:
    edi = edi; /* 0x12053B25: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12053B27: push ebp */
    ebp = esp; /* 0x12053B28: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x12053B2A: sub esp, 0x1c */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x12053B2D: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x12053B31: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x12053B35: push ebx */
    PUSH32(esp, esi); /* 0x12053B36: push esi */
    esi = ecx; /* 0x12053B37: mov esi, ecx */
    eax = MEM32(esi + 0x218); /* 0x12053B39: mov eax, dword ptr [esi + 0x218] */
    PUSH32(esp, edi); /* 0x12053B3F: push edi */
    edi = MEM32(ebp + 0x8); /* 0x12053B40: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)((eax ^ MEM32(edi + 0x218))); _flag_b = (uint32_t)((eax ^ MEM32(edi + 0x218)));
    eax = eax ^ MEM32(edi + 0x218); /* 0x12053B43: xor eax, dword ptr [edi + 0x218] */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edi; /* 0x12053B49: mov ecx, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    eax = eax & 0x20u; /* 0x12053B4B: and eax, 0x20 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ MEM32(esi + 0x218))); _flag_b = (uint32_t)((eax ^ MEM32(esi + 0x218)));
    eax = eax ^ MEM32(esi + 0x218); /* 0x12053B4E: xor eax, dword ptr [esi + 0x218] */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = esi; /* 0x12053B54: mov dword ptr [ebp - 0x10], esi */
    MEM32(edi + 0x218) = eax; /* 0x12053B57: mov dword ptr [edi + 0x218], eax */
    PUSH32(esp, MEM32(esi + 0x23C)); /* 0x12053B5D: push dword ptr [esi + 0x23c] */
    PUSH32(esp, MEM32(esi + 0x264)); /* 0x12053B63: push dword ptr [esi + 0x264] */
    RECOMP_CALL(sub_12051FB8); /* 0x12053B69: call 0x12051fb8 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x12053B6E: mov ebx, eax */
    /* test ebx, ebx */ /* 0x12053B70: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12053D3D; /* 0x12053B72: js 0x12053d3d */
L_12053B78:
    eax = MEM32(edi + 0x248); /* 0x12053B78: mov eax, dword ptr [edi + 0x248] */
    ecx = MEM32(eax); /* 0x12053B7E: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0x800u); /* 0x12053B80: push 0x800 */
    edx = ebp + (-0x8); /* 0x12053B85: lea edx, [ebp - 8] */
    PUSH32(esp, edx); /* 0x12053B88: push edx */
    PUSH32(esp, 0); /* 0x12053B89: push 0 */
    PUSH32(esp, 0); /* 0x12053B8B: push 0 */
    PUSH32(esp, eax); /* 0x12053B8D: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x2C)); /* 0x12053B8E: call dword ptr [ecx + 0x2c] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x12053B91: mov ebx, eax */
    /* test ebx, ebx */ /* 0x12053B93: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12053D3D; /* 0x12053B95: js 0x12053d3d */
L_12053B9B:
    eax = MEM32(esi + 0x248); /* 0x12053B9B: mov eax, dword ptr [esi + 0x248] */
    ecx = MEM32(eax); /* 0x12053BA1: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0x810u); /* 0x12053BA3: push 0x810 */
    edx = ebp + (-0x4); /* 0x12053BA8: lea edx, [ebp - 4] */
    PUSH32(esp, edx); /* 0x12053BAB: push edx */
    PUSH32(esp, 0); /* 0x12053BAC: push 0 */
    PUSH32(esp, 0); /* 0x12053BAE: push 0 */
    PUSH32(esp, eax); /* 0x12053BB0: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x2C)); /* 0x12053BB1: call dword ptr [ecx + 0x2c] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x12053BB4: mov ebx, eax */
    MEM32(ebp + (-0x14)) = ebx; /* 0x12053BB6: mov dword ptr [ebp - 0x14], ebx */
    /* test ebx, ebx */ /* 0x12053BB9: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12053D3D; /* 0x12053BBB: js 0x12053d3d */
L_12053BC1:
    /* test MEM8(esi + 0x218), 4 */ /* 0x12053BC1: test byte ptr [esi + 0x218], 4 */
    _flag_a = (uint32_t)(MEM8(esi + 0x218)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12053BE8; /* 0x12053BC8: je 0x12053be8 */
L_12053BCA:
    eax = MEM32(esi + 0x264); /* 0x12053BCA: mov eax, dword ptr [esi + 0x264] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x12053BD0: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x12053BD0: shl eax, 2 */
    PUSH32(esp, eax); /* 0x12053BD3: push eax */
    PUSH32(esp, MEM32(esi + 0x254)); /* 0x12053BD4: push dword ptr [esi + 0x254] */
    PUSH32(esp, MEM32(edi + 0x254)); /* 0x12053BDA: push dword ptr [edi + 0x254] */
    RECOMP_CALL(sub_121BF440); /* 0x12053BE0: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x12053BE5: add esp, 0xc */
    _flag_k = FK_ADD;
L_12053BE8:
    /* test MEM8(esi + 0x218), 8 */ /* 0x12053BE8: test byte ptr [esi + 0x218], 8 */
    _flag_a = (uint32_t)(MEM8(esi + 0x218)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12053C0E; /* 0x12053BEF: je 0x12053c0e */
L_12053BF1:
    eax = MEM32(esi + 0x264); /* 0x12053BF1: mov eax, dword ptr [esi + 0x264] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x12053BF7: add eax, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x12053BF9: push eax */
    PUSH32(esp, MEM32(esi + 0x258)); /* 0x12053BFA: push dword ptr [esi + 0x258] */
    PUSH32(esp, MEM32(edi + 0x258)); /* 0x12053C00: push dword ptr [edi + 0x258] */
    RECOMP_CALL(sub_121BF440); /* 0x12053C06: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x12053C0B: add esp, 0xc */
    _flag_k = FK_ADD;
L_12053C0E:
    /* cmp MEM32(esi + 0x25C), 0 */ /* 0x12053C0E: cmp dword ptr [esi + 0x25c], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x25C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12053C73; /* 0x12053C15: je 0x12053c73 */
L_12053C17:
    eax = MEM32(esi + 0x260); /* 0x12053C17: mov eax, dword ptr [esi + 0x260] */
    PUSH32(esp, 0x120014BCu); /* 0x12053C1D: push 0x120014bc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x12053C22: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x14u); /* 0x12053C24: push 0x14 */
    edx = POP32_VAL(esp); /* 0x12053C26: pop edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x12053C27: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x12053C29: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x12053C2C: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x12053C2E: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x12053C30: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x12053C31: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12053C36: pop ecx */
    ecx = POP32_VAL(esp); /* 0x12053C37: pop ecx */
    ecx = eax; /* 0x12053C38: mov ecx, eax */
    MEM32(edi + 0x25C) = ecx; /* 0x12053C3A: mov dword ptr [edi + 0x25c], ecx */
    /* test ecx, ecx */ /* 0x12053C40: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12053C4E; /* 0x12053C42: jne 0x12053c4e */
L_12053C44:
    ebx = 0x8007000Eu; /* 0x12053C44: mov ebx, 0x8007000e */
    goto L_12053D3D; /* 0x12053C49: jmp 0x12053d3d */
L_12053C4E:
    eax = MEM32(esi + 0x260); /* 0x12053C4E: mov eax, dword ptr [esi + 0x260] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x14u); /* 0x12053C54: imul eax, eax, 0x14 */
    PUSH32(esp, eax); /* 0x12053C57: push eax */
    PUSH32(esp, MEM32(esi + 0x25C)); /* 0x12053C58: push dword ptr [esi + 0x25c] */
    PUSH32(esp, ecx); /* 0x12053C5E: push ecx */
    RECOMP_CALL(sub_121BF440); /* 0x12053C5F: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x260); /* 0x12053C64: mov eax, dword ptr [esi + 0x260] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x12053C6A: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(edi + 0x260) = eax; /* 0x12053C6D: mov dword ptr [edi + 0x260], eax */
L_12053C73:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x12053C73: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = edx; /* 0x12053C75: mov dword ptr [ebp - 0xc], edx */
    /* cmp MEM32(esi + 0x264), edx */ /* 0x12053C78: cmp dword ptr [esi + 0x264], edx */
    _flag_a = (uint32_t)(MEM32(esi + 0x264)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_12053CCE; /* 0x12053C7E: jbe 0x12053cce */
L_12053C80:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x12053C80: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x12053C82: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_12053C84:
    eax = MEM32(ebp + (-0x8)); /* 0x12053C84: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x12053C87: add eax, ebx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x18)) = eax; /* 0x12053C89: mov dword ptr [ebp - 0x18], eax */
    eax = MEM32(ebp + (-0x4)); /* 0x12053C8C: mov eax, dword ptr [ebp - 4] */
    esi = MEM32(ebp + (-0x18)); /* 0x12053C8F: mov esi, dword ptr [ebp - 0x18] */
    edx = edi + eax; /* 0x12053C92: lea edx, [edi + eax] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x12053C95: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_12053C97:
    eax = (uint32_t)MEM16(edx + ecx * 2); /* 0x12053C97: movzx eax, word ptr [edx + ecx*2] */
    /* cmp LO16(eax), 0xFFFFu */ /* 0x12053C9B: cmp ax, 0xffff */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0xFFFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12053CA6; /* 0x12053C9F: je 0x12053ca6 */
L_12053CA1:
    MEM32(esi + ecx * 4) = eax; /* 0x12053CA1: mov dword ptr [esi + ecx*4], eax */
    goto L_12053CAA; /* 0x12053CA4: jmp 0x12053caa */
L_12053CA6:
    _flag_a = (uint32_t)((MEM32(esi + ecx * 4) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(esi + ecx * 4) | 0xFFFFFFFFu));
    MEM32(esi + ecx * 4) = MEM32(esi + ecx * 4) | 0xFFFFFFFFu; /* 0x12053CA6: or dword ptr [esi + ecx*4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_12053CAA:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x12053CAA: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, 3 */ /* 0x12053CAB: cmp ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12053C97; /* 0x12053CAE: jb 0x12053c97 */
L_12053CB0:
    edx = MEM32(ebp + (-0xC)); /* 0x12053CB0: mov edx, dword ptr [ebp - 0xc] */
    esi = MEM32(ebp + (-0x10)); /* 0x12053CB3: mov esi, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x12053CB6: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0xCu; /* 0x12053CB7: add ebx, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 6; /* 0x12053CBA: add edi, 6 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xC)) = edx; /* 0x12053CBD: mov dword ptr [ebp - 0xc], edx */
    /* cmp edx, MEM32(esi + 0x264) */ /* 0x12053CC0: cmp edx, dword ptr [esi + 0x264] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0x264));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12053C84; /* 0x12053CC6: jb 0x12053c84 */
L_12053CC8:
    edi = MEM32(ebp + 0x8); /* 0x12053CC8: mov edi, dword ptr [ebp + 8] */
    ebx = MEM32(ebp + (-0x14)); /* 0x12053CCB: mov ebx, dword ptr [ebp - 0x14] */
L_12053CCE:
    /* test MEM8(esi + 0x218), 1 */ /* 0x12053CCE: test byte ptr [esi + 0x218], 1 */
    _flag_a = (uint32_t)(MEM8(esi + 0x218)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12053D3D; /* 0x12053CD5: je 0x12053d3d */
L_12053CD7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x12053CD7: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x264), edx */ /* 0x12053CD9: cmp dword ptr [esi + 0x264], edx */
    _flag_a = (uint32_t)(MEM32(esi + 0x264)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_12053D3D; /* 0x12053CDF: jbe 0x12053d3d */
L_12053CE1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12053CE1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = eax; /* 0x12053CE3: mov dword ptr [ebp - 0xc], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x12053CE6: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_12053CE8:
    ecx = MEM32(edi + 0x250); /* 0x12053CE8: mov ecx, dword ptr [edi + 0x250] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ebx; /* 0x12053CEE: add ecx, ebx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x18)) = ecx; /* 0x12053CF0: mov dword ptr [ebp - 0x18], ecx */
    ecx = MEM32(esi + 0x250); /* 0x12053CF3: mov ecx, dword ptr [esi + 0x250] */
    edi = MEM32(ebp + (-0x18)); /* 0x12053CF9: mov edi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x12053CFC: add ecx, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1C)) = ecx; /* 0x12053CFE: mov dword ptr [ebp - 0x1c], ecx */
    esi = MEM32(ebp + (-0x1C)); /* 0x12053D01: mov esi, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x12053D04: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_12053D06:
    eax = (uint32_t)MEM16(esi + ecx * 2); /* 0x12053D06: movzx eax, word ptr [esi + ecx*2] */
    /* cmp LO16(eax), 0xFFFFu */ /* 0x12053D0A: cmp ax, 0xffff */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0xFFFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12053D15; /* 0x12053D0E: je 0x12053d15 */
L_12053D10:
    MEM32(edi + ecx * 4) = eax; /* 0x12053D10: mov dword ptr [edi + ecx*4], eax */
    goto L_12053D19; /* 0x12053D13: jmp 0x12053d19 */
L_12053D15:
    _flag_a = (uint32_t)((MEM32(edi + ecx * 4) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(edi + ecx * 4) | 0xFFFFFFFFu));
    MEM32(edi + ecx * 4) = MEM32(edi + ecx * 4) | 0xFFFFFFFFu; /* 0x12053D15: or dword ptr [edi + ecx*4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_12053D19:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x12053D19: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, 3 */ /* 0x12053D1A: cmp ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12053D06; /* 0x12053D1D: jb 0x12053d06 */
L_12053D1F:
    eax = MEM32(ebp + (-0xC)); /* 0x12053D1F: mov eax, dword ptr [ebp - 0xc] */
    esi = MEM32(ebp + (-0x10)); /* 0x12053D22: mov esi, dword ptr [ebp - 0x10] */
    edi = MEM32(ebp + 0x8); /* 0x12053D25: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x12053D28: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 6; /* 0x12053D29: add eax, 6 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0xCu; /* 0x12053D2C: add ebx, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xC)) = eax; /* 0x12053D2F: mov dword ptr [ebp - 0xc], eax */
    /* cmp edx, MEM32(esi + 0x264) */ /* 0x12053D32: cmp edx, dword ptr [esi + 0x264] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0x264));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12053CE8; /* 0x12053D38: jb 0x12053ce8 */
L_12053D3A:
    ebx = MEM32(ebp + (-0x14)); /* 0x12053D3A: mov ebx, dword ptr [ebp - 0x14] */
L_12053D3D:
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x12053D3D: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12053D4F; /* 0x12053D41: je 0x12053d4f */
L_12053D43:
    eax = MEM32(esi + 0x248); /* 0x12053D43: mov eax, dword ptr [esi + 0x248] */
    ecx = MEM32(eax); /* 0x12053D49: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x12053D4B: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x12053D4C: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
L_12053D4F:
    /* cmp MEM32(ebp + (-0x8)), 0 */ /* 0x12053D4F: cmp dword ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12053D61; /* 0x12053D53: je 0x12053d61 */
L_12053D55:
    eax = MEM32(edi + 0x248); /* 0x12053D55: mov eax, dword ptr [edi + 0x248] */
    ecx = MEM32(eax); /* 0x12053D5B: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x12053D5D: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x12053D5E: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
L_12053D61:
    edi = POP32_VAL(esp); /* 0x12053D61: pop edi */
    esi = POP32_VAL(esp); /* 0x12053D62: pop esi */
    eax = ebx; /* 0x12053D63: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x12053D65: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12053D66: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12053D67: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12053D6F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12053D6Fu);

L_12053D6F:
    edi = edi; /* 0x12053D6F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12053D71: push ebp */
    ebp = esp; /* 0x12053D72: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x12053D74: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x12053D77: push ebx */
    PUSH32(esp, esi); /* 0x12053D78: push esi */
    PUSH32(esp, edi); /* 0x12053D79: push edi */
    PUSH32(esp, 0x800u); /* 0x12053D7A: push 0x800 */
    esi = ecx; /* 0x12053D7F: mov esi, ecx */
    eax = MEM32(esi + 0x248); /* 0x12053D81: mov eax, dword ptr [esi + 0x248] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x12053D87: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x10); /* 0x12053D89: lea ecx, [ebp - 0x10] */
    PUSH32(esp, ecx); /* 0x12053D8C: push ecx */
    PUSH32(esp, ebx); /* 0x12053D8D: push ebx */
    PUSH32(esp, ebx); /* 0x12053D8E: push ebx */
    MEM32(ebp + (-0x4)) = ebx; /* 0x12053D8F: mov dword ptr [ebp - 4], ebx */
    MEM32(ebp + (-0x8)) = ebx; /* 0x12053D92: mov dword ptr [ebp - 8], ebx */
    MEM32(ebp + (-0xC)) = ebx; /* 0x12053D95: mov dword ptr [ebp - 0xc], ebx */
    MEM32(ebp + (-0x10)) = ebx; /* 0x12053D98: mov dword ptr [ebp - 0x10], ebx */
    edx = MEM32(eax); /* 0x12053D9B: mov edx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x12053D9D: push eax */
    RECOMP_ICALL(MEM32(edx + 0x2C)); /* 0x12053D9E: call dword ptr [edx + 0x2c] */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x12053DA1: mov edi, dword ptr [ebp + 8] */
    ebx = eax; /* 0x12053DA4: mov ebx, eax */
    /* test ebx, ebx */ /* 0x12053DA6: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12053FAC; /* 0x12053DA8: js 0x12053fac */
L_12053DAE:
    eax = MEM32(edi + 0x248); /* 0x12053DAE: mov eax, dword ptr [edi + 0x248] */
    ecx = MEM32(eax); /* 0x12053DB4: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0x810u); /* 0x12053DB6: push 0x810 */
    edx = ebp + (-0xC); /* 0x12053DBB: lea edx, [ebp - 0xc] */
    PUSH32(esp, edx); /* 0x12053DBE: push edx */
    PUSH32(esp, 0); /* 0x12053DBF: push 0 */
    PUSH32(esp, 0); /* 0x12053DC1: push 0 */
    PUSH32(esp, eax); /* 0x12053DC3: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x2C)); /* 0x12053DC4: call dword ptr [ecx + 0x2c] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x12053DC7: mov ebx, eax */
    /* test ebx, ebx */ /* 0x12053DC9: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12053FAC; /* 0x12053DCB: js 0x12053fac */
L_12053DD1:
    eax = MEM32(esi + 0x264); /* 0x12053DD1: mov eax, dword ptr [esi + 0x264] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0xCu); /* 0x12053DD7: imul eax, eax, 0xc */
    PUSH32(esp, eax); /* 0x12053DDA: push eax */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x12053DDB: push dword ptr [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x12053DDE: push dword ptr [ebp - 0x10] */
    RECOMP_CALL(sub_121BF440); /* 0x12053DE1: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    eax = esi + 0x218; /* 0x12053DE6: lea eax, [esi + 0x218] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x12053DEC: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test MEM8(eax), 1 */ /* 0x12053DEF: test byte ptr [eax], 1 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12053E21; /* 0x12053DF2: je 0x12053e21 */
L_12053DF4:
    /* test MEM8(edi + 0x218), 1 */ /* 0x12053DF4: test byte ptr [edi + 0x218], 1 */
    _flag_a = (uint32_t)(MEM8(edi + 0x218)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12053E21; /* 0x12053DFB: je 0x12053e21 */
L_12053DFD:
    eax = MEM32(esi + 0x264); /* 0x12053DFD: mov eax, dword ptr [esi + 0x264] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0xCu); /* 0x12053E03: imul eax, eax, 0xc */
    PUSH32(esp, eax); /* 0x12053E06: push eax */
    PUSH32(esp, MEM32(edi + 0x250)); /* 0x12053E07: push dword ptr [edi + 0x250] */
    PUSH32(esp, MEM32(esi + 0x250)); /* 0x12053E0D: push dword ptr [esi + 0x250] */
    RECOMP_CALL(sub_121BF440); /* 0x12053E13: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x12053E18: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = esi + 0x218; /* 0x12053E1B: lea eax, [esi + 0x218] */
L_12053E21:
    /* test MEM8(eax), 4 */ /* 0x12053E21: test byte ptr [eax], 4 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12053E53; /* 0x12053E24: je 0x12053e53 */
L_12053E26:
    /* test MEM8(edi + 0x218), 4 */ /* 0x12053E26: test byte ptr [edi + 0x218], 4 */
    _flag_a = (uint32_t)(MEM8(edi + 0x218)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12053E53; /* 0x12053E2D: je 0x12053e53 */
L_12053E2F:
    eax = MEM32(esi + 0x264); /* 0x12053E2F: mov eax, dword ptr [esi + 0x264] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x12053E35: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x12053E35: shl eax, 2 */
    PUSH32(esp, eax); /* 0x12053E38: push eax */
    PUSH32(esp, MEM32(edi + 0x254)); /* 0x12053E39: push dword ptr [edi + 0x254] */
    PUSH32(esp, MEM32(esi + 0x254)); /* 0x12053E3F: push dword ptr [esi + 0x254] */
    RECOMP_CALL(sub_121BF440); /* 0x12053E45: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x12053E4A: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = esi + 0x218; /* 0x12053E4D: lea eax, [esi + 0x218] */
L_12053E53:
    /* test MEM8(eax), 8 */ /* 0x12053E53: test byte ptr [eax], 8 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12053E84; /* 0x12053E56: je 0x12053e84 */
L_12053E58:
    /* test MEM8(edi + 0x218), 8 */ /* 0x12053E58: test byte ptr [edi + 0x218], 8 */
    _flag_a = (uint32_t)(MEM8(edi + 0x218)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12053E84; /* 0x12053E5F: je 0x12053e84 */
L_12053E61:
    eax = MEM32(esi + 0x264); /* 0x12053E61: mov eax, dword ptr [esi + 0x264] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x12053E67: add eax, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x12053E69: push eax */
    PUSH32(esp, MEM32(edi + 0x258)); /* 0x12053E6A: push dword ptr [edi + 0x258] */
    PUSH32(esp, MEM32(esi + 0x258)); /* 0x12053E70: push dword ptr [esi + 0x258] */
    RECOMP_CALL(sub_121BF440); /* 0x12053E76: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x12053E7B: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = esi + 0x218; /* 0x12053E7E: lea eax, [esi + 0x218] */
L_12053E84:
    /* test MEM8(edi + 0x218), 0x10u */ /* 0x12053E84: test byte ptr [edi + 0x218], 0x10 */
    _flag_a = (uint32_t)(MEM8(edi + 0x218)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12053F11; /* 0x12053E8B: je 0x12053f11 */
L_12053E91:
    /* test MEM8(eax), 0x10u */ /* 0x12053E91: test byte ptr [eax], 0x10 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12053EA4; /* 0x12053E94: je 0x12053ea4 */
L_12053E96:
    eax = MEM32(esi + 0x260); /* 0x12053E96: mov eax, dword ptr [esi + 0x260] */
    /* cmp eax, MEM32(edi + 0x260) */ /* 0x12053E9C: cmp eax, dword ptr [edi + 0x260] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x260));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12053EF3; /* 0x12053EA2: je 0x12053ef3 */
L_12053EA4:
    PUSH32(esp, MEM32(esi + 0x25C)); /* 0x12053EA4: push dword ptr [esi + 0x25c] */
    RECOMP_CALL(sub_121BF388); /* 0x12053EAA: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x260); /* 0x12053EAF: mov eax, dword ptr [edi + 0x260] */
    MEM32(esp) = 0x120014BCu; /* 0x12053EB5: mov dword ptr [esp], 0x120014bc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x12053EBC: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x14u); /* 0x12053EBE: push 0x14 */
    edx = POP32_VAL(esp); /* 0x12053EC0: pop edx */
    MEM32(esi + 0x260) = eax; /* 0x12053EC1: mov dword ptr [esi + 0x260], eax */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x12053EC7: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x12053EC9: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x12053ECC: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x12053ECE: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x12053ED0: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x12053ED1: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12053ED6: pop ecx */
    ecx = POP32_VAL(esp); /* 0x12053ED7: pop ecx */
    MEM32(esi + 0x25C) = eax; /* 0x12053ED8: mov dword ptr [esi + 0x25c], eax */
    /* test eax, eax */ /* 0x12053EDE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12053EEC; /* 0x12053EE0: jne 0x12053eec */
L_12053EE2:
    ebx = 0x8007000Eu; /* 0x12053EE2: mov ebx, 0x8007000e */
    goto L_12053FAC; /* 0x12053EE7: jmp 0x12053fac */
L_12053EEC:
    _flag_a = (uint32_t)((MEM32(esi + 0x218) | 0x10u)); _flag_b = (uint32_t)((MEM32(esi + 0x218) | 0x10u));
    MEM32(esi + 0x218) = MEM32(esi + 0x218) | 0x10u; /* 0x12053EEC: or dword ptr [esi + 0x218], 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
L_12053EF3:
    eax = MEM32(esi + 0x260); /* 0x12053EF3: mov eax, dword ptr [esi + 0x260] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x14u); /* 0x12053EF9: imul eax, eax, 0x14 */
    PUSH32(esp, eax); /* 0x12053EFC: push eax */
    PUSH32(esp, MEM32(edi + 0x25C)); /* 0x12053EFD: push dword ptr [edi + 0x25c] */
    PUSH32(esp, MEM32(esi + 0x25C)); /* 0x12053F03: push dword ptr [esi + 0x25c] */
    RECOMP_CALL(sub_121BF440); /* 0x12053F09: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x12053F0E: add esp, 0xc */
    _flag_k = FK_ADD;
L_12053F11:
    eax = MEM32(esi + 0x23C); /* 0x12053F11: mov eax, dword ptr [esi + 0x23c] */
    /* test eax, eax */ /* 0x12053F17: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12053FAC; /* 0x12053F19: je 0x12053fac */
L_12053F1F:
    /* test MEM8(esi + 0x218), 2 */ /* 0x12053F1F: test byte ptr [esi + 0x218], 2 */
    _flag_a = (uint32_t)(MEM8(esi + 0x218)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12053F49; /* 0x12053F26: je 0x12053f49 */
L_12053F28:
    /* test MEM8(edi + 0x218), 2 */ /* 0x12053F28: test byte ptr [edi + 0x218], 2 */
    _flag_a = (uint32_t)(MEM8(edi + 0x218)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12053F49; /* 0x12053F2F: je 0x12053f49 */
L_12053F31:
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x12053F31: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x12053F31: shl eax, 2 */
    PUSH32(esp, eax); /* 0x12053F34: push eax */
    PUSH32(esp, MEM32(edi + 0x244)); /* 0x12053F35: push dword ptr [edi + 0x244] */
    PUSH32(esp, MEM32(esi + 0x244)); /* 0x12053F3B: push dword ptr [esi + 0x244] */
    RECOMP_CALL(sub_121BF440); /* 0x12053F41: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x12053F46: add esp, 0xc */
    _flag_k = FK_ADD;
L_12053F49:
    /* test MEM8(esi + 0x218), 0x20u */ /* 0x12053F49: test byte ptr [esi + 0x218], 0x20 */
    _flag_a = (uint32_t)(MEM8(esi + 0x218)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12053FAC; /* 0x12053F50: jne 0x12053fac */
L_12053F52:
    eax = MEM32(edi + 0x234); /* 0x12053F52: mov eax, dword ptr [edi + 0x234] */
    ecx = MEM32(eax); /* 0x12053F58: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0x810u); /* 0x12053F5A: push 0x810 */
    edx = ebp + (-0x8); /* 0x12053F5F: lea edx, [ebp - 8] */
    PUSH32(esp, edx); /* 0x12053F62: push edx */
    PUSH32(esp, 0); /* 0x12053F63: push 0 */
    PUSH32(esp, 0); /* 0x12053F65: push 0 */
    PUSH32(esp, eax); /* 0x12053F67: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x2C)); /* 0x12053F68: call dword ptr [ecx + 0x2c] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x12053F6B: mov ebx, eax */
    /* test ebx, ebx */ /* 0x12053F6D: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12053FAC; /* 0x12053F6F: js 0x12053fac */
L_12053F71:
    eax = MEM32(esi + 0x234); /* 0x12053F71: mov eax, dword ptr [esi + 0x234] */
    ecx = MEM32(eax); /* 0x12053F77: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0x800u); /* 0x12053F79: push 0x800 */
    edx = ebp + (-0x4); /* 0x12053F7E: lea edx, [ebp - 4] */
    PUSH32(esp, edx); /* 0x12053F81: push edx */
    PUSH32(esp, 0); /* 0x12053F82: push 0 */
    PUSH32(esp, 0); /* 0x12053F84: push 0 */
    PUSH32(esp, eax); /* 0x12053F86: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x2C)); /* 0x12053F87: call dword ptr [ecx + 0x2c] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x12053F8A: mov ebx, eax */
    /* test ebx, ebx */ /* 0x12053F8C: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12053FAC; /* 0x12053F8E: js 0x12053fac */
L_12053F90:
    eax = MEM32(esi + 0x238); /* 0x12053F90: mov eax, dword ptr [esi + 0x238] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esi + 0x23C)); /* 0x12053F96: imul eax, dword ptr [esi + 0x23c] */
    PUSH32(esp, eax); /* 0x12053F9D: push eax */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x12053F9E: push dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x12053FA1: push dword ptr [ebp - 4] */
    RECOMP_CALL(sub_121BF440); /* 0x12053FA4: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x12053FA9: add esp, 0xc */
    _flag_k = FK_ADD;
L_12053FAC:
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x12053FAC: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12053FBE; /* 0x12053FB0: je 0x12053fbe */
L_12053FB2:
    eax = MEM32(esi + 0x234); /* 0x12053FB2: mov eax, dword ptr [esi + 0x234] */
    ecx = MEM32(eax); /* 0x12053FB8: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x12053FBA: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x12053FBB: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
L_12053FBE:
    /* cmp MEM32(ebp + (-0x8)), 0 */ /* 0x12053FBE: cmp dword ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12053FD0; /* 0x12053FC2: je 0x12053fd0 */
L_12053FC4:
    eax = MEM32(edi + 0x234); /* 0x12053FC4: mov eax, dword ptr [edi + 0x234] */
    ecx = MEM32(eax); /* 0x12053FCA: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x12053FCC: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x12053FCD: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
L_12053FD0:
    /* cmp MEM32(ebp + (-0xC)), 0 */ /* 0x12053FD0: cmp dword ptr [ebp - 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12053FE2; /* 0x12053FD4: je 0x12053fe2 */
L_12053FD6:
    eax = MEM32(edi + 0x248); /* 0x12053FD6: mov eax, dword ptr [edi + 0x248] */
    ecx = MEM32(eax); /* 0x12053FDC: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x12053FDE: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x12053FDF: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
L_12053FE2:
    /* cmp MEM32(ebp + (-0x10)), 0 */ /* 0x12053FE2: cmp dword ptr [ebp - 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12053FF4; /* 0x12053FE6: je 0x12053ff4 */
L_12053FE8:
    eax = MEM32(esi + 0x248); /* 0x12053FE8: mov eax, dword ptr [esi + 0x248] */
    ecx = MEM32(eax); /* 0x12053FEE: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x12053FF0: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x12053FF1: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
L_12053FF4:
    /* test ebx, ebx */ /* 0x12053FF4: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_12053FFF; /* 0x12053FF6: jns 0x12053fff */
L_12053FF8:
    ecx = esi; /* 0x12053FF8: mov ecx, esi */
    RECOMP_CALL(sub_1204EAC2); /* 0x12053FFA: call 0x1204eac2 */
    RECOMP_FLAGS_IN();
L_12053FFF:
    edi = POP32_VAL(esp); /* 0x12053FFF: pop edi */
    esi = POP32_VAL(esp); /* 0x12054000: pop esi */
    eax = ebx; /* 0x12054001: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x12054003: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12054004: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12054005: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1205400D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1205400Du);

L_1205400D:
    edi = edi; /* 0x1205400D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1205400F: push ebp */
    ebp = esp; /* 0x12054010: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x12054012: sub esp, 0x1c */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x12054015: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x12054019: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1205401D: push ebx */
    PUSH32(esp, esi); /* 0x1205401E: push esi */
    esi = ecx; /* 0x1205401F: mov esi, ecx */
    eax = MEM32(esi + 0x218); /* 0x12054021: mov eax, dword ptr [esi + 0x218] */
    PUSH32(esp, edi); /* 0x12054027: push edi */
    edi = MEM32(ebp + 0x8); /* 0x12054028: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)((eax ^ MEM32(edi + 0x218))); _flag_b = (uint32_t)((eax ^ MEM32(edi + 0x218)));
    eax = eax ^ MEM32(edi + 0x218); /* 0x1205402B: xor eax, dword ptr [edi + 0x218] */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edi; /* 0x12054031: mov ecx, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    eax = eax & 0x20u; /* 0x12054033: and eax, 0x20 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ MEM32(esi + 0x218))); _flag_b = (uint32_t)((eax ^ MEM32(esi + 0x218)));
    eax = eax ^ MEM32(esi + 0x218); /* 0x12054036: xor eax, dword ptr [esi + 0x218] */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = esi; /* 0x1205403C: mov dword ptr [ebp - 0x10], esi */
    MEM32(edi + 0x218) = eax; /* 0x1205403F: mov dword ptr [edi + 0x218], eax */
    PUSH32(esp, MEM32(esi + 0x23C)); /* 0x12054045: push dword ptr [esi + 0x23c] */
    PUSH32(esp, MEM32(esi + 0x264)); /* 0x1205404B: push dword ptr [esi + 0x264] */
    RECOMP_CALL(sub_12051228); /* 0x12054051: call 0x12051228 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x12054056: mov ebx, eax */
    /* test ebx, ebx */ /* 0x12054058: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1205422B; /* 0x1205405A: js 0x1205422b */
L_12054060:
    eax = MEM32(edi + 0x248); /* 0x12054060: mov eax, dword ptr [edi + 0x248] */
    ecx = MEM32(eax); /* 0x12054066: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0x800u); /* 0x12054068: push 0x800 */
    edx = ebp + (-0x8); /* 0x1205406D: lea edx, [ebp - 8] */
    PUSH32(esp, edx); /* 0x12054070: push edx */
    PUSH32(esp, 0); /* 0x12054071: push 0 */
    PUSH32(esp, 0); /* 0x12054073: push 0 */
    PUSH32(esp, eax); /* 0x12054075: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x2C)); /* 0x12054076: call dword ptr [ecx + 0x2c] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x12054079: mov ebx, eax */
    /* test ebx, ebx */ /* 0x1205407B: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1205422B; /* 0x1205407D: js 0x1205422b */
L_12054083:
    eax = MEM32(esi + 0x248); /* 0x12054083: mov eax, dword ptr [esi + 0x248] */
    ecx = MEM32(eax); /* 0x12054089: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0x810u); /* 0x1205408B: push 0x810 */
    edx = ebp + (-0x4); /* 0x12054090: lea edx, [ebp - 4] */
    PUSH32(esp, edx); /* 0x12054093: push edx */
    PUSH32(esp, 0); /* 0x12054094: push 0 */
    PUSH32(esp, 0); /* 0x12054096: push 0 */
    PUSH32(esp, eax); /* 0x12054098: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x2C)); /* 0x12054099: call dword ptr [ecx + 0x2c] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1205409C: mov ebx, eax */
    MEM32(ebp + (-0x14)) = ebx; /* 0x1205409E: mov dword ptr [ebp - 0x14], ebx */
    /* test ebx, ebx */ /* 0x120540A1: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1205422B; /* 0x120540A3: js 0x1205422b */
L_120540A9:
    /* test MEM8(esi + 0x218), 4 */ /* 0x120540A9: test byte ptr [esi + 0x218], 4 */
    _flag_a = (uint32_t)(MEM8(esi + 0x218)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_120540D0; /* 0x120540B0: je 0x120540d0 */
L_120540B2:
    eax = MEM32(esi + 0x264); /* 0x120540B2: mov eax, dword ptr [esi + 0x264] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x120540B8: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x120540B8: shl eax, 2 */
    PUSH32(esp, eax); /* 0x120540BB: push eax */
    PUSH32(esp, MEM32(esi + 0x254)); /* 0x120540BC: push dword ptr [esi + 0x254] */
    PUSH32(esp, MEM32(edi + 0x254)); /* 0x120540C2: push dword ptr [edi + 0x254] */
    RECOMP_CALL(sub_121BF440); /* 0x120540C8: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x120540CD: add esp, 0xc */
    _flag_k = FK_ADD;
L_120540D0:
    /* test MEM8(esi + 0x218), 8 */ /* 0x120540D0: test byte ptr [esi + 0x218], 8 */
    _flag_a = (uint32_t)(MEM8(esi + 0x218)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_120540F6; /* 0x120540D7: je 0x120540f6 */
L_120540D9:
    eax = MEM32(esi + 0x264); /* 0x120540D9: mov eax, dword ptr [esi + 0x264] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x120540DF: add eax, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x120540E1: push eax */
    PUSH32(esp, MEM32(esi + 0x258)); /* 0x120540E2: push dword ptr [esi + 0x258] */
    PUSH32(esp, MEM32(edi + 0x258)); /* 0x120540E8: push dword ptr [edi + 0x258] */
    RECOMP_CALL(sub_121BF440); /* 0x120540EE: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x120540F3: add esp, 0xc */
    _flag_k = FK_ADD;
L_120540F6:
    /* cmp MEM32(esi + 0x25C), 0 */ /* 0x120540F6: cmp dword ptr [esi + 0x25c], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x25C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1205415B; /* 0x120540FD: je 0x1205415b */
L_120540FF:
    eax = MEM32(esi + 0x260); /* 0x120540FF: mov eax, dword ptr [esi + 0x260] */
    PUSH32(esp, 0x120014BCu); /* 0x12054105: push 0x120014bc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1205410A: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x14u); /* 0x1205410C: push 0x14 */
    edx = POP32_VAL(esp); /* 0x1205410E: pop edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x1205410F: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x12054111: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x12054114: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x12054116: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x12054118: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x12054119: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1205411E: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1205411F: pop ecx */
    ecx = eax; /* 0x12054120: mov ecx, eax */
    MEM32(edi + 0x25C) = ecx; /* 0x12054122: mov dword ptr [edi + 0x25c], ecx */
    /* test ecx, ecx */ /* 0x12054128: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12054136; /* 0x1205412A: jne 0x12054136 */
L_1205412C:
    ebx = 0x8007000Eu; /* 0x1205412C: mov ebx, 0x8007000e */
    goto L_1205422B; /* 0x12054131: jmp 0x1205422b */
L_12054136:
    eax = MEM32(esi + 0x260); /* 0x12054136: mov eax, dword ptr [esi + 0x260] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x14u); /* 0x1205413C: imul eax, eax, 0x14 */
    PUSH32(esp, eax); /* 0x1205413F: push eax */
    PUSH32(esp, MEM32(esi + 0x25C)); /* 0x12054140: push dword ptr [esi + 0x25c] */
    PUSH32(esp, ecx); /* 0x12054146: push ecx */
    RECOMP_CALL(sub_121BF440); /* 0x12054147: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x260); /* 0x1205414C: mov eax, dword ptr [esi + 0x260] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x12054152: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(edi + 0x260) = eax; /* 0x12054155: mov dword ptr [edi + 0x260], eax */
L_1205415B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1205415B: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = edx; /* 0x1205415D: mov dword ptr [ebp - 0xc], edx */
    /* cmp MEM32(esi + 0x264), edx */ /* 0x12054160: cmp dword ptr [esi + 0x264], edx */
    _flag_a = (uint32_t)(MEM32(esi + 0x264)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120541B9; /* 0x12054166: jbe 0x120541b9 */
L_12054168:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x12054168: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1205416A: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1205416C:
    eax = MEM32(ebp + (-0x8)); /* 0x1205416C: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x1205416F: add eax, ebx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x18)) = eax; /* 0x12054171: mov dword ptr [ebp - 0x18], eax */
    eax = MEM32(ebp + (-0x4)); /* 0x12054174: mov eax, dword ptr [ebp - 4] */
    esi = MEM32(ebp + (-0x18)); /* 0x12054177: mov esi, dword ptr [ebp - 0x18] */
    edx = edi + eax; /* 0x1205417A: lea edx, [edi + eax] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1205417D: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1205417F:
    /* cmp MEM32(edx + ecx * 4), 0xFFFFFFFFu */ /* 0x1205417F: cmp dword ptr [edx + ecx*4], -1 */
    _flag_a = (uint32_t)(MEM32(edx + ecx * 4)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1205418F; /* 0x12054183: je 0x1205418f */
L_12054185:
    SET_LO16(eax, MEM16(edx + ecx * 4)); /* 0x12054185: mov ax, word ptr [edx + ecx*4] */
    MEM16(esi + ecx * 2) = (uint16_t)(LO16(eax)); /* 0x12054189: mov word ptr [esi + ecx*2], ax */
    goto L_12054195; /* 0x1205418D: jmp 0x12054195 */
L_1205418F:
    _flag_a = (uint32_t)((MEM16(esi + ecx * 2) | 0xFFFFu)) << 16; _flag_b = (uint32_t)((MEM16(esi + ecx * 2) | 0xFFFFu)) << 16;
    MEM16(esi + ecx * 2) = (uint16_t)(MEM16(esi + ecx * 2) | 0xFFFFu); /* 0x1205418F: or word ptr [esi + ecx*2], 0xffff */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
L_12054195:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x12054195: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, 3 */ /* 0x12054196: cmp ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1205417F; /* 0x12054199: jb 0x1205417f */
L_1205419B:
    edx = MEM32(ebp + (-0xC)); /* 0x1205419B: mov edx, dword ptr [ebp - 0xc] */
    esi = MEM32(ebp + (-0x10)); /* 0x1205419E: mov esi, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x120541A1: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 6; /* 0x120541A2: add ebx, 6 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0xCu; /* 0x120541A5: add edi, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xC)) = edx; /* 0x120541A8: mov dword ptr [ebp - 0xc], edx */
    /* cmp edx, MEM32(esi + 0x264) */ /* 0x120541AB: cmp edx, dword ptr [esi + 0x264] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0x264));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1205416C; /* 0x120541B1: jb 0x1205416c */
L_120541B3:
    edi = MEM32(ebp + 0x8); /* 0x120541B3: mov edi, dword ptr [ebp + 8] */
    ebx = MEM32(ebp + (-0x14)); /* 0x120541B6: mov ebx, dword ptr [ebp - 0x14] */
L_120541B9:
    /* test MEM8(esi + 0x218), 1 */ /* 0x120541B9: test byte ptr [esi + 0x218], 1 */
    _flag_a = (uint32_t)(MEM8(esi + 0x218)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1205422B; /* 0x120541C0: je 0x1205422b */
L_120541C2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120541C2: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x264), edx */ /* 0x120541C4: cmp dword ptr [esi + 0x264], edx */
    _flag_a = (uint32_t)(MEM32(esi + 0x264)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1205422B; /* 0x120541CA: jbe 0x1205422b */
L_120541CC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120541CC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = eax; /* 0x120541CE: mov dword ptr [ebp - 0xc], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x120541D1: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_120541D3:
    ecx = MEM32(edi + 0x250); /* 0x120541D3: mov ecx, dword ptr [edi + 0x250] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ebx; /* 0x120541D9: add ecx, ebx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x18)) = ecx; /* 0x120541DB: mov dword ptr [ebp - 0x18], ecx */
    ecx = MEM32(esi + 0x250); /* 0x120541DE: mov ecx, dword ptr [esi + 0x250] */
    edi = MEM32(ebp + (-0x18)); /* 0x120541E4: mov edi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x120541E7: add ecx, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1C)) = ecx; /* 0x120541E9: mov dword ptr [ebp - 0x1c], ecx */
    esi = MEM32(ebp + (-0x1C)); /* 0x120541EC: mov esi, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120541EF: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_120541F1:
    /* cmp MEM32(esi + ecx * 4), 0xFFFFFFFFu */ /* 0x120541F1: cmp dword ptr [esi + ecx*4], -1 */
    _flag_a = (uint32_t)(MEM32(esi + ecx * 4)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12054201; /* 0x120541F5: je 0x12054201 */
L_120541F7:
    SET_LO16(eax, MEM16(esi + ecx * 4)); /* 0x120541F7: mov ax, word ptr [esi + ecx*4] */
    MEM16(edi + ecx * 2) = (uint16_t)(LO16(eax)); /* 0x120541FB: mov word ptr [edi + ecx*2], ax */
    goto L_12054207; /* 0x120541FF: jmp 0x12054207 */
L_12054201:
    _flag_a = (uint32_t)((MEM16(edi + ecx * 2) | 0xFFFFu)) << 16; _flag_b = (uint32_t)((MEM16(edi + ecx * 2) | 0xFFFFu)) << 16;
    MEM16(edi + ecx * 2) = (uint16_t)(MEM16(edi + ecx * 2) | 0xFFFFu); /* 0x12054201: or word ptr [edi + ecx*2], 0xffff */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
L_12054207:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x12054207: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, 3 */ /* 0x12054208: cmp ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120541F1; /* 0x1205420B: jb 0x120541f1 */
L_1205420D:
    eax = MEM32(ebp + (-0xC)); /* 0x1205420D: mov eax, dword ptr [ebp - 0xc] */
    esi = MEM32(ebp + (-0x10)); /* 0x12054210: mov esi, dword ptr [ebp - 0x10] */
    edi = MEM32(ebp + 0x8); /* 0x12054213: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x12054216: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x12054217: add eax, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 6; /* 0x1205421A: add ebx, 6 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xC)) = eax; /* 0x1205421D: mov dword ptr [ebp - 0xc], eax */
    /* cmp edx, MEM32(esi + 0x264) */ /* 0x12054220: cmp edx, dword ptr [esi + 0x264] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0x264));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120541D3; /* 0x12054226: jb 0x120541d3 */
L_12054228:
    ebx = MEM32(ebp + (-0x14)); /* 0x12054228: mov ebx, dword ptr [ebp - 0x14] */
L_1205422B:
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x1205422B: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1205423D; /* 0x1205422F: je 0x1205423d */
L_12054231:
    eax = MEM32(esi + 0x248); /* 0x12054231: mov eax, dword ptr [esi + 0x248] */
    ecx = MEM32(eax); /* 0x12054237: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x12054239: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x1205423A: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
L_1205423D:
    /* cmp MEM32(ebp + (-0x8)), 0 */ /* 0x1205423D: cmp dword ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1205424F; /* 0x12054241: je 0x1205424f */
L_12054243:
    eax = MEM32(edi + 0x248); /* 0x12054243: mov eax, dword ptr [edi + 0x248] */
    ecx = MEM32(eax); /* 0x12054249: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1205424B: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x1205424C: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
L_1205424F:
    edi = POP32_VAL(esp); /* 0x1205424F: pop edi */
    esi = POP32_VAL(esp); /* 0x12054250: pop esi */
    eax = ebx; /* 0x12054251: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x12054253: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12054254: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12054255: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1205425D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1205425Du);

L_1205425D:
    edi = edi; /* 0x1205425D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1205425F: push ebp */
    ebp = esp; /* 0x12054260: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x12054262: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x12054265: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x12054266: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x12054269: push esi */
    esi = ecx; /* 0x1205426A: mov esi, ecx */
    eax = MEM32(esi + 0x218); /* 0x1205426C: mov eax, dword ptr [esi + 0x218] */
    _flag_a = (uint32_t)((eax ^ MEM32(ebx + 0x218))); _flag_b = (uint32_t)((eax ^ MEM32(ebx + 0x218)));
    eax = eax ^ MEM32(ebx + 0x218); /* 0x12054272: xor eax, dword ptr [ebx + 0x218] */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x12054278: push edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    eax = eax & 0x20u; /* 0x12054279: and eax, 0x20 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ MEM32(esi + 0x218))); _flag_b = (uint32_t)((eax ^ MEM32(esi + 0x218)));
    eax = eax ^ MEM32(esi + 0x218); /* 0x1205427C: xor eax, dword ptr [esi + 0x218] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x12054282: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx + 0x218) = eax; /* 0x12054284: mov dword ptr [ebx + 0x218], eax */
    PUSH32(esp, MEM32(esi + 0x23C)); /* 0x1205428A: push dword ptr [esi + 0x23c] */
    ecx = ebx; /* 0x12054290: mov ecx, ebx */
    PUSH32(esp, MEM32(esi + 0x264)); /* 0x12054292: push dword ptr [esi + 0x264] */
    MEM32(ebp + (-0x10)) = esi; /* 0x12054298: mov dword ptr [ebp - 0x10], esi */
    MEM32(ebp + (-0x8)) = edi; /* 0x1205429B: mov dword ptr [ebp - 8], edi */
    MEM32(ebp + (-0xC)) = edi; /* 0x1205429E: mov dword ptr [ebp - 0xc], edi */
    RECOMP_CALL(sub_12051FB8); /* 0x120542A1: call 0x12051fb8 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120542A6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1205443A; /* 0x120542A8: js 0x1205443a */
L_120542AE:
    eax = MEM32(ebx + 0x248); /* 0x120542AE: mov eax, dword ptr [ebx + 0x248] */
    ecx = MEM32(eax); /* 0x120542B4: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0x800u); /* 0x120542B6: push 0x800 */
    edx = ebp + (-0xC); /* 0x120542BB: lea edx, [ebp - 0xc] */
    PUSH32(esp, edx); /* 0x120542BE: push edx */
    PUSH32(esp, edi); /* 0x120542BF: push edi */
    PUSH32(esp, edi); /* 0x120542C0: push edi */
    PUSH32(esp, eax); /* 0x120542C1: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x2C)); /* 0x120542C2: call dword ptr [ecx + 0x2c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120542C5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1205443A; /* 0x120542C7: js 0x1205443a */
L_120542CD:
    eax = MEM32(esi + 0x248); /* 0x120542CD: mov eax, dword ptr [esi + 0x248] */
    ecx = MEM32(eax); /* 0x120542D3: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0x810u); /* 0x120542D5: push 0x810 */
    edx = ebp + (-0x8); /* 0x120542DA: lea edx, [ebp - 8] */
    PUSH32(esp, edx); /* 0x120542DD: push edx */
    PUSH32(esp, edi); /* 0x120542DE: push edi */
    PUSH32(esp, edi); /* 0x120542DF: push edi */
    PUSH32(esp, eax); /* 0x120542E0: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x2C)); /* 0x120542E1: call dword ptr [ecx + 0x2c] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = eax; /* 0x120542E4: mov dword ptr [ebp - 4], eax */
    /* test eax, eax */ /* 0x120542E7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1205443A; /* 0x120542E9: js 0x1205443a */
L_120542EF:
    /* test MEM8(esi + 0x218), 4 */ /* 0x120542EF: test byte ptr [esi + 0x218], 4 */
    _flag_a = (uint32_t)(MEM8(esi + 0x218)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12054316; /* 0x120542F6: je 0x12054316 */
L_120542F8:
    eax = MEM32(esi + 0x264); /* 0x120542F8: mov eax, dword ptr [esi + 0x264] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x120542FE: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x120542FE: shl eax, 2 */
    PUSH32(esp, eax); /* 0x12054301: push eax */
    PUSH32(esp, MEM32(esi + 0x254)); /* 0x12054302: push dword ptr [esi + 0x254] */
    PUSH32(esp, MEM32(ebx + 0x254)); /* 0x12054308: push dword ptr [ebx + 0x254] */
    RECOMP_CALL(sub_121BF440); /* 0x1205430E: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x12054313: add esp, 0xc */
    _flag_k = FK_ADD;
L_12054316:
    /* test MEM8(esi + 0x218), 8 */ /* 0x12054316: test byte ptr [esi + 0x218], 8 */
    _flag_a = (uint32_t)(MEM8(esi + 0x218)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1205433C; /* 0x1205431D: je 0x1205433c */
L_1205431F:
    eax = MEM32(esi + 0x264); /* 0x1205431F: mov eax, dword ptr [esi + 0x264] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x12054325: add eax, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x12054327: push eax */
    PUSH32(esp, MEM32(esi + 0x258)); /* 0x12054328: push dword ptr [esi + 0x258] */
    PUSH32(esp, MEM32(ebx + 0x258)); /* 0x1205432E: push dword ptr [ebx + 0x258] */
    RECOMP_CALL(sub_121BF440); /* 0x12054334: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x12054339: add esp, 0xc */
    _flag_k = FK_ADD;
L_1205433C:
    /* cmp MEM32(esi + 0x25C), edi */ /* 0x1205433C: cmp dword ptr [esi + 0x25c], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x25C)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120543A0; /* 0x12054342: je 0x120543a0 */
L_12054344:
    eax = MEM32(esi + 0x260); /* 0x12054344: mov eax, dword ptr [esi + 0x260] */
    PUSH32(esp, 0x120014BCu); /* 0x1205434A: push 0x120014bc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1205434F: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x14u); /* 0x12054351: push 0x14 */
    edx = POP32_VAL(esp); /* 0x12054353: pop edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x12054354: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x12054356: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x12054359: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1205435B: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1205435D: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x1205435E: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12054363: pop ecx */
    ecx = POP32_VAL(esp); /* 0x12054364: pop ecx */
    ecx = eax; /* 0x12054365: mov ecx, eax */
    MEM32(ebx + 0x25C) = ecx; /* 0x12054367: mov dword ptr [ebx + 0x25c], ecx */
    /* test ecx, ecx */ /* 0x1205436D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1205437B; /* 0x1205436F: jne 0x1205437b */
L_12054371:
    edi = 0x8007000Eu; /* 0x12054371: mov edi, 0x8007000e */
    goto L_1205443C; /* 0x12054376: jmp 0x1205443c */
L_1205437B:
    eax = MEM32(esi + 0x260); /* 0x1205437B: mov eax, dword ptr [esi + 0x260] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x14u); /* 0x12054381: imul eax, eax, 0x14 */
    PUSH32(esp, eax); /* 0x12054384: push eax */
    PUSH32(esp, MEM32(esi + 0x25C)); /* 0x12054385: push dword ptr [esi + 0x25c] */
    PUSH32(esp, ecx); /* 0x1205438B: push ecx */
    RECOMP_CALL(sub_121BF440); /* 0x1205438C: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x260); /* 0x12054391: mov eax, dword ptr [esi + 0x260] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x12054397: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebx + 0x260) = eax; /* 0x1205439A: mov dword ptr [ebx + 0x260], eax */
L_120543A0:
    edx = edi; /* 0x120543A0: mov edx, edi */
    /* cmp MEM32(esi + 0x264), edi */ /* 0x120543A2: cmp dword ptr [esi + 0x264], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x264)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120543E6; /* 0x120543A8: jbe 0x120543e6 */
L_120543AA:
    ebx = edi; /* 0x120543AA: mov ebx, edi */
L_120543AC:
    eax = MEM32(ebp + (-0xC)); /* 0x120543AC: mov eax, dword ptr [ebp - 0xc] */
    ecx = ebx + eax; /* 0x120543AF: lea ecx, [ebx + eax] */
    eax = MEM32(ebp + (-0x8)); /* 0x120543B2: mov eax, dword ptr [ebp - 8] */
    edi = ebx + eax; /* 0x120543B5: lea edi, [ebx + eax] */
    PUSH32(esp, 3); /* 0x120543B8: push 3 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ecx; /* 0x120543BA: sub edi, ecx */
    _flag_k = FK_CMP;
    esi = POP32_VAL(esp); /* 0x120543BC: pop esi */
L_120543BD:
    eax = MEM32(edi + ecx); /* 0x120543BD: mov eax, dword ptr [edi + ecx] */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x120543C0: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120543C9; /* 0x120543C3: je 0x120543c9 */
L_120543C5:
    MEM32(ecx) = eax; /* 0x120543C5: mov dword ptr [ecx], eax */
    goto L_120543CC; /* 0x120543C7: jmp 0x120543cc */
L_120543C9:
    _flag_a = (uint32_t)((MEM32(ecx) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ecx) | 0xFFFFFFFFu));
    MEM32(ecx) = MEM32(ecx) | 0xFFFFFFFFu; /* 0x120543C9: or dword ptr [ecx], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_120543CC:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x120543CC: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x120543CF: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120543BD; /* 0x120543D0: jne 0x120543bd */
L_120543D2:
    esi = MEM32(ebp + (-0x10)); /* 0x120543D2: mov esi, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x120543D5: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0xCu; /* 0x120543D6: add ebx, 0xc */
    _flag_k = FK_ADD;
    /* cmp edx, MEM32(esi + 0x264) */ /* 0x120543D9: cmp edx, dword ptr [esi + 0x264] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0x264));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120543AC; /* 0x120543DF: jb 0x120543ac */
L_120543E1:
    ebx = MEM32(ebp + 0x8); /* 0x120543E1: mov ebx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x120543E4: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_120543E6:
    /* test MEM8(esi + 0x218), 1 */ /* 0x120543E6: test byte ptr [esi + 0x218], 1 */
    _flag_a = (uint32_t)(MEM8(esi + 0x218)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12054435; /* 0x120543ED: je 0x12054435 */
L_120543EF:
    /* cmp MEM32(esi + 0x264), edi */ /* 0x120543EF: cmp dword ptr [esi + 0x264], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x264)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_12054435; /* 0x120543F5: jbe 0x12054435 */
L_120543F7:
    ecx = edi; /* 0x120543F7: mov ecx, edi */
L_120543F9:
    eax = MEM32(ebx + 0x250); /* 0x120543F9: mov eax, dword ptr [ebx + 0x250] */
    ebx = MEM32(esi + 0x250); /* 0x120543FF: mov ebx, dword ptr [esi + 0x250] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x12054405: add eax, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ecx; /* 0x12054407: add ebx, ecx */
    _flag_k = FK_ADD;
    PUSH32(esp, 3); /* 0x12054409: push 3 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - eax; /* 0x1205440B: sub ebx, eax */
    _flag_k = FK_CMP;
    esi = POP32_VAL(esp); /* 0x1205440D: pop esi */
L_1205440E:
    edx = MEM32(eax + ebx); /* 0x1205440E: mov edx, dword ptr [eax + ebx] */
    /* cmp edx, 0xFFFFFFFFu */ /* 0x12054411: cmp edx, -1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1205441A; /* 0x12054414: je 0x1205441a */
L_12054416:
    MEM32(eax) = edx; /* 0x12054416: mov dword ptr [eax], edx */
    goto L_1205441D; /* 0x12054418: jmp 0x1205441d */
L_1205441A:
    _flag_a = (uint32_t)((MEM32(eax) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(eax) | 0xFFFFFFFFu));
    MEM32(eax) = MEM32(eax) | 0xFFFFFFFFu; /* 0x1205441A: or dword ptr [eax], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1205441D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1205441D: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x12054420: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1205440E; /* 0x12054421: jne 0x1205440e */
L_12054423:
    esi = MEM32(ebp + (-0x10)); /* 0x12054423: mov esi, dword ptr [ebp - 0x10] */
    ebx = MEM32(ebp + 0x8); /* 0x12054426: mov ebx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x12054429: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xCu; /* 0x1205442A: add ecx, 0xc */
    _flag_k = FK_ADD;
    /* cmp edi, MEM32(esi + 0x264) */ /* 0x1205442D: cmp edi, dword ptr [esi + 0x264] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x264));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120543F9; /* 0x12054433: jb 0x120543f9 */
L_12054435:
    edi = MEM32(ebp + (-0x4)); /* 0x12054435: mov edi, dword ptr [ebp - 4] */
    goto L_1205443C; /* 0x12054438: jmp 0x1205443c */
L_1205443A:
    edi = eax; /* 0x1205443A: mov edi, eax */
L_1205443C:
    /* cmp MEM32(ebp + (-0x8)), 0 */ /* 0x1205443C: cmp dword ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1205444E; /* 0x12054440: je 0x1205444e */
L_12054442:
    eax = MEM32(esi + 0x248); /* 0x12054442: mov eax, dword ptr [esi + 0x248] */
    ecx = MEM32(eax); /* 0x12054448: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1205444A: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x1205444B: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
L_1205444E:
    /* cmp MEM32(ebp + (-0xC)), 0 */ /* 0x1205444E: cmp dword ptr [ebp - 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12054460; /* 0x12054452: je 0x12054460 */
L_12054454:
    eax = MEM32(ebx + 0x248); /* 0x12054454: mov eax, dword ptr [ebx + 0x248] */
    ecx = MEM32(eax); /* 0x1205445A: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1205445C: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x1205445D: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
L_12054460:
    eax = edi; /* 0x12054460: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x12054462: pop edi */
    esi = POP32_VAL(esp); /* 0x12054463: pop esi */
    ebx = POP32_VAL(esp); /* 0x12054464: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12054465: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12054466: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1205446E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1205446Eu);

L_1205446E:
    edi = edi; /* 0x1205446E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12054470: push ebp */
    ebp = esp; /* 0x12054471: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x3ACu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x3ACu; /* 0x12054473: sub esp, 0x3ac */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x12054479: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1205447E: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x12054480: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x12054483: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x12054486: push ebx */
    PUSH32(esp, esi); /* 0x12054487: push esi */
    esi = MEM32(ebp + 0xC); /* 0x12054488: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1205448B: push edi */
    PUSH32(esp, 0x800u); /* 0x1205448C: push 0x800 */
    ebx = ecx; /* 0x12054491: mov ebx, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x12054493: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x3A0); /* 0x12054495: lea ecx, [ebp - 0x3a0] */
    PUSH32(esp, ecx); /* 0x1205449B: push ecx */
    PUSH32(esp, edi); /* 0x1205449C: push edi */
    PUSH32(esp, edi); /* 0x1205449D: push edi */
    MEM32(ebp + (-0x3A4)) = eax; /* 0x1205449E: mov dword ptr [ebp - 0x3a4], eax */
    eax = MEM32(esi); /* 0x120544A4: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x120544A6: push esi */
    MEM32(ebp + (-0x3AC)) = esi; /* 0x120544A7: mov dword ptr [ebp - 0x3ac], esi */
    MEM32(ebp + (-0x3A0)) = edi; /* 0x120544AD: mov dword ptr [ebp - 0x3a0], edi */
    MEM32(ebp + (-0x39C)) = edi; /* 0x120544B3: mov dword ptr [ebp - 0x39c], edi */
    RECOMP_ICALL(MEM32(eax + 0x2C)); /* 0x120544B9: call dword ptr [eax + 0x2c] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x3A8)) = eax; /* 0x120544BC: mov dword ptr [ebp - 0x3a8], eax */
    /* test eax, eax */ /* 0x120544C2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1205458B; /* 0x120544C4: js 0x1205458b */
L_120544CA:
    eax = MEM32(ebx + 0x234); /* 0x120544CA: mov eax, dword ptr [ebx + 0x234] */
    ecx = MEM32(eax); /* 0x120544D0: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0x810u); /* 0x120544D2: push 0x810 */
    edx = ebp + (-0x39C); /* 0x120544D7: lea edx, [ebp - 0x39c] */
    PUSH32(esp, edx); /* 0x120544DD: push edx */
    PUSH32(esp, edi); /* 0x120544DE: push edi */
    PUSH32(esp, edi); /* 0x120544DF: push edi */
    PUSH32(esp, eax); /* 0x120544E0: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x2C)); /* 0x120544E1: call dword ptr [ecx + 0x2c] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x3A8)) = eax; /* 0x120544E4: mov dword ptr [ebp - 0x3a8], eax */
    /* test eax, eax */ /* 0x120544EA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1205458B; /* 0x120544EC: js 0x1205458b */
L_120544F2:
    eax = ebx + 0xC; /* 0x120544F2: lea eax, [ebx + 0xc] */
    PUSH32(esp, eax); /* 0x120544F5: push eax */
    PUSH32(esp, MEM32(ebp + (-0x3A4))); /* 0x120544F6: push dword ptr [ebp - 0x3a4] */
    RECOMP_CALL(sub_1204BF67); /* 0x120544FC: call 0x1204bf67 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12054501: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12054529; /* 0x12054503: je 0x12054529 */
L_12054505:
    eax = MEM32(ebx + 0x23C); /* 0x12054505: mov eax, dword ptr [ebx + 0x23c] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebx + 0x238)); /* 0x1205450B: imul eax, dword ptr [ebx + 0x238] */
    PUSH32(esp, eax); /* 0x12054512: push eax */
    PUSH32(esp, MEM32(ebp + (-0x39C))); /* 0x12054513: push dword ptr [ebp - 0x39c] */
    PUSH32(esp, MEM32(ebp + (-0x3A0))); /* 0x12054519: push dword ptr [ebp - 0x3a0] */
    RECOMP_CALL(sub_121BF440); /* 0x1205451F: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x12054524: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_1205458B; /* 0x12054527: jmp 0x1205458b */
L_12054529:
    PUSH32(esp, MEM32(ebp + (-0x3A4))); /* 0x12054529: push dword ptr [ebp - 0x3a4] */
    eax = ebx + 0xC; /* 0x1205452F: lea eax, [ebx + 0xc] */
    PUSH32(esp, eax); /* 0x12054532: push eax */
    ecx = ebp + (-0x398); /* 0x12054533: lea ecx, [ebp - 0x398] */
    RECOMP_CALL(sub_12051F24); /* 0x12054539: call 0x12051f24 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x3A0)); /* 0x1205453E: mov esi, dword ptr [ebp - 0x3a0] */
    PUSH32(esp, edi); /* 0x12054544: push edi */
    PUSH32(esp, MEM32(ebp + (-0x39C))); /* 0x12054545: push dword ptr [ebp - 0x39c] */
    ecx = ebp + (-0x398); /* 0x1205454B: lea ecx, [ebp - 0x398] */
    PUSH32(esp, edi); /* 0x12054551: push edi */
    RECOMP_CALL(sub_120BD30F); /* 0x12054552: call 0x120bd30f */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x12054557: push edi */
    PUSH32(esp, esi); /* 0x12054558: push esi */
    PUSH32(esp, edi); /* 0x12054559: push edi */
    ecx = ebp + (-0x2D4); /* 0x1205455A: lea ecx, [ebp - 0x2d4] */
    RECOMP_CALL(sub_120BD30F); /* 0x12054560: call 0x120bd30f */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebx + 0x23C), edi */ /* 0x12054565: cmp dword ptr [ebx + 0x23c], edi */
    _flag_a = (uint32_t)(MEM32(ebx + 0x23C)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_12054585; /* 0x1205456B: jbe 0x12054585 */
L_1205456D:
    PUSH32(esp, 1); /* 0x1205456D: push 1 */
    PUSH32(esp, edi); /* 0x1205456F: push edi */
    PUSH32(esp, edi); /* 0x12054570: push edi */
    ecx = ebp + (-0x398); /* 0x12054571: lea ecx, [ebp - 0x398] */
    RECOMP_CALL(sub_1204BE8D); /* 0x12054577: call 0x1204be8d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1205457C: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(ebx + 0x23C) */ /* 0x1205457D: cmp edi, dword ptr [ebx + 0x23c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebx + 0x23C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1205456D; /* 0x12054583: jb 0x1205456d */
L_12054585:
    esi = MEM32(ebp + (-0x3AC)); /* 0x12054585: mov esi, dword ptr [ebp - 0x3ac] */
L_1205458B:
    /* cmp MEM32(ebp + (-0x3A0)), 0 */ /* 0x1205458B: cmp dword ptr [ebp - 0x3a0], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x3A0))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1205459A; /* 0x12054592: je 0x1205459a */
L_12054594:
    eax = MEM32(esi); /* 0x12054594: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x12054596: push esi */
    RECOMP_ICALL(MEM32(eax + 0x30)); /* 0x12054597: call dword ptr [eax + 0x30] */
    RECOMP_FLAGS_IN();
L_1205459A:
    /* cmp MEM32(ebp + (-0x39C)), 0 */ /* 0x1205459A: cmp dword ptr [ebp - 0x39c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x39C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120545AF; /* 0x120545A1: je 0x120545af */
L_120545A3:
    eax = MEM32(ebx + 0x234); /* 0x120545A3: mov eax, dword ptr [ebx + 0x234] */
    ecx = MEM32(eax); /* 0x120545A9: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x120545AB: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x120545AC: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
L_120545AF:
    ecx = MEM32(ebp + (-0x4)); /* 0x120545AF: mov ecx, dword ptr [ebp - 4] */
    eax = MEM32(ebp + (-0x3A8)); /* 0x120545B2: mov eax, dword ptr [ebp - 0x3a8] */
    edi = POP32_VAL(esp); /* 0x120545B8: pop edi */
    esi = POP32_VAL(esp); /* 0x120545B9: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x120545BA: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x120545BC: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x120545BD: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120545C2: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x120545C3: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_120545CB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120545CBu);

L_120545CB:
    edi = edi; /* 0x120545CB: mov edi, edi */
    PUSH32(esp, ebx); /* 0x120545CD: push ebx */
    PUSH32(esp, esi); /* 0x120545CE: push esi */
    esi = ecx; /* 0x120545CF: mov esi, ecx */
    eax = (uint32_t)MEM16(esi + 0x4); /* 0x120545D1: movzx eax, word ptr [esi + 4] */
    edx = (uint32_t)MEM16(esi + 0x8); /* 0x120545D5: movzx edx, word ptr [esi + 8] */
    ebx = (uint32_t)MEM16(esi + 0x4); /* 0x120545D9: movzx ebx, word ptr [esi + 4] */
    ecx = eax; /* 0x120545DD: mov ecx, eax */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)3); /* 0x120545DF: imul ecx, ecx, 3 */
    PUSH32(esp, edi); /* 0x120545E2: push edi */
    MEM16(esi + 0x6) = (uint16_t)(LO16(edx)); /* 0x120545E3: mov word ptr [esi + 6], dx */
    edi = eax; /* 0x120545E7: mov edi, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x120545E9: add ecx, edx */
    _flag_k = FK_ADD;
    goto L_12054656; /* 0x120545EB: jmp 0x12054656 */
L_120545ED:
    /* cmp MEM16(esi + 0x4), 0xFFFFu */ /* 0x120545ED: cmp word ptr [esi + 4], 0xffff */
    _flag_a = (uint32_t)(MEM16(esi + 0x4)) << 16; _flag_b = (uint32_t)(0xFFFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_12054679; /* 0x120545F3: jne 0x12054679 */
L_120545F9:
    /* cmp MEM8(esi + 0x10), 0 */ /* 0x120545F9: cmp byte ptr [esi + 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x10)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12054672; /* 0x120545FD: je 0x12054672 */
L_120545FF:
    /* cmp MEM8(esi + 0x11), 0 */ /* 0x120545FF: cmp byte ptr [esi + 0x11], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x11)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_12054672; /* 0x12054603: jne 0x12054672 */
L_12054605:
    edx = (uint32_t)MEM16(esi); /* 0x12054605: movzx edx, word ptr [esi] */
    eax = (uint32_t)MEM16(esi + 0x2); /* 0x12054608: movzx eax, word ptr [esi + 2] */
    ecx = MEM32(esi + 0xC); /* 0x1205460C: mov ecx, dword ptr [esi + 0xc] */
    MEM16(esi + 0x4) = (uint16_t)(LO16(edx)); /* 0x1205460F: mov word ptr [esi + 4], dx */
    edx = (uint32_t)((int32_t)edx * (int32_t)6); /* 0x12054613: imul edx, edx, 6 */
    MEM8(esi + 0x10) = (uint8_t)(0); /* 0x12054616: mov byte ptr [esi + 0x10], 0 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ecx + 0x24C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ecx + 0x24C); /* 0x1205461A: add edx, dword ptr [ecx + 0x24c] */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x12054620: push eax */
    PUSH32(esp, edx); /* 0x12054621: push edx */
    RECOMP_CALL(sub_1204CC49); /* 0x12054622: call 0x1204cc49 */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO16(eax); /* 0x12054627: movzx eax, ax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x1205462A: add eax, 2 */
    _flag_k = FK_ADD;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1205462D: cdq  */
    PUSH32(esp, 3); /* 0x1205462E: push 3 */
    ecx = POP32_VAL(esp); /* 0x12054630: pop ecx */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x12054631: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    eax = (uint32_t)MEM16(esi + 0x6); /* 0x12054633: movzx eax, word ptr [esi + 6] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x12054637: add eax, 2 */
    _flag_k = FK_ADD;
    MEM16(esi + 0x8) = (uint16_t)(LO16(edx)); /* 0x1205463A: mov word ptr [esi + 8], dx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1205463E: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x1205463F: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    MEM16(esi + 0x6) = (uint16_t)(LO16(edx)); /* 0x12054641: mov word ptr [esi + 6], dx */
    eax = (uint32_t)MEM16(esi + 0x4); /* 0x12054645: movzx eax, word ptr [esi + 4] */
    ecx = eax; /* 0x12054649: mov ecx, eax */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)3); /* 0x1205464B: imul ecx, ecx, 3 */
    edi = eax; /* 0x1205464E: mov edi, eax */
    eax = (uint32_t)MEM16(esi + 0x8); /* 0x12054650: movzx eax, word ptr [esi + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x12054654: add ecx, eax */
    _flag_k = FK_ADD;
L_12054656:
    eax = MEM32(esi + 0xC); /* 0x12054656: mov eax, dword ptr [esi + 0xc] */
    eax = MEM32(eax + 0x250); /* 0x12054659: mov eax, dword ptr [eax + 0x250] */
    eax = (uint32_t)MEM16(eax + ecx * 2); /* 0x1205465F: movzx eax, word ptr [eax + ecx*2] */
    MEM16(esi + 0x4) = (uint16_t)(LO16(eax)); /* 0x12054663: mov word ptr [esi + 4], ax */
    /* cmp LO16(eax), MEM16(esi) */ /* 0x12054667: cmp ax, word ptr [esi] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_120545ED; /* 0x1205466A: jne 0x120545ed */
L_1205466C:
    _flag_a = (uint32_t)((MEM16(esi + 0x4) | 0xFFFFu)) << 16; _flag_b = (uint32_t)((MEM16(esi + 0x4) | 0xFFFFu)) << 16;
    MEM16(esi + 0x4) = (uint16_t)(MEM16(esi + 0x4) | 0xFFFFu); /* 0x1205466C: or word ptr [esi + 4], 0xffff */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
L_12054672:
    edi = POP32_VAL(esp); /* 0x12054672: pop edi */
    esi = POP32_VAL(esp); /* 0x12054673: pop esi */
    SET_LO16(eax, LO16(ebx)); /* 0x12054674: mov ax, bx */
    ebx = POP32_VAL(esp); /* 0x12054677: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x12054678: ret  */
L_12054679:
    ecx = (uint32_t)MEM16(esi + 0x4); /* 0x12054679: movzx ecx, word ptr [esi + 4] */
    eax = MEM32(esi + 0xC); /* 0x1205467D: mov eax, dword ptr [esi + 0xc] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)6); /* 0x12054680: imul ecx, ecx, 6 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x250));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax + 0x250); /* 0x12054683: add ecx, dword ptr [eax + 0x250] */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x12054689: push edi */
    PUSH32(esp, ecx); /* 0x1205468A: push ecx */
    RECOMP_CALL(sub_1204CE0F); /* 0x1205468B: call 0x1204ce0f */
    RECOMP_FLAGS_IN();
    MEM16(esi + 0x8) = (uint16_t)(LO16(eax)); /* 0x12054690: mov word ptr [esi + 8], ax */
    eax = (uint32_t)LO16(eax); /* 0x12054694: movzx eax, ax */
    PUSH32(esp, 3); /* 0x12054697: push 3 */
    ecx = POP32_VAL(esp); /* 0x12054699: pop ecx */
    /* cmp MEM8(esi + 0x10), 0 */ /* 0x1205469A: cmp byte ptr [esi + 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x10)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120546A3; /* 0x1205469E: je 0x120546a3 */
L_120546A0:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x120546A0: inc eax */
    _flag_k = FK_INC;
    goto L_120546A6; /* 0x120546A1: jmp 0x120546a6 */
L_120546A3:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x120546A3: add eax, 2 */
    _flag_k = FK_ADD;
L_120546A6:
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x120546A6: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x120546A7: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    MEM16(esi + 0x8) = (uint16_t)(LO16(edx)); /* 0x120546A9: mov word ptr [esi + 8], dx */
    RECOMP_BACKEDGE();
    goto L_12054672; /* 0x120546AD: jmp 0x12054672 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_120546B4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120546B4u);

L_120546B4:
    edi = edi; /* 0x120546B4: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120546B6: push ebp */
    ebp = esp; /* 0x120546B7: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x120546B9: push ecx */
    PUSH32(esp, ebx); /* 0x120546BA: push ebx */
    PUSH32(esp, esi); /* 0x120546BB: push esi */
    esi = ecx; /* 0x120546BC: mov esi, ecx */
    edx = MEM32(esi + 0x8); /* 0x120546BE: mov edx, dword ptr [esi + 8] */
    eax = MEM32(esi + 0x8); /* 0x120546C1: mov eax, dword ptr [esi + 8] */
    ecx = edx; /* 0x120546C4: mov ecx, edx */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)3); /* 0x120546C6: imul ecx, ecx, 3 */
    MEM32(ebp + (-0x4)) = eax; /* 0x120546C9: mov dword ptr [ebp - 4], eax */
    eax = MEM32(esi + 0x10); /* 0x120546CC: mov eax, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x120546CF: add ecx, eax */
    _flag_k = FK_ADD;
    MEM32(esi + 0xC) = eax; /* 0x120546D1: mov dword ptr [esi + 0xc], eax */
    eax = MEM32(esi + 0x14); /* 0x120546D4: mov eax, dword ptr [esi + 0x14] */
    eax = MEM32(eax + 0x250); /* 0x120546D7: mov eax, dword ptr [eax + 0x250] */
    eax = MEM32(eax + ecx * 4); /* 0x120546DD: mov eax, dword ptr [eax + ecx*4] */
    PUSH32(esp, edi); /* 0x120546E0: push edi */
    MEM32(esi + 0x8) = eax; /* 0x120546E1: mov dword ptr [esi + 8], eax */
    /* cmp eax, MEM32(esi) */ /* 0x120546E4: cmp eax, dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1205474F; /* 0x120546E6: je 0x1205474f */
L_120546E8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x120546E8: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_120546EA:
    /* cmp MEM32(esi + 0x8), 0xFFFFFFFFu */ /* 0x120546EA: cmp dword ptr [esi + 8], -1 */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1205475B; /* 0x120546EE: jne 0x1205475b */
L_120546F0:
    /* cmp MEM8(esi + 0x18), LO8(ebx) */ /* 0x120546F0: cmp byte ptr [esi + 0x18], bl */
    _flag_a = (uint32_t)(MEM8(esi + 0x18)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12054753; /* 0x120546F3: je 0x12054753 */
L_120546F5:
    /* cmp MEM8(esi + 0x19), LO8(ebx) */ /* 0x120546F5: cmp byte ptr [esi + 0x19], bl */
    _flag_a = (uint32_t)(MEM8(esi + 0x19)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_12054753; /* 0x120546F8: jne 0x12054753 */
L_120546FA:
    eax = MEM32(esi); /* 0x120546FA: mov eax, dword ptr [esi] */
    ecx = MEM32(esi + 0x14); /* 0x120546FC: mov ecx, dword ptr [esi + 0x14] */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x120546FF: push dword ptr [esi + 4] */
    MEM32(esi + 0x8) = eax; /* 0x12054702: mov dword ptr [esi + 8], eax */
    eax = (uint32_t)((int32_t)eax * (int32_t)0xCu); /* 0x12054705: imul eax, eax, 0xc */
    MEM8(esi + 0x18) = (uint8_t)(LO8(ebx)); /* 0x12054708: mov byte ptr [esi + 0x18], bl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x24C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x24C); /* 0x1205470B: add eax, dword ptr [ecx + 0x24c] */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x12054711: push eax */
    RECOMP_CALL(sub_1204CC83); /* 0x12054712: call 0x1204cc83 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x12054717: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1205471A: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 3); /* 0x1205471C: push 3 */
    ecx = POP32_VAL(esp); /* 0x1205471E: pop ecx */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x1205471F: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    eax = MEM32(esi + 0xC); /* 0x12054721: mov eax, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x12054724: add eax, 2 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x10) = edx; /* 0x12054727: mov dword ptr [esi + 0x10], edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1205472A: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x1205472C: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    MEM32(esi + 0xC) = edx; /* 0x1205472E: mov dword ptr [esi + 0xc], edx */
    edx = MEM32(esi + 0x8); /* 0x12054731: mov edx, dword ptr [esi + 8] */
    eax = MEM32(esi + 0x14); /* 0x12054734: mov eax, dword ptr [esi + 0x14] */
    eax = MEM32(eax + 0x250); /* 0x12054737: mov eax, dword ptr [eax + 0x250] */
    ecx = edx; /* 0x1205473D: mov ecx, edx */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)3); /* 0x1205473F: imul ecx, ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(esi + 0x10); /* 0x12054742: add ecx, dword ptr [esi + 0x10] */
    _flag_k = FK_ADD;
    eax = MEM32(eax + ecx * 4); /* 0x12054745: mov eax, dword ptr [eax + ecx*4] */
    MEM32(esi + 0x8) = eax; /* 0x12054748: mov dword ptr [esi + 8], eax */
    /* cmp eax, MEM32(esi) */ /* 0x1205474B: cmp eax, dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_120546EA; /* 0x1205474D: jne 0x120546ea */
L_1205474F:
    _flag_a = (uint32_t)((MEM32(esi + 0x8) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(esi + 0x8) | 0xFFFFFFFFu));
    MEM32(esi + 0x8) = MEM32(esi + 0x8) | 0xFFFFFFFFu; /* 0x1205474F: or dword ptr [esi + 8], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_12054753:
    eax = MEM32(ebp + (-0x4)); /* 0x12054753: mov eax, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x12054756: pop edi */
    esi = POP32_VAL(esp); /* 0x12054757: pop esi */
    ebx = POP32_VAL(esp); /* 0x12054758: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12054759: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1205475A: ret  */
L_1205475B:
    eax = MEM32(esi + 0x14); /* 0x1205475B: mov eax, dword ptr [esi + 0x14] */
    ecx = MEM32(eax + 0x250); /* 0x1205475E: mov ecx, dword ptr [eax + 0x250] */
    PUSH32(esp, 3); /* 0x12054764: push 3 */
    edi = POP32_VAL(esp); /* 0x12054766: pop edi */
L_12054767:
    eax = MEM32(esi + 0x8); /* 0x12054767: mov eax, dword ptr [esi + 8] */
    eax = (uint32_t)((int32_t)eax * (int32_t)3); /* 0x1205476A: imul eax, eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x1205476D: add eax, ebx */
    _flag_k = FK_ADD;
    /* cmp MEM32(ecx + eax * 4), edx */ /* 0x1205476F: cmp dword ptr [ecx + eax*4], edx */
    _flag_a = (uint32_t)(MEM32(ecx + eax * 4)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12054779; /* 0x12054772: je 0x12054779 */
L_12054774:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x12054774: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, edi */ /* 0x12054775: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12054767; /* 0x12054777: jb 0x12054767 */
L_12054779:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x12054779: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 3); /* 0x1205477B: push 3 */
    MEM32(esi + 0x10) = ebx; /* 0x1205477D: mov dword ptr [esi + 0x10], ebx */
    ecx = POP32_VAL(esp); /* 0x12054780: pop ecx */
    eax = ebx + 0x1; /* 0x12054781: lea eax, [ebx + 1] */
    /* cmp MEM8(esi + 0x18), LO8(edx) */ /* 0x12054784: cmp byte ptr [esi + 0x18], dl */
    _flag_a = (uint32_t)(MEM8(esi + 0x18)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1205478C; /* 0x12054787: jne 0x1205478c */
L_12054789:
    eax = ebx + 0x2; /* 0x12054789: lea eax, [ebx + 2] */
L_1205478C:
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x1205478C: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    MEM32(esi + 0x10) = edx; /* 0x1205478E: mov dword ptr [esi + 0x10], edx */
    RECOMP_BACKEDGE();
    goto L_12054753; /* 0x12054791: jmp 0x12054753 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_12054798(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12054798u);

L_12054798:
    edi = edi; /* 0x12054798: mov edi, edi */
    PUSH32(esp, esi); /* 0x1205479A: push esi */
    esi = ecx; /* 0x1205479B: mov esi, ecx */
    ecx = esi + 0x8; /* 0x1205479D: lea ecx, [esi + 8] */
    MEM32(esi) = 0x120061E0u; /* 0x120547A0: mov dword ptr [esi], 0x120061e0 */
    MEM32(esi + 0x4) = 1; /* 0x120547A6: mov dword ptr [esi + 4], 1 */
    RECOMP_CALL(sub_12047093); /* 0x120547AD: call 0x12047093 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120547B2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0xCC) = eax; /* 0x120547B4: mov dword ptr [esi + 0xcc], eax */
    MEM32(esi + 0xD4) = eax; /* 0x120547BA: mov dword ptr [esi + 0xd4], eax */
    MEM32(esi + 0xDC) = eax; /* 0x120547C0: mov dword ptr [esi + 0xdc], eax */
    MEM32(esi + 0xE0) = eax; /* 0x120547C6: mov dword ptr [esi + 0xe0], eax */
    MEM32(esi + 0xE4) = eax; /* 0x120547CC: mov dword ptr [esi + 0xe4], eax */
    MEM32(esi + 0xE8) = eax; /* 0x120547D2: mov dword ptr [esi + 0xe8], eax */
    MEM32(esi + 0xEC) = eax; /* 0x120547D8: mov dword ptr [esi + 0xec], eax */
    MEM32(esi + 0x108) = eax; /* 0x120547DE: mov dword ptr [esi + 0x108], eax */
    MEM32(esi + 0x110) = eax; /* 0x120547E4: mov dword ptr [esi + 0x110], eax */
    MEM32(esi + 0x118) = eax; /* 0x120547EA: mov dword ptr [esi + 0x118], eax */
    MEM32(esi + 0x11C) = eax; /* 0x120547F0: mov dword ptr [esi + 0x11c], eax */
    MEM32(esi + 0x120) = eax; /* 0x120547F6: mov dword ptr [esi + 0x120], eax */
    MEM32(esi + 0x124) = eax; /* 0x120547FC: mov dword ptr [esi + 0x124], eax */
    MEM32(esi + 0x128) = eax; /* 0x12054802: mov dword ptr [esi + 0x128], eax */
    MEM32(esi + 0x12C) = eax; /* 0x12054808: mov dword ptr [esi + 0x12c], eax */
    MEM32(esi + 0x130) = eax; /* 0x1205480E: mov dword ptr [esi + 0x130], eax */
    MEM32(esi + 0x134) = eax; /* 0x12054814: mov dword ptr [esi + 0x134], eax */
    MEM32(esi + 0x138) = eax; /* 0x1205481A: mov dword ptr [esi + 0x138], eax */
    MEM32(esi + 0x13C) = eax; /* 0x12054820: mov dword ptr [esi + 0x13c], eax */
    MEM32(esi + 0x140) = eax; /* 0x12054826: mov dword ptr [esi + 0x140], eax */
    MEM32(esi + 0x144) = eax; /* 0x1205482C: mov dword ptr [esi + 0x144], eax */
    MEM32(esi + 0x148) = eax; /* 0x12054832: mov dword ptr [esi + 0x148], eax */
    MEM32(esi + 0x14C) = eax; /* 0x12054838: mov dword ptr [esi + 0x14c], eax */
    MEM32(esi + 0x150) = eax; /* 0x1205483E: mov dword ptr [esi + 0x150], eax */
    MEM32(esi + 0x154) = eax; /* 0x12054844: mov dword ptr [esi + 0x154], eax */
    MEM32(esi + 0x1D0) = eax; /* 0x1205484A: mov dword ptr [esi + 0x1d0], eax */
    MEM32(esi + 0x1D4) = eax; /* 0x12054850: mov dword ptr [esi + 0x1d4], eax */
    MEM32(esi + 0x1D8) = eax; /* 0x12054856: mov dword ptr [esi + 0x1d8], eax */
    MEM32(esi + 0x1DC) = eax; /* 0x1205485C: mov dword ptr [esi + 0x1dc], eax */
    MEM32(esi + 0x3E8) = eax; /* 0x12054862: mov dword ptr [esi + 0x3e8], eax */
    MEM32(esi + 0x3F4) = eax; /* 0x12054868: mov dword ptr [esi + 0x3f4], eax */
    MEM32(esi + 0x3F8) = eax; /* 0x1205486E: mov dword ptr [esi + 0x3f8], eax */
    eax = esi; /* 0x12054874: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x12054876: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x12054877: ret  */
    RECOMP_REGS_OUT();
}

void sub_1205487D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1205487Du);

L_1205487D:
    edi = edi; /* 0x1205487D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1205487F: push ebp */
    ebp = esp; /* 0x12054880: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x12054882: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0xCC); /* 0x12054885: mov eax, dword ptr [eax + 0xcc] */
    ecx = MEM32(eax); /* 0x1205488B: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1205488D: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x24)); /* 0x1205488E: call dword ptr [ecx + 0x24] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x12054891: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12054892: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1205489A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1205489Au);

L_1205489A:
    edi = edi; /* 0x1205489A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1205489C: push ebp */
    ebp = esp; /* 0x1205489D: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1205489F: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0xCC); /* 0x120548A2: mov eax, dword ptr [eax + 0xcc] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120548A8: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x120548AB: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x120548AD: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x28)); /* 0x120548AE: call dword ptr [ecx + 0x28] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x120548B1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x120548B2: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_120548BA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120548BAu);

L_120548BA:
    edi = edi; /* 0x120548BA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120548BC: push ebp */
    ebp = esp; /* 0x120548BD: mov ebp, esp */
    eax = MEM32(ebp + 0x10); /* 0x120548BF: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x120548C2: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x120548C5: push esi */
    esi = MEM32(ebp + 0xC); /* 0x120548C6: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x120548C9: push edi */
    PUSH32(esp, 4); /* 0x120548CA: push 4 */
    ecx = POP32_VAL(esp); /* 0x120548CC: pop ecx */
    edi = 0x12018314u; /* 0x120548CD: mov edi, 0x12018314 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120548D2: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x120548D4: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_120548E9; /* 0x120548D6: je 0x120548e9 */
L_120548D8:
    esi = MEM32(ebp + 0xC); /* 0x120548D8: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, 4); /* 0x120548DB: push 4 */
    ecx = POP32_VAL(esp); /* 0x120548DD: pop ecx */
    edi = 0x12001BA8u; /* 0x120548DE: mov edi, 0x12001ba8 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120548E3: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x120548E5: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_120548F8; /* 0x120548E7: jne 0x120548f8 */
L_120548E9:
    ecx = MEM32(ebp + 0x8); /* 0x120548E9: mov ecx, dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x120548EC: mov dword ptr [eax], ecx */
    eax = MEM32(ecx); /* 0x120548EE: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120548F0: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x120548F1: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120548F4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_120548FD; /* 0x120548F6: jmp 0x120548fd */
L_120548F8:
    eax = 0x80004002u; /* 0x120548F8: mov eax, 0x80004002 */
L_120548FD:
    edi = POP32_VAL(esp); /* 0x120548FD: pop edi */
    esi = POP32_VAL(esp); /* 0x120548FE: pop esi */
    ebp = POP32_VAL(esp); /* 0x120548FF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x12054900: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_12054908(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12054908u);

L_12054908:
    edi = edi; /* 0x12054908: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1205490A: push ebp */
    ebp = esp; /* 0x1205490B: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1205490D: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0xF4); /* 0x12054910: mov eax, dword ptr [eax + 0xf4] */
    ebp = POP32_VAL(esp); /* 0x12054916: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12054917: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1205491F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1205491Fu);

L_1205491F:
    edi = edi; /* 0x1205491F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12054921: push ebp */
    ebp = esp; /* 0x12054922: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x12054924: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0xF8); /* 0x12054927: mov eax, dword ptr [eax + 0xf8] */
    ebp = POP32_VAL(esp); /* 0x1205492D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1205492E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12054936(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12054936u);

L_12054936:
    edi = edi; /* 0x12054936: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12054938: push ebp */
    ebp = esp; /* 0x12054939: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1205493B: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1205493E: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1205493F: mov ebx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12054942: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x12054944: push esi */
    PUSH32(esp, edi); /* 0x12054945: push edi */
    edi = MEM32(ebp + 0x10); /* 0x12054946: mov edi, dword ptr [ebp + 0x10] */
    esi = eax; /* 0x12054949: mov esi, eax */
    MEM32(ebp + (-0x4)) = eax; /* 0x1205494B: mov dword ptr [ebp - 4], eax */
    MEM32(ebp + (-0x8)) = eax; /* 0x1205494E: mov dword ptr [ebp - 8], eax */
    MEM32(ebp + (-0x10)) = esi; /* 0x12054951: mov dword ptr [ebp - 0x10], esi */
    MEM32(ebp + (-0xC)) = eax; /* 0x12054954: mov dword ptr [ebp - 0xc], eax */
    /* test edi, edi */ /* 0x12054957: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12054964; /* 0x12054959: jne 0x12054964 */
L_1205495B:
    edi = MEM32(ebx + 0xCC); /* 0x1205495B: mov edi, dword ptr [ebx + 0xcc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0xCu; /* 0x12054961: add edi, 0xc */
    _flag_k = FK_ADD;
L_12054964:
    PUSH32(esp, eax); /* 0x12054964: push eax */
    PUSH32(esp, edi); /* 0x12054965: push edi */
    RECOMP_CALL(sub_1204B4B3); /* 0x12054966: call 0x1204b4b3 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1205496B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12054979; /* 0x1205496D: jne 0x12054979 */
L_1205496F:
    eax = 0x8876086Cu; /* 0x1205496F: mov eax, 0x8876086c */
    goto L_12054A09; /* 0x12054974: jmp 0x12054a09 */
L_12054979:
    eax = MEM32(ebp + 0xC); /* 0x12054979: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, 0xFFFE2000u */ /* 0x1205497C: test eax, 0xfffe2000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFE2000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1205498A; /* 0x12054981: je 0x1205498a */
L_12054983:
    esi = 0x8876086Cu; /* 0x12054983: mov esi, 0x8876086c */
    goto L_120549FE; /* 0x12054988: jmp 0x120549fe */
L_1205498A:
    /* test eax, 0x1000u */ /* 0x1205498A: test eax, 0x1000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1000u);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12054983; /* 0x1205498F: jne 0x12054983 */
L_12054991:
    /* cmp MEM32(ebp + 0x20), esi */ /* 0x12054991: cmp dword ptr [ebp + 0x20], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12054983; /* 0x12054994: je 0x12054983 */
L_12054996:
    /* cmp MEM32(ebp + 0x14), esi */ /* 0x12054996: cmp dword ptr [ebp + 0x14], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12054983; /* 0x12054999: je 0x12054983 */
L_1205499B:
    /* cmp MEM32(ebp + 0x18), esi */ /* 0x1205499B: cmp dword ptr [ebp + 0x18], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12054A45; /* 0x1205499E: je 0x12054a45 */
L_120549A4:
    eax = MEM32(ebx + 0xCC); /* 0x120549A4: mov eax, dword ptr [ebx + 0xcc] */
    eax = MEM32(eax + 0x264); /* 0x120549AA: mov eax, dword ptr [eax + 0x264] */
    eax = (uint32_t)((int32_t)eax * (int32_t)3); /* 0x120549B0: imul eax, eax, 3 */
    PUSH32(esp, 0x120014BCu); /* 0x120549B3: push 0x120014bc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120549B8: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x120549BA: push 4 */
    edx = POP32_VAL(esp); /* 0x120549BC: pop edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x120549BD: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x120549BF: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x120549C2: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x120549C4: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x120549C6: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x120549C7: call 0x12018970 */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x120549CC: mov edx, eax */
    ecx = POP32_VAL(esp); /* 0x120549CE: pop ecx */
    ecx = POP32_VAL(esp); /* 0x120549CF: pop ecx */
    MEM32(ebp + (-0x8)) = edx; /* 0x120549D0: mov dword ptr [ebp - 8], edx */
    /* test edx, edx */ /* 0x120549D3: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12054A10; /* 0x120549D5: jne 0x12054a10 */
L_120549D7:
    esi = 0x8007000Eu; /* 0x120549D7: mov esi, 0x8007000e */
L_120549DC:
    ecx = MEM32(ebp + (-0x4)); /* 0x120549DC: mov ecx, dword ptr [ebp - 4] */
L_120549DF:
    /* test ecx, ecx */ /* 0x120549DF: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120549ED; /* 0x120549E1: je 0x120549ed */
L_120549E3:
    eax = MEM32(ecx); /* 0x120549E3: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120549E5: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120549E6: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x120549E9: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_120549ED:
    ecx = MEM32(ebp + (-0xC)); /* 0x120549ED: mov ecx, dword ptr [ebp - 0xc] */
    /* test ecx, ecx */ /* 0x120549F0: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120549FE; /* 0x120549F2: je 0x120549fe */
L_120549F4:
    eax = MEM32(ecx); /* 0x120549F4: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120549F6: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120549F7: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & 0; /* 0x120549FA: and dword ptr [ebp - 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_120549FE:
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x120549FE: push dword ptr [ebp - 8] */
    RECOMP_CALL(sub_121BF388); /* 0x12054A01: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12054A06: pop ecx */
    eax = esi; /* 0x12054A07: mov eax, esi */
L_12054A09:
    edi = POP32_VAL(esp); /* 0x12054A09: pop edi */
    esi = POP32_VAL(esp); /* 0x12054A0A: pop esi */
    ebx = POP32_VAL(esp); /* 0x12054A0B: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12054A0C: leave  */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x12054A0D: ret 0x1c */
L_12054A10:
    eax = MEM32(ebx + 0xCC); /* 0x12054A10: mov eax, dword ptr [ebx + 0xcc] */
    esi = MEM32(eax + 0x250); /* 0x12054A16: mov esi, dword ptr [eax + 0x250] */
    eax = MEM32(eax + 0x264); /* 0x12054A1C: mov eax, dword ptr [eax + 0x264] */
    eax = (uint32_t)((int32_t)eax * (int32_t)3); /* 0x12054A22: imul eax, eax, 3 */
    ecx = edx; /* 0x12054A25: mov ecx, edx */
    /* test eax, eax */ /* 0x12054A27: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12054A42; /* 0x12054A29: je 0x12054a42 */
L_12054A2B:
    edx = MEM32(esi); /* 0x12054A2B: mov edx, dword ptr [esi] */
    /* cmp edx, 0xFFFFFFFFu */ /* 0x12054A2D: cmp edx, -1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12054A36; /* 0x12054A30: je 0x12054a36 */
L_12054A32:
    MEM32(ecx) = edx; /* 0x12054A32: mov dword ptr [ecx], edx */
    goto L_12054A39; /* 0x12054A34: jmp 0x12054a39 */
L_12054A36:
    _flag_a = (uint32_t)((MEM32(ecx) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ecx) | 0xFFFFFFFFu));
    MEM32(ecx) = MEM32(ecx) | 0xFFFFFFFFu; /* 0x12054A36: or dword ptr [ecx], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_12054A39:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x12054A39: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x12054A3C: add esi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x12054A3F: dec eax */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12054A2B; /* 0x12054A40: jne 0x12054a2b */
L_12054A42:
    esi = MEM32(ebp + (-0x10)); /* 0x12054A42: mov esi, dword ptr [ebp - 0x10] */
L_12054A45:
    /* cmp MEM32(ebp + 0x1C), 0 */ /* 0x12054A45: cmp dword ptr [ebp + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12054A4E; /* 0x12054A49: je 0x12054a4e */
L_12054A4B:
    esi = ebp + (-0xC); /* 0x12054A4B: lea esi, [ebp - 0xc] */
L_12054A4E:
    eax = MEM32(ebx + 0xCC); /* 0x12054A4E: mov eax, dword ptr [ebx + 0xcc] */
    ecx = MEM32(eax); /* 0x12054A54: mov ecx, dword ptr [eax] */
    edx = ebp + (-0x4); /* 0x12054A56: lea edx, [ebp - 4] */
    PUSH32(esp, edx); /* 0x12054A59: push edx */
    edx = MEM32(ebp + (-0x8)); /* 0x12054A5A: mov edx, dword ptr [ebp - 8] */
    PUSH32(esp, esi); /* 0x12054A5D: push esi */
    PUSH32(esp, 0); /* 0x12054A5E: push 0 */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x12054A60: push dword ptr [ebp + 0x18] */
    PUSH32(esp, edx); /* 0x12054A63: push edx */
    PUSH32(esp, 0x03000000u); /* 0x12054A64: push 0x3000000 */
    PUSH32(esp, eax); /* 0x12054A69: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x68)); /* 0x12054A6A: call dword ptr [ecx + 0x68] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x12054A6D: mov esi, eax */
    /* test esi, esi */ /* 0x12054A6F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120549DC; /* 0x12054A71: js 0x120549dc */
L_12054A77:
    ebx = MEM32(ebx + 0xCC); /* 0x12054A77: mov ebx, dword ptr [ebx + 0xcc] */
    eax = MEM32(ebp + 0xC); /* 0x12054A7D: mov eax, dword ptr [ebp + 0xc] */
    /* cmp eax, MEM32(ebx + 0x214) */ /* 0x12054A80: cmp eax, dword ptr [ebx + 0x214] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x214));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12054AA6; /* 0x12054A86: jne 0x12054aa6 */
L_12054A88:
    ecx = ebx + 0xC; /* 0x12054A88: lea ecx, [ebx + 0xc] */
    PUSH32(esp, ecx); /* 0x12054A8B: push ecx */
    PUSH32(esp, edi); /* 0x12054A8C: push edi */
    RECOMP_CALL(sub_1204BF67); /* 0x12054A8D: call 0x1204bf67 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12054A92: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12054AA6; /* 0x12054A94: je 0x12054aa6 */
L_12054A96:
    eax = MEM32(ebp + 0x14); /* 0x12054A96: mov eax, dword ptr [ebp + 0x14] */
    /* cmp MEM32(ebx + 0x230), eax */ /* 0x12054A99: cmp dword ptr [ebx + 0x230], eax */
    _flag_a = (uint32_t)(MEM32(ebx + 0x230)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12054AA6; /* 0x12054A9F: jne 0x12054aa6 */
L_12054AA1:
    ecx = MEM32(ebp + (-0x4)); /* 0x12054AA1: mov ecx, dword ptr [ebp - 4] */
    goto L_12054AD7; /* 0x12054AA4: jmp 0x12054ad7 */
L_12054AA6:
    eax = MEM32(ebp + (-0x4)); /* 0x12054AA6: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x12054AA9: mov ecx, dword ptr [eax] */
    edx = ebp + 0x10; /* 0x12054AAB: lea edx, [ebp + 0x10] */
    PUSH32(esp, edx); /* 0x12054AAE: push edx */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x12054AAF: push dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x12054AB2: push edi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12054AB3: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x12054AB6: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x12054AB7: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x12054ABA: mov esi, eax */
    /* test esi, esi */ /* 0x12054ABC: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120549DC; /* 0x12054ABE: js 0x120549dc */
L_12054AC4:
    ecx = MEM32(ebp + (-0x4)); /* 0x12054AC4: mov ecx, dword ptr [ebp - 4] */
    /* test ecx, ecx */ /* 0x12054AC7: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12054AD1; /* 0x12054AC9: je 0x12054ad1 */
L_12054ACB:
    eax = MEM32(ecx); /* 0x12054ACB: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x12054ACD: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x12054ACE: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_12054AD1:
    ecx = MEM32(ebp + 0x10); /* 0x12054AD1: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x12054AD4: mov dword ptr [ebp - 4], ecx */
L_12054AD7:
    /* cmp MEM32(ebp + 0x1C), 0 */ /* 0x12054AD7: cmp dword ptr [ebp + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12054AFF; /* 0x12054ADB: je 0x12054aff */
L_12054ADD:
    eax = MEM32(ecx); /* 0x12054ADD: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x12054ADF: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x12054AE0: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x12054AE3: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x12054AE3: shl eax, 2 */
    PUSH32(esp, eax); /* 0x12054AE6: push eax */
    eax = MEM32(ebp + (-0xC)); /* 0x12054AE7: mov eax, dword ptr [ebp - 0xc] */
    ecx = MEM32(eax); /* 0x12054AEA: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x12054AEC: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x12054AED: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x12054AF0: push eax */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x12054AF1: push dword ptr [ebp + 0x1c] */
    RECOMP_CALL(sub_121BF440); /* 0x12054AF4: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x12054AF9: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x12054AFC: add esp, 0xc */
    _flag_k = FK_ADD;
L_12054AFF:
    eax = MEM32(ebp + 0x20); /* 0x12054AFF: mov eax, dword ptr [ebp + 0x20] */
    MEM32(eax) = ecx; /* 0x12054B02: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x12054B04: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ecx; /* 0x12054B06: mov dword ptr [ebp - 4], ecx */
    RECOMP_BACKEDGE();
    goto L_120549DF; /* 0x12054B09: jmp 0x120549df */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_12054B13(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12054B13u);

L_12054B13:
    edi = edi; /* 0x12054B13: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12054B15: push ebp */
    ebp = esp; /* 0x12054B16: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x12054B18: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x108); /* 0x12054B1B: mov eax, dword ptr [eax + 0x108] */
    ebp = POP32_VAL(esp); /* 0x12054B21: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12054B22: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12054B2A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12054B2Au);

L_12054B2A:
    edi = edi; /* 0x12054B2A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12054B2C: push ebp */
    ebp = esp; /* 0x12054B2D: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x12054B2F: push ecx */
    PUSH32(esp, ebx); /* 0x12054B30: push ebx */
    ebx = ecx; /* 0x12054B31: mov ebx, ecx */
    PUSH32(esp, edi); /* 0x12054B33: push edi */
    edi = MEM32(ebx + 0x124); /* 0x12054B34: mov edi, dword ptr [ebx + 0x124] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x12054B3A: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(ebx + 0x120) */ /* 0x12054B3B: cmp edi, dword ptr [ebx + 0x120] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebx + 0x120));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_12054BAB; /* 0x12054B41: jae 0x12054bab */
L_12054B43:
    PUSH32(esp, esi); /* 0x12054B43: push esi */
L_12054B44:
    ecx = MEM32(ebx + 0x118); /* 0x12054B44: mov ecx, dword ptr [ebx + 0x118] */
    edx = MEM32(ecx + edi * 8); /* 0x12054B4A: mov edx, dword ptr [ecx + edi*8] */
    eax = MEM32(ebx + 0x128); /* 0x12054B4D: mov eax, dword ptr [ebx + 0x128] */
    /* cmp MEM32(eax + edx * 4), 0xFFFFFFFFu */ /* 0x12054B53: cmp dword ptr [eax + edx*4], -1 */
    _flag_a = (uint32_t)(MEM32(eax + edx * 4)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12054BA1; /* 0x12054B57: je 0x12054ba1 */
L_12054B59:
    esi = (uint32_t)MEM16(ecx + edi * 8 + 0x6); /* 0x12054B59: movzx esi, word ptr [ecx + edi*8 + 6] */
    eax = MEM32(ebx + 0x12C); /* 0x12054B5E: mov eax, dword ptr [ebx + 0x12c] */
    eax = MEM32(eax + edx * 4); /* 0x12054B64: mov eax, dword ptr [eax + edx*4] */
    ecx = esi; /* 0x12054B67: mov ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x12054B69: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x12054B6C: add eax, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x12054B6E: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 3); /* 0x12054B70: push 3 */
    ecx = POP32_VAL(esp); /* 0x12054B72: pop ecx */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x12054B73: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    ecx = MEM32(ebx + 0x118); /* 0x12054B75: mov ecx, dword ptr [ebx + 0x118] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFCu);
    esi = esi & 0xFFFCu; /* 0x12054B7B: and esi, 0xfffc */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((esi | edx)); _flag_b = (uint32_t)((esi | edx));
    esi = esi | edx; /* 0x12054B81: or esi, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(ecx + edi * 8); /* 0x12054B83: mov edx, dword ptr [ecx + edi*8] */
    MEM16(ecx + edi * 8 + 0x6) = (uint16_t)(LO16(esi)); /* 0x12054B86: mov word ptr [ecx + edi*8 + 6], si */
    eax = MEM32(ebx + 0x128); /* 0x12054B8B: mov eax, dword ptr [ebx + 0x128] */
    eax = MEM32(eax + edx * 4); /* 0x12054B91: mov eax, dword ptr [eax + edx*4] */
    MEM32(ecx + edi * 8) = eax; /* 0x12054B94: mov dword ptr [ecx + edi*8], eax */
    eax = MEM32(ebx + 0x11C); /* 0x12054B97: mov eax, dword ptr [ebx + 0x11c] */
    MEM8(edi + eax) = (uint8_t)(1); /* 0x12054B9D: mov byte ptr [edi + eax], 1 */
L_12054BA1:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x12054BA1: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(ebx + 0x120) */ /* 0x12054BA2: cmp edi, dword ptr [ebx + 0x120] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebx + 0x120));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12054B44; /* 0x12054BA8: jb 0x12054b44 */
L_12054BAA:
    esi = POP32_VAL(esp); /* 0x12054BAA: pop esi */
L_12054BAB:
    edi = POP32_VAL(esp); /* 0x12054BAB: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12054BAC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x12054BAE: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12054BAF: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x12054BB0: ret  */
    RECOMP_REGS_OUT();
}

void sub_12054BB6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12054BB6u);

L_12054BB6:
    edi = edi; /* 0x12054BB6: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12054BB8: push ebp */
    ebp = esp; /* 0x12054BB9: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x12054BBB: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x12054BBE: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x12054BBF: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x12054BC1: push esi */
    PUSH32(esp, edi); /* 0x12054BC2: push edi */
    ebx = ecx; /* 0x12054BC3: mov ebx, ecx */
    MEM32(ebp + (-0xC)) = edx; /* 0x12054BC5: mov dword ptr [ebp - 0xc], edx */
    /* cmp MEM32(ebp + 0x14), edx */ /* 0x12054BC8: cmp dword ptr [ebp + 0x14], edx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_12054C75; /* 0x12054BCB: jbe 0x12054c75 */
L_12054BD1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x12054BD1: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = edi; /* 0x12054BD3: mov dword ptr [ebp - 8], edi */
L_12054BD6:
    eax = MEM32(ebp + 0x10); /* 0x12054BD6: mov eax, dword ptr [ebp + 0x10] */
    esi = MEM32(eax + edx * 4); /* 0x12054BD9: mov esi, dword ptr [eax + edx*4] */
    MEM32(ebp + (-0x14)) = esi; /* 0x12054BDC: mov dword ptr [ebp - 0x14], esi */
    /* cmp esi, 0xFFFFFFFFu */ /* 0x12054BDF: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12054C4D; /* 0x12054BE2: je 0x12054c4d */
L_12054BE4:
    eax = MEM32(ebx + 0xCC); /* 0x12054BE4: mov eax, dword ptr [ebx + 0xcc] */
    eax = MEM32(eax + 0x24C); /* 0x12054BEA: mov eax, dword ptr [eax + 0x24c] */
    ecx = esi; /* 0x12054BF0: mov ecx, esi */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xCu); /* 0x12054BF2: imul ecx, ecx, 0xc */
    /* cmp MEM32(ecx + eax), 0xFFFFFFFFu */ /* 0x12054BF5: cmp dword ptr [ecx + eax], -1 */
    _flag_a = (uint32_t)(MEM32(ecx + eax)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = ecx; /* 0x12054BF9: mov dword ptr [ebp - 4], ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12054C4D; /* 0x12054BFC: je 0x12054c4d */
L_12054BFE:
    /* cmp esi, edx */ /* 0x12054BFE: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12054C62; /* 0x12054C00: je 0x12054c62 */
L_12054C02:
    eax = MEM32(ebx + 0xD4); /* 0x12054C02: mov eax, dword ptr [ebx + 0xd4] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0; /* 0x12054C08: and dword ptr [ebp - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = edi + eax; /* 0x12054C0C: lea esi, [edi + eax] */
    edx = ecx; /* 0x12054C0F: mov edx, ecx */
    edi = eax + edx; /* 0x12054C11: lea edi, [eax + edx] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12054C14: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12054C15: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12054C16: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = MEM32(ebp + (-0x8)); /* 0x12054C17: mov edi, dword ptr [ebp - 8] */
    MEM32(ebp + (-0x4)) = edi; /* 0x12054C1A: mov dword ptr [ebp - 4], edi */
    edi = MEM32(ebp + (-0x10)); /* 0x12054C1D: mov edi, dword ptr [ebp - 0x10] */
L_12054C20:
    eax = MEM32(ebx + 0xD4); /* 0x12054C20: mov eax, dword ptr [ebx + 0xd4] */
    ecx = MEM32(edx + eax); /* 0x12054C26: mov ecx, dword ptr [edx + eax] */
    esi = MEM32(ebp + (-0x4)); /* 0x12054C29: mov esi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(MEM32(esi + eax)); _flag_b = (uint32_t)(0);
    MEM32(esi + eax) = MEM32(esi + eax) & 0; /* 0x12054C2C: and dword ptr [esi + eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ebp + (-0x14)); /* 0x12054C30: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 4; /* 0x12054C33: add dword ptr [ebp - 4], 4 */
    _flag_k = FK_ADD;
    MEM32(ecx + 0x4) = edi; /* 0x12054C37: mov dword ptr [ecx + 4], edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x12054C3A: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x12054C3B: add edx, 4 */
    _flag_k = FK_ADD;
    MEM32(ecx) = esi; /* 0x12054C3E: mov dword ptr [ecx], esi */
    /* cmp edi, 3 */ /* 0x12054C40: cmp edi, 3 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12054C20; /* 0x12054C43: jb 0x12054c20 */
L_12054C45:
    edx = MEM32(ebp + (-0xC)); /* 0x12054C45: mov edx, dword ptr [ebp - 0xc] */
    edi = MEM32(ebp + (-0x8)); /* 0x12054C48: mov edi, dword ptr [ebp - 8] */
    goto L_12054C62; /* 0x12054C4B: jmp 0x12054c62 */
L_12054C4D:
    PUSH32(esp, 3); /* 0x12054C4D: push 3 */
    ecx = edi; /* 0x12054C4F: mov ecx, edi */
    esi = POP32_VAL(esp); /* 0x12054C51: pop esi */
L_12054C52:
    eax = MEM32(ebx + 0xD4); /* 0x12054C52: mov eax, dword ptr [ebx + 0xd4] */
    _flag_a = (uint32_t)(MEM32(ecx + eax)); _flag_b = (uint32_t)(0);
    MEM32(ecx + eax) = MEM32(ecx + eax) & 0; /* 0x12054C58: and dword ptr [ecx + eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x12054C5C: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x12054C5F: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12054C52; /* 0x12054C60: jne 0x12054c52 */
L_12054C62:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x12054C62: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0xCu; /* 0x12054C63: add edi, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xC)) = edx; /* 0x12054C66: mov dword ptr [ebp - 0xc], edx */
    MEM32(ebp + (-0x8)) = edi; /* 0x12054C69: mov dword ptr [ebp - 8], edi */
    /* cmp edx, MEM32(ebp + 0x14) */ /* 0x12054C6C: cmp edx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12054BD6; /* 0x12054C6F: jb 0x12054bd6 */
L_12054C75:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x12054C75: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0xC), edx */ /* 0x12054C77: cmp dword ptr [ebp + 0xc], edx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_12054CA5; /* 0x12054C7A: jbe 0x12054ca5 */
L_12054C7C:
    edi = MEM32(ebp + 0x8); /* 0x12054C7C: mov edi, dword ptr [ebp + 8] */
L_12054C7F:
    esi = MEM32(edi + edx * 4); /* 0x12054C7F: mov esi, dword ptr [edi + edx*4] */
    /* cmp esi, 0xFFFFFFFFu */ /* 0x12054C82: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12054C9F; /* 0x12054C85: je 0x12054c9f */
L_12054C87:
    eax = MEM32(ebx + 0x154); /* 0x12054C87: mov eax, dword ptr [ebx + 0x154] */
    /* cmp MEM8(edx + eax), 0 */ /* 0x12054C8D: cmp byte ptr [edx + eax], 0 */
    _flag_a = (uint32_t)(MEM8(edx + eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_12054C9F; /* 0x12054C91: jne 0x12054c9f */
L_12054C93:
    ecx = MEM32(ebx + 0xEC); /* 0x12054C93: mov ecx, dword ptr [ebx + 0xec] */
    SET_LO8(eax, MEM8(ecx + edx)); /* 0x12054C99: mov al, byte ptr [ecx + edx] */
    MEM8(ecx + esi) = (uint8_t)(LO8(eax)); /* 0x12054C9C: mov byte ptr [ecx + esi], al */
L_12054C9F:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x12054C9F: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, MEM32(ebp + 0xC) */ /* 0x12054CA0: cmp edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12054C7F; /* 0x12054CA3: jb 0x12054c7f */
L_12054CA5:
    eax = MEM32(ebx + 0xCC); /* 0x12054CA5: mov eax, dword ptr [ebx + 0xcc] */
    PUSH32(esp, MEM32(eax + 0x23C)); /* 0x12054CAB: push dword ptr [eax + 0x23c] */
    PUSH32(esp, 1); /* 0x12054CB1: push 1 */
    PUSH32(esp, MEM32(ebx + 0x154)); /* 0x12054CB3: push dword ptr [ebx + 0x154] */
    RECOMP_CALL(sub_121BF434); /* 0x12054CB9: call 0x121bf434 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0xCC); /* 0x12054CBE: mov eax, dword ptr [ebx + 0xcc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x12054CC4: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x12054CC6: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp MEM32(eax + 0x260), edi */ /* 0x12054CC9: cmp dword ptr [eax + 0x260], edi */
    _flag_a = (uint32_t)(MEM32(eax + 0x260)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_12054D06; /* 0x12054CCF: jbe 0x12054d06 */
L_12054CD1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x12054CD1: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_12054CD3:
    eax = MEM32(ebx + 0x144); /* 0x12054CD3: mov eax, dword ptr [ebx + 0x144] */
    ecx = MEM32(edx + eax + 0xC); /* 0x12054CD9: mov ecx, dword ptr [edx + eax + 0xc] */
    esi = MEM32(edx + eax + 0x10); /* 0x12054CDD: mov esi, dword ptr [edx + eax + 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ecx; /* 0x12054CE1: add esi, ecx */
    _flag_k = FK_ADD;
    goto L_12054CF0; /* 0x12054CE3: jmp 0x12054cf0 */
L_12054CE5:
    eax = MEM32(ebx + 0x154); /* 0x12054CE5: mov eax, dword ptr [ebx + 0x154] */
    MEM8(ecx + eax) = (uint8_t)(0); /* 0x12054CEB: mov byte ptr [ecx + eax], 0 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x12054CEF: inc ecx */
    _flag_k = FK_INC;
L_12054CF0:
    /* cmp ecx, esi */ /* 0x12054CF0: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12054CE5; /* 0x12054CF2: jb 0x12054ce5 */
L_12054CF4:
    eax = MEM32(ebx + 0xCC); /* 0x12054CF4: mov eax, dword ptr [ebx + 0xcc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x12054CFA: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x14u; /* 0x12054CFB: add edx, 0x14 */
    _flag_k = FK_ADD;
    /* cmp edi, MEM32(eax + 0x260) */ /* 0x12054CFE: cmp edi, dword ptr [eax + 0x260] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(eax + 0x260));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12054CD3; /* 0x12054D04: jb 0x12054cd3 */
L_12054D06:
    edi = POP32_VAL(esp); /* 0x12054D06: pop edi */
    esi = POP32_VAL(esp); /* 0x12054D07: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12054D08: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x12054D0A: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12054D0B: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x12054D0C: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_12054D14(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12054D14u);

L_12054D14:
    edi = edi; /* 0x12054D14: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12054D16: push ebp */
    ebp = esp; /* 0x12054D17: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x12054D19: sub esp, 0x18 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x12054D1C: push ebx */
    PUSH32(esp, esi); /* 0x12054D1D: push esi */
    PUSH32(esp, edi); /* 0x12054D1E: push edi */
    esi = ecx; /* 0x12054D1F: mov esi, ecx */
    MEM32(ebp + (-0x4)) = esi; /* 0x12054D21: mov dword ptr [ebp - 4], esi */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x12054D24: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = MEM32(ebp + 0x8); /* 0x12054D27: mov ebx, dword ptr [ebp + 8] */
    MEM32(ebx + 0x7C) = eax; /* 0x12054D2A: mov dword ptr [ebx + 0x7c], eax */
    MEM32(ebx + 0x80) = eax; /* 0x12054D2D: mov dword ptr [ebx + 0x80], eax */
    MEM32(ebx + 0x84) = eax; /* 0x12054D33: mov dword ptr [ebx + 0x84], eax */
    MEM32(ebx + 0x88) = eax; /* 0x12054D39: mov dword ptr [ebx + 0x88], eax */
    MEM32(ebx + 0x8C) = eax; /* 0x12054D3F: mov dword ptr [ebx + 0x8c], eax */
    MEM32(ebx + 0x90) = eax; /* 0x12054D45: mov dword ptr [ebx + 0x90], eax */
    ecx = MEM32(ebp + 0xC); /* 0x12054D4B: mov ecx, dword ptr [ebp + 0xc] */
    eax = MEM32(ecx); /* 0x12054D4E: mov eax, dword ptr [ecx] */
    MEM32(ebx) = eax; /* 0x12054D50: mov dword ptr [ebx], eax */
    eax = MEM32(ecx + 0x4); /* 0x12054D52: mov eax, dword ptr [ecx + 4] */
    MEM32(ebx + 0x4) = eax; /* 0x12054D55: mov dword ptr [ebx + 4], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x12054D58: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x12054D5B: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 3); /* 0x12054D5D: push 3 */
    ecx = POP32_VAL(esp); /* 0x12054D5F: pop ecx */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x12054D60: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    eax = MEM32(ebx + 0x4); /* 0x12054D62: mov eax, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x12054D65: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + 0xC) = ecx; /* 0x12054D66: mov dword ptr [ebp + 0xc], ecx */
    MEM32(ebx + 0x8) = edx; /* 0x12054D69: mov dword ptr [ebx + 8], edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x12054D6C: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x12054D6E: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    ecx = MEM32(ebx); /* 0x12054D70: mov ecx, dword ptr [ebx] */
    edi = ecx; /* 0x12054D72: mov edi, ecx */
    edi = (uint32_t)((int32_t)edi * (int32_t)3); /* 0x12054D74: imul edi, edi, 3 */
    MEM32(ebp + (-0x8)) = edi; /* 0x12054D77: mov dword ptr [ebp - 8], edi */
    MEM32(ebx + 0xC) = edx; /* 0x12054D7A: mov dword ptr [ebx + 0xc], edx */
    eax = MEM32(esi + 0xCC); /* 0x12054D7D: mov eax, dword ptr [esi + 0xcc] */
    eax = MEM32(eax + 0x258); /* 0x12054D83: mov eax, dword ptr [eax + 0x258] */
    SET_LO16(eax, MEM16(eax + ecx * 2)); /* 0x12054D89: mov ax, word ptr [eax + ecx*2] */
    ecx = MEM32(ebx + 0x4); /* 0x12054D8D: mov ecx, dword ptr [ebx + 4] */
    MEM16(ebx + 0x94) = (uint16_t)(LO16(eax)); /* 0x12054D90: mov word ptr [ebx + 0x94], ax */
    eax = MEM32(esi + 0xCC); /* 0x12054D97: mov eax, dword ptr [esi + 0xcc] */
    eax = MEM32(eax + 0x24C); /* 0x12054D9D: mov eax, dword ptr [eax + 0x24c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x12054DA3: add ecx, edi */
    _flag_k = FK_ADD;
    eax = MEM32(eax + ecx * 4); /* 0x12054DA5: mov eax, dword ptr [eax + ecx*4] */
    MEM32(ebx + 0x40) = eax; /* 0x12054DA8: mov dword ptr [ebx + 0x40], eax */
    eax = MEM32(esi + 0xCC); /* 0x12054DAB: mov eax, dword ptr [esi + 0xcc] */
    eax = MEM32(eax + 0x24C); /* 0x12054DB1: mov eax, dword ptr [eax + 0x24c] */
    ecx = edi + edx; /* 0x12054DB7: lea ecx, [edi + edx] */
    eax = MEM32(eax + ecx * 4); /* 0x12054DBA: mov eax, dword ptr [eax + ecx*4] */
    MEM32(ebx + 0x44) = eax; /* 0x12054DBD: mov dword ptr [ebx + 0x44], eax */
    eax = MEM32(esi + 0x90); /* 0x12054DC0: mov eax, dword ptr [esi + 0x90] */
    MEM32(ebp + (-0x14)) = ecx; /* 0x12054DC6: mov dword ptr [ebp - 0x14], ecx */
    ecx = MEM32(esi + 0xC8); /* 0x12054DC9: mov ecx, dword ptr [esi + 0xc8] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebx + 0x40)); /* 0x12054DCF: imul ecx, dword ptr [ebx + 0x40] */
    esi = (uint32_t)MEM16(eax + 0x2); /* 0x12054DD3: movzx esi, word ptr [eax + 2] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + 0x10); /* 0x12054DD7: add ecx, dword ptr [ebp + 0x10] */
    _flag_k = FK_ADD;
    edi = ebx + 0x50; /* 0x12054DDA: lea edi, [ebx + 0x50] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ecx; /* 0x12054DDD: add esi, ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(ebx + 0x4); /* 0x12054DDF: mov ecx, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + (-0x8)); /* 0x12054DE2: add ecx, dword ptr [ebp - 8] */
    _flag_k = FK_ADD;
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12054DE5: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12054DE6: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12054DE7: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = MEM32(ebp + (-0x4)); /* 0x12054DE8: mov edi, dword ptr [ebp - 4] */
    eax = MEM32(edi + 0xCC); /* 0x12054DEB: mov eax, dword ptr [edi + 0xcc] */
    eax = MEM32(eax + 0x250); /* 0x12054DF1: mov eax, dword ptr [eax + 0x250] */
    eax = MEM32(eax + ecx * 4); /* 0x12054DF7: mov eax, dword ptr [eax + ecx*4] */
    ecx = MEM32(ebx); /* 0x12054DFA: mov ecx, dword ptr [ebx] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xCu); /* 0x12054DFC: imul ecx, ecx, 0xc */
    MEM32(ebx + 0x10) = eax; /* 0x12054DFF: mov dword ptr [ebx + 0x10], eax */
    eax = MEM32(edi + 0xCC); /* 0x12054E02: mov eax, dword ptr [edi + 0xcc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x250));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax + 0x250); /* 0x12054E08: add ecx, dword ptr [eax + 0x250] */
    _flag_k = FK_ADD;
    eax = MEM32(ebx + 0x8); /* 0x12054E0E: mov eax, dword ptr [ebx + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x12054E11: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx + 0x48) = ecx; /* 0x12054E13: mov dword ptr [ebx + 0x48], ecx */
    MEM32(ebx + 0x4C) = edx; /* 0x12054E16: mov dword ptr [ebx + 0x4c], edx */
    eax = MEM32(ecx + eax * 4); /* 0x12054E19: mov eax, dword ptr [ecx + eax*4] */
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x12054E1C: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = eax; /* 0x12054E1F: mov dword ptr [ebp - 0xc], eax */
    MEM32(ebx + 0x20) = eax; /* 0x12054E22: mov dword ptr [ebx + 0x20], eax */
    /* cmp eax, esi */ /* 0x12054E25: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12054E60; /* 0x12054E27: je 0x12054e60 */
L_12054E29:
    eax = MEM32(edi + 0xCC); /* 0x12054E29: mov eax, dword ptr [edi + 0xcc] */
    eax = MEM32(eax + 0x250); /* 0x12054E2F: mov eax, dword ptr [eax + 0x250] */
    edi = MEM32(ebx); /* 0x12054E35: mov edi, dword ptr [ebx] */
    esi = MEM32(ebp + (-0xC)); /* 0x12054E37: mov esi, dword ptr [ebp - 0xc] */
    ecx = edx; /* 0x12054E3A: mov ecx, edx */
    edx = eax; /* 0x12054E3C: mov edx, eax */
L_12054E3E:
    eax = esi; /* 0x12054E3E: mov eax, esi */
    eax = (uint32_t)((int32_t)eax * (int32_t)3); /* 0x12054E40: imul eax, eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x12054E43: add eax, ecx */
    _flag_k = FK_ADD;
    /* cmp MEM32(edx + eax * 4), edi */ /* 0x12054E45: cmp dword ptr [edx + eax*4], edi */
    _flag_a = (uint32_t)(MEM32(edx + eax * 4)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12054E52; /* 0x12054E48: je 0x12054e52 */
L_12054E4A:
    PUSH32(esp, 3); /* 0x12054E4A: push 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x12054E4C: inc ecx */
    _flag_k = FK_INC;
    eax = POP32_VAL(esp); /* 0x12054E4D: pop eax */
    /* cmp ecx, eax */ /* 0x12054E4E: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12054E3E; /* 0x12054E50: jb 0x12054e3e */
L_12054E52:
    edi = MEM32(ebp + (-0x4)); /* 0x12054E52: mov edi, dword ptr [ebp - 4] */
    MEM32(ebx + 0x24) = ecx; /* 0x12054E55: mov dword ptr [ebx + 0x24], ecx */
    ecx = MEM32(ebx + 0x48); /* 0x12054E58: mov ecx, dword ptr [ebx + 0x48] */
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x12054E5B: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x12054E5E: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_12054E60:
    eax = MEM32(ebx + 0xC); /* 0x12054E60: mov eax, dword ptr [ebx + 0xc] */
    eax = MEM32(ecx + eax * 4); /* 0x12054E63: mov eax, dword ptr [ecx + eax*4] */
    MEM32(ebp + 0x10) = eax; /* 0x12054E66: mov dword ptr [ebp + 0x10], eax */
    MEM32(ebx + 0x28) = eax; /* 0x12054E69: mov dword ptr [ebx + 0x28], eax */
    /* cmp eax, esi */ /* 0x12054E6C: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12054EAA; /* 0x12054E6E: je 0x12054eaa */
L_12054E70:
    eax = MEM32(edi + 0xCC); /* 0x12054E70: mov eax, dword ptr [edi + 0xcc] */
    eax = MEM32(eax + 0x250); /* 0x12054E76: mov eax, dword ptr [eax + 0x250] */
    edi = MEM32(ebp + 0x10); /* 0x12054E7C: mov edi, dword ptr [ebp + 0x10] */
    ebx = MEM32(ebx); /* 0x12054E7F: mov ebx, dword ptr [ebx] */
    PUSH32(esp, 3); /* 0x12054E81: push 3 */
    ecx = edx; /* 0x12054E83: mov ecx, edx */
    MEM32(ebp + (-0xC)) = eax; /* 0x12054E85: mov dword ptr [ebp - 0xc], eax */
    edx = eax; /* 0x12054E88: mov edx, eax */
    esi = POP32_VAL(esp); /* 0x12054E8A: pop esi */
L_12054E8B:
    eax = edi; /* 0x12054E8B: mov eax, edi */
    eax = (uint32_t)((int32_t)eax * (int32_t)3); /* 0x12054E8D: imul eax, eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x12054E90: add eax, ecx */
    _flag_k = FK_ADD;
    /* cmp MEM32(edx + eax * 4), ebx */ /* 0x12054E92: cmp dword ptr [edx + eax*4], ebx */
    _flag_a = (uint32_t)(MEM32(edx + eax * 4)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12054E9C; /* 0x12054E95: je 0x12054e9c */
L_12054E97:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x12054E97: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, esi */ /* 0x12054E98: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12054E8B; /* 0x12054E9A: jb 0x12054e8b */
L_12054E9C:
    ebx = MEM32(ebp + 0x8); /* 0x12054E9C: mov ebx, dword ptr [ebp + 8] */
    edi = MEM32(ebp + (-0x4)); /* 0x12054E9F: mov edi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x12054EA2: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx + 0x2C) = ecx; /* 0x12054EA5: mov dword ptr [ebx + 0x2c], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x12054EA8: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_12054EAA:
    eax = MEM32(edi + 0xCC); /* 0x12054EAA: mov eax, dword ptr [edi + 0xcc] */
    eax = MEM32(eax + 0x24C); /* 0x12054EB0: mov eax, dword ptr [eax + 0x24c] */
    ecx = MEM32(ebx + 0x4); /* 0x12054EB6: mov ecx, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + (-0x8)); /* 0x12054EB9: add ecx, dword ptr [ebp - 8] */
    _flag_k = FK_ADD;
    eax = MEM32(eax + ecx * 4); /* 0x12054EBC: mov eax, dword ptr [eax + ecx*4] */
    ecx = MEM32(ebp + (-0x14)); /* 0x12054EBF: mov ecx, dword ptr [ebp - 0x14] */
    MEM32(ebx + 0x6C) = eax; /* 0x12054EC2: mov dword ptr [ebx + 0x6c], eax */
    eax = MEM32(edi + 0xCC); /* 0x12054EC5: mov eax, dword ptr [edi + 0xcc] */
    eax = MEM32(eax + 0x24C); /* 0x12054ECB: mov eax, dword ptr [eax + 0x24c] */
    eax = MEM32(eax + ecx * 4); /* 0x12054ED1: mov eax, dword ptr [eax + ecx*4] */
    ecx = MEM32(ebx + 0x20); /* 0x12054ED4: mov ecx, dword ptr [ebx + 0x20] */
    MEM32(ebx + 0x70) = eax; /* 0x12054ED7: mov dword ptr [ebx + 0x70], eax */
    /* cmp ecx, esi */ /* 0x12054EDA: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12054EE2; /* 0x12054EDC: jne 0x12054ee2 */
L_12054EDE:
    eax = esi; /* 0x12054EDE: mov eax, esi */
    goto L_12054EF7; /* 0x12054EE0: jmp 0x12054ef7 */
L_12054EE2:
    eax = MEM32(edi + 0xCC); /* 0x12054EE2: mov eax, dword ptr [edi + 0xcc] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)3); /* 0x12054EE8: imul ecx, ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx + 0x24));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebx + 0x24); /* 0x12054EEB: add ecx, dword ptr [ebx + 0x24] */
    _flag_k = FK_ADD;
    eax = MEM32(eax + 0x24C); /* 0x12054EEE: mov eax, dword ptr [eax + 0x24c] */
    eax = MEM32(eax + ecx * 4); /* 0x12054EF4: mov eax, dword ptr [eax + ecx*4] */
L_12054EF7:
    ecx = MEM32(ebx + 0x28); /* 0x12054EF7: mov ecx, dword ptr [ebx + 0x28] */
    MEM32(ebx + 0x5C) = eax; /* 0x12054EFA: mov dword ptr [ebx + 0x5c], eax */
    /* cmp ecx, esi */ /* 0x12054EFD: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12054F05; /* 0x12054EFF: jne 0x12054f05 */
L_12054F01:
    eax = esi; /* 0x12054F01: mov eax, esi */
    goto L_12054F24; /* 0x12054F03: jmp 0x12054f24 */
L_12054F05:
    eax = MEM32(ebx + 0x2C); /* 0x12054F05: mov eax, dword ptr [ebx + 0x2c] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)3); /* 0x12054F08: imul ecx, ecx, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x12054F0B: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x12054F0C: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)MEM32(ebp + 0xC); /* 0x12054F0E: div dword ptr [ebp + 0xc] */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    eax = MEM32(edi + 0xCC); /* 0x12054F11: mov eax, dword ptr [edi + 0xcc] */
    eax = MEM32(eax + 0x24C); /* 0x12054F17: mov eax, dword ptr [eax + 0x24c] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x12054F1D: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(eax + edx * 4); /* 0x12054F1F: mov eax, dword ptr [eax + edx*4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x12054F22: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_12054F24:
    ecx = MEM32(ebx + 0x10); /* 0x12054F24: mov ecx, dword ptr [ebx + 0x10] */
    MEM32(ebx + 0x60) = eax; /* 0x12054F27: mov dword ptr [ebx + 0x60], eax */
    /* cmp ecx, esi */ /* 0x12054F2A: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1205509D; /* 0x12054F2C: je 0x1205509d */
L_12054F32:
    eax = MEM32(edi + 0xCC); /* 0x12054F32: mov eax, dword ptr [edi + 0xcc] */
    eax = MEM32(eax + 0x258); /* 0x12054F38: mov eax, dword ptr [eax + 0x258] */
    SET_LO16(eax, MEM16(eax + ecx * 2)); /* 0x12054F3E: mov ax, word ptr [eax + ecx*2] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xCu); /* 0x12054F42: imul ecx, ecx, 0xc */
    MEM16(ebx + 0x96) = (uint16_t)(LO16(eax)); /* 0x12054F45: mov word ptr [ebx + 0x96], ax */
    eax = MEM32(edi + 0xCC); /* 0x12054F4C: mov eax, dword ptr [edi + 0xcc] */
    eax = MEM32(eax + 0x250); /* 0x12054F52: mov eax, dword ptr [eax + 0x250] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x12054F58: add eax, ecx */
    _flag_k = FK_ADD;
    ecx = edx; /* 0x12054F5A: mov ecx, edx */
    edx = MEM32(ebx); /* 0x12054F5C: mov edx, dword ptr [ebx] */
    MEM32(ebx + 0x4C) = eax; /* 0x12054F5E: mov dword ptr [ebx + 0x4c], eax */
L_12054F61:
    /* cmp MEM32(eax + ecx * 4), edx */ /* 0x12054F61: cmp dword ptr [eax + ecx*4], edx */
    _flag_a = (uint32_t)(MEM32(eax + ecx * 4)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12054F6C; /* 0x12054F64: je 0x12054f6c */
L_12054F66:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x12054F66: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, 3 */ /* 0x12054F67: cmp ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12054F61; /* 0x12054F6A: jb 0x12054f61 */
L_12054F6C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x12054F6C: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx + 0x2; /* 0x12054F6E: lea eax, [ecx + 2] */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)MEM32(ebp + 0xC); /* 0x12054F71: div dword ptr [ebp + 0xc] */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    MEM32(ebx + 0x14) = ecx; /* 0x12054F74: mov dword ptr [ebx + 0x14], ecx */
    MEM32(ebp + 0x10) = ecx; /* 0x12054F77: mov dword ptr [ebp + 0x10], ecx */
    PUSH32(esp, 3); /* 0x12054F7A: push 3 */
    eax = edx; /* 0x12054F7C: mov eax, edx */
    MEM32(ebp + (-0x8)) = eax; /* 0x12054F7E: mov dword ptr [ebp - 8], eax */
    MEM32(ebx + 0x18) = eax; /* 0x12054F81: mov dword ptr [ebx + 0x18], eax */
    eax = ecx + 0x1; /* 0x12054F84: lea eax, [ecx + 1] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x12054F87: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x12054F89: pop ecx */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x12054F8A: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    eax = MEM32(ebx + 0x4C); /* 0x12054F8C: mov eax, dword ptr [ebx + 0x4c] */
    ecx = edx; /* 0x12054F8F: mov ecx, edx */
    edx = MEM32(ebx + 0x10); /* 0x12054F91: mov edx, dword ptr [ebx + 0x10] */
    MEM32(ebx + 0x1C) = ecx; /* 0x12054F94: mov dword ptr [ebx + 0x1c], ecx */
    eax = MEM32(eax + ecx * 4); /* 0x12054F97: mov eax, dword ptr [eax + ecx*4] */
    MEM32(ebp + (-0x18)) = ecx; /* 0x12054F9A: mov dword ptr [ebp - 0x18], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x12054F9D: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x12054F9F: mov dword ptr [ebp - 0x10], eax */
    MEM32(ebx + 0x30) = eax; /* 0x12054FA2: mov dword ptr [ebx + 0x30], eax */
    /* cmp eax, esi */ /* 0x12054FA5: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12054FDB; /* 0x12054FA7: je 0x12054fdb */
L_12054FA9:
    eax = MEM32(edi + 0xCC); /* 0x12054FA9: mov eax, dword ptr [edi + 0xcc] */
    eax = MEM32(eax + 0x250); /* 0x12054FAF: mov eax, dword ptr [eax + 0x250] */
    edi = ecx; /* 0x12054FB5: mov edi, ecx */
    ecx = MEM32(ebp + (-0x10)); /* 0x12054FB7: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(ebp + (-0xC)) = eax; /* 0x12054FBA: mov dword ptr [ebp - 0xc], eax */
    esi = eax; /* 0x12054FBD: mov esi, eax */
L_12054FBF:
    eax = ecx; /* 0x12054FBF: mov eax, ecx */
    eax = (uint32_t)((int32_t)eax * (int32_t)3); /* 0x12054FC1: imul eax, eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x12054FC4: add eax, edi */
    _flag_k = FK_ADD;
    /* cmp MEM32(esi + eax * 4), edx */ /* 0x12054FC6: cmp dword ptr [esi + eax*4], edx */
    _flag_a = (uint32_t)(MEM32(esi + eax * 4)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12054FD3; /* 0x12054FC9: je 0x12054fd3 */
L_12054FCB:
    PUSH32(esp, 3); /* 0x12054FCB: push 3 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x12054FCD: inc edi */
    _flag_k = FK_INC;
    eax = POP32_VAL(esp); /* 0x12054FCE: pop eax */
    /* cmp edi, eax */ /* 0x12054FCF: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12054FBF; /* 0x12054FD1: jb 0x12054fbf */
L_12054FD3:
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x12054FD3: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx + 0x34) = edi; /* 0x12054FD6: mov dword ptr [ebx + 0x34], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x12054FD9: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_12054FDB:
    edi = MEM32(ebp + (-0x8)); /* 0x12054FDB: mov edi, dword ptr [ebp - 8] */
    eax = MEM32(ebx + 0x4C); /* 0x12054FDE: mov eax, dword ptr [ebx + 0x4c] */
    eax = MEM32(eax + edi * 4); /* 0x12054FE1: mov eax, dword ptr [eax + edi*4] */
    edi = MEM32(ebp + (-0x4)); /* 0x12054FE4: mov edi, dword ptr [ebp - 4] */
    MEM32(ebp + (-0x14)) = eax; /* 0x12054FE7: mov dword ptr [ebp - 0x14], eax */
    MEM32(ebx + 0x38) = eax; /* 0x12054FEA: mov dword ptr [ebx + 0x38], eax */
    /* cmp eax, esi */ /* 0x12054FED: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12055022; /* 0x12054FEF: je 0x12055022 */
L_12054FF1:
    eax = MEM32(edi + 0xCC); /* 0x12054FF1: mov eax, dword ptr [edi + 0xcc] */
    eax = MEM32(eax + 0x250); /* 0x12054FF7: mov eax, dword ptr [eax + 0x250] */
    edi = MEM32(ebp + (-0x14)); /* 0x12054FFD: mov edi, dword ptr [ebp - 0x14] */
    PUSH32(esp, 3); /* 0x12055000: push 3 */
    ebx = eax; /* 0x12055002: mov ebx, eax */
    esi = POP32_VAL(esp); /* 0x12055004: pop esi */
L_12055005:
    eax = edi; /* 0x12055005: mov eax, edi */
    eax = (uint32_t)((int32_t)eax * (int32_t)3); /* 0x12055007: imul eax, eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1205500A: add eax, ecx */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebx + eax * 4), edx */ /* 0x1205500C: cmp dword ptr [ebx + eax*4], edx */
    _flag_a = (uint32_t)(MEM32(ebx + eax * 4)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12055016; /* 0x1205500F: je 0x12055016 */
L_12055011:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x12055011: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, esi */ /* 0x12055012: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12055005; /* 0x12055014: jb 0x12055005 */
L_12055016:
    ebx = MEM32(ebp + 0x8); /* 0x12055016: mov ebx, dword ptr [ebp + 8] */
    edi = MEM32(ebp + (-0x4)); /* 0x12055019: mov edi, dword ptr [ebp - 4] */
    MEM32(ebx + 0x3C) = ecx; /* 0x1205501C: mov dword ptr [ebx + 0x3c], ecx */
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x1205501F: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_12055022:
    eax = MEM32(edi + 0xCC); /* 0x12055022: mov eax, dword ptr [edi + 0xcc] */
    edx = (uint32_t)((int32_t)edx * (int32_t)3); /* 0x12055028: imul edx, edx, 3 */
    eax = MEM32(eax + 0x24C); /* 0x1205502B: mov eax, dword ptr [eax + 0x24c] */
    ecx = MEM32(ebp + (-0x18)); /* 0x12055031: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x12055034: add ecx, edx */
    _flag_k = FK_ADD;
    eax = MEM32(eax + ecx * 4); /* 0x12055036: mov eax, dword ptr [eax + ecx*4] */
    MEM32(ebx + 0x74) = eax; /* 0x12055039: mov dword ptr [ebx + 0x74], eax */
    eax = MEM32(ebp + 0x10); /* 0x1205503C: mov eax, dword ptr [ebp + 0x10] */
    ecx = edx + eax; /* 0x1205503F: lea ecx, [edx + eax] */
    eax = MEM32(edi + 0xCC); /* 0x12055042: mov eax, dword ptr [edi + 0xcc] */
    eax = MEM32(eax + 0x24C); /* 0x12055048: mov eax, dword ptr [eax + 0x24c] */
    eax = MEM32(eax + ecx * 4); /* 0x1205504E: mov eax, dword ptr [eax + ecx*4] */
    ecx = MEM32(ebx + 0x30); /* 0x12055051: mov ecx, dword ptr [ebx + 0x30] */
    MEM32(ebx + 0x78) = eax; /* 0x12055054: mov dword ptr [ebx + 0x78], eax */
    /* cmp ecx, esi */ /* 0x12055057: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1205505F; /* 0x12055059: jne 0x1205505f */
L_1205505B:
    eax = esi; /* 0x1205505B: mov eax, esi */
    goto L_1205507C; /* 0x1205505D: jmp 0x1205507c */
L_1205505F:
    eax = MEM32(ebx + 0x34); /* 0x1205505F: mov eax, dword ptr [ebx + 0x34] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)3); /* 0x12055062: imul ecx, ecx, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x12055065: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x12055066: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)MEM32(ebp + 0xC); /* 0x12055068: div dword ptr [ebp + 0xc] */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    eax = MEM32(edi + 0xCC); /* 0x1205506B: mov eax, dword ptr [edi + 0xcc] */
    eax = MEM32(eax + 0x24C); /* 0x12055071: mov eax, dword ptr [eax + 0x24c] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x12055077: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(eax + edx * 4); /* 0x12055079: mov eax, dword ptr [eax + edx*4] */
L_1205507C:
    ecx = MEM32(ebx + 0x38); /* 0x1205507C: mov ecx, dword ptr [ebx + 0x38] */
    MEM32(ebx + 0x64) = eax; /* 0x1205507F: mov dword ptr [ebx + 0x64], eax */
    /* cmp ecx, esi */ /* 0x12055082: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120550AC; /* 0x12055084: je 0x120550ac */
L_12055086:
    eax = MEM32(edi + 0xCC); /* 0x12055086: mov eax, dword ptr [edi + 0xcc] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)3); /* 0x1205508C: imul ecx, ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx + 0x3C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebx + 0x3C); /* 0x1205508F: add ecx, dword ptr [ebx + 0x3c] */
    _flag_k = FK_ADD;
    eax = MEM32(eax + 0x24C); /* 0x12055092: mov eax, dword ptr [eax + 0x24c] */
    esi = MEM32(eax + ecx * 4); /* 0x12055098: mov esi, dword ptr [eax + ecx*4] */
    goto L_120550AC; /* 0x1205509B: jmp 0x120550ac */
L_1205509D:
    MEM32(ebx + 0x30) = esi; /* 0x1205509D: mov dword ptr [ebx + 0x30], esi */
    MEM32(ebx + 0x38) = esi; /* 0x120550A0: mov dword ptr [ebx + 0x38], esi */
    MEM32(ebx + 0x64) = esi; /* 0x120550A3: mov dword ptr [ebx + 0x64], esi */
    MEM32(ebx + 0x78) = esi; /* 0x120550A6: mov dword ptr [ebx + 0x78], esi */
    MEM32(ebx + 0x74) = esi; /* 0x120550A9: mov dword ptr [ebx + 0x74], esi */
L_120550AC:
    edi = POP32_VAL(esp); /* 0x120550AC: pop edi */
    MEM32(ebx + 0x68) = esi; /* 0x120550AD: mov dword ptr [ebx + 0x68], esi */
    esi = POP32_VAL(esp); /* 0x120550B0: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120550B1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x120550B3: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120550B4: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x120550B5: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_120550BD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120550BDu);

L_120550BD:
    edi = edi; /* 0x120550BD: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120550BF: push ebp */
    ebp = esp; /* 0x120550C0: mov ebp, esp */
    PUSH32(esp, esi); /* 0x120550C2: push esi */
    esi = MEM32(ebp + 0x8); /* 0x120550C3: mov esi, dword ptr [ebp + 8] */
    /* cmp MEM32(esi + 0x10), 0xFFFFFFFFu */ /* 0x120550C6: cmp dword ptr [esi + 0x10], -1 */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x120550CA: push edi */
    edi = ecx; /* 0x120550CB: mov edi, ecx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1205510C; /* 0x120550CD: jne 0x1205510c */
L_120550CF:
    edx = (uint32_t)MEM16(esi + 0x94); /* 0x120550CF: movzx edx, word ptr [esi + 0x94] */
    eax = MEM32(edi + 0x144); /* 0x120550D6: mov eax, dword ptr [edi + 0x144] */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x14u); /* 0x120550DC: imul edx, edx, 0x14 */
    ecx = MEM32(esi); /* 0x120550DF: mov ecx, dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x120550E1: add eax, edx */
    _flag_k = FK_ADD;
    edx = MEM32(eax + 0x8); /* 0x120550E3: mov edx, dword ptr [eax + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax + 0x4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(eax + 0x4); /* 0x120550E6: add edx, dword ptr [eax + 4] */
    _flag_k = FK_ADD;
    eax = MEM32(edi + 0x128); /* 0x120550E9: mov eax, dword ptr [edi + 0x128] */
    MEM32(eax + ecx * 4) = edx; /* 0x120550EF: mov dword ptr [eax + ecx*4], edx */
    eax = MEM32(esi + 0x4); /* 0x120550F2: mov eax, dword ptr [esi + 4] */
    edx = MEM32(esi); /* 0x120550F5: mov edx, dword ptr [esi] */
    ecx = MEM32(edi + 0x12C); /* 0x120550F7: mov ecx, dword ptr [edi + 0x12c] */
    eax = MEM32(eax * 4 + 0x12006070); /* 0x120550FD: mov eax, dword ptr [eax*4 + 0x12006070] */
    MEM32(ecx + edx * 4) = eax; /* 0x12055104: mov dword ptr [ecx + edx*4], eax */
    goto L_120551A2; /* 0x12055107: jmp 0x120551a2 */
L_1205510C:
    eax = MEM32(esi + 0x4); /* 0x1205510C: mov eax, dword ptr [esi + 4] */
    eax = MEM32(eax * 4 + 0x12006070); /* 0x1205510F: mov eax, dword ptr [eax*4 + 0x12006070] */
    edx = MEM32(esi); /* 0x12055116: mov edx, dword ptr [esi] */
    ecx = MEM32(edi + 0x12C); /* 0x12055118: mov ecx, dword ptr [edi + 0x12c] */
    MEM32(ecx + edx * 4) = eax; /* 0x1205511E: mov dword ptr [ecx + edx*4], eax */
    eax = MEM32(esi + 0x14); /* 0x12055121: mov eax, dword ptr [esi + 0x14] */
    eax = MEM32(eax * 4 + 0x1200607C); /* 0x12055124: mov eax, dword ptr [eax*4 + 0x1200607c] */
    edx = MEM32(esi + 0x10); /* 0x1205512B: mov edx, dword ptr [esi + 0x10] */
    ecx = MEM32(edi + 0x12C); /* 0x1205512E: mov ecx, dword ptr [edi + 0x12c] */
    MEM32(ecx + edx * 4) = eax; /* 0x12055134: mov dword ptr [ecx + edx*4], eax */
    ecx = (uint32_t)MEM16(esi + 0x94); /* 0x12055137: movzx ecx, word ptr [esi + 0x94] */
    eax = MEM32(edi + 0x144); /* 0x1205513E: mov eax, dword ptr [edi + 0x144] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x14u); /* 0x12055144: imul ecx, ecx, 0x14 */
    edx = MEM32(eax + ecx + 0x8); /* 0x12055147: mov edx, dword ptr [eax + ecx + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax + ecx + 0x4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(eax + ecx + 0x4); /* 0x1205514B: add edx, dword ptr [eax + ecx + 4] */
    _flag_k = FK_ADD;
    eax = MEM32(edi + 0x128); /* 0x1205514F: mov eax, dword ptr [edi + 0x128] */
    ecx = MEM32(esi); /* 0x12055155: mov ecx, dword ptr [esi] */
    MEM32(eax + ecx * 4) = edx; /* 0x12055157: mov dword ptr [eax + ecx*4], edx */
    SET_LO16(eax, MEM16(esi + 0x94)); /* 0x1205515A: mov ax, word ptr [esi + 0x94] */
    /* cmp LO16(eax), MEM16(esi + 0x96) */ /* 0x12055161: cmp ax, word ptr [esi + 0x96] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(esi + 0x96)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1205517E; /* 0x12055168: jne 0x1205517e */
L_1205516A:
    eax = MEM32(esi); /* 0x1205516A: mov eax, dword ptr [esi] */
    edx = MEM32(edi + 0x128); /* 0x1205516C: mov edx, dword ptr [edi + 0x128] */
    ecx = MEM32(edx + eax * 4); /* 0x12055172: mov ecx, dword ptr [edx + eax*4] */
    eax = MEM32(esi + 0x10); /* 0x12055175: mov eax, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x12055178: inc ecx */
    _flag_k = FK_INC;
    MEM32(edx + eax * 4) = ecx; /* 0x12055179: mov dword ptr [edx + eax*4], ecx */
    goto L_120551A2; /* 0x1205517C: jmp 0x120551a2 */
L_1205517E:
    ecx = (uint32_t)MEM16(esi + 0x96); /* 0x1205517E: movzx ecx, word ptr [esi + 0x96] */
    eax = MEM32(edi + 0x144); /* 0x12055185: mov eax, dword ptr [edi + 0x144] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x14u); /* 0x1205518B: imul ecx, ecx, 0x14 */
    edx = MEM32(eax + ecx + 0x8); /* 0x1205518E: mov edx, dword ptr [eax + ecx + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax + ecx + 0x4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(eax + ecx + 0x4); /* 0x12055192: add edx, dword ptr [eax + ecx + 4] */
    _flag_k = FK_ADD;
    ecx = MEM32(esi + 0x10); /* 0x12055196: mov ecx, dword ptr [esi + 0x10] */
    eax = MEM32(edi + 0x128); /* 0x12055199: mov eax, dword ptr [edi + 0x128] */
    MEM32(eax + ecx * 4) = edx; /* 0x1205519F: mov dword ptr [eax + ecx*4], edx */
L_120551A2:
    edi = POP32_VAL(esp); /* 0x120551A2: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120551A3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x120551A5: pop esi */
    ebp = POP32_VAL(esp); /* 0x120551A6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x120551A7: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_120551AF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120551AFu);

L_120551AF:
    edi = edi; /* 0x120551AF: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120551B1: push ebp */
    ebp = esp; /* 0x120551B2: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x120551B4: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x120551B7: push esi */
    edx = (uint32_t)((int32_t)edx * (int32_t)0xCu); /* 0x120551B8: imul edx, edx, 0xc */
    PUSH32(esp, 3); /* 0x120551BB: push 3 */
    esi = POP32_VAL(esp); /* 0x120551BD: pop esi */
L_120551BE:
    eax = MEM32(ecx + 0x24C); /* 0x120551BE: mov eax, dword ptr [ecx + 0x24c] */
    _flag_a = (uint32_t)((MEM32(edx + eax) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(edx + eax) | 0xFFFFFFFFu));
    MEM32(edx + eax) = MEM32(edx + eax) | 0xFFFFFFFFu; /* 0x120551C4: or dword ptr [edx + eax], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx + 0x250); /* 0x120551C8: mov eax, dword ptr [ecx + 0x250] */
    _flag_a = (uint32_t)((MEM32(edx + eax) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(edx + eax) | 0xFFFFFFFFu));
    MEM32(edx + eax) = MEM32(edx + eax) | 0xFFFFFFFFu; /* 0x120551CE: or dword ptr [edx + eax], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x120551D2: add edx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x120551D5: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120551BE; /* 0x120551D6: jne 0x120551be */
L_120551D8:
    esi = POP32_VAL(esp); /* 0x120551D8: pop esi */
    ebp = POP32_VAL(esp); /* 0x120551D9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x120551DA: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_120551E2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120551E2u);

L_120551E2:
    edi = edi; /* 0x120551E2: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120551E4: push ebp */
    ebp = esp; /* 0x120551E5: mov ebp, esp */
    edx = ecx; /* 0x120551E7: mov edx, ecx */
    ecx = MEM32(ebp + 0xC); /* 0x120551E9: mov ecx, dword ptr [ebp + 0xc] */
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x120551EC: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12055242; /* 0x120551EF: je 0x12055242 */
L_120551F1:
    PUSH32(esp, ebx); /* 0x120551F1: push ebx */
    ebx = MEM32(edx + 0xDC); /* 0x120551F2: mov ebx, dword ptr [edx + 0xdc] */
    PUSH32(esp, esi); /* 0x120551F8: push esi */
    PUSH32(esp, edi); /* 0x120551F9: push edi */
    edi = MEM32(ebp + 0x8); /* 0x120551FA: mov edi, dword ptr [ebp + 8] */
L_120551FD:
    esi = MEM32(ebx + edi * 4); /* 0x120551FD: mov esi, dword ptr [ebx + edi*4] */
    /* cmp esi, ecx */ /* 0x12055200: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1205520D; /* 0x12055202: je 0x1205520d */
L_12055204:
    edi = esi; /* 0x12055204: mov edi, esi */
    /* cmp esi, MEM32(ebp + 0x8) */ /* 0x12055206: cmp esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_120551FD; /* 0x12055209: jne 0x120551fd */
L_1205520B:
    goto L_1205521C; /* 0x1205520B: jmp 0x1205521c */
L_1205520D:
    eax = MEM32(ebx + esi * 4); /* 0x1205520D: mov eax, dword ptr [ebx + esi*4] */
    MEM32(ebx + edi * 4) = eax; /* 0x12055210: mov dword ptr [ebx + edi*4], eax */
    eax = MEM32(edx + 0xDC); /* 0x12055213: mov eax, dword ptr [edx + 0xdc] */
    MEM32(eax + esi * 4) = esi; /* 0x12055219: mov dword ptr [eax + esi*4], esi */
L_1205521C:
    eax = MEM32(edx + 0x154); /* 0x1205521C: mov eax, dword ptr [edx + 0x154] */
    MEM8(ecx + eax) = (uint8_t)(1); /* 0x12055222: mov byte ptr [ecx + eax], 1 */
    ecx = (uint32_t)MEM16(ebp + 0x10); /* 0x12055226: movzx ecx, word ptr [ebp + 0x10] */
    eax = MEM32(edx + 0x144); /* 0x1205522A: mov eax, dword ptr [edx + 0x144] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x14u); /* 0x12055230: imul ecx, ecx, 0x14 */
    edi = POP32_VAL(esp); /* 0x12055233: pop edi */
    eax = ecx + eax + 0x10; /* 0x12055234: lea eax, [ecx + eax + 0x10] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) - 1; /* 0x12055238: dec dword ptr [eax] */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(MEM32(edx + 0xF8)); _flag_b = (uint32_t)(1);
    MEM32(edx + 0xF8) = MEM32(edx + 0xF8) - 1; /* 0x1205523A: dec dword ptr [edx + 0xf8] */
    _flag_k = FK_DEC;
    esi = POP32_VAL(esp); /* 0x12055240: pop esi */
    ebx = POP32_VAL(esp); /* 0x12055241: pop ebx */
L_12055242:
    ebp = POP32_VAL(esp); /* 0x12055242: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x12055243: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1205524B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1205524Bu);

L_1205524B:
    edi = edi; /* 0x1205524B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1205524D: push ebp */
    ebp = esp; /* 0x1205524E: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x12055250: push ebx */
    PUSH32(esp, esi); /* 0x12055251: push esi */
    ebx = ecx; /* 0x12055252: mov ebx, ecx */
    eax = MEM32(ebx + 0x13C); /* 0x12055254: mov eax, dword ptr [ebx + 0x13c] */
    esi = MEM32(ebx + 0xC8); /* 0x1205525A: mov esi, dword ptr [ebx + 0xc8] */
    ecx = MEM32(ebp + 0xC); /* 0x12055260: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x12055263: push edi */
    edi = (uint32_t)MEM16(ebp + 0x10); /* 0x12055264: movzx edi, word ptr [ebp + 0x10] */
    edx = MEM32(eax + edi * 4); /* 0x12055268: mov edx, dword ptr [eax + edi*4] */
    eax = MEM32(ebx + 0x134); /* 0x1205526B: mov eax, dword ptr [ebx + 0x134] */
    esi = (uint32_t)((int32_t)esi * (int32_t)edx); /* 0x12055271: imul esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebx + 0x130));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebx + 0x130); /* 0x12055274: add esi, dword ptr [ebx + 0x130] */
    _flag_k = FK_ADD;
    MEM32(eax + edx * 4) = ecx; /* 0x1205527A: mov dword ptr [eax + edx*4], ecx */
    eax = MEM32(ebx + 0xC8); /* 0x1205527D: mov eax, dword ptr [ebx + 0xc8] */
    PUSH32(esp, MEM32(ebx + 0xC8)); /* 0x12055283: push dword ptr [ebx + 0xc8] */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx); /* 0x12055289: imul eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0x8); /* 0x1205528C: add eax, dword ptr [ebp + 8] */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1205528F: push eax */
    PUSH32(esp, esi); /* 0x12055290: push esi */
    RECOMP_CALL(sub_121BF440); /* 0x12055291: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x13C); /* 0x12055296: mov eax, dword ptr [ebx + 0x13c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1205529C: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = eax + edi * 4; /* 0x1205529F: lea eax, [eax + edi*4] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) - 1; /* 0x120552A2: dec dword ptr [eax] */
    _flag_k = FK_DEC;
    edi = POP32_VAL(esp); /* 0x120552A4: pop edi */
    esi = POP32_VAL(esp); /* 0x120552A5: pop esi */
    ebx = POP32_VAL(esp); /* 0x120552A6: pop ebx */
    ebp = POP32_VAL(esp); /* 0x120552A7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x120552A8: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_120552B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120552B0u);

L_120552B0:
    edi = edi; /* 0x120552B0: mov edi, edi */
    PUSH32(esp, esi); /* 0x120552B2: push esi */
    esi = ecx; /* 0x120552B3: mov esi, ecx */
    ecx = MEM32(esi + 0x20); /* 0x120552B5: mov ecx, dword ptr [esi + 0x20] */
    MEM32(esi) = 0x12006230u; /* 0x120552B8: mov dword ptr [esi], 0x12006230 */
    /* test ecx, ecx */ /* 0x120552BE: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120552CC; /* 0x120552C0: je 0x120552cc */
L_120552C2:
    eax = MEM32(ecx); /* 0x120552C2: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120552C4: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x120552C5: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x20)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x20) = MEM32(esi + 0x20) & 0; /* 0x120552C8: and dword ptr [esi + 0x20], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_120552CC:
    PUSH32(esp, MEM32(esi + 0x98)); /* 0x120552CC: push dword ptr [esi + 0x98] */
    RECOMP_CALL(sub_121BF388); /* 0x120552D2: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x24)); /* 0x120552D7: push dword ptr [esi + 0x24] */
    RECOMP_CALL(sub_121BF388); /* 0x120552DA: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    esi = MEM32(esi + 0x8); /* 0x120552DF: mov esi, dword ptr [esi + 8] */
    ecx = POP32_VAL(esp); /* 0x120552E2: pop ecx */
    ecx = POP32_VAL(esp); /* 0x120552E3: pop ecx */
    /* test esi, esi */ /* 0x120552E4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120552F6; /* 0x120552E6: je 0x120552f6 */
L_120552E8:
    ecx = esi; /* 0x120552E8: mov ecx, esi */
    RECOMP_CALL(sub_1204BCA0); /* 0x120552EA: call 0x1204bca0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x120552EF: push esi */
    RECOMP_CALL(sub_121BF388); /* 0x120552F0: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120552F5: pop ecx */
L_120552F6:
    esi = POP32_VAL(esp); /* 0x120552F6: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x120552F7: ret  */
    RECOMP_REGS_OUT();
}

void sub_120552FD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120552FDu);

L_120552FD:
    edi = edi; /* 0x120552FD: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120552FF: push ebp */
    ebp = esp; /* 0x12055300: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x12055302: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) + 1; /* 0x12055305: inc dword ptr [eax + 4] */
    _flag_k = FK_INC;
    eax = MEM32(eax + 0x4); /* 0x12055308: mov eax, dword ptr [eax + 4] */
    ebp = POP32_VAL(esp); /* 0x1205530B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1205530C: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12055314(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12055314u);

L_12055314:
    edi = edi; /* 0x12055314: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12055316: push ebp */
    ebp = esp; /* 0x12055317: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x12055319: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x8); /* 0x1205531C: mov eax, dword ptr [eax + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1205531F: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x12055322: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x12055324: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x12055325: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x12055328: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x12055329: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_12055331(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12055331u);

L_12055331:
    edi = edi; /* 0x12055331: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12055333: push ebp */
    ebp = esp; /* 0x12055334: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x12055336: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x3C); /* 0x12055339: mov eax, dword ptr [eax + 0x3c] */
    ebp = POP32_VAL(esp); /* 0x1205533C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1205533D: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12055345(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12055345u);

L_12055345:
    edi = edi; /* 0x12055345: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12055347: push ebp */
    ebp = esp; /* 0x12055348: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1205534A: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x48); /* 0x1205534D: mov eax, dword ptr [eax + 0x48] */
    ebp = POP32_VAL(esp); /* 0x12055350: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12055351: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12055359(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12055359u);

L_12055359:
    edi = edi; /* 0x12055359: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1205535B: push ebp */
    ebp = esp; /* 0x1205535C: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1205535E: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x8); /* 0x12055361: mov eax, dword ptr [eax + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12055364: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x12055367: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x12055369: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x1C)); /* 0x1205536A: call dword ptr [ecx + 0x1c] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1205536D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1205536E: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_12055376(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12055376u);

L_12055376:
    edi = edi; /* 0x12055376: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12055378: push ebp */
    ebp = esp; /* 0x12055379: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1205537B: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x8); /* 0x1205537E: mov eax, dword ptr [eax + 8] */
    ecx = MEM32(eax); /* 0x12055381: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x12055383: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x20)); /* 0x12055384: call dword ptr [ecx + 0x20] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x12055387: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12055388: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12055390(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12055390u);

L_12055390:
    edi = edi; /* 0x12055390: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12055392: push ebp */
    ebp = esp; /* 0x12055393: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x12055395: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x8); /* 0x12055398: mov eax, dword ptr [eax + 8] */
    ecx = MEM32(eax); /* 0x1205539B: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1205539D: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x24)); /* 0x1205539E: call dword ptr [ecx + 0x24] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x120553A1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x120553A2: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_120553AA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120553AAu);

L_120553AA:
    edi = edi; /* 0x120553AA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120553AC: push ebp */
    ebp = esp; /* 0x120553AD: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x120553AF: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x8); /* 0x120553B2: mov eax, dword ptr [eax + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120553B5: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x120553B8: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x120553BA: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x28)); /* 0x120553BB: call dword ptr [ecx + 0x28] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x120553BE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x120553BF: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_120553C7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120553C7u);

L_120553C7:
    edi = edi; /* 0x120553C7: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120553C9: push ebp */
    ebp = esp; /* 0x120553CA: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x120553CC: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x8); /* 0x120553CF: mov eax, dword ptr [eax + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120553D2: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x120553D5: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x120553D7: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x34)); /* 0x120553D8: call dword ptr [ecx + 0x34] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x120553DB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x120553DC: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_120553E4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120553E4u);

L_120553E4:
    edi = edi; /* 0x120553E4: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120553E6: push ebp */
    ebp = esp; /* 0x120553E7: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x120553E9: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x8); /* 0x120553EC: mov eax, dword ptr [eax + 8] */
    ecx = MEM32(eax); /* 0x120553EF: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x120553F1: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x40)); /* 0x120553F2: call dword ptr [ecx + 0x40] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x120553F5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x120553F6: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_120553FE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120553FEu);

L_120553FE:
    edi = edi; /* 0x120553FE: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12055400: push ebp */
    ebp = esp; /* 0x12055401: mov ebp, esp */
    /* test MEM8(ebp + 0xC), 0x10u */ /* 0x12055403: test byte ptr [ebp + 0xc], 0x10 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1205541D; /* 0x12055407: je 0x1205541d */
L_12055409:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x12055409: push dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x8); /* 0x1205540C: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x8); /* 0x1205540F: mov eax, dword ptr [eax + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12055412: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x12055415: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x12055417: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x44)); /* 0x12055418: call dword ptr [ecx + 0x44] */
    RECOMP_FLAGS_IN();
    goto L_12055422; /* 0x1205541B: jmp 0x12055422 */
L_1205541D:
    eax = 0x88760B54u; /* 0x1205541D: mov eax, 0x88760b54 */
L_12055422:
    ebp = POP32_VAL(esp); /* 0x12055422: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x12055423: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1205542B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1205542Bu);

L_1205542B:
    edi = edi; /* 0x1205542B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1205542D: push ebp */
    ebp = esp; /* 0x1205542E: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x12055430: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x8); /* 0x12055433: mov eax, dword ptr [eax + 8] */
    ecx = MEM32(eax); /* 0x12055436: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x12055438: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x48)); /* 0x12055439: call dword ptr [ecx + 0x48] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1205543C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1205543D: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12055445(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12055445u);

L_12055445:
    edi = edi; /* 0x12055445: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12055447: push ebp */
    ebp = esp; /* 0x12055448: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1205544A: push dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x8); /* 0x1205544D: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x8); /* 0x12055450: mov eax, dword ptr [eax + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12055453: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x12055456: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x12055458: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x50)); /* 0x12055459: call dword ptr [ecx + 0x50] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1205545C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1205545D: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_12055465(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12055465u);

L_12055465:
    edi = edi; /* 0x12055465: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12055467: push ebp */
    ebp = esp; /* 0x12055468: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1205546A: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x8); /* 0x1205546D: mov eax, dword ptr [eax + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12055470: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x12055473: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x12055475: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x5C)); /* 0x12055476: call dword ptr [ecx + 0x5c] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x12055479: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1205547A: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_12055482(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12055482u);

L_12055482:
    edi = edi; /* 0x12055482: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12055484: push ebp */
    ebp = esp; /* 0x12055485: mov ebp, esp */
    PUSH32(esp, esi); /* 0x12055487: push esi */
    esi = MEM32(ebp + 0x10); /* 0x12055488: mov esi, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x1205548B: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1205548C: mov edi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x1205548F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12055499; /* 0x12055491: jne 0x12055499 */
L_12055493:
    esi = MEM32(edi + 0x8); /* 0x12055493: mov esi, dword ptr [edi + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0xCu; /* 0x12055496: add esi, 0xc */
    _flag_k = FK_ADD;
L_12055499:
    PUSH32(esp, 0); /* 0x12055499: push 0 */
    PUSH32(esp, esi); /* 0x1205549B: push esi */
    RECOMP_CALL(sub_1204B4B3); /* 0x1205549C: call 0x1204b4b3 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120554A1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120554AC; /* 0x120554A3: jne 0x120554ac */
L_120554A5:
    eax = 0x8876086Cu; /* 0x120554A5: mov eax, 0x8876086c */
    goto L_1205550E; /* 0x120554AA: jmp 0x1205550e */
L_120554AC:
    /* test MEM32(ebp + 0xC), 0xFFFE2000u */ /* 0x120554AC: test dword ptr [ebp + 0xc], 0xfffe2000 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0xFFFE2000u);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120554A5; /* 0x120554B3: jne 0x120554a5 */
L_120554B5:
    eax = MEM32(ebp + 0xC); /* 0x120554B5: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1000u);
    eax = eax & 0x1000u; /* 0x120554B8: and eax, 0x1000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x8) = eax; /* 0x120554BD: mov dword ptr [ebp + 8], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_120554D8; /* 0x120554C0: je 0x120554d8 */
L_120554C2:
    eax = MEM32(edi + 0x8); /* 0x120554C2: mov eax, dword ptr [edi + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x120554C5: add eax, 0xc */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x120554C8: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120554C9: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1204BF67); /* 0x120554CC: call 0x1204bf67 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120554D1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_120554A5; /* 0x120554D3: je 0x120554a5 */
L_120554D5:
    eax = MEM32(ebp + 0x8); /* 0x120554D5: mov eax, dword ptr [ebp + 8] */
L_120554D8:
    ecx = MEM32(ebp + 0x14); /* 0x120554D8: mov ecx, dword ptr [ebp + 0x14] */
    /* test eax, eax */ /* 0x120554DB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120554EA; /* 0x120554DD: je 0x120554ea */
L_120554DF:
    eax = MEM32(edi + 0x8); /* 0x120554DF: mov eax, dword ptr [edi + 8] */
    /* cmp ecx, MEM32(eax + 0x230) */ /* 0x120554E2: cmp ecx, dword ptr [eax + 0x230] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x230));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_120554A5; /* 0x120554E8: jne 0x120554a5 */
L_120554EA:
    eax = MEM32(edi + 0x8); /* 0x120554EA: mov eax, dword ptr [edi + 8] */
    /* test MEM8(eax + 0x214), 0x40u */ /* 0x120554ED: test byte ptr [eax + 0x214], 0x40 */
    _flag_a = (uint32_t)(MEM8(eax + 0x214)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120554A5; /* 0x120554F4: jne 0x120554a5 */
L_120554F6:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120554F6: push dword ptr [ebp + 0x18] */
    eax = MEM32(edi); /* 0x120554F9: mov eax, dword ptr [edi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120554FB: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edx); /* 0x120554FD: push edx */
    PUSH32(esp, edx); /* 0x120554FE: push edx */
    PUSH32(esp, edx); /* 0x120554FF: push edx */
    PUSH32(esp, edx); /* 0x12055500: push edx */
    PUSH32(esp, edx); /* 0x12055501: push edx */
    PUSH32(esp, ecx); /* 0x12055502: push ecx */
    PUSH32(esp, esi); /* 0x12055503: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12055504: push dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x12055507: push edi */
    RECOMP_ICALL(MEM32(eax + 0xA0)); /* 0x12055508: call dword ptr [eax + 0xa0] */
    RECOMP_FLAGS_IN();
L_1205550E:
    edi = POP32_VAL(esp); /* 0x1205550E: pop edi */
    esi = POP32_VAL(esp); /* 0x1205550F: pop esi */
    ebp = POP32_VAL(esp); /* 0x12055510: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x12055511: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_12055519(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12055519u);

L_12055519:
    edi = edi; /* 0x12055519: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1205551B: push ebp */
    ebp = esp; /* 0x1205551C: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1205551E: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x38); /* 0x12055521: mov eax, dword ptr [eax + 0x38] */
    ebp = POP32_VAL(esp); /* 0x12055524: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12055525: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1205552D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1205552Du);

L_1205552D:
    edi = edi; /* 0x1205552D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1205552F: push ebp */
    ebp = esp; /* 0x12055530: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x12055532: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x34); /* 0x12055535: mov eax, dword ptr [eax + 0x34] */
    ebp = POP32_VAL(esp); /* 0x12055538: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12055539: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12055541(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12055541u);

L_12055541:
    edi = edi; /* 0x12055541: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12055543: push ebp */
    ebp = esp; /* 0x12055544: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x12055546: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x44); /* 0x12055549: mov eax, dword ptr [eax + 0x44] */
    ebp = POP32_VAL(esp); /* 0x1205554C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1205554D: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12055555(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12055555u);

L_12055555:
    edi = edi; /* 0x12055555: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12055557: push ebp */
    ebp = esp; /* 0x12055558: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x238u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x238u; /* 0x1205555A: sub esp, 0x238 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x12055560: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x12055565: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x12055567: mov dword ptr [ebp - 4], eax */
    edx = MEM32(ebp + 0xC); /* 0x1205556A: mov edx, dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x10); /* 0x1205556D: mov eax, dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + 0x14); /* 0x12055570: mov ecx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x210))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x210)) = MEM32(ebp + (-0x210)) & 0; /* 0x12055573: and dword ptr [ebp - 0x210], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1205557A: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1205557B: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1205557E: push esi */
    esi = MEM32(ebx + 0x48); /* 0x1205557F: mov esi, dword ptr [ebx + 0x48] */
    PUSH32(esp, edi); /* 0x12055582: push edi */
    MEM32(ebp + (-0x228)) = esi; /* 0x12055583: mov dword ptr [ebp - 0x228], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x12055589: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x1205558B: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x22C)) = edx; /* 0x1205558E: mov dword ptr [ebp - 0x22c], edx */
    MEM32(ebp + (-0x238)) = eax; /* 0x12055594: mov dword ptr [ebp - 0x238], eax */
    MEM32(ebp + (-0x224)) = ecx; /* 0x1205559A: mov dword ptr [ebp - 0x224], ecx */
    MEM32(ebp + (-0x21C)) = esi; /* 0x120555A0: mov dword ptr [ebp - 0x21c], esi */
    MEM32(ebp + (-0x218)) = esi; /* 0x120555A6: mov dword ptr [ebp - 0x218], esi */
    MEM32(ebp + (-0x220)) = esi; /* 0x120555AC: mov dword ptr [ebp - 0x220], esi */
    /* test edx, edx */ /* 0x120555B2: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12055715; /* 0x120555B4: je 0x12055715 */
L_120555BA:
    /* test eax, eax */ /* 0x120555BA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120555CB; /* 0x120555BC: jne 0x120555cb */
L_120555BE:
    /* test ecx, ecx */ /* 0x120555BE: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120555CB; /* 0x120555C0: jne 0x120555cb */
L_120555C2:
    /* cmp MEM32(ebp + 0x18), esi */ /* 0x120555C2: cmp dword ptr [ebp + 0x18], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_12055715; /* 0x120555C5: ja 0x12055715 */
L_120555CB:
    eax = MEM32(ebx); /* 0x120555CB: mov eax, dword ptr [ebx] */
    ecx = ebp + (-0x210); /* 0x120555CD: lea ecx, [ebp - 0x210] */
    PUSH32(esp, ecx); /* 0x120555D3: push ecx */
    ecx = ebp + (-0x218); /* 0x120555D4: lea ecx, [ebp - 0x218] */
    PUSH32(esp, ecx); /* 0x120555DA: push ecx */
    ecx = ebp + (-0x230); /* 0x120555DB: lea ecx, [ebp - 0x230] */
    PUSH32(esp, ecx); /* 0x120555E1: push ecx */
    ecx = ebp + (-0x21C); /* 0x120555E2: lea ecx, [ebp - 0x21c] */
    PUSH32(esp, ecx); /* 0x120555E8: push ecx */
    PUSH32(esp, ebx); /* 0x120555E9: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x9C)); /* 0x120555EA: call dword ptr [eax + 0x9c] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120555F0: mov esi, eax */
    /* test esi, esi */ /* 0x120555F2: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1205571A; /* 0x120555F4: js 0x1205571a */
L_120555FA:
    eax = ebp + (-0x108); /* 0x120555FA: lea eax, [ebp - 0x108] */
    PUSH32(esp, eax); /* 0x12055600: push eax */
    esi = 0x104u; /* 0x12055601: mov esi, 0x104 */
    PUSH32(esp, esi); /* 0x12055606: push esi */
    RECOMP_ICALL(MEM32(0x120010E0)); /* 0x12055607: call dword ptr [0x120010e0] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1205560D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1205570E; /* 0x1205560F: je 0x1205570e */
L_12055615:
    /* cmp eax, esi */ /* 0x12055615: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1205570E; /* 0x12055617: ja 0x1205570e */
L_1205561D:
    eax = ebp + (-0x20C); /* 0x1205561D: lea eax, [ebp - 0x20c] */
    PUSH32(esp, eax); /* 0x12055623: push eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x12055624: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x12055626: push esi */
    PUSH32(esp, 0x120062D8u); /* 0x12055627: push 0x120062d8 */
    eax = ebp + (-0x108); /* 0x1205562C: lea eax, [ebp - 0x108] */
    PUSH32(esp, eax); /* 0x12055632: push eax */
    RECOMP_ICALL(MEM32(0x120011A8)); /* 0x12055633: call dword ptr [0x120011a8] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12055639: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1205570E; /* 0x1205563B: je 0x1205570e */
L_12055641:
    PUSH32(esp, MEM32(ebp + (-0x230))); /* 0x12055641: push dword ptr [ebp - 0x230] */
    eax = ebp + (-0x20C); /* 0x12055647: lea eax, [ebp - 0x20c] */
    PUSH32(esp, MEM32(ebp + (-0x21C))); /* 0x1205564D: push dword ptr [ebp - 0x21c] */
    MEM32(ebp + (-0x220)) = 1; /* 0x12055653: mov dword ptr [ebp - 0x220], 1 */
    PUSH32(esp, esi); /* 0x1205565D: push esi */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1205565E: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + (-0x224))); /* 0x12055661: push dword ptr [ebp - 0x224] */
    PUSH32(esp, MEM32(ebp + (-0x238))); /* 0x12055667: push dword ptr [ebp - 0x238] */
    PUSH32(esp, MEM32(ebp + (-0x218))); /* 0x1205566D: push dword ptr [ebp - 0x218] */
    PUSH32(esp, MEM32(ebp + (-0x210))); /* 0x12055673: push dword ptr [ebp - 0x210] */
    PUSH32(esp, esi); /* 0x12055679: push esi */
    PUSH32(esp, eax); /* 0x1205567A: push eax */
    RECOMP_CALL(sub_1207BDAA); /* 0x1205567B: call 0x1207bdaa */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x12055680: mov esi, eax */
    /* test esi, esi */ /* 0x12055682: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1205571A; /* 0x12055684: js 0x1205571a */
L_1205568A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1205568A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1205568C: push eax */
    PUSH32(esp, 0x80u); /* 0x1205568D: push 0x80 */
    PUSH32(esp, 3); /* 0x12055692: push 3 */
    PUSH32(esp, eax); /* 0x12055694: push eax */
    PUSH32(esp, eax); /* 0x12055695: push eax */
    PUSH32(esp, 0x80000000u); /* 0x12055696: push 0x80000000 */
    eax = ebp + (-0x20C); /* 0x1205569B: lea eax, [ebp - 0x20c] */
    PUSH32(esp, eax); /* 0x120556A1: push eax */
    RECOMP_ICALL(MEM32(0x120010E8)); /* 0x120556A2: call dword ptr [0x120010e8] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x120556A8: mov edi, eax */
    /* cmp edi, 0xFFFFFFFFu */ /* 0x120556AA: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120556EE; /* 0x120556AD: jne 0x120556ee */
L_120556AF:
    goto L_1205570E; /* 0x120556AF: jmp 0x1205570e */
L_120556B1:
    /* cmp MEM32(ebp + (-0x214)), 0 */ /* 0x120556B1: cmp dword ptr [ebp - 0x214], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x214))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1205571A; /* 0x120556B8: je 0x1205571a */
L_120556BA:
    ecx = MEM32(ebp + (-0x22C)); /* 0x120556BA: mov ecx, dword ptr [ebp - 0x22c] */
    eax = MEM32(ecx); /* 0x120556C0: mov eax, dword ptr [ecx] */
    edx = ebp + (-0x234); /* 0x120556C2: lea edx, [ebp - 0x234] */
    PUSH32(esp, edx); /* 0x120556C8: push edx */
    PUSH32(esp, MEM32(ebp + (-0x214))); /* 0x120556C9: push dword ptr [ebp - 0x214] */
    edx = ebp + (-0x108); /* 0x120556CF: lea edx, [ebp - 0x108] */
    PUSH32(esp, edx); /* 0x120556D5: push edx */
    PUSH32(esp, ecx); /* 0x120556D6: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x120556D7: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120556DA: mov esi, eax */
    /* test esi, esi */ /* 0x120556DC: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1205571A; /* 0x120556DE: js 0x1205571a */
L_120556E0:
    eax = MEM32(ebp + (-0x234)); /* 0x120556E0: mov eax, dword ptr [ebp - 0x234] */
    /* cmp eax, MEM32(ebp + (-0x214)) */ /* 0x120556E6: cmp eax, dword ptr [ebp - 0x214] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x214)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1205570E; /* 0x120556EC: jb 0x1205570e */
L_120556EE:
    PUSH32(esp, 0); /* 0x120556EE: push 0 */
    eax = ebp + (-0x214); /* 0x120556F0: lea eax, [ebp - 0x214] */
    PUSH32(esp, eax); /* 0x120556F6: push eax */
    PUSH32(esp, 0x104u); /* 0x120556F7: push 0x104 */
    eax = ebp + (-0x108); /* 0x120556FC: lea eax, [ebp - 0x108] */
    PUSH32(esp, eax); /* 0x12055702: push eax */
    PUSH32(esp, edi); /* 0x12055703: push edi */
    RECOMP_ICALL(MEM32(0x120010EC)); /* 0x12055704: call dword ptr [0x120010ec] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1205570A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120556B1; /* 0x1205570C: jne 0x120556b1 */
L_1205570E:
    esi = 0x80004005u; /* 0x1205570E: mov esi, 0x80004005 */
    goto L_1205571A; /* 0x12055713: jmp 0x1205571a */
L_12055715:
    esi = 0x8876086Cu; /* 0x12055715: mov esi, 0x8876086c */
L_1205571A:
    ecx = MEM32(ebp + (-0x210)); /* 0x1205571A: mov ecx, dword ptr [ebp - 0x210] */
    /* test ecx, ecx */ /* 0x12055720: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12055731; /* 0x12055722: je 0x12055731 */
L_12055724:
    eax = MEM32(ecx); /* 0x12055724: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x12055726: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x12055727: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x210))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x210)) = MEM32(ebp + (-0x210)) & 0; /* 0x1205572A: and dword ptr [ebp - 0x210], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_12055731:
    PUSH32(esp, MEM32(ebp + (-0x21C))); /* 0x12055731: push dword ptr [ebp - 0x21c] */
    RECOMP_CALL(sub_121BF388); /* 0x12055737: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x218))); /* 0x1205573C: push dword ptr [ebp - 0x218] */
    RECOMP_CALL(sub_121BF388); /* 0x12055742: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12055747: pop ecx */
    ecx = POP32_VAL(esp); /* 0x12055748: pop ecx */
    ecx = MEM32(ebp + (-0x228)); /* 0x12055749: mov ecx, dword ptr [ebp - 0x228] */
    /* cmp MEM32(ebx + 0x30), ecx */ /* 0x1205574F: cmp dword ptr [ebx + 0x30], ecx */
    _flag_a = (uint32_t)(MEM32(ebx + 0x30)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1205575B; /* 0x12055752: je 0x1205575b */
L_12055754:
    eax = MEM32(ebx); /* 0x12055754: mov eax, dword ptr [ebx] */
    PUSH32(esp, ecx); /* 0x12055756: push ecx */
    PUSH32(esp, ebx); /* 0x12055757: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x6C)); /* 0x12055758: call dword ptr [eax + 0x6c] */
    RECOMP_FLAGS_IN();
L_1205575B:
    /* cmp edi, 0xFFFFFFFFu */ /* 0x1205575B: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12055767; /* 0x1205575E: je 0x12055767 */
L_12055760:
    PUSH32(esp, edi); /* 0x12055760: push edi */
    RECOMP_ICALL(MEM32(0x120010F0)); /* 0x12055761: call dword ptr [0x120010f0] */
    RECOMP_FLAGS_IN();
L_12055767:
    /* cmp MEM32(ebp + (-0x220)), 0 */ /* 0x12055767: cmp dword ptr [ebp - 0x220], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x220))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1205577D; /* 0x1205576E: je 0x1205577d */
L_12055770:
    eax = ebp + (-0x20C); /* 0x12055770: lea eax, [ebp - 0x20c] */
    PUSH32(esp, eax); /* 0x12055776: push eax */
    RECOMP_ICALL(MEM32(0x120010F4)); /* 0x12055777: call dword ptr [0x120010f4] */
    RECOMP_FLAGS_IN();
L_1205577D:
    ecx = MEM32(ebp + (-0x4)); /* 0x1205577D: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x12055780: pop edi */
    eax = esi; /* 0x12055781: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x12055783: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x12055784: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x12055786: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x12055787: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1205578C: leave  */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x1205578D: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_12055795(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12055795u);

L_12055795:
    edi = edi; /* 0x12055795: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12055797: push ebp */
    ebp = esp; /* 0x12055798: mov ebp, esp */
    edx = MEM32(ebp + 0xC); /* 0x1205579A: mov edx, dword ptr [ebp + 0xc] */
    /* test edx, 0xC0BE2000u */ /* 0x1205579D: test edx, 0xc0be2000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xC0BE2000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120557AC; /* 0x120557A3: je 0x120557ac */
L_120557A5:
    eax = 0x8876086Cu; /* 0x120557A5: mov eax, 0x8876086c */
    goto L_12055807; /* 0x120557AA: jmp 0x12055807 */
L_120557AC:
    /* test LO8(edx), 1 */ /* 0x120557AC: test dl, 1 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120557A5; /* 0x120557AF: jne 0x120557a5 */
L_120557B1:
    /* test edx, 0x400u */ /* 0x120557B1: test edx, 0x400 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x400u);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120557A5; /* 0x120557B7: jne 0x120557a5 */
L_120557B9:
    PUSH32(esp, esi); /* 0x120557B9: push esi */
    PUSH32(esp, edi); /* 0x120557BA: push edi */
    edi = MEM32(ebp + 0x8); /* 0x120557BB: mov edi, dword ptr [ebp + 8] */
    eax = MEM32(edi + 0x8); /* 0x120557BE: mov eax, dword ptr [edi + 8] */
    esi = edx; /* 0x120557C1: mov esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x0001CFFFu);
    esi = esi & 0x0001CFFFu; /* 0x120557C3: and esi, 0x1cfff */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120557D9; /* 0x120557C9: je 0x120557d9 */
L_120557CB:
    /* test MEM8(eax + 0x214), 1 */ /* 0x120557CB: test byte ptr [eax + 0x214], 1 */
    _flag_a = (uint32_t)(MEM8(eax + 0x214)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_120557DF; /* 0x120557D2: je 0x120557df */
L_120557D4:
    _flag_a = (uint32_t)((esi | 1)); _flag_b = (uint32_t)((esi | 1));
    esi = esi | 1; /* 0x120557D4: or esi, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_120557DF; /* 0x120557D7: jmp 0x120557df */
L_120557D9:
    esi = MEM32(eax + 0x214); /* 0x120557D9: mov esi, dword ptr [eax + 0x214] */
L_120557DF:
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x120557DF: push dword ptr [ebp + 0x1c] */
    eax = MEM32(edi + 0x8); /* 0x120557E2: mov eax, dword ptr [edi + 8] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120557E5: push dword ptr [ebp + 0x18] */
    ecx = MEM32(edi); /* 0x120557E8: mov ecx, dword ptr [edi] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120557EA: push dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x120557ED: add eax, 0xc */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120557F0: push dword ptr [ebp + 0x10] */
    PUSH32(esp, edx); /* 0x120557F3: push edx */
    PUSH32(esp, 0); /* 0x120557F4: push 0 */
    PUSH32(esp, MEM32(eax + 0x224)); /* 0x120557F6: push dword ptr [eax + 0x224] */
    PUSH32(esp, eax); /* 0x120557FC: push eax */
    PUSH32(esp, esi); /* 0x120557FD: push esi */
    PUSH32(esp, edi); /* 0x120557FE: push edi */
    RECOMP_ICALL(MEM32(ecx + 0xA0)); /* 0x120557FF: call dword ptr [ecx + 0xa0] */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x12055805: pop edi */
    esi = POP32_VAL(esp); /* 0x12055806: pop esi */
L_12055807:
    ebp = POP32_VAL(esp); /* 0x12055807: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x12055808: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_12055810(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12055810u);

L_12055810:
    edi = edi; /* 0x12055810: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12055812: push ebp */
    ebp = esp; /* 0x12055813: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x12055815: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x12055818: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1205581B: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1205581C: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1205581E: push esi */
    /* cmp MEM32(ebp + 0x10), eax */ /* 0x1205581F: cmp dword ptr [ebp + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1205582E; /* 0x12055822: jae 0x1205582e */
L_12055824:
    esi = 0x8876086Cu; /* 0x12055824: mov esi, 0x8876086c */
    goto L_120558F0; /* 0x12055829: jmp 0x120558f0 */
L_1205582E:
    PUSH32(esp, edi); /* 0x1205582E: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1205582F: mov edi, dword ptr [ebp + 8] */
    eax = MEM32(edi + 0x3C); /* 0x12055832: mov eax, dword ptr [edi + 0x3c] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x12055835: push dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0xC)) = eax; /* 0x12055838: mov dword ptr [ebp - 0xc], eax */
    eax = MEM32(edi); /* 0x1205583B: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x1205583D: push edi */
    RECOMP_ICALL(MEM32(eax + 0x68)); /* 0x1205583E: call dword ptr [eax + 0x68] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x12055841: mov esi, eax */
    /* test esi, esi */ /* 0x12055843: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120558EF; /* 0x12055845: js 0x120558ef */
L_1205584B:
    eax = MEM32(edi + 0x30); /* 0x1205584B: mov eax, dword ptr [edi + 0x30] */
    MEM32(ebp + (-0x8)) = eax; /* 0x1205584E: mov dword ptr [ebp - 8], eax */
    eax = MEM32(edi + 0x18); /* 0x12055851: mov eax, dword ptr [edi + 0x18] */
    MEM32(ebp + (-0x4)) = eax; /* 0x12055854: mov dword ptr [ebp - 4], eax */
    eax = MEM32(edi + 0x3C); /* 0x12055857: mov eax, dword ptr [edi + 0x3c] */
    MEM32(ebp + 0x8) = eax; /* 0x1205585A: mov dword ptr [ebp + 8], eax */
    eax = MEM32(edi + 0x48); /* 0x1205585D: mov eax, dword ptr [edi + 0x48] */
    MEM32(ebp + 0x10) = eax; /* 0x12055860: mov dword ptr [ebp + 0x10], eax */
    eax = MEM32(edi + 0x8); /* 0x12055863: mov eax, dword ptr [edi + 8] */
    eax = MEM32(eax + 0x260); /* 0x12055866: mov eax, dword ptr [eax + 0x260] */
    PUSH32(esp, 0x120014BCu); /* 0x1205586C: push 0x120014bc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x12055871: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x14u); /* 0x12055873: push 0x14 */
    edx = POP32_VAL(esp); /* 0x12055875: pop edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x12055876: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x12055878: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1205587B: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1205587D: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1205587F: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x12055880: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x12055885: mov ebx, eax */
    ecx = POP32_VAL(esp); /* 0x12055887: pop ecx */
    ecx = POP32_VAL(esp); /* 0x12055888: pop ecx */
    /* test ebx, ebx */ /* 0x12055889: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12055894; /* 0x1205588B: jne 0x12055894 */
L_1205588D:
    esi = 0x8007000Eu; /* 0x1205588D: mov esi, 0x8007000e */
    goto L_120558EF; /* 0x12055892: jmp 0x120558ef */
L_12055894:
    ecx = MEM32(edi + 0x8); /* 0x12055894: mov ecx, dword ptr [edi + 8] */
    eax = MEM32(ecx + 0x260); /* 0x12055897: mov eax, dword ptr [ecx + 0x260] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x14u); /* 0x1205589D: imul eax, eax, 0x14 */
    PUSH32(esp, eax); /* 0x120558A0: push eax */
    PUSH32(esp, MEM32(ecx + 0x25C)); /* 0x120558A1: push dword ptr [ecx + 0x25c] */
    PUSH32(esp, ebx); /* 0x120558A7: push ebx */
    RECOMP_CALL(sub_121BF440); /* 0x120558A8: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi); /* 0x120558AD: mov eax, dword ptr [edi] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x120558AF: add esp, 0xc */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120558B2: push dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x120558B5: push edi */
    RECOMP_ICALL(MEM32(eax + 0x68)); /* 0x120558B6: call dword ptr [eax + 0x68] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120558B9: mov esi, eax */
    /* test esi, esi */ /* 0x120558BB: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120558EF; /* 0x120558BD: js 0x120558ef */
L_120558BF:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120558BF: push dword ptr [ebp + 0x18] */
    eax = MEM32(edi); /* 0x120558C2: mov eax, dword ptr [edi] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120558C4: push dword ptr [ebp + 0x14] */
    PUSH32(esp, ebx); /* 0x120558C7: push ebx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120558C8: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120558CB: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x120558CE: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x120558D1: push dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(edi + 0x30)); /* 0x120558D4: push dword ptr [edi + 0x30] */
    PUSH32(esp, edi); /* 0x120558D7: push edi */
    RECOMP_ICALL(MEM32(eax + 0xA4)); /* 0x120558D8: call dword ptr [eax + 0xa4] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120558DE: mov esi, eax */
    /* test esi, esi */ /* 0x120558E0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120558EF; /* 0x120558E2: js 0x120558ef */
L_120558E4:
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x120558E4: push dword ptr [ebp - 0xc] */
    eax = MEM32(edi); /* 0x120558E7: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x120558E9: push edi */
    RECOMP_ICALL(MEM32(eax + 0x68)); /* 0x120558EA: call dword ptr [eax + 0x68] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120558ED: mov esi, eax */
L_120558EF:
    edi = POP32_VAL(esp); /* 0x120558EF: pop edi */
L_120558F0:
    PUSH32(esp, ebx); /* 0x120558F0: push ebx */
    RECOMP_CALL(sub_121BF388); /* 0x120558F1: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120558F6: pop ecx */
    eax = esi; /* 0x120558F7: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x120558F9: pop esi */
    ebx = POP32_VAL(esp); /* 0x120558FA: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120558FB: leave  */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x120558FC: ret 0x14 */
    RECOMP_REGS_OUT();
}
