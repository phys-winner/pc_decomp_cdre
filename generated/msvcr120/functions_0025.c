#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_10086C01(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10086C01u);

L_10086C01:
    PUSH32(esp, ebp); /* 0x10086C01: push ebp */
    ebp = esp; /* 0x10086C02: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x10086C04: sub esp, 0x28 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x10086C07: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x10086C0C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x10086C0E: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x10086C11: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x10086C14: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10086C38; /* 0x10086C16: jne 0x10086c38 */
L_10086C18:
    RECOMP_CALL(sub_1001177D); /* 0x10086C18: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10086C1D: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10086C23: call 0x100a4670 */
    RECOMP_FLAGS_IN();
L_10086C28:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10086C28: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_10086C2A:
    ecx = MEM32(ebp + (-0x4)); /* 0x10086C2A: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x10086C2D: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F7C6); /* 0x10086C2F: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x10086C34: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10086C36: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10086C37: ret  */
L_10086C38:
    /* cmp MEM32(eax), 0 */ /* 0x10086C38: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_10086C4A; /* 0x10086C3B: jge 0x10086c4a */
L_10086C3D:
    RECOMP_CALL(sub_1001177D); /* 0x10086C3D: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10086C42: mov dword ptr [eax], 0x16 */
    RECOMP_BACKEDGE();
    goto L_10086C28; /* 0x10086C48: jmp 0x10086c28 */
L_10086C4A:
    PUSH32(esp, eax); /* 0x10086C4A: push eax */
    eax = ebp + (-0x28); /* 0x10086C4B: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x10086C4E: push eax */
    RECOMP_CALL(sub_10087269); /* 0x10086C4F: call 0x10087269 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10086C54: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10086C55: pop ecx */
    /* test eax, eax */ /* 0x10086C56: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10086C28; /* 0x10086C58: jne 0x10086c28 */
L_10086C5A:
    eax = ebp + (-0x28); /* 0x10086C5A: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x10086C5D: push eax */
    RECOMP_CALL(sub_10017CFE); /* 0x10086C5E: call 0x10017cfe */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10086C63: pop ecx */
    RECOMP_BACKEDGE();
    goto L_10086C2A; /* 0x10086C64: jmp 0x10086c2a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10086C66(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10086C66u);

L_10086C66:
    PUSH32(esp, ebp); /* 0x10086C66: push ebp */
    ebp = esp; /* 0x10086C67: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x10086C69: sub esp, 0x28 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x10086C6C: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x10086C71: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x10086C73: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x10); /* 0x10086C76: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x10086C79: push esi */
    esi = MEM32(ebp + 0x8); /* 0x10086C7A: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x10086C7D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10086CC1; /* 0x10086C7F: je 0x10086cc1 */
L_10086C81:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x10086C81: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10086CC1; /* 0x10086C85: jbe 0x10086cc1 */
L_10086C87:
    MEM8(esi) = (uint8_t)(0); /* 0x10086C87: mov byte ptr [esi], 0 */
    /* test eax, eax */ /* 0x10086C8A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10086CC1; /* 0x10086C8C: je 0x10086cc1 */
L_10086C8E:
    /* cmp MEM32(eax), 0 */ /* 0x10086C8E: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_10086C9F; /* 0x10086C91: jge 0x10086c9f */
L_10086C93:
    RECOMP_CALL(sub_1001177D); /* 0x10086C93: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x10086C98: push 0x16 */
    esi = POP32_VAL(esp); /* 0x10086C9A: pop esi */
    MEM32(eax) = esi; /* 0x10086C9B: mov dword ptr [eax], esi */
    goto L_10086CD0; /* 0x10086C9D: jmp 0x10086cd0 */
L_10086C9F:
    PUSH32(esp, eax); /* 0x10086C9F: push eax */
    eax = ebp + (-0x28); /* 0x10086CA0: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x10086CA3: push eax */
    RECOMP_CALL(sub_10087269); /* 0x10086CA4: call 0x10087269 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10086CA9: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10086CAA: pop ecx */
    /* test eax, eax */ /* 0x10086CAB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10086CD2; /* 0x10086CAD: jne 0x10086cd2 */
L_10086CAF:
    eax = ebp + (-0x28); /* 0x10086CAF: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x10086CB2: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10086CB3: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x10086CB6: push esi */
    RECOMP_CALL(sub_100326E2); /* 0x10086CB7: call 0x100326e2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10086CBC: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_10086CD2; /* 0x10086CBF: jmp 0x10086cd2 */
L_10086CC1:
    RECOMP_CALL(sub_1001177D); /* 0x10086CC1: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x10086CC6: push 0x16 */
    esi = POP32_VAL(esp); /* 0x10086CC8: pop esi */
    MEM32(eax) = esi; /* 0x10086CC9: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x10086CCB: call 0x100a4670 */
    RECOMP_FLAGS_IN();
L_10086CD0:
    eax = esi; /* 0x10086CD0: mov eax, esi */
L_10086CD2:
    ecx = MEM32(ebp + (-0x4)); /* 0x10086CD2: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x10086CD5: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x10086CD7: pop esi */
    RECOMP_CALL(sub_1000F7C6); /* 0x10086CD8: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x10086CDD: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10086CDF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10086CE0: ret  */
    RECOMP_REGS_OUT();
}

void sub_10086CE1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10086CE1u);

L_10086CE1:
    PUSH32(esp, ebp); /* 0x10086CE1: push ebp */
    ebp = esp; /* 0x10086CE2: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x10086CE4: push ecx */
    PUSH32(esp, ecx); /* 0x10086CE5: push ecx */
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x10086CE6: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_10086D04; /* 0x10086CEA: jl 0x10086d04 */
L_10086CEC:
    eax = MEM32(ebp + 0x8); /* 0x10086CEC: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x10086CEF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10086D04; /* 0x10086CF1: js 0x10086d04 */
L_10086CF3:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + 0xC); /* 0x10086CF3: sub eax, dword ptr [ebp + 0xc] */
    _flag_k = FK_CMP;
    MEM32(ebp + 0xC) = eax; /* 0x10086CF6: mov dword ptr [ebp + 0xc], eax */
    fp_push((double)(int32_t)MEM32(ebp + 0xC)); /* 0x10086CF9: fild dword ptr [ebp + 0xc] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x10086CFC: fstp qword ptr [ebp - 8] */
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x10086CFF: fld qword ptr [ebp - 8] */
    goto L_10086D11; /* 0x10086D02: jmp 0x10086d11 */
L_10086D04:
    RECOMP_CALL(sub_1001177D); /* 0x10086D04: call 0x1001177d */
    RECOMP_FLAGS_IN();
    fp_push(0.0); /* 0x10086D09: fldz  */
    MEM32(eax) = 0x16u; /* 0x10086D0B: mov dword ptr [eax], 0x16 */
L_10086D11:
    esp = ebp; /* 0x10086D11: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10086D13: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10086D14: ret  */
    RECOMP_REGS_OUT();
}

void sub_10086D15(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10086D15u);

L_10086D15:
    PUSH32(esp, ebp); /* 0x10086D15: push ebp */
    ebp = esp; /* 0x10086D16: mov ebp, esp */
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x10086D18: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_10086D4D; /* 0x10086D1C: jl 0x10086d4d */
L_10086D1E:
    if (CMP_G(_flag_a, _flag_b)) goto L_10086D26; /* 0x10086D1E: jg 0x10086d26 */
L_10086D20:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x10086D20: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_10086D4D; /* 0x10086D24: jb 0x10086d4d */
L_10086D26:
    eax = MEM32(ebp + 0xC); /* 0x10086D26: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x10086D29: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10086D4D; /* 0x10086D2B: jl 0x10086d4d */
L_10086D2D:
    ecx = MEM32(ebp + 0x8); /* 0x10086D2D: mov ecx, dword ptr [ebp + 8] */
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_10086D36; /* 0x10086D30: jg 0x10086d36 */
L_10086D32:
    /* test ecx, ecx */ /* 0x10086D32: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (0) goto L_10086D4D; /* 0x10086D34: jb 0x10086d4d */
L_10086D36:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + 0x10); /* 0x10086D36: sub ecx, dword ptr [ebp + 0x10] */
    _flag_k = FK_CMP;
    MEM32(ebp + 0x10) = ecx; /* 0x10086D39: mov dword ptr [ebp + 0x10], ecx */
    { uint32_t _sa = eax, _sb = MEM32(ebp + 0x14), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10086D3C: sbb eax, dword ptr [ebp + 0x14] */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM32(ebp + 0x14) = eax; /* 0x10086D3F: mov dword ptr [ebp + 0x14], eax */
    fp_push_i64((int64_t)MEM64(ebp + 0x10)); /* 0x10086D42: fild qword ptr [ebp + 0x10] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + 0x10) = _v; } /* 0x10086D45: fstp qword ptr [ebp + 0x10] */
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x10086D48: fld qword ptr [ebp + 0x10] */
    ebp = POP32_VAL(esp); /* 0x10086D4B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10086D4C: ret  */
L_10086D4D:
    RECOMP_CALL(sub_1001177D); /* 0x10086D4D: call 0x1001177d */
    RECOMP_FLAGS_IN();
    fp_push(0.0); /* 0x10086D52: fldz  */
    MEM32(eax) = 0x16u; /* 0x10086D54: mov dword ptr [eax], 0x16 */
    ebp = POP32_VAL(esp); /* 0x10086D5A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10086D5B: ret  */
    RECOMP_REGS_OUT();
}

void sub_10086D5C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10086D5Cu);

L_10086D5C:
    PUSH32(esp, ebp); /* 0x10086D5C: push ebp */
    ebp = esp; /* 0x10086D5D: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x3Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x3Cu; /* 0x10086D5F: sub esp, 0x3c */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x10086D62: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x10086D67: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x10086D69: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x10086D6C: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x10086D6D: mov ebx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10086D70: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x10086D72: push esi */
    PUSH32(esp, edi); /* 0x10086D73: push edi */
    edi = MEM32(ebp + 0x8); /* 0x10086D74: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFF894u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0xFFFFF894u; /* 0x10086D77: add edi, 0xfffff894 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x38)) = eax; /* 0x10086D7D: mov dword ptr [ebp - 0x38], eax */
    MEM32(ebp + (-0x34)) = eax; /* 0x10086D80: mov dword ptr [ebp - 0x34], eax */
    MEM32(ebp + (-0x30)) = eax; /* 0x10086D83: mov dword ptr [ebp - 0x30], eax */
    /* cmp edi, 0x46u */ /* 0x10086D86: cmp edi, 0x46 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x46u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_10086F3F; /* 0x10086D89: jl 0x10086f3f */
L_10086D8F:
    /* cmp edi, 0x8Au */ /* 0x10086D8F: cmp edi, 0x8a */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x8Au);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_10086F3F; /* 0x10086D95: jg 0x10086f3f */
L_10086D9B:
    eax = ebx + (-0x1); /* 0x10086D9B: lea eax, [ebx - 1] */
    /* cmp eax, 0xBu */ /* 0x10086D9E: cmp eax, 0xb */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_10086F3F; /* 0x10086DA1: ja 0x10086f3f */
L_10086DA7:
    /* cmp MEM32(ebp + 0x14), 0x17u */ /* 0x10086DA7: cmp dword ptr [ebp + 0x14], 0x17 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0x17u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_10086F3F; /* 0x10086DAB: ja 0x10086f3f */
L_10086DB1:
    /* cmp MEM32(ebp + 0x18), 0x3Bu */ /* 0x10086DB1: cmp dword ptr [ebp + 0x18], 0x3b */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(0x3Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_10086F3F; /* 0x10086DB5: ja 0x10086f3f */
L_10086DBB:
    /* cmp MEM32(ebp + 0x1C), 0x3Bu */ /* 0x10086DBB: cmp dword ptr [ebp + 0x1c], 0x3b */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(0x3Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_10086F3F; /* 0x10086DBF: ja 0x10086f3f */
L_10086DC5:
    ecx = MEM32(ebp + 0x10); /* 0x10086DC5: mov ecx, dword ptr [ebp + 0x10] */
    /* cmp ecx, 1 */ /* 0x10086DC8: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_10086F3F; /* 0x10086DCB: jl 0x10086f3f */
L_10086DD1:
    eax = MEM32(ebx * 4 + 0x100DFE38); /* 0x10086DD1: mov eax, dword ptr [ebx*4 + 0x100dfe38] */
    esi = MEM32(ebx * 4 + 0x100DFE34); /* 0x10086DD8: mov esi, dword ptr [ebx*4 + 0x100dfe34] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x10086DDF: sub eax, esi */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x3C)) = 0x64u; /* 0x10086DE1: mov dword ptr [ebp - 0x3c], 0x64 */
    MEM32(ebp + (-0x2C)) = 0x190u; /* 0x10086DE8: mov dword ptr [ebp - 0x2c], 0x190 */
    /* cmp eax, ecx */ /* 0x10086DEF: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_10086E31; /* 0x10086DF1: jge 0x10086e31 */
L_10086DF3:
    eax = edi; /* 0x10086DF3: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80000003u);
    eax = eax & 0x80000003u; /* 0x10086DF5: and eax, 0x80000003 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_10086E01; /* 0x10086DFA: jns 0x10086e01 */
L_10086DFC:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10086DFC: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFCu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFCu));
    eax = eax | 0xFFFFFFFCu; /* 0x10086DFD: or eax, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10086E00: inc eax */
    _flag_k = FK_INC;
L_10086E01:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_10086E0D; /* 0x10086E01: jne 0x10086e0d */
L_10086E03:
    eax = edi; /* 0x10086E03: mov eax, edi */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10086E05: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)MEM32(ebp + (-0x3C)); /* 0x10086E06: idiv dword ptr [ebp - 0x3c] */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    /* test edx, edx */ /* 0x10086E09: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10086E1F; /* 0x10086E0B: jne 0x10086e1f */
L_10086E0D:
    eax = edi + 0x76C; /* 0x10086E0D: lea eax, [edi + 0x76c] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10086E13: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)MEM32(ebp + (-0x2C)); /* 0x10086E14: idiv dword ptr [ebp - 0x2c] */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    /* test edx, edx */ /* 0x10086E17: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10086F3F; /* 0x10086E19: jne 0x10086f3f */
L_10086E1F:
    /* cmp ebx, 2 */ /* 0x10086E1F: cmp ebx, 2 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10086F3F; /* 0x10086E22: jne 0x10086f3f */
L_10086E28:
    /* cmp ecx, 0x1Du */ /* 0x10086E28: cmp ecx, 0x1d */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_10086F3F; /* 0x10086E2B: jg 0x10086f3f */
L_10086E31:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x10086E31: add ecx, esi */
    _flag_k = FK_ADD;
    eax = edi; /* 0x10086E33: mov eax, edi */
    MEM32(ebp + (-0x2C)) = ecx; /* 0x10086E35: mov dword ptr [ebp - 0x2c], ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80000003u);
    eax = eax & 0x80000003u; /* 0x10086E38: and eax, 0x80000003 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_10086E44; /* 0x10086E3D: jns 0x10086e44 */
L_10086E3F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10086E3F: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFCu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFCu));
    eax = eax | 0xFFFFFFFCu; /* 0x10086E40: or eax, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10086E43: inc eax */
    _flag_k = FK_INC;
L_10086E44:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_10086E52; /* 0x10086E44: jne 0x10086e52 */
L_10086E46:
    eax = edi; /* 0x10086E46: mov eax, edi */
    PUSH32(esp, 0x64u); /* 0x10086E48: push 0x64 */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10086E4A: cdq  */
    esi = POP32_VAL(esp); /* 0x10086E4B: pop esi */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)esi; /* 0x10086E4C: idiv esi */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    /* test edx, edx */ /* 0x10086E4E: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10086E66; /* 0x10086E50: jne 0x10086e66 */
L_10086E52:
    eax = edi + 0x76C; /* 0x10086E52: lea eax, [edi + 0x76c] */
    esi = 0x190u; /* 0x10086E58: mov esi, 0x190 */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10086E5D: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)esi; /* 0x10086E5E: idiv esi */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    /* test edx, edx */ /* 0x10086E60: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10086E6B; /* 0x10086E62: je 0x10086e6b */
L_10086E64:
    goto L_10086E74; /* 0x10086E64: jmp 0x10086e74 */
L_10086E66:
    esi = 0x190u; /* 0x10086E66: mov esi, 0x190 */
L_10086E6B:
    /* cmp ebx, 2 */ /* 0x10086E6B: cmp ebx, 2 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_10086E74; /* 0x10086E6E: jle 0x10086e74 */
L_10086E70:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10086E70: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x2C)) = ecx; /* 0x10086E71: mov dword ptr [ebp - 0x2c], ecx */
L_10086E74:
    RECOMP_CALL(sub_10015B4C); /* 0x10086E74: call 0x10015b4c */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x38); /* 0x10086E79: lea eax, [ebp - 0x38] */
    PUSH32(esp, eax); /* 0x10086E7C: push eax */
    RECOMP_CALL(sub_10015B1A); /* 0x10086E7D: call 0x10015b1a */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10086E82: pop ecx */
    /* test eax, eax */ /* 0x10086E83: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10086F5E; /* 0x10086E85: jne 0x10086f5e */
L_10086E8B:
    eax = ebp + (-0x34); /* 0x10086E8B: lea eax, [ebp - 0x34] */
    PUSH32(esp, eax); /* 0x10086E8E: push eax */
    RECOMP_CALL(sub_10015B33); /* 0x10086E8F: call 0x10015b33 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10086E94: pop ecx */
    /* test eax, eax */ /* 0x10086E95: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10086F5E; /* 0x10086E97: jne 0x10086f5e */
L_10086E9D:
    eax = ebp + (-0x30); /* 0x10086E9D: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x10086EA0: push eax */
    RECOMP_CALL(sub_10015B01); /* 0x10086EA1: call 0x10015b01 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10086EA6: pop ecx */
    /* test eax, eax */ /* 0x10086EA7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10086F5E; /* 0x10086EA9: jne 0x10086f5e */
L_10086EAF:
    eax = edi + 0x12B; /* 0x10086EAF: lea eax, [edi + 0x12b] */
    ecx = (uint32_t)((int32_t)edi * (int32_t)0x16Du); /* 0x10086EB5: imul ecx, edi, 0x16d */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10086EBB: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)esi; /* 0x10086EBC: idiv esi */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    MEM32(ebp + (-0x14)) = edi; /* 0x10086EBE: mov dword ptr [ebp - 0x14], edi */
    esi = eax; /* 0x10086EC1: mov esi, eax */
    eax = edi + (-0x1); /* 0x10086EC3: lea eax, [edi - 1] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10086EC6: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)MEM32(ebp + (-0x3C)); /* 0x10086EC7: idiv dword ptr [ebp - 0x3c] */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x10086ECA: sub esi, eax */
    _flag_k = FK_CMP;
    eax = edi + (-0x1); /* 0x10086ECC: lea eax, [edi - 1] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10086ECF: cdq  */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    edx = edx & 3; /* 0x10086ED0: and edx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x10086ED3: add eax, edx */
    _flag_k = FK_ADD;
    edx = MEM32(ebp + (-0x2C)); /* 0x10086ED5: mov edx, dword ptr [ebp - 0x2c] */
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x10086ED8: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x10086EDB: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xC)) = edx; /* 0x10086EDD: mov dword ptr [ebp - 0xc], edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x10086EE0: add eax, esi */
    _flag_k = FK_ADD;
    esi = MEM32(ebp + 0x1C); /* 0x10086EE2: mov esi, dword ptr [ebp + 0x1c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x10086EE5: add ecx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x7C558180u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x7C558180u; /* 0x10086EE7: add esi, 0x7c558180 */
    _flag_k = FK_ADD;
    eax = (uint32_t)((int32_t)ecx * (int32_t)0x18u); /* 0x10086EED: imul eax, ecx, 0x18 */
    ecx = MEM32(ebp + 0x14); /* 0x10086EF0: mov ecx, dword ptr [ebp + 0x14] */
    MEM32(ebp + (-0x20)) = ecx; /* 0x10086EF3: mov dword ptr [ebp - 0x20], ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x10086EF6: add eax, ecx */
    _flag_k = FK_ADD;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3Cu); /* 0x10086EF8: imul eax, eax, 0x3c */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x18));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0x18); /* 0x10086EFB: add eax, dword ptr [ebp + 0x18] */
    _flag_k = FK_ADD;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3Cu); /* 0x10086EFE: imul eax, eax, 0x3c */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x30)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x30)); /* 0x10086F01: add eax, dword ptr [ebp - 0x30] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x10086F04: add esi, eax */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + 0x20), 1 */ /* 0x10086F06: cmp dword ptr [ebp + 0x20], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = ebx + (-0x1); /* 0x10086F0A: lea eax, [ebx - 1] */
    MEM32(ebp + (-0x18)) = eax; /* 0x10086F0D: mov dword ptr [ebp - 0x18], eax */
    eax = MEM32(ebp + 0x18); /* 0x10086F10: mov eax, dword ptr [ebp + 0x18] */
    MEM32(ebp + (-0x24)) = eax; /* 0x10086F13: mov dword ptr [ebp - 0x24], eax */
    eax = MEM32(ebp + 0x1C); /* 0x10086F16: mov eax, dword ptr [ebp + 0x1c] */
    MEM32(ebp + (-0x28)) = eax; /* 0x10086F19: mov dword ptr [ebp - 0x28], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10086F38; /* 0x10086F1C: je 0x10086f38 */
L_10086F1E:
    /* cmp MEM32(ebp + 0x20), 0xFFFFFFFFu */ /* 0x10086F1E: cmp dword ptr [ebp + 0x20], -1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10086F3B; /* 0x10086F22: jne 0x10086f3b */
L_10086F24:
    /* cmp MEM32(ebp + (-0x38)), 0 */ /* 0x10086F24: cmp dword ptr [ebp - 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x38))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10086F3B; /* 0x10086F28: je 0x10086f3b */
L_10086F2A:
    eax = ebp + (-0x28); /* 0x10086F2A: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x10086F2D: push eax */
    RECOMP_CALL(sub_10015BB2); /* 0x10086F2E: call 0x10015bb2 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10086F33: pop ecx */
    /* test eax, eax */ /* 0x10086F34: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10086F3B; /* 0x10086F36: je 0x10086f3b */
L_10086F38:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x34)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + (-0x34)); /* 0x10086F38: add esi, dword ptr [ebp - 0x34] */
    _flag_k = FK_ADD;
L_10086F3B:
    eax = esi; /* 0x10086F3B: mov eax, esi */
    goto L_10086F4D; /* 0x10086F3D: jmp 0x10086f4d */
L_10086F3F:
    RECOMP_CALL(sub_1001177D); /* 0x10086F3F: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10086F44: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10086F4A: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_10086F4D:
    ecx = MEM32(ebp + (-0x4)); /* 0x10086F4D: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x10086F50: pop edi */
    esi = POP32_VAL(esp); /* 0x10086F51: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x10086F52: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x10086F54: pop ebx */
    RECOMP_CALL(sub_1000F7C6); /* 0x10086F55: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x10086F5A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10086F5C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10086F5D: ret  */
L_10086F5E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10086F5E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x10086F60: push eax */
    PUSH32(esp, eax); /* 0x10086F61: push eax */
    PUSH32(esp, eax); /* 0x10086F62: push eax */
    PUSH32(esp, eax); /* 0x10086F63: push eax */
    PUSH32(esp, eax); /* 0x10086F64: push eax */
    RECOMP_CALL(sub_100A469B); /* 0x10086F65: call 0x100a469b */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x10086F6Au, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10086F6B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10086F6Bu);

L_10086F6B:
    goto L_10086F6D; /* 0x10086F6B: jmp 0x10086f6d */
L_10086F6D:
    PUSH32(esp, ebp); /* 0x10086F6D: push ebp */
    ebp = esp; /* 0x10086F6E: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xC0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xC0u; /* 0x10086F70: sub esp, 0xc0 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x10086F76: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x10086F7B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x10086F7D: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x10086F80: push ebx */
    PUSH32(esp, esi); /* 0x10086F81: push esi */
    esi = MEM32(ebp + 0x8); /* 0x10086F82: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10086F85: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xB4)) = ebx; /* 0x10086F87: mov dword ptr [ebp - 0xb4], ebx */
    /* test esi, esi */ /* 0x10086F8D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10086FB2; /* 0x10086F8F: jne 0x10086fb2 */
L_10086F91:
    RECOMP_CALL(sub_1001177D); /* 0x10086F91: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x10086F96: push 0x16 */
    esi = POP32_VAL(esp); /* 0x10086F98: pop esi */
    MEM32(eax) = esi; /* 0x10086F99: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x10086F9B: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x10086FA0: mov eax, esi */
L_10086FA2:
    ecx = MEM32(ebp + (-0x4)); /* 0x10086FA2: mov ecx, dword ptr [ebp - 4] */
    esi = POP32_VAL(esp); /* 0x10086FA5: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x10086FA6: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x10086FA8: pop ebx */
    RECOMP_CALL(sub_1000F7C6); /* 0x10086FA9: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x10086FAE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10086FB0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10086FB1: ret  */
L_10086FB2:
    RECOMP_CALL(sub_10015B4C); /* 0x10086FB2: call 0x10015b4c */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0xB4); /* 0x10086FB7: lea eax, [ebp - 0xb4] */
    PUSH32(esp, eax); /* 0x10086FBD: push eax */
    RECOMP_CALL(sub_10015B01); /* 0x10086FBE: call 0x10015b01 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10086FC3: pop ecx */
    /* test eax, eax */ /* 0x10086FC4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100870AB; /* 0x10086FC6: jne 0x100870ab */
L_10086FCC:
    eax = MEM32(ebp + (-0xB4)); /* 0x10086FCC: mov eax, dword ptr [ebp - 0xb4] */
    PUSH32(esp, edi); /* 0x10086FD2: push edi */
    PUSH32(esp, 0x3Cu); /* 0x10086FD3: push 0x3c */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10086FD5: cdq  */
    ecx = POP32_VAL(esp); /* 0x10086FD6: pop ecx */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x10086FD7: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    MEM16(esi + 0x6) = (uint16_t)(LO16(eax)); /* 0x10086FD9: mov word ptr [esi + 6], ax */
    eax = ebp + (-0xBC); /* 0x10086FDD: lea eax, [ebp - 0xbc] */
    PUSH32(esp, eax); /* 0x10086FE3: push eax */
    RECOMP_ICALL(MEM32(0x100E5110)); /* 0x10086FE4: call dword ptr [0x100e5110] */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0xB8)); /* 0x10086FEA: mov edi, dword ptr [ebp - 0xb8] */
    PUSH32(esp, ebx); /* 0x10086FF0: push ebx */
    ebx = MEM32(ebp + (-0xBC)); /* 0x10086FF1: mov ebx, dword ptr [ebp - 0xbc] */
    PUSH32(esp, 0x23C34600u); /* 0x10086FF7: push 0x23c34600 */
    PUSH32(esp, edi); /* 0x10086FFC: push edi */
    PUSH32(esp, ebx); /* 0x10086FFD: push ebx */
    RECOMP_CALL(sub_1001464C); /* 0x10086FFE: call 0x1001464c */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0xC0)) = eax; /* 0x10087003: mov dword ptr [ebp - 0xc0], eax */
    /* cmp eax, MEM32(0x100E4068) */ /* 0x10087009: cmp eax, dword ptr [0x100e4068] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x100E4068));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008705D; /* 0x1008700F: je 0x1008705d */
L_10087011:
    eax = ebp + (-0xB0); /* 0x10087011: lea eax, [ebp - 0xb0] */
    PUSH32(esp, eax); /* 0x10087017: push eax */
    RECOMP_ICALL(MEM32(0x100E5114)); /* 0x10087018: call dword ptr [0x100e5114] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((ecx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ecx | 0xFFFFFFFFu));
    ecx = ecx | 0xFFFFFFFFu; /* 0x1008701E: or ecx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ecx */ /* 0x10087021: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008703E; /* 0x10087023: je 0x1008703e */
L_10087025:
    /* cmp eax, 2 */ /* 0x10087025: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008703C; /* 0x10087028: jne 0x1008703c */
L_1008702A:
    /* cmp MEM16(ebp + (-0x16)), 0 */ /* 0x1008702A: cmp word ptr [ebp - 0x16], 0 */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x16))) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008703C; /* 0x1008702F: je 0x1008703c */
L_10087031:
    /* cmp MEM32(ebp + (-0x8)), 0 */ /* 0x10087031: cmp dword ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008703C; /* 0x10087035: je 0x1008703c */
L_10087037:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10087037: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10087039: inc ecx */
    _flag_k = FK_INC;
    goto L_1008703E; /* 0x1008703A: jmp 0x1008703e */
L_1008703C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1008703C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008703E:
    eax = MEM32(ebp + (-0xC0)); /* 0x1008703E: mov eax, dword ptr [ebp - 0xc0] */
    edi = MEM32(ebp + (-0xB8)); /* 0x10087044: mov edi, dword ptr [ebp - 0xb8] */
    ebx = MEM32(ebp + (-0xBC)); /* 0x1008704A: mov ebx, dword ptr [ebp - 0xbc] */
    MEM32(0x100E1494) = ecx; /* 0x10087050: mov dword ptr [0x100e1494], ecx */
    MEM32(0x100E4068) = eax; /* 0x10087056: mov dword ptr [0x100e4068], eax */
    goto L_10087063; /* 0x1008705B: jmp 0x10087063 */
L_1008705D:
    ecx = MEM32(0x100E1494); /* 0x1008705D: mov ecx, dword ptr [0x100e1494] */
L_10087063:
    PUSH32(esp, 0); /* 0x10087063: push 0 */
    PUSH32(esp, 0x2710u); /* 0x10087065: push 0x2710 */
    PUSH32(esp, edi); /* 0x1008706A: push edi */
    PUSH32(esp, ebx); /* 0x1008706B: push ebx */
    MEM16(esi + 0x8) = (uint16_t)(LO16(ecx)); /* 0x1008706C: mov word ptr [esi + 8], cx */
    RECOMP_CALL(sub_1001464C); /* 0x10087070: call 0x1001464c */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x10087075: push 0 */
    PUSH32(esp, 0x3E8u); /* 0x10087077: push 0x3e8 */
    PUSH32(esp, edx); /* 0x1008707C: push edx */
    PUSH32(esp, eax); /* 0x1008707D: push eax */
    RECOMP_CALL(sub_10034F20); /* 0x1008707E: call 0x10034f20 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x10087083: push 0 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x2AC18000u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x2AC18000u; /* 0x10087085: add ebx, 0x2ac18000 */
    _flag_k = FK_ADD;
    MEM16(esi + 0x4) = (uint16_t)(LO16(eax)); /* 0x1008708B: mov word ptr [esi + 4], ax */
    PUSH32(esp, 0x00989680u); /* 0x1008708F: push 0x989680 */
    { uint32_t _aa = edi, _ab = 0xFE624E21u, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10087094: adc edi, 0xfe624e21 */
      edi = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, edi); /* 0x1008709A: push edi */
    PUSH32(esp, ebx); /* 0x1008709B: push ebx */
    RECOMP_CALL(sub_1001464C); /* 0x1008709C: call 0x1001464c */
    RECOMP_FLAGS_IN();
    MEM32(esi) = eax; /* 0x100870A1: mov dword ptr [esi], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100870A3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x100870A5: pop edi */
    RECOMP_BACKEDGE();
    goto L_10086FA2; /* 0x100870A6: jmp 0x10086fa2 */
L_100870AB:
    PUSH32(esp, ebx); /* 0x100870AB: push ebx */
    PUSH32(esp, ebx); /* 0x100870AC: push ebx */
    PUSH32(esp, ebx); /* 0x100870AD: push ebx */
    PUSH32(esp, ebx); /* 0x100870AE: push ebx */
    PUSH32(esp, ebx); /* 0x100870AF: push ebx */
    RECOMP_CALL(sub_100A469B); /* 0x100870B0: call 0x100a469b */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x100870B5u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10086F6D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10086F6Du);

L_10086F6D:
    PUSH32(esp, ebp); /* 0x10086F6D: push ebp */
    ebp = esp; /* 0x10086F6E: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xC0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xC0u; /* 0x10086F70: sub esp, 0xc0 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x10086F76: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x10086F7B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x10086F7D: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x10086F80: push ebx */
    PUSH32(esp, esi); /* 0x10086F81: push esi */
    esi = MEM32(ebp + 0x8); /* 0x10086F82: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10086F85: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xB4)) = ebx; /* 0x10086F87: mov dword ptr [ebp - 0xb4], ebx */
    /* test esi, esi */ /* 0x10086F8D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10086FB2; /* 0x10086F8F: jne 0x10086fb2 */
L_10086F91:
    RECOMP_CALL(sub_1001177D); /* 0x10086F91: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x10086F96: push 0x16 */
    esi = POP32_VAL(esp); /* 0x10086F98: pop esi */
    MEM32(eax) = esi; /* 0x10086F99: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x10086F9B: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x10086FA0: mov eax, esi */
L_10086FA2:
    ecx = MEM32(ebp + (-0x4)); /* 0x10086FA2: mov ecx, dword ptr [ebp - 4] */
    esi = POP32_VAL(esp); /* 0x10086FA5: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x10086FA6: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x10086FA8: pop ebx */
    RECOMP_CALL(sub_1000F7C6); /* 0x10086FA9: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x10086FAE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10086FB0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10086FB1: ret  */
L_10086FB2:
    RECOMP_CALL(sub_10015B4C); /* 0x10086FB2: call 0x10015b4c */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0xB4); /* 0x10086FB7: lea eax, [ebp - 0xb4] */
    PUSH32(esp, eax); /* 0x10086FBD: push eax */
    RECOMP_CALL(sub_10015B01); /* 0x10086FBE: call 0x10015b01 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10086FC3: pop ecx */
    /* test eax, eax */ /* 0x10086FC4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100870AB; /* 0x10086FC6: jne 0x100870ab */
L_10086FCC:
    eax = MEM32(ebp + (-0xB4)); /* 0x10086FCC: mov eax, dword ptr [ebp - 0xb4] */
    PUSH32(esp, edi); /* 0x10086FD2: push edi */
    PUSH32(esp, 0x3Cu); /* 0x10086FD3: push 0x3c */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10086FD5: cdq  */
    ecx = POP32_VAL(esp); /* 0x10086FD6: pop ecx */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x10086FD7: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    MEM16(esi + 0x6) = (uint16_t)(LO16(eax)); /* 0x10086FD9: mov word ptr [esi + 6], ax */
    eax = ebp + (-0xBC); /* 0x10086FDD: lea eax, [ebp - 0xbc] */
    PUSH32(esp, eax); /* 0x10086FE3: push eax */
    RECOMP_ICALL(MEM32(0x100E5110)); /* 0x10086FE4: call dword ptr [0x100e5110] */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0xB8)); /* 0x10086FEA: mov edi, dword ptr [ebp - 0xb8] */
    PUSH32(esp, ebx); /* 0x10086FF0: push ebx */
    ebx = MEM32(ebp + (-0xBC)); /* 0x10086FF1: mov ebx, dword ptr [ebp - 0xbc] */
    PUSH32(esp, 0x23C34600u); /* 0x10086FF7: push 0x23c34600 */
    PUSH32(esp, edi); /* 0x10086FFC: push edi */
    PUSH32(esp, ebx); /* 0x10086FFD: push ebx */
    RECOMP_CALL(sub_1001464C); /* 0x10086FFE: call 0x1001464c */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0xC0)) = eax; /* 0x10087003: mov dword ptr [ebp - 0xc0], eax */
    /* cmp eax, MEM32(0x100E4068) */ /* 0x10087009: cmp eax, dword ptr [0x100e4068] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x100E4068));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008705D; /* 0x1008700F: je 0x1008705d */
L_10087011:
    eax = ebp + (-0xB0); /* 0x10087011: lea eax, [ebp - 0xb0] */
    PUSH32(esp, eax); /* 0x10087017: push eax */
    RECOMP_ICALL(MEM32(0x100E5114)); /* 0x10087018: call dword ptr [0x100e5114] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((ecx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ecx | 0xFFFFFFFFu));
    ecx = ecx | 0xFFFFFFFFu; /* 0x1008701E: or ecx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ecx */ /* 0x10087021: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008703E; /* 0x10087023: je 0x1008703e */
L_10087025:
    /* cmp eax, 2 */ /* 0x10087025: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008703C; /* 0x10087028: jne 0x1008703c */
L_1008702A:
    /* cmp MEM16(ebp + (-0x16)), 0 */ /* 0x1008702A: cmp word ptr [ebp - 0x16], 0 */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x16))) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008703C; /* 0x1008702F: je 0x1008703c */
L_10087031:
    /* cmp MEM32(ebp + (-0x8)), 0 */ /* 0x10087031: cmp dword ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008703C; /* 0x10087035: je 0x1008703c */
L_10087037:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10087037: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10087039: inc ecx */
    _flag_k = FK_INC;
    goto L_1008703E; /* 0x1008703A: jmp 0x1008703e */
L_1008703C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1008703C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008703E:
    eax = MEM32(ebp + (-0xC0)); /* 0x1008703E: mov eax, dword ptr [ebp - 0xc0] */
    edi = MEM32(ebp + (-0xB8)); /* 0x10087044: mov edi, dword ptr [ebp - 0xb8] */
    ebx = MEM32(ebp + (-0xBC)); /* 0x1008704A: mov ebx, dword ptr [ebp - 0xbc] */
    MEM32(0x100E1494) = ecx; /* 0x10087050: mov dword ptr [0x100e1494], ecx */
    MEM32(0x100E4068) = eax; /* 0x10087056: mov dword ptr [0x100e4068], eax */
    goto L_10087063; /* 0x1008705B: jmp 0x10087063 */
L_1008705D:
    ecx = MEM32(0x100E1494); /* 0x1008705D: mov ecx, dword ptr [0x100e1494] */
L_10087063:
    PUSH32(esp, 0); /* 0x10087063: push 0 */
    PUSH32(esp, 0x2710u); /* 0x10087065: push 0x2710 */
    PUSH32(esp, edi); /* 0x1008706A: push edi */
    PUSH32(esp, ebx); /* 0x1008706B: push ebx */
    MEM16(esi + 0x8) = (uint16_t)(LO16(ecx)); /* 0x1008706C: mov word ptr [esi + 8], cx */
    RECOMP_CALL(sub_1001464C); /* 0x10087070: call 0x1001464c */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x10087075: push 0 */
    PUSH32(esp, 0x3E8u); /* 0x10087077: push 0x3e8 */
    PUSH32(esp, edx); /* 0x1008707C: push edx */
    PUSH32(esp, eax); /* 0x1008707D: push eax */
    RECOMP_CALL(sub_10034F20); /* 0x1008707E: call 0x10034f20 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x10087083: push 0 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x2AC18000u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x2AC18000u; /* 0x10087085: add ebx, 0x2ac18000 */
    _flag_k = FK_ADD;
    MEM16(esi + 0x4) = (uint16_t)(LO16(eax)); /* 0x1008708B: mov word ptr [esi + 4], ax */
    PUSH32(esp, 0x00989680u); /* 0x1008708F: push 0x989680 */
    { uint32_t _aa = edi, _ab = 0xFE624E21u, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10087094: adc edi, 0xfe624e21 */
      edi = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, edi); /* 0x1008709A: push edi */
    PUSH32(esp, ebx); /* 0x1008709B: push ebx */
    RECOMP_CALL(sub_1001464C); /* 0x1008709C: call 0x1001464c */
    RECOMP_FLAGS_IN();
    MEM32(esi) = eax; /* 0x100870A1: mov dword ptr [esi], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100870A3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x100870A5: pop edi */
    RECOMP_BACKEDGE();
    goto L_10086FA2; /* 0x100870A6: jmp 0x10086fa2 */
L_100870AB:
    PUSH32(esp, ebx); /* 0x100870AB: push ebx */
    PUSH32(esp, ebx); /* 0x100870AC: push ebx */
    PUSH32(esp, ebx); /* 0x100870AD: push ebx */
    PUSH32(esp, ebx); /* 0x100870AE: push ebx */
    PUSH32(esp, ebx); /* 0x100870AF: push ebx */
    RECOMP_CALL(sub_100A469B); /* 0x100870B0: call 0x100a469b */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x100870B5u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100870B6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100870B6u);

L_100870B6:
    PUSH32(esp, esi); /* 0x100870B6: push esi */
    RECOMP_CALL(sub_1000F720); /* 0x100870B7: call 0x1000f720 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100870BC: mov esi, eax */
    /* test esi, esi */ /* 0x100870BE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100870D1; /* 0x100870C0: jne 0x100870d1 */
L_100870C2:
    RECOMP_CALL(sub_1001177D); /* 0x100870C2: call 0x1001177d */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x100870C7: pop esi */
    MEM32(eax) = 0xCu; /* 0x100870C8: mov dword ptr [eax], 0xc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100870CE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100870D0: ret  */
L_100870D1:
    /* cmp MEM32(esi + 0x44), 0 */ /* 0x100870D1: cmp dword ptr [esi + 0x44], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x44)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100870E6; /* 0x100870D5: jne 0x100870e6 */
L_100870D7:
    PUSH32(esp, 0x24u); /* 0x100870D7: push 0x24 */
    RECOMP_CALL(sub_10012226); /* 0x100870D9: call 0x10012226 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x44) = eax; /* 0x100870DE: mov dword ptr [esi + 0x44], eax */
    ecx = POP32_VAL(esp); /* 0x100870E1: pop ecx */
    /* test eax, eax */ /* 0x100870E2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100870C2; /* 0x100870E4: je 0x100870c2 */
L_100870E6:
    eax = MEM32(esi + 0x44); /* 0x100870E6: mov eax, dword ptr [esi + 0x44] */
    esi = POP32_VAL(esp); /* 0x100870E9: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100870EA: ret  */
    RECOMP_REGS_OUT();
}

void sub_100870EB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100870EBu);

L_100870EB:
    PUSH32(esp, ebp); /* 0x100870EB: push ebp */
    ebp = esp; /* 0x100870EC: mov ebp, esp */
    PUSH32(esp, esi); /* 0x100870EE: push esi */
    RECOMP_CALL(sub_100870B6); /* 0x100870EF: call 0x100870b6 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100870F4: mov esi, eax */
    /* test esi, esi */ /* 0x100870F6: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008710D; /* 0x100870F8: je 0x1008710d */
L_100870FA:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100870FA: push dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x100870FD: push esi */
    RECOMP_CALL(sub_10087110); /* 0x100870FE: call 0x10087110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x10087103: neg eax */
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x10087105: pop ecx */
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x10087106: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = ~eax; /* 0x10087108: not eax */
    ecx = POP32_VAL(esp); /* 0x1008710A: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    eax = eax & esi; /* 0x1008710B: and eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008710D:
    esi = POP32_VAL(esp); /* 0x1008710D: pop esi */
    ebp = POP32_VAL(esp); /* 0x1008710E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008710F: ret  */
    RECOMP_REGS_OUT();
}

void sub_10087110(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10087110u);

L_10087110:
    PUSH32(esp, ebp); /* 0x10087110: push ebp */
    ebp = esp; /* 0x10087111: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x10087113: push ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x10087114: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x10087118: push esi */
    PUSH32(esp, edi); /* 0x10087119: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1008711A: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x1008711D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10087137; /* 0x1008711F: jne 0x10087137 */
L_10087121:
    RECOMP_CALL(sub_1001177D); /* 0x10087121: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x10087126: push 0x16 */
    esi = POP32_VAL(esp); /* 0x10087128: pop esi */
    MEM32(eax) = esi; /* 0x10087129: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x1008712B: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x10087130: mov eax, esi */
    goto L_1008723E; /* 0x10087132: jmp 0x1008723e */
L_10087137:
    PUSH32(esp, ebx); /* 0x10087137: push ebx */
    PUSH32(esp, 0x24u); /* 0x10087138: push 0x24 */
    PUSH32(esp, 0xFFu); /* 0x1008713A: push 0xff */
    PUSH32(esp, edi); /* 0x1008713F: push edi */
    RECOMP_CALL(sub_10011533); /* 0x10087140: call 0x10011533 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + 0xC); /* 0x10087145: mov ebx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10087148: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test ebx, ebx */ /* 0x1008714B: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10087160; /* 0x1008714D: jne 0x10087160 */
L_1008714F:
    RECOMP_CALL(sub_1001177D); /* 0x1008714F: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x10087154: push 0x16 */
    esi = POP32_VAL(esp); /* 0x10087156: pop esi */
    MEM32(eax) = esi; /* 0x10087157: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x10087159: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    goto L_10087174; /* 0x1008715E: jmp 0x10087174 */
L_10087160:
    esi = MEM32(ebx); /* 0x10087160: mov esi, dword ptr [ebx] */
    /* cmp esi, 0xFFFF5740u */ /* 0x10087162: cmp esi, 0xffff5740 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFF5740u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1008717B; /* 0x10087168: jge 0x1008717b */
L_1008716A:
    RECOMP_CALL(sub_1001177D); /* 0x1008716A: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1008716F: push 0x16 */
    esi = POP32_VAL(esp); /* 0x10087171: pop esi */
    MEM32(eax) = esi; /* 0x10087172: mov dword ptr [eax], esi */
L_10087174:
    eax = esi; /* 0x10087174: mov eax, esi */
    goto L_1008723D; /* 0x10087176: jmp 0x1008723d */
L_1008717B:
    eax = esi; /* 0x1008717B: mov eax, esi */
    ecx = 0x07861F80u; /* 0x1008717D: mov ecx, 0x7861f80 */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10087182: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x10087183: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    edx = 0x01E13380u; /* 0x10087185: mov edx, 0x1e13380 */
    ecx = (uint32_t)((int32_t)eax * (int32_t)0xF879E080u); /* 0x1008718A: imul ecx, eax, 0xf879e080 */
    eax = eax * 4 + 0x46; /* 0x10087190: lea eax, [eax*4 + 0x46] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ecx; /* 0x10087197: add esi, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10087199: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1008719B: inc ecx */
    _flag_k = FK_INC;
    /* cmp esi, edx */ /* 0x1008719C: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_100871BB; /* 0x1008719E: jl 0x100871bb */
L_100871A0:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edx; /* 0x100871A0: sub esi, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100871A2: inc eax */
    _flag_k = FK_INC;
    /* cmp esi, edx */ /* 0x100871A3: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_100871BB; /* 0x100871A5: jl 0x100871bb */
L_100871A7:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edx; /* 0x100871A7: sub esi, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100871A9: inc eax */
    _flag_k = FK_INC;
    edx = 0x01E28500u; /* 0x100871AA: mov edx, 0x1e28500 */
    /* cmp esi, edx */ /* 0x100871AF: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_100871B8; /* 0x100871B1: jl 0x100871b8 */
L_100871B3:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100871B3: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edx; /* 0x100871B4: sub esi, edx */
    _flag_k = FK_CMP;
    goto L_100871BB; /* 0x100871B6: jmp 0x100871bb */
L_100871B8:
    MEM32(ebp + (-0x4)) = ecx; /* 0x100871B8: mov dword ptr [ebp - 4], ecx */
L_100871BB:
    MEM32(edi + 0x14) = eax; /* 0x100871BB: mov dword ptr [edi + 0x14], eax */
    eax = esi; /* 0x100871BE: mov eax, esi */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x100871C0: cdq  */
    MEM32(ebp + 0x8) = 0x00015180u; /* 0x100871C1: mov dword ptr [ebp + 8], 0x15180 */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)MEM32(ebp + 0x8); /* 0x100871C8: idiv dword ptr [ebp + 8] */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    MEM32(edi + 0x1C) = eax; /* 0x100871CB: mov dword ptr [edi + 0x1c], eax */
    eax = (uint32_t)((int32_t)eax * (int32_t)0xFFFEAE80u); /* 0x100871CE: imul eax, eax, 0xfffeae80 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x100871D4: add esi, eax */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x100871D6: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = 0x100DFE70u; /* 0x100871DA: mov eax, 0x100dfe70 */
    if (CMP_NE(_flag_a, _flag_b)) goto L_100871E6; /* 0x100871DF: jne 0x100871e6 */
L_100871E1:
    eax = 0x100DFE38u; /* 0x100871E1: mov eax, 0x100dfe38 */
L_100871E6:
    edx = MEM32(edi + 0x1C); /* 0x100871E6: mov edx, dword ptr [edi + 0x1c] */
    /* cmp MEM32(eax + 0x4), edx */ /* 0x100871E9: cmp dword ptr [eax + 4], edx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_100871F4; /* 0x100871EC: jge 0x100871f4 */
L_100871EE:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100871EE: inc ecx */
    _flag_k = FK_INC;
    /* cmp MEM32(eax + ecx * 4), edx */ /* 0x100871EF: cmp dword ptr [eax + ecx*4], edx */
    _flag_a = (uint32_t)(MEM32(eax + ecx * 4)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_100871EE; /* 0x100871F2: jl 0x100871ee */
L_100871F4:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x100871F4: dec ecx */
    _flag_k = FK_DEC;
    MEM32(edi + 0x10) = ecx; /* 0x100871F5: mov dword ptr [edi + 0x10], ecx */
    PUSH32(esp, 7); /* 0x100871F8: push 7 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax + ecx * 4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(eax + ecx * 4); /* 0x100871FA: sub edx, dword ptr [eax + ecx*4] */
    _flag_k = FK_CMP;
    MEM32(edi + 0xC) = edx; /* 0x100871FD: mov dword ptr [edi + 0xc], edx */
    eax = MEM32(ebx); /* 0x10087200: mov eax, dword ptr [ebx] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10087202: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)MEM32(ebp + 0x8); /* 0x10087203: idiv dword ptr [ebp + 8] */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    ecx = POP32_VAL(esp); /* 0x10087206: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x10087207: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(edi + 0x20)); _flag_b = (uint32_t)(0);
    MEM32(edi + 0x20) = MEM32(edi + 0x20) & 0; /* 0x1008720A: and dword ptr [edi + 0x20], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1008720E: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x1008720F: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    eax = esi; /* 0x10087211: mov eax, esi */
    ecx = 0xE10u; /* 0x10087213: mov ecx, 0xe10 */
    MEM32(edi + 0x18) = edx; /* 0x10087218: mov dword ptr [edi + 0x18], edx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1008721B: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x1008721C: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    PUSH32(esp, 0x3Cu); /* 0x1008721E: push 0x3c */
    MEM32(edi + 0x8) = eax; /* 0x10087220: mov dword ptr [edi + 8], eax */
    eax = (uint32_t)((int32_t)eax * (int32_t)0xFFFFF1F0u); /* 0x10087223: imul eax, eax, 0xfffff1f0 */
    ecx = POP32_VAL(esp); /* 0x10087229: pop ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x1008722A: add esi, eax */
    _flag_k = FK_ADD;
    eax = esi; /* 0x1008722C: mov eax, esi */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1008722E: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x1008722F: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    MEM32(edi + 0x4) = eax; /* 0x10087231: mov dword ptr [edi + 4], eax */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3Cu); /* 0x10087234: imul eax, eax, 0x3c */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x10087237: sub esi, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10087239: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi) = esi; /* 0x1008723B: mov dword ptr [edi], esi */
L_1008723D:
    ebx = POP32_VAL(esp); /* 0x1008723D: pop ebx */
L_1008723E:
    edi = POP32_VAL(esp); /* 0x1008723E: pop edi */
    esi = POP32_VAL(esp); /* 0x1008723F: pop esi */
    esp = ebp; /* 0x10087240: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10087242: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10087243: ret  */
    RECOMP_REGS_OUT();
}

void sub_10087244(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10087244u);

L_10087244:
    PUSH32(esp, ebp); /* 0x10087244: push ebp */
    ebp = esp; /* 0x10087245: mov ebp, esp */
    PUSH32(esp, esi); /* 0x10087247: push esi */
    RECOMP_CALL(sub_100870B6); /* 0x10087248: call 0x100870b6 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1008724D: mov esi, eax */
    /* test esi, esi */ /* 0x1008724F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10087266; /* 0x10087251: je 0x10087266 */
L_10087253:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10087253: push dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x10087256: push esi */
    RECOMP_CALL(sub_10087269); /* 0x10087257: call 0x10087269 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1008725C: neg eax */
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1008725E: pop ecx */
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1008725F: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = ~eax; /* 0x10087261: not eax */
    ecx = POP32_VAL(esp); /* 0x10087263: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    eax = eax & esi; /* 0x10087264: and eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_10087266:
    esi = POP32_VAL(esp); /* 0x10087266: pop esi */
    ebp = POP32_VAL(esp); /* 0x10087267: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10087268: ret  */
    RECOMP_REGS_OUT();
}

void sub_10087269(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10087269u);

L_10087269:
    PUSH32(esp, ebp); /* 0x10087269: push ebp */
    ebp = esp; /* 0x1008726A: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1008726C: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1008726F: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10087270: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x10087272: push esi */
    esi = MEM32(ebp + 0x8); /* 0x10087273: mov esi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x8)) = ebx; /* 0x10087276: mov dword ptr [ebp - 8], ebx */
    MEM32(ebp + (-0xC)) = ebx; /* 0x10087279: mov dword ptr [ebp - 0xc], ebx */
    MEM32(ebp + (-0x4)) = ebx; /* 0x1008727C: mov dword ptr [ebp - 4], ebx */
    /* test esi, esi */ /* 0x1008727F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10087296; /* 0x10087281: jne 0x10087296 */
L_10087283:
    RECOMP_CALL(sub_1001177D); /* 0x10087283: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x10087288: push 0x16 */
    esi = POP32_VAL(esp); /* 0x1008728A: pop esi */
    MEM32(eax) = esi; /* 0x1008728B: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x1008728D: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x10087292: mov eax, esi */
    goto L_100872D0; /* 0x10087294: jmp 0x100872d0 */
L_10087296:
    PUSH32(esp, edi); /* 0x10087296: push edi */
    PUSH32(esp, 0x24u); /* 0x10087297: push 0x24 */
    PUSH32(esp, 0xFFu); /* 0x10087299: push 0xff */
    PUSH32(esp, esi); /* 0x1008729E: push esi */
    RECOMP_CALL(sub_10011533); /* 0x1008729F: call 0x10011533 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0xC); /* 0x100872A4: mov edi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100872A7: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x100872AA: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100872BF; /* 0x100872AC: jne 0x100872bf */
L_100872AE:
    RECOMP_CALL(sub_1001177D); /* 0x100872AE: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x100872B3: push 0x16 */
    esi = POP32_VAL(esp); /* 0x100872B5: pop esi */
    MEM32(eax) = esi; /* 0x100872B6: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x100872B8: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    goto L_100872CD; /* 0x100872BD: jmp 0x100872cd */
L_100872BF:
    /* cmp MEM32(edi), ebx */ /* 0x100872BF: cmp dword ptr [edi], ebx */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_100872D6; /* 0x100872C1: jge 0x100872d6 */
L_100872C3:
    RECOMP_CALL(sub_1001177D); /* 0x100872C3: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x100872C8: push 0x16 */
    esi = POP32_VAL(esp); /* 0x100872CA: pop esi */
    MEM32(eax) = esi; /* 0x100872CB: mov dword ptr [eax], esi */
L_100872CD:
    eax = esi; /* 0x100872CD: mov eax, esi */
L_100872CF:
    edi = POP32_VAL(esp); /* 0x100872CF: pop edi */
L_100872D0:
    esi = POP32_VAL(esp); /* 0x100872D0: pop esi */
    ebx = POP32_VAL(esp); /* 0x100872D1: pop ebx */
    esp = ebp; /* 0x100872D2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100872D4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100872D5: ret  */
L_100872D6:
    RECOMP_CALL(sub_10015B4C); /* 0x100872D6: call 0x10015b4c */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x8); /* 0x100872DB: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x100872DE: push eax */
    RECOMP_CALL(sub_10015B1A); /* 0x100872DF: call 0x10015b1a */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100872E4: pop ecx */
    /* test eax, eax */ /* 0x100872E5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008745E; /* 0x100872E7: jne 0x1008745e */
L_100872ED:
    eax = ebp + (-0xC); /* 0x100872ED: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x100872F0: push eax */
    RECOMP_CALL(sub_10015B33); /* 0x100872F1: call 0x10015b33 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100872F6: pop ecx */
    /* test eax, eax */ /* 0x100872F7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008745E; /* 0x100872F9: jne 0x1008745e */
L_100872FF:
    eax = ebp + (-0x4); /* 0x100872FF: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x10087302: push eax */
    RECOMP_CALL(sub_10015B01); /* 0x10087303: call 0x10015b01 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10087308: pop ecx */
    /* test eax, eax */ /* 0x10087309: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008745E; /* 0x1008730B: jne 0x1008745e */
L_10087311:
    eax = MEM32(edi); /* 0x10087311: mov eax, dword ptr [edi] */
    /* cmp eax, 0x0003F480u */ /* 0x10087313: cmp eax, 0x3f480 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x0003F480u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_10087375; /* 0x10087318: jle 0x10087375 */
L_1008731A:
    /* cmp eax, 0x7FFC0B7Fu */ /* 0x1008731A: cmp eax, 0x7ffc0b7f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FFC0B7Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_10087375; /* 0x1008731F: jge 0x10087375 */
L_10087321:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + (-0x4)); /* 0x10087321: sub eax, dword ptr [ebp - 4] */
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = eax; /* 0x10087324: mov dword ptr [ebp + 8], eax */
    eax = ebp + 0x8; /* 0x10087327: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x1008732A: push eax */
    PUSH32(esp, esi); /* 0x1008732B: push esi */
    RECOMP_CALL(sub_10087110); /* 0x1008732C: call 0x10087110 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10087331: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10087332: pop ecx */
    /* test eax, eax */ /* 0x10087333: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100872CF; /* 0x10087335: jne 0x100872cf */
L_10087337:
    /* cmp MEM32(ebp + (-0x8)), ebx */ /* 0x10087337: cmp dword ptr [ebp - 8], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008741F; /* 0x1008733A: je 0x1008741f */
L_10087340:
    PUSH32(esp, esi); /* 0x10087340: push esi */
    RECOMP_CALL(sub_10015BB2); /* 0x10087341: call 0x10015bb2 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10087346: pop ecx */
    /* test eax, eax */ /* 0x10087347: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008741F; /* 0x10087349: je 0x1008741f */
L_1008734F:
    eax = MEM32(ebp + (-0xC)); /* 0x1008734F: mov eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) - eax; /* 0x10087352: sub dword ptr [ebp + 8], eax */
    _flag_k = FK_CMP;
    eax = ebp + 0x8; /* 0x10087355: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x10087358: push eax */
    PUSH32(esp, esi); /* 0x10087359: push esi */
    RECOMP_CALL(sub_10087110); /* 0x1008735A: call 0x10087110 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008735F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10087360: pop ecx */
    /* test eax, eax */ /* 0x10087361: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100872CF; /* 0x10087363: jne 0x100872cf */
L_10087369:
    MEM32(esi + 0x20) = 1; /* 0x10087369: mov dword ptr [esi + 0x20], 1 */
    goto L_1008741F; /* 0x10087370: jmp 0x1008741f */
L_10087375:
    PUSH32(esp, edi); /* 0x10087375: push edi */
    PUSH32(esp, esi); /* 0x10087376: push esi */
    RECOMP_CALL(sub_10087110); /* 0x10087377: call 0x10087110 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008737C: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1008737D: pop ecx */
    /* test eax, eax */ /* 0x1008737E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100872CF; /* 0x10087380: jne 0x100872cf */
L_10087386:
    /* cmp MEM32(ebp + (-0x8)), ebx */ /* 0x10087386: cmp dword ptr [ebp - 8], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100873A7; /* 0x10087389: je 0x100873a7 */
L_1008738B:
    PUSH32(esp, esi); /* 0x1008738B: push esi */
    RECOMP_CALL(sub_10015BB2); /* 0x1008738C: call 0x10015bb2 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10087391: pop ecx */
    /* test eax, eax */ /* 0x10087392: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100873A7; /* 0x10087394: je 0x100873a7 */
L_10087396:
    edi = MEM32(esi); /* 0x10087396: mov edi, dword ptr [esi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - MEM32(ebp + (-0x4)); /* 0x10087398: sub edi, dword ptr [ebp - 4] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - MEM32(ebp + (-0xC)); /* 0x1008739B: sub edi, dword ptr [ebp - 0xc] */
    _flag_k = FK_CMP;
    MEM32(esi + 0x20) = 1; /* 0x1008739E: mov dword ptr [esi + 0x20], 1 */
    goto L_100873AC; /* 0x100873A5: jmp 0x100873ac */
L_100873A7:
    edi = MEM32(esi); /* 0x100873A7: mov edi, dword ptr [esi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - MEM32(ebp + (-0x4)); /* 0x100873A9: sub edi, dword ptr [ebp - 4] */
    _flag_k = FK_CMP;
L_100873AC:
    eax = edi; /* 0x100873AC: mov eax, edi */
    PUSH32(esp, 0x3Cu); /* 0x100873AE: push 0x3c */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x100873B0: cdq  */
    ebx = POP32_VAL(esp); /* 0x100873B1: pop ebx */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ebx; /* 0x100873B2: idiv ebx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    MEM32(esi) = edx; /* 0x100873B4: mov dword ptr [esi], edx */
    /* test edx, edx */ /* 0x100873B6: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_100873C1; /* 0x100873B8: jns 0x100873c1 */
L_100873BA:
    ecx = edx + 0x3C; /* 0x100873BA: lea ecx, [edx + 0x3c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ebx; /* 0x100873BD: sub edi, ebx */
    _flag_k = FK_CMP;
    MEM32(esi) = ecx; /* 0x100873BF: mov dword ptr [esi], ecx */
L_100873C1:
    eax = edi; /* 0x100873C1: mov eax, edi */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x100873C3: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ebx; /* 0x100873C4: idiv ebx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    edi = eax; /* 0x100873C6: mov edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(esi + 0x4); /* 0x100873C8: add edi, dword ptr [esi + 4] */
    _flag_k = FK_ADD;
    eax = edi; /* 0x100873CB: mov eax, edi */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x100873CD: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ebx; /* 0x100873CE: idiv ebx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    MEM32(esi + 0x4) = edx; /* 0x100873D0: mov dword ptr [esi + 4], edx */
    /* test edx, edx */ /* 0x100873D3: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_100873DF; /* 0x100873D5: jns 0x100873df */
L_100873D7:
    ecx = edx + 0x3C; /* 0x100873D7: lea ecx, [edx + 0x3c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ebx; /* 0x100873DA: sub edi, ebx */
    _flag_k = FK_CMP;
    MEM32(esi + 0x4) = ecx; /* 0x100873DC: mov dword ptr [esi + 4], ecx */
L_100873DF:
    eax = edi; /* 0x100873DF: mov eax, edi */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x100873E1: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ebx; /* 0x100873E2: idiv ebx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    PUSH32(esp, 0x18u); /* 0x100873E4: push 0x18 */
    edi = eax; /* 0x100873E6: mov edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(esi + 0x8); /* 0x100873E8: add edi, dword ptr [esi + 8] */
    _flag_k = FK_ADD;
    eax = edi; /* 0x100873EB: mov eax, edi */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x100873ED: cdq  */
    ebx = POP32_VAL(esp); /* 0x100873EE: pop ebx */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ebx; /* 0x100873EF: idiv ebx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    MEM32(esi + 0x8) = edx; /* 0x100873F1: mov dword ptr [esi + 8], edx */
    /* test edx, edx */ /* 0x100873F4: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_10087400; /* 0x100873F6: jns 0x10087400 */
L_100873F8:
    ecx = edx + 0x18; /* 0x100873F8: lea ecx, [edx + 0x18] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ebx; /* 0x100873FB: sub edi, ebx */
    _flag_k = FK_CMP;
    MEM32(esi + 0x8) = ecx; /* 0x100873FD: mov dword ptr [esi + 8], ecx */
L_10087400:
    eax = edi; /* 0x10087400: mov eax, edi */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10087402: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ebx; /* 0x10087403: idiv ebx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    ecx = eax; /* 0x10087405: mov ecx, eax */
    /* test ecx, ecx */ /* 0x10087407: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10087426; /* 0x10087409: jle 0x10087426 */
L_1008740B:
    eax = MEM32(esi + 0x18); /* 0x1008740B: mov eax, dword ptr [esi + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1008740E: add eax, ecx */
    _flag_k = FK_ADD;
    PUSH32(esp, 7); /* 0x10087410: push 7 */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10087412: cdq  */
    edi = POP32_VAL(esp); /* 0x10087413: pop edi */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)edi; /* 0x10087414: idiv edi */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) + ecx; /* 0x10087416: add dword ptr [esi + 0xc], ecx */
    _flag_k = FK_ADD;
    MEM32(esi + 0x18) = edx; /* 0x10087419: mov dword ptr [esi + 0x18], edx */
L_1008741C:
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) + ecx; /* 0x1008741C: add dword ptr [esi + 0x1c], ecx */
    _flag_k = FK_ADD;
L_1008741F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1008741F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_100872CF; /* 0x10087421: jmp 0x100872cf */
L_10087426:
    RECOMP_BACKEDGE();
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NS, _cf)) goto L_1008741F; /* 0x10087426: jns 0x1008741f */
L_10087428:
    eax = MEM32(esi + 0x18); /* 0x10087428: mov eax, dword ptr [esi + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x1008742B: add eax, 7 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) + ecx; /* 0x1008742E: add dword ptr [esi + 0xc], ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x10087431: add eax, ecx */
    _flag_k = FK_ADD;
    PUSH32(esp, 7); /* 0x10087433: push 7 */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10087435: cdq  */
    edi = POP32_VAL(esp); /* 0x10087436: pop edi */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)edi; /* 0x10087437: idiv edi */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    eax = MEM32(esi + 0xC); /* 0x10087439: mov eax, dword ptr [esi + 0xc] */
    MEM32(esi + 0x18) = edx; /* 0x1008743C: mov dword ptr [esi + 0x18], edx */
    /* test eax, eax */ /* 0x1008743F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1008741C; /* 0x10087441: jg 0x1008741c */
L_10087443:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x1Fu; /* 0x10087443: add eax, 0x1f */
    _flag_k = FK_ADD;
    MEM32(esi + 0x10) = 0xBu; /* 0x10087446: mov dword ptr [esi + 0x10], 0xb */
    MEM32(esi + 0xC) = eax; /* 0x1008744D: mov dword ptr [esi + 0xc], eax */
    eax = ecx + 0x16D; /* 0x10087450: lea eax, [ecx + 0x16d] */
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) + eax; /* 0x10087456: add dword ptr [esi + 0x1c], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x14) = MEM32(esi + 0x14) - 1; /* 0x10087459: dec dword ptr [esi + 0x14] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    goto L_1008741F; /* 0x1008745C: jmp 0x1008741f */
L_1008745E:
    PUSH32(esp, ebx); /* 0x1008745E: push ebx */
    PUSH32(esp, ebx); /* 0x1008745F: push ebx */
    PUSH32(esp, ebx); /* 0x10087460: push ebx */
    PUSH32(esp, ebx); /* 0x10087461: push ebx */
    PUSH32(esp, ebx); /* 0x10087462: push ebx */
    RECOMP_CALL(sub_100A469B); /* 0x10087463: call 0x100a469b */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x10087468u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10087469(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10087469u);

L_10087469:
    PUSH32(esp, ebp); /* 0x10087469: push ebp */
    ebp = esp; /* 0x1008746A: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x34u; /* 0x1008746C: sub esp, 0x34 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x1008746F: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x10087474: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x10087476: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x34)) = MEM32(ebp + (-0x34)) & 0; /* 0x10087479: and dword ptr [ebp - 0x34], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x30)) = MEM32(ebp + (-0x30)) & 0; /* 0x1008747D: and dword ptr [ebp - 0x30], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x10087481: push edi */
    edi = MEM32(ebp + 0x8); /* 0x10087482: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x10087485: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100874A1; /* 0x10087487: jne 0x100874a1 */
L_10087489:
    RECOMP_CALL(sub_1001177D); /* 0x10087489: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1008748E: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10087494: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10087499: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1008752F; /* 0x1008749C: jmp 0x1008752f */
L_100874A1:
    PUSH32(esp, ebx); /* 0x100874A1: push ebx */
    ebx = MEM32(edi + 0x14); /* 0x100874A2: mov ebx, dword ptr [edi + 0x14] */
    PUSH32(esp, esi); /* 0x100874A5: push esi */
    MEM32(ebp + (-0x2C)) = ebx; /* 0x100874A6: mov dword ptr [ebp - 0x2c], ebx */
    eax = ebx + (-0x45); /* 0x100874A9: lea eax, [ebx - 0x45] */
    /* cmp eax, 0x46u */ /* 0x100874AC: cmp eax, 0x46 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x46u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1008751F; /* 0x100874AF: ja 0x1008751f */
L_100874B1:
    eax = MEM32(edi + 0x10); /* 0x100874B1: mov eax, dword ptr [edi + 0x10] */
    /* test eax, eax */ /* 0x100874B4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100874BD; /* 0x100874B6: js 0x100874bd */
L_100874B8:
    /* cmp eax, 0xBu */ /* 0x100874B8: cmp eax, 0xb */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_100874E1; /* 0x100874BB: jle 0x100874e1 */
L_100874BD:
    PUSH32(esp, 0xCu); /* 0x100874BD: push 0xc */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x100874BF: cdq  */
    ecx = POP32_VAL(esp); /* 0x100874C0: pop ecx */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x100874C1: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x100874C3: add ebx, eax */
    _flag_k = FK_ADD;
    MEM32(edi + 0x10) = edx; /* 0x100874C5: mov dword ptr [edi + 0x10], edx */
    MEM32(ebp + (-0x2C)) = ebx; /* 0x100874C8: mov dword ptr [ebp - 0x2c], ebx */
    /* test edx, edx */ /* 0x100874CB: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_100874D9; /* 0x100874CD: jns 0x100874d9 */
L_100874CF:
    eax = edx + 0xC; /* 0x100874CF: lea eax, [edx + 0xc] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x100874D2: dec ebx */
    _flag_k = FK_DEC;
    MEM32(edi + 0x10) = eax; /* 0x100874D3: mov dword ptr [edi + 0x10], eax */
    MEM32(ebp + (-0x2C)) = ebx; /* 0x100874D6: mov dword ptr [ebp - 0x2c], ebx */
L_100874D9:
    eax = ebx + (-0x45); /* 0x100874D9: lea eax, [ebx - 0x45] */
    /* cmp eax, 0x46u */ /* 0x100874DC: cmp eax, 0x46 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x46u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1008751F; /* 0x100874DF: ja 0x1008751f */
L_100874E1:
    eax = MEM32(edi + 0x10); /* 0x100874E1: mov eax, dword ptr [edi + 0x10] */
    edx = MEM32(eax * 4 + 0x100DFE38); /* 0x100874E4: mov edx, dword ptr [eax*4 + 0x100dfe38] */
    /* test LO8(ebx), 3 */ /* 0x100874EB: test bl, 3 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100874F6; /* 0x100874EE: jne 0x100874f6 */
L_100874F0:
    /* cmp eax, 1 */ /* 0x100874F0: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_100874F6; /* 0x100874F3: jle 0x100874f6 */
L_100874F5:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x100874F5: inc edx */
    _flag_k = FK_INC;
L_100874F6:
    ecx = ebx + (-0x1); /* 0x100874F6: lea ecx, [ebx - 1] */
    eax = (uint32_t)((int32_t)ebx * (int32_t)0x16Du); /* 0x100874F9: imul eax, ebx, 0x16d */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x100874FF: sar ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 2u);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFF9C21u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0xFFFF9C21u; /* 0x10087502: add edx, 0xffff9c21 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x10087508: add ecx, edx */
    _flag_k = FK_ADD;
    edx = MEM32(edi + 0xC); /* 0x1008750A: mov edx, dword ptr [edi + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x1008750D: add ecx, eax */
    _flag_k = FK_ADD;
    ecx = ecx + edx; /* 0x1008750F: lea ecx, [ecx + edx] */
    MEM32(ebp + (-0x2C)) = ecx; /* 0x10087512: mov dword ptr [ebp - 0x2c], ecx */
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_S)) goto L_1008753E; /* 0x10087515: js 0x1008753e */
L_10087517:
    /* test edx, edx */ /* 0x10087517: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10087546; /* 0x10087519: js 0x10087546 */
L_1008751B:
    /* test ecx, ecx */ /* 0x1008751B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_10087546; /* 0x1008751D: jns 0x10087546 */
L_1008751F:
    RECOMP_CALL(sub_1001177D); /* 0x1008751F: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10087524: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1008752A: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008752D:
    esi = POP32_VAL(esp); /* 0x1008752D: pop esi */
    ebx = POP32_VAL(esp); /* 0x1008752E: pop ebx */
L_1008752F:
    ecx = MEM32(ebp + (-0x4)); /* 0x1008752F: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x10087532: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x10087534: pop edi */
    RECOMP_CALL(sub_1000F7C6); /* 0x10087535: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1008753A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1008753C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008753D: ret  */
L_1008753E:
    /* test edx, edx */ /* 0x1008753E: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_10087546; /* 0x10087540: jns 0x10087546 */
L_10087542:
    /* test ecx, ecx */ /* 0x10087542: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1008751F; /* 0x10087544: jns 0x1008751f */
L_10087546:
    esi = (uint32_t)((int32_t)ecx * (int32_t)0x18u); /* 0x10087546: imul esi, ecx, 0x18 */
    /* test ecx, ecx */ /* 0x10087549: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008755E; /* 0x1008754B: je 0x1008755e */
L_1008754D:
    eax = esi; /* 0x1008754D: mov eax, esi */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1008754F: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x10087550: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10087552: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x18u */ /* 0x10087554: cmp eax, 0x18 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(ecx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x10087557: setne cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1008755A: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10087562; /* 0x1008755C: jmp 0x10087562 */
L_1008755E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1008755E: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebx; /* 0x10087560: mov ecx, ebx */
L_10087562:
    /* test ecx, ecx */ /* 0x10087562: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008751F; /* 0x10087564: jne 0x1008751f */
L_10087566:
    eax = MEM32(edi + 0x8); /* 0x10087566: mov eax, dword ptr [edi + 8] */
    ecx = eax + esi; /* 0x10087569: lea ecx, [eax + esi] */
    MEM32(ebp + (-0x2C)) = ecx; /* 0x1008756C: mov dword ptr [ebp - 0x2c], ecx */
    /* test esi, esi */ /* 0x1008756F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1008757D; /* 0x10087571: js 0x1008757d */
L_10087573:
    /* test eax, eax */ /* 0x10087573: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10087585; /* 0x10087575: js 0x10087585 */
L_10087577:
    /* test ecx, ecx */ /* 0x10087577: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_10087585; /* 0x10087579: jns 0x10087585 */
L_1008757B:
    RECOMP_BACKEDGE();
    goto L_1008751F; /* 0x1008757B: jmp 0x1008751f */
L_1008757D:
    /* test eax, eax */ /* 0x1008757D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_10087585; /* 0x1008757F: jns 0x10087585 */
L_10087581:
    /* test ecx, ecx */ /* 0x10087581: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1008751F; /* 0x10087583: jns 0x1008751f */
L_10087585:
    esi = (uint32_t)((int32_t)ecx * (int32_t)0x3Cu); /* 0x10087585: imul esi, ecx, 0x3c */
    /* test ecx, ecx */ /* 0x10087588: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008759B; /* 0x1008758A: je 0x1008759b */
L_1008758C:
    eax = esi; /* 0x1008758C: mov eax, esi */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1008758E: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x1008758F: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10087591: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x3Cu */ /* 0x10087593: cmp eax, 0x3c */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(ecx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x10087596: setne cl */
    goto L_1008759D; /* 0x10087599: jmp 0x1008759d */
L_1008759B:
    ecx = ebx; /* 0x1008759B: mov ecx, ebx */
L_1008759D:
    /* test ecx, ecx */ /* 0x1008759D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008751F; /* 0x1008759F: jne 0x1008751f */
L_100875A5:
    eax = MEM32(edi + 0x4); /* 0x100875A5: mov eax, dword ptr [edi + 4] */
    ecx = eax + esi; /* 0x100875A8: lea ecx, [eax + esi] */
    MEM32(ebp + (-0x2C)) = ecx; /* 0x100875AB: mov dword ptr [ebp - 0x2c], ecx */
    /* test esi, esi */ /* 0x100875AE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100875BF; /* 0x100875B0: js 0x100875bf */
L_100875B2:
    /* test eax, eax */ /* 0x100875B2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100875CB; /* 0x100875B4: js 0x100875cb */
L_100875B6:
    /* test ecx, ecx */ /* 0x100875B6: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_100875CB; /* 0x100875B8: jns 0x100875cb */
L_100875BA:
    RECOMP_BACKEDGE();
    goto L_1008751F; /* 0x100875BA: jmp 0x1008751f */
L_100875BF:
    /* test eax, eax */ /* 0x100875BF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_100875CB; /* 0x100875C1: jns 0x100875cb */
L_100875C3:
    /* test ecx, ecx */ /* 0x100875C3: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1008751F; /* 0x100875C5: jns 0x1008751f */
L_100875CB:
    esi = (uint32_t)((int32_t)ecx * (int32_t)0x3Cu); /* 0x100875CB: imul esi, ecx, 0x3c */
    /* test ecx, ecx */ /* 0x100875CE: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100875E1; /* 0x100875D0: je 0x100875e1 */
L_100875D2:
    eax = esi; /* 0x100875D2: mov eax, esi */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x100875D4: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x100875D5: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100875D7: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x3Cu */ /* 0x100875D9: cmp eax, 0x3c */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(ecx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x100875DC: setne cl */
    goto L_100875E3; /* 0x100875DF: jmp 0x100875e3 */
L_100875E1:
    ecx = ebx; /* 0x100875E1: mov ecx, ebx */
L_100875E3:
    /* test ecx, ecx */ /* 0x100875E3: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008751F; /* 0x100875E5: jne 0x1008751f */
L_100875EB:
    ecx = MEM32(edi); /* 0x100875EB: mov ecx, dword ptr [edi] */
    eax = esi + ecx; /* 0x100875ED: lea eax, [esi + ecx] */
    MEM32(ebp + (-0x2C)) = eax; /* 0x100875F0: mov dword ptr [ebp - 0x2c], eax */
    /* test esi, esi */ /* 0x100875F3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10087604; /* 0x100875F5: js 0x10087604 */
L_100875F7:
    /* test ecx, ecx */ /* 0x100875F7: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10087610; /* 0x100875F9: js 0x10087610 */
L_100875FB:
    /* test eax, eax */ /* 0x100875FB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_10087610; /* 0x100875FD: jns 0x10087610 */
L_100875FF:
    RECOMP_BACKEDGE();
    goto L_1008751F; /* 0x100875FF: jmp 0x1008751f */
L_10087604:
    /* test ecx, ecx */ /* 0x10087604: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_10087610; /* 0x10087606: jns 0x10087610 */
L_10087608:
    /* test eax, eax */ /* 0x10087608: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1008751F; /* 0x1008760A: jns 0x1008751f */
L_10087610:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x10087610: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10087678; /* 0x10087614: je 0x10087678 */
L_10087616:
    RECOMP_CALL(sub_10015B4C); /* 0x10087616: call 0x10015b4c */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x34); /* 0x1008761B: lea eax, [ebp - 0x34] */
    PUSH32(esp, eax); /* 0x1008761E: push eax */
    RECOMP_CALL(sub_10015B33); /* 0x1008761F: call 0x10015b33 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10087624: pop ecx */
    /* test eax, eax */ /* 0x10087625: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008769F; /* 0x10087627: jne 0x1008769f */
L_10087629:
    eax = ebp + (-0x30); /* 0x10087629: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x1008762C: push eax */
    RECOMP_CALL(sub_10015B01); /* 0x1008762D: call 0x10015b01 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10087632: pop ecx */
    /* test eax, eax */ /* 0x10087633: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008769F; /* 0x10087635: jne 0x1008769f */
L_10087637:
    eax = MEM32(ebp + (-0x30)); /* 0x10087637: mov eax, dword ptr [ebp - 0x30] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x2C)) = MEM32(ebp + (-0x2C)) + eax; /* 0x1008763A: add dword ptr [ebp - 0x2c], eax */
    _flag_k = FK_ADD;
    eax = ebp + (-0x2C); /* 0x1008763D: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x10087640: push eax */
    eax = ebp + (-0x28); /* 0x10087641: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x10087644: push eax */
    RECOMP_CALL(sub_10087269); /* 0x10087645: call 0x10087269 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008764A: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1008764B: pop ecx */
    /* test eax, eax */ /* 0x1008764C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008751F; /* 0x1008764E: jne 0x1008751f */
L_10087654:
    eax = MEM32(edi + 0x20); /* 0x10087654: mov eax, dword ptr [edi + 0x20] */
    /* test eax, eax */ /* 0x10087657: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_10087663; /* 0x10087659: jg 0x10087663 */
L_1008765B:
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1008768F; /* 0x1008765B: jns 0x1008768f */
L_1008765D:
    /* cmp MEM32(ebp + (-0x8)), 0 */ /* 0x1008765D: cmp dword ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1008768F; /* 0x10087661: jle 0x1008768f */
L_10087663:
    eax = MEM32(ebp + (-0x34)); /* 0x10087663: mov eax, dword ptr [ebp - 0x34] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x2C)) = MEM32(ebp + (-0x2C)) + eax; /* 0x10087666: add dword ptr [ebp - 0x2c], eax */
    _flag_k = FK_ADD;
    eax = ebp + (-0x2C); /* 0x10087669: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x1008766C: push eax */
    eax = ebp + (-0x28); /* 0x1008766D: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x10087670: push eax */
    RECOMP_CALL(sub_10087269); /* 0x10087671: call 0x10087269 */
    RECOMP_FLAGS_IN();
    goto L_10087685; /* 0x10087676: jmp 0x10087685 */
L_10087678:
    eax = ebp + (-0x2C); /* 0x10087678: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x1008767B: push eax */
    eax = ebp + (-0x28); /* 0x1008767C: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x1008767F: push eax */
    RECOMP_CALL(sub_10087110); /* 0x10087680: call 0x10087110 */
    RECOMP_FLAGS_IN();
L_10087685:
    ecx = POP32_VAL(esp); /* 0x10087685: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10087686: pop ecx */
    /* test eax, eax */ /* 0x10087687: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008751F; /* 0x10087689: jne 0x1008751f */
L_1008768F:
    eax = MEM32(ebp + (-0x2C)); /* 0x1008768F: mov eax, dword ptr [ebp - 0x2c] */
    esi = ebp + (-0x28); /* 0x10087692: lea esi, [ebp - 0x28] */
    PUSH32(esp, 9); /* 0x10087695: push 9 */
    ecx = POP32_VAL(esp); /* 0x10087697: pop ecx */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x10087698: rep movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_BACKEDGE();
    goto L_1008752D; /* 0x1008769A: jmp 0x1008752d */
L_1008769F:
    PUSH32(esp, ebx); /* 0x1008769F: push ebx */
    PUSH32(esp, ebx); /* 0x100876A0: push ebx */
    PUSH32(esp, ebx); /* 0x100876A1: push ebx */
    PUSH32(esp, ebx); /* 0x100876A2: push ebx */
    PUSH32(esp, ebx); /* 0x100876A3: push ebx */
    RECOMP_CALL(sub_100A469B); /* 0x100876A4: call 0x100a469b */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x100876A9u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100876AA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100876AAu);

L_100876AA:
    PUSH32(esp, ebp); /* 0x100876AA: push ebp */
    ebp = esp; /* 0x100876AB: mov ebp, esp */
    PUSH32(esp, 0); /* 0x100876AD: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100876AF: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10087469); /* 0x100876B2: call 0x10087469 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100876B7: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100876B8: pop ecx */
    ebp = POP32_VAL(esp); /* 0x100876B9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100876BA: ret  */
    RECOMP_REGS_OUT();
}

void sub_100876BB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100876BBu);

L_100876BB:
    PUSH32(esp, ebp); /* 0x100876BB: push ebp */
    ebp = esp; /* 0x100876BC: mov ebp, esp */
    PUSH32(esp, 1); /* 0x100876BE: push 1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100876C0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10087469); /* 0x100876C3: call 0x10087469 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100876C8: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100876C9: pop ecx */
    ebp = POP32_VAL(esp); /* 0x100876CA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100876CB: ret  */
    RECOMP_REGS_OUT();
}

void sub_100876CC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100876CCu);

L_100876CC:
    PUSH32(esp, ebp); /* 0x100876CC: push ebp */
    ebp = esp; /* 0x100876CD: mov ebp, esp */
    PUSH32(esp, 9); /* 0x100876CF: push 9 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100876D1: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100876E6); /* 0x100876D4: call 0x100876e6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x100876D9: neg eax */
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x100876DB: pop ecx */
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x100876DC: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = ~eax; /* 0x100876DE: not eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    eax = eax & MEM32(ebp + 0x8); /* 0x100876E0: and eax, dword ptr [ebp + 8] */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x100876E3: pop ecx */
    ebp = POP32_VAL(esp); /* 0x100876E4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100876E5: ret  */
    RECOMP_REGS_OUT();
}

void sub_100876E6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100876E6u);

L_100876E6:
    PUSH32(esp, ebp); /* 0x100876E6: push ebp */
    ebp = esp; /* 0x100876E7: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x100876E9: sub esp, 0x14 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x100876EC: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x100876F1: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x100876F3: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x100876F6: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x100876F7: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x100876FA: push esi */
    /* test ebx, ebx */ /* 0x100876FB: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10087779; /* 0x100876FD: je 0x10087779 */
L_100876FF:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x100876FF: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10087779; /* 0x10087703: jbe 0x10087779 */
L_10087705:
    /* cmp MEM32(ebp + 0xC), 9 */ /* 0x10087705: cmp dword ptr [ebp + 0xc], 9 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM8(ebx) = (uint8_t)(0); /* 0x10087709: mov byte ptr [ebx], 0 */
    if (CMP_AE(_flag_a, _flag_b)) goto L_10087717; /* 0x1008770C: jae 0x10087717 */
L_1008770E:
    RECOMP_CALL(sub_1001177D); /* 0x1008770E: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x22u); /* 0x10087713: push 0x22 */
    goto L_10087780; /* 0x10087715: jmp 0x10087780 */
L_10087717:
    PUSH32(esp, edi); /* 0x10087717: push edi */
    eax = ebp + (-0x14); /* 0x10087718: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1008771B: push eax */
    RECOMP_ICALL(MEM32(0x100E5118)); /* 0x1008771C: call dword ptr [0x100e5118] */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)MEM16(ebp + (-0x14)); /* 0x10087722: movzx eax, word ptr [ebp - 0x14] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10087726: cdq  */
    PUSH32(esp, 0x64u); /* 0x10087727: push 0x64 */
    edi = POP32_VAL(esp); /* 0x10087729: pop edi */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)edi; /* 0x1008772A: idiv edi */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    ecx = (uint32_t)MEM16(ebp + (-0x12)); /* 0x1008772C: movzx ecx, word ptr [ebp - 0x12] */
    edi = edx; /* 0x10087730: mov edi, edx */
    esi = (uint32_t)MEM16(ebp + (-0xE)); /* 0x10087732: movzx esi, word ptr [ebp - 0xe] */
    eax = ecx; /* 0x10087736: mov eax, ecx */
    MEM8(ebx + 0x5) = (uint8_t)(0x2Fu); /* 0x10087738: mov byte ptr [ebx + 5], 0x2f */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1008773C: cdq  */
    PUSH32(esp, 0xAu); /* 0x1008773D: push 0xa */
    ecx = POP32_VAL(esp); /* 0x1008773F: pop ecx */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x10087740: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    MEM8(ebx + 0x2) = (uint8_t)(0x2Fu); /* 0x10087742: mov byte ptr [ebx + 2], 0x2f */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + 0x30u); /* 0x10087746: add al, 0x30 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    MEM8(ebx + 0x8) = (uint8_t)(0); /* 0x10087748: mov byte ptr [ebx + 8], 0 */
    MEM8(ebx) = (uint8_t)(LO8(eax)); /* 0x1008774C: mov byte ptr [ebx], al */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + 0x30u); /* 0x1008774E: add dl, 0x30 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    MEM8(ebx + 0x1) = (uint8_t)(LO8(edx)); /* 0x10087751: mov byte ptr [ebx + 1], dl */
    eax = esi; /* 0x10087754: mov eax, esi */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10087756: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x10087757: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + 0x30u); /* 0x10087759: add al, 0x30 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + 0x30u); /* 0x1008775B: add dl, 0x30 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    MEM8(ebx + 0x3) = (uint8_t)(LO8(eax)); /* 0x1008775E: mov byte ptr [ebx + 3], al */
    eax = edi; /* 0x10087761: mov eax, edi */
    MEM8(ebx + 0x4) = (uint8_t)(LO8(edx)); /* 0x10087763: mov byte ptr [ebx + 4], dl */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10087766: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x10087767: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    edi = POP32_VAL(esp); /* 0x10087769: pop edi */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + 0x30u); /* 0x1008776A: add al, 0x30 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + 0x30u); /* 0x1008776C: add dl, 0x30 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    MEM8(ebx + 0x6) = (uint8_t)(LO8(eax)); /* 0x1008776F: mov byte ptr [ebx + 6], al */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10087772: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ebx + 0x7) = (uint8_t)(LO8(edx)); /* 0x10087774: mov byte ptr [ebx + 7], dl */
    goto L_1008778A; /* 0x10087777: jmp 0x1008778a */
L_10087779:
    RECOMP_CALL(sub_1001177D); /* 0x10087779: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1008777E: push 0x16 */
L_10087780:
    esi = POP32_VAL(esp); /* 0x10087780: pop esi */
    MEM32(eax) = esi; /* 0x10087781: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x10087783: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x10087788: mov eax, esi */
L_1008778A:
    ecx = MEM32(ebp + (-0x4)); /* 0x1008778A: mov ecx, dword ptr [ebp - 4] */
    esi = POP32_VAL(esp); /* 0x1008778D: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1008778E: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x10087790: pop ebx */
    RECOMP_CALL(sub_1000F7C6); /* 0x10087791: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x10087796: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10087798: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10087799: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008779A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008779Au);

L_1008779A:
    PUSH32(esp, ebp); /* 0x1008779A: push ebp */
    ebp = esp; /* 0x1008779B: mov ebp, esp */
    PUSH32(esp, 9); /* 0x1008779D: push 9 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008779F: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100877B4); /* 0x100877A2: call 0x100877b4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x100877A7: neg eax */
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x100877A9: pop ecx */
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x100877AA: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = ~eax; /* 0x100877AC: not eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    eax = eax & MEM32(ebp + 0x8); /* 0x100877AE: and eax, dword ptr [ebp + 8] */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x100877B1: pop ecx */
    ebp = POP32_VAL(esp); /* 0x100877B2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100877B3: ret  */
    RECOMP_REGS_OUT();
}

void sub_100877B4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100877B4u);

L_100877B4:
    PUSH32(esp, ebp); /* 0x100877B4: push ebp */
    ebp = esp; /* 0x100877B5: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x100877B7: sub esp, 0x14 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x100877BA: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x100877BF: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x100877C1: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, esi); /* 0x100877C4: push esi */
    PUSH32(esp, edi); /* 0x100877C5: push edi */
    edi = MEM32(ebp + 0x8); /* 0x100877C6: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x100877C9: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008783E; /* 0x100877CB: je 0x1008783e */
L_100877CD:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x100877CD: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1008783E; /* 0x100877D1: jbe 0x1008783e */
L_100877D3:
    /* cmp MEM32(ebp + 0xC), 9 */ /* 0x100877D3: cmp dword ptr [ebp + 0xc], 9 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM8(edi) = (uint8_t)(0); /* 0x100877D7: mov byte ptr [edi], 0 */
    if (CMP_AE(_flag_a, _flag_b)) goto L_100877E5; /* 0x100877DA: jae 0x100877e5 */
L_100877DC:
    RECOMP_CALL(sub_1001177D); /* 0x100877DC: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x22u); /* 0x100877E1: push 0x22 */
    goto L_10087845; /* 0x100877E3: jmp 0x10087845 */
L_100877E5:
    PUSH32(esp, ebx); /* 0x100877E5: push ebx */
    eax = ebp + (-0x14); /* 0x100877E6: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x100877E9: push eax */
    RECOMP_ICALL(MEM32(0x100E5118)); /* 0x100877EA: call dword ptr [0x100e5118] */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)MEM16(ebp + (-0xC)); /* 0x100877F0: movzx eax, word ptr [ebp - 0xc] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x100877F4: cdq  */
    PUSH32(esp, 0xAu); /* 0x100877F5: push 0xa */
    ebx = POP32_VAL(esp); /* 0x100877F7: pop ebx */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ebx; /* 0x100877F8: idiv ebx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    ecx = (uint32_t)MEM16(ebp + (-0xA)); /* 0x100877FA: movzx ecx, word ptr [ebp - 0xa] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + 0x30u); /* 0x100877FE: add al, 0x30 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    esi = (uint32_t)MEM16(ebp + (-0x8)); /* 0x10087800: movzx esi, word ptr [ebp - 8] */
    MEM8(edi) = (uint8_t)(LO8(eax)); /* 0x10087804: mov byte ptr [edi], al */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + 0x30u); /* 0x10087806: add dl, 0x30 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    MEM8(edi + 0x1) = (uint8_t)(LO8(edx)); /* 0x10087809: mov byte ptr [edi + 1], dl */
    eax = ecx; /* 0x1008780C: mov eax, ecx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1008780E: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ebx; /* 0x1008780F: idiv ebx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    PUSH32(esp, 0x30u); /* 0x10087811: push 0x30 */
    ecx = POP32_VAL(esp); /* 0x10087813: pop ecx */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + LO8(ecx)); /* 0x10087814: add al, cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    MEM8(edi + 0x5) = (uint8_t)(0x3Au); /* 0x10087816: mov byte ptr [edi + 5], 0x3a */
    MEM8(edi + 0x3) = (uint8_t)(LO8(eax)); /* 0x1008781A: mov byte ptr [edi + 3], al */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + LO8(ecx)); /* 0x1008781D: add dl, cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    MEM8(edi + 0x4) = (uint8_t)(LO8(edx)); /* 0x1008781F: mov byte ptr [edi + 4], dl */
    eax = esi; /* 0x10087822: mov eax, esi */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10087824: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ebx; /* 0x10087825: idiv ebx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    MEM8(edi + 0x2) = (uint8_t)(0x3Au); /* 0x10087827: mov byte ptr [edi + 2], 0x3a */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + LO8(ecx)); /* 0x1008782B: add al, cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    MEM8(edi + 0x8) = (uint8_t)(0); /* 0x1008782D: mov byte ptr [edi + 8], 0 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + LO8(ecx)); /* 0x10087831: add dl, cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    MEM8(edi + 0x6) = (uint8_t)(LO8(eax)); /* 0x10087833: mov byte ptr [edi + 6], al */
    MEM8(edi + 0x7) = (uint8_t)(LO8(edx)); /* 0x10087836: mov byte ptr [edi + 7], dl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10087839: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1008783B: pop ebx */
    goto L_1008784F; /* 0x1008783C: jmp 0x1008784f */
L_1008783E:
    RECOMP_CALL(sub_1001177D); /* 0x1008783E: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x10087843: push 0x16 */
L_10087845:
    esi = POP32_VAL(esp); /* 0x10087845: pop esi */
    MEM32(eax) = esi; /* 0x10087846: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x10087848: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1008784D: mov eax, esi */
L_1008784F:
    ecx = MEM32(ebp + (-0x4)); /* 0x1008784F: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x10087852: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x10087853: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x10087855: pop esi */
    RECOMP_CALL(sub_1000F7C6); /* 0x10087856: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1008785B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1008785D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008785E: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008785F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008785Fu);

L_1008785F:
    PUSH32(esp, ebp); /* 0x1008785F: push ebp */
    ebp = esp; /* 0x10087860: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x10087862: push ecx */
    PUSH32(esp, ecx); /* 0x10087863: push ecx */
    eax = ebp + (-0x8); /* 0x10087864: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x10087867: push eax */
    RECOMP_ICALL(MEM32(0x100E5110)); /* 0x10087868: call dword ptr [0x100e5110] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x8)); /* 0x1008786E: mov ecx, dword ptr [ebp - 8] */
    eax = MEM32(ebp + (-0x4)); /* 0x10087871: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x2AC18000u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x2AC18000u; /* 0x10087874: add ecx, 0x2ac18000 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x1008787A: push 0 */
    PUSH32(esp, 0x00989680u); /* 0x1008787C: push 0x989680 */
    { uint32_t _aa = eax, _ab = 0xFE624E21u, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10087881: adc eax, 0xfe624e21 */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, eax); /* 0x10087886: push eax */
    PUSH32(esp, ecx); /* 0x10087887: push ecx */
    RECOMP_CALL(sub_1001464C); /* 0x10087888: call 0x1001464c */
    RECOMP_FLAGS_IN();
    /* test edx, edx */ /* 0x1008788D: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100878A0; /* 0x1008788F: jl 0x100878a0 */
L_10087891:
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1008789A; /* 0x10087891: jg 0x1008789a */
L_10087893:
    /* cmp eax, 0x7FFFD27Fu */ /* 0x10087893: cmp eax, 0x7fffd27f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FFFD27Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_100878A0; /* 0x10087898: jbe 0x100878a0 */
L_1008789A:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1008789A: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1008789D: mov dword ptr [ebp - 4], eax */
L_100878A0:
    ecx = MEM32(ebp + 0x8); /* 0x100878A0: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x100878A3: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100878A9; /* 0x100878A5: je 0x100878a9 */
L_100878A7:
    MEM32(ecx) = eax; /* 0x100878A7: mov dword ptr [ecx], eax */
L_100878A9:
    esp = ebp; /* 0x100878A9: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100878AB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100878AC: ret  */
    RECOMP_REGS_OUT();
}

void sub_100878AD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100878ADu);

L_100878AD:
    PUSH32(esp, ebp); /* 0x100878AD: push ebp */
    ebp = esp; /* 0x100878AE: mov ebp, esp */
    PUSH32(esp, esi); /* 0x100878B0: push esi */
    esi = MEM32(ebp + 0x10); /* 0x100878B1: mov esi, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x100878B4: push edi */
    edi = MEM32(ebp + 0xC); /* 0x100878B5: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x100878B8: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100878ED; /* 0x100878BA: je 0x100878ed */
L_100878BC:
    /* test esi, esi */ /* 0x100878BC: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100878F1; /* 0x100878BE: je 0x100878f1 */
L_100878C0:
    /* test edi, edi */ /* 0x100878C0: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100878C7; /* 0x100878C2: je 0x100878c7 */
L_100878C4:
    MEM8(edi) = (uint8_t)(0); /* 0x100878C4: mov byte ptr [edi], 0 */
L_100878C7:
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x100878C7: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100878F1; /* 0x100878CB: je 0x100878f1 */
L_100878CD:
    PUSH32(esp, ebx); /* 0x100878CD: push ebx */
    ebx = MEM32(ebp + 0x14); /* 0x100878CE: mov ebx, dword ptr [ebp + 0x14] */
    /* test ebx, ebx */ /* 0x100878D1: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10087904; /* 0x100878D3: je 0x10087904 */
L_100878D5:
    /* cmp ebx, 1 */ /* 0x100878D5: cmp ebx, 1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10087904; /* 0x100878D8: je 0x10087904 */
L_100878DA:
    RECOMP_CALL(sub_1001177D); /* 0x100878DA: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x100878DF: push 0x16 */
    esi = POP32_VAL(esp); /* 0x100878E1: pop esi */
    MEM32(eax) = esi; /* 0x100878E2: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x100878E4: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x100878E9: mov eax, esi */
    goto L_1008793B; /* 0x100878EB: jmp 0x1008793b */
L_100878ED:
    /* test esi, esi */ /* 0x100878ED: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100878C0; /* 0x100878EF: je 0x100878c0 */
L_100878F1:
    RECOMP_CALL(sub_1001177D); /* 0x100878F1: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x100878F6: push 0x16 */
    esi = POP32_VAL(esp); /* 0x100878F8: pop esi */
    MEM32(eax) = esi; /* 0x100878F9: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x100878FB: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x10087900: mov eax, esi */
    goto L_1008793C; /* 0x10087902: jmp 0x1008793c */
L_10087904:
    PUSH32(esp, MEM32(ebx * 4 + 0x100DF290)); /* 0x10087904: push dword ptr [ebx*4 + 0x100df290] */
    RECOMP_CALL(sub_100129AF); /* 0x1008790B: call 0x100129af */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10087910: pop ecx */
    ecx = eax + 0x1; /* 0x10087911: lea ecx, [eax + 1] */
    eax = MEM32(ebp + 0x8); /* 0x10087914: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x10087917: mov dword ptr [eax], ecx */
    /* test edi, edi */ /* 0x10087919: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10087921; /* 0x1008791B: jne 0x10087921 */
L_1008791D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1008791D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1008793B; /* 0x1008791F: jmp 0x1008793b */
L_10087921:
    /* cmp ecx, esi */ /* 0x10087921: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1008792A; /* 0x10087923: jbe 0x1008792a */
L_10087925:
    PUSH32(esp, 0x22u); /* 0x10087925: push 0x22 */
    eax = POP32_VAL(esp); /* 0x10087927: pop eax */
    goto L_1008793B; /* 0x10087928: jmp 0x1008793b */
L_1008792A:
    PUSH32(esp, MEM32(ebx * 4 + 0x100DF290)); /* 0x1008792A: push dword ptr [ebx*4 + 0x100df290] */
    PUSH32(esp, esi); /* 0x10087931: push esi */
    PUSH32(esp, edi); /* 0x10087932: push edi */
    RECOMP_CALL(sub_100147CD); /* 0x10087933: call 0x100147cd */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10087938: add esp, 0xc */
    _flag_k = FK_ADD;
L_1008793B:
    ebx = POP32_VAL(esp); /* 0x1008793B: pop ebx */
L_1008793C:
    edi = POP32_VAL(esp); /* 0x1008793C: pop edi */
    esi = POP32_VAL(esp); /* 0x1008793D: pop esi */
    ebp = POP32_VAL(esp); /* 0x1008793E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008793F: ret  */
    RECOMP_REGS_OUT();
}

void sub_10087940(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10087940u);

L_10087940:
    PUSH32(esp, ebp); /* 0x10087940: push ebp */
    ebp = esp; /* 0x10087941: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x58u; /* 0x10087943: sub esp, 0x58 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x10087946: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1008794B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1008794D: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, esi); /* 0x10087950: push esi */
    esi = MEM32(ebp + 0x8); /* 0x10087951: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x10087954: push edi */
    edi = MEM32(ebp + 0xC); /* 0x10087955: mov edi, dword ptr [ebp + 0xc] */
    /* cmp esi, 0xFFFFFFFEu */ /* 0x10087958: cmp esi, -2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008796D; /* 0x1008795B: jne 0x1008796d */
L_1008795D:
    RECOMP_CALL(sub_1001177D); /* 0x1008795D: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x10087962: mov dword ptr [eax], 9 */
    goto L_10087AE2; /* 0x10087968: jmp 0x10087ae2 */
L_1008796D:
    /* test esi, esi */ /* 0x1008796D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10087AD2; /* 0x1008796F: js 0x10087ad2 */
L_10087975:
    /* cmp esi, MEM32(0x100DFDD8) */ /* 0x10087975: cmp esi, dword ptr [0x100dfdd8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(0x100DFDD8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_10087AD2; /* 0x1008797B: jae 0x10087ad2 */
L_10087981:
    eax = esi; /* 0x10087981: mov eax, esi */
    ecx = esi; /* 0x10087983: mov ecx, esi */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x10087985: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x10087988: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((ecx) >> 26) & 1u); /* 0x1008798B: shl ecx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ecx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 6u; /* 0x1008798B: shl ecx, 6 */
    eax = MEM32(eax * 4 + 0x100DF640); /* 0x1008798E: mov eax, dword ptr [eax*4 + 0x100df640] */
    /* test MEM8(eax + ecx + 0x4), 1 */ /* 0x10087995: test byte ptr [eax + ecx + 4], 1 */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10087AD2; /* 0x1008799A: je 0x10087ad2 */
L_100879A0:
    /* test edi, edi */ /* 0x100879A0: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100879B7; /* 0x100879A2: jne 0x100879b7 */
L_100879A4:
    eax = ebp + (-0x44); /* 0x100879A4: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x100879A7: push eax */
    RECOMP_CALL(sub_1008785F); /* 0x100879A8: call 0x1008785f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x44)); /* 0x100879AD: mov eax, dword ptr [ebp - 0x44] */
    edi = ebp + (-0x48); /* 0x100879B0: lea edi, [ebp - 0x48] */
    ecx = POP32_VAL(esp); /* 0x100879B3: pop ecx */
    MEM32(ebp + (-0x48)) = eax; /* 0x100879B4: mov dword ptr [ebp - 0x48], eax */
L_100879B7:
    eax = edi + 0x4; /* 0x100879B7: lea eax, [edi + 4] */
    PUSH32(esp, eax); /* 0x100879BA: push eax */
    eax = ebp + (-0x38); /* 0x100879BB: lea eax, [ebp - 0x38] */
    PUSH32(esp, eax); /* 0x100879BE: push eax */
    RECOMP_CALL(sub_10087269); /* 0x100879BF: call 0x10087269 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100879C4: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100879C5: pop ecx */
    /* test eax, eax */ /* 0x100879C6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100879DA; /* 0x100879C8: je 0x100879da */
L_100879CA:
    RECOMP_CALL(sub_1001177D); /* 0x100879CA: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x100879CF: mov dword ptr [eax], 0x16 */
    goto L_10087AE2; /* 0x100879D5: jmp 0x10087ae2 */
L_100879DA:
    eax = MEM32(ebp + (-0x24)); /* 0x100879DA: mov eax, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x76Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x76Cu; /* 0x100879DD: add eax, 0x76c */
    _flag_k = FK_ADD;
    MEM16(ebp + (-0x14)) = (uint16_t)(LO16(eax)); /* 0x100879E2: mov word ptr [ebp - 0x14], ax */
    eax = MEM32(ebp + (-0x28)); /* 0x100879E6: mov eax, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100879E9: inc eax */
    _flag_k = FK_INC;
    MEM16(ebp + (-0x12)) = (uint16_t)(LO16(eax)); /* 0x100879EA: mov word ptr [ebp - 0x12], ax */
    SET_LO16(eax, MEM16(ebp + (-0x2C))); /* 0x100879EE: mov ax, word ptr [ebp - 0x2c] */
    MEM16(ebp + (-0xE)) = (uint16_t)(LO16(eax)); /* 0x100879F2: mov word ptr [ebp - 0xe], ax */
    SET_LO16(eax, MEM16(ebp + (-0x30))); /* 0x100879F6: mov ax, word ptr [ebp - 0x30] */
    MEM16(ebp + (-0xC)) = (uint16_t)(LO16(eax)); /* 0x100879FA: mov word ptr [ebp - 0xc], ax */
    SET_LO16(eax, MEM16(ebp + (-0x34))); /* 0x100879FE: mov ax, word ptr [ebp - 0x34] */
    MEM16(ebp + (-0xA)) = (uint16_t)(LO16(eax)); /* 0x10087A02: mov word ptr [ebp - 0xa], ax */
    SET_LO16(eax, MEM16(ebp + (-0x38))); /* 0x10087A06: mov ax, word ptr [ebp - 0x38] */
    MEM16(ebp + (-0x8)) = (uint16_t)(LO16(eax)); /* 0x10087A0A: mov word ptr [ebp - 8], ax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10087A0E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ebp + (-0x6)) = (uint16_t)(LO16(eax)); /* 0x10087A10: mov word ptr [ebp - 6], ax */
    eax = ebp + (-0x40); /* 0x10087A14: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x10087A17: push eax */
    eax = ebp + (-0x14); /* 0x10087A18: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x10087A1B: push eax */
    RECOMP_ICALL(MEM32(0x100E5124)); /* 0x10087A1C: call dword ptr [0x100e5124] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10087A22: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100879CA; /* 0x10087A24: je 0x100879ca */
L_10087A26:
    eax = ebp + (-0x50); /* 0x10087A26: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x10087A29: push eax */
    eax = ebp + (-0x40); /* 0x10087A2A: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x10087A2D: push eax */
    RECOMP_ICALL(MEM32(0x100E511C)); /* 0x10087A2E: call dword ptr [0x100e511c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10087A34: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100879CA; /* 0x10087A36: je 0x100879ca */
L_10087A38:
    eax = ebp + (-0x38); /* 0x10087A38: lea eax, [ebp - 0x38] */
    PUSH32(esp, edi); /* 0x10087A3B: push edi */
    PUSH32(esp, eax); /* 0x10087A3C: push eax */
    RECOMP_CALL(sub_10087269); /* 0x10087A3D: call 0x10087269 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10087A42: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10087A43: pop ecx */
    /* test eax, eax */ /* 0x10087A44: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100879CA; /* 0x10087A46: jne 0x100879ca */
L_10087A48:
    eax = MEM32(ebp + (-0x24)); /* 0x10087A48: mov eax, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x76Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x76Cu; /* 0x10087A4B: add eax, 0x76c */
    _flag_k = FK_ADD;
    MEM16(ebp + (-0x14)) = (uint16_t)(LO16(eax)); /* 0x10087A50: mov word ptr [ebp - 0x14], ax */
    eax = MEM32(ebp + (-0x28)); /* 0x10087A54: mov eax, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10087A57: inc eax */
    _flag_k = FK_INC;
    MEM16(ebp + (-0x12)) = (uint16_t)(LO16(eax)); /* 0x10087A58: mov word ptr [ebp - 0x12], ax */
    SET_LO16(eax, MEM16(ebp + (-0x2C))); /* 0x10087A5C: mov ax, word ptr [ebp - 0x2c] */
    MEM16(ebp + (-0xE)) = (uint16_t)(LO16(eax)); /* 0x10087A60: mov word ptr [ebp - 0xe], ax */
    SET_LO16(eax, MEM16(ebp + (-0x30))); /* 0x10087A64: mov ax, word ptr [ebp - 0x30] */
    MEM16(ebp + (-0xC)) = (uint16_t)(LO16(eax)); /* 0x10087A68: mov word ptr [ebp - 0xc], ax */
    SET_LO16(eax, MEM16(ebp + (-0x34))); /* 0x10087A6C: mov ax, word ptr [ebp - 0x34] */
    MEM16(ebp + (-0xA)) = (uint16_t)(LO16(eax)); /* 0x10087A70: mov word ptr [ebp - 0xa], ax */
    SET_LO16(eax, MEM16(ebp + (-0x38))); /* 0x10087A74: mov ax, word ptr [ebp - 0x38] */
    MEM16(ebp + (-0x8)) = (uint16_t)(LO16(eax)); /* 0x10087A78: mov word ptr [ebp - 8], ax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10087A7C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ebp + (-0x6)) = (uint16_t)(LO16(eax)); /* 0x10087A7E: mov word ptr [ebp - 6], ax */
    eax = ebp + (-0x40); /* 0x10087A82: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x10087A85: push eax */
    eax = ebp + (-0x14); /* 0x10087A86: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x10087A89: push eax */
    RECOMP_ICALL(MEM32(0x100E5124)); /* 0x10087A8A: call dword ptr [0x100e5124] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10087A90: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100879CA; /* 0x10087A92: je 0x100879ca */
L_10087A98:
    eax = ebp + (-0x58); /* 0x10087A98: lea eax, [ebp - 0x58] */
    PUSH32(esp, eax); /* 0x10087A9B: push eax */
    eax = ebp + (-0x40); /* 0x10087A9C: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x10087A9F: push eax */
    RECOMP_ICALL(MEM32(0x100E511C)); /* 0x10087AA0: call dword ptr [0x100e511c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10087AA6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100879CA; /* 0x10087AA8: je 0x100879ca */
L_10087AAE:
    eax = ebp + (-0x50); /* 0x10087AAE: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x10087AB1: push eax */
    eax = ebp + (-0x58); /* 0x10087AB2: lea eax, [ebp - 0x58] */
    PUSH32(esp, eax); /* 0x10087AB5: push eax */
    PUSH32(esp, 0); /* 0x10087AB6: push 0 */
    PUSH32(esp, esi); /* 0x10087AB8: push esi */
    RECOMP_CALL(sub_10014D4B); /* 0x10087AB9: call 0x10014d4b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10087ABE: pop ecx */
    PUSH32(esp, eax); /* 0x10087ABF: push eax */
    RECOMP_ICALL(MEM32(0x100E5120)); /* 0x10087AC0: call dword ptr [0x100e5120] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10087AC6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100879CA; /* 0x10087AC8: je 0x100879ca */
L_10087ACE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10087ACE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10087AE5; /* 0x10087AD0: jmp 0x10087ae5 */
L_10087AD2:
    RECOMP_CALL(sub_1001177D); /* 0x10087AD2: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x10087AD7: mov dword ptr [eax], 9 */
    RECOMP_CALL(sub_100A4670); /* 0x10087ADD: call 0x100a4670 */
    RECOMP_FLAGS_IN();
L_10087AE2:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10087AE2: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_10087AE5:
    ecx = MEM32(ebp + (-0x4)); /* 0x10087AE5: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x10087AE8: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x10087AE9: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x10087AEB: pop esi */
    RECOMP_CALL(sub_1000F7C6); /* 0x10087AEC: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x10087AF1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10087AF3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10087AF4: ret  */
    RECOMP_REGS_OUT();
}

void sub_10087AF5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10087AF5u);

L_10087AF5:
    PUSH32(esp, ebp); /* 0x10087AF5: push ebp */
    ebp = esp; /* 0x10087AF6: mov ebp, esp */
    PUSH32(esp, edi); /* 0x10087AF8: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x10087AF9: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x8), edi */ /* 0x10087AFB: cmp dword ptr [ebp + 8], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10087B15; /* 0x10087AFE: jne 0x10087b15 */
L_10087B00:
    RECOMP_CALL(sub_1001177D); /* 0x10087B00: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10087B05: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10087B0B: call 0x100a4670 */
    RECOMP_FLAGS_IN();
L_10087B10:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10087B10: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10087B64; /* 0x10087B13: jmp 0x10087b64 */
L_10087B15:
    PUSH32(esp, edi); /* 0x10087B15: push edi */
    PUSH32(esp, 0x40u); /* 0x10087B16: push 0x40 */
    PUSH32(esp, 0x8002u); /* 0x10087B18: push 0x8002 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10087B1D: push dword ptr [ebp + 8] */
    eax = ebp + 0x8; /* 0x10087B20: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x10087B23: push eax */
    RECOMP_CALL(sub_100A1C4A); /* 0x10087B24: call 0x100a1c4a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x10087B29: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10087B2C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10087B10; /* 0x10087B2E: jne 0x10087b10 */
L_10087B30:
    PUSH32(esp, esi); /* 0x10087B30: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10087B31: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10087B34: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10087940); /* 0x10087B37: call 0x10087940 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x10087B3C: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x10087B3E: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10087B3F: pop ecx */
    /* cmp esi, 0xFFFFFFFFu */ /* 0x10087B40: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10087B4C; /* 0x10087B43: jne 0x10087b4c */
L_10087B45:
    RECOMP_CALL(sub_1001177D); /* 0x10087B45: call 0x1001177d */
    RECOMP_FLAGS_IN();
    edi = MEM32(eax); /* 0x10087B4A: mov edi, dword ptr [eax] */
L_10087B4C:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10087B4C: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10014EA2); /* 0x10087B4F: call 0x10014ea2 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10087B54: pop ecx */
    /* cmp esi, 0xFFFFFFFFu */ /* 0x10087B55: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10087B61; /* 0x10087B58: jne 0x10087b61 */
L_10087B5A:
    RECOMP_CALL(sub_1001177D); /* 0x10087B5A: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = edi; /* 0x10087B5F: mov dword ptr [eax], edi */
L_10087B61:
    eax = esi; /* 0x10087B61: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x10087B63: pop esi */
L_10087B64:
    edi = POP32_VAL(esp); /* 0x10087B64: pop edi */
    ebp = POP32_VAL(esp); /* 0x10087B65: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10087B66: ret  */
    RECOMP_REGS_OUT();
}

void sub_10087B67(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10087B67u);

L_10087B67:
    goto L_10087B69; /* 0x10087B67: jmp 0x10087b69 */
L_10087B69:
    PUSH32(esp, ebp); /* 0x10087B69: push ebp */
    ebp = esp; /* 0x10087B6A: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xC4u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xC4u; /* 0x10087B6C: sub esp, 0xc4 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x10087B72: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x10087B77: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x10087B79: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x10087B7C: push ebx */
    PUSH32(esp, esi); /* 0x10087B7D: push esi */
    esi = MEM32(ebp + 0x8); /* 0x10087B7E: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10087B81: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xB4)) = ebx; /* 0x10087B83: mov dword ptr [ebp - 0xb4], ebx */
    /* test esi, esi */ /* 0x10087B89: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10087BAE; /* 0x10087B8B: jne 0x10087bae */
L_10087B8D:
    RECOMP_CALL(sub_1001177D); /* 0x10087B8D: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x10087B92: push 0x16 */
    esi = POP32_VAL(esp); /* 0x10087B94: pop esi */
    MEM32(eax) = esi; /* 0x10087B95: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x10087B97: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x10087B9C: mov eax, esi */
L_10087B9E:
    ecx = MEM32(ebp + (-0x4)); /* 0x10087B9E: mov ecx, dword ptr [ebp - 4] */
    esi = POP32_VAL(esp); /* 0x10087BA1: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x10087BA2: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x10087BA4: pop ebx */
    RECOMP_CALL(sub_1000F7C6); /* 0x10087BA5: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x10087BAA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10087BAC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10087BAD: ret  */
L_10087BAE:
    RECOMP_CALL(sub_10015B4C); /* 0x10087BAE: call 0x10015b4c */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0xB4); /* 0x10087BB3: lea eax, [ebp - 0xb4] */
    PUSH32(esp, eax); /* 0x10087BB9: push eax */
    RECOMP_CALL(sub_10015B01); /* 0x10087BBA: call 0x10015b01 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10087BBF: pop ecx */
    /* test eax, eax */ /* 0x10087BC0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10087CC9; /* 0x10087BC2: jne 0x10087cc9 */
L_10087BC8:
    eax = MEM32(ebp + (-0xB4)); /* 0x10087BC8: mov eax, dword ptr [ebp - 0xb4] */
    PUSH32(esp, edi); /* 0x10087BCE: push edi */
    PUSH32(esp, 0x3Cu); /* 0x10087BCF: push 0x3c */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10087BD1: cdq  */
    ecx = POP32_VAL(esp); /* 0x10087BD2: pop ecx */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x10087BD3: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    MEM16(esi + 0xA) = (uint16_t)(LO16(eax)); /* 0x10087BD5: mov word ptr [esi + 0xa], ax */
    eax = ebp + (-0xBC); /* 0x10087BD9: lea eax, [ebp - 0xbc] */
    PUSH32(esp, eax); /* 0x10087BDF: push eax */
    RECOMP_ICALL(MEM32(0x100E5110)); /* 0x10087BE0: call dword ptr [0x100e5110] */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0xB8)); /* 0x10087BE6: mov edi, dword ptr [ebp - 0xb8] */
    PUSH32(esp, ebx); /* 0x10087BEC: push ebx */
    ebx = MEM32(ebp + (-0xBC)); /* 0x10087BED: mov ebx, dword ptr [ebp - 0xbc] */
    PUSH32(esp, 0x23C34600u); /* 0x10087BF3: push 0x23c34600 */
    PUSH32(esp, edi); /* 0x10087BF8: push edi */
    PUSH32(esp, ebx); /* 0x10087BF9: push ebx */
    RECOMP_CALL(sub_1001464C); /* 0x10087BFA: call 0x1001464c */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x10087BFF: mov ecx, eax */
    eax = edx; /* 0x10087C01: mov eax, edx */
    MEM32(ebp + (-0xC4)) = ecx; /* 0x10087C03: mov dword ptr [ebp - 0xc4], ecx */
    MEM32(ebp + (-0xC0)) = eax; /* 0x10087C09: mov dword ptr [ebp - 0xc0], eax */
    /* cmp ecx, MEM32(0x100E4070) */ /* 0x10087C0F: cmp ecx, dword ptr [0x100e4070] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(0x100E4070));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10087C26; /* 0x10087C15: jne 0x10087c26 */
L_10087C17:
    /* cmp eax, MEM32(0x100E4074) */ /* 0x10087C17: cmp eax, dword ptr [0x100e4074] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x100E4074));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10087C26; /* 0x10087C1D: jne 0x10087c26 */
L_10087C1F:
    eax = MEM32(0x100E1498); /* 0x10087C1F: mov eax, dword ptr [0x100e1498] */
    goto L_10087C7E; /* 0x10087C24: jmp 0x10087c7e */
L_10087C26:
    eax = ebp + (-0xB0); /* 0x10087C26: lea eax, [ebp - 0xb0] */
    PUSH32(esp, eax); /* 0x10087C2C: push eax */
    RECOMP_ICALL(MEM32(0x100E5114)); /* 0x10087C2D: call dword ptr [0x100e5114] */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x10087C33: mov ecx, eax */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10087C35: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, eax */ /* 0x10087C38: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10087C55; /* 0x10087C3A: je 0x10087c55 */
L_10087C3C:
    /* cmp ecx, 2 */ /* 0x10087C3C: cmp ecx, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10087C53; /* 0x10087C3F: jne 0x10087c53 */
L_10087C41:
    /* cmp MEM16(ebp + (-0x16)), 0 */ /* 0x10087C41: cmp word ptr [ebp - 0x16], 0 */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x16))) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10087C53; /* 0x10087C46: je 0x10087c53 */
L_10087C48:
    /* cmp MEM32(ebp + (-0x8)), 0 */ /* 0x10087C48: cmp dword ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10087C53; /* 0x10087C4C: je 0x10087c53 */
L_10087C4E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10087C4E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10087C50: inc eax */
    _flag_k = FK_INC;
    goto L_10087C55; /* 0x10087C51: jmp 0x10087c55 */
L_10087C53:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10087C53: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_10087C55:
    ecx = MEM32(ebp + (-0xC4)); /* 0x10087C55: mov ecx, dword ptr [ebp - 0xc4] */
    edi = MEM32(ebp + (-0xB8)); /* 0x10087C5B: mov edi, dword ptr [ebp - 0xb8] */
    ebx = MEM32(ebp + (-0xBC)); /* 0x10087C61: mov ebx, dword ptr [ebp - 0xbc] */
    MEM32(0x100E4070) = ecx; /* 0x10087C67: mov dword ptr [0x100e4070], ecx */
    ecx = MEM32(ebp + (-0xC0)); /* 0x10087C6D: mov ecx, dword ptr [ebp - 0xc0] */
    MEM32(0x100E1498) = eax; /* 0x10087C73: mov dword ptr [0x100e1498], eax */
    MEM32(0x100E4074) = ecx; /* 0x10087C78: mov dword ptr [0x100e4074], ecx */
L_10087C7E:
    PUSH32(esp, 0); /* 0x10087C7E: push 0 */
    PUSH32(esp, 0x2710u); /* 0x10087C80: push 0x2710 */
    PUSH32(esp, edi); /* 0x10087C85: push edi */
    PUSH32(esp, ebx); /* 0x10087C86: push ebx */
    MEM16(esi + 0xC) = (uint16_t)(LO16(eax)); /* 0x10087C87: mov word ptr [esi + 0xc], ax */
    RECOMP_CALL(sub_1001464C); /* 0x10087C8B: call 0x1001464c */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x10087C90: push 0 */
    PUSH32(esp, 0x3E8u); /* 0x10087C92: push 0x3e8 */
    PUSH32(esp, edx); /* 0x10087C97: push edx */
    PUSH32(esp, eax); /* 0x10087C98: push eax */
    RECOMP_CALL(sub_10034F20); /* 0x10087C99: call 0x10034f20 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x10087C9E: push 0 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x2AC18000u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x2AC18000u; /* 0x10087CA0: add ebx, 0x2ac18000 */
    _flag_k = FK_ADD;
    MEM16(esi + 0x8) = (uint16_t)(LO16(eax)); /* 0x10087CA6: mov word ptr [esi + 8], ax */
    PUSH32(esp, 0x00989680u); /* 0x10087CAA: push 0x989680 */
    { uint32_t _aa = edi, _ab = 0xFE624E21u, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10087CAF: adc edi, 0xfe624e21 */
      edi = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, edi); /* 0x10087CB5: push edi */
    PUSH32(esp, ebx); /* 0x10087CB6: push ebx */
    RECOMP_CALL(sub_1001464C); /* 0x10087CB7: call 0x1001464c */
    RECOMP_FLAGS_IN();
    MEM32(esi) = eax; /* 0x10087CBC: mov dword ptr [esi], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10087CBE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x4) = edx; /* 0x10087CC0: mov dword ptr [esi + 4], edx */
    edi = POP32_VAL(esp); /* 0x10087CC3: pop edi */
    RECOMP_BACKEDGE();
    goto L_10087B9E; /* 0x10087CC4: jmp 0x10087b9e */
L_10087CC9:
    PUSH32(esp, ebx); /* 0x10087CC9: push ebx */
    PUSH32(esp, ebx); /* 0x10087CCA: push ebx */
    PUSH32(esp, ebx); /* 0x10087CCB: push ebx */
    PUSH32(esp, ebx); /* 0x10087CCC: push ebx */
    PUSH32(esp, ebx); /* 0x10087CCD: push ebx */
    RECOMP_CALL(sub_100A469B); /* 0x10087CCE: call 0x100a469b */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x10087CD3u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10087B69(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10087B69u);

L_10087B69:
    PUSH32(esp, ebp); /* 0x10087B69: push ebp */
    ebp = esp; /* 0x10087B6A: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xC4u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xC4u; /* 0x10087B6C: sub esp, 0xc4 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x10087B72: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x10087B77: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x10087B79: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x10087B7C: push ebx */
    PUSH32(esp, esi); /* 0x10087B7D: push esi */
    esi = MEM32(ebp + 0x8); /* 0x10087B7E: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10087B81: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xB4)) = ebx; /* 0x10087B83: mov dword ptr [ebp - 0xb4], ebx */
    /* test esi, esi */ /* 0x10087B89: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10087BAE; /* 0x10087B8B: jne 0x10087bae */
L_10087B8D:
    RECOMP_CALL(sub_1001177D); /* 0x10087B8D: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x10087B92: push 0x16 */
    esi = POP32_VAL(esp); /* 0x10087B94: pop esi */
    MEM32(eax) = esi; /* 0x10087B95: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x10087B97: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x10087B9C: mov eax, esi */
L_10087B9E:
    ecx = MEM32(ebp + (-0x4)); /* 0x10087B9E: mov ecx, dword ptr [ebp - 4] */
    esi = POP32_VAL(esp); /* 0x10087BA1: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x10087BA2: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x10087BA4: pop ebx */
    RECOMP_CALL(sub_1000F7C6); /* 0x10087BA5: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x10087BAA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10087BAC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10087BAD: ret  */
L_10087BAE:
    RECOMP_CALL(sub_10015B4C); /* 0x10087BAE: call 0x10015b4c */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0xB4); /* 0x10087BB3: lea eax, [ebp - 0xb4] */
    PUSH32(esp, eax); /* 0x10087BB9: push eax */
    RECOMP_CALL(sub_10015B01); /* 0x10087BBA: call 0x10015b01 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10087BBF: pop ecx */
    /* test eax, eax */ /* 0x10087BC0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10087CC9; /* 0x10087BC2: jne 0x10087cc9 */
L_10087BC8:
    eax = MEM32(ebp + (-0xB4)); /* 0x10087BC8: mov eax, dword ptr [ebp - 0xb4] */
    PUSH32(esp, edi); /* 0x10087BCE: push edi */
    PUSH32(esp, 0x3Cu); /* 0x10087BCF: push 0x3c */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10087BD1: cdq  */
    ecx = POP32_VAL(esp); /* 0x10087BD2: pop ecx */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x10087BD3: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    MEM16(esi + 0xA) = (uint16_t)(LO16(eax)); /* 0x10087BD5: mov word ptr [esi + 0xa], ax */
    eax = ebp + (-0xBC); /* 0x10087BD9: lea eax, [ebp - 0xbc] */
    PUSH32(esp, eax); /* 0x10087BDF: push eax */
    RECOMP_ICALL(MEM32(0x100E5110)); /* 0x10087BE0: call dword ptr [0x100e5110] */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0xB8)); /* 0x10087BE6: mov edi, dword ptr [ebp - 0xb8] */
    PUSH32(esp, ebx); /* 0x10087BEC: push ebx */
    ebx = MEM32(ebp + (-0xBC)); /* 0x10087BED: mov ebx, dword ptr [ebp - 0xbc] */
    PUSH32(esp, 0x23C34600u); /* 0x10087BF3: push 0x23c34600 */
    PUSH32(esp, edi); /* 0x10087BF8: push edi */
    PUSH32(esp, ebx); /* 0x10087BF9: push ebx */
    RECOMP_CALL(sub_1001464C); /* 0x10087BFA: call 0x1001464c */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x10087BFF: mov ecx, eax */
    eax = edx; /* 0x10087C01: mov eax, edx */
    MEM32(ebp + (-0xC4)) = ecx; /* 0x10087C03: mov dword ptr [ebp - 0xc4], ecx */
    MEM32(ebp + (-0xC0)) = eax; /* 0x10087C09: mov dword ptr [ebp - 0xc0], eax */
    /* cmp ecx, MEM32(0x100E4070) */ /* 0x10087C0F: cmp ecx, dword ptr [0x100e4070] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(0x100E4070));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10087C26; /* 0x10087C15: jne 0x10087c26 */
L_10087C17:
    /* cmp eax, MEM32(0x100E4074) */ /* 0x10087C17: cmp eax, dword ptr [0x100e4074] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x100E4074));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10087C26; /* 0x10087C1D: jne 0x10087c26 */
L_10087C1F:
    eax = MEM32(0x100E1498); /* 0x10087C1F: mov eax, dword ptr [0x100e1498] */
    goto L_10087C7E; /* 0x10087C24: jmp 0x10087c7e */
L_10087C26:
    eax = ebp + (-0xB0); /* 0x10087C26: lea eax, [ebp - 0xb0] */
    PUSH32(esp, eax); /* 0x10087C2C: push eax */
    RECOMP_ICALL(MEM32(0x100E5114)); /* 0x10087C2D: call dword ptr [0x100e5114] */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x10087C33: mov ecx, eax */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10087C35: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, eax */ /* 0x10087C38: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10087C55; /* 0x10087C3A: je 0x10087c55 */
L_10087C3C:
    /* cmp ecx, 2 */ /* 0x10087C3C: cmp ecx, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10087C53; /* 0x10087C3F: jne 0x10087c53 */
L_10087C41:
    /* cmp MEM16(ebp + (-0x16)), 0 */ /* 0x10087C41: cmp word ptr [ebp - 0x16], 0 */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x16))) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10087C53; /* 0x10087C46: je 0x10087c53 */
L_10087C48:
    /* cmp MEM32(ebp + (-0x8)), 0 */ /* 0x10087C48: cmp dword ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10087C53; /* 0x10087C4C: je 0x10087c53 */
L_10087C4E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10087C4E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10087C50: inc eax */
    _flag_k = FK_INC;
    goto L_10087C55; /* 0x10087C51: jmp 0x10087c55 */
L_10087C53:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10087C53: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_10087C55:
    ecx = MEM32(ebp + (-0xC4)); /* 0x10087C55: mov ecx, dword ptr [ebp - 0xc4] */
    edi = MEM32(ebp + (-0xB8)); /* 0x10087C5B: mov edi, dword ptr [ebp - 0xb8] */
    ebx = MEM32(ebp + (-0xBC)); /* 0x10087C61: mov ebx, dword ptr [ebp - 0xbc] */
    MEM32(0x100E4070) = ecx; /* 0x10087C67: mov dword ptr [0x100e4070], ecx */
    ecx = MEM32(ebp + (-0xC0)); /* 0x10087C6D: mov ecx, dword ptr [ebp - 0xc0] */
    MEM32(0x100E1498) = eax; /* 0x10087C73: mov dword ptr [0x100e1498], eax */
    MEM32(0x100E4074) = ecx; /* 0x10087C78: mov dword ptr [0x100e4074], ecx */
L_10087C7E:
    PUSH32(esp, 0); /* 0x10087C7E: push 0 */
    PUSH32(esp, 0x2710u); /* 0x10087C80: push 0x2710 */
    PUSH32(esp, edi); /* 0x10087C85: push edi */
    PUSH32(esp, ebx); /* 0x10087C86: push ebx */
    MEM16(esi + 0xC) = (uint16_t)(LO16(eax)); /* 0x10087C87: mov word ptr [esi + 0xc], ax */
    RECOMP_CALL(sub_1001464C); /* 0x10087C8B: call 0x1001464c */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x10087C90: push 0 */
    PUSH32(esp, 0x3E8u); /* 0x10087C92: push 0x3e8 */
    PUSH32(esp, edx); /* 0x10087C97: push edx */
    PUSH32(esp, eax); /* 0x10087C98: push eax */
    RECOMP_CALL(sub_10034F20); /* 0x10087C99: call 0x10034f20 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x10087C9E: push 0 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x2AC18000u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x2AC18000u; /* 0x10087CA0: add ebx, 0x2ac18000 */
    _flag_k = FK_ADD;
    MEM16(esi + 0x8) = (uint16_t)(LO16(eax)); /* 0x10087CA6: mov word ptr [esi + 8], ax */
    PUSH32(esp, 0x00989680u); /* 0x10087CAA: push 0x989680 */
    { uint32_t _aa = edi, _ab = 0xFE624E21u, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10087CAF: adc edi, 0xfe624e21 */
      edi = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, edi); /* 0x10087CB5: push edi */
    PUSH32(esp, ebx); /* 0x10087CB6: push ebx */
    RECOMP_CALL(sub_1001464C); /* 0x10087CB7: call 0x1001464c */
    RECOMP_FLAGS_IN();
    MEM32(esi) = eax; /* 0x10087CBC: mov dword ptr [esi], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10087CBE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x4) = edx; /* 0x10087CC0: mov dword ptr [esi + 4], edx */
    edi = POP32_VAL(esp); /* 0x10087CC3: pop edi */
    RECOMP_BACKEDGE();
    goto L_10087B9E; /* 0x10087CC4: jmp 0x10087b9e */
L_10087CC9:
    PUSH32(esp, ebx); /* 0x10087CC9: push ebx */
    PUSH32(esp, ebx); /* 0x10087CCA: push ebx */
    PUSH32(esp, ebx); /* 0x10087CCB: push ebx */
    PUSH32(esp, ebx); /* 0x10087CCC: push ebx */
    PUSH32(esp, ebx); /* 0x10087CCD: push ebx */
    RECOMP_CALL(sub_100A469B); /* 0x10087CCE: call 0x100a469b */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x10087CD3u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10087CD4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10087CD4u);

L_10087CD4:
    PUSH32(esp, ebp); /* 0x10087CD4: push ebp */
    ebp = esp; /* 0x10087CD5: mov ebp, esp */
    PUSH32(esp, esi); /* 0x10087CD7: push esi */
    RECOMP_CALL(sub_100870B6); /* 0x10087CD8: call 0x100870b6 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x10087CDD: mov esi, eax */
    /* test esi, esi */ /* 0x10087CDF: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10087CF6; /* 0x10087CE1: je 0x10087cf6 */
L_10087CE3:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10087CE3: push dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x10087CE6: push esi */
    RECOMP_CALL(sub_100176C5); /* 0x10087CE7: call 0x100176c5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x10087CEC: neg eax */
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x10087CEE: pop ecx */
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x10087CEF: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = ~eax; /* 0x10087CF1: not eax */
    ecx = POP32_VAL(esp); /* 0x10087CF3: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    eax = eax & esi; /* 0x10087CF4: and eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_10087CF6:
    esi = POP32_VAL(esp); /* 0x10087CF6: pop esi */
    ebp = POP32_VAL(esp); /* 0x10087CF7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10087CF8: ret  */
    RECOMP_REGS_OUT();
}

void sub_10087CF9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10087CF9u);

L_10087CF9:
    PUSH32(esp, ebp); /* 0x10087CF9: push ebp */
    ebp = esp; /* 0x10087CFA: mov ebp, esp */
    PUSH32(esp, esi); /* 0x10087CFC: push esi */
    RECOMP_CALL(sub_100870B6); /* 0x10087CFD: call 0x100870b6 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x10087D02: mov esi, eax */
    /* test esi, esi */ /* 0x10087D04: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10087D1B; /* 0x10087D06: je 0x10087d1b */
L_10087D08:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10087D08: push dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x10087D0B: push esi */
    RECOMP_CALL(sub_10017888); /* 0x10087D0C: call 0x10017888 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x10087D11: neg eax */
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x10087D13: pop ecx */
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x10087D14: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = ~eax; /* 0x10087D16: not eax */
    ecx = POP32_VAL(esp); /* 0x10087D18: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    eax = eax & esi; /* 0x10087D19: and eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_10087D1B:
    esi = POP32_VAL(esp); /* 0x10087D1B: pop esi */
    ebp = POP32_VAL(esp); /* 0x10087D1C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10087D1D: ret  */
    RECOMP_REGS_OUT();
}

void sub_10087D1E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10087D1Eu);

L_10087D1E:
    PUSH32(esp, ebp); /* 0x10087D1E: push ebp */
    ebp = esp; /* 0x10087D1F: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x48u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x48u; /* 0x10087D21: sub esp, 0x48 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x10087D24: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x10087D29: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x10087D2B: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x44))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x44)) = MEM32(ebp + (-0x44)) & 0; /* 0x10087D2E: and dword ptr [ebp - 0x44], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x48))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x48)) = MEM32(ebp + (-0x48)) & 0; /* 0x10087D32: and dword ptr [ebp - 0x48], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x10087D36: push edi */
    edi = MEM32(ebp + 0x8); /* 0x10087D37: mov edi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x3C)) = edi; /* 0x10087D3A: mov dword ptr [ebp - 0x3c], edi */
    /* test edi, edi */ /* 0x10087D3D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10087D5B; /* 0x10087D3F: jne 0x10087d5b */
L_10087D41:
    RECOMP_CALL(sub_1001177D); /* 0x10087D41: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10087D46: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10087D4C: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10087D51: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edx | eax)); _flag_b = (uint32_t)((edx | eax));
    edx = edx | eax; /* 0x10087D54: or edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10087FB2; /* 0x10087D56: jmp 0x10087fb2 */
L_10087D5B:
    eax = MEM32(edi + 0x14); /* 0x10087D5B: mov eax, dword ptr [edi + 0x14] */
    PUSH32(esp, ebx); /* 0x10087D5E: push ebx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10087D5F: cdq  */
    PUSH32(esp, esi); /* 0x10087D60: push esi */
    ebx = eax; /* 0x10087D61: mov ebx, eax */
    esi = edx; /* 0x10087D63: mov esi, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFBBu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFBBu; /* 0x10087D65: add eax, -0x45 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x30)) = ebx; /* 0x10087D68: mov dword ptr [ebp - 0x30], ebx */
    ecx = esi; /* 0x10087D6B: mov ecx, esi */
    MEM32(ebp + (-0x2C)) = esi; /* 0x10087D6D: mov dword ptr [ebp - 0x2c], esi */
    { uint32_t _aa = ecx, _ab = 0xFFFFFFFFu, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10087D70: adc ecx, -1 */
      ecx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    /* test ecx, ecx */ /* 0x10087D73: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10087FA0; /* 0x10087D75: ja 0x10087fa0 */
L_10087D7B:
    if (0) goto L_10087D88; /* 0x10087D7B: jb 0x10087d88 */
L_10087D7D:
    /* cmp eax, 0x408u */ /* 0x10087D7D: cmp eax, 0x408 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x408u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_10087FA0; /* 0x10087D82: ja 0x10087fa0 */
L_10087D88:
    eax = MEM32(edi + 0x10); /* 0x10087D88: mov eax, dword ptr [edi + 0x10] */
    /* test eax, eax */ /* 0x10087D8B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10087D94; /* 0x10087D8D: js 0x10087d94 */
L_10087D8F:
    /* cmp eax, 0xBu */ /* 0x10087D8F: cmp eax, 0xb */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_10087DE0; /* 0x10087D92: jle 0x10087de0 */
L_10087D94:
    PUSH32(esp, 0xCu); /* 0x10087D94: push 0xc */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10087D96: cdq  */
    ecx = POP32_VAL(esp); /* 0x10087D97: pop ecx */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x10087D98: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    ecx = edx; /* 0x10087D9A: mov ecx, edx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10087D9C: cdq  */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x10087D9D: add ebx, eax */
    _flag_k = FK_ADD;
    MEM32(edi + 0x10) = ecx; /* 0x10087D9F: mov dword ptr [edi + 0x10], ecx */
    MEM32(ebp + (-0x30)) = ebx; /* 0x10087DA2: mov dword ptr [ebp - 0x30], ebx */
    { uint32_t _aa = esi, _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10087DA5: adc esi, edx */
      esi = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM32(ebp + (-0x2C)) = esi; /* 0x10087DA7: mov dword ptr [ebp - 0x2c], esi */
    /* test ecx, ecx */ /* 0x10087DAA: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_10087DC0; /* 0x10087DAC: jns 0x10087dc0 */
L_10087DAE:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0xFFFFFFFFu; /* 0x10087DAE: add ebx, -1 */
    _flag_k = FK_ADD;
    eax = ecx + 0xC; /* 0x10087DB1: lea eax, [ecx + 0xc] */
    MEM32(edi + 0x10) = eax; /* 0x10087DB4: mov dword ptr [edi + 0x10], eax */
    { uint32_t _aa = esi, _ab = 0xFFFFFFFFu, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10087DB7: adc esi, -1 */
      esi = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM32(ebp + (-0x30)) = ebx; /* 0x10087DBA: mov dword ptr [ebp - 0x30], ebx */
    MEM32(ebp + (-0x2C)) = esi; /* 0x10087DBD: mov dword ptr [ebp - 0x2c], esi */
L_10087DC0:
    ecx = ebx; /* 0x10087DC0: mov ecx, ebx */
    eax = esi; /* 0x10087DC2: mov eax, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFBBu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xFFFFFFBBu; /* 0x10087DC4: add ecx, -0x45 */
    _flag_k = FK_ADD;
    { uint32_t _aa = eax, _ab = 0xFFFFFFFFu, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10087DC7: adc eax, -1 */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    /* test eax, eax */ /* 0x10087DCA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10087FA0; /* 0x10087DCC: ja 0x10087fa0 */
L_10087DD2:
    if (0) goto L_10087DE0; /* 0x10087DD2: jb 0x10087de0 */
L_10087DD4:
    /* cmp ecx, 0x408u */ /* 0x10087DD4: cmp ecx, 0x408 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x408u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_10087FA0; /* 0x10087DDA: ja 0x10087fa0 */
L_10087DE0:
    eax = MEM32(edi + 0x10); /* 0x10087DE0: mov eax, dword ptr [edi + 0x10] */
    PUSH32(esp, 0); /* 0x10087DE3: push 0 */
    MEM32(ebp + (-0x34)) = eax; /* 0x10087DE5: mov dword ptr [ebp - 0x34], eax */
    PUSH32(esp, 4); /* 0x10087DE8: push 4 */
    eax = MEM32(eax * 4 + 0x100DFE38); /* 0x10087DEA: mov eax, dword ptr [eax*4 + 0x100dfe38] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10087DF1: cdq  */
    PUSH32(esp, esi); /* 0x10087DF2: push esi */
    edi = eax; /* 0x10087DF3: mov edi, eax */
    MEM32(ebp + (-0x38)) = edx; /* 0x10087DF5: mov dword ptr [ebp - 0x38], edx */
    PUSH32(esp, ebx); /* 0x10087DF8: push ebx */
    MEM32(ebp + (-0x40)) = edi; /* 0x10087DF9: mov dword ptr [ebp - 0x40], edi */
    RECOMP_CALL(sub_10034DBD); /* 0x10087DFC: call 0x10034dbd */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x10087E01: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10087E13; /* 0x10087E03: jne 0x10087e13 */
L_10087E05:
    PUSH32(esp, eax); /* 0x10087E05: push eax */
    PUSH32(esp, 0x64u); /* 0x10087E06: push 0x64 */
    PUSH32(esp, esi); /* 0x10087E08: push esi */
    PUSH32(esp, ebx); /* 0x10087E09: push ebx */
    RECOMP_CALL(sub_10034DBD); /* 0x10087E0A: call 0x10034dbd */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x10087E0F: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10087E32; /* 0x10087E11: jne 0x10087e32 */
L_10087E13:
    ecx = ebx; /* 0x10087E13: mov ecx, ebx */
    eax = esi; /* 0x10087E15: mov eax, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x76Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x76Cu; /* 0x10087E17: add ecx, 0x76c */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x10087E1D: push 0 */
    PUSH32(esp, 0x190u); /* 0x10087E1F: push 0x190 */
    { uint32_t _aa = eax, _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10087E24: adc eax, 0 */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, eax); /* 0x10087E27: push eax */
    PUSH32(esp, ecx); /* 0x10087E28: push ecx */
    RECOMP_CALL(sub_10034DBD); /* 0x10087E29: call 0x10034dbd */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x10087E2E: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10087E42; /* 0x10087E30: jne 0x10087e42 */
L_10087E32:
    /* cmp MEM32(ebp + (-0x34)), 1 */ /* 0x10087E32: cmp dword ptr [ebp - 0x34], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_10087E42; /* 0x10087E36: jle 0x10087e42 */
L_10087E38:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 1; /* 0x10087E38: add edi, 1 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x40)) = edi; /* 0x10087E3B: mov dword ptr [ebp - 0x40], edi */
    { uint32_t _aa = MEM32(ebp + (-0x38)), _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10087E3E: adc dword ptr [ebp - 0x38], 0 */
      MEM32(ebp + (-0x38)) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_10087E42:
    eax = MEM32(ebp + (-0x2C)); /* 0x10087E42: mov eax, dword ptr [ebp - 0x2c] */
    edi = ebx; /* 0x10087E45: mov edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 1; /* 0x10087E47: sub edi, 1 */
    _flag_k = FK_CMP;
    ecx = ebx; /* 0x10087E4A: mov ecx, ebx */
    PUSH32(esp, 0); /* 0x10087E4C: push 0 */
    { uint32_t _sa = esi, _sb = 0, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10087E4E: sbb esi, 0 */
      esi = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x12Bu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x12Bu; /* 0x10087E51: add ecx, 0x12b */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x190u); /* 0x10087E57: push 0x190 */
    { uint32_t _aa = eax, _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10087E5C: adc eax, 0 */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, eax); /* 0x10087E5F: push eax */
    PUSH32(esp, ecx); /* 0x10087E60: push ecx */
    RECOMP_CALL(sub_1001767D); /* 0x10087E61: call 0x1001767d */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x10087E66: mov ecx, eax */
    ebx = edx; /* 0x10087E68: mov ebx, edx */
    eax = MEM32(ebp + (-0x3C)); /* 0x10087E6A: mov eax, dword ptr [ebp - 0x3c] */
    PUSH32(esp, 0); /* 0x10087E6D: push 0 */
    PUSH32(esp, 0x64u); /* 0x10087E6F: push 0x64 */
    PUSH32(esp, esi); /* 0x10087E71: push esi */
    eax = MEM32(eax + 0xC); /* 0x10087E72: mov eax, dword ptr [eax + 0xc] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10087E75: cdq  */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x10087E76: add ecx, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x10087E78: push edi */
    MEM32(ebp + (-0x34)) = ecx; /* 0x10087E79: mov dword ptr [ebp - 0x34], ecx */
    { uint32_t _aa = ebx, _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10087E7C: adc ebx, edx */
      ebx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    RECOMP_CALL(sub_1001767D); /* 0x10087E7E: call 0x1001767d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + (-0x34)) = MEM32(ebp + (-0x34)) - eax; /* 0x10087E83: sub dword ptr [ebp - 0x34], eax */
    _flag_k = FK_CMP;
    PUSH32(esp, 0); /* 0x10087E86: push 0 */
    PUSH32(esp, 4); /* 0x10087E88: push 4 */
    PUSH32(esp, esi); /* 0x10087E8A: push esi */
    PUSH32(esp, edi); /* 0x10087E8B: push edi */
    { uint32_t _sa = ebx, _sb = edx, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10087E8C: sbb ebx, edx */
      ebx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    RECOMP_CALL(sub_1001767D); /* 0x10087E8E: call 0x1001767d */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x34)); /* 0x10087E93: mov esi, dword ptr [ebp - 0x34] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x10087E96: add esi, eax */
    _flag_k = FK_ADD;
    { uint32_t _aa = ebx, _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10087E98: adc ebx, edx */
      ebx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x10087E9A: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x10087E9C: push edi */
    PUSH32(esp, 0x16Du); /* 0x10087E9D: push 0x16d */
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x10087EA2: push dword ptr [ebp - 0x2c] */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x10087EA5: push dword ptr [ebp - 0x30] */
    RECOMP_CALL(sub_10015B8C); /* 0x10087EA8: call 0x10015b8c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x10087EAD: add esi, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x10087EAF: push edi */
    { uint32_t _aa = ebx, _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10087EB0: adc ebx, edx */
      ebx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x40)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + (-0x40)); /* 0x10087EB2: add esi, dword ptr [ebp - 0x40] */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x18u); /* 0x10087EB5: push 0x18 */
    { uint32_t _aa = ebx, _ab = MEM32(ebp + (-0x38)), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10087EB7: adc ebx, dword ptr [ebp - 0x38] */
      ebx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x63DFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 0x63DFu; /* 0x10087EBA: sub esi, 0x63df */
    _flag_k = FK_CMP;
    { uint32_t _sa = ebx, _sb = edi, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10087EC0: sbb ebx, edi */
      ebx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, ebx); /* 0x10087EC2: push ebx */
    PUSH32(esp, esi); /* 0x10087EC3: push esi */
    RECOMP_CALL(sub_10015B8C); /* 0x10087EC4: call 0x10015b8c */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0x3C)); /* 0x10087EC9: mov ebx, dword ptr [ebp - 0x3c] */
    esi = eax; /* 0x10087ECC: mov esi, eax */
    ecx = edx; /* 0x10087ECE: mov ecx, edx */
    PUSH32(esp, edi); /* 0x10087ED0: push edi */
    PUSH32(esp, 0x3Cu); /* 0x10087ED1: push 0x3c */
    eax = MEM32(ebx + 0x8); /* 0x10087ED3: mov eax, dword ptr [ebx + 8] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10087ED6: cdq  */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x10087ED7: add esi, eax */
    _flag_k = FK_ADD;
    { uint32_t _aa = ecx, _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10087ED9: adc ecx, edx */
      ecx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, ecx); /* 0x10087EDB: push ecx */
    PUSH32(esp, esi); /* 0x10087EDC: push esi */
    RECOMP_CALL(sub_10015B8C); /* 0x10087EDD: call 0x10015b8c */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x10087EE2: mov esi, eax */
    ecx = edx; /* 0x10087EE4: mov ecx, edx */
    eax = MEM32(ebx + 0x4); /* 0x10087EE6: mov eax, dword ptr [ebx + 4] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10087EE9: cdq  */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x10087EEA: add esi, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x10087EEC: push edi */
    PUSH32(esp, 0x3Cu); /* 0x10087EED: push 0x3c */
    { uint32_t _aa = ecx, _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10087EEF: adc ecx, edx */
      ecx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, ecx); /* 0x10087EF1: push ecx */
    PUSH32(esp, esi); /* 0x10087EF2: push esi */
    RECOMP_CALL(sub_10015B8C); /* 0x10087EF3: call 0x10015b8c */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x10087EF8: mov ecx, eax */
    esi = edx; /* 0x10087EFA: mov esi, edx */
    eax = MEM32(ebx); /* 0x10087EFC: mov eax, dword ptr [ebx] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10087EFE: cdq  */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x10087EFF: add ecx, eax */
    _flag_k = FK_ADD;
    { uint32_t _aa = esi, _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10087F01: adc esi, edx */
      esi = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM32(ebp + (-0x30)) = ecx; /* 0x10087F03: mov dword ptr [ebp - 0x30], ecx */
    MEM32(ebp + (-0x2C)) = esi; /* 0x10087F06: mov dword ptr [ebp - 0x2c], esi */
    /* cmp MEM32(ebp + 0xC), edi */ /* 0x10087F09: cmp dword ptr [ebp + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10087F7B; /* 0x10087F0C: je 0x10087f7b */
L_10087F0E:
    RECOMP_CALL(sub_10015B4C); /* 0x10087F0E: call 0x10015b4c */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x44); /* 0x10087F13: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x10087F16: push eax */
    RECOMP_CALL(sub_10015B33); /* 0x10087F17: call 0x10015b33 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10087F1C: pop ecx */
    /* test eax, eax */ /* 0x10087F1D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10087FC1; /* 0x10087F1F: jne 0x10087fc1 */
L_10087F25:
    eax = ebp + (-0x48); /* 0x10087F25: lea eax, [ebp - 0x48] */
    PUSH32(esp, eax); /* 0x10087F28: push eax */
    RECOMP_CALL(sub_10015B01); /* 0x10087F29: call 0x10015b01 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10087F2E: pop ecx */
    /* test eax, eax */ /* 0x10087F2F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10087FC1; /* 0x10087F31: jne 0x10087fc1 */
L_10087F37:
    eax = MEM32(ebp + (-0x48)); /* 0x10087F37: mov eax, dword ptr [ebp - 0x48] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10087F3A: cdq  */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x30)) = MEM32(ebp + (-0x30)) + eax; /* 0x10087F3B: add dword ptr [ebp - 0x30], eax */
    _flag_k = FK_ADD;
    eax = ebp + (-0x30); /* 0x10087F3E: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x10087F41: push eax */
    { uint32_t _aa = MEM32(ebp + (-0x2C)), _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10087F42: adc dword ptr [ebp - 0x2c], edx */
      MEM32(ebp + (-0x2C)) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = ebp + (-0x28); /* 0x10087F45: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x10087F48: push eax */
    RECOMP_CALL(sub_10017888); /* 0x10087F49: call 0x10017888 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10087F4E: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10087F4F: pop ecx */
    /* test eax, eax */ /* 0x10087F50: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10087FA0; /* 0x10087F52: jne 0x10087fa0 */
L_10087F54:
    eax = MEM32(ebx + 0x20); /* 0x10087F54: mov eax, dword ptr [ebx + 0x20] */
    /* test eax, eax */ /* 0x10087F57: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_10087F62; /* 0x10087F59: jg 0x10087f62 */
L_10087F5B:
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_10087F8E; /* 0x10087F5B: jns 0x10087f8e */
L_10087F5D:
    /* cmp MEM32(ebp + (-0x8)), edi */ /* 0x10087F5D: cmp dword ptr [ebp - 8], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_10087F8E; /* 0x10087F60: jle 0x10087f8e */
L_10087F62:
    eax = MEM32(ebp + (-0x44)); /* 0x10087F62: mov eax, dword ptr [ebp - 0x44] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10087F65: cdq  */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x30)) = MEM32(ebp + (-0x30)) + eax; /* 0x10087F66: add dword ptr [ebp - 0x30], eax */
    _flag_k = FK_ADD;
    eax = ebp + (-0x30); /* 0x10087F69: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x10087F6C: push eax */
    { uint32_t _aa = MEM32(ebp + (-0x2C)), _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10087F6D: adc dword ptr [ebp - 0x2c], edx */
      MEM32(ebp + (-0x2C)) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = ebp + (-0x28); /* 0x10087F70: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x10087F73: push eax */
    RECOMP_CALL(sub_10017888); /* 0x10087F74: call 0x10017888 */
    RECOMP_FLAGS_IN();
    goto L_10087F88; /* 0x10087F79: jmp 0x10087f88 */
L_10087F7B:
    eax = ebp + (-0x30); /* 0x10087F7B: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x10087F7E: push eax */
    eax = ebp + (-0x28); /* 0x10087F7F: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x10087F82: push eax */
    RECOMP_CALL(sub_100176C5); /* 0x10087F83: call 0x100176c5 */
    RECOMP_FLAGS_IN();
L_10087F88:
    ecx = POP32_VAL(esp); /* 0x10087F88: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10087F89: pop ecx */
    /* test eax, eax */ /* 0x10087F8A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10087FA0; /* 0x10087F8C: jne 0x10087fa0 */
L_10087F8E:
    eax = MEM32(ebp + (-0x30)); /* 0x10087F8E: mov eax, dword ptr [ebp - 0x30] */
    esi = ebp + (-0x28); /* 0x10087F91: lea esi, [ebp - 0x28] */
    edx = MEM32(ebp + (-0x2C)); /* 0x10087F94: mov edx, dword ptr [ebp - 0x2c] */
    edi = ebx; /* 0x10087F97: mov edi, ebx */
    PUSH32(esp, 9); /* 0x10087F99: push 9 */
    ecx = POP32_VAL(esp); /* 0x10087F9B: pop ecx */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x10087F9C: rep movsd dword ptr es:[edi], dword ptr [esi] */
    goto L_10087FB0; /* 0x10087F9E: jmp 0x10087fb0 */
L_10087FA0:
    RECOMP_CALL(sub_1001177D); /* 0x10087FA0: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10087FA5: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10087FAB: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edx | eax)); _flag_b = (uint32_t)((edx | eax));
    edx = edx | eax; /* 0x10087FAE: or edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_10087FB0:
    esi = POP32_VAL(esp); /* 0x10087FB0: pop esi */
    ebx = POP32_VAL(esp); /* 0x10087FB1: pop ebx */
L_10087FB2:
    ecx = MEM32(ebp + (-0x4)); /* 0x10087FB2: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x10087FB5: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x10087FB7: pop edi */
    RECOMP_CALL(sub_1000F7C6); /* 0x10087FB8: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x10087FBD: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10087FBF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10087FC0: ret  */
L_10087FC1:
    PUSH32(esp, edi); /* 0x10087FC1: push edi */
    PUSH32(esp, edi); /* 0x10087FC2: push edi */
    PUSH32(esp, edi); /* 0x10087FC3: push edi */
    PUSH32(esp, edi); /* 0x10087FC4: push edi */
    PUSH32(esp, edi); /* 0x10087FC5: push edi */
    RECOMP_CALL(sub_100A469B); /* 0x10087FC6: call 0x100a469b */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x10087FCBu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10087FCC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10087FCCu);

L_10087FCC:
    PUSH32(esp, ebp); /* 0x10087FCC: push ebp */
    ebp = esp; /* 0x10087FCD: mov ebp, esp */
    PUSH32(esp, 0); /* 0x10087FCF: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10087FD1: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10087D1E); /* 0x10087FD4: call 0x10087d1e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10087FD9: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10087FDA: pop ecx */
    ebp = POP32_VAL(esp); /* 0x10087FDB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10087FDC: ret  */
    RECOMP_REGS_OUT();
}

void sub_10087FDD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10087FDDu);

L_10087FDD:
    PUSH32(esp, ebp); /* 0x10087FDD: push ebp */
    ebp = esp; /* 0x10087FDE: mov ebp, esp */
    PUSH32(esp, 1); /* 0x10087FE0: push 1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10087FE2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10087D1E); /* 0x10087FE5: call 0x10087d1e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10087FEA: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10087FEB: pop ecx */
    ebp = POP32_VAL(esp); /* 0x10087FEC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10087FED: ret  */
    RECOMP_REGS_OUT();
}

void sub_10087FEE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10087FEEu);

L_10087FEE:
    PUSH32(esp, ebp); /* 0x10087FEE: push ebp */
    ebp = esp; /* 0x10087FEF: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x60u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x60u; /* 0x10087FF1: sub esp, 0x60 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x10087FF4: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x10087FF9: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x10087FFB: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, esi); /* 0x10087FFE: push esi */
    esi = MEM32(ebp + 0x8); /* 0x10087FFF: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x10088002: push edi */
    edi = MEM32(ebp + 0xC); /* 0x10088003: mov edi, dword ptr [ebp + 0xc] */
    /* cmp esi, 0xFFFFFFFEu */ /* 0x10088006: cmp esi, -2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008801B; /* 0x10088009: jne 0x1008801b */
L_1008800B:
    RECOMP_CALL(sub_1001177D); /* 0x1008800B: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x10088010: mov dword ptr [eax], 9 */
    goto L_10088196; /* 0x10088016: jmp 0x10088196 */
L_1008801B:
    /* test esi, esi */ /* 0x1008801B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10088186; /* 0x1008801D: js 0x10088186 */
L_10088023:
    /* cmp esi, MEM32(0x100DFDD8) */ /* 0x10088023: cmp esi, dword ptr [0x100dfdd8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(0x100DFDD8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_10088186; /* 0x10088029: jae 0x10088186 */
L_1008802F:
    eax = esi; /* 0x1008802F: mov eax, esi */
    ecx = esi; /* 0x10088031: mov ecx, esi */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x10088033: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x10088036: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((ecx) >> 26) & 1u); /* 0x10088039: shl ecx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ecx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 6u; /* 0x10088039: shl ecx, 6 */
    eax = MEM32(eax * 4 + 0x100DF640); /* 0x1008803C: mov eax, dword ptr [eax*4 + 0x100df640] */
    /* test MEM8(eax + ecx + 0x4), 1 */ /* 0x10088043: test byte ptr [eax + ecx + 4], 1 */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10088186; /* 0x10088048: je 0x10088186 */
L_1008804E:
    /* test edi, edi */ /* 0x1008804E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008806B; /* 0x10088050: jne 0x1008806b */
L_10088052:
    eax = ebp + (-0x40); /* 0x10088052: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x10088055: push eax */
    RECOMP_CALL(sub_10014675); /* 0x10088056: call 0x10014675 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x40)); /* 0x1008805B: mov eax, dword ptr [ebp - 0x40] */
    edi = ebp + (-0x48); /* 0x1008805E: lea edi, [ebp - 0x48] */
    MEM32(ebp + (-0x48)) = eax; /* 0x10088061: mov dword ptr [ebp - 0x48], eax */
    eax = MEM32(ebp + (-0x3C)); /* 0x10088064: mov eax, dword ptr [ebp - 0x3c] */
    ecx = POP32_VAL(esp); /* 0x10088067: pop ecx */
    MEM32(ebp + (-0x44)) = eax; /* 0x10088068: mov dword ptr [ebp - 0x44], eax */
L_1008806B:
    eax = edi + 0x8; /* 0x1008806B: lea eax, [edi + 8] */
    PUSH32(esp, eax); /* 0x1008806E: push eax */
    eax = ebp + (-0x38); /* 0x1008806F: lea eax, [ebp - 0x38] */
    PUSH32(esp, eax); /* 0x10088072: push eax */
    RECOMP_CALL(sub_10017888); /* 0x10088073: call 0x10017888 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10088078: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10088079: pop ecx */
    /* test eax, eax */ /* 0x1008807A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008808E; /* 0x1008807C: je 0x1008808e */
L_1008807E:
    RECOMP_CALL(sub_1001177D); /* 0x1008807E: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10088083: mov dword ptr [eax], 0x16 */
    goto L_10088196; /* 0x10088089: jmp 0x10088196 */
L_1008808E:
    eax = MEM32(ebp + (-0x24)); /* 0x1008808E: mov eax, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x76Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x76Cu; /* 0x10088091: add eax, 0x76c */
    _flag_k = FK_ADD;
    MEM16(ebp + (-0x14)) = (uint16_t)(LO16(eax)); /* 0x10088096: mov word ptr [ebp - 0x14], ax */
    eax = MEM32(ebp + (-0x28)); /* 0x1008809A: mov eax, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1008809D: inc eax */
    _flag_k = FK_INC;
    MEM16(ebp + (-0x12)) = (uint16_t)(LO16(eax)); /* 0x1008809E: mov word ptr [ebp - 0x12], ax */
    SET_LO16(eax, MEM16(ebp + (-0x2C))); /* 0x100880A2: mov ax, word ptr [ebp - 0x2c] */
    MEM16(ebp + (-0xE)) = (uint16_t)(LO16(eax)); /* 0x100880A6: mov word ptr [ebp - 0xe], ax */
    SET_LO16(eax, MEM16(ebp + (-0x30))); /* 0x100880AA: mov ax, word ptr [ebp - 0x30] */
    MEM16(ebp + (-0xC)) = (uint16_t)(LO16(eax)); /* 0x100880AE: mov word ptr [ebp - 0xc], ax */
    SET_LO16(eax, MEM16(ebp + (-0x34))); /* 0x100880B2: mov ax, word ptr [ebp - 0x34] */
    MEM16(ebp + (-0xA)) = (uint16_t)(LO16(eax)); /* 0x100880B6: mov word ptr [ebp - 0xa], ax */
    SET_LO16(eax, MEM16(ebp + (-0x38))); /* 0x100880BA: mov ax, word ptr [ebp - 0x38] */
    MEM16(ebp + (-0x8)) = (uint16_t)(LO16(eax)); /* 0x100880BE: mov word ptr [ebp - 8], ax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100880C2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ebp + (-0x6)) = (uint16_t)(LO16(eax)); /* 0x100880C4: mov word ptr [ebp - 6], ax */
    eax = ebp + (-0x50); /* 0x100880C8: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x100880CB: push eax */
    eax = ebp + (-0x14); /* 0x100880CC: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x100880CF: push eax */
    RECOMP_ICALL(MEM32(0x100E5124)); /* 0x100880D0: call dword ptr [0x100e5124] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100880D6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008807E; /* 0x100880D8: je 0x1008807e */
L_100880DA:
    eax = ebp + (-0x60); /* 0x100880DA: lea eax, [ebp - 0x60] */
    PUSH32(esp, eax); /* 0x100880DD: push eax */
    eax = ebp + (-0x50); /* 0x100880DE: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x100880E1: push eax */
    RECOMP_ICALL(MEM32(0x100E511C)); /* 0x100880E2: call dword ptr [0x100e511c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100880E8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008807E; /* 0x100880EA: je 0x1008807e */
L_100880EC:
    eax = ebp + (-0x38); /* 0x100880EC: lea eax, [ebp - 0x38] */
    PUSH32(esp, edi); /* 0x100880EF: push edi */
    PUSH32(esp, eax); /* 0x100880F0: push eax */
    RECOMP_CALL(sub_10017888); /* 0x100880F1: call 0x10017888 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100880F6: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100880F7: pop ecx */
    /* test eax, eax */ /* 0x100880F8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008807E; /* 0x100880FA: jne 0x1008807e */
L_100880FC:
    eax = MEM32(ebp + (-0x24)); /* 0x100880FC: mov eax, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x76Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x76Cu; /* 0x100880FF: add eax, 0x76c */
    _flag_k = FK_ADD;
    MEM16(ebp + (-0x14)) = (uint16_t)(LO16(eax)); /* 0x10088104: mov word ptr [ebp - 0x14], ax */
    eax = MEM32(ebp + (-0x28)); /* 0x10088108: mov eax, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1008810B: inc eax */
    _flag_k = FK_INC;
    MEM16(ebp + (-0x12)) = (uint16_t)(LO16(eax)); /* 0x1008810C: mov word ptr [ebp - 0x12], ax */
    SET_LO16(eax, MEM16(ebp + (-0x2C))); /* 0x10088110: mov ax, word ptr [ebp - 0x2c] */
    MEM16(ebp + (-0xE)) = (uint16_t)(LO16(eax)); /* 0x10088114: mov word ptr [ebp - 0xe], ax */
    SET_LO16(eax, MEM16(ebp + (-0x30))); /* 0x10088118: mov ax, word ptr [ebp - 0x30] */
    MEM16(ebp + (-0xC)) = (uint16_t)(LO16(eax)); /* 0x1008811C: mov word ptr [ebp - 0xc], ax */
    SET_LO16(eax, MEM16(ebp + (-0x34))); /* 0x10088120: mov ax, word ptr [ebp - 0x34] */
    MEM16(ebp + (-0xA)) = (uint16_t)(LO16(eax)); /* 0x10088124: mov word ptr [ebp - 0xa], ax */
    SET_LO16(eax, MEM16(ebp + (-0x38))); /* 0x10088128: mov ax, word ptr [ebp - 0x38] */
    MEM16(ebp + (-0x8)) = (uint16_t)(LO16(eax)); /* 0x1008812C: mov word ptr [ebp - 8], ax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10088130: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ebp + (-0x6)) = (uint16_t)(LO16(eax)); /* 0x10088132: mov word ptr [ebp - 6], ax */
    eax = ebp + (-0x50); /* 0x10088136: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x10088139: push eax */
    eax = ebp + (-0x14); /* 0x1008813A: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1008813D: push eax */
    RECOMP_ICALL(MEM32(0x100E5124)); /* 0x1008813E: call dword ptr [0x100e5124] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10088144: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008807E; /* 0x10088146: je 0x1008807e */
L_1008814C:
    eax = ebp + (-0x58); /* 0x1008814C: lea eax, [ebp - 0x58] */
    PUSH32(esp, eax); /* 0x1008814F: push eax */
    eax = ebp + (-0x50); /* 0x10088150: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x10088153: push eax */
    RECOMP_ICALL(MEM32(0x100E511C)); /* 0x10088154: call dword ptr [0x100e511c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1008815A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008807E; /* 0x1008815C: je 0x1008807e */
L_10088162:
    eax = ebp + (-0x60); /* 0x10088162: lea eax, [ebp - 0x60] */
    PUSH32(esp, eax); /* 0x10088165: push eax */
    eax = ebp + (-0x58); /* 0x10088166: lea eax, [ebp - 0x58] */
    PUSH32(esp, eax); /* 0x10088169: push eax */
    PUSH32(esp, 0); /* 0x1008816A: push 0 */
    PUSH32(esp, esi); /* 0x1008816C: push esi */
    RECOMP_CALL(sub_10014D4B); /* 0x1008816D: call 0x10014d4b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10088172: pop ecx */
    PUSH32(esp, eax); /* 0x10088173: push eax */
    RECOMP_ICALL(MEM32(0x100E5120)); /* 0x10088174: call dword ptr [0x100e5120] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1008817A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008807E; /* 0x1008817C: je 0x1008807e */
L_10088182:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10088182: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10088199; /* 0x10088184: jmp 0x10088199 */
L_10088186:
    RECOMP_CALL(sub_1001177D); /* 0x10088186: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x1008818B: mov dword ptr [eax], 9 */
    RECOMP_CALL(sub_100A4670); /* 0x10088191: call 0x100a4670 */
    RECOMP_FLAGS_IN();
L_10088196:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10088196: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_10088199:
    ecx = MEM32(ebp + (-0x4)); /* 0x10088199: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1008819C: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1008819D: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1008819F: pop esi */
    RECOMP_CALL(sub_1000F7C6); /* 0x100881A0: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x100881A5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100881A7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100881A8: ret  */
    RECOMP_REGS_OUT();
}

void sub_100881A9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100881A9u);

L_100881A9:
    PUSH32(esp, ebp); /* 0x100881A9: push ebp */
    ebp = esp; /* 0x100881AA: mov ebp, esp */
    PUSH32(esp, edi); /* 0x100881AC: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x100881AD: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x8), edi */ /* 0x100881AF: cmp dword ptr [ebp + 8], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100881C9; /* 0x100881B2: jne 0x100881c9 */
L_100881B4:
    RECOMP_CALL(sub_1001177D); /* 0x100881B4: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x100881B9: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x100881BF: call 0x100a4670 */
    RECOMP_FLAGS_IN();
L_100881C4:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x100881C4: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10088218; /* 0x100881C7: jmp 0x10088218 */
L_100881C9:
    PUSH32(esp, edi); /* 0x100881C9: push edi */
    PUSH32(esp, 0x40u); /* 0x100881CA: push 0x40 */
    PUSH32(esp, 0x8002u); /* 0x100881CC: push 0x8002 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100881D1: push dword ptr [ebp + 8] */
    eax = ebp + 0x8; /* 0x100881D4: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x100881D7: push eax */
    RECOMP_CALL(sub_100A1C4A); /* 0x100881D8: call 0x100a1c4a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100881DD: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100881E0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100881C4; /* 0x100881E2: jne 0x100881c4 */
L_100881E4:
    PUSH32(esp, esi); /* 0x100881E4: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100881E5: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100881E8: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10087FEE); /* 0x100881EB: call 0x10087fee */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100881F0: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x100881F2: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100881F3: pop ecx */
    /* cmp esi, 0xFFFFFFFFu */ /* 0x100881F4: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10088200; /* 0x100881F7: jne 0x10088200 */
L_100881F9:
    RECOMP_CALL(sub_1001177D); /* 0x100881F9: call 0x1001177d */
    RECOMP_FLAGS_IN();
    edi = MEM32(eax); /* 0x100881FE: mov edi, dword ptr [eax] */
L_10088200:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10088200: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10014EA2); /* 0x10088203: call 0x10014ea2 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10088208: pop ecx */
    /* cmp esi, 0xFFFFFFFFu */ /* 0x10088209: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10088215; /* 0x1008820C: jne 0x10088215 */
L_1008820E:
    RECOMP_CALL(sub_1001177D); /* 0x1008820E: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = edi; /* 0x10088213: mov dword ptr [eax], edi */
L_10088215:
    eax = esi; /* 0x10088215: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x10088217: pop esi */
L_10088218:
    edi = POP32_VAL(esp); /* 0x10088218: pop edi */
    ebp = POP32_VAL(esp); /* 0x10088219: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008821A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008821B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008821Bu);

L_1008821B:
    PUSH32(esp, ebp); /* 0x1008821B: push ebp */
    ebp = esp; /* 0x1008821C: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1008821E: push esi */
    PUSH32(esp, edi); /* 0x1008821F: push edi */
    edi = 0x100E4078u; /* 0x10088220: mov edi, 0x100e4078 */
    RECOMP_CALL(sub_1000F720); /* 0x10088225: call 0x1000f720 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1008822A: mov esi, eax */
    /* test esi, esi */ /* 0x1008822C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008824B; /* 0x1008822E: je 0x1008824b */
L_10088230:
    /* cmp MEM32(esi + 0x40), 0 */ /* 0x10088230: cmp dword ptr [esi + 0x40], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x40)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10088248; /* 0x10088234: jne 0x10088248 */
L_10088236:
    PUSH32(esp, 2); /* 0x10088236: push 2 */
    PUSH32(esp, 0x1Au); /* 0x10088238: push 0x1a */
    RECOMP_CALL(sub_10011208); /* 0x1008823A: call 0x10011208 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x40) = eax; /* 0x1008823F: mov dword ptr [esi + 0x40], eax */
    ecx = POP32_VAL(esp); /* 0x10088242: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10088243: pop ecx */
    /* test eax, eax */ /* 0x10088244: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008824B; /* 0x10088246: je 0x1008824b */
L_10088248:
    edi = MEM32(esi + 0x40); /* 0x10088248: mov edi, dword ptr [esi + 0x40] */
L_1008824B:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008824B: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1Au); /* 0x1008824E: push 0x1a */
    PUSH32(esp, edi); /* 0x10088250: push edi */
    RECOMP_CALL(sub_10088265); /* 0x10088251: call 0x10088265 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10088256: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x10088259: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1008825B: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = ~eax; /* 0x1008825D: not eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    eax = eax & edi; /* 0x1008825F: and eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x10088261: pop edi */
    esi = POP32_VAL(esp); /* 0x10088262: pop esi */
    ebp = POP32_VAL(esp); /* 0x10088263: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10088264: ret  */
    RECOMP_REGS_OUT();
}

void sub_10088265(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10088265u);

L_10088265:
    PUSH32(esp, ebp); /* 0x10088265: push ebp */
    ebp = esp; /* 0x10088266: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x10088268: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x1008826B: push ebx */
    PUSH32(esp, esi); /* 0x1008826C: push esi */
    PUSH32(esp, edi); /* 0x1008826D: push edi */
    /* test ecx, ecx */ /* 0x1008826E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10088419; /* 0x10088270: je 0x10088419 */
L_10088276:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x10088276: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10088419; /* 0x1008827A: jbe 0x10088419 */
L_10088280:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10088280: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0xC), 0x1Au */ /* 0x10088282: cmp dword ptr [ebp + 0xc], 0x1a */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0x1Au);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM16(ecx) = (uint16_t)(LO16(eax)); /* 0x10088286: mov word ptr [ecx], ax */
    if (CMP_B(_flag_a, _flag_b)) goto L_10088419; /* 0x10088289: jb 0x10088419 */
L_1008828F:
    esi = MEM32(ebp + 0x10); /* 0x1008828F: mov esi, dword ptr [ebp + 0x10] */
    /* test esi, esi */ /* 0x10088292: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10088419; /* 0x10088294: je 0x10088419 */
L_1008829A:
    ebx = MEM32(esi + 0x14); /* 0x1008829A: mov ebx, dword ptr [esi + 0x14] */
    /* test ebx, ebx */ /* 0x1008829D: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10088419; /* 0x1008829F: js 0x10088419 */
L_100882A5:
    edi = MEM32(esi + 0x10); /* 0x100882A5: mov edi, dword ptr [esi + 0x10] */
    /* test edi, edi */ /* 0x100882A8: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10088419; /* 0x100882AA: js 0x10088419 */
L_100882B0:
    /* cmp edi, 0xBu */ /* 0x100882B0: cmp edi, 0xb */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_10088419; /* 0x100882B3: jg 0x10088419 */
L_100882B9:
    /* cmp MEM32(esi + 0x8), eax */ /* 0x100882B9: cmp dword ptr [esi + 8], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_10088419; /* 0x100882BC: jl 0x10088419 */
L_100882C2:
    /* cmp MEM32(esi + 0x8), 0x17u */ /* 0x100882C2: cmp dword ptr [esi + 8], 0x17 */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0x17u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_10088419; /* 0x100882C6: jg 0x10088419 */
L_100882CC:
    /* cmp MEM32(esi + 0x4), eax */ /* 0x100882CC: cmp dword ptr [esi + 4], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_10088419; /* 0x100882CF: jl 0x10088419 */
L_100882D5:
    /* cmp MEM32(esi + 0x4), 0x3Bu */ /* 0x100882D5: cmp dword ptr [esi + 4], 0x3b */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0x3Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_10088419; /* 0x100882D9: jg 0x10088419 */
L_100882DF:
    /* cmp MEM32(esi), eax */ /* 0x100882DF: cmp dword ptr [esi], eax */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_10088419; /* 0x100882E1: jl 0x10088419 */
L_100882E7:
    /* cmp MEM32(esi), 0x3Bu */ /* 0x100882E7: cmp dword ptr [esi], 0x3b */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0x3Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_10088419; /* 0x100882EA: jg 0x10088419 */
L_100882F0:
    /* cmp MEM32(esi + 0xC), 1 */ /* 0x100882F0: cmp dword ptr [esi + 0xc], 1 */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_10088419; /* 0x100882F4: jl 0x10088419 */
L_100882FA:
    eax = MEM32(edi * 4 + 0x100DFE3C); /* 0x100882FA: mov eax, dword ptr [edi*4 + 0x100dfe3c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi * 4 + 0x100DFE38));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(edi * 4 + 0x100DFE38); /* 0x10088301: sub eax, dword ptr [edi*4 + 0x100dfe38] */
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = 0x64u; /* 0x10088308: mov dword ptr [ebp + 8], 0x64 */
    /* cmp eax, MEM32(esi + 0xC) */ /* 0x1008830F: cmp eax, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_10088359; /* 0x10088312: jge 0x10088359 */
L_10088314:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x76Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x76Cu; /* 0x10088314: add ebx, 0x76c */
    _flag_k = FK_ADD;
    eax = ebx; /* 0x1008831A: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80000003u);
    eax = eax & 0x80000003u; /* 0x1008831C: and eax, 0x80000003 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_10088328; /* 0x10088321: jns 0x10088328 */
L_10088323:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10088323: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFCu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFCu));
    eax = eax | 0xFFFFFFFCu; /* 0x10088324: or eax, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10088327: inc eax */
    _flag_k = FK_INC;
L_10088328:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_10088334; /* 0x10088328: jne 0x10088334 */
L_1008832A:
    eax = ebx; /* 0x1008832A: mov eax, ebx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1008832C: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)MEM32(ebp + 0x8); /* 0x1008832D: idiv dword ptr [ebp + 8] */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    /* test edx, edx */ /* 0x10088330: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10088346; /* 0x10088332: jne 0x10088346 */
L_10088334:
    eax = ebx; /* 0x10088334: mov eax, ebx */
    ebx = 0x190u; /* 0x10088336: mov ebx, 0x190 */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1008833B: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ebx; /* 0x1008833C: idiv ebx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    /* test edx, edx */ /* 0x1008833E: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10088419; /* 0x10088340: jne 0x10088419 */
L_10088346:
    /* cmp edi, 1 */ /* 0x10088346: cmp edi, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10088419; /* 0x10088349: jne 0x10088419 */
L_1008834F:
    /* cmp MEM32(esi + 0xC), 0x1Du */ /* 0x1008834F: cmp dword ptr [esi + 0xc], 0x1d */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(0x1Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_10088419; /* 0x10088353: jg 0x10088419 */
L_10088359:
    eax = MEM32(esi + 0x18); /* 0x10088359: mov eax, dword ptr [esi + 0x18] */
    /* test eax, eax */ /* 0x1008835C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10088419; /* 0x1008835E: js 0x10088419 */
L_10088364:
    /* cmp eax, 6 */ /* 0x10088364: cmp eax, 6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_10088419; /* 0x10088367: jg 0x10088419 */
L_1008836D:
    ebx = (uint32_t)((int32_t)eax * (int32_t)3); /* 0x1008836D: imul ebx, eax, 3 */
    edi = (uint32_t)((int32_t)edi * (int32_t)3); /* 0x10088370: imul edi, edi, 3 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x10088373: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_10088375:
    SET_LO16(eax, (int32_t)(int8_t)MEM8(ebx + edx + 0x10017640)); /* 0x10088375: movsx ax, byte ptr [ebx + edx + 0x10017640] */
    MEM16(ecx) = (uint16_t)(LO16(eax)); /* 0x1008837E: mov word ptr [ecx], ax */
    ecx = ecx + 0x2; /* 0x10088381: lea ecx, [ecx + 2] */
    SET_LO16(eax, (int32_t)(int8_t)MEM8(edi + edx + 0x10017658)); /* 0x10088384: movsx ax, byte ptr [edi + edx + 0x10017658] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1008838D: inc edx */
    _flag_k = FK_INC;
    MEM16(ecx + 0x6) = (uint16_t)(LO16(eax)); /* 0x1008838E: mov word ptr [ecx + 6], ax */
    /* cmp edx, 3 */ /* 0x10088392: cmp edx, 3 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_10088375; /* 0x10088395: jl 0x10088375 */
L_10088397:
    PUSH32(esp, 0x20u); /* 0x10088397: push 0x20 */
    ebx = POP32_VAL(esp); /* 0x10088399: pop ebx */
    MEM16(ecx) = (uint16_t)(LO16(ebx)); /* 0x1008839A: mov word ptr [ecx], bx */
    eax = ecx + 0xA; /* 0x1008839D: lea eax, [ecx + 0xa] */
    MEM16(ecx + 0x8) = (uint16_t)(LO16(ebx)); /* 0x100883A0: mov word ptr [ecx + 8], bx */
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x100883A4: push dword ptr [esi + 0xc] */
    PUSH32(esp, eax); /* 0x100883A7: push eax */
    RECOMP_CALL(sub_1008842F); /* 0x100883A8: call 0x1008842f */
    RECOMP_FLAGS_IN();
    MEM16(eax) = (uint16_t)(LO16(ebx)); /* 0x100883AD: mov word ptr [eax], bx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x100883B0: add eax, 2 */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x100883B3: push dword ptr [esi + 8] */
    PUSH32(esp, eax); /* 0x100883B6: push eax */
    RECOMP_CALL(sub_1008842F); /* 0x100883B7: call 0x1008842f */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x3Au); /* 0x100883BC: push 0x3a */
    edi = POP32_VAL(esp); /* 0x100883BE: pop edi */
    MEM16(eax) = (uint16_t)(LO16(edi)); /* 0x100883BF: mov word ptr [eax], di */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x100883C2: add eax, 2 */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x100883C5: push dword ptr [esi + 4] */
    PUSH32(esp, eax); /* 0x100883C8: push eax */
    RECOMP_CALL(sub_1008842F); /* 0x100883C9: call 0x1008842f */
    RECOMP_FLAGS_IN();
    MEM16(eax) = (uint16_t)(LO16(edi)); /* 0x100883CE: mov word ptr [eax], di */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x100883D1: add eax, 2 */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(esi)); /* 0x100883D4: push dword ptr [esi] */
    PUSH32(esp, eax); /* 0x100883D6: push eax */
    RECOMP_CALL(sub_1008842F); /* 0x100883D7: call 0x1008842f */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x100883DC: mov ecx, eax */
    PUSH32(esp, 0x64u); /* 0x100883DE: push 0x64 */
    MEM16(ecx) = (uint16_t)(LO16(ebx)); /* 0x100883E0: mov word ptr [ecx], bx */
    eax = MEM32(esi + 0x14); /* 0x100883E3: mov eax, dword ptr [esi + 0x14] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x100883E6: cdq  */
    ebx = POP32_VAL(esp); /* 0x100883E7: pop ebx */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ebx; /* 0x100883E8: idiv ebx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x13u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x13u; /* 0x100883EA: add eax, 0x13 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x100883ED: push eax */
    eax = ecx + 0x2; /* 0x100883EE: lea eax, [ecx + 2] */
    PUSH32(esp, eax); /* 0x100883F1: push eax */
    RECOMP_CALL(sub_1008842F); /* 0x100883F2: call 0x1008842f */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x100883F7: mov ecx, eax */
    eax = MEM32(esi + 0x14); /* 0x100883F9: mov eax, dword ptr [esi + 0x14] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x100883FC: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ebx; /* 0x100883FD: idiv ebx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    PUSH32(esp, edx); /* 0x100883FF: push edx */
    PUSH32(esp, ecx); /* 0x10088400: push ecx */
    RECOMP_CALL(sub_1008842F); /* 0x10088401: call 0x1008842f */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x10088406: add esp, 0x30 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0xAu); /* 0x10088409: push 0xa */
    ecx = POP32_VAL(esp); /* 0x1008840B: pop ecx */
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x1008840C: mov word ptr [eax], cx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1008840F: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(eax + 0x2) = (uint16_t)(LO16(ecx)); /* 0x10088411: mov word ptr [eax + 2], cx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10088415: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1008842A; /* 0x10088417: jmp 0x1008842a */
L_10088419:
    RECOMP_CALL(sub_1001177D); /* 0x10088419: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1008841E: push 0x16 */
    esi = POP32_VAL(esp); /* 0x10088420: pop esi */
    MEM32(eax) = esi; /* 0x10088421: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x10088423: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x10088428: mov eax, esi */
L_1008842A:
    edi = POP32_VAL(esp); /* 0x1008842A: pop edi */
    esi = POP32_VAL(esp); /* 0x1008842B: pop esi */
    ebx = POP32_VAL(esp); /* 0x1008842C: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1008842D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008842E: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008842F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008842Fu);

L_1008842F:
    PUSH32(esp, ebp); /* 0x1008842F: push ebp */
    ebp = esp; /* 0x10088430: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x10088432: mov eax, dword ptr [ebp + 0xc] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10088435: cdq  */
    PUSH32(esp, 0xAu); /* 0x10088436: push 0xa */
    ecx = POP32_VAL(esp); /* 0x10088438: pop ecx */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x10088439: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    ecx = MEM32(ebp + 0x8); /* 0x1008843B: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x30u; /* 0x1008843E: add eax, 0x30 */
    _flag_k = FK_ADD;
    MEM16(ecx) = (uint16_t)(LO16(eax)); /* 0x10088441: mov word ptr [ecx], ax */
    eax = edx + 0x30; /* 0x10088444: lea eax, [edx + 0x30] */
    MEM16(ecx + 0x2) = (uint16_t)(LO16(eax)); /* 0x10088447: mov word ptr [ecx + 2], ax */
    eax = ecx + 0x4; /* 0x1008844B: lea eax, [ecx + 4] */
    ebp = POP32_VAL(esp); /* 0x1008844E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008844F: ret  */
    RECOMP_REGS_OUT();
}

void sub_10088450(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10088450u);

L_10088450:
    PUSH32(esp, ebp); /* 0x10088450: push ebp */
    ebp = esp; /* 0x10088451: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x10088453: sub esp, 0x28 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x10088456: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1008845B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1008845D: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x10088460: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x10088463: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10088487; /* 0x10088465: jne 0x10088487 */
L_10088467:
    RECOMP_CALL(sub_1001177D); /* 0x10088467: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1008846C: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10088472: call 0x100a4670 */
    RECOMP_FLAGS_IN();
L_10088477:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10088477: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_10088479:
    ecx = MEM32(ebp + (-0x4)); /* 0x10088479: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1008847C: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F7C6); /* 0x1008847E: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x10088483: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10088485: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10088486: ret  */
L_10088487:
    /* cmp MEM32(eax), 0 */ /* 0x10088487: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_10088499; /* 0x1008848A: jge 0x10088499 */
L_1008848C:
    RECOMP_CALL(sub_1001177D); /* 0x1008848C: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10088491: mov dword ptr [eax], 0x16 */
    RECOMP_BACKEDGE();
    goto L_10088477; /* 0x10088497: jmp 0x10088477 */
L_10088499:
    PUSH32(esp, eax); /* 0x10088499: push eax */
    eax = ebp + (-0x28); /* 0x1008849A: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x1008849D: push eax */
    RECOMP_CALL(sub_10087269); /* 0x1008849E: call 0x10087269 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100884A3: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100884A4: pop ecx */
    /* test eax, eax */ /* 0x100884A5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10088477; /* 0x100884A7: jne 0x10088477 */
L_100884A9:
    eax = ebp + (-0x28); /* 0x100884A9: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x100884AC: push eax */
    RECOMP_CALL(sub_1008821B); /* 0x100884AD: call 0x1008821b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100884B2: pop ecx */
    RECOMP_BACKEDGE();
    goto L_10088479; /* 0x100884B3: jmp 0x10088479 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100884B5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100884B5u);

L_100884B5:
    PUSH32(esp, ebp); /* 0x100884B5: push ebp */
    ebp = esp; /* 0x100884B6: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x100884B8: sub esp, 0x28 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x100884BB: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x100884C0: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x100884C2: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x10); /* 0x100884C5: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x100884C8: push esi */
    esi = MEM32(ebp + 0x8); /* 0x100884C9: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x100884CC: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10088511; /* 0x100884CE: je 0x10088511 */
L_100884D0:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x100884D0: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10088511; /* 0x100884D4: jbe 0x10088511 */
L_100884D6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100884D6: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esi) = (uint16_t)(LO16(ecx)); /* 0x100884D8: mov word ptr [esi], cx */
    /* test eax, eax */ /* 0x100884DB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10088511; /* 0x100884DD: je 0x10088511 */
L_100884DF:
    /* cmp MEM32(eax), ecx */ /* 0x100884DF: cmp dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_100884EF; /* 0x100884E1: jge 0x100884ef */
L_100884E3:
    RECOMP_CALL(sub_1001177D); /* 0x100884E3: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x100884E8: push 0x16 */
    esi = POP32_VAL(esp); /* 0x100884EA: pop esi */
    MEM32(eax) = esi; /* 0x100884EB: mov dword ptr [eax], esi */
    goto L_10088520; /* 0x100884ED: jmp 0x10088520 */
L_100884EF:
    PUSH32(esp, eax); /* 0x100884EF: push eax */
    eax = ebp + (-0x28); /* 0x100884F0: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x100884F3: push eax */
    RECOMP_CALL(sub_10087269); /* 0x100884F4: call 0x10087269 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100884F9: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100884FA: pop ecx */
    /* test eax, eax */ /* 0x100884FB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10088522; /* 0x100884FD: jne 0x10088522 */
L_100884FF:
    eax = ebp + (-0x28); /* 0x100884FF: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x10088502: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10088503: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x10088506: push esi */
    RECOMP_CALL(sub_10088265); /* 0x10088507: call 0x10088265 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1008850C: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_10088522; /* 0x1008850F: jmp 0x10088522 */
L_10088511:
    RECOMP_CALL(sub_1001177D); /* 0x10088511: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x10088516: push 0x16 */
    esi = POP32_VAL(esp); /* 0x10088518: pop esi */
    MEM32(eax) = esi; /* 0x10088519: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x1008851B: call 0x100a4670 */
    RECOMP_FLAGS_IN();
L_10088520:
    eax = esi; /* 0x10088520: mov eax, esi */
L_10088522:
    ecx = MEM32(ebp + (-0x4)); /* 0x10088522: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x10088525: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x10088527: pop esi */
    RECOMP_CALL(sub_1000F7C6); /* 0x10088528: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1008852D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1008852F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10088530: ret  */
    RECOMP_REGS_OUT();
}

void sub_10088531(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10088531u);

L_10088531:
    PUSH32(esp, ebp); /* 0x10088531: push ebp */
    ebp = esp; /* 0x10088532: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x10088534: sub esp, 0x28 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x10088537: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1008853C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1008853E: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x10088541: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x10088544: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10088568; /* 0x10088546: jne 0x10088568 */
L_10088548:
    RECOMP_CALL(sub_1001177D); /* 0x10088548: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1008854D: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10088553: call 0x100a4670 */
    RECOMP_FLAGS_IN();
L_10088558:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10088558: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008855A:
    ecx = MEM32(ebp + (-0x4)); /* 0x1008855A: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1008855D: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F7C6); /* 0x1008855F: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x10088564: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10088566: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10088567: ret  */
L_10088568:
    /* cmp MEM32(eax + 0x4), 0 */ /* 0x10088568: cmp dword ptr [eax + 4], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_10088582; /* 0x1008856C: jg 0x10088582 */
L_1008856E:
    if (CMP_L(_flag_a, _flag_b)) goto L_10088575; /* 0x1008856E: jl 0x10088575 */
L_10088570:
    /* cmp MEM32(eax), 0 */ /* 0x10088570: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_10088582; /* 0x10088573: jae 0x10088582 */
L_10088575:
    RECOMP_CALL(sub_1001177D); /* 0x10088575: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1008857A: mov dword ptr [eax], 0x16 */
    RECOMP_BACKEDGE();
    goto L_10088558; /* 0x10088580: jmp 0x10088558 */
L_10088582:
    PUSH32(esp, eax); /* 0x10088582: push eax */
    eax = ebp + (-0x28); /* 0x10088583: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x10088586: push eax */
    RECOMP_CALL(sub_10017888); /* 0x10088587: call 0x10017888 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008858C: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1008858D: pop ecx */
    /* test eax, eax */ /* 0x1008858E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10088558; /* 0x10088590: jne 0x10088558 */
L_10088592:
    eax = ebp + (-0x28); /* 0x10088592: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x10088595: push eax */
    RECOMP_CALL(sub_1008821B); /* 0x10088596: call 0x1008821b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008859B: pop ecx */
    RECOMP_BACKEDGE();
    goto L_1008855A; /* 0x1008859C: jmp 0x1008855a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1008859E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008859Eu);

L_1008859E:
    PUSH32(esp, ebp); /* 0x1008859E: push ebp */
    ebp = esp; /* 0x1008859F: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x100885A1: sub esp, 0x28 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x100885A4: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x100885A9: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x100885AB: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x10); /* 0x100885AE: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x100885B1: push esi */
    esi = MEM32(ebp + 0x8); /* 0x100885B2: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x100885B5: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10088611; /* 0x100885B7: je 0x10088611 */
L_100885B9:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x100885B9: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10088611; /* 0x100885BD: jbe 0x10088611 */
L_100885BF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100885BF: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esi) = (uint16_t)(LO16(ecx)); /* 0x100885C1: mov word ptr [esi], cx */
    /* test eax, eax */ /* 0x100885C4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10088611; /* 0x100885C6: je 0x10088611 */
L_100885C8:
    /* cmp MEM32(eax + 0x4), ecx */ /* 0x100885C8: cmp dword ptr [eax + 4], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_100885DF; /* 0x100885CB: jg 0x100885df */
L_100885CD:
    if (CMP_L(_flag_a, _flag_b)) goto L_100885D3; /* 0x100885CD: jl 0x100885d3 */
L_100885CF:
    /* cmp MEM32(eax), ecx */ /* 0x100885CF: cmp dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_100885DF; /* 0x100885D1: jae 0x100885df */
L_100885D3:
    RECOMP_CALL(sub_1001177D); /* 0x100885D3: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x100885D8: push 0x16 */
    esi = POP32_VAL(esp); /* 0x100885DA: pop esi */
    MEM32(eax) = esi; /* 0x100885DB: mov dword ptr [eax], esi */
    goto L_10088620; /* 0x100885DD: jmp 0x10088620 */
L_100885DF:
    /* cmp MEM32(eax + 0x4), 7 */ /* 0x100885DF: cmp dword ptr [eax + 4], 7 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_100885EF; /* 0x100885E3: jl 0x100885ef */
L_100885E5:
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_100885D3; /* 0x100885E5: jg 0x100885d3 */
L_100885E7:
    /* cmp MEM32(eax), 0x93406FFFu */ /* 0x100885E7: cmp dword ptr [eax], 0x93406fff */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0x93406FFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_100885D3; /* 0x100885ED: ja 0x100885d3 */
L_100885EF:
    PUSH32(esp, eax); /* 0x100885EF: push eax */
    eax = ebp + (-0x28); /* 0x100885F0: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x100885F3: push eax */
    RECOMP_CALL(sub_10017888); /* 0x100885F4: call 0x10017888 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100885F9: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100885FA: pop ecx */
    /* test eax, eax */ /* 0x100885FB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10088622; /* 0x100885FD: jne 0x10088622 */
L_100885FF:
    eax = ebp + (-0x28); /* 0x100885FF: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x10088602: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10088603: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x10088606: push esi */
    RECOMP_CALL(sub_10088265); /* 0x10088607: call 0x10088265 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1008860C: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_10088622; /* 0x1008860F: jmp 0x10088622 */
L_10088611:
    RECOMP_CALL(sub_1001177D); /* 0x10088611: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x10088616: push 0x16 */
    esi = POP32_VAL(esp); /* 0x10088618: pop esi */
    MEM32(eax) = esi; /* 0x10088619: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x1008861B: call 0x100a4670 */
    RECOMP_FLAGS_IN();
L_10088620:
    eax = esi; /* 0x10088620: mov eax, esi */
L_10088622:
    ecx = MEM32(ebp + (-0x4)); /* 0x10088622: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x10088625: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x10088627: pop esi */
    RECOMP_CALL(sub_1000F7C6); /* 0x10088628: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1008862D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1008862F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10088630: ret  */
    RECOMP_REGS_OUT();
}

void sub_10088631(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10088631u);

L_10088631:
    PUSH32(esp, ebp); /* 0x10088631: push ebp */
    ebp = esp; /* 0x10088632: mov ebp, esp */
    PUSH32(esp, 9); /* 0x10088634: push 9 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10088636: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1008864B); /* 0x10088639: call 0x1008864b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1008863E: neg eax */
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x10088640: pop ecx */
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x10088641: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = ~eax; /* 0x10088643: not eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    eax = eax & MEM32(ebp + 0x8); /* 0x10088645: and eax, dword ptr [ebp + 8] */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x10088648: pop ecx */
    ebp = POP32_VAL(esp); /* 0x10088649: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008864A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008864B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008864Bu);

L_1008864B:
    PUSH32(esp, ebp); /* 0x1008864B: push ebp */
    ebp = esp; /* 0x1008864C: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x1008864E: sub esp, 0x14 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x10088651: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x10088656: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x10088658: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x1008865B: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1008865C: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1008865F: push esi */
    /* test ebx, ebx */ /* 0x10088660: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100886F9; /* 0x10088662: je 0x100886f9 */
L_10088668:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x10088668: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_100886F9; /* 0x1008866C: jbe 0x100886f9 */
L_10088672:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10088672: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0xC), 9 */ /* 0x10088674: cmp dword ptr [ebp + 0xc], 9 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM16(ebx) = (uint16_t)(LO16(eax)); /* 0x10088678: mov word ptr [ebx], ax */
    if (CMP_AE(_flag_a, _flag_b)) goto L_10088686; /* 0x1008867B: jae 0x10088686 */
L_1008867D:
    RECOMP_CALL(sub_1001177D); /* 0x1008867D: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x22u); /* 0x10088682: push 0x22 */
    goto L_10088700; /* 0x10088684: jmp 0x10088700 */
L_10088686:
    PUSH32(esp, edi); /* 0x10088686: push edi */
    eax = ebp + (-0x14); /* 0x10088687: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1008868A: push eax */
    RECOMP_ICALL(MEM32(0x100E5118)); /* 0x1008868B: call dword ptr [0x100e5118] */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)MEM16(ebp + (-0x14)); /* 0x10088691: movzx eax, word ptr [ebp - 0x14] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10088695: cdq  */
    PUSH32(esp, 0x64u); /* 0x10088696: push 0x64 */
    edi = POP32_VAL(esp); /* 0x10088698: pop edi */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)edi; /* 0x10088699: idiv edi */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    ecx = (uint32_t)MEM16(ebp + (-0x12)); /* 0x1008869B: movzx ecx, word ptr [ebp - 0x12] */
    PUSH32(esp, 0x2Fu); /* 0x1008869F: push 0x2f */
    eax = POP32_VAL(esp); /* 0x100886A1: pop eax */
    MEM16(ebx + 0xA) = (uint16_t)(LO16(eax)); /* 0x100886A2: mov word ptr [ebx + 0xa], ax */
    edi = edx; /* 0x100886A6: mov edi, edx */
    MEM16(ebx + 0x4) = (uint16_t)(LO16(eax)); /* 0x100886A8: mov word ptr [ebx + 4], ax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100886AC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ebx + 0x10) = (uint16_t)(LO16(eax)); /* 0x100886AE: mov word ptr [ebx + 0x10], ax */
    eax = ecx; /* 0x100886B2: mov eax, ecx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x100886B4: cdq  */
    PUSH32(esp, 0xAu); /* 0x100886B5: push 0xa */
    ecx = POP32_VAL(esp); /* 0x100886B7: pop ecx */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x100886B8: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    esi = (uint32_t)MEM16(ebp + (-0xE)); /* 0x100886BA: movzx esi, word ptr [ebp - 0xe] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x30u; /* 0x100886BE: add eax, 0x30 */
    _flag_k = FK_ADD;
    MEM16(ebx) = (uint16_t)(LO16(eax)); /* 0x100886C1: mov word ptr [ebx], ax */
    eax = esi; /* 0x100886C4: mov eax, esi */
    PUSH32(esp, 0xAu); /* 0x100886C6: push 0xa */
    ecx = edx + 0x30; /* 0x100886C8: lea ecx, [edx + 0x30] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x100886CB: cdq  */
    MEM16(ebx + 0x2) = (uint16_t)(LO16(ecx)); /* 0x100886CC: mov word ptr [ebx + 2], cx */
    ecx = POP32_VAL(esp); /* 0x100886D0: pop ecx */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x100886D1: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x30u; /* 0x100886D3: add eax, 0x30 */
    _flag_k = FK_ADD;
    MEM16(ebx + 0x6) = (uint16_t)(LO16(eax)); /* 0x100886D6: mov word ptr [ebx + 6], ax */
    eax = edx + 0x30; /* 0x100886DA: lea eax, [edx + 0x30] */
    MEM16(ebx + 0x8) = (uint16_t)(LO16(eax)); /* 0x100886DD: mov word ptr [ebx + 8], ax */
    eax = edi; /* 0x100886E1: mov eax, edi */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x100886E3: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x100886E4: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    edi = POP32_VAL(esp); /* 0x100886E6: pop edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x30u; /* 0x100886E7: add eax, 0x30 */
    _flag_k = FK_ADD;
    MEM16(ebx + 0xC) = (uint16_t)(LO16(eax)); /* 0x100886EA: mov word ptr [ebx + 0xc], ax */
    eax = edx + 0x30; /* 0x100886EE: lea eax, [edx + 0x30] */
    MEM16(ebx + 0xE) = (uint16_t)(LO16(eax)); /* 0x100886F1: mov word ptr [ebx + 0xe], ax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100886F5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1008870A; /* 0x100886F7: jmp 0x1008870a */
L_100886F9:
    RECOMP_CALL(sub_1001177D); /* 0x100886F9: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x100886FE: push 0x16 */
L_10088700:
    esi = POP32_VAL(esp); /* 0x10088700: pop esi */
    MEM32(eax) = esi; /* 0x10088701: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x10088703: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x10088708: mov eax, esi */
L_1008870A:
    ecx = MEM32(ebp + (-0x4)); /* 0x1008870A: mov ecx, dword ptr [ebp - 4] */
    esi = POP32_VAL(esp); /* 0x1008870D: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1008870E: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x10088710: pop ebx */
    RECOMP_CALL(sub_1000F7C6); /* 0x10088711: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x10088716: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10088718: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10088719: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008871A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008871Au);

L_1008871A:
    PUSH32(esp, ebp); /* 0x1008871A: push ebp */
    ebp = esp; /* 0x1008871B: mov ebp, esp */
    PUSH32(esp, 9); /* 0x1008871D: push 9 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008871F: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10088734); /* 0x10088722: call 0x10088734 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x10088727: neg eax */
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x10088729: pop ecx */
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1008872A: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = ~eax; /* 0x1008872C: not eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    eax = eax & MEM32(ebp + 0x8); /* 0x1008872E: and eax, dword ptr [ebp + 8] */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x10088731: pop ecx */
    ebp = POP32_VAL(esp); /* 0x10088732: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10088733: ret  */
    RECOMP_REGS_OUT();
}

void sub_10088734(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10088734u);

L_10088734:
    PUSH32(esp, ebp); /* 0x10088734: push ebp */
    ebp = esp; /* 0x10088735: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x10088737: sub esp, 0x14 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x1008873A: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1008873F: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x10088741: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x10088744: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x10088745: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x10088748: push esi */
    /* test ebx, ebx */ /* 0x10088749: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100887D4; /* 0x1008874B: je 0x100887d4 */
L_10088751:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x10088751: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_100887D4; /* 0x10088755: jbe 0x100887d4 */
L_10088757:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10088757: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0xC), 9 */ /* 0x10088759: cmp dword ptr [ebp + 0xc], 9 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM16(ebx) = (uint16_t)(LO16(eax)); /* 0x1008875D: mov word ptr [ebx], ax */
    if (CMP_AE(_flag_a, _flag_b)) goto L_1008876B; /* 0x10088760: jae 0x1008876b */
L_10088762:
    RECOMP_CALL(sub_1001177D); /* 0x10088762: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x22u); /* 0x10088767: push 0x22 */
    goto L_100887DB; /* 0x10088769: jmp 0x100887db */
L_1008876B:
    PUSH32(esp, edi); /* 0x1008876B: push edi */
    eax = ebp + (-0x14); /* 0x1008876C: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1008876F: push eax */
    RECOMP_ICALL(MEM32(0x100E5118)); /* 0x10088770: call dword ptr [0x100e5118] */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)MEM16(ebp + (-0xC)); /* 0x10088776: movzx eax, word ptr [ebp - 0xc] */
    PUSH32(esp, 0x3Au); /* 0x1008877A: push 0x3a */
    ecx = POP32_VAL(esp); /* 0x1008877C: pop ecx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1008877D: cdq  */
    MEM16(ebx + 0xA) = (uint16_t)(LO16(ecx)); /* 0x1008877E: mov word ptr [ebx + 0xa], cx */
    MEM16(ebx + 0x4) = (uint16_t)(LO16(ecx)); /* 0x10088782: mov word ptr [ebx + 4], cx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10088786: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xAu); /* 0x10088788: push 0xa */
    MEM16(ebx + 0x10) = (uint16_t)(LO16(ecx)); /* 0x1008878A: mov word ptr [ebx + 0x10], cx */
    ecx = POP32_VAL(esp); /* 0x1008878E: pop ecx */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x1008878F: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    esi = (uint32_t)MEM16(ebp + (-0xA)); /* 0x10088791: movzx esi, word ptr [ebp - 0xa] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x30u; /* 0x10088795: add eax, 0x30 */
    _flag_k = FK_ADD;
    edi = (uint32_t)MEM16(ebp + (-0x8)); /* 0x10088798: movzx edi, word ptr [ebp - 8] */
    MEM16(ebx) = (uint16_t)(LO16(eax)); /* 0x1008879C: mov word ptr [ebx], ax */
    eax = esi; /* 0x1008879F: mov eax, esi */
    PUSH32(esp, 0xAu); /* 0x100887A1: push 0xa */
    ecx = edx + 0x30; /* 0x100887A3: lea ecx, [edx + 0x30] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x100887A6: cdq  */
    esi = POP32_VAL(esp); /* 0x100887A7: pop esi */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)esi; /* 0x100887A8: idiv esi */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    MEM16(ebx + 0x2) = (uint16_t)(LO16(ecx)); /* 0x100887AA: mov word ptr [ebx + 2], cx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x30u; /* 0x100887AE: add eax, 0x30 */
    _flag_k = FK_ADD;
    MEM16(ebx + 0x6) = (uint16_t)(LO16(eax)); /* 0x100887B1: mov word ptr [ebx + 6], ax */
    eax = edi; /* 0x100887B5: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x100887B7: pop edi */
    ecx = edx + 0x30; /* 0x100887B8: lea ecx, [edx + 0x30] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x100887BB: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)esi; /* 0x100887BC: idiv esi */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    MEM16(ebx + 0x8) = (uint16_t)(LO16(ecx)); /* 0x100887BE: mov word ptr [ebx + 8], cx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x30u; /* 0x100887C2: add eax, 0x30 */
    _flag_k = FK_ADD;
    MEM16(ebx + 0xC) = (uint16_t)(LO16(eax)); /* 0x100887C5: mov word ptr [ebx + 0xc], ax */
    eax = edx + 0x30; /* 0x100887C9: lea eax, [edx + 0x30] */
    MEM16(ebx + 0xE) = (uint16_t)(LO16(eax)); /* 0x100887CC: mov word ptr [ebx + 0xe], ax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100887D0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100887E5; /* 0x100887D2: jmp 0x100887e5 */
L_100887D4:
    RECOMP_CALL(sub_1001177D); /* 0x100887D4: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x100887D9: push 0x16 */
L_100887DB:
    esi = POP32_VAL(esp); /* 0x100887DB: pop esi */
    MEM32(eax) = esi; /* 0x100887DC: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x100887DE: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x100887E3: mov eax, esi */
L_100887E5:
    ecx = MEM32(ebp + (-0x4)); /* 0x100887E5: mov ecx, dword ptr [ebp - 4] */
    esi = POP32_VAL(esp); /* 0x100887E8: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x100887E9: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x100887EB: pop ebx */
    RECOMP_CALL(sub_1000F7C6); /* 0x100887EC: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x100887F1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100887F3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100887F4: ret  */
    RECOMP_REGS_OUT();
}

void sub_100887F5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100887F5u);

L_100887F5:
    PUSH32(esp, ebp); /* 0x100887F5: push ebp */
    ebp = esp; /* 0x100887F6: mov ebp, esp */
    PUSH32(esp, edi); /* 0x100887F8: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x100887F9: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x8), edi */ /* 0x100887FB: cmp dword ptr [ebp + 8], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10088815; /* 0x100887FE: jne 0x10088815 */
L_10088800:
    RECOMP_CALL(sub_1001177D); /* 0x10088800: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10088805: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1008880B: call 0x100a4670 */
    RECOMP_FLAGS_IN();
L_10088810:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10088810: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10088864; /* 0x10088813: jmp 0x10088864 */
L_10088815:
    PUSH32(esp, edi); /* 0x10088815: push edi */
    PUSH32(esp, 0x40u); /* 0x10088816: push 0x40 */
    PUSH32(esp, 0x8002u); /* 0x10088818: push 0x8002 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008881D: push dword ptr [ebp + 8] */
    eax = ebp + 0x8; /* 0x10088820: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x10088823: push eax */
    RECOMP_CALL(sub_10015474); /* 0x10088824: call 0x10015474 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x10088829: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1008882C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10088810; /* 0x1008882E: jne 0x10088810 */
L_10088830:
    PUSH32(esp, esi); /* 0x10088830: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10088831: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10088834: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10087940); /* 0x10088837: call 0x10087940 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1008883C: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1008883E: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1008883F: pop ecx */
    /* cmp esi, 0xFFFFFFFFu */ /* 0x10088840: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008884C; /* 0x10088843: jne 0x1008884c */
L_10088845:
    RECOMP_CALL(sub_1001177D); /* 0x10088845: call 0x1001177d */
    RECOMP_FLAGS_IN();
    edi = MEM32(eax); /* 0x1008884A: mov edi, dword ptr [eax] */
L_1008884C:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008884C: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10014EA2); /* 0x1008884F: call 0x10014ea2 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10088854: pop ecx */
    /* cmp esi, 0xFFFFFFFFu */ /* 0x10088855: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10088861; /* 0x10088858: jne 0x10088861 */
L_1008885A:
    RECOMP_CALL(sub_1001177D); /* 0x1008885A: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = edi; /* 0x1008885F: mov dword ptr [eax], edi */
L_10088861:
    eax = esi; /* 0x10088861: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x10088863: pop esi */
L_10088864:
    edi = POP32_VAL(esp); /* 0x10088864: pop edi */
    ebp = POP32_VAL(esp); /* 0x10088865: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10088866: ret  */
    RECOMP_REGS_OUT();
}

void sub_10088867(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10088867u);

L_10088867:
    PUSH32(esp, ebp); /* 0x10088867: push ebp */
    ebp = esp; /* 0x10088868: mov ebp, esp */
    PUSH32(esp, edi); /* 0x1008886A: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1008886B: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x8), edi */ /* 0x1008886D: cmp dword ptr [ebp + 8], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10088887; /* 0x10088870: jne 0x10088887 */
L_10088872:
    RECOMP_CALL(sub_1001177D); /* 0x10088872: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10088877: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1008887D: call 0x100a4670 */
    RECOMP_FLAGS_IN();
L_10088882:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10088882: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100888D6; /* 0x10088885: jmp 0x100888d6 */
L_10088887:
    PUSH32(esp, edi); /* 0x10088887: push edi */
    PUSH32(esp, 0x40u); /* 0x10088888: push 0x40 */
    PUSH32(esp, 0x8002u); /* 0x1008888A: push 0x8002 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008888F: push dword ptr [ebp + 8] */
    eax = ebp + 0x8; /* 0x10088892: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x10088895: push eax */
    RECOMP_CALL(sub_10015474); /* 0x10088896: call 0x10015474 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1008889B: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1008889E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10088882; /* 0x100888A0: jne 0x10088882 */
L_100888A2:
    PUSH32(esp, esi); /* 0x100888A2: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100888A3: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100888A6: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10087FEE); /* 0x100888A9: call 0x10087fee */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100888AE: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x100888B0: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100888B1: pop ecx */
    /* cmp esi, 0xFFFFFFFFu */ /* 0x100888B2: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100888BE; /* 0x100888B5: jne 0x100888be */
L_100888B7:
    RECOMP_CALL(sub_1001177D); /* 0x100888B7: call 0x1001177d */
    RECOMP_FLAGS_IN();
    edi = MEM32(eax); /* 0x100888BC: mov edi, dword ptr [eax] */
L_100888BE:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100888BE: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10014EA2); /* 0x100888C1: call 0x10014ea2 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100888C6: pop ecx */
    /* cmp esi, 0xFFFFFFFFu */ /* 0x100888C7: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100888D3; /* 0x100888CA: jne 0x100888d3 */
L_100888CC:
    RECOMP_CALL(sub_1001177D); /* 0x100888CC: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = edi; /* 0x100888D1: mov dword ptr [eax], edi */
L_100888D3:
    eax = esi; /* 0x100888D3: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x100888D5: pop esi */
L_100888D6:
    edi = POP32_VAL(esp); /* 0x100888D6: pop edi */
    ebp = POP32_VAL(esp); /* 0x100888D7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100888D8: ret  */
    RECOMP_REGS_OUT();
}

void sub_100888D9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100888D9u);

L_100888D9:
    PUSH32(esp, ebp); /* 0x100888D9: push ebp */
    ebp = esp; /* 0x100888DA: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x100888DC: sub esp, 0x14 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x100888DF: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x100888E4: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x100888E6: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, esi); /* 0x100888E9: push esi */
    esi = MEM32(ebp + 0x8); /* 0x100888EA: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x100888ED: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10088905; /* 0x100888EF: jne 0x10088905 */
L_100888F1:
    RECOMP_CALL(sub_1001177D); /* 0x100888F1: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x100888F6: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x100888FC: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10088901: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10088954; /* 0x10088903: jmp 0x10088954 */
L_10088905:
    eax = ebp + (-0x14); /* 0x10088905: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x10088908: push eax */
    RECOMP_ICALL(MEM32(0x100E5118)); /* 0x10088909: call dword ptr [0x100e5118] */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)MEM16(ebp + (-0x8)); /* 0x1008890F: movzx eax, word ptr [ebp - 8] */
    _flag_a = (uint32_t)((MEM32(esi + 0x20) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(esi + 0x20) | 0xFFFFFFFFu));
    MEM32(esi + 0x20) = MEM32(esi + 0x20) | 0xFFFFFFFFu; /* 0x10088913: or dword ptr [esi + 0x20], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = eax; /* 0x10088917: mov dword ptr [esi], eax */
    eax = (uint32_t)MEM16(ebp + (-0xA)); /* 0x10088919: movzx eax, word ptr [ebp - 0xa] */
    MEM32(esi + 0x4) = eax; /* 0x1008891D: mov dword ptr [esi + 4], eax */
    eax = (uint32_t)MEM16(ebp + (-0xC)); /* 0x10088920: movzx eax, word ptr [ebp - 0xc] */
    MEM32(esi + 0x8) = eax; /* 0x10088924: mov dword ptr [esi + 8], eax */
    eax = (uint32_t)MEM16(ebp + (-0xE)); /* 0x10088927: movzx eax, word ptr [ebp - 0xe] */
    MEM32(esi + 0xC) = eax; /* 0x1008892B: mov dword ptr [esi + 0xc], eax */
    eax = (uint32_t)MEM16(ebp + (-0x12)); /* 0x1008892E: movzx eax, word ptr [ebp - 0x12] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10088932: dec eax */
    _flag_k = FK_DEC;
    MEM32(esi + 0x10) = eax; /* 0x10088933: mov dword ptr [esi + 0x10], eax */
    eax = (uint32_t)MEM16(ebp + (-0x14)); /* 0x10088936: movzx eax, word ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x76Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x76Cu; /* 0x1008893A: sub eax, 0x76c */
    _flag_k = FK_CMP;
    MEM32(esi + 0x14) = eax; /* 0x1008893F: mov dword ptr [esi + 0x14], eax */
    eax = (uint32_t)MEM16(ebp + (-0x10)); /* 0x10088942: movzx eax, word ptr [ebp - 0x10] */
    PUSH32(esp, esi); /* 0x10088946: push esi */
    MEM32(esi + 0x18) = eax; /* 0x10088947: mov dword ptr [esi + 0x18], eax */
    RECOMP_CALL(sub_100876BB); /* 0x1008894A: call 0x100876bb */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)MEM16(ebp + (-0x6)); /* 0x1008894F: movzx eax, word ptr [ebp - 6] */
    ecx = POP32_VAL(esp); /* 0x10088953: pop ecx */
L_10088954:
    ecx = MEM32(ebp + (-0x4)); /* 0x10088954: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x10088957: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x10088959: pop esi */
    RECOMP_CALL(sub_1000F7C6); /* 0x1008895A: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1008895F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10088961: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10088962: ret  */
    RECOMP_REGS_OUT();
}

void sub_10088963(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10088963u);

L_10088963:
    PUSH32(esp, ebp); /* 0x10088963: push ebp */
    ebp = esp; /* 0x10088964: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x10088966: sub esp, 0x14 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x10088969: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1008896E: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x10088970: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, esi); /* 0x10088973: push esi */
    esi = MEM32(ebp + 0x8); /* 0x10088974: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x10088977: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10088980; /* 0x10088979: jne 0x10088980 */
L_1008897B:
    PUSH32(esp, 0x57u); /* 0x1008897B: push 0x57 */
    eax = POP32_VAL(esp); /* 0x1008897D: pop eax */
    goto L_100889DC; /* 0x1008897E: jmp 0x100889dc */
L_10088980:
    PUSH32(esp, esi); /* 0x10088980: push esi */
    RECOMP_CALL(sub_100876BB); /* 0x10088981: call 0x100876bb */
    RECOMP_FLAGS_IN();
    eax = 0x76Cu; /* 0x10088986: mov eax, 0x76c */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(esi + 0x14)) << 16;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO16(eax, LO16(eax) + MEM16(esi + 0x14)); /* 0x1008898B: add ax, word ptr [esi + 0x14] */
    _flag_k = FK_NARROW(FK_ADD, 16);
    MEM16(ebp + (-0x14)) = (uint16_t)(LO16(eax)); /* 0x1008898F: mov word ptr [ebp - 0x14], ax */
    SET_LO16(eax, MEM16(esi + 0x10)); /* 0x10088993: mov ax, word ptr [esi + 0x10] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(1) << 16;
    SET_LO16(eax, LO16(eax) + 1); /* 0x10088997: inc ax */
    _flag_k = FK_NARROW(FK_INC, 16);
    MEM16(ebp + (-0x12)) = (uint16_t)(LO16(eax)); /* 0x10088999: mov word ptr [ebp - 0x12], ax */
    SET_LO16(eax, MEM16(esi + 0xC)); /* 0x1008899D: mov ax, word ptr [esi + 0xc] */
    MEM16(ebp + (-0xE)) = (uint16_t)(LO16(eax)); /* 0x100889A1: mov word ptr [ebp - 0xe], ax */
    SET_LO16(eax, MEM16(esi + 0x8)); /* 0x100889A5: mov ax, word ptr [esi + 8] */
    MEM16(ebp + (-0xC)) = (uint16_t)(LO16(eax)); /* 0x100889A9: mov word ptr [ebp - 0xc], ax */
    SET_LO16(eax, MEM16(esi + 0x4)); /* 0x100889AD: mov ax, word ptr [esi + 4] */
    MEM16(ebp + (-0xA)) = (uint16_t)(LO16(eax)); /* 0x100889B1: mov word ptr [ebp - 0xa], ax */
    SET_LO16(eax, MEM16(esi)); /* 0x100889B5: mov ax, word ptr [esi] */
    MEM16(ebp + (-0x8)) = (uint16_t)(LO16(eax)); /* 0x100889B8: mov word ptr [ebp - 8], ax */
    eax = MEM32(ebp + 0xC); /* 0x100889BC: mov eax, dword ptr [ebp + 0xc] */
    MEM16(ebp + (-0x6)) = (uint16_t)(LO16(eax)); /* 0x100889BF: mov word ptr [ebp - 6], ax */
    eax = ebp + (-0x14); /* 0x100889C3: lea eax, [ebp - 0x14] */
    ecx = POP32_VAL(esp); /* 0x100889C6: pop ecx */
    PUSH32(esp, eax); /* 0x100889C7: push eax */
    RECOMP_ICALL(MEM32(0x100E5128)); /* 0x100889C8: call dword ptr [0x100e5128] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100889CE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100889DA; /* 0x100889D0: jne 0x100889da */
L_100889D2:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x100889D2: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    goto L_100889DC; /* 0x100889D8: jmp 0x100889dc */
L_100889DA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100889DA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_100889DC:
    ecx = MEM32(ebp + (-0x4)); /* 0x100889DC: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x100889DF: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x100889E1: pop esi */
    RECOMP_CALL(sub_1000F7C6); /* 0x100889E2: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x100889E7: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100889E9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100889EA: ret  */
    RECOMP_REGS_OUT();
}

void sub_100889EB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100889EBu);

L_100889EB:
    PUSH32(esp, ebp); /* 0x100889EB: push ebp */
    ebp = esp; /* 0x100889EC: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x100889EE: sub esp, 0x20 */
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x100889F1: push edi */
    PUSH32(esp, 7); /* 0x100889F2: push 7 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100889F4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ebp + (-0x1C); /* 0x100889F6: lea edi, [ebp - 0x1c] */
    ecx = POP32_VAL(esp); /* 0x100889F9: pop ecx */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x100889FA: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    eax = MEM32(ebp + 0x8); /* 0x100889FC: mov eax, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x18)) = eax; /* 0x100889FF: mov dword ptr [ebp - 0x18], eax */
    MEM32(ebp + (-0x20)) = eax; /* 0x10088A02: mov dword ptr [ebp - 0x20], eax */
    eax = MEM32(ebp + 0xC); /* 0x10088A05: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x14)) = 0x42u; /* 0x10088A08: mov dword ptr [ebp - 0x14], 0x42 */
    edi = POP32_VAL(esp); /* 0x10088A0F: pop edi */
    /* cmp eax, 0x3FFFFFFFu */ /* 0x10088A10: cmp eax, 0x3fffffff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10088A20; /* 0x10088A15: jbe 0x10088a20 */
L_10088A17:
    MEM32(ebp + (-0x1C)) = 0x7FFFFFFFu; /* 0x10088A17: mov dword ptr [ebp - 0x1c], 0x7fffffff */
    goto L_10088A25; /* 0x10088A1E: jmp 0x10088a25 */
L_10088A20:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x10088A20: add eax, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1C)) = eax; /* 0x10088A22: mov dword ptr [ebp - 0x1c], eax */
L_10088A25:
    PUSH32(esp, esi); /* 0x10088A25: push esi */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x10088A26: push dword ptr [ebp + 0x18] */
    eax = ebp + (-0x20); /* 0x10088A29: lea eax, [ebp - 0x20] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x10088A2C: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10088A2F: push dword ptr [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x10088A32: push eax */
    RECOMP_CALL(sub_1001D315); /* 0x10088A33: call 0x1001d315 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10088A38: add esp, 0x10 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x10088A3B: mov esi, eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) - 1; /* 0x10088A3D: dec dword ptr [ebp - 0x1c] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_10088A51; /* 0x10088A40: js 0x10088a51 */
L_10088A42:
    ecx = MEM32(ebp + (-0x20)); /* 0x10088A42: mov ecx, dword ptr [ebp - 0x20] */
    MEM8(ecx) = (uint8_t)(0); /* 0x10088A45: mov byte ptr [ecx], 0 */
    ecx = MEM32(ebp + (-0x20)); /* 0x10088A48: mov ecx, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10088A4B: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x20)) = ecx; /* 0x10088A4C: mov dword ptr [ebp - 0x20], ecx */
    goto L_10088A61; /* 0x10088A4F: jmp 0x10088a61 */
L_10088A51:
    eax = ebp + (-0x20); /* 0x10088A51: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x10088A54: push eax */
    PUSH32(esp, 0); /* 0x10088A55: push 0 */
    RECOMP_CALL(sub_1002C35B); /* 0x10088A57: call 0x1002c35b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10088A5C: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10088A5D: pop ecx */
    ecx = MEM32(ebp + (-0x20)); /* 0x10088A5E: mov ecx, dword ptr [ebp - 0x20] */
L_10088A61:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) - 1; /* 0x10088A61: dec dword ptr [ebp - 0x1c] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_10088A6B; /* 0x10088A64: js 0x10088a6b */
L_10088A66:
    MEM8(ecx) = (uint8_t)(0); /* 0x10088A66: mov byte ptr [ecx], 0 */
    goto L_10088A78; /* 0x10088A69: jmp 0x10088a78 */
L_10088A6B:
    eax = ebp + (-0x20); /* 0x10088A6B: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x10088A6E: push eax */
    PUSH32(esp, 0); /* 0x10088A6F: push 0 */
    RECOMP_CALL(sub_1002C35B); /* 0x10088A71: call 0x1002c35b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10088A76: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10088A77: pop ecx */
L_10088A78:
    eax = esi; /* 0x10088A78: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x10088A7A: pop esi */
    esp = ebp; /* 0x10088A7B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10088A7D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10088A7E: ret  */
    RECOMP_REGS_OUT();
}

void sub_10088A7F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10088A7Fu);

L_10088A7F:
    PUSH32(esp, ebp); /* 0x10088A7F: push ebp */
    ebp = esp; /* 0x10088A80: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x10088A82: push dword ptr [ebp + 0x14] */
    PUSH32(esp, 0); /* 0x10088A85: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10088A87: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10088A8A: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10088A8D: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100889EB); /* 0x10088A90: call 0x100889eb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x10088A95: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10088A98: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10088A99: ret  */
    RECOMP_REGS_OUT();
}

void sub_10088A9A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10088A9Au);

L_10088A9A:
    PUSH32(esp, ebp); /* 0x10088A9A: push ebp */
    ebp = esp; /* 0x10088A9B: mov ebp, esp */
    eax = ebp + 0x14; /* 0x10088A9D: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x10088AA0: push eax */
    PUSH32(esp, 0); /* 0x10088AA1: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10088AA3: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10088AA6: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10088AA9: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100889EB); /* 0x10088AAC: call 0x100889eb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x10088AB1: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10088AB4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10088AB5: ret  */
    RECOMP_REGS_OUT();
}

void sub_10088AB6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10088AB6u);

L_10088AB6:
    PUSH32(esp, ebp); /* 0x10088AB6: push ebp */
    ebp = esp; /* 0x10088AB7: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x10088AB9: sub esp, 0x20 */
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x10088ABC: push edi */
    PUSH32(esp, 7); /* 0x10088ABD: push 7 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10088ABF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ebp + (-0x1C); /* 0x10088AC1: lea edi, [ebp - 0x1c] */
    ecx = POP32_VAL(esp); /* 0x10088AC4: pop ecx */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x10088AC5: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    eax = MEM32(ebp + 0x8); /* 0x10088AC7: mov eax, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x18)) = eax; /* 0x10088ACA: mov dword ptr [ebp - 0x18], eax */
    MEM32(ebp + (-0x20)) = eax; /* 0x10088ACD: mov dword ptr [ebp - 0x20], eax */
    eax = MEM32(ebp + 0xC); /* 0x10088AD0: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x14)) = 0x42u; /* 0x10088AD3: mov dword ptr [ebp - 0x14], 0x42 */
    edi = POP32_VAL(esp); /* 0x10088ADA: pop edi */
    /* cmp eax, 0x3FFFFFFFu */ /* 0x10088ADB: cmp eax, 0x3fffffff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10088AEB; /* 0x10088AE0: jbe 0x10088aeb */
L_10088AE2:
    MEM32(ebp + (-0x1C)) = 0x7FFFFFFFu; /* 0x10088AE2: mov dword ptr [ebp - 0x1c], 0x7fffffff */
    goto L_10088AF0; /* 0x10088AE9: jmp 0x10088af0 */
L_10088AEB:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x10088AEB: add eax, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1C)) = eax; /* 0x10088AED: mov dword ptr [ebp - 0x1c], eax */
L_10088AF0:
    PUSH32(esp, ebx); /* 0x10088AF0: push ebx */
    PUSH32(esp, esi); /* 0x10088AF1: push esi */
    eax = ebp + 0x14; /* 0x10088AF2: lea eax, [ebp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10088AF5: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x10088AF7: push eax */
    PUSH32(esp, ebx); /* 0x10088AF8: push ebx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10088AF9: push dword ptr [ebp + 0x10] */
    eax = ebp + (-0x20); /* 0x10088AFC: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x10088AFF: push eax */
    RECOMP_CALL(sub_1001D315); /* 0x10088B00: call 0x1001d315 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10088B05: add esp, 0x10 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x10088B08: mov esi, eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) - 1; /* 0x10088B0A: dec dword ptr [ebp - 0x1c] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_10088B1D; /* 0x10088B0D: js 0x10088b1d */
L_10088B0F:
    ecx = MEM32(ebp + (-0x20)); /* 0x10088B0F: mov ecx, dword ptr [ebp - 0x20] */
    MEM8(ecx) = (uint8_t)(LO8(ebx)); /* 0x10088B12: mov byte ptr [ecx], bl */
    ecx = MEM32(ebp + (-0x20)); /* 0x10088B14: mov ecx, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10088B17: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x20)) = ecx; /* 0x10088B18: mov dword ptr [ebp - 0x20], ecx */
    goto L_10088B2C; /* 0x10088B1B: jmp 0x10088b2c */
L_10088B1D:
    eax = ebp + (-0x20); /* 0x10088B1D: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x10088B20: push eax */
    PUSH32(esp, ebx); /* 0x10088B21: push ebx */
    RECOMP_CALL(sub_1002C35B); /* 0x10088B22: call 0x1002c35b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10088B27: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10088B28: pop ecx */
    ecx = MEM32(ebp + (-0x20)); /* 0x10088B29: mov ecx, dword ptr [ebp - 0x20] */
L_10088B2C:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) - 1; /* 0x10088B2C: dec dword ptr [ebp - 0x1c] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_10088B35; /* 0x10088B2F: js 0x10088b35 */
L_10088B31:
    MEM8(ecx) = (uint8_t)(LO8(ebx)); /* 0x10088B31: mov byte ptr [ecx], bl */
    goto L_10088B41; /* 0x10088B33: jmp 0x10088b41 */
L_10088B35:
    eax = ebp + (-0x20); /* 0x10088B35: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x10088B38: push eax */
    PUSH32(esp, ebx); /* 0x10088B39: push ebx */
    RECOMP_CALL(sub_1002C35B); /* 0x10088B3A: call 0x1002c35b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10088B3F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10088B40: pop ecx */
L_10088B41:
    eax = esi; /* 0x10088B41: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x10088B43: pop esi */
    ebx = POP32_VAL(esp); /* 0x10088B44: pop ebx */
    esp = ebp; /* 0x10088B45: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10088B47: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10088B48: ret  */
    RECOMP_REGS_OUT();
}

void sub_10088B49(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10088B49u);

L_10088B49:
    PUSH32(esp, ebp); /* 0x10088B49: push ebp */
    ebp = esp; /* 0x10088B4A: mov ebp, esp */
    /* cmp MEM32(ebp + 0x8), 0x80u */ /* 0x10088B4C: cmp dword ptr [ebp + 8], 0x80 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x10088B53: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x10088B55: neg eax */
    _flag_k = FK_CMP;
    ebp = POP32_VAL(esp); /* 0x10088B57: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10088B58: ret  */
    RECOMP_REGS_OUT();
}

void sub_10088B59(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10088B59u);

L_10088B59:
    PUSH32(esp, ebp); /* 0x10088B59: push ebp */
    ebp = esp; /* 0x10088B5A: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x10088B5C: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x10088B5D: mov ebx, dword ptr [ebp + 8] */
    eax = (uint32_t)LO8(ebx); /* 0x10088B60: movzx eax, bl */
    PUSH32(esp, eax); /* 0x10088B63: push eax */
    RECOMP_CALL(sub_1002F5BA); /* 0x10088B64: call 0x1002f5ba */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10088B69: pop ecx */
    /* test eax, eax */ /* 0x10088B6A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10088B73; /* 0x10088B6C: jne 0x10088b73 */
L_10088B6E:
    /* cmp LO8(ebx), 0x5Fu */ /* 0x10088B6E: cmp bl, 0x5f */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x5Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10088B76; /* 0x10088B71: jne 0x10088b76 */
L_10088B73:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10088B73: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10088B75: inc eax */
    _flag_k = FK_INC;
L_10088B76:
    ebx = POP32_VAL(esp); /* 0x10088B76: pop ebx */
    ebp = POP32_VAL(esp); /* 0x10088B77: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10088B78: ret  */
    RECOMP_REGS_OUT();
}

void sub_10088B79(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10088B79u);

L_10088B79:
    PUSH32(esp, ebp); /* 0x10088B79: push ebp */
    ebp = esp; /* 0x10088B7A: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10088B7C: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100145DA); /* 0x10088B7F: call 0x100145da */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10088B84: pop ecx */
    /* test eax, eax */ /* 0x10088B85: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10088B91; /* 0x10088B87: jne 0x10088b91 */
L_10088B89:
    /* cmp MEM32(ebp + 0x8), 0x5Fu */ /* 0x10088B89: cmp dword ptr [ebp + 8], 0x5f */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0x5Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10088B91; /* 0x10088B8D: je 0x10088b91 */
L_10088B8F:
    ebp = POP32_VAL(esp); /* 0x10088B8F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10088B90: ret  */
L_10088B91:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10088B91: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10088B93: inc eax */
    _flag_k = FK_INC;
    ebp = POP32_VAL(esp); /* 0x10088B94: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10088B95: ret  */
    RECOMP_REGS_OUT();
}

void sub_10088B96(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10088B96u);

L_10088B96:
    PUSH32(esp, ebp); /* 0x10088B96: push ebp */
    ebp = esp; /* 0x10088B97: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x10088B99: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7Fu);
    eax = eax & 0x7Fu; /* 0x10088B9C: and eax, 0x7f */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x10088B9F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10088BA0: ret  */
    RECOMP_REGS_OUT();
}

void sub_10088BA1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10088BA1u);

L_10088BA1:
    PUSH32(esp, ebp); /* 0x10088BA1: push ebp */
    ebp = esp; /* 0x10088BA2: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x10088BA4: sub esp, 0x10 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x10); /* 0x10088BA7: lea ecx, [ebp - 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10088BAA: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1000F764); /* 0x10088BAD: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x10088BB2: mov ecx, dword ptr [ebp + 8] */
    /* cmp ecx, 9 */ /* 0x10088BB5: cmp ecx, 9 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10088BBF; /* 0x10088BB8: jne 0x10088bbf */
L_10088BBA:
    PUSH32(esp, 0x40u); /* 0x10088BBA: push 0x40 */
    ecx = POP32_VAL(esp); /* 0x10088BBC: pop ecx */
    goto L_10088BE8; /* 0x10088BBD: jmp 0x10088be8 */
L_10088BBF:
    eax = MEM32(ebp + (-0x10)); /* 0x10088BBF: mov eax, dword ptr [ebp - 0x10] */
    /* cmp MEM32(eax + 0x74), 1 */ /* 0x10088BC2: cmp dword ptr [eax + 0x74], 1 */
    _flag_a = (uint32_t)(MEM32(eax + 0x74)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_10088BDB; /* 0x10088BC6: jle 0x10088bdb */
L_10088BC8:
    eax = ebp + (-0x10); /* 0x10088BC8: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x10088BCB: push eax */
    PUSH32(esp, 0x40u); /* 0x10088BCC: push 0x40 */
    PUSH32(esp, ecx); /* 0x10088BCE: push ecx */
    RECOMP_CALL(sub_100895AC); /* 0x10088BCF: call 0x100895ac */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10088BD4: add esp, 0xc */
    _flag_k = FK_ADD;
    ecx = eax; /* 0x10088BD7: mov ecx, eax */
    goto L_10088BE8; /* 0x10088BD9: jmp 0x10088be8 */
L_10088BDB:
    eax = MEM32(eax + 0x90); /* 0x10088BDB: mov eax, dword ptr [eax + 0x90] */
    ecx = (uint32_t)MEM16(eax + ecx * 2); /* 0x10088BE1: movzx ecx, word ptr [eax + ecx*2] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x40u);
    ecx = ecx & 0x40u; /* 0x10088BE5: and ecx, 0x40 */
    _cf = 0;
    _flag_k = FK_TEST;
L_10088BE8:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x10088BE8: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10088BF5; /* 0x10088BEC: je 0x10088bf5 */
L_10088BEE:
    eax = MEM32(ebp + (-0x8)); /* 0x10088BEE: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(eax + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(eax + 0x70) = MEM32(eax + 0x70) & 0xFFFFFFFDu; /* 0x10088BF1: and dword ptr [eax + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_10088BF5:
    eax = ecx; /* 0x10088BF5: mov eax, ecx */
    esp = ebp; /* 0x10088BF7: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10088BF9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10088BFA: ret  */
    RECOMP_REGS_OUT();
}

void sub_10088BFB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10088BFBu);

L_10088BFB:
    PUSH32(esp, ebp); /* 0x10088BFB: push ebp */
    ebp = esp; /* 0x10088BFC: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x10088BFE: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10088C01: push dword ptr [ebp + 0xc] */
    ecx = ebp + (-0x10); /* 0x10088C04: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1000F764); /* 0x10088C07: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x10)); /* 0x10088C0C: mov ecx, dword ptr [ebp - 0x10] */
    /* cmp MEM32(ecx + 0x74), 1 */ /* 0x10088C0F: cmp dword ptr [ecx + 0x74], 1 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x74)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_10088C2A; /* 0x10088C13: jle 0x10088c2a */
L_10088C15:
    eax = ebp + (-0x10); /* 0x10088C15: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x10088C18: push eax */
    PUSH32(esp, 0x20u); /* 0x10088C19: push 0x20 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10088C1B: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100895AC); /* 0x10088C1E: call 0x100895ac */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10088C23: add esp, 0xc */
    _flag_k = FK_ADD;
    ecx = eax; /* 0x10088C26: mov ecx, eax */
    goto L_10088C3A; /* 0x10088C28: jmp 0x10088c3a */
L_10088C2A:
    ecx = MEM32(ecx + 0x90); /* 0x10088C2A: mov ecx, dword ptr [ecx + 0x90] */
    eax = MEM32(ebp + 0x8); /* 0x10088C30: mov eax, dword ptr [ebp + 8] */
    ecx = (uint32_t)MEM16(ecx + eax * 2); /* 0x10088C33: movzx ecx, word ptr [ecx + eax*2] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20u);
    ecx = ecx & 0x20u; /* 0x10088C37: and ecx, 0x20 */
    _cf = 0;
    _flag_k = FK_TEST;
L_10088C3A:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x10088C3A: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10088C47; /* 0x10088C3E: je 0x10088c47 */
L_10088C40:
    eax = MEM32(ebp + (-0x8)); /* 0x10088C40: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(eax + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(eax + 0x70) = MEM32(eax + 0x70) & 0xFFFFFFFDu; /* 0x10088C43: and dword ptr [eax + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_10088C47:
    eax = ecx; /* 0x10088C47: mov eax, ecx */
    esp = ebp; /* 0x10088C49: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10088C4B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10088C4C: ret  */
    RECOMP_REGS_OUT();
}

void sub_10088C4D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10088C4Du);

L_10088C4D:
    PUSH32(esp, ebp); /* 0x10088C4D: push ebp */
    ebp = esp; /* 0x10088C4E: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x10088C50: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10088C53: push dword ptr [ebp + 0xc] */
    ecx = ebp + (-0x10); /* 0x10088C56: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1000F764); /* 0x10088C59: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x10)); /* 0x10088C5E: mov ecx, dword ptr [ebp - 0x10] */
    /* cmp MEM32(ecx + 0x74), 1 */ /* 0x10088C61: cmp dword ptr [ecx + 0x74], 1 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x74)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_10088C7F; /* 0x10088C65: jle 0x10088c7f */
L_10088C67:
    eax = ebp + (-0x10); /* 0x10088C67: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x10088C6A: push eax */
    PUSH32(esp, 0x117u); /* 0x10088C6B: push 0x117 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10088C70: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100895AC); /* 0x10088C73: call 0x100895ac */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10088C78: add esp, 0xc */
    _flag_k = FK_ADD;
    ecx = eax; /* 0x10088C7B: mov ecx, eax */
    goto L_10088C92; /* 0x10088C7D: jmp 0x10088c92 */
L_10088C7F:
    ecx = MEM32(ecx + 0x90); /* 0x10088C7F: mov ecx, dword ptr [ecx + 0x90] */
    eax = MEM32(ebp + 0x8); /* 0x10088C85: mov eax, dword ptr [ebp + 8] */
    ecx = (uint32_t)MEM16(ecx + eax * 2); /* 0x10088C88: movzx ecx, word ptr [ecx + eax*2] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x117u);
    ecx = ecx & 0x117u; /* 0x10088C8C: and ecx, 0x117 */
    _cf = 0;
    _flag_k = FK_TEST;
L_10088C92:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x10088C92: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10088C9F; /* 0x10088C96: je 0x10088c9f */
L_10088C98:
    eax = MEM32(ebp + (-0x8)); /* 0x10088C98: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(eax + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(eax + 0x70) = MEM32(eax + 0x70) & 0xFFFFFFFDu; /* 0x10088C9B: and dword ptr [eax + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_10088C9F:
    eax = ecx; /* 0x10088C9F: mov eax, ecx */
    esp = ebp; /* 0x10088CA1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10088CA3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10088CA4: ret  */
    RECOMP_REGS_OUT();
}

void sub_10088CA5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10088CA5u);

L_10088CA5:
    PUSH32(esp, ebp); /* 0x10088CA5: push ebp */
    ebp = esp; /* 0x10088CA6: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x10088CA8: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10088CAB: push dword ptr [ebp + 0xc] */
    ecx = ebp + (-0x10); /* 0x10088CAE: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1000F764); /* 0x10088CB1: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x10)); /* 0x10088CB6: mov ecx, dword ptr [ebp - 0x10] */
    /* cmp MEM32(ecx + 0x74), 1 */ /* 0x10088CB9: cmp dword ptr [ecx + 0x74], 1 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x74)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_10088CD4; /* 0x10088CBD: jle 0x10088cd4 */
L_10088CBF:
    eax = ebp + (-0x10); /* 0x10088CBF: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x10088CC2: push eax */
    PUSH32(esp, 0x10u); /* 0x10088CC3: push 0x10 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10088CC5: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100895AC); /* 0x10088CC8: call 0x100895ac */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10088CCD: add esp, 0xc */
    _flag_k = FK_ADD;
    ecx = eax; /* 0x10088CD0: mov ecx, eax */
    goto L_10088CE4; /* 0x10088CD2: jmp 0x10088ce4 */
L_10088CD4:
    ecx = MEM32(ecx + 0x90); /* 0x10088CD4: mov ecx, dword ptr [ecx + 0x90] */
    eax = MEM32(ebp + 0x8); /* 0x10088CDA: mov eax, dword ptr [ebp + 8] */
    ecx = (uint32_t)MEM16(ecx + eax * 2); /* 0x10088CDD: movzx ecx, word ptr [ecx + eax*2] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    ecx = ecx & 0x10u; /* 0x10088CE1: and ecx, 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
L_10088CE4:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x10088CE4: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10088CF1; /* 0x10088CE8: je 0x10088cf1 */
L_10088CEA:
    eax = MEM32(ebp + (-0x8)); /* 0x10088CEA: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(eax + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(eax + 0x70) = MEM32(eax + 0x70) & 0xFFFFFFFDu; /* 0x10088CED: and dword ptr [eax + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_10088CF1:
    eax = ecx; /* 0x10088CF1: mov eax, ecx */
    esp = ebp; /* 0x10088CF3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10088CF5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10088CF6: ret  */
    RECOMP_REGS_OUT();
}

void sub_10088CF7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10088CF7u);

L_10088CF7:
    PUSH32(esp, ebp); /* 0x10088CF7: push ebp */
    ebp = esp; /* 0x10088CF8: mov ebp, esp */
    /* cmp MEM32(0x100DF7C4), 0 */ /* 0x10088CFA: cmp dword ptr [0x100df7c4], 0 */
    _flag_a = (uint32_t)(MEM32(0x100DF7C4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10088D1E; /* 0x10088D01: jne 0x10088d1e */
L_10088D03:
    ecx = MEM32(ebp + 0x8); /* 0x10088D03: mov ecx, dword ptr [ebp + 8] */
    /* cmp ecx, 9 */ /* 0x10088D06: cmp ecx, 9 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10088D10; /* 0x10088D09: jne 0x10088d10 */
L_10088D0B:
    PUSH32(esp, 0x40u); /* 0x10088D0B: push 0x40 */
    eax = POP32_VAL(esp); /* 0x10088D0D: pop eax */
    ebp = POP32_VAL(esp); /* 0x10088D0E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10088D0F: ret  */
L_10088D10:
    eax = MEM32(0x100DF858); /* 0x10088D10: mov eax, dword ptr [0x100df858] */
    eax = (uint32_t)MEM16(eax + ecx * 2); /* 0x10088D15: movzx eax, word ptr [eax + ecx*2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40u);
    eax = eax & 0x40u; /* 0x10088D19: and eax, 0x40 */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x10088D1C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10088D1D: ret  */
L_10088D1E:
    PUSH32(esp, 0); /* 0x10088D1E: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10088D20: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10088BA1); /* 0x10088D23: call 0x10088ba1 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10088D28: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10088D29: pop ecx */
    ebp = POP32_VAL(esp); /* 0x10088D2A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10088D2B: ret  */
    RECOMP_REGS_OUT();
}

void sub_10088D2C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10088D2Cu);

L_10088D2C:
    PUSH32(esp, ebp); /* 0x10088D2C: push ebp */
    ebp = esp; /* 0x10088D2D: mov ebp, esp */
    /* cmp MEM32(0x100DF7C4), 0 */ /* 0x10088D2F: cmp dword ptr [0x100df7c4], 0 */
    _flag_a = (uint32_t)(MEM32(0x100DF7C4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10088D49; /* 0x10088D36: jne 0x10088d49 */
L_10088D38:
    ecx = MEM32(ebp + 0x8); /* 0x10088D38: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(0x100DF858); /* 0x10088D3B: mov eax, dword ptr [0x100df858] */
    eax = (uint32_t)MEM16(eax + ecx * 2); /* 0x10088D40: movzx eax, word ptr [eax + ecx*2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    eax = eax & 0x20u; /* 0x10088D44: and eax, 0x20 */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x10088D47: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10088D48: ret  */
L_10088D49:
    PUSH32(esp, 0); /* 0x10088D49: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10088D4B: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10088BFB); /* 0x10088D4E: call 0x10088bfb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10088D53: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10088D54: pop ecx */
    ebp = POP32_VAL(esp); /* 0x10088D55: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10088D56: ret  */
    RECOMP_REGS_OUT();
}

void sub_10088D57(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10088D57u);

L_10088D57:
    PUSH32(esp, ebp); /* 0x10088D57: push ebp */
    ebp = esp; /* 0x10088D58: mov ebp, esp */
    /* cmp MEM32(0x100DF7C4), 0 */ /* 0x10088D5A: cmp dword ptr [0x100df7c4], 0 */
    _flag_a = (uint32_t)(MEM32(0x100DF7C4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10088D76; /* 0x10088D61: jne 0x10088d76 */
L_10088D63:
    ecx = MEM32(ebp + 0x8); /* 0x10088D63: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(0x100DF858); /* 0x10088D66: mov eax, dword ptr [0x100df858] */
    eax = (uint32_t)MEM16(eax + ecx * 2); /* 0x10088D6B: movzx eax, word ptr [eax + ecx*2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x117u);
    eax = eax & 0x117u; /* 0x10088D6F: and eax, 0x117 */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x10088D74: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10088D75: ret  */
L_10088D76:
    PUSH32(esp, 0); /* 0x10088D76: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10088D78: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10088C4D); /* 0x10088D7B: call 0x10088c4d */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10088D80: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10088D81: pop ecx */
    ebp = POP32_VAL(esp); /* 0x10088D82: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10088D83: ret  */
    RECOMP_REGS_OUT();
}

void sub_10088D84(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10088D84u);

L_10088D84:
    PUSH32(esp, ebp); /* 0x10088D84: push ebp */
    ebp = esp; /* 0x10088D85: mov ebp, esp */
    /* cmp MEM32(0x100DF7C4), 0 */ /* 0x10088D87: cmp dword ptr [0x100df7c4], 0 */
    _flag_a = (uint32_t)(MEM32(0x100DF7C4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10088DA1; /* 0x10088D8E: jne 0x10088da1 */
L_10088D90:
    ecx = MEM32(ebp + 0x8); /* 0x10088D90: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(0x100DF858); /* 0x10088D93: mov eax, dword ptr [0x100df858] */
    eax = (uint32_t)MEM16(eax + ecx * 2); /* 0x10088D98: movzx eax, word ptr [eax + ecx*2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    eax = eax & 0x10u; /* 0x10088D9C: and eax, 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x10088D9F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10088DA0: ret  */
L_10088DA1:
    PUSH32(esp, 0); /* 0x10088DA1: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10088DA3: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10088CA5); /* 0x10088DA6: call 0x10088ca5 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10088DAB: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10088DAC: pop ecx */
    ebp = POP32_VAL(esp); /* 0x10088DAD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10088DAE: ret  */
    RECOMP_REGS_OUT();
}

void sub_10088DAF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10088DAFu);

    goto L_10088DAF;
L_100129AF:
    ecx = MEM32(esp + 0x4); /* 0x100129AF: mov ecx, dword ptr [esp + 4] */
    /* test ecx, 3 */ /* 0x100129B3: test ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10014814; /* 0x100129B9: jne 0x10014814 */
L_100129BF:
    eax = MEM32(ecx); /* 0x100129BF: mov eax, dword ptr [ecx] */
    edx = 0x7EFEFEFFu; /* 0x100129C1: mov edx, 0x7efefeff */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x100129C6: add edx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax ^ 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax ^ 0xFFFFFFFFu));
    eax = eax ^ 0xFFFFFFFFu; /* 0x100129C8: xor eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ edx)); _flag_b = (uint32_t)((eax ^ edx));
    eax = eax ^ edx; /* 0x100129CB: xor eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x100129CD: add ecx, 4 */
    _flag_k = FK_ADD;
    /* test eax, 0x81010100u */ /* 0x100129D0: test eax, 0x81010100 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x81010100u);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100129BF; /* 0x100129D5: je 0x100129bf */
L_100129D7:
    eax = MEM32(ecx + (-0x4)); /* 0x100129D7: mov eax, dword ptr [ecx - 4] */
    /* test LO8(eax), LO8(eax) */ /* 0x100129DA: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100129FA; /* 0x100129DC: je 0x100129fa */
L_100129DE:
    /* test HI8(eax), HI8(eax) */ /* 0x100129DE: test ah, ah */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10012A0E; /* 0x100129E0: je 0x10012a0e */
L_100129E2:
    /* test eax, 0x00FF0000u */ /* 0x100129E2: test eax, 0xff0000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00FF0000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10012A04; /* 0x100129E7: je 0x10012a04 */
L_100129E9:
    /* test eax, 0xFF000000u */ /* 0x100129E9: test eax, 0xff000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFF000000u);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100129BF; /* 0x100129EE: jne 0x100129bf */
L_100129F0:
    eax = ecx + (-0x1); /* 0x100129F0: lea eax, [ecx - 1] */
    ecx = MEM32(esp + 0x4); /* 0x100129F3: mov ecx, dword ptr [esp + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x100129F7: sub eax, ecx */
    _flag_k = FK_CMP;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100129F9: ret  */
L_100129FA:
    eax = ecx + (-0x4); /* 0x100129FA: lea eax, [ecx - 4] */
    ecx = MEM32(esp + 0x4); /* 0x100129FD: mov ecx, dword ptr [esp + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x10012A01: sub eax, ecx */
    _flag_k = FK_CMP;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10012A03: ret  */
L_10012A04:
    eax = ecx + (-0x2); /* 0x10012A04: lea eax, [ecx - 2] */
    ecx = MEM32(esp + 0x4); /* 0x10012A07: mov ecx, dword ptr [esp + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x10012A0B: sub eax, ecx */
    _flag_k = FK_CMP;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10012A0D: ret  */
L_10012A0E:
    eax = ecx + (-0x3); /* 0x10012A0E: lea eax, [ecx - 3] */
    ecx = MEM32(esp + 0x4); /* 0x10012A11: mov ecx, dword ptr [esp + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x10012A15: sub eax, ecx */
    _flag_k = FK_CMP;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10012A17: ret  */
L_10014814:
    SET_LO8(eax, MEM8(ecx)); /* 0x10014814: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 1; /* 0x10014816: add ecx, 1 */
    _flag_k = FK_ADD;
    /* test LO8(eax), LO8(eax) */ /* 0x10014819: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100129F0; /* 0x1001481B: je 0x100129f0 */
L_10014821:
    /* test ecx, 3 */ /* 0x10014821: test ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10014814; /* 0x10014827: jne 0x10014814 */
L_10014829:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0; /* 0x10014829: add eax, 0 */
    _flag_k = FK_ADD;
    esp = esp; /* 0x1001482C: lea esp, [esp] */
    esp = esp; /* 0x1001482F: lea esp, [esp] */
    RECOMP_BACKEDGE();
    goto L_100129BF; /* 0x10014832: jmp 0x100129bf */
L_10088DAF:
    PUSH32(esp, ebp); /* 0x10088DAF: push ebp */
    ebp = esp; /* 0x10088DB0: mov ebp, esp */
    /* cmp MEM32(0x100DF7C4), 0 */ /* 0x10088DB2: cmp dword ptr [0x100df7c4], 0 */
    _flag_a = (uint32_t)(MEM32(0x100DF7C4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10088DC1; /* 0x10088DB9: jne 0x10088dc1 */
L_10088DBB:
    ebp = POP32_VAL(esp); /* 0x10088DBB: pop ebp */
    RECOMP_BACKEDGE();
    goto L_100129AF; /* 0x10088DBC: jmp 0x100129af */
L_10088DC1:
    PUSH32(esp, 0); /* 0x10088DC1: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10088DC3: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10088DCF); /* 0x10088DC6: call 0x10088dcf */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10088DCB: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10088DCC: pop ecx */
    ebp = POP32_VAL(esp); /* 0x10088DCD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10088DCE: ret  */
    RECOMP_REGS_OUT();
}

void sub_10088DCF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10088DCFu);

L_10088DCF:
    PUSH32(esp, ebp); /* 0x10088DCF: push ebp */
    ebp = esp; /* 0x10088DD0: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x10088DD2: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x10088DD5: push esi */
    PUSH32(esp, edi); /* 0x10088DD6: push edi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10088DD7: push dword ptr [ebp + 0xc] */
    ecx = ebp + (-0x10); /* 0x10088DDA: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1000F764); /* 0x10088DDD: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x10)); /* 0x10088DE2: mov eax, dword ptr [ebp - 0x10] */
    /* cmp MEM32(eax + 0x74), 1 */ /* 0x10088DE5: cmp dword ptr [eax + 0x74], 1 */
    _flag_a = (uint32_t)(MEM32(eax + 0x74)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10088DF8; /* 0x10088DE9: jne 0x10088df8 */
L_10088DEB:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10088DEB: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100129AF); /* 0x10088DEE: call 0x100129af */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10088DF3: pop ecx */
    edi = eax; /* 0x10088DF4: mov edi, eax */
    goto L_10088E45; /* 0x10088DF6: jmp 0x10088e45 */
L_10088DF8:
    esi = MEM32(ebp + 0x8); /* 0x10088DF8: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x10088DFB: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0); /* 0x10088DFE: push 0 */
    PUSH32(esp, 0); /* 0x10088E00: push 0 */
    PUSH32(esp, edi); /* 0x10088E02: push edi */
    PUSH32(esp, esi); /* 0x10088E03: push esi */
    PUSH32(esp, 9); /* 0x10088E04: push 9 */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x10088E06: push dword ptr [eax + 4] */
    RECOMP_ICALL(MEM32(0x100E5024)); /* 0x10088E09: call dword ptr [0x100e5024] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10088E0F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10088E20; /* 0x10088E11: jne 0x10088e20 */
L_10088E13:
    RECOMP_CALL(sub_1001177D); /* 0x10088E13: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x2Au; /* 0x10088E18: mov dword ptr [eax], 0x2a */
    goto L_10088E45; /* 0x10088E1E: jmp 0x10088e45 */
L_10088E20:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x10088E20: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10088E3F; /* 0x10088E22: jmp 0x10088e3f */
L_10088E24:
    ecx = ebp + (-0x10); /* 0x10088E24: lea ecx, [ebp - 0x10] */
    eax = (uint32_t)LO8(eax); /* 0x10088E27: movzx eax, al */
    PUSH32(esp, ecx); /* 0x10088E2A: push ecx */
    PUSH32(esp, eax); /* 0x10088E2B: push eax */
    RECOMP_CALL(sub_10011D42); /* 0x10088E2C: call 0x10011d42 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10088E31: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10088E32: pop ecx */
    /* test eax, eax */ /* 0x10088E33: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10088E3D; /* 0x10088E35: je 0x10088e3d */
L_10088E37:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10088E37: inc esi */
    _flag_k = FK_INC;
    /* cmp MEM8(esi), 0 */ /* 0x10088E38: cmp byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10088E45; /* 0x10088E3B: je 0x10088e45 */
L_10088E3D:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x10088E3D: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10088E3E: inc esi */
    _flag_k = FK_INC;
L_10088E3F:
    SET_LO8(eax, MEM8(esi)); /* 0x10088E3F: mov al, byte ptr [esi] */
    /* test LO8(eax), LO8(eax) */ /* 0x10088E41: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10088E24; /* 0x10088E43: jne 0x10088e24 */
L_10088E45:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x10088E45: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10088E52; /* 0x10088E49: je 0x10088e52 */
L_10088E4B:
    ecx = MEM32(ebp + (-0x8)); /* 0x10088E4B: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x10088E4E: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_10088E52:
    eax = edi; /* 0x10088E52: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x10088E54: pop edi */
    esi = POP32_VAL(esp); /* 0x10088E55: pop esi */
    esp = ebp; /* 0x10088E56: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10088E58: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10088E59: ret  */
    RECOMP_REGS_OUT();
}

void sub_10088E5A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10088E5Au);

L_10088E5A:
    PUSH32(esp, ebp); /* 0x10088E5A: push ebp */
    ebp = esp; /* 0x10088E5B: mov ebp, esp */
    PUSH32(esp, 0); /* 0x10088E5D: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10088E5F: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10088E62: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10088E6F); /* 0x10088E65: call 0x10088e6f */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10088E6A: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10088E6D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10088E6E: ret  */
    RECOMP_REGS_OUT();
}

void sub_10088E6F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10088E6Fu);

L_10088E6F:
    PUSH32(esp, ebp); /* 0x10088E6F: push ebp */
    ebp = esp; /* 0x10088E70: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x10088E72: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x10088E75: push esi */
    esi = MEM32(ebp + 0x8); /* 0x10088E76: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x10088E79: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10088E95; /* 0x10088E7B: jne 0x10088e95 */
L_10088E7D:
    RECOMP_CALL(sub_1001177D); /* 0x10088E7D: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10088E82: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10088E88: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10088E8D: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10088F51; /* 0x10088E90: jmp 0x10088f51 */
L_10088E95:
    PUSH32(esp, ebx); /* 0x10088E95: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x10088E96: mov ebx, dword ptr [ebp + 0xc] */
    /* cmp ebx, 0x7FFFFFFFu */ /* 0x10088E99: cmp ebx, 0x7fffffff */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10088EB9; /* 0x10088E9F: jbe 0x10088eb9 */
L_10088EA1:
    RECOMP_CALL(sub_1001177D); /* 0x10088EA1: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10088EA6: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10088EAC: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10088EB1: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10088F50; /* 0x10088EB4: jmp 0x10088f50 */
L_10088EB9:
    PUSH32(esp, edi); /* 0x10088EB9: push edi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10088EBA: push dword ptr [ebp + 0x10] */
    ecx = ebp + (-0x10); /* 0x10088EBD: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1000F764); /* 0x10088EC0: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x10)); /* 0x10088EC5: mov eax, dword ptr [ebp - 0x10] */
    /* cmp MEM32(eax + 0x74), 1 */ /* 0x10088EC8: cmp dword ptr [eax + 0x74], 1 */
    _flag_a = (uint32_t)(MEM32(eax + 0x74)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10088EDB; /* 0x10088ECC: jne 0x10088edb */
L_10088ECE:
    PUSH32(esp, ebx); /* 0x10088ECE: push ebx */
    PUSH32(esp, esi); /* 0x10088ECF: push esi */
    RECOMP_CALL(sub_10017154); /* 0x10088ED0: call 0x10017154 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10088ED5: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10088ED6: pop ecx */
    edi = eax; /* 0x10088ED7: mov edi, eax */
    goto L_10088F40; /* 0x10088ED9: jmp 0x10088f40 */
L_10088EDB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x10088EDB: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x10088EDD: push edi */
    PUSH32(esp, edi); /* 0x10088EDE: push edi */
    PUSH32(esp, ebx); /* 0x10088EDF: push ebx */
    PUSH32(esp, esi); /* 0x10088EE0: push esi */
    PUSH32(esp, 9); /* 0x10088EE1: push 9 */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x10088EE3: push dword ptr [eax + 4] */
    RECOMP_ICALL(MEM32(0x100E5024)); /* 0x10088EE6: call dword ptr [0x100e5024] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10088EEC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10088F00; /* 0x10088EEE: jne 0x10088f00 */
L_10088EF0:
    RECOMP_CALL(sub_1001177D); /* 0x10088EF0: call 0x1001177d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x10088EF5: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = 0x2Au; /* 0x10088EF8: mov dword ptr [eax], 0x2a */
    goto L_10088F40; /* 0x10088EFE: jmp 0x10088f40 */
L_10088F00:
    eax = edi; /* 0x10088F00: mov eax, edi */
    MEM32(ebp + 0x8) = eax; /* 0x10088F02: mov dword ptr [ebp + 8], eax */
    /* test ebx, ebx */ /* 0x10088F05: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10088F3E; /* 0x10088F07: je 0x10088f3e */
L_10088F09:
    SET_LO8(ecx, MEM8(esi)); /* 0x10088F09: mov cl, byte ptr [esi] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x10088F0B: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10088F3A; /* 0x10088F0D: je 0x10088f3a */
L_10088F0F:
    eax = ebp + (-0x10); /* 0x10088F0F: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x10088F12: push eax */
    eax = (uint32_t)LO8(ecx); /* 0x10088F13: movzx eax, cl */
    PUSH32(esp, eax); /* 0x10088F16: push eax */
    RECOMP_CALL(sub_10011D42); /* 0x10088F17: call 0x10011d42 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10088F1C: pop ecx */
    /* test eax, eax */ /* 0x10088F1D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0x8); /* 0x10088F1F: mov eax, dword ptr [ebp + 8] */
    ecx = POP32_VAL(esp); /* 0x10088F22: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_10088F30; /* 0x10088F23: je 0x10088f30 */
L_10088F25:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10088F25: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, ebx */ /* 0x10088F26: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_10088F3E; /* 0x10088F28: jae 0x10088f3e */
L_10088F2A:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10088F2A: inc esi */
    _flag_k = FK_INC;
    /* cmp MEM8(esi), 0 */ /* 0x10088F2B: cmp byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10088F3A; /* 0x10088F2E: je 0x10088f3a */
L_10088F30:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x10088F30: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10088F31: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10088F32: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + 0x8) = eax; /* 0x10088F33: mov dword ptr [ebp + 8], eax */
    /* cmp eax, ebx */ /* 0x10088F36: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_10088F09; /* 0x10088F38: jb 0x10088f09 */
L_10088F3A:
    /* cmp eax, ebx */ /* 0x10088F3A: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_10088F40; /* 0x10088F3C: jb 0x10088f40 */
L_10088F3E:
    edi = ebx; /* 0x10088F3E: mov edi, ebx */
L_10088F40:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x10088F40: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10088F4D; /* 0x10088F44: je 0x10088f4d */
L_10088F46:
    ecx = MEM32(ebp + (-0x8)); /* 0x10088F46: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x10088F49: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_10088F4D:
    eax = edi; /* 0x10088F4D: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x10088F4F: pop edi */
L_10088F50:
    ebx = POP32_VAL(esp); /* 0x10088F50: pop ebx */
L_10088F51:
    esi = POP32_VAL(esp); /* 0x10088F51: pop esi */
    esp = ebp; /* 0x10088F52: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10088F54: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10088F55: ret  */
    RECOMP_REGS_OUT();
}

void sub_10088F56(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10088F56u);

L_10088F56:
    PUSH32(esp, ebp); /* 0x10088F56: push ebp */
    ebp = esp; /* 0x10088F57: mov ebp, esp */
    PUSH32(esp, 0x103u); /* 0x10088F59: push 0x103 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10088F5E: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1000F7D4); /* 0x10088F61: call 0x1000f7d4 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10088F66: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10088F67: pop ecx */
    ebp = POP32_VAL(esp); /* 0x10088F68: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10088F69: ret  */
    RECOMP_REGS_OUT();
}

void sub_10088F6A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10088F6Au);

L_10088F6A:
    PUSH32(esp, ebp); /* 0x10088F6A: push ebp */
    ebp = esp; /* 0x10088F6B: mov ebp, esp */
    /* cmp MEM16(ebp + 0x8), 9 */ /* 0x10088F6D: cmp word ptr [ebp + 8], 9 */
    _flag_a = (uint32_t)(MEM16(ebp + 0x8)) << 16; _flag_b = (uint32_t)(9) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    PUSH32(esp, 0x40u); /* 0x10088F72: push 0x40 */
    if (CMP_NE(_flag_a, _flag_b)) goto L_10088F79; /* 0x10088F74: jne 0x10088f79 */
L_10088F76:
    eax = POP32_VAL(esp); /* 0x10088F76: pop eax */
    ebp = POP32_VAL(esp); /* 0x10088F77: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10088F78: ret  */
L_10088F79:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10088F79: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1000F7D4); /* 0x10088F7C: call 0x1000f7d4 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10088F81: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10088F82: pop ecx */
    ebp = POP32_VAL(esp); /* 0x10088F83: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10088F84: ret  */
    RECOMP_REGS_OUT();
}

void sub_10088F85(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10088F85u);

L_10088F85:
    PUSH32(esp, ebp); /* 0x10088F85: push ebp */
    ebp = esp; /* 0x10088F86: mov ebp, esp */
    PUSH32(esp, 0x20u); /* 0x10088F88: push 0x20 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10088F8A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1000F7D4); /* 0x10088F8D: call 0x1000f7d4 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10088F92: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10088F93: pop ecx */
    ebp = POP32_VAL(esp); /* 0x10088F94: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10088F95: ret  */
    RECOMP_REGS_OUT();
}

void sub_10088F96(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10088F96u);

L_10088F96:
    PUSH32(esp, ebp); /* 0x10088F96: push ebp */
    ebp = esp; /* 0x10088F97: mov ebp, esp */
    PUSH32(esp, 0x107u); /* 0x10088F99: push 0x107 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10088F9E: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1000F7D4); /* 0x10088FA1: call 0x1000f7d4 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10088FA6: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10088FA7: pop ecx */
    /* test eax, eax */ /* 0x10088FA8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10088FB5; /* 0x10088FAA: jne 0x10088fb5 */
L_10088FAC:
    /* cmp MEM16(ebp + 0x8), 0x5Fu */ /* 0x10088FAC: cmp word ptr [ebp + 8], 0x5f */
    _flag_a = (uint32_t)(MEM16(ebp + 0x8)) << 16; _flag_b = (uint32_t)(0x5Fu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10088FB5; /* 0x10088FB1: je 0x10088fb5 */
L_10088FB3:
    ebp = POP32_VAL(esp); /* 0x10088FB3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10088FB4: ret  */
L_10088FB5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10088FB5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10088FB7: inc eax */
    _flag_k = FK_INC;
    ebp = POP32_VAL(esp); /* 0x10088FB8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10088FB9: ret  */
    RECOMP_REGS_OUT();
}

void sub_10088FBA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10088FBAu);

L_10088FBA:
    PUSH32(esp, ebp); /* 0x10088FBA: push ebp */
    ebp = esp; /* 0x10088FBB: mov ebp, esp */
    PUSH32(esp, 0x103u); /* 0x10088FBD: push 0x103 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10088FC2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1000F7D4); /* 0x10088FC5: call 0x1000f7d4 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10088FCA: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10088FCB: pop ecx */
    /* test eax, eax */ /* 0x10088FCC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10088FD9; /* 0x10088FCE: jne 0x10088fd9 */
L_10088FD0:
    /* cmp MEM16(ebp + 0x8), 0x5Fu */ /* 0x10088FD0: cmp word ptr [ebp + 8], 0x5f */
    _flag_a = (uint32_t)(MEM16(ebp + 0x8)) << 16; _flag_b = (uint32_t)(0x5Fu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10088FD9; /* 0x10088FD5: je 0x10088fd9 */
L_10088FD7:
    ebp = POP32_VAL(esp); /* 0x10088FD7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10088FD8: ret  */
L_10088FD9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10088FD9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10088FDB: inc eax */
    _flag_k = FK_INC;
    ebp = POP32_VAL(esp); /* 0x10088FDC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10088FDD: ret  */
    RECOMP_REGS_OUT();
}

void sub_10088FDE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10088FDEu);

L_10088FDE:
    PUSH32(esp, ebp); /* 0x10088FDE: push ebp */
    ebp = esp; /* 0x10088FDF: mov ebp, esp */
    PUSH32(esp, 0x117u); /* 0x10088FE1: push 0x117 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10088FE6: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1000F7D4); /* 0x10088FE9: call 0x1000f7d4 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10088FEE: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10088FEF: pop ecx */
    ebp = POP32_VAL(esp); /* 0x10088FF0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10088FF1: ret  */
    RECOMP_REGS_OUT();
}

void sub_10088FF2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10088FF2u);

L_10088FF2:
    PUSH32(esp, ebp); /* 0x10088FF2: push ebp */
    ebp = esp; /* 0x10088FF3: mov ebp, esp */
    PUSH32(esp, 1); /* 0x10088FF5: push 1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10088FF7: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1000F7D4); /* 0x10088FFA: call 0x1000f7d4 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10088FFF: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10089000: pop ecx */
    ebp = POP32_VAL(esp); /* 0x10089001: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10089002: ret  */
    RECOMP_REGS_OUT();
}

void sub_10089003(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10089003u);

L_10089003:
    PUSH32(esp, ebp); /* 0x10089003: push ebp */
    ebp = esp; /* 0x10089004: mov ebp, esp */
    PUSH32(esp, 0x80u); /* 0x10089006: push 0x80 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008900B: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1000F7D4); /* 0x1008900E: call 0x1000f7d4 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10089013: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10089014: pop ecx */
    ebp = POP32_VAL(esp); /* 0x10089015: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10089016: ret  */
    RECOMP_REGS_OUT();
}

void sub_10089017(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10089017u);

L_10089017:
    PUSH32(esp, ebp); /* 0x10089017: push ebp */
    ebp = esp; /* 0x10089018: mov ebp, esp */
    PUSH32(esp, 0x107u); /* 0x1008901A: push 0x107 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008901F: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1000F7D4); /* 0x10089022: call 0x1000f7d4 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10089027: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10089028: pop ecx */
    ebp = POP32_VAL(esp); /* 0x10089029: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008902A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008902B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008902Bu);

L_1008902B:
    PUSH32(esp, ebp); /* 0x1008902B: push ebp */
    ebp = esp; /* 0x1008902C: mov ebp, esp */
    PUSH32(esp, 2); /* 0x1008902E: push 2 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10089030: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1000F7D4); /* 0x10089033: call 0x1000f7d4 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10089038: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10089039: pop ecx */
    ebp = POP32_VAL(esp); /* 0x1008903A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008903B: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008903C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008903Cu);

L_1008903C:
    PUSH32(esp, ebp); /* 0x1008903C: push ebp */
    ebp = esp; /* 0x1008903D: mov ebp, esp */
    PUSH32(esp, 0x157u); /* 0x1008903F: push 0x157 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10089044: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1000F7D4); /* 0x10089047: call 0x1000f7d4 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008904C: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1008904D: pop ecx */
    ebp = POP32_VAL(esp); /* 0x1008904E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008904F: ret  */
    RECOMP_REGS_OUT();
}

void sub_10089050(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10089050u);

L_10089050:
    PUSH32(esp, ebp); /* 0x10089050: push ebp */
    ebp = esp; /* 0x10089051: mov ebp, esp */
    PUSH32(esp, 0x10u); /* 0x10089053: push 0x10 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10089055: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1000F7D4); /* 0x10089058: call 0x1000f7d4 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008905D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1008905E: pop ecx */
    ebp = POP32_VAL(esp); /* 0x1008905F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10089060: ret  */
    RECOMP_REGS_OUT();
}

void sub_10089061(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10089061u);

L_10089061:
    PUSH32(esp, ebp); /* 0x10089061: push ebp */
    ebp = esp; /* 0x10089062: mov ebp, esp */
    PUSH32(esp, 0); /* 0x10089064: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10089066: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10089069: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1001B74E); /* 0x1008906C: call 0x1001b74e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10089071: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10089074: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10089075: ret  */
    RECOMP_REGS_OUT();
}

void sub_10089076(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10089076u);

L_10089076:
    PUSH32(esp, ebp); /* 0x10089076: push ebp */
    ebp = esp; /* 0x10089077: mov ebp, esp */
    PUSH32(esp, 0); /* 0x10089079: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008907B: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008907E: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1002BD6B); /* 0x10089081: call 0x1002bd6b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10089086: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10089089: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008908A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008908B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008908Bu);

L_1008908B:
    PUSH32(esp, ebp); /* 0x1008908B: push ebp */
    ebp = esp; /* 0x1008908C: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1008908E: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10089090: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10089093: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100890A0); /* 0x10089096: call 0x100890a0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1008909B: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008909E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008909F: ret  */
    RECOMP_REGS_OUT();
}

void sub_100890A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100890A0u);

L_100890A0:
    PUSH32(esp, ebp); /* 0x100890A0: push ebp */
    ebp = esp; /* 0x100890A1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x100890A3: sub esp, 0x28 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x100890A6: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x100890AB: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x100890AD: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x100890B0: push ebx */
    PUSH32(esp, esi); /* 0x100890B1: push esi */
    esi = MEM32(ebp + 0xC); /* 0x100890B2: mov esi, dword ptr [ebp + 0xc] */
    ecx = ebp + (-0x28); /* 0x100890B5: lea ecx, [ebp - 0x28] */
    PUSH32(esp, edi); /* 0x100890B8: push edi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100890B9: push dword ptr [ebp + 0x10] */
    edi = MEM32(ebp + 0x8); /* 0x100890BC: mov edi, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1000F764); /* 0x100890BF: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x28); /* 0x100890C4: lea eax, [ebp - 0x28] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x100890C7: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100890C9: push eax */
    PUSH32(esp, ebx); /* 0x100890CA: push ebx */
    PUSH32(esp, ebx); /* 0x100890CB: push ebx */
    PUSH32(esp, ebx); /* 0x100890CC: push ebx */
    PUSH32(esp, 1); /* 0x100890CD: push 1 */
    PUSH32(esp, esi); /* 0x100890CF: push esi */
    eax = ebp + (-0x18); /* 0x100890D0: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x100890D3: push eax */
    eax = ebp + (-0x10); /* 0x100890D4: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x100890D7: push eax */
    RECOMP_CALL(sub_1001A5C0); /* 0x100890D8: call 0x1001a5c0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x14)) = eax; /* 0x100890DD: mov dword ptr [ebp - 0x14], eax */
    eax = ebp + (-0x10); /* 0x100890E0: lea eax, [ebp - 0x10] */
    PUSH32(esp, edi); /* 0x100890E3: push edi */
    PUSH32(esp, eax); /* 0x100890E4: push eax */
    RECOMP_CALL(sub_100AA396); /* 0x100890E5: call 0x100aa396 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x100890EA: mov ecx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x28u; /* 0x100890EC: add esp, 0x28 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x14)); /* 0x100890EF: mov eax, dword ptr [ebp - 0x14] */
    /* test LO8(eax), 3 */ /* 0x100890F2: test al, 3 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10089104; /* 0x100890F4: jne 0x10089104 */
L_100890F6:
    /* cmp ecx, 1 */ /* 0x100890F6: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008910C; /* 0x100890F9: je 0x1008910c */
L_100890FB:
    /* cmp ecx, 2 */ /* 0x100890FB: cmp ecx, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008910F; /* 0x100890FE: jne 0x1008910f */
L_10089100:
    PUSH32(esp, 4); /* 0x10089100: push 4 */
    goto L_1008910E; /* 0x10089102: jmp 0x1008910e */
L_10089104:
    /* test LO8(eax), 1 */ /* 0x10089104: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10089100; /* 0x10089106: jne 0x10089100 */
L_10089108:
    /* test LO8(eax), 2 */ /* 0x10089108: test al, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008910F; /* 0x1008910A: je 0x1008910f */
L_1008910C:
    PUSH32(esp, 3); /* 0x1008910C: push 3 */
L_1008910E:
    ebx = POP32_VAL(esp); /* 0x1008910E: pop ebx */
L_1008910F:
    /* cmp MEM8(ebp + (-0x1C)), 0 */ /* 0x1008910F: cmp byte ptr [ebp - 0x1c], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x1C))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008911C; /* 0x10089113: je 0x1008911c */
L_10089115:
    ecx = MEM32(ebp + (-0x20)); /* 0x10089115: mov ecx, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x10089118: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008911C:
    ecx = MEM32(ebp + (-0x4)); /* 0x1008911C: mov ecx, dword ptr [ebp - 4] */
    eax = ebx; /* 0x1008911F: mov eax, ebx */
    edi = POP32_VAL(esp); /* 0x10089121: pop edi */
    esi = POP32_VAL(esp); /* 0x10089122: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x10089123: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x10089125: pop ebx */
    RECOMP_CALL(sub_1000F7C6); /* 0x10089126: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1008912B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1008912D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008912E: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008912F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008912Fu);

L_1008912F:
    PUSH32(esp, ebp); /* 0x1008912F: push ebp */
    ebp = esp; /* 0x10089130: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x10089132: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, 0); /* 0x10089135: push 0 */
    ecx = ebp + (-0x10); /* 0x10089137: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1000F764); /* 0x1008913A: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x10); /* 0x1008913F: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x10089142: push eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x10089143: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10089146: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10089149: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008914C: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100AA465); /* 0x1008914F: call 0x100aa465 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x10089154: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x10089157: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10089164; /* 0x1008915B: je 0x10089164 */
L_1008915D:
    ecx = MEM32(ebp + (-0x8)); /* 0x1008915D: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x10089160: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_10089164:
    esp = ebp; /* 0x10089164: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10089166: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10089167: ret  */
    RECOMP_REGS_OUT();
}

void sub_10089168(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10089168u);

L_10089168:
    PUSH32(esp, ebp); /* 0x10089168: push ebp */
    ebp = esp; /* 0x10089169: mov ebp, esp */
    ecx = MEM32(ebp + 0x14); /* 0x1008916B: mov ecx, dword ptr [ebp + 0x14] */
    /* test ecx, ecx */ /* 0x1008916E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10089176; /* 0x10089170: jle 0x10089176 */
L_10089172:
    eax = ecx; /* 0x10089172: mov eax, ecx */
    goto L_10089178; /* 0x10089174: jmp 0x10089178 */
L_10089176:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10089176: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_10089178:
    edx = MEM32(ebp + 0xC); /* 0x10089178: mov edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x1008917B: add eax, 2 */
    _flag_k = FK_ADD;
    PUSH32(esp, esi); /* 0x1008917E: push esi */
    /* cmp edx, eax */ /* 0x1008917F: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_10089196; /* 0x10089181: jae 0x10089196 */
L_10089183:
    RECOMP_CALL(sub_1001177D); /* 0x10089183: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x22u); /* 0x10089188: push 0x22 */
    esi = POP32_VAL(esp); /* 0x1008918A: pop esi */
    MEM32(eax) = esi; /* 0x1008918B: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x1008918D: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x10089192: mov eax, esi */
    goto L_100891DA; /* 0x10089194: jmp 0x100891da */
L_10089196:
    eax = edx + (-0x2); /* 0x10089196: lea eax, [edx - 2] */
    /* cmp ecx, eax */ /* 0x10089199: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1008919F; /* 0x1008919B: jg 0x1008919f */
L_1008919D:
    eax = ecx; /* 0x1008919D: mov eax, ecx */
L_1008919F:
    PUSH32(esp, edi); /* 0x1008919F: push edi */
    edi = MEM32(ebp + 0x10); /* 0x100891A0: mov edi, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x100891A3: push edi */
    PUSH32(esp, eax); /* 0x100891A4: push eax */
    PUSH32(esp, edx); /* 0x100891A5: push edx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100891A6: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1001AFF1); /* 0x100891A9: call 0x1001aff1 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100891AE: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100891B0: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x100891B3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100891C2; /* 0x100891B5: je 0x100891c2 */
L_100891B7:
    RECOMP_CALL(sub_1001177D); /* 0x100891B7: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x100891BC: mov dword ptr [eax], esi */
    eax = esi; /* 0x100891BE: mov eax, esi */
    goto L_100891D9; /* 0x100891C0: jmp 0x100891d9 */
L_100891C2:
    eax = MEM32(ebp + 0x1C); /* 0x100891C2: mov eax, dword ptr [ebp + 0x1c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100891C5: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi), 0x2Du */ /* 0x100891C7: cmp dword ptr [edi], 0x2d */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0x2Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(ecx, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x100891CA: sete cl */
    MEM32(eax) = ecx; /* 0x100891CD: mov dword ptr [eax], ecx */
    eax = MEM32(ebp + 0x18); /* 0x100891CF: mov eax, dword ptr [ebp + 0x18] */
    ecx = MEM32(edi + 0x4); /* 0x100891D2: mov ecx, dword ptr [edi + 4] */
    MEM32(eax) = ecx; /* 0x100891D5: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100891D7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_100891D9:
    edi = POP32_VAL(esp); /* 0x100891D9: pop edi */
L_100891DA:
    esi = POP32_VAL(esp); /* 0x100891DA: pop esi */
    ebp = POP32_VAL(esp); /* 0x100891DB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100891DC: ret  */
    RECOMP_REGS_OUT();
}

void sub_100891DD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100891DDu);

L_100891DD:
    PUSH32(esp, ebp); /* 0x100891DD: push ebp */
    ebp = esp; /* 0x100891DE: mov ebp, esp */
    PUSH32(esp, esi); /* 0x100891E0: push esi */
    RECOMP_CALL(sub_1000F720); /* 0x100891E1: call 0x1000f720 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100891E6: mov esi, eax */
    /* test esi, esi */ /* 0x100891E8: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10089239; /* 0x100891EA: je 0x10089239 */
L_100891EC:
    /* cmp MEM32(esi + 0x48), 0 */ /* 0x100891EC: cmp dword ptr [esi + 0x48], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x48)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x100891F0: push edi */
    edi = 0x15Du; /* 0x100891F1: mov edi, 0x15d */
    if (CMP_NE(_flag_a, _flag_b)) goto L_10089206; /* 0x100891F6: jne 0x10089206 */
L_100891F8:
    PUSH32(esp, edi); /* 0x100891F8: push edi */
    RECOMP_CALL(sub_10012226); /* 0x100891F9: call 0x10012226 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x48) = eax; /* 0x100891FE: mov dword ptr [esi + 0x48], eax */
    ecx = POP32_VAL(esp); /* 0x10089201: pop ecx */
    /* test eax, eax */ /* 0x10089202: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10089238; /* 0x10089204: je 0x10089238 */
L_10089206:
    eax = MEM32(ebp + 0x10); /* 0x10089206: mov eax, dword ptr [ebp + 0x10] */
    ecx = 0x15Bu; /* 0x10089209: mov ecx, 0x15b */
    esi = MEM32(esi + 0x48); /* 0x1008920E: mov esi, dword ptr [esi + 0x48] */
    /* cmp eax, ecx */ /* 0x10089211: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_10089217; /* 0x10089213: jl 0x10089217 */
L_10089215:
    eax = ecx; /* 0x10089215: mov eax, ecx */
L_10089217:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x10089217: push dword ptr [ebp + 0x18] */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x1008921A: fld qword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1008921D: push dword ptr [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x10089220: push eax */
    PUSH32(esp, ecx); /* 0x10089221: push ecx */
    PUSH32(esp, ecx); /* 0x10089222: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x10089223: fstp qword ptr [esp] */
    PUSH32(esp, edi); /* 0x10089226: push edi */
    PUSH32(esp, esi); /* 0x10089227: push esi */
    RECOMP_CALL(sub_1008923C); /* 0x10089228: call 0x1008923c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x1008922D: add esp, 0x1c */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x10089230: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x10089232: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = ~eax; /* 0x10089234: not eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    eax = eax & esi; /* 0x10089236: and eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_10089238:
    edi = POP32_VAL(esp); /* 0x10089238: pop edi */
L_10089239:
    esi = POP32_VAL(esp); /* 0x10089239: pop esi */
    ebp = POP32_VAL(esp); /* 0x1008923A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008923B: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008923C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008923Cu);

L_1008923C:
    PUSH32(esp, ebp); /* 0x1008923C: push ebp */
    ebp = esp; /* 0x1008923D: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x34u; /* 0x1008923F: sub esp, 0x34 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x10089242: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x10089247: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x10089249: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x1C); /* 0x1008924C: mov eax, dword ptr [ebp + 0x1c] */
    ecx = MEM32(ebp + 0x20); /* 0x1008924F: mov ecx, dword ptr [ebp + 0x20] */
    PUSH32(esp, esi); /* 0x10089252: push esi */
    esi = MEM32(ebp + 0x18); /* 0x10089253: mov esi, dword ptr [ebp + 0x18] */
    PUSH32(esp, edi); /* 0x10089256: push edi */
    edi = MEM32(ebp + 0x8); /* 0x10089257: mov edi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x20)) = eax; /* 0x1008925A: mov dword ptr [ebp - 0x20], eax */
    MEM32(ebp + (-0x24)) = ecx; /* 0x1008925D: mov dword ptr [ebp - 0x24], ecx */
    /* test edi, edi */ /* 0x10089260: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10089277; /* 0x10089262: jne 0x10089277 */
L_10089264:
    RECOMP_CALL(sub_1001177D); /* 0x10089264: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x10089269: push 0x16 */
    esi = POP32_VAL(esp); /* 0x1008926B: pop esi */
    MEM32(eax) = esi; /* 0x1008926C: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x1008926E: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x10089273: mov eax, esi */
    goto L_100892DC; /* 0x10089275: jmp 0x100892dc */
L_10089277:
    PUSH32(esp, ebx); /* 0x10089277: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x10089278: mov ebx, dword ptr [ebp + 0xc] */
    /* test ebx, ebx */ /* 0x1008927B: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008928A; /* 0x1008927D: je 0x1008928a */
L_1008927F:
    MEM8(edi) = (uint8_t)(0); /* 0x1008927F: mov byte ptr [edi], 0 */
    /* test eax, eax */ /* 0x10089282: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008928A; /* 0x10089284: je 0x1008928a */
L_10089286:
    /* test ecx, ecx */ /* 0x10089286: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008929D; /* 0x10089288: jne 0x1008929d */
L_1008928A:
    RECOMP_CALL(sub_1001177D); /* 0x1008928A: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1008928F: push 0x16 */
    esi = POP32_VAL(esp); /* 0x10089291: pop esi */
    MEM32(eax) = esi; /* 0x10089292: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x10089294: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x10089299: mov eax, esi */
    goto L_100892DB; /* 0x1008929B: jmp 0x100892db */
L_1008929D:
    PUSH32(esp, 0x16u); /* 0x1008929D: push 0x16 */
    eax = ebp + (-0x1C); /* 0x1008929F: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x100892A2: push eax */
    eax = ebp + (-0x34); /* 0x100892A3: lea eax, [ebp - 0x34] */
    PUSH32(esp, eax); /* 0x100892A6: push eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100892A7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100892AA: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1001B131); /* 0x100892AD: call 0x1001b131 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x100892B2: push dword ptr [ebp - 0x24] */
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x100892B5: push dword ptr [ebp - 0x20] */
    PUSH32(esp, esi); /* 0x100892B8: push esi */
    PUSH32(esp, eax); /* 0x100892B9: push eax */
    PUSH32(esp, ebx); /* 0x100892BA: push ebx */
    PUSH32(esp, edi); /* 0x100892BB: push edi */
    RECOMP_CALL(sub_10089168); /* 0x100892BC: call 0x10089168 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0xFFFFFFFEu; /* 0x100892C1: add ebx, -2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x100892C4: add esp, 0x2c */
    _flag_k = FK_ADD;
    /* cmp esi, ebx */ /* 0x100892C7: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_100892CD; /* 0x100892C9: jle 0x100892cd */
L_100892CB:
    esi = ebx; /* 0x100892CB: mov esi, ebx */
L_100892CD:
    /* test esi, esi */ /* 0x100892CD: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100892DB; /* 0x100892CF: js 0x100892db */
L_100892D1:
    /* cmp MEM8(esi + edi), 0 */ /* 0x100892D1: cmp byte ptr [esi + edi], 0 */
    _flag_a = (uint32_t)(MEM8(esi + edi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100892DB; /* 0x100892D5: je 0x100892db */
L_100892D7:
    MEM8(esi + edi) = (uint8_t)(0); /* 0x100892D7: mov byte ptr [esi + edi], 0 */
L_100892DB:
    ebx = POP32_VAL(esp); /* 0x100892DB: pop ebx */
L_100892DC:
    ecx = MEM32(ebp + (-0x4)); /* 0x100892DC: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x100892DF: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x100892E0: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x100892E2: pop esi */
    RECOMP_CALL(sub_1000F7C6); /* 0x100892E3: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x100892E8: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100892EA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100892EB: ret  */
    RECOMP_REGS_OUT();
}

void sub_100892EC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100892ECu);

L_100892EC:
    PUSH32(esp, ebp); /* 0x100892EC: push ebp */
    ebp = esp; /* 0x100892ED: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2Cu; /* 0x100892EF: sub esp, 0x2c */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x100892F2: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x100892F7: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x100892F9: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x100892FC: push ebx */
    ebx = MEM32(ebp + 0x18); /* 0x100892FD: mov ebx, dword ptr [ebp + 0x18] */
    PUSH32(esp, esi); /* 0x10089300: push esi */
    PUSH32(esp, edi); /* 0x10089301: push edi */
    edi = MEM32(ebp + 0x14); /* 0x10089302: mov edi, dword ptr [ebp + 0x14] */
    RECOMP_CALL(sub_1000F720); /* 0x10089305: call 0x1000f720 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1008930A: mov esi, eax */
    /* test esi, esi */ /* 0x1008930C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10089314; /* 0x1008930E: jne 0x10089314 */
L_10089310:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10089310: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10089379; /* 0x10089312: jmp 0x10089379 */
L_10089314:
    /* cmp MEM32(esi + 0x48), 0 */ /* 0x10089314: cmp dword ptr [esi + 0x48], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x48)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008932C; /* 0x10089318: jne 0x1008932c */
L_1008931A:
    PUSH32(esp, 0x15Du); /* 0x1008931A: push 0x15d */
    RECOMP_CALL(sub_10012226); /* 0x1008931F: call 0x10012226 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x48) = eax; /* 0x10089324: mov dword ptr [esi + 0x48], eax */
    ecx = POP32_VAL(esp); /* 0x10089327: pop ecx */
    /* test eax, eax */ /* 0x10089328: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10089310; /* 0x1008932A: je 0x10089310 */
L_1008932C:
    esi = MEM32(esi + 0x48); /* 0x1008932C: mov esi, dword ptr [esi + 0x48] */
    eax = ebp + (-0x1C); /* 0x1008932F: lea eax, [ebp - 0x1c] */
    PUSH32(esp, 0x16u); /* 0x10089332: push 0x16 */
    PUSH32(esp, eax); /* 0x10089334: push eax */
    eax = ebp + (-0x2C); /* 0x10089335: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x10089338: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10089339: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008933C: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1001B131); /* 0x1008933F: call 0x1001b131 */
    RECOMP_FLAGS_IN();
    ecx = 0x15Bu; /* 0x10089344: mov ecx, 0x15b */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x10089349: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(eax + 0x4); /* 0x1008934C: sub ecx, dword ptr [eax + 4] */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x10); /* 0x1008934F: mov eax, dword ptr [ebp + 0x10] */
    /* cmp eax, ecx */ /* 0x10089352: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_10089358; /* 0x10089354: jl 0x10089358 */
L_10089356:
    eax = ecx; /* 0x10089356: mov eax, ecx */
L_10089358:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x10089358: fld qword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x1008935B: push ebx */
    PUSH32(esp, edi); /* 0x1008935C: push edi */
    PUSH32(esp, eax); /* 0x1008935D: push eax */
    PUSH32(esp, ecx); /* 0x1008935E: push ecx */
    PUSH32(esp, ecx); /* 0x1008935F: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x10089360: fstp qword ptr [esp] */
    PUSH32(esp, 0x15Du); /* 0x10089363: push 0x15d */
    PUSH32(esp, esi); /* 0x10089368: push esi */
    RECOMP_CALL(sub_1008938A); /* 0x10089369: call 0x1008938a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x1008936E: add esp, 0x1c */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x10089371: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x10089373: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = ~eax; /* 0x10089375: not eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    eax = eax & esi; /* 0x10089377: and eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_10089379:
    ecx = MEM32(ebp + (-0x4)); /* 0x10089379: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1008937C: pop edi */
    esi = POP32_VAL(esp); /* 0x1008937D: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1008937E: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x10089380: pop ebx */
    RECOMP_CALL(sub_1000F7C6); /* 0x10089381: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x10089386: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10089388: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10089389: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008938A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008938Au);

L_1008938A:
    PUSH32(esp, ebp); /* 0x1008938A: push ebp */
    ebp = esp; /* 0x1008938B: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x30u; /* 0x1008938D: sub esp, 0x30 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x10089390: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x10089395: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x10089397: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x1008939A: push ebx */
    ebx = MEM32(ebp + 0x20); /* 0x1008939B: mov ebx, dword ptr [ebp + 0x20] */
    PUSH32(esp, esi); /* 0x1008939E: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1008939F: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x100893A2: push edi */
    edi = MEM32(ebp + 0x1C); /* 0x100893A3: mov edi, dword ptr [ebp + 0x1c] */
    /* test esi, esi */ /* 0x100893A6: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100893BD; /* 0x100893A8: jne 0x100893bd */
L_100893AA:
    RECOMP_CALL(sub_1001177D); /* 0x100893AA: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x100893AF: push 0x16 */
    esi = POP32_VAL(esp); /* 0x100893B1: pop esi */
    MEM32(eax) = esi; /* 0x100893B2: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x100893B4: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x100893B9: mov eax, esi */
    goto L_10089415; /* 0x100893BB: jmp 0x10089415 */
L_100893BD:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x100893BD: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_100893AA; /* 0x100893C1: jbe 0x100893aa */
L_100893C3:
    MEM8(esi) = (uint8_t)(0); /* 0x100893C3: mov byte ptr [esi], 0 */
    /* test edi, edi */ /* 0x100893C6: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100893AA; /* 0x100893C8: je 0x100893aa */
L_100893CA:
    /* test ebx, ebx */ /* 0x100893CA: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100893AA; /* 0x100893CC: je 0x100893aa */
L_100893CE:
    PUSH32(esp, 0x16u); /* 0x100893CE: push 0x16 */
    eax = ebp + (-0x1C); /* 0x100893D0: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x100893D3: push eax */
    eax = ebp + (-0x30); /* 0x100893D4: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x100893D7: push eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100893D8: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100893DB: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1001B131); /* 0x100893DE: call 0x1001b131 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0x18); /* 0x100893E3: mov edx, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100893E6: add esp, 0x14 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x20)) = eax; /* 0x100893E9: mov dword ptr [ebp - 0x20], eax */
    eax = MEM32(eax + 0x4); /* 0x100893EC: mov eax, dword ptr [eax + 4] */
    ecx = eax + edx; /* 0x100893EF: lea ecx, [eax + edx] */
    /* test edx, edx */ /* 0x100893F2: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10089403; /* 0x100893F4: jle 0x10089403 */
L_100893F6:
    /* test eax, eax */ /* 0x100893F6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10089403; /* 0x100893F8: jle 0x10089403 */
L_100893FA:
    /* cmp ecx, edx */ /* 0x100893FA: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_10089403; /* 0x100893FC: jge 0x10089403 */
L_100893FE:
    ecx = 0x7FFFFFFFu; /* 0x100893FE: mov ecx, 0x7fffffff */
L_10089403:
    PUSH32(esp, ebx); /* 0x10089403: push ebx */
    PUSH32(esp, edi); /* 0x10089404: push edi */
    PUSH32(esp, ecx); /* 0x10089405: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x10089406: push dword ptr [ebp - 0x20] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10089409: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1008940C: push esi */
    RECOMP_CALL(sub_10089168); /* 0x1008940D: call 0x10089168 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x10089412: add esp, 0x18 */
    _flag_k = FK_ADD;
L_10089415:
    ecx = MEM32(ebp + (-0x4)); /* 0x10089415: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x10089418: pop edi */
    esi = POP32_VAL(esp); /* 0x10089419: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1008941A: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1008941C: pop ebx */
    RECOMP_CALL(sub_1000F7C6); /* 0x1008941D: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x10089422: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10089424: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10089425: ret  */
    RECOMP_REGS_OUT();
}

void sub_10089426(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10089426u);

L_10089426:
    PUSH32(esp, ebp); /* 0x10089426: push ebp */
    ebp = esp; /* 0x10089427: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10089429: push dword ptr [ebp + 0x10] */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x1008942C: fld qword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x1008942F: push ecx */
    PUSH32(esp, ecx); /* 0x10089430: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x10089431: fstp qword ptr [esp] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x10089434: push -1 */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x10089436: push dword ptr [ebp + 0x14] */
    RECOMP_CALL(sub_1008944C); /* 0x10089439: call 0x1008944c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1008943E: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x10089441: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x10089443: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = ~eax; /* 0x10089445: not eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    eax = eax & MEM32(ebp + 0x14); /* 0x10089447: and eax, dword ptr [ebp + 0x14] */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1008944A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008944B: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008944C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008944Cu);

L_1008944C:
    PUSH32(esp, ebp); /* 0x1008944C: push ebp */
    ebp = esp; /* 0x1008944D: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x3Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x3Cu; /* 0x1008944F: sub esp, 0x3c */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x10089452: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x10089457: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x10089459: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x1008945C: push ebx */
    PUSH32(esp, esi); /* 0x1008945D: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1008945E: mov esi, dword ptr [ebp + 8] */
    ecx = ebp + (-0x2C); /* 0x10089461: lea ecx, [ebp - 0x2c] */
    PUSH32(esp, edi); /* 0x10089464: push edi */
    PUSH32(esp, 0); /* 0x10089465: push 0 */
    RECOMP_CALL(sub_1000F764); /* 0x10089467: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x1008946C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10089477; /* 0x1008946E: je 0x10089477 */
L_10089470:
    ebx = MEM32(ebp + 0xC); /* 0x10089470: mov ebx, dword ptr [ebp + 0xc] */
    /* test ebx, ebx */ /* 0x10089473: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10089480; /* 0x10089475: jne 0x10089480 */
L_10089477:
    RECOMP_CALL(sub_1001177D); /* 0x10089477: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1008947C: push 0x16 */
    goto L_10089491; /* 0x1008947E: jmp 0x10089491 */
L_10089480:
    edi = MEM32(ebp + 0x18); /* 0x10089480: mov edi, dword ptr [ebp + 0x18] */
    MEM8(esi) = (uint8_t)(0); /* 0x10089483: mov byte ptr [esi], 0 */
    /* cmp edi, ebx */ /* 0x10089486: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1008949E; /* 0x10089488: jb 0x1008949e */
L_1008948A:
    RECOMP_CALL(sub_1001177D); /* 0x1008948A: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x22u); /* 0x1008948F: push 0x22 */
L_10089491:
    edi = POP32_VAL(esp); /* 0x10089491: pop edi */
    MEM32(eax) = edi; /* 0x10089492: mov dword ptr [eax], edi */
    RECOMP_CALL(sub_100A4670); /* 0x10089494: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    goto L_10089542; /* 0x10089499: jmp 0x10089542 */
L_1008949E:
    PUSH32(esp, 0x16u); /* 0x1008949E: push 0x16 */
    eax = ebp + (-0x1C); /* 0x100894A0: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x100894A3: push eax */
    eax = ebp + (-0x3C); /* 0x100894A4: lea eax, [ebp - 0x3c] */
    PUSH32(esp, eax); /* 0x100894A7: push eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100894A8: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100894AB: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1001B131); /* 0x100894AE: call 0x1001b131 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100894B3: add esp, 0x14 */
    _flag_k = FK_ADD;
    edx = MEM32(eax + 0x4); /* 0x100894B6: mov edx, dword ptr [eax + 4] */
    ecx = edx + (-0x1); /* 0x100894B9: lea ecx, [edx - 1] */
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x100894BC: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_100894DB; /* 0x100894BF: jl 0x100894db */
L_100894C1:
    eax = edi + (-0x1); /* 0x100894C1: lea eax, [edi - 1] */
    /* cmp ecx, eax */ /* 0x100894C4: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_100894DB; /* 0x100894C6: jg 0x100894db */
L_100894C8:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - edx; /* 0x100894C8: sub edi, edx */
    _flag_k = FK_CMP;
    eax = ebp + 0x10; /* 0x100894CA: lea eax, [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x100894CD: push edi */
    PUSH32(esp, ebx); /* 0x100894CE: push ebx */
    PUSH32(esp, esi); /* 0x100894CF: push esi */
    PUSH32(esp, eax); /* 0x100894D0: push eax */
    RECOMP_CALL(sub_100AA83A); /* 0x100894D1: call 0x100aa83a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100894D6: add esp, 0x10 */
    _flag_k = FK_ADD;
    goto L_100894EF; /* 0x100894D9: jmp 0x100894ef */
L_100894DB:
    PUSH32(esp, 0); /* 0x100894DB: push 0 */
    eax = edi + (-0x1); /* 0x100894DD: lea eax, [edi - 1] */
    PUSH32(esp, eax); /* 0x100894E0: push eax */
    PUSH32(esp, ebx); /* 0x100894E1: push ebx */
    eax = ebp + 0x10; /* 0x100894E2: lea eax, [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x100894E5: push esi */
    PUSH32(esp, eax); /* 0x100894E6: push eax */
    RECOMP_CALL(sub_100AA81C); /* 0x100894E7: call 0x100aa81c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100894EC: add esp, 0x14 */
    _flag_k = FK_ADD;
L_100894EF:
    edi = eax; /* 0x100894EF: mov edi, eax */
    /* test edi, edi */ /* 0x100894F1: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008953B; /* 0x100894F3: jne 0x1008953b */
L_100894F5:
    SET_LO8(ecx, MEM8(esi)); /* 0x100894F5: mov cl, byte ptr [esi] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x100894F7: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10089513; /* 0x100894F9: je 0x10089513 */
L_100894FB:
    eax = MEM32(ebp + (-0x2C)); /* 0x100894FB: mov eax, dword ptr [ebp - 0x2c] */
    eax = MEM32(eax + 0x84); /* 0x100894FE: mov eax, dword ptr [eax + 0x84] */
    eax = MEM32(eax); /* 0x10089504: mov eax, dword ptr [eax] */
    SET_LO8(eax, MEM8(eax)); /* 0x10089506: mov al, byte ptr [eax] */
L_10089508:
    /* cmp LO8(ecx), LO8(eax) */ /* 0x10089508: cmp cl, al */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10089513; /* 0x1008950A: je 0x10089513 */
L_1008950C:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1008950C: inc esi */
    _flag_k = FK_INC;
    SET_LO8(ecx, MEM8(esi)); /* 0x1008950D: mov cl, byte ptr [esi] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x1008950F: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10089508; /* 0x10089511: jne 0x10089508 */
L_10089513:
    SET_LO8(eax, MEM8(esi)); /* 0x10089513: mov al, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10089515: inc esi */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x10089516: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10089521; /* 0x10089518: jne 0x10089521 */
L_1008951A:
    goto L_10089542; /* 0x1008951A: jmp 0x10089542 */
L_1008951C:
    /* cmp LO8(eax), 0x65u */ /* 0x1008951C: cmp al, 0x65 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x65u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10089527; /* 0x1008951E: je 0x10089527 */
L_10089520:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10089520: inc esi */
    _flag_k = FK_INC;
L_10089521:
    SET_LO8(eax, MEM8(esi)); /* 0x10089521: mov al, byte ptr [esi] */
    /* test LO8(eax), LO8(eax) */ /* 0x10089523: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008951C; /* 0x10089525: jne 0x1008951c */
L_10089527:
    ecx = esi; /* 0x10089527: mov ecx, esi */
L_10089529:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x10089529: dec esi */
    _flag_k = FK_DEC;
    /* cmp MEM8(esi), 0x30u */ /* 0x1008952A: cmp byte ptr [esi], 0x30 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10089529; /* 0x1008952D: je 0x10089529 */
L_1008952F:
    SET_LO8(eax, MEM8(ecx)); /* 0x1008952F: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10089531: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10089532: inc ecx */
    _flag_k = FK_INC;
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x10089533: mov byte ptr [esi], al */
    /* test LO8(eax), LO8(eax) */ /* 0x10089535: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10089542; /* 0x10089537: je 0x10089542 */
L_10089539:
    RECOMP_BACKEDGE();
    goto L_1008952F; /* 0x10089539: jmp 0x1008952f */
L_1008953B:
    RECOMP_CALL(sub_1001177D); /* 0x1008953B: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = edi; /* 0x10089540: mov dword ptr [eax], edi */
L_10089542:
    /* cmp MEM8(ebp + (-0x20)), 0 */ /* 0x10089542: cmp byte ptr [ebp - 0x20], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x20))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008954F; /* 0x10089546: je 0x1008954f */
L_10089548:
    ecx = MEM32(ebp + (-0x24)); /* 0x10089548: mov ecx, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1008954B: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008954F:
    ecx = MEM32(ebp + (-0x4)); /* 0x1008954F: mov ecx, dword ptr [ebp - 4] */
    eax = edi; /* 0x10089552: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x10089554: pop edi */
    esi = POP32_VAL(esp); /* 0x10089555: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x10089556: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x10089558: pop ebx */
    RECOMP_CALL(sub_1000F7C6); /* 0x10089559: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1008955E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10089560: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10089561: ret  */
    RECOMP_REGS_OUT();
}

void sub_10089562(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10089562u);

L_10089562:
    PUSH32(esp, ebp); /* 0x10089562: push ebp */
    ebp = esp; /* 0x10089563: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10089565: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10089568: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1000F7D4); /* 0x1008956B: call 0x1000f7d4 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10089570: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10089571: pop ecx */
    ebp = POP32_VAL(esp); /* 0x10089572: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10089573: ret  */
    RECOMP_REGS_OUT();
}

void sub_10089574(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10089574u);

    goto L_10089574;
L_1000F7D4:
    PUSH32(esp, ebp); /* 0x1000F7D4: push ebp */
    ebp = esp; /* 0x1000F7D5: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1000F7D7: push ecx */
    SET_LO16(eax, MEM16(ebp + 0x8)); /* 0x1000F7D8: mov ax, word ptr [ebp + 8] */
    ecx = 0xFFFFu; /* 0x1000F7DC: mov ecx, 0xffff */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x1000F7E1: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10056DE0; /* 0x1000F7E4: je 0x10056de0 */
L_1000F7EA:
    ecx = 0x100u; /* 0x1000F7EA: mov ecx, 0x100 */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x1000F7EF: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_AE(_flag_a, _flag_b)) goto L_10056DE7; /* 0x1000F7F2: jae 0x10056de7 */
L_1000F7F8:
    ecx = (uint32_t)LO16(eax); /* 0x1000F7F8: movzx ecx, ax */
    eax = MEM32(0x100DF564); /* 0x1000F7FB: mov eax, dword ptr [0x100df564] */
    eax = (uint32_t)MEM16(eax + ecx * 2); /* 0x1000F800: movzx eax, word ptr [eax + ecx*2] */
L_1000F804:
    ecx = MEM32(ebp + 0xC); /* 0x1000F804: mov ecx, dword ptr [ebp + 0xc] */
    ecx = (uint32_t)LO16(ecx); /* 0x1000F807: movzx ecx, cx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x1000F80A: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1000F80C:
    esp = ebp; /* 0x1000F80C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1000F80E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1000F80F: ret  */
L_10056DE0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10056DE0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1000F80C; /* 0x10056DE2: jmp 0x1000f80c */
L_10056DE7:
    eax = ebp + (-0x4); /* 0x10056DE7: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x10056DEA: push eax */
    PUSH32(esp, 1); /* 0x10056DEB: push 1 */
    eax = ebp + 0x8; /* 0x10056DED: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x10056DF0: push eax */
    PUSH32(esp, 1); /* 0x10056DF1: push 1 */
    RECOMP_ICALL(MEM32(0x100E51CC)); /* 0x10056DF3: call dword ptr [0x100e51cc] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x10056DF9: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x10056DFB: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    eax = eax & MEM32(ebp + (-0x4)); /* 0x10056DFD: and eax, dword ptr [ebp - 4] */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (uint32_t)LO16(eax); /* 0x10056E00: movzx eax, ax */
    RECOMP_BACKEDGE();
    goto L_1000F804; /* 0x10056E03: jmp 0x1000f804 */
L_10089574:
    PUSH32(esp, ebp); /* 0x10089574: push ebp */
    ebp = esp; /* 0x10089575: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x10089577: pop ebp */
    RECOMP_BACKEDGE();
    goto L_1000F7D4; /* 0x10089578: jmp 0x1000f7d4 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1008957D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008957Du);

L_1008957D:
    PUSH32(esp, ebp); /* 0x1008957D: push ebp */
    ebp = esp; /* 0x1008957E: mov ebp, esp */
    /* cmp MEM32(0x100DF7C4), 0 */ /* 0x10089580: cmp dword ptr [0x100df7c4], 0 */
    _flag_a = (uint32_t)(MEM32(0x100DF7C4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008959A; /* 0x10089587: jne 0x1008959a */
L_10089589:
    ecx = MEM32(ebp + 0x8); /* 0x10089589: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(0x100DF858); /* 0x1008958C: mov eax, dword ptr [0x100df858] */
    eax = (uint32_t)MEM16(eax + ecx * 2); /* 0x10089591: movzx eax, word ptr [eax + ecx*2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    eax = eax & MEM32(ebp + 0xC); /* 0x10089595: and eax, dword ptr [ebp + 0xc] */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x10089598: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10089599: ret  */
L_1008959A:
    PUSH32(esp, 0); /* 0x1008959A: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008959C: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008959F: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100895AC); /* 0x100895A2: call 0x100895ac */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100895A7: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x100895AA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100895AB: ret  */
    RECOMP_REGS_OUT();
}

void sub_100895AC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100895ACu);

L_100895AC:
    PUSH32(esp, ebp); /* 0x100895AC: push ebp */
    ebp = esp; /* 0x100895AD: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x100895AF: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x18); /* 0x100895B2: lea ecx, [ebp - 0x18] */
    PUSH32(esp, ebx); /* 0x100895B5: push ebx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100895B6: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1000F764); /* 0x100895B9: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + 0x8); /* 0x100895BE: mov ebx, dword ptr [ebp + 8] */
    eax = ebx + 0x1; /* 0x100895C1: lea eax, [ebx + 1] */
    /* cmp eax, 0x100u */ /* 0x100895C4: cmp eax, 0x100 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_100895DA; /* 0x100895C9: ja 0x100895da */
L_100895CB:
    eax = MEM32(ebp + (-0x18)); /* 0x100895CB: mov eax, dword ptr [ebp - 0x18] */
    eax = MEM32(eax + 0x90); /* 0x100895CE: mov eax, dword ptr [eax + 0x90] */
    eax = (uint32_t)MEM16(eax + ebx * 2); /* 0x100895D4: movzx eax, word ptr [eax + ebx*2] */
    goto L_10089648; /* 0x100895D8: jmp 0x10089648 */
L_100895DA:
    eax = ebx; /* 0x100895DA: mov eax, ebx */
    ecx = ebp + (-0x18); /* 0x100895DC: lea ecx, [ebp - 0x18] */
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x100895DF: sar eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 8u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 8u);
    MEM32(ebp + 0x8) = eax; /* 0x100895E2: mov dword ptr [ebp + 8], eax */
    PUSH32(esp, ecx); /* 0x100895E5: push ecx */
    eax = (uint32_t)LO8(eax); /* 0x100895E6: movzx eax, al */
    PUSH32(esp, eax); /* 0x100895E9: push eax */
    RECOMP_CALL(sub_10011D42); /* 0x100895EA: call 0x10011d42 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100895EF: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100895F0: pop ecx */
    /* test eax, eax */ /* 0x100895F1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10089607; /* 0x100895F3: je 0x10089607 */
L_100895F5:
    eax = MEM32(ebp + 0x8); /* 0x100895F5: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, 2); /* 0x100895F8: push 2 */
    MEM8(ebp + (-0x8)) = (uint8_t)(LO8(eax)); /* 0x100895FA: mov byte ptr [ebp - 8], al */
    MEM8(ebp + (-0x7)) = (uint8_t)(LO8(ebx)); /* 0x100895FD: mov byte ptr [ebp - 7], bl */
    MEM8(ebp + (-0x6)) = (uint8_t)(0); /* 0x10089600: mov byte ptr [ebp - 6], 0 */
    ecx = POP32_VAL(esp); /* 0x10089604: pop ecx */
    goto L_10089611; /* 0x10089605: jmp 0x10089611 */
L_10089607:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10089607: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ebp + (-0x8)) = (uint8_t)(LO8(ebx)); /* 0x10089609: mov byte ptr [ebp - 8], bl */
    MEM8(ebp + (-0x7)) = (uint8_t)(0); /* 0x1008960C: mov byte ptr [ebp - 7], 0 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10089610: inc ecx */
    _flag_k = FK_INC;
L_10089611:
    eax = MEM32(ebp + (-0x18)); /* 0x10089611: mov eax, dword ptr [ebp - 0x18] */
    PUSH32(esp, 1); /* 0x10089614: push 1 */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x10089616: push dword ptr [eax + 4] */
    eax = ebp + (-0x4); /* 0x10089619: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1008961C: push eax */
    PUSH32(esp, ecx); /* 0x1008961D: push ecx */
    eax = ebp + (-0x8); /* 0x1008961E: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x10089621: push eax */
    eax = ebp + (-0x18); /* 0x10089622: lea eax, [ebp - 0x18] */
    PUSH32(esp, 1); /* 0x10089625: push 1 */
    PUSH32(esp, eax); /* 0x10089627: push eax */
    RECOMP_CALL(sub_100211C4); /* 0x10089628: call 0x100211c4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x1008962D: add esp, 0x1c */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10089630: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10089644; /* 0x10089632: jne 0x10089644 */
L_10089634:
    /* cmp MEM8(ebp + (-0xC)), LO8(eax) */ /* 0x10089634: cmp byte ptr [ebp - 0xc], al */
    _flag_a = (uint32_t)(MEM8(ebp + (-0xC))) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10089640; /* 0x10089637: je 0x10089640 */
L_10089639:
    eax = MEM32(ebp + (-0x10)); /* 0x10089639: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(MEM32(eax + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(eax + 0x70) = MEM32(eax + 0x70) & 0xFFFFFFFDu; /* 0x1008963C: and dword ptr [eax + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_10089640:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10089640: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10089658; /* 0x10089642: jmp 0x10089658 */
L_10089644:
    eax = (uint32_t)MEM16(ebp + (-0x4)); /* 0x10089644: movzx eax, word ptr [ebp - 4] */
L_10089648:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    eax = eax & MEM32(ebp + 0xC); /* 0x10089648: and eax, dword ptr [ebp + 0xc] */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(ebp + (-0xC)), 0 */ /* 0x1008964B: cmp byte ptr [ebp - 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0xC))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10089658; /* 0x1008964F: je 0x10089658 */
L_10089651:
    ecx = MEM32(ebp + (-0x10)); /* 0x10089651: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x10089654: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_10089658:
    ebx = POP32_VAL(esp); /* 0x10089658: pop ebx */
    esp = ebp; /* 0x10089659: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1008965B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008965C: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008965D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008965Du);

L_1008965D:
    PUSH32(esp, ebp); /* 0x1008965D: push ebp */
    ebp = esp; /* 0x1008965E: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x10089660: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x10089663: push esi */
    PUSH32(esp, edi); /* 0x10089664: push edi */
    edi = MEM32(ebp + 0x8); /* 0x10089665: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x10089668: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100896F3; /* 0x1008966A: je 0x100896f3 */
L_10089670:
    /* cmp MEM8(edi), 0 */ /* 0x10089670: cmp byte ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100896F3; /* 0x10089673: je 0x100896f3 */
L_10089675:
    esi = MEM32(ebp + 0xC); /* 0x10089675: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x10089678: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100896F3; /* 0x1008967A: je 0x100896f3 */
L_1008967C:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1008967C: push dword ptr [ebp + 0x10] */
    ecx = ebp + (-0x10); /* 0x1008967F: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1000F764); /* 0x10089682: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x10); /* 0x10089687: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1008968A: push eax */
    eax = (uint32_t)MEM8(edi); /* 0x1008968B: movzx eax, byte ptr [edi] */
    PUSH32(esp, eax); /* 0x1008968E: push eax */
    RECOMP_CALL(sub_10011D42); /* 0x1008968F: call 0x10011d42 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10089694: pop ecx */
    /* test eax, eax */ /* 0x10089695: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x10)); /* 0x10089697: mov eax, dword ptr [ebp - 0x10] */
    ecx = POP32_VAL(esp); /* 0x1008969A: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_100896C7; /* 0x1008969B: je 0x100896c7 */
L_1008969D:
    /* cmp MEM32(eax + 0x74), 1 */ /* 0x1008969D: cmp dword ptr [eax + 0x74], 1 */
    _flag_a = (uint32_t)(MEM32(eax + 0x74)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_100896DF; /* 0x100896A1: jle 0x100896df */
L_100896A3:
    /* cmp esi, MEM32(eax + 0x74) */ /* 0x100896A3: cmp esi, dword ptr [eax + 0x74] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax + 0x74));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_100896DF; /* 0x100896A6: jl 0x100896df */
L_100896A8:
    PUSH32(esp, 0); /* 0x100896A8: push 0 */
    PUSH32(esp, 0); /* 0x100896AA: push 0 */
    PUSH32(esp, MEM32(eax + 0x74)); /* 0x100896AC: push dword ptr [eax + 0x74] */
    PUSH32(esp, edi); /* 0x100896AF: push edi */
    PUSH32(esp, 9); /* 0x100896B0: push 9 */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x100896B2: push dword ptr [eax + 4] */
    RECOMP_ICALL(MEM32(0x100E5024)); /* 0x100896B5: call dword ptr [0x100e5024] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100896BB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100896DF; /* 0x100896BD: je 0x100896df */
L_100896BF:
    eax = MEM32(ebp + (-0x10)); /* 0x100896BF: mov eax, dword ptr [ebp - 0x10] */
    esi = MEM32(eax + 0x74); /* 0x100896C2: mov esi, dword ptr [eax + 0x74] */
    goto L_100896E2; /* 0x100896C5: jmp 0x100896e2 */
L_100896C7:
    PUSH32(esp, 0); /* 0x100896C7: push 0 */
    PUSH32(esp, 0); /* 0x100896C9: push 0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x100896CB: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100896CD: inc esi */
    _flag_k = FK_INC;
    PUSH32(esp, esi); /* 0x100896CE: push esi */
    PUSH32(esp, edi); /* 0x100896CF: push edi */
    PUSH32(esp, 9); /* 0x100896D0: push 9 */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x100896D2: push dword ptr [eax + 4] */
    RECOMP_ICALL(MEM32(0x100E5024)); /* 0x100896D5: call dword ptr [0x100e5024] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100896DB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100896E2; /* 0x100896DD: jne 0x100896e2 */
L_100896DF:
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x100896DF: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_100896E2:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x100896E2: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100896EF; /* 0x100896E6: je 0x100896ef */
L_100896E8:
    ecx = MEM32(ebp + (-0x8)); /* 0x100896E8: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x100896EB: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_100896EF:
    eax = esi; /* 0x100896EF: mov eax, esi */
    goto L_100896F5; /* 0x100896F1: jmp 0x100896f5 */
L_100896F3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100896F3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_100896F5:
    edi = POP32_VAL(esp); /* 0x100896F5: pop edi */
    esi = POP32_VAL(esp); /* 0x100896F6: pop esi */
    esp = ebp; /* 0x100896F7: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100896F9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100896FA: ret  */
    RECOMP_REGS_OUT();
}

void sub_100896FB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100896FBu);

L_100896FB:
    PUSH32(esp, ebp); /* 0x100896FB: push ebp */
    ebp = esp; /* 0x100896FC: mov ebp, esp */
    /* cmp MEM32(0x100DF7C4), 0 */ /* 0x100896FE: cmp dword ptr [0x100df7c4], 0 */
    _flag_a = (uint32_t)(MEM32(0x100DF7C4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008970E; /* 0x10089705: jne 0x1008970e */
L_10089707:
    PUSH32(esp, 0x100E1870u); /* 0x10089707: push 0x100e1870 */
    goto L_10089710; /* 0x1008970C: jmp 0x10089710 */
L_1008970E:
    PUSH32(esp, 0); /* 0x1008970E: push 0 */
L_10089710:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10089710: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10089713: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1008965D); /* 0x10089716: call 0x1008965d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1008971B: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008971E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008971F: ret  */
    RECOMP_REGS_OUT();
}

void sub_10089720(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10089720u);

    goto L_10089720;
L_10012E18:
    /* cmp MEM32(eax + 0xA8), esi */ /* 0x10012E18: cmp dword ptr [eax + 0xa8], esi */
    _flag_a = (uint32_t)(MEM32(eax + 0xA8)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100213FD; /* 0x10012E1E: je 0x100213fd */
L_10012E24:
    PUSH32(esp, esi); /* 0x10012E24: push esi */
    PUSH32(esp, esi); /* 0x10012E25: push esi */
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x10012E26: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x10012E29: push esi */
    PUSH32(esp, ebx); /* 0x10012E2A: push ebx */
    PUSH32(esp, 9); /* 0x10012E2B: push 9 */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x10012E2D: push dword ptr [eax + 4] */
    RECOMP_ICALL(MEM32(0x100E5024)); /* 0x10012E30: call dword ptr [0x100e5024] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10012E36: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10012EA2; /* 0x10012E38: jne 0x10012ea2 */
L_10012E3A:
    goto L_10056E96; /* 0x10012E3A: jmp 0x10056e96 */
L_10012E3F:
    PUSH32(esp, ebp); /* 0x10012E3F: push ebp */
    ebp = esp; /* 0x10012E40: mov ebp, esp */
    eax = MEM32(ebp + 0x10); /* 0x10012E42: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x10012E45: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x10012E48: push esi */
    PUSH32(esp, edi); /* 0x10012E49: push edi */
    edi = MEM32(ebp + 0x8); /* 0x10012E4A: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x10012E4D: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x10012E4F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10012E5C; /* 0x10012E51: je 0x10012e5c */
L_10012E53:
    /* test eax, eax */ /* 0x10012E53: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10012EB2; /* 0x10012E55: je 0x10012eb2 */
L_10012E57:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10012E57: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(edi) = (uint16_t)(LO16(eax)); /* 0x10012E59: mov word ptr [edi], ax */
L_10012E5C:
    PUSH32(esp, ebx); /* 0x10012E5C: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x10012E5D: mov ebx, dword ptr [ebp + 0xc] */
    /* test ebx, ebx */ /* 0x10012E60: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10056E08; /* 0x10012E62: je 0x10056e08 */
L_10012E68:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x10012E68: push dword ptr [ebp + 0x14] */
    ecx = ebp + (-0x14); /* 0x10012E6B: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1000F764); /* 0x10012E6E: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x14)); /* 0x10012E73: mov eax, dword ptr [ebp - 0x14] */
    /* test edi, edi */ /* 0x10012E76: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10012E18; /* 0x10012E78: je 0x10012e18 */
L_10012E7A:
    /* cmp MEM32(eax + 0xA8), esi */ /* 0x10012E7A: cmp dword ptr [eax + 0xa8], esi */
    _flag_a = (uint32_t)(MEM32(eax + 0xA8)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002140B; /* 0x10012E80: je 0x1002140b */
L_10012E86:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10012E86: push dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x10012E89: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x10012E8C: push edi */
    PUSH32(esp, esi); /* 0x10012E8D: push esi */
    PUSH32(esp, ebx); /* 0x10012E8E: push ebx */
    PUSH32(esp, 9); /* 0x10012E8F: push 9 */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x10012E91: push dword ptr [eax + 4] */
    RECOMP_ICALL(MEM32(0x100E5024)); /* 0x10012E94: call dword ptr [0x100e5024] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10012E9A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10056E20; /* 0x10012E9C: je 0x10056e20 */
L_10012EA2:
    esi = eax + (-0x1); /* 0x10012EA2: lea esi, [eax - 1] */
L_10012EA5:
    /* cmp MEM8(ebp + (-0x8)), 0 */ /* 0x10012EA5: cmp byte ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x8))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10056EA6; /* 0x10012EA9: jne 0x10056ea6 */
L_10012EAF:
    eax = esi; /* 0x10012EAF: mov eax, esi */
L_10012EB1:
    ebx = POP32_VAL(esp); /* 0x10012EB1: pop ebx */
L_10012EB2:
    edi = POP32_VAL(esp); /* 0x10012EB2: pop edi */
    esi = POP32_VAL(esp); /* 0x10012EB3: pop esi */
    esp = ebp; /* 0x10012EB4: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10012EB6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10012EB7: ret  */
L_100213FD:
    PUSH32(esp, ebx); /* 0x100213FD: push ebx */
    RECOMP_CALL(sub_100129AF); /* 0x100213FE: call 0x100129af */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10021403: pop ecx */
L_10021404:
    esi = eax; /* 0x10021404: mov esi, eax */
    RECOMP_BACKEDGE();
    goto L_10012EA5; /* 0x10021406: jmp 0x10012ea5 */
L_1002140B:
    /* cmp MEM32(ebp + 0x10), esi */ /* 0x1002140B: cmp dword ptr [ebp + 0x10], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_10012EA5; /* 0x1002140E: jbe 0x10012ea5 */
L_10021414:
    eax = (uint32_t)MEM8(esi + ebx); /* 0x10021414: movzx eax, byte ptr [esi + ebx] */
    MEM16(edi) = (uint16_t)(LO16(eax)); /* 0x10021418: mov word ptr [edi], ax */
    /* cmp MEM8(esi + ebx), 0 */ /* 0x1002141B: cmp byte ptr [esi + ebx], 0 */
    _flag_a = (uint32_t)(MEM8(esi + ebx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10012EA5; /* 0x1002141F: je 0x10012ea5 */
L_10021425:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10021425: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x10021426: add edi, 2 */
    _flag_k = FK_ADD;
    /* cmp esi, MEM32(ebp + 0x10) */ /* 0x10021429: cmp esi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_10021414; /* 0x1002142C: jb 0x10021414 */
L_1002142E:
    RECOMP_BACKEDGE();
    goto L_10012EA5; /* 0x1002142E: jmp 0x10012ea5 */
L_10056E08:
    RECOMP_CALL(sub_1001177D); /* 0x10056E08: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10056E0D: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10056E13: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10056E18: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10012EB1; /* 0x10056E1B: jmp 0x10012eb1 */
L_10056E20:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x10056E20: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0x7Au */ /* 0x10056E26: cmp eax, 0x7a */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7Au);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10056E81; /* 0x10056E29: jne 0x10056e81 */
L_10056E2B:
    ecx = MEM32(ebp + 0x10); /* 0x10056E2B: mov ecx, dword ptr [ebp + 0x10] */
    eax = ebx; /* 0x10056E2E: mov eax, ebx */
    goto L_10056E5C; /* 0x10056E30: jmp 0x10056e5c */
L_10056E32:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x10056E32: dec ecx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x4)) = ecx; /* 0x10056E33: mov dword ptr [ebp - 4], ecx */
    SET_LO8(ecx, MEM8(eax)); /* 0x10056E36: mov cl, byte ptr [eax] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x10056E38: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10056E63; /* 0x10056E3A: je 0x10056e63 */
L_10056E3C:
    eax = ebp + (-0x14); /* 0x10056E3C: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x10056E3F: push eax */
    eax = (uint32_t)LO8(ecx); /* 0x10056E40: movzx eax, cl */
    PUSH32(esp, eax); /* 0x10056E43: push eax */
    RECOMP_CALL(sub_10011D42); /* 0x10056E44: call 0x10011d42 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10056E49: pop ecx */
    /* test eax, eax */ /* 0x10056E4A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0x8); /* 0x10056E4C: mov eax, dword ptr [ebp + 8] */
    ecx = POP32_VAL(esp); /* 0x10056E4F: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_10056E58; /* 0x10056E50: je 0x10056e58 */
L_10056E52:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10056E52: inc eax */
    _flag_k = FK_INC;
    /* cmp MEM8(eax), 0 */ /* 0x10056E53: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10056E81; /* 0x10056E56: je 0x10056e81 */
L_10056E58:
    ecx = MEM32(ebp + (-0x4)); /* 0x10056E58: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10056E5B: inc eax */
    _flag_k = FK_INC;
L_10056E5C:
    MEM32(ebp + 0x8) = eax; /* 0x10056E5C: mov dword ptr [ebp + 8], eax */
    /* test ecx, ecx */ /* 0x10056E5F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10056E32; /* 0x10056E61: jne 0x10056e32 */
L_10056E63:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10056E63: push dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x10056E66: sub eax, ebx */
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x10056E68: push edi */
    PUSH32(esp, eax); /* 0x10056E69: push eax */
    eax = MEM32(ebp + (-0x14)); /* 0x10056E6A: mov eax, dword ptr [ebp - 0x14] */
    PUSH32(esp, ebx); /* 0x10056E6D: push ebx */
    PUSH32(esp, 1); /* 0x10056E6E: push 1 */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x10056E70: push dword ptr [eax + 4] */
    RECOMP_ICALL(MEM32(0x100E5024)); /* 0x10056E73: call dword ptr [0x100e5024] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10056E79: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10021404; /* 0x10056E7B: jne 0x10021404 */
L_10056E81:
    RECOMP_CALL(sub_1001177D); /* 0x10056E81: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x2Au; /* 0x10056E86: mov dword ptr [eax], 0x2a */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10056E8C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(edi) = (uint16_t)(LO16(eax)); /* 0x10056E8E: mov word ptr [edi], ax */
    RECOMP_BACKEDGE();
    goto L_10012EA5; /* 0x10056E91: jmp 0x10012ea5 */
L_10056E96:
    RECOMP_CALL(sub_1001177D); /* 0x10056E96: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x2Au; /* 0x10056E9B: mov dword ptr [eax], 0x2a */
    RECOMP_BACKEDGE();
    goto L_10012EA5; /* 0x10056EA1: jmp 0x10012ea5 */
L_10056EA6:
    ecx = MEM32(ebp + (-0xC)); /* 0x10056EA6: mov ecx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x10056EA9: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10012EAF; /* 0x10056EAD: jmp 0x10012eaf */
L_10089720:
    PUSH32(esp, ebp); /* 0x10089720: push ebp */
    ebp = esp; /* 0x10089721: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x10089723: pop ebp */
    RECOMP_BACKEDGE();
    goto L_10012E3F; /* 0x10089724: jmp 0x10012e3f */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10089729(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10089729u);

L_10089729:
    PUSH32(esp, ebp); /* 0x10089729: push ebp */
    ebp = esp; /* 0x1008972A: mov ebp, esp */
    /* cmp MEM32(0x100DF7C4), 0 */ /* 0x1008972C: cmp dword ptr [0x100df7c4], 0 */
    _flag_a = (uint32_t)(MEM32(0x100DF7C4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008973C; /* 0x10089733: jne 0x1008973c */
L_10089735:
    PUSH32(esp, 0x100E1870u); /* 0x10089735: push 0x100e1870 */
    goto L_1008973E; /* 0x1008973A: jmp 0x1008973e */
L_1008973C:
    PUSH32(esp, 0); /* 0x1008973C: push 0 */
L_1008973E:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1008973E: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10089741: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10089744: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10012E3F); /* 0x10089747: call 0x10012e3f */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1008974C: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008974F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10089750: ret  */
    RECOMP_REGS_OUT();
}

void sub_10089751(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10089751u);

L_10089751:
    PUSH32(esp, ebp); /* 0x10089751: push ebp */
    ebp = esp; /* 0x10089752: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x10089754: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x10089757: push ebx */
    PUSH32(esp, edi); /* 0x10089758: push edi */
    edi = MEM32(ebp + 0xC); /* 0x10089759: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x1008975C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10089765; /* 0x1008975E: je 0x10089765 */
L_10089760:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10089760: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(edi) = (uint16_t)(LO16(eax)); /* 0x10089762: mov word ptr [edi], ax */
L_10089765:
    ebx = MEM32(ebp + 0x10); /* 0x10089765: mov ebx, dword ptr [ebp + 0x10] */
    /* test ebx, ebx */ /* 0x10089768: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100898DD; /* 0x1008976A: je 0x100898dd */
L_10089770:
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x10089770: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100898DD; /* 0x10089774: je 0x100898dd */
L_1008977A:
    /* cmp MEM8(ebx), 0 */ /* 0x1008977A: cmp byte ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100898DD; /* 0x1008977D: je 0x100898dd */
L_10089783:
    PUSH32(esp, esi); /* 0x10089783: push esi */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x10089784: push dword ptr [ebp + 0x1c] */
    ecx = ebp + (-0x10); /* 0x10089787: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1000F764); /* 0x1008978A: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x10)); /* 0x1008978F: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x10089792: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx + 0xA8), esi */ /* 0x10089794: cmp dword ptr [ecx + 0xa8], esi */
    _flag_a = (uint32_t)(MEM32(ecx + 0xA8)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100897C8; /* 0x1008979A: jne 0x100897c8 */
L_1008979C:
    /* test edi, edi */ /* 0x1008979C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100897A6; /* 0x1008979E: je 0x100897a6 */
L_100897A0:
    eax = (uint32_t)MEM8(ebx); /* 0x100897A0: movzx eax, byte ptr [ebx] */
    MEM16(edi) = (uint16_t)(LO16(eax)); /* 0x100897A3: mov word ptr [edi], ax */
L_100897A6:
    eax = MEM32(ebp + 0x8); /* 0x100897A6: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x100897A9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100897B3; /* 0x100897AB: je 0x100897b3 */
L_100897AD:
    MEM32(eax) = 1; /* 0x100897AD: mov dword ptr [eax], 1 */
L_100897B3:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x100897B3: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100897C0; /* 0x100897B7: je 0x100897c0 */
L_100897B9:
    ecx = MEM32(ebp + (-0x8)); /* 0x100897B9: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x100897BC: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_100897C0:
    eax = esi; /* 0x100897C0: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x100897C2: pop esi */
    goto L_100898E9; /* 0x100897C3: jmp 0x100898e9 */
L_100897C8:
    eax = MEM32(ebp + 0x18); /* 0x100897C8: mov eax, dword ptr [ebp + 0x18] */
    /* cmp MEM32(eax), esi */ /* 0x100897CB: cmp dword ptr [eax], esi */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10089812; /* 0x100897CD: je 0x10089812 */
L_100897CF:
    SET_LO8(eax, MEM8(ebx)); /* 0x100897CF: mov al, byte ptr [ebx] */
    ebx = MEM32(ebp + 0x18); /* 0x100897D1: mov ebx, dword ptr [ebp + 0x18] */
    MEM8(ebx + 0x1) = (uint8_t)(LO8(eax)); /* 0x100897D4: mov byte ptr [ebx + 1], al */
    /* cmp MEM32(ecx + 0x74), 1 */ /* 0x100897D7: cmp dword ptr [ecx + 0x74], 1 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x74)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1008980B; /* 0x100897DB: jle 0x1008980b */
L_100897DD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100897DD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x100897DF: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x100897E1: setne al */
    PUSH32(esp, eax); /* 0x100897E4: push eax */
    PUSH32(esp, edi); /* 0x100897E5: push edi */
    PUSH32(esp, 2); /* 0x100897E6: push 2 */
    PUSH32(esp, ebx); /* 0x100897E8: push ebx */
    PUSH32(esp, 9); /* 0x100897E9: push 9 */
    PUSH32(esp, MEM32(ecx + 0x4)); /* 0x100897EB: push dword ptr [ecx + 4] */
    RECOMP_ICALL(MEM32(0x100E5024)); /* 0x100897EE: call dword ptr [0x100e5024] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100897F4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008980B; /* 0x100897F6: je 0x1008980b */
L_100897F8:
    ecx = MEM32(ebp + 0x8); /* 0x100897F8: mov ecx, dword ptr [ebp + 8] */
    MEM32(ebx) = esi; /* 0x100897FB: mov dword ptr [ebx], esi */
    /* test ecx, ecx */ /* 0x100897FD: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100897B3; /* 0x100897FF: je 0x100897b3 */
L_10089801:
    eax = MEM32(ebp + (-0x10)); /* 0x10089801: mov eax, dword ptr [ebp - 0x10] */
    eax = MEM32(eax + 0x74); /* 0x10089804: mov eax, dword ptr [eax + 0x74] */
    MEM32(ecx) = eax; /* 0x10089807: mov dword ptr [ecx], eax */
    RECOMP_BACKEDGE();
    goto L_100897B3; /* 0x10089809: jmp 0x100897b3 */
L_1008980B:
    MEM32(ebx) = esi; /* 0x1008980B: mov dword ptr [ebx], esi */
    goto L_100898B3; /* 0x1008980D: jmp 0x100898b3 */
L_10089812:
    eax = ebp + (-0x10); /* 0x10089812: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x10089815: push eax */
    eax = (uint32_t)MEM8(ebx); /* 0x10089816: movzx eax, byte ptr [ebx] */
    PUSH32(esp, eax); /* 0x10089819: push eax */
    RECOMP_CALL(sub_10011D42); /* 0x1008981A: call 0x10011d42 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008981F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10089820: pop ecx */
    /* test eax, eax */ /* 0x10089821: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10089891; /* 0x10089823: je 0x10089891 */
L_10089825:
    ecx = MEM32(ebp + (-0x10)); /* 0x10089825: mov ecx, dword ptr [ebp - 0x10] */
    edx = MEM32(ecx + 0x74); /* 0x10089828: mov edx, dword ptr [ecx + 0x74] */
    /* cmp MEM32(ebp + 0x14), edx */ /* 0x1008982B: cmp dword ptr [ebp + 0x14], edx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1008984D; /* 0x1008982E: jae 0x1008984d */
L_10089830:
    ecx = MEM32(ebp + 0x18); /* 0x10089830: mov ecx, dword ptr [ebp + 0x18] */
    SET_LO8(eax, MEM8(ebx)); /* 0x10089833: mov al, byte ptr [ebx] */
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x10089835: mov byte ptr [ecx], al */
    eax = MEM32(ebp + 0x8); /* 0x10089837: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x1008983A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100897B3; /* 0x1008983C: je 0x100897b3 */
L_10089842:
    MEM32(eax) = 0xFFFFFFFEu; /* 0x10089842: mov dword ptr [eax], 0xfffffffe */
    RECOMP_BACKEDGE();
    goto L_100897B3; /* 0x10089848: jmp 0x100897b3 */
L_1008984D:
    /* cmp edx, 1 */ /* 0x1008984D: cmp edx, 1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1008986F; /* 0x10089850: jle 0x1008986f */
L_10089852:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10089852: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x10089854: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x10089856: setne al */
    PUSH32(esp, eax); /* 0x10089859: push eax */
    PUSH32(esp, edi); /* 0x1008985A: push edi */
    PUSH32(esp, edx); /* 0x1008985B: push edx */
    PUSH32(esp, ebx); /* 0x1008985C: push ebx */
    PUSH32(esp, 9); /* 0x1008985D: push 9 */
    PUSH32(esp, MEM32(ecx + 0x4)); /* 0x1008985F: push dword ptr [ecx + 4] */
    RECOMP_ICALL(MEM32(0x100E5024)); /* 0x10089862: call dword ptr [0x100e5024] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x10)); /* 0x10089868: mov ecx, dword ptr [ebp - 0x10] */
    /* test eax, eax */ /* 0x1008986B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008987C; /* 0x1008986D: jne 0x1008987c */
L_1008986F:
    /* cmp MEM8(ebx + 0x1), 0 */ /* 0x1008986F: cmp byte ptr [ebx + 1], 0 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x1)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008987C; /* 0x10089873: jne 0x1008987c */
L_10089875:
    eax = MEM32(ebp + 0x18); /* 0x10089875: mov eax, dword ptr [ebp + 0x18] */
    MEM32(eax) = esi; /* 0x10089878: mov dword ptr [eax], esi */
    goto L_100898B3; /* 0x1008987A: jmp 0x100898b3 */
L_1008987C:
    edx = MEM32(ebp + 0x8); /* 0x1008987C: mov edx, dword ptr [ebp + 8] */
    /* test edx, edx */ /* 0x1008987F: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100897B3; /* 0x10089881: je 0x100897b3 */
L_10089887:
    eax = MEM32(ecx + 0x74); /* 0x10089887: mov eax, dword ptr [ecx + 0x74] */
    MEM32(edx) = eax; /* 0x1008988A: mov dword ptr [edx], eax */
    RECOMP_BACKEDGE();
    goto L_100897B3; /* 0x1008988C: jmp 0x100897b3 */
L_10089891:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10089891: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x10089893: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x10089895: setne al */
    PUSH32(esp, eax); /* 0x10089898: push eax */
    eax = MEM32(ebp + (-0x10)); /* 0x10089899: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, edi); /* 0x1008989C: push edi */
    PUSH32(esp, 1); /* 0x1008989D: push 1 */
    PUSH32(esp, ebx); /* 0x1008989F: push ebx */
    PUSH32(esp, 9); /* 0x100898A0: push 9 */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x100898A2: push dword ptr [eax + 4] */
    RECOMP_ICALL(MEM32(0x100E5024)); /* 0x100898A5: call dword ptr [0x100e5024] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100898AB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100897A6; /* 0x100898AD: jne 0x100897a6 */
L_100898B3:
    RECOMP_CALL(sub_1001177D); /* 0x100898B3: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x2Au; /* 0x100898B8: mov dword ptr [eax], 0x2a */
    /* test edi, edi */ /* 0x100898BE: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100898C7; /* 0x100898C0: je 0x100898c7 */
L_100898C2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100898C2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(edi) = (uint16_t)(LO16(eax)); /* 0x100898C4: mov word ptr [edi], ax */
L_100898C7:
    eax = MEM32(ebp + 0x8); /* 0x100898C7: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x100898CA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100898D1; /* 0x100898CC: je 0x100898d1 */
L_100898CE:
    _flag_a = (uint32_t)((MEM32(eax) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(eax) | 0xFFFFFFFFu));
    MEM32(eax) = MEM32(eax) | 0xFFFFFFFFu; /* 0x100898CE: or dword ptr [eax], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_100898D1:
    RECOMP_CALL(sub_1001177D); /* 0x100898D1: call 0x1001177d */
    RECOMP_FLAGS_IN();
    esi = MEM32(eax); /* 0x100898D6: mov esi, dword ptr [eax] */
    RECOMP_BACKEDGE();
    goto L_100897B3; /* 0x100898D8: jmp 0x100897b3 */
L_100898DD:
    eax = MEM32(ebp + 0x8); /* 0x100898DD: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x100898E0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100898E7; /* 0x100898E2: je 0x100898e7 */
L_100898E4:
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x100898E4: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_100898E7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100898E7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_100898E9:
    edi = POP32_VAL(esp); /* 0x100898E9: pop edi */
    ebx = POP32_VAL(esp); /* 0x100898EA: pop ebx */
    esp = ebp; /* 0x100898EB: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100898ED: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100898EE: ret  */
    RECOMP_REGS_OUT();
}
