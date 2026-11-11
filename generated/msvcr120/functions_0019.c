#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_10077DC2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10077DC2u);

L_10077DC2:
    PUSH32(esp, ebp); /* 0x10077DC2: push ebp */
    ebp = esp; /* 0x10077DC3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x10077DC5: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x10077DC8: push esi */
    PUSH32(esp, edi); /* 0x10077DC9: push edi */
    edi = MEM32(ebp + 0x8); /* 0x10077DCA: mov edi, dword ptr [ebp + 8] */
    esi = ecx; /* 0x10077DCD: mov esi, ecx */
    /* cmp MEM32(edi + 0x8), 0 */ /* 0x10077DCF: cmp dword ptr [edi + 8], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10077E04; /* 0x10077DD3: jne 0x10077e04 */
L_10077DD5:
    MEM32(edi + 0x8) = esi; /* 0x10077DD5: mov dword ptr [edi + 8], esi */
    MEM32(edi + 0xC) = 0x10069323u; /* 0x10077DD8: mov dword ptr [edi + 0xc], 0x10069323 */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x10) = MEM32(esi + 0x10) + 1; /* 0x10077DDF: inc dword ptr [esi + 0x10] */
    _flag_k = FK_INC;
    /* cmp MEM32(esi + 0xC), 0 */ /* 0x10077DE2: cmp dword ptr [esi + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10077DF0; /* 0x10077DE6: jne 0x10077df0 */
L_10077DE8:
    RECOMP_CALL(sub_10014872); /* 0x10077DE8: call 0x10014872 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0xC) = eax; /* 0x10077DED: mov dword ptr [esi + 0xc], eax */
L_10077DF0:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10077DF0: push dword ptr [ebp + 0xc] */
    ecx = MEM32(esi + 0xC); /* 0x10077DF3: mov ecx, dword ptr [esi + 0xc] */
    PUSH32(esp, edi); /* 0x10077DF6: push edi */
    RECOMP_CALL(sub_10069C7D); /* 0x10077DF7: call 0x10069c7d */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x10077DFC: pop edi */
    esi = POP32_VAL(esp); /* 0x10077DFD: pop esi */
    esp = ebp; /* 0x10077DFE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10077E00: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x10077E01: ret 8 */
L_10077E04:
    ecx = ebp + (-0xC); /* 0x10077E04: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1009DD55); /* 0x10077E07: call 0x1009dd55 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x100DD0DCu); /* 0x10077E0C: push 0x100dd0dc */
    eax = ebp + (-0xC); /* 0x10077E11: lea eax, [ebp - 0xc] */
    MEM32(ebp + (-0xC)) = 0x100675B4u; /* 0x10077E14: mov dword ptr [ebp - 0xc], 0x100675b4 */
    PUSH32(esp, eax); /* 0x10077E1B: push eax */
    RECOMP_CALL(sub_100192EB); /* 0x10077E1C: call 0x100192eb */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x10077E21u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10077E22(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10077E22u);

L_10077E22:
    PUSH32(esp, ebp); /* 0x10077E22: push ebp */
    ebp = esp; /* 0x10077E23: mov ebp, esp */
    PUSH32(esp, esi); /* 0x10077E25: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10077E26: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x10077E29: mov esi, ecx */
    RECOMP_CALL(sub_1002D16D); /* 0x10077E2B: call 0x1002d16d */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x100675B4u; /* 0x10077E30: mov dword ptr [esi], 0x100675b4 */
    eax = esi; /* 0x10077E36: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x10077E38: pop esi */
    ebp = POP32_VAL(esp); /* 0x10077E39: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10077E3A: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_10077E5C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10077E5Cu);

L_10077E5C:
    PUSH32(esp, ebp); /* 0x10077E5C: push ebp */
    ebp = esp; /* 0x10077E5D: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x10077E5F: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x10077E62: push esi */
    PUSH32(esp, edi); /* 0x10077E63: push edi */
    edi = MEM32(ebp + 0x8); /* 0x10077E64: mov edi, dword ptr [ebp + 8] */
    esi = ecx; /* 0x10077E67: mov esi, ecx */
    /* cmp MEM32(edi + 0x8), 0 */ /* 0x10077E69: cmp dword ptr [edi + 8], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10077E9B; /* 0x10077E6D: jne 0x10077e9b */
L_10077E6F:
    MEM32(edi + 0x8) = esi; /* 0x10077E6F: mov dword ptr [edi + 8], esi */
    MEM32(edi + 0xC) = 0x10069323u; /* 0x10077E72: mov dword ptr [edi + 0xc], 0x10069323 */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x10) = MEM32(esi + 0x10) + 1; /* 0x10077E79: inc dword ptr [esi + 0x10] */
    _flag_k = FK_INC;
    /* cmp MEM32(esi + 0xC), 0 */ /* 0x10077E7C: cmp dword ptr [esi + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10077E8A; /* 0x10077E80: jne 0x10077e8a */
L_10077E82:
    RECOMP_CALL(sub_10014872); /* 0x10077E82: call 0x10014872 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0xC) = eax; /* 0x10077E87: mov dword ptr [esi + 0xc], eax */
L_10077E8A:
    ecx = MEM32(esi + 0xC); /* 0x10077E8A: mov ecx, dword ptr [esi + 0xc] */
    PUSH32(esp, edi); /* 0x10077E8D: push edi */
    RECOMP_CALL(sub_10069DC8); /* 0x10077E8E: call 0x10069dc8 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x10077E93: pop edi */
    esi = POP32_VAL(esp); /* 0x10077E94: pop esi */
    esp = ebp; /* 0x10077E95: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10077E97: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10077E98: ret 4 */
L_10077E9B:
    ecx = ebp + (-0xC); /* 0x10077E9B: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1009DD55); /* 0x10077E9E: call 0x1009dd55 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x100DD0DCu); /* 0x10077EA3: push 0x100dd0dc */
    eax = ebp + (-0xC); /* 0x10077EA8: lea eax, [ebp - 0xc] */
    MEM32(ebp + (-0xC)) = 0x100675B4u; /* 0x10077EAB: mov dword ptr [ebp - 0xc], 0x100675b4 */
    PUSH32(esp, eax); /* 0x10077EB2: push eax */
    RECOMP_CALL(sub_100192EB); /* 0x10077EB3: call 0x100192eb */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x10077EB8u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10077EB9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10077EB9u);

L_10077EB9:
    PUSH32(esp, 0x48u); /* 0x10077EB9: push 0x48 */
    eax = 0x100DBF9Cu; /* 0x10077EBB: mov eax, 0x100dbf9c */
    RECOMP_CALL(sub_1001FB2C); /* 0x10077EC0: call 0x1001fb2c */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x8); /* 0x10077EC5: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10077EC8: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0xC), ebx */ /* 0x10077ECA: cmp dword ptr [esi + 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10077ED7; /* 0x10077ECD: jne 0x10077ed7 */
L_10077ECF:
    RECOMP_CALL(sub_10014872); /* 0x10077ECF: call 0x10014872 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0xC) = eax; /* 0x10077ED4: mov dword ptr [esi + 0xc], eax */
L_10077ED7:
    edi = MEM32(esi + 0xC); /* 0x10077ED7: mov edi, dword ptr [esi + 0xc] */
    MEM32(ebp + (-0x18)) = edi; /* 0x10077EDA: mov dword ptr [ebp - 0x18], edi */
    ecx = MEM32(edi + 0x34); /* 0x10077EDD: mov ecx, dword ptr [edi + 0x34] */
    MEM32(esi) = ecx; /* 0x10077EE0: mov dword ptr [esi], ecx */
    /* test ecx, ecx */ /* 0x10077EE2: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10077EF2; /* 0x10077EE4: je 0x10077ef2 */
L_10077EE6:
    ecx = MEM32(ecx + 0x4); /* 0x10077EE6: mov ecx, dword ptr [ecx + 4] */
    if (4u) _cf = (((ecx) >> 28) & 1u); /* 0x10077EE9: shl ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 4u; /* 0x10077EE9: shl ecx, 4 */
    if (4u) _cf = (((ecx) >> 3) & 1u); /* 0x10077EEC: sar ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 4u);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10077EEF: inc ecx */
    _flag_k = FK_INC;
    goto L_10077EF4; /* 0x10077EF0: jmp 0x10077ef4 */
L_10077EF2:
    ecx = ebx; /* 0x10077EF2: mov ecx, ebx */
L_10077EF4:
    eax = MEM32(esi + 0x4); /* 0x10077EF4: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)((eax ^ ecx)); _flag_b = (uint32_t)((eax ^ ecx));
    eax = eax ^ ecx; /* 0x10077EF7: xor eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = ebx; /* 0x10077EF9: mov dword ptr [ebp - 0x1c], ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x0FFFFFFFu);
    eax = eax & 0x0FFFFFFFu; /* 0x10077EFC: and eax, 0xfffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x24)) = ebx; /* 0x10077F01: mov dword ptr [ebp - 0x24], ebx */
    _flag_a = (uint32_t)((MEM32(esi + 0x4) ^ eax)); _flag_b = (uint32_t)((MEM32(esi + 0x4) ^ eax));
    MEM32(esi + 0x4) = MEM32(esi + 0x4) ^ eax; /* 0x10077F04: xor dword ptr [esi + 4], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x34) = esi; /* 0x10077F07: mov dword ptr [edi + 0x34], esi */
    /* cmp MEM32(esi + 0x8), ebx */ /* 0x10077F0A: cmp dword ptr [esi + 8], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10077F2E; /* 0x10077F0D: je 0x10077f2e */
L_10077F0F:
    eax = ebp + (-0x1C); /* 0x10077F0F: lea eax, [ebp - 0x1c] */
    ecx = esi; /* 0x10077F12: mov ecx, esi */
    PUSH32(esp, eax); /* 0x10077F14: push eax */
    RECOMP_CALL(sub_10079895); /* 0x10077F15: call 0x10079895 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x4); /* 0x10077F1A: mov ecx, dword ptr [esi + 4] */
    edx = eax; /* 0x10077F1D: mov edx, eax */
    if (4u) _cf = (((ecx) >> 28) & 1u); /* 0x10077F1F: shl ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 4u; /* 0x10077F1F: shl ecx, 4 */
    if (4u) _cf = (((ecx) >> 3) & 1u); /* 0x10077F22: sar ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 4u);
    MEM32(ebp + (-0x24)) = edx; /* 0x10077F25: mov dword ptr [ebp - 0x24], edx */
    MEM32(edi + 0x38) = edx; /* 0x10077F28: mov dword ptr [edi + 0x38], edx */
    MEM32(edi + 0x3C) = ecx; /* 0x10077F2B: mov dword ptr [edi + 0x3c], ecx */
L_10077F2E:
    eax = MEM32(ebp + 0xC); /* 0x10077F2E: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x4)) = ebx; /* 0x10077F31: mov dword ptr [ebp - 4], ebx */
    /* test eax, eax */ /* 0x10077F34: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10077F67; /* 0x10077F36: je 0x10077f67 */
L_10077F38:
    /* test MEM8(esi + 0x18), 3 */ /* 0x10077F38: test byte ptr [esi + 0x18], 3 */
    _flag_a = (uint32_t)(MEM8(esi + 0x18)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10077FC9; /* 0x10077F3C: jne 0x10077fc9 */
L_10077F42:
    eax = MEM32(edi + 0x78); /* 0x10077F42: mov eax, dword ptr [edi + 0x78] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x70));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(edi + 0x70); /* 0x10077F45: add eax, dword ptr [edi + 0x70] */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10077F48: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10077F59; /* 0x10077F4A: jle 0x10077f59 */
L_10077F4C:
    PUSH32(esp, ebx); /* 0x10077F4C: push ebx */
    PUSH32(esp, esi); /* 0x10077F4D: push esi */
    ecx = edi; /* 0x10077F4E: mov ecx, edi */
    RECOMP_CALL(sub_1006A520); /* 0x10077F50: call 0x1006a520 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x10077F55: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10077FC9; /* 0x10077F57: jne 0x10077fc9 */
L_10077F59:
    eax = MEM32(ebp + 0xC); /* 0x10077F59: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x10077F5C: push eax */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x10077F5D: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x10077F60: mov eax, dword ptr [ebp + 0xc] */
    ecx = POP32_VAL(esp); /* 0x10077F63: pop ecx */
    MEM32(eax + 0x8) = ebx; /* 0x10077F64: mov dword ptr [eax + 8], ebx */
L_10077F67:
    eax = MEM32(esi + 0x10); /* 0x10077F67: mov eax, dword ptr [esi + 0x10] */
    MEM32(ebp + (-0x14)) = eax; /* 0x10077F6A: mov dword ptr [ebp - 0x14], eax */
L_10077F6D:
    /* test eax, eax */ /* 0x10077F6D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1007801C; /* 0x10077F6F: jle 0x1007801c */
L_10077F75:
    ecx = edi; /* 0x10077F75: mov ecx, edi */
    RECOMP_CALL(sub_1006A045); /* 0x10077F77: call 0x1006a045 */
    RECOMP_FLAGS_IN();
    /* test MEM8(esi + 0x18), 3 */ /* 0x10077F7C: test byte ptr [esi + 0x18], 3 */
    _flag_a = (uint32_t)(MEM8(esi + 0x18)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ecx = eax; /* 0x10077F80: mov ecx, eax */
    MEM32(ebp + (-0x20)) = ecx; /* 0x10077F82: mov dword ptr [ebp - 0x20], ecx */
    MEM32(ebp + 0xC) = ecx; /* 0x10077F85: mov dword ptr [ebp + 0xc], ecx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10077FFC; /* 0x10077F88: jne 0x10077ffc */
L_10077F8A:
    eax = MEM32(edi + 0x78); /* 0x10077F8A: mov eax, dword ptr [edi + 0x78] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x70));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(edi + 0x70); /* 0x10077F8D: add eax, dword ptr [edi + 0x70] */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10077F90: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10077FA4; /* 0x10077F92: jle 0x10077fa4 */
L_10077F94:
    PUSH32(esp, ebx); /* 0x10077F94: push ebx */
    PUSH32(esp, esi); /* 0x10077F95: push esi */
    ecx = edi; /* 0x10077F96: mov ecx, edi */
    RECOMP_CALL(sub_1006A520); /* 0x10077F98: call 0x1006a520 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x10077F9D: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10077FFC; /* 0x10077F9F: jne 0x10077ffc */
L_10077FA1:
    ecx = MEM32(ebp + (-0x20)); /* 0x10077FA1: mov ecx, dword ptr [ebp - 0x20] */
L_10077FA4:
    /* test ecx, ecx */ /* 0x10077FA4: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007801C; /* 0x10077FA6: je 0x1007801c */
L_10077FA8:
    eax = MEM32(ebp + (-0x14)); /* 0x10077FA8: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10077FAB: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x14)) = eax; /* 0x10077FAC: mov dword ptr [ebp - 0x14], eax */
    /* cmp ecx, 1 */ /* 0x10077FAF: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10077F6D; /* 0x10077FB2: je 0x10077f6d */
L_10077FB4:
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x10) = MEM32(esi + 0x10) - 1; /* 0x10077FB4: dec dword ptr [esi + 0x10] */
    _flag_k = FK_DEC;
    SET_LO8(eax, MEM8(edi + 0x4C)); /* 0x10077FB7: mov al, byte ptr [edi + 0x4c] */
    /* test LO8(eax), LO8(eax) */ /* 0x10077FBA: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = MEM32(edi + 0x9C); /* 0x10077FBC: mov eax, dword ptr [edi + 0x9c] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_10077FE6; /* 0x10077FC2: je 0x10077fe6 */
L_10077FC4:
    _flag_a = (uint32_t)(MEM32(eax + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0xC) = MEM32(eax + 0xC) + 1; /* 0x10077FC4: inc dword ptr [eax + 0xc] */
    _flag_k = FK_INC;
    goto L_10077FE9; /* 0x10077FC7: jmp 0x10077fe9 */
L_10077FC9:
    ecx = ebp + (-0x30); /* 0x10077FC9: lea ecx, [ebp - 0x30] */
    RECOMP_CALL(sub_1009DD55); /* 0x10077FCC: call 0x1009dd55 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x30)) = 0x10067484u; /* 0x10077FD1: mov dword ptr [ebp - 0x30], 0x10067484 */
    eax = ebp + (-0x30); /* 0x10077FD8: lea eax, [ebp - 0x30] */
    PUSH32(esp, 0x100DCEB0u); /* 0x10077FDB: push 0x100dceb0 */
L_10077FE0:
    PUSH32(esp, eax); /* 0x10077FE0: push eax */
    RECOMP_CALL(sub_100192EB); /* 0x10077FE1: call 0x100192eb */
    RECOMP_FLAGS_IN();
L_10077FE6:
    _flag_a = (uint32_t)(MEM32(eax + 0x6C)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x6C) = MEM32(eax + 0x6C) + 1; /* 0x10077FE6: inc dword ptr [eax + 0x6c] */
    _flag_k = FK_INC;
L_10077FE9:
    PUSH32(esp, ecx); /* 0x10077FE9: push ecx */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x10077FEA: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x20)); /* 0x10077FED: mov eax, dword ptr [ebp - 0x20] */
    ecx = POP32_VAL(esp); /* 0x10077FF0: pop ecx */
    MEM32(eax + 0x8) = ebx; /* 0x10077FF1: mov dword ptr [eax + 8], ebx */
    eax = MEM32(ebp + (-0x14)); /* 0x10077FF4: mov eax, dword ptr [ebp - 0x14] */
    RECOMP_BACKEDGE();
    goto L_10077F6D; /* 0x10077FF7: jmp 0x10077f6d */
L_10077FFC:
    _flag_a = (uint32_t)((MEM32(esi + 0x4) | 0x20000000u)); _flag_b = (uint32_t)((MEM32(esi + 0x4) | 0x20000000u));
    MEM32(esi + 0x4) = MEM32(esi + 0x4) | 0x20000000u; /* 0x10077FFC: or dword ptr [esi + 4], 0x20000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x3C); /* 0x10078003: lea ecx, [ebp - 0x3c] */
    RECOMP_CALL(sub_1009DD55); /* 0x10078006: call 0x1009dd55 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x3C)) = 0x10067484u; /* 0x1007800B: mov dword ptr [ebp - 0x3c], 0x10067484 */
    eax = ebp + (-0x3C); /* 0x10078012: lea eax, [ebp - 0x3c] */
    PUSH32(esp, 0x100DCEB0u); /* 0x10078015: push 0x100dceb0 */
    RECOMP_BACKEDGE();
    goto L_10077FE0; /* 0x1007801A: jmp 0x10077fe0 */
L_1007801C:
    /* cmp MEM32(esi + 0x10), 0 */ /* 0x1007801C: cmp dword ptr [esi + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1007802F; /* 0x10078020: jle 0x1007802f */
L_10078022:
    PUSH32(esp, MEM32(esi + 0x10)); /* 0x10078022: push dword ptr [esi + 0x10] */
    ecx = esi; /* 0x10078025: mov ecx, esi */
    RECOMP_CALL(sub_1007834B); /* 0x10078027: call 0x1007834b */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x10) = ebx; /* 0x1007802C: mov dword ptr [esi + 0x10], ebx */
L_1007802F:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1007802F: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x8), ebx */ /* 0x10078033: cmp dword ptr [esi + 8], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10078051; /* 0x10078036: je 0x10078051 */
L_10078038:
    PUSH32(esp, ecx); /* 0x10078038: push ecx */
    ecx = edi; /* 0x10078039: mov ecx, edi */
    RECOMP_CALL(sub_1006A275); /* 0x1007803B: call 0x1006a275 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x1C)), 0 */ /* 0x10078040: cmp dword ptr [ebp - 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10078051; /* 0x10078044: je 0x10078051 */
L_10078046:
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x10078046: push dword ptr [ebp - 0x1c] */
    ecx = MEM32(ebp + (-0x24)); /* 0x10078049: mov ecx, dword ptr [ebp - 0x24] */
    RECOMP_CALL(sub_100690DC); /* 0x1007804C: call 0x100690dc */
    RECOMP_FLAGS_IN();
L_10078051:
    eax = MEM32(esi); /* 0x10078051: mov eax, dword ptr [esi] */
    MEM32(edi + 0x34) = eax; /* 0x10078053: mov dword ptr [edi + 0x34], eax */
    /* cmp MEM32(esi + 0x18), ebx */ /* 0x10078056: cmp dword ptr [esi + 0x18], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x18)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10078125; /* 0x10078059: je 0x10078125 */
L_1007805F:
    ecx = esi; /* 0x1007805F: mov ecx, esi */
    RECOMP_CALL(sub_100781A1); /* 0x10078061: call 0x100781a1 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x78); /* 0x10078066: mov eax, dword ptr [edi + 0x78] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x70));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(edi + 0x70); /* 0x10078069: add eax, dword ptr [edi + 0x70] */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1007806C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10078120; /* 0x1007806E: jle 0x10078120 */
L_10078074:
    /* cmp MEM32(esi + 0x8), ebx */ /* 0x10078074: cmp dword ptr [esi + 8], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = edi; /* 0x10078077: mov ecx, edi */
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x10078079: setne al */
    eax = (uint32_t)LO8(eax); /* 0x1007807C: movzx eax, al */
    PUSH32(esp, eax); /* 0x1007807F: push eax */
    PUSH32(esp, esi); /* 0x10078080: push esi */
    RECOMP_CALL(sub_1006A520); /* 0x10078081: call 0x1006a520 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x10078086: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10078120; /* 0x10078088: je 0x10078120 */
L_1007808E:
    ecx = ebp + (-0x48); /* 0x1007808E: lea ecx, [ebp - 0x48] */
    RECOMP_CALL(sub_1009DD55); /* 0x10078091: call 0x1009dd55 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x48)) = 0x10067484u; /* 0x10078096: mov dword ptr [ebp - 0x48], 0x10067484 */
    eax = ebp + (-0x48); /* 0x1007809D: lea eax, [ebp - 0x48] */
    PUSH32(esp, 0x100DCEB0u); /* 0x100780A0: push 0x100dceb0 */
    RECOMP_BACKEDGE();
    goto L_10077FE0; /* 0x100780A5: jmp 0x10077fe0 */
L_10078120:
    PUSH32(esp, 2); /* 0x10078120: push 2 */
    eax = POP32_VAL(esp); /* 0x10078122: pop eax */
    goto L_10078164; /* 0x10078123: jmp 0x10078164 */
L_10078125:
    eax = MEM32(edi + 0x78); /* 0x10078125: mov eax, dword ptr [edi + 0x78] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x70));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(edi + 0x70); /* 0x10078128: add eax, dword ptr [edi + 0x70] */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1007812B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10078161; /* 0x1007812D: jle 0x10078161 */
L_1007812F:
    /* cmp MEM32(esi + 0x8), ebx */ /* 0x1007812F: cmp dword ptr [esi + 8], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = edi; /* 0x10078132: mov ecx, edi */
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x10078134: setne al */
    eax = (uint32_t)LO8(eax); /* 0x10078137: movzx eax, al */
    PUSH32(esp, eax); /* 0x1007813A: push eax */
    PUSH32(esp, esi); /* 0x1007813B: push esi */
    RECOMP_CALL(sub_1006A520); /* 0x1007813C: call 0x1006a520 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x10078141: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10078161; /* 0x10078143: je 0x10078161 */
L_10078145:
    ecx = ebp + (-0x54); /* 0x10078145: lea ecx, [ebp - 0x54] */
    RECOMP_CALL(sub_1009DD55); /* 0x10078148: call 0x1009dd55 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x54)) = 0x10067484u; /* 0x1007814D: mov dword ptr [ebp - 0x54], 0x10067484 */
    eax = ebp + (-0x54); /* 0x10078154: lea eax, [ebp - 0x54] */
    PUSH32(esp, 0x100DCEB0u); /* 0x10078157: push 0x100dceb0 */
    RECOMP_BACKEDGE();
    goto L_10077FE0; /* 0x1007815C: jmp 0x10077fe0 */
L_10078161:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10078161: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10078163: inc eax */
    _flag_k = FK_INC;
L_10078164:
    RECOMP_CALL(sub_100149D7); /* 0x10078164: call 0x100149d7 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x10078169: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1007816C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007816Cu);

L_1007816C:
    PUSH32(esp, ebp); /* 0x1007816C: push ebp */
    ebp = esp; /* 0x1007816D: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1007816F: push ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x10078170: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x4); /* 0x10078174: lea eax, [ebp - 4] */
    PUSH32(esp, esi); /* 0x10078177: push esi */
    PUSH32(esp, eax); /* 0x10078178: push eax */
    RECOMP_CALL(sub_10079895); /* 0x10078179: call 0x10079895 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x1007817E: mov ecx, dword ptr [ebp - 4] */
    esi = eax; /* 0x10078181: mov esi, eax */
    /* test ecx, ecx */ /* 0x10078183: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007818C; /* 0x10078185: je 0x1007818c */
L_10078187:
    RECOMP_CALL(sub_10068B23); /* 0x10078187: call 0x10068b23 */
    RECOMP_FLAGS_IN();
L_1007818C:
    /* test esi, esi */ /* 0x1007818C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007819C; /* 0x1007818E: je 0x1007819c */
L_10078190:
    /* cmp esi, 2 */ /* 0x10078190: cmp esi, 2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007819C; /* 0x10078193: je 0x1007819c */
L_10078195:
    ecx = esi; /* 0x10078195: mov ecx, esi */
    RECOMP_CALL(sub_10068B23); /* 0x10078197: call 0x10068b23 */
    RECOMP_FLAGS_IN();
L_1007819C:
    esi = POP32_VAL(esp); /* 0x1007819C: pop esi */
    esp = ebp; /* 0x1007819D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007819F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100781A0: ret  */
    RECOMP_REGS_OUT();
}

void sub_100781A1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100781A1u);

L_100781A1:
    PUSH32(esp, ebp); /* 0x100781A1: push ebp */
    ebp = esp; /* 0x100781A2: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x100781A4: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x100781A7: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x100781AA: push ebx */
    PUSH32(esp, esi); /* 0x100781AB: push esi */
    esi = ecx; /* 0x100781AC: mov esi, ecx */
    PUSH32(esp, edi); /* 0x100781AE: push edi */
    edi = MEM32(esi + 0xC); /* 0x100781AF: mov edi, dword ptr [esi + 0xc] */
    ebx = MEM32(esi + 0x10); /* 0x100781B2: mov ebx, dword ptr [esi + 0x10] */
    goto L_100781E4; /* 0x100781B5: jmp 0x100781e4 */
L_100781B7:
    ecx = edi; /* 0x100781B7: mov ecx, edi */
    RECOMP_CALL(sub_1006A045); /* 0x100781B9: call 0x1006a045 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100781BE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100781E8; /* 0x100781C0: je 0x100781e8 */
L_100781C2:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x100781C2: dec ebx */
    _flag_k = FK_DEC;
    /* cmp eax, 1 */ /* 0x100781C3: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100781E4; /* 0x100781C6: je 0x100781e4 */
L_100781C8:
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(eax + 0x8) = MEM32(eax + 0x8) & 0; /* 0x100781C8: and dword ptr [eax + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, MEM8(edi + 0x4C)); /* 0x100781CC: mov al, byte ptr [edi + 0x4c] */
    /* test LO8(eax), LO8(eax) */ /* 0x100781CF: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = MEM32(edi + 0x9C); /* 0x100781D1: mov eax, dword ptr [edi + 0x9c] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_100781DE; /* 0x100781D7: je 0x100781de */
L_100781D9:
    _flag_a = (uint32_t)(MEM32(eax + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0xC) = MEM32(eax + 0xC) + 1; /* 0x100781D9: inc dword ptr [eax + 0xc] */
    _flag_k = FK_INC;
    goto L_100781E1; /* 0x100781DC: jmp 0x100781e1 */
L_100781DE:
    _flag_a = (uint32_t)(MEM32(eax + 0x6C)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x6C) = MEM32(eax + 0x6C) + 1; /* 0x100781DE: inc dword ptr [eax + 0x6c] */
    _flag_k = FK_INC;
L_100781E1:
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x10) = MEM32(esi + 0x10) - 1; /* 0x100781E1: dec dword ptr [esi + 0x10] */
    _flag_k = FK_DEC;
L_100781E4:
    /* test ebx, ebx */ /* 0x100781E4: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_100781B7; /* 0x100781E6: jg 0x100781b7 */
L_100781E8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x100781E8: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x10), ebx */ /* 0x100781EA: cmp dword ptr [esi + 0x10], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_10078203; /* 0x100781ED: jle 0x10078203 */
L_100781EF:
    ecx = esi; /* 0x100781EF: mov ecx, esi */
    RECOMP_CALL(sub_1007826A); /* 0x100781F1: call 0x1007826a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x10)); /* 0x100781F6: push dword ptr [esi + 0x10] */
    ecx = esi; /* 0x100781F9: mov ecx, esi */
    RECOMP_CALL(sub_1007834B); /* 0x100781FB: call 0x1007834b */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x10) = ebx; /* 0x10078200: mov dword ptr [esi + 0x10], ebx */
L_10078203:
    MEM32(esp + 0x18) = ebx; /* 0x10078203: mov dword ptr [esp + 0x18], ebx */
    MEM32(esp + 0x1C) = 0x1007A46Cu; /* 0x10078207: mov dword ptr [esp + 0x1c], 0x1007a46c */
L_1007820F:
    ecx = MEM32(esi + 0x18); /* 0x1007820F: mov ecx, dword ptr [esi + 0x18] */
    eax = ecx; /* 0x10078212: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFCu);
    eax = eax & 0xFFFFFFFCu; /* 0x10078214: and eax, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 8 */ /* 0x10078217: cmp eax, 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10078224; /* 0x1007821A: je 0x10078224 */
L_1007821C:
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(3) << 24;
    SET_LO8(ecx, LO8(ecx) & 3); /* 0x1007821C: and cl, 3 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    /* cmp LO8(ecx), 1 */ /* 0x1007821F: cmp cl, 1 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007822F; /* 0x10078222: jne 0x1007822f */
L_10078224:
    ecx = esp + 0x10; /* 0x10078224: lea ecx, [esp + 0x10] */
    RECOMP_CALL(sub_10068D76); /* 0x10078228: call 0x10068d76 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1007820F; /* 0x1007822D: jmp 0x1007820f */
L_1007822F:
    eax = MEM32(esi + 0x18); /* 0x1007822F: mov eax, dword ptr [esi + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    eax = eax & 3; /* 0x10078232: and eax, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 3 */ /* 0x10078235: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007824D; /* 0x10078238: jne 0x1007824d */
L_1007823A:
    eax = MEM32(esi + 0x4); /* 0x1007823A: mov eax, dword ptr [esi + 4] */
    ecx = edi; /* 0x1007823D: mov ecx, edi */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x1007823F: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x1007823F: shl eax, 4 */
    if (4u) _cf = (((eax) >> 3) & 1u); /* 0x10078242: sar eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 4u);
    PUSH32(esp, eax); /* 0x10078245: push eax */
    RECOMP_CALL(sub_1006A3E2); /* 0x10078246: call 0x1006a3e2 */
    RECOMP_FLAGS_IN();
    goto L_1007825C; /* 0x1007824B: jmp 0x1007825c */
L_1007824D:
    /* cmp eax, 2 */ /* 0x1007824D: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007825C; /* 0x10078250: jne 0x1007825c */
L_10078252:
    eax = edi + 0x78; /* 0x10078252: lea eax, [edi + 0x78] */
    _flag_a = (uint32_t)((ecx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ecx | 0xFFFFFFFFu));
    ecx = ecx | 0xFFFFFFFFu; /* 0x10078255: or ecx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + ecx; ecx = _old; MEM32(eax) = _sum; } /* 0x10078258: lock xadd dword ptr [eax], ecx */
    _flag_k = FK_ADD;
L_1007825C:
    ecx = esi; /* 0x1007825C: mov ecx, esi */
    RECOMP_CALL(sub_10079747); /* 0x1007825E: call 0x10079747 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x10078263: pop edi */
    esi = POP32_VAL(esp); /* 0x10078264: pop esi */
    ebx = POP32_VAL(esp); /* 0x10078265: pop ebx */
    esp = ebp; /* 0x10078266: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10078268: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10078269: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007826A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007826Au);

L_1007826A:
    PUSH32(esp, ebx); /* 0x1007826A: push ebx */
    PUSH32(esp, esi); /* 0x1007826B: push esi */
    esi = ecx; /* 0x1007826C: mov esi, ecx */
    PUSH32(esp, edi); /* 0x1007826E: push edi */
    /* cmp MEM32(esi + 0xC), 0 */ /* 0x1007826F: cmp dword ptr [esi + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007827D; /* 0x10078273: jne 0x1007827d */
L_10078275:
    RECOMP_CALL(sub_10014872); /* 0x10078275: call 0x10014872 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0xC) = eax; /* 0x1007827A: mov dword ptr [esi + 0xc], eax */
L_1007827D:
    ebx = esi + 0x18; /* 0x1007827D: lea ebx, [esi + 0x18] */
    edx = MEM32(ebx); /* 0x10078280: mov edx, dword ptr [ebx] */
    /* test LO8(edx), 3 */ /* 0x10078282: test dl, 3 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100782D4; /* 0x10078285: jne 0x100782d4 */
L_10078287:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x10078287: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x10078289: inc edi */
    _flag_k = FK_INC;
L_1007828A:
    ecx = edx; /* 0x1007828A: mov ecx, edx */
    eax = edx; /* 0x1007828C: mov eax, edx */
    _flag_a = (uint32_t)((ecx | edi)); _flag_b = (uint32_t)((ecx | edi));
    ecx = ecx | edi; /* 0x1007828E: or ecx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(ebx); if (eax == _d) { MEM32(ebx) = ecx; } else { eax = _d; } } /* 0x10078290: lock cmpxchg dword ptr [ebx], ecx */
    _flag_k = FK_CMP;
    /* cmp eax, edx */ /* 0x10078294: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100782A0; /* 0x10078296: je 0x100782a0 */
L_10078298:
    edx = eax; /* 0x10078298: mov edx, eax */
    /* test LO8(eax), 3 */ /* 0x1007829A: test al, 3 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100782D4; /* 0x1007829C: jne 0x100782d4 */
L_1007829E:
    RECOMP_BACKEDGE();
    goto L_1007828A; /* 0x1007829E: jmp 0x1007828a */
L_100782A0:
    eax = MEM32(esi + 0x4); /* 0x100782A0: mov eax, dword ptr [esi + 4] */
    ecx = MEM32(esi + 0xC); /* 0x100782A3: mov ecx, dword ptr [esi + 0xc] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x100782A6: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x100782A6: shl eax, 4 */
    if (4u) _cf = (((eax) >> 3) & 1u); /* 0x100782A9: sar eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 4u);
    /* test eax, eax */ /* 0x100782AC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100782BA; /* 0x100782AE: js 0x100782ba */
L_100782B0:
    PUSH32(esp, eax); /* 0x100782B0: push eax */
    RECOMP_CALL(sub_1006A2EE); /* 0x100782B1: call 0x1006a2ee */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 3); /* 0x100782B6: push 3 */
    goto L_100782C4; /* 0x100782B8: jmp 0x100782c4 */
L_100782BA:
    eax = ecx + 0x78; /* 0x100782BA: lea eax, [ecx + 0x78] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + edi; edi = _old; MEM32(eax) = _sum; } /* 0x100782BD: lock xadd dword ptr [eax], edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x100782C1: inc edi */
    _flag_k = FK_INC;
    PUSH32(esp, 2); /* 0x100782C2: push 2 */
L_100782C4:
    ecx = esi; /* 0x100782C4: mov ecx, esi */
    RECOMP_CALL(sub_100797CA); /* 0x100782C6: call 0x100797ca */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0xC); /* 0x100782CB: mov ecx, dword ptr [esi + 0xc] */
    PUSH32(esp, esi); /* 0x100782CE: push esi */
    RECOMP_CALL(sub_10069B8E); /* 0x100782CF: call 0x10069b8e */
    RECOMP_FLAGS_IN();
L_100782D4:
    edi = POP32_VAL(esp); /* 0x100782D4: pop edi */
    esi = POP32_VAL(esp); /* 0x100782D5: pop esi */
    ebx = POP32_VAL(esp); /* 0x100782D6: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100782D7: ret  */
    RECOMP_REGS_OUT();
}

void sub_100782D8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100782D8u);

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
    RECOMP_REGS_OUT();
}

void sub_1007834B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007834Bu);

L_1007834B:
    PUSH32(esp, ebp); /* 0x1007834B: push ebp */
    ebp = esp; /* 0x1007834C: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x1007834E: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x10078351: push ecx */
    PUSH32(esp, ecx); /* 0x10078352: push ecx */
    PUSH32(esp, esi); /* 0x10078353: push esi */
    esi = ecx; /* 0x10078354: mov esi, ecx */
    PUSH32(esp, edi); /* 0x10078356: push edi */
    edi = esi + 0x14; /* 0x10078357: lea edi, [esi + 0x14] */
    /* cmp MEM32(edi), 0x80000001u */ /* 0x1007835A: cmp dword ptr [edi], 0x80000001 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0x80000001u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_10078367; /* 0x10078360: jg 0x10078367 */
L_10078362:
    RECOMP_CALL(sub_100783DC); /* 0x10078362: call 0x100783dc */
    RECOMP_FLAGS_IN();
L_10078367:
    eax = MEM32(ebp + 0x8); /* 0x10078367: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1007836A: neg eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(edi), _sum = MEM32(edi) + eax; eax = _old; MEM32(edi) = _sum; } /* 0x1007836C: lock xadd dword ptr [edi], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + 0x8); /* 0x10078370: sub eax, dword ptr [ebp + 8] */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NS(_flag_a, _flag_b)) goto L_1007837D; /* 0x10078373: jns 0x1007837d */
L_10078375:
    ecx = esi + 0x1C; /* 0x10078375: lea ecx, [esi + 0x1c] */
    RECOMP_CALL(sub_1006C256); /* 0x10078378: call 0x1006c256 */
    RECOMP_FLAGS_IN();
L_1007837D:
    edi = POP32_VAL(esp); /* 0x1007837D: pop edi */
    esi = POP32_VAL(esp); /* 0x1007837E: pop esi */
    esp = ebp; /* 0x1007837F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10078381: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10078382: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_10078385(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10078385u);

L_10078385:
    PUSH32(esp, ebp); /* 0x10078385: push ebp */
    ebp = esp; /* 0x10078386: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x10078388: push ecx */
    PUSH32(esp, esi); /* 0x10078389: push esi */
    esi = ecx; /* 0x1007838A: mov esi, ecx */
    PUSH32(esp, edi); /* 0x1007838C: push edi */
    edi = esi + 0x14; /* 0x1007838D: lea edi, [esi + 0x14] */
    /* cmp MEM32(edi), 0x80000001u */ /* 0x10078390: cmp dword ptr [edi], 0x80000001 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0x80000001u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1007839D; /* 0x10078396: jg 0x1007839d */
L_10078398:
    RECOMP_CALL(sub_100783DC); /* 0x10078398: call 0x100783dc */
    RECOMP_FLAGS_IN();
L_1007839D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007839D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1007839F: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(edi), _sum = MEM32(edi) + eax; eax = _old; MEM32(edi) = _sum; } /* 0x100783A0: lock xadd dword ptr [edi], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100783A4: inc eax */
    _flag_k = FK_INC;
    if (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_100783D6; /* 0x100783A5: jne 0x100783d6 */
L_100783A7:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x1Cu; /* 0x100783A7: add esi, 0x1c */
    _flag_k = FK_ADD;
    edx = MEM32(esi); /* 0x100783AA: mov edx, dword ptr [esi] */
    eax = edx; /* 0x100783AC: mov eax, edx */
    goto L_100783B2; /* 0x100783AE: jmp 0x100783b2 */
L_100783B0:
    edx = eax; /* 0x100783B0: mov edx, eax */
L_100783B2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100783B2: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100783B4: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(esi); if (eax == _d) { MEM32(esi) = ecx; } else { eax = _d; } } /* 0x100783B5: lock cmpxchg dword ptr [esi], ecx */
    _flag_k = FK_CMP;
    /* cmp eax, edx */ /* 0x100783B9: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_100783B0; /* 0x100783BB: jne 0x100783b0 */
L_100783BD:
    /* cmp edx, 1 */ /* 0x100783BD: cmp edx, 1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_100783D6; /* 0x100783C0: jbe 0x100783d6 */
L_100783C2:
    /* test edx, edx */ /* 0x100783C2: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100783D6; /* 0x100783C4: je 0x100783d6 */
L_100783C6:
    ecx = MEM32(edx + 0x4); /* 0x100783C6: mov ecx, dword ptr [edx + 4] */
    esi = MEM32(edx); /* 0x100783C9: mov esi, dword ptr [edx] */
    eax = MEM32(ecx); /* 0x100783CB: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x100783CD: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    edx = esi; /* 0x100783D0: mov edx, esi */
    /* test esi, esi */ /* 0x100783D2: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100783C6; /* 0x100783D4: jne 0x100783c6 */
L_100783D6:
    edi = POP32_VAL(esp); /* 0x100783D6: pop edi */
    esi = POP32_VAL(esp); /* 0x100783D7: pop esi */
    esp = ebp; /* 0x100783D8: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100783DA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100783DB: ret  */
    RECOMP_REGS_OUT();
}

void sub_100783DC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100783DCu);

L_100783DC:
    PUSH32(esp, ebp); /* 0x100783DC: push ebp */
    ebp = esp; /* 0x100783DD: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x100783DF: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x100783E2: push ebx */
    ebx = 0x80000001u; /* 0x100783E3: mov ebx, 0x80000001 */
    PUSH32(esp, esi); /* 0x100783E8: push esi */
    PUSH32(esp, edi); /* 0x100783E9: push edi */
    esi = ecx + 0x14; /* 0x100783EA: lea esi, [ecx + 0x14] */
    edx = ebx; /* 0x100783ED: mov edx, ebx */
    edi = ebx + (-0x1); /* 0x100783EF: lea edi, [ebx - 1] */
    eax = edi; /* 0x100783F2: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(esi); if (eax == _d) { MEM32(esi) = edx; } else { eax = _d; } } /* 0x100783F4: lock cmpxchg dword ptr [esi], edx */
    _flag_k = FK_CMP;
    /* cmp eax, edi */ /* 0x100783F8: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007840F; /* 0x100783FA: jne 0x1007840f */
L_100783FC:
    eax = ecx + 0x1C; /* 0x100783FC: lea eax, [ecx + 0x1c] */
    /* test eax, eax */ /* 0x100783FF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10078409; /* 0x10078401: je 0x10078409 */
L_10078403:
    MEM32(eax) = 0; /* 0x10078403: mov dword ptr [eax], 0 */
L_10078409:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10078409: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _tmp = MEM32(esi); /* 0x1007840B: xchg dword ptr [esi], eax */
      MEM32(esi) = eax;
      eax = _tmp; }
    goto L_10078428; /* 0x1007840D: jmp 0x10078428 */
L_1007840F:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x1007840F: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 0x1007A46Cu; /* 0x10078413: mov dword ptr [ebp - 4], 0x1007a46c */
    goto L_10078424; /* 0x1007841A: jmp 0x10078424 */
L_1007841C:
    ecx = ebp + (-0x10); /* 0x1007841C: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_10068D76); /* 0x1007841F: call 0x10068d76 */
    RECOMP_FLAGS_IN();
L_10078424:
    /* cmp MEM32(esi), ebx */ /* 0x10078424: cmp dword ptr [esi], ebx */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_LE(_flag_a, _flag_b)) goto L_1007841C; /* 0x10078426: jle 0x1007841c */
L_10078428:
    edi = POP32_VAL(esp); /* 0x10078428: pop edi */
    esi = POP32_VAL(esp); /* 0x10078429: pop esi */
    ebx = POP32_VAL(esp); /* 0x1007842A: pop ebx */
    esp = ebp; /* 0x1007842B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007842D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007842E: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007842F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007842Fu);

L_1007842F:
    PUSH32(esp, 4); /* 0x1007842F: push 4 */
    eax = 0x100DBFF0u; /* 0x10078431: mov eax, 0x100dbff0 */
    RECOMP_CALL(sub_100149A4); /* 0x10078436: call 0x100149a4 */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x1007843B: mov edi, ecx */
    MEM32(ebp + (-0x10)) = edi; /* 0x1007843D: mov dword ptr [ebp - 0x10], edi */
    _flag_a = (uint32_t)((MEM32(edi + 0x4) | 0x0FFFFFFFu)); _flag_b = (uint32_t)((MEM32(edi + 0x4) | 0x0FFFFFFFu));
    MEM32(edi + 0x4) = MEM32(edi + 0x4) | 0x0FFFFFFFu; /* 0x10078440: or dword ptr [edi + 4], 0xfffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edi + 0x3C; /* 0x10078447: lea ecx, [edi + 0x3c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1007844A: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x8) = ebx; /* 0x1007844C: mov dword ptr [edi + 8], ebx */
    MEM32(edi + 0x10) = ebx; /* 0x1007844F: mov dword ptr [edi + 0x10], ebx */
    MEM32(edi + 0x14) = 0x80000000u; /* 0x10078452: mov dword ptr [edi + 0x14], 0x80000000 */
    MEM32(edi + 0x18) = ebx; /* 0x10078459: mov dword ptr [edi + 0x18], ebx */
    MEM32(edi + 0x38) = ebx; /* 0x1007845C: mov dword ptr [edi + 0x38], ebx */
    RECOMP_CALL(sub_1006B72C); /* 0x1007845F: call 0x1006b72c */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = ebx; /* 0x10078464: mov dword ptr [ebp - 4], ebx */
    MEM32(edi + 0x68) = ebx; /* 0x10078467: mov dword ptr [edi + 0x68], ebx */
    MEM32(edi + 0x6C) = ebx; /* 0x1007846A: mov dword ptr [edi + 0x6c], ebx */
    MEM32(edi + 0x78) = ebx; /* 0x1007846D: mov dword ptr [edi + 0x78], ebx */
    MEM32(edi + 0x84) = ebx; /* 0x10078470: mov dword ptr [edi + 0x84], ebx */
    MEM32(edi + 0x88) = ebx; /* 0x10078476: mov dword ptr [edi + 0x88], ebx */
    RECOMP_CALL(sub_10014872); /* 0x1007847C: call 0x10014872 */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0xC) = eax; /* 0x10078481: mov dword ptr [edi + 0xc], eax */
    ecx = edi; /* 0x10078484: mov ecx, edi */
    eax = MEM32(eax + 0x34); /* 0x10078486: mov eax, dword ptr [eax + 0x34] */
    MEM32(edi) = eax; /* 0x10078489: mov dword ptr [edi], eax */
    RECOMP_CALL(sub_10079498); /* 0x1007848B: call 0x10079498 */
    RECOMP_FLAGS_IN();
    ecx = edi + 0x3C; /* 0x10078490: lea ecx, [edi + 0x3c] */
    RECOMP_CALL(sub_1006B922); /* 0x10078493: call 0x1006b922 */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x64) = edi; /* 0x10078498: mov dword ptr [edi + 0x64], edi */
    RECOMP_CALL(sub_10023AF4); /* 0x1007849B: call 0x10023af4 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100784A0: mov esi, eax */
    /* cmp MEM32(esi + 0x20), ebx */ /* 0x100784A2: cmp dword ptr [esi + 0x20], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x20)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100784AE; /* 0x100784A5: jne 0x100784ae */
L_100784A7:
    ecx = esi; /* 0x100784A7: mov ecx, esi */
    RECOMP_CALL(sub_1006A0F6); /* 0x100784A9: call 0x1006a0f6 */
    RECOMP_FLAGS_IN();
L_100784AE:
    eax = MEM32(esi + 0x20); /* 0x100784AE: mov eax, dword ptr [esi + 0x20] */
    eax = MEM32(eax + 0x40); /* 0x100784B1: mov eax, dword ptr [eax + 0x40] */
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(0x0FFFFFFFu);
    MEM32(edi + 0x4) = MEM32(edi + 0x4) & 0x0FFFFFFFu; /* 0x100784B4: and dword ptr [edi + 4], 0xfffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x80) = eax; /* 0x100784BB: mov dword ptr [edi + 0x80], eax */
    eax = edi; /* 0x100784C1: mov eax, edi */
    RECOMP_CALL(sub_100149D7); /* 0x100784C3: call 0x100149d7 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100784C8: ret  */
    RECOMP_REGS_OUT();
}

void sub_100784C9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100784C9u);

L_100784C9:
    PUSH32(esp, 4); /* 0x100784C9: push 4 */
    eax = 0x100DBFF0u; /* 0x100784CB: mov eax, 0x100dbff0 */
    RECOMP_CALL(sub_100149A4); /* 0x100784D0: call 0x100149a4 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x100784D5: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x100784D7: mov dword ptr [ebp - 0x10], esi */
    _flag_a = (uint32_t)((MEM32(esi + 0x4) | 0x0FFFFFFFu)); _flag_b = (uint32_t)((MEM32(esi + 0x4) | 0x0FFFFFFFu));
    MEM32(esi + 0x4) = MEM32(esi + 0x4) | 0x0FFFFFFFu; /* 0x100784DA: or dword ptr [esi + 4], 0xfffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi + 0x3C; /* 0x100784E1: lea ecx, [esi + 0x3c] */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0; /* 0x100784E4: and dword ptr [esi + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(ebp + 0x8); /* 0x100784E8: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(esi + 0x18)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x18) = MEM32(esi + 0x18) & 0; /* 0x100784EB: and dword ptr [esi + 0x18], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x8) = edi; /* 0x100784EF: mov dword ptr [esi + 8], edi */
    MEM32(esi + 0x14) = 0x80000000u; /* 0x100784F2: mov dword ptr [esi + 0x14], 0x80000000 */
    MEM32(esi + 0x38) = 0; /* 0x100784F9: mov dword ptr [esi + 0x38], 0 */
    RECOMP_CALL(sub_1006B72C); /* 0x10078500: call 0x1006b72c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10078505: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x10078507: mov dword ptr [ebp - 4], eax */
    MEM32(esi + 0x68) = eax; /* 0x1007850A: mov dword ptr [esi + 0x68], eax */
    MEM32(esi + 0x6C) = eax; /* 0x1007850D: mov dword ptr [esi + 0x6c], eax */
    MEM32(esi + 0x78) = eax; /* 0x10078510: mov dword ptr [esi + 0x78], eax */
    MEM32(esi + 0x84) = eax; /* 0x10078513: mov dword ptr [esi + 0x84], eax */
    MEM32(esi + 0x88) = eax; /* 0x10078519: mov dword ptr [esi + 0x88], eax */
    /* test edi, edi */ /* 0x1007851F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10078532; /* 0x10078521: je 0x10078532 */
L_10078523:
    /* cmp edi, 2 */ /* 0x10078523: cmp edi, 2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10078532; /* 0x10078526: je 0x10078532 */
L_10078528:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10078528: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edi + 0x4; /* 0x1007852A: lea eax, [edi + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1007852D: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + ecx; ecx = _old; MEM32(eax) = _sum; } /* 0x1007852E: lock xadd dword ptr [eax], ecx */
    _flag_k = FK_ADD;
L_10078532:
    RECOMP_CALL(sub_10014872); /* 0x10078532: call 0x10014872 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0xC) = eax; /* 0x10078537: mov dword ptr [esi + 0xc], eax */
    ecx = esi; /* 0x1007853A: mov ecx, esi */
    eax = MEM32(eax + 0x34); /* 0x1007853C: mov eax, dword ptr [eax + 0x34] */
    MEM32(esi) = eax; /* 0x1007853F: mov dword ptr [esi], eax */
    RECOMP_CALL(sub_10079498); /* 0x10078541: call 0x10079498 */
    RECOMP_FLAGS_IN();
    ecx = esi + 0x3C; /* 0x10078546: lea ecx, [esi + 0x3c] */
    RECOMP_CALL(sub_1006B922); /* 0x10078549: call 0x1006b922 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x64) = esi; /* 0x1007854E: mov dword ptr [esi + 0x64], esi */
    RECOMP_CALL(sub_10023AF4); /* 0x10078551: call 0x10023af4 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x10078556: mov edi, eax */
    /* cmp MEM32(edi + 0x20), 0 */ /* 0x10078558: cmp dword ptr [edi + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10078565; /* 0x1007855C: jne 0x10078565 */
L_1007855E:
    ecx = edi; /* 0x1007855E: mov ecx, edi */
    RECOMP_CALL(sub_1006A0F6); /* 0x10078560: call 0x1006a0f6 */
    RECOMP_FLAGS_IN();
L_10078565:
    eax = MEM32(edi + 0x20); /* 0x10078565: mov eax, dword ptr [edi + 0x20] */
    eax = MEM32(eax + 0x40); /* 0x10078568: mov eax, dword ptr [eax + 0x40] */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0x0FFFFFFFu);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0x0FFFFFFFu; /* 0x1007856B: and dword ptr [esi + 4], 0xfffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x80) = eax; /* 0x10078572: mov dword ptr [esi + 0x80], eax */
    eax = esi; /* 0x10078578: mov eax, esi */
    RECOMP_CALL(sub_100149D7); /* 0x1007857A: call 0x100149d7 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1007857F: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_10078582(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10078582u);

L_10078582:
    PUSH32(esp, ebp); /* 0x10078582: push ebp */
    ebp = esp; /* 0x10078583: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x10078585: push ecx */
    PUSH32(esp, ebx); /* 0x10078586: push ebx */
    PUSH32(esp, esi); /* 0x10078587: push esi */
    esi = ecx; /* 0x10078588: mov esi, ecx */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ebx, 0); /* 0x1007858A: xor bl, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_CALL(sub_1007886A); /* 0x1007858C: call 0x1007886a */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x10078591: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100785CC; /* 0x10078593: jne 0x100785cc */
L_10078595:
    RECOMP_CALL(sub_10013576); /* 0x10078595: call 0x10013576 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1007859A: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100785C2; /* 0x1007859C: jne 0x100785c2 */
L_1007859E:
    /* cmp MEM32(esi + 0x10), 0 */ /* 0x1007859E: cmp dword ptr [esi + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(ebx, (CMP_G(_flag_a, _flag_b)) ? 1 : 0); /* 0x100785A2: setg bl */
    /* cmp MEM32(esi + 0x64), esi */ /* 0x100785A5: cmp dword ptr [esi + 0x64], esi */
    _flag_a = (uint32_t)(MEM32(esi + 0x64)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100785BE; /* 0x100785A8: jne 0x100785be */
L_100785AA:
    eax = MEM32(esi + 0x68); /* 0x100785AA: mov eax, dword ptr [esi + 0x68] */
    goto L_100785BA; /* 0x100785AD: jmp 0x100785ba */
L_100785AF:
    /* cmp MEM32(eax + 0x10), 0 */ /* 0x100785AF: cmp dword ptr [eax + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_100785B7; /* 0x100785B3: jle 0x100785b7 */
L_100785B5:
    SET_LO8(ebx, 1); /* 0x100785B5: mov bl, 1 */
L_100785B7:
    eax = MEM32(eax + 0x68); /* 0x100785B7: mov eax, dword ptr [eax + 0x68] */
L_100785BA:
    /* test eax, eax */ /* 0x100785BA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100785AF; /* 0x100785BC: jne 0x100785af */
L_100785BE:
    /* test LO8(ebx), LO8(ebx) */ /* 0x100785BE: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100785CC; /* 0x100785C0: je 0x100785cc */
L_100785C2:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100785C2: push dword ptr [ebp + 8] */
    ecx = esi; /* 0x100785C5: mov ecx, esi */
    RECOMP_CALL(sub_1007913B); /* 0x100785C7: call 0x1007913b */
    RECOMP_FLAGS_IN();
L_100785CC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100785CC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test LO8(ebx), LO8(ebx) */ /* 0x100785CE: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    esi = POP32_VAL(esp); /* 0x100785D0: pop esi */
    SET_LO8(eax, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x100785D1: sete al */
    ebx = POP32_VAL(esp); /* 0x100785D4: pop ebx */
    ecx = POP32_VAL(esp); /* 0x100785D5: pop ecx */
    ebp = POP32_VAL(esp); /* 0x100785D6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x100785D7: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_100785DA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100785DAu);

L_100785DA:
    PUSH32(esp, 0x14u); /* 0x100785DA: push 0x14 */
    eax = 0x100DC044u; /* 0x100785DC: mov eax, 0x100dc044 */
    RECOMP_CALL(sub_100149A4); /* 0x100785E1: call 0x100149a4 */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x100785E6: mov edi, ecx */
    MEM32(ebp + (-0x10)) = edi; /* 0x100785E8: mov dword ptr [ebp - 0x10], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x100785EB: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x100785ED: mov dword ptr [ebp - 4], ebx */
    RECOMP_CALL(sub_1007886A); /* 0x100785F0: call 0x1007886a */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x100785F5: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10078621; /* 0x100785F7: jne 0x10078621 */
L_100785F9:
    PUSH32(esp, ebx); /* 0x100785F9: push ebx */
    RECOMP_CALL(sub_10078582); /* 0x100785FA: call 0x10078582 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (LO8(eax)) != 0;
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax))); /* 0x100785FF: neg al */
    _flag_k = FK_NARROW(FK_CMP, 24);
    { uint32_t _sa = LO8(eax), _sb = LO8(eax), _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x10078601: sbb al, al */
      SET_LO8(eax, _sc ? 0xFFFFFFFFu : 0);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(eax, LO8(eax) + 1); /* 0x10078603: inc al */
    _flag_k = FK_NARROW(FK_INC, 24);
    SET_LO8(ebx, LO8(eax)); /* 0x10078605: mov bl, al */
    /* cmp MEM32(edi + 0x64), edi */ /* 0x10078607: cmp dword ptr [edi + 0x64], edi */
    _flag_a = (uint32_t)(MEM32(edi + 0x64)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10078621; /* 0x1007860A: jne 0x10078621 */
L_1007860C:
    ecx = MEM32(edi + 0x68); /* 0x1007860C: mov ecx, dword ptr [edi + 0x68] */
    /* test ecx, ecx */ /* 0x1007860F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10078621; /* 0x10078611: je 0x10078621 */
L_10078613:
    esi = MEM32(ecx + 0x68); /* 0x10078613: mov esi, dword ptr [ecx + 0x68] */
    RECOMP_CALL(sub_10078792); /* 0x10078616: call 0x10078792 */
    RECOMP_FLAGS_IN();
    ecx = esi; /* 0x1007861B: mov ecx, esi */
    /* test esi, esi */ /* 0x1007861D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10078613; /* 0x1007861F: jne 0x10078613 */
L_10078621:
    esi = MEM32(edi + 0x6C); /* 0x10078621: mov esi, dword ptr [edi + 0x6c] */
    /* test esi, esi */ /* 0x10078624: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007863E; /* 0x10078626: je 0x1007863e */
L_10078628:
    /* cmp MEM32(esi + 0x8), 0 */ /* 0x10078628: cmp dword ptr [esi + 8], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10078637; /* 0x1007862C: je 0x10078637 */
L_1007862E:
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x1007862E: push dword ptr [esi + 8] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10078631: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10078636: pop ecx */
L_10078637:
    PUSH32(esp, esi); /* 0x10078637: push esi */
    RECOMP_CALL(sub_1000ECE0); /* 0x10078638: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007863D: pop ecx */
L_1007863E:
    esi = MEM32(edi + 0x18); /* 0x1007863E: mov esi, dword ptr [edi + 0x18] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFCu);
    esi = esi & 0xFFFFFFFCu; /* 0x10078641: and esi, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10078659; /* 0x10078644: je 0x10078659 */
L_10078646:
    /* cmp esi, 0xCu */ /* 0x10078646: cmp esi, 0xc */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10078659; /* 0x10078649: je 0x10078659 */
L_1007864B:
    PUSH32(esp, esi); /* 0x1007864B: push esi */
    RECOMP_CALL(sub_1007B99C); /* 0x1007864C: call 0x1007b99c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10078651: pop ecx */
    PUSH32(esp, esi); /* 0x10078652: push esi */
    RECOMP_CALL(sub_1000ECE0); /* 0x10078653: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10078658: pop ecx */
L_10078659:
    ecx = MEM32(edi + 0x8); /* 0x10078659: mov ecx, dword ptr [edi + 8] */
    /* test ecx, ecx */ /* 0x1007865C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007866A; /* 0x1007865E: je 0x1007866a */
L_10078660:
    /* cmp ecx, 2 */ /* 0x10078660: cmp ecx, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007866A; /* 0x10078663: je 0x1007866a */
L_10078665:
    RECOMP_CALL(sub_10068B23); /* 0x10078665: call 0x10068b23 */
    RECOMP_FLAGS_IN();
L_1007866A:
    /* test LO8(ebx), LO8(ebx) */ /* 0x1007866A: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007868B; /* 0x1007866C: je 0x1007868b */
L_1007866E:
    ecx = ebp + (-0x1C); /* 0x1007866E: lea ecx, [ebp - 0x1c] */
    RECOMP_CALL(sub_1009DD55); /* 0x10078671: call 0x1009dd55 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x100DCE94u); /* 0x10078676: push 0x100dce94 */
    eax = ebp + (-0x1C); /* 0x1007867B: lea eax, [ebp - 0x1c] */
    MEM32(ebp + (-0x1C)) = 0x10067444u; /* 0x1007867E: mov dword ptr [ebp - 0x1c], 0x10067444 */
    PUSH32(esp, eax); /* 0x10078685: push eax */
    RECOMP_CALL(sub_100192EB); /* 0x10078686: call 0x100192eb */
    RECOMP_FLAGS_IN();
L_1007868B:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1007868B: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edi + 0x3C; /* 0x1007868F: lea ecx, [edi + 0x3c] */
    RECOMP_CALL(sub_1006B745); /* 0x10078692: call 0x1006b745 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_100149D7); /* 0x10078697: call 0x100149d7 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007869C: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007869D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007869Du);

L_1007869D:
    PUSH32(esp, 4); /* 0x1007869D: push 4 */
    eax = 0x100DBFF0u; /* 0x1007869F: mov eax, 0x100dbff0 */
    RECOMP_CALL(sub_100149A4); /* 0x100786A4: call 0x100149a4 */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x100786A9: mov edi, ecx */
    MEM32(ebp + (-0x10)) = edi; /* 0x100786AB: mov dword ptr [ebp - 0x10], edi */
    _flag_a = (uint32_t)((MEM32(edi + 0x4) | 0x0FFFFFFFu)); _flag_b = (uint32_t)((MEM32(edi + 0x4) | 0x0FFFFFFFu));
    MEM32(edi + 0x4) = MEM32(edi + 0x4) | 0x0FFFFFFFu; /* 0x100786AE: or dword ptr [edi + 4], 0xfffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edi + 0x3C; /* 0x100786B5: lea ecx, [edi + 0x3c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x100786B8: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x8) = esi; /* 0x100786BA: mov dword ptr [edi + 8], esi */
    MEM32(edi + 0x10) = esi; /* 0x100786BD: mov dword ptr [edi + 0x10], esi */
    MEM32(edi + 0x14) = 0x80000000u; /* 0x100786C0: mov dword ptr [edi + 0x14], 0x80000000 */
    MEM32(edi + 0x18) = esi; /* 0x100786C7: mov dword ptr [edi + 0x18], esi */
    MEM32(edi + 0x38) = esi; /* 0x100786CA: mov dword ptr [edi + 0x38], esi */
    RECOMP_CALL(sub_1006B72C); /* 0x100786CD: call 0x1006b72c */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = esi; /* 0x100786D2: mov dword ptr [ebp - 4], esi */
    esi = MEM32(ebp + 0x8); /* 0x100786D5: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi + 0x64); /* 0x100786D8: mov eax, dword ptr [esi + 0x64] */
    MEM32(edi + 0x64) = eax; /* 0x100786DB: mov dword ptr [edi + 0x64], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100786DE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x6C) = eax; /* 0x100786E0: mov dword ptr [edi + 0x6c], eax */
    MEM32(edi + 0x78) = eax; /* 0x100786E3: mov dword ptr [edi + 0x78], eax */
    MEM32(edi + 0x84) = eax; /* 0x100786E6: mov dword ptr [edi + 0x84], eax */
    MEM32(edi + 0x88) = eax; /* 0x100786EC: mov dword ptr [edi + 0x88], eax */
    RECOMP_CALL(sub_10014872); /* 0x100786F2: call 0x10014872 */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0xC) = eax; /* 0x100786F7: mov dword ptr [edi + 0xc], eax */
    eax = MEM32(eax + 0x34); /* 0x100786FA: mov eax, dword ptr [eax + 0x34] */
    MEM32(edi) = eax; /* 0x100786FD: mov dword ptr [edi], eax */
    eax = MEM32(esi + 0x8); /* 0x100786FF: mov eax, dword ptr [esi + 8] */
    MEM32(edi + 0x8) = eax; /* 0x10078702: mov dword ptr [edi + 8], eax */
    /* test eax, eax */ /* 0x10078705: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10078718; /* 0x10078707: je 0x10078718 */
L_10078709:
    /* cmp eax, 2 */ /* 0x10078709: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10078718; /* 0x1007870C: je 0x10078718 */
L_1007870E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1007870E: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x10078710: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x10078713: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + edx; edx = _old; MEM32(eax) = _sum; } /* 0x10078714: lock xadd dword ptr [eax], edx */
    _flag_k = FK_ADD;
L_10078718:
    ecx = edi; /* 0x10078718: mov ecx, edi */
    RECOMP_CALL(sub_10079498); /* 0x1007871A: call 0x10079498 */
    RECOMP_FLAGS_IN();
    ecx = edi + 0x3C; /* 0x1007871F: lea ecx, [edi + 0x3c] */
    RECOMP_CALL(sub_1006B922); /* 0x10078722: call 0x1006b922 */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(ebp + 0xC), 0 */ /* 0x10078727: cmp byte ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10078759; /* 0x1007872B: je 0x10078759 */
L_1007872D:
    edx = MEM32(edi + 0x64); /* 0x1007872D: mov edx, dword ptr [edi + 0x64] */
    ecx = edi; /* 0x10078730: mov ecx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x68u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x68u; /* 0x10078732: add edx, 0x68 */
    _flag_k = FK_ADD;
    esi = MEM32(edx); /* 0x10078735: mov esi, dword ptr [edx] */
    eax = esi; /* 0x10078737: mov eax, esi */
    MEM32(edi + 0x68) = esi; /* 0x10078739: mov dword ptr [edi + 0x68], esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(edx); if (eax == _d) { MEM32(edx) = ecx; } else { eax = _d; } } /* 0x1007873C: lock cmpxchg dword ptr [edx], ecx */
    _flag_k = FK_CMP;
    goto L_10078753; /* 0x10078740: jmp 0x10078753 */
L_10078742:
    MEM32(edi + 0x68) = eax; /* 0x10078742: mov dword ptr [edi + 0x68], eax */
    esi = eax; /* 0x10078745: mov esi, eax */
    ecx = MEM32(edi + 0x64); /* 0x10078747: mov ecx, dword ptr [edi + 0x64] */
    edx = edi; /* 0x1007874A: mov edx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x68u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x68u; /* 0x1007874C: add ecx, 0x68 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(ecx); if (eax == _d) { MEM32(ecx) = edx; } else { eax = _d; } } /* 0x1007874F: lock cmpxchg dword ptr [ecx], edx */
    _flag_k = FK_CMP;
L_10078753:
    /* cmp eax, esi */ /* 0x10078753: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10078761; /* 0x10078755: je 0x10078761 */
L_10078757:
    RECOMP_BACKEDGE();
    goto L_10078742; /* 0x10078757: jmp 0x10078742 */
L_10078759:
    _flag_a = (uint32_t)((MEM32(edi + 0x78) | 1)); _flag_b = (uint32_t)((MEM32(edi + 0x78) | 1));
    MEM32(edi + 0x78) = MEM32(edi + 0x78) | 1; /* 0x10078759: or dword ptr [edi + 0x78], 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(edi + 0x68)); _flag_b = (uint32_t)(0);
    MEM32(edi + 0x68) = MEM32(edi + 0x68) & 0; /* 0x1007875D: and dword ptr [edi + 0x68], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_10078761:
    RECOMP_CALL(sub_10023AF4); /* 0x10078761: call 0x10023af4 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x10078766: mov esi, eax */
    /* cmp MEM32(esi + 0x20), 0 */ /* 0x10078768: cmp dword ptr [esi + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10078775; /* 0x1007876C: jne 0x10078775 */
L_1007876E:
    ecx = esi; /* 0x1007876E: mov ecx, esi */
    RECOMP_CALL(sub_1006A0F6); /* 0x10078770: call 0x1006a0f6 */
    RECOMP_FLAGS_IN();
L_10078775:
    eax = MEM32(esi + 0x20); /* 0x10078775: mov eax, dword ptr [esi + 0x20] */
    eax = MEM32(eax + 0x40); /* 0x10078778: mov eax, dword ptr [eax + 0x40] */
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(0x0FFFFFFFu);
    MEM32(edi + 0x4) = MEM32(edi + 0x4) & 0x0FFFFFFFu; /* 0x1007877B: and dword ptr [edi + 4], 0xfffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x80) = eax; /* 0x10078782: mov dword ptr [edi + 0x80], eax */
    eax = edi; /* 0x10078788: mov eax, edi */
    RECOMP_CALL(sub_100149D7); /* 0x1007878A: call 0x100149d7 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1007878F: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_10078792(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10078792u);

L_10078792:
    PUSH32(esp, ebp); /* 0x10078792: push ebp */
    ebp = esp; /* 0x10078793: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x10078795: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x10078798: push esi */
    esi = ecx; /* 0x10078799: mov esi, ecx */
    PUSH32(esp, edi); /* 0x1007879B: push edi */
    edi = esi + 0x78; /* 0x1007879C: lea edi, [esi + 0x78] */
    ecx = MEM32(edi); /* 0x1007879F: mov ecx, dword ptr [edi] */
    /* test LO8(ecx), 2 */ /* 0x100787A1: test cl, 2 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100787BB; /* 0x100787A4: jne 0x100787bb */
L_100787A6:
    edx = ecx; /* 0x100787A6: mov edx, ecx */
    eax = ecx; /* 0x100787A8: mov eax, ecx */
    _flag_a = (uint32_t)((edx | 2)); _flag_b = (uint32_t)((edx | 2));
    edx = edx | 2; /* 0x100787AA: or edx, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(edi); if (eax == _d) { MEM32(edi) = edx; } else { eax = _d; } } /* 0x100787AD: lock cmpxchg dword ptr [edi], edx */
    _flag_k = FK_CMP;
    /* cmp eax, ecx */ /* 0x100787B1: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100787C9; /* 0x100787B3: je 0x100787c9 */
L_100787B5:
    ecx = eax; /* 0x100787B5: mov ecx, eax */
    /* test LO8(eax), 2 */ /* 0x100787B7: test al, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100787A6; /* 0x100787B9: je 0x100787a6 */
L_100787BB:
    ecx = esi; /* 0x100787BB: mov ecx, esi */
    RECOMP_CALL(sub_100785DA); /* 0x100787BD: call 0x100785da */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x100787C2: push esi */
    RECOMP_CALL(sub_1000ECE0); /* 0x100787C3: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100787C8: pop ecx */
L_100787C9:
    edi = POP32_VAL(esp); /* 0x100787C9: pop edi */
    esi = POP32_VAL(esp); /* 0x100787CA: pop esi */
    esp = ebp; /* 0x100787CB: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100787CD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100787CE: ret  */
    RECOMP_REGS_OUT();
}

void sub_100787CF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100787CFu);

L_100787CF:
    PUSH32(esp, 4); /* 0x100787CF: push 4 */
    eax = 0x100DADF8u; /* 0x100787D1: mov eax, 0x100dadf8 */
    RECOMP_CALL(sub_100149A4); /* 0x100787D6: call 0x100149a4 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x100787DB: mov esi, ecx */
    RECOMP_CALL(sub_10014872); /* 0x100787DD: call 0x10014872 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x100787E2: mov edi, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x100787E4: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi + 0x20), ebx */ /* 0x100787E6: cmp dword ptr [edi + 0x20], ebx */
    _flag_a = (uint32_t)(MEM32(edi + 0x20)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100787F2; /* 0x100787E9: jne 0x100787f2 */
L_100787EB:
    ecx = edi; /* 0x100787EB: mov ecx, edi */
    RECOMP_CALL(sub_1006A0F6); /* 0x100787ED: call 0x1006a0f6 */
    RECOMP_FLAGS_IN();
L_100787F2:
    eax = MEM32(edi + 0x20); /* 0x100787F2: mov eax, dword ptr [edi + 0x20] */
    eax = MEM32(eax + 0x40); /* 0x100787F5: mov eax, dword ptr [eax + 0x40] */
    /* cmp edi, MEM32(esi + 0xC) */ /* 0x100787F8: cmp edi, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10078809; /* 0x100787FB: jne 0x10078809 */
L_100787FD:
    /* cmp eax, MEM32(esi + 0x80) */ /* 0x100787FD: cmp eax, dword ptr [esi + 0x80] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x80));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10078809; /* 0x10078803: jne 0x10078809 */
L_10078805:
    eax = esi; /* 0x10078805: mov eax, esi */
    goto L_10078851; /* 0x10078807: jmp 0x10078851 */
L_10078809:
    eax = MEM32(edi + 0x7C); /* 0x10078809: mov eax, dword ptr [edi + 0x7c] */
    /* test eax, eax */ /* 0x1007880C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10078815; /* 0x1007880E: je 0x10078815 */
L_10078810:
    /* cmp MEM32(eax + 0x64), esi */ /* 0x10078810: cmp dword ptr [eax + 0x64], esi */
    _flag_a = (uint32_t)(MEM32(eax + 0x64)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10078851; /* 0x10078813: je 0x10078851 */
L_10078815:
    PUSH32(esp, esi); /* 0x10078815: push esi */
    ecx = edi; /* 0x10078816: mov ecx, edi */
    RECOMP_CALL(sub_10077B47); /* 0x10078818: call 0x10077b47 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1007881D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10078851; /* 0x1007881F: jne 0x10078851 */
L_10078821:
    PUSH32(esp, 0x90u); /* 0x10078821: push 0x90 */
    RECOMP_CALL(sub_1000EE11); /* 0x10078826: call 0x1000ee11 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007882B: pop ecx */
    MEM32(ebp + (-0x10)) = eax; /* 0x1007882C: mov dword ptr [ebp - 0x10], eax */
    MEM32(ebp + (-0x4)) = ebx; /* 0x1007882F: mov dword ptr [ebp - 4], ebx */
    /* test eax, eax */ /* 0x10078832: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10078842; /* 0x10078834: je 0x10078842 */
L_10078836:
    PUSH32(esp, 1); /* 0x10078836: push 1 */
    PUSH32(esp, esi); /* 0x10078838: push esi */
    ecx = eax; /* 0x10078839: mov ecx, eax */
    RECOMP_CALL(sub_1007869D); /* 0x1007883B: call 0x1007869d */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x10078840: mov ebx, eax */
L_10078842:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x10078842: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edi; /* 0x10078846: mov ecx, edi */
    PUSH32(esp, ebx); /* 0x10078848: push ebx */
    PUSH32(esp, esi); /* 0x10078849: push esi */
    RECOMP_CALL(sub_10077BA7); /* 0x1007884A: call 0x10077ba7 */
    RECOMP_FLAGS_IN();
    eax = ebx; /* 0x1007884F: mov eax, ebx */
L_10078851:
    RECOMP_CALL(sub_100149D7); /* 0x10078851: call 0x100149d7 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10078856: ret  */
    RECOMP_REGS_OUT();
}

void sub_10078857(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10078857u);

L_10078857:
    /* cmp MEM32(ecx + 0x64), ecx */ /* 0x10078857: cmp dword ptr [ecx + 0x64], ecx */
    _flag_a = (uint32_t)(MEM32(ecx + 0x64)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10078867; /* 0x1007885A: je 0x10078867 */
L_1007885C:
    eax = MEM32(ecx + 0x78); /* 0x1007885C: mov eax, dword ptr [ecx + 0x78] */
    /* test LO8(eax), 1 */ /* 0x1007885F: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10078867; /* 0x10078861: je 0x10078867 */
L_10078863:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10078863: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10078865: inc eax */
    _flag_k = FK_INC;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10078866: ret  */
L_10078867:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10078867: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10078869: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007886A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007886Au);

L_1007886A:
    /* cmp MEM32(ecx + 0x64), ecx */ /* 0x1007886A: cmp dword ptr [ecx + 0x64], ecx */
    _flag_a = (uint32_t)(MEM32(ecx + 0x64)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007887A; /* 0x1007886D: je 0x1007887a */
L_1007886F:
    eax = MEM32(ecx + 0x78); /* 0x1007886F: mov eax, dword ptr [ecx + 0x78] */
    /* test LO8(eax), 1 */ /* 0x10078872: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007887A; /* 0x10078874: jne 0x1007887a */
L_10078876:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10078876: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10078878: inc eax */
    _flag_k = FK_INC;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10078879: ret  */
L_1007887A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007887A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007887C: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007887D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007887Du);

    goto L_1007887D;
L_1006B8C2:
    PUSH32(esp, 0x20u); /* 0x1006B8C2: push 0x20 */
    eax = 0x100DAF90u; /* 0x1006B8C4: mov eax, 0x100daf90 */
    RECOMP_CALL(sub_100149A4); /* 0x1006B8C9: call 0x100149a4 */
    RECOMP_FLAGS_IN();
    ebx = ecx; /* 0x1006B8CE: mov ebx, ecx */
    eax = ebx + 0x8; /* 0x1006B8D0: lea eax, [ebx + 8] */
    PUSH32(esp, eax); /* 0x1006B8D3: push eax */
    ecx = ebp + (-0x2C); /* 0x1006B8D4: lea ecx, [ebp - 0x2c] */
    RECOMP_CALL(sub_1006F6A1); /* 0x1006B8D7: call 0x1006f6a1 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1006B8DC: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = edi; /* 0x1006B8DE: mov dword ptr [ebp - 4], edi */
    /* cmp MEM32(ebx), 1 */ /* 0x1006B8E1: cmp dword ptr [ebx], 1 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1006B910; /* 0x1006B8E4: jne 0x1006b910 */
L_1006B8E6:
    esi = MEM32(ebx + 0x4); /* 0x1006B8E6: mov esi, dword ptr [ebx + 4] */
    MEM32(ebx + 0x4) = edi; /* 0x1006B8E9: mov dword ptr [ebx + 4], edi */
    /* test esi, esi */ /* 0x1006B8EC: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006B90E; /* 0x1006B8EE: je 0x1006b90e */
L_1006B8F0:
    ecx = MEM32(esi + 0x4); /* 0x1006B8F0: mov ecx, dword ptr [esi + 4] */
    eax = MEM32(esi); /* 0x1006B8F3: mov eax, dword ptr [esi] */
    MEM32(ebp + (-0x10)) = eax; /* 0x1006B8F5: mov dword ptr [ebp - 0x10], eax */
    eax = MEM32(ecx); /* 0x1006B8F8: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1006B8FA: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1006B8FD: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006B905; /* 0x1006B8FF: je 0x1006b905 */
L_1006B901:
    MEM32(esi) = edi; /* 0x1006B901: mov dword ptr [esi], edi */
    edi = esi; /* 0x1006B903: mov edi, esi */
L_1006B905:
    eax = MEM32(ebp + (-0x10)); /* 0x1006B905: mov eax, dword ptr [ebp - 0x10] */
    esi = eax; /* 0x1006B908: mov esi, eax */
    /* test eax, eax */ /* 0x1006B90A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006B8F0; /* 0x1006B90C: jne 0x1006b8f0 */
L_1006B90E:
    MEM32(ebx) = edi; /* 0x1006B90E: mov dword ptr [ebx], edi */
L_1006B910:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1006B910: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x2C)); /* 0x1006B914: mov ecx, dword ptr [ebp - 0x2c] */
    RECOMP_CALL(sub_1006F4D7); /* 0x1006B917: call 0x1006f4d7 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_100149D7); /* 0x1006B91C: call 0x100149d7 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006B921: ret  */
L_1007887D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1007887D: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx + 0x10; /* 0x1007887F: lea eax, [ecx + 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x10078882: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + edx; edx = _old; MEM32(eax) = _sum; } /* 0x10078883: lock xadd dword ptr [eax], edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x10078887: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, 1 */ /* 0x10078888: cmp edx, 1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100788A2; /* 0x1007888B: jne 0x100788a2 */
L_1007888D:
    PUSH32(esp, esi); /* 0x1007888D: push esi */
    esi = ecx + 0x3C; /* 0x1007888E: lea esi, [ecx + 0x3c] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x10078891: push -1 */
    ecx = esi; /* 0x10078893: mov ecx, esi */
    RECOMP_CALL(sub_1006B7A0); /* 0x10078895: call 0x1006b7a0 */
    RECOMP_FLAGS_IN();
    ecx = esi; /* 0x1007889A: mov ecx, esi */
    esi = POP32_VAL(esp); /* 0x1007889C: pop esi */
    RECOMP_BACKEDGE();
    goto L_1006B8C2; /* 0x1007889D: jmp 0x1006b8c2 */
L_100788A2:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100788A2: ret  */
    RECOMP_REGS_OUT();
}

void sub_100788A3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100788A3u);

L_100788A3:
    PUSH32(esp, ebp); /* 0x100788A3: push ebp */
    ebp = esp; /* 0x100788A4: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x100788A6: push ebx */
    PUSH32(esp, esi); /* 0x100788A7: push esi */
    esi = ecx; /* 0x100788A8: mov esi, ecx */
    ecx = MEM32(ebp + 0x8); /* 0x100788AA: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x100788AD: push edi */
    SET_LO8(eax, MEM8(ecx + 0x10)); /* 0x100788AE: mov al, byte ptr [ecx + 0x10] */
    /* test LO8(eax), LO8(eax) */ /* 0x100788B1: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100788BB; /* 0x100788B3: je 0x100788bb */
L_100788B5:
    eax = MEM32(ecx); /* 0x100788B5: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x100788B7: push 1 */
    RECOMP_ICALL(MEM32(eax)); /* 0x100788B9: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_100788BB:
    edi = MEM32(esi + 0x88); /* 0x100788BB: mov edi, dword ptr [esi + 0x88] */
    eax = esi + 0x10; /* 0x100788C1: lea eax, [esi + 0x10] */
    ebx = MEM32(esi + 0x8C); /* 0x100788C4: mov ebx, dword ptr [esi + 0x8c] */
    _flag_a = (uint32_t)((ecx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ecx | 0xFFFFFFFFu));
    ecx = ecx | 0xFFFFFFFFu; /* 0x100788CA: or ecx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + ecx; ecx = _old; MEM32(eax) = _sum; } /* 0x100788CD: lock xadd dword ptr [eax], ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x100788D1: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_100788DC; /* 0x100788D2: jne 0x100788dc */
L_100788D4:
    ecx = esi + 0x3C; /* 0x100788D4: lea ecx, [esi + 0x3c] */
    RECOMP_CALL(sub_1006B922); /* 0x100788D7: call 0x1006b922 */
    RECOMP_FLAGS_IN();
L_100788DC:
    /* test edi, edi */ /* 0x100788DC: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100788E4; /* 0x100788DE: je 0x100788e4 */
L_100788E0:
    PUSH32(esp, ebx); /* 0x100788E0: push ebx */
    RECOMP_ICALL(edi); /* 0x100788E1: call edi */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100788E3: pop ecx */
L_100788E4:
    edi = POP32_VAL(esp); /* 0x100788E4: pop edi */
    esi = POP32_VAL(esp); /* 0x100788E5: pop esi */
    ebx = POP32_VAL(esp); /* 0x100788E6: pop ebx */
    ebp = POP32_VAL(esp); /* 0x100788E7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x100788E8: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_100788EB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100788EBu);

L_100788EB:
    PUSH32(esp, 0x20u); /* 0x100788EB: push 0x20 */
    eax = 0x100DC094u; /* 0x100788ED: mov eax, 0x100dc094 */
    RECOMP_CALL(sub_10025BA2); /* 0x100788F2: call 0x10025ba2 */
    RECOMP_FLAGS_IN();
    edx = ecx; /* 0x100788F7: mov edx, ecx */
    MEM32(ebp + (-0x14)) = edx; /* 0x100788F9: mov dword ptr [ebp - 0x14], edx */
    ebx = MEM32(ebp + 0x8); /* 0x100788FC: mov ebx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x100788FF: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebx; /* 0x10078901: mov eax, ebx */
    edi = esi; /* 0x10078903: mov edi, esi */
    /* test ebx, ebx */ /* 0x10078905: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100789DE; /* 0x10078907: je 0x100789de */
L_1007890D:
    eax = MEM32(eax + 0x68); /* 0x1007890D: mov eax, dword ptr [eax + 0x68] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x10078910: inc edi */
    _flag_k = FK_INC;
    /* test eax, eax */ /* 0x10078911: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007890D; /* 0x10078913: jne 0x1007890d */
L_10078915:
    /* test edi, edi */ /* 0x10078915: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100789DE; /* 0x10078917: jle 0x100789de */
L_1007891D:
    MEM32(ebp + (-0x20)) = 0x10067BFCu; /* 0x1007891D: mov dword ptr [ebp - 0x20], 0x10067bfc */
    MEM32(ebp + (-0x1C)) = esi; /* 0x10078924: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x18)) = esi; /* 0x10078927: mov dword ptr [ebp - 0x18], esi */
    ecx = edi * 4 + 0x4; /* 0x1007892A: lea ecx, [edi*4 + 4] */
    MEM32(ebp + (-0x4)) = esi; /* 0x10078931: mov dword ptr [ebp - 4], esi */
    eax = ecx + 0x8; /* 0x10078934: lea eax, [ecx + 8] */
    /* cmp eax, ecx */ /* 0x10078937: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10078975; /* 0x10078939: jbe 0x10078975 */
L_1007893B:
    eax = edi * 4 + 0xC; /* 0x1007893B: lea eax, [edi*4 + 0xc] */
    /* cmp eax, 0x400u */ /* 0x10078942: cmp eax, 0x400 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x400u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1007895C; /* 0x10078947: ja 0x1007895c */
L_10078949:
    RECOMP_CALL(sub_10012BBF); /* 0x10078949: call 0x10012bbf */
    RECOMP_FLAGS_IN();
    esi = esp; /* 0x1007894E: mov esi, esp */
    /* test esi, esi */ /* 0x10078950: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10078972; /* 0x10078952: je 0x10078972 */
L_10078954:
    MEM32(esi) = 0xCCCCu; /* 0x10078954: mov dword ptr [esi], 0xcccc */
    goto L_1007896F; /* 0x1007895A: jmp 0x1007896f */
L_1007895C:
    PUSH32(esp, eax); /* 0x1007895C: push eax */
    RECOMP_CALL(sub_1000ED30); /* 0x1007895D: call 0x1000ed30 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x10078962: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x10078964: pop ecx */
    /* test esi, esi */ /* 0x10078965: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10078972; /* 0x10078967: je 0x10078972 */
L_10078969:
    MEM32(esi) = 0xDDDDu; /* 0x10078969: mov dword ptr [esi], 0xdddd */
L_1007896F:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 8; /* 0x1007896F: add esi, 8 */
    _flag_k = FK_ADD;
L_10078972:
    edx = MEM32(ebp + (-0x14)); /* 0x10078972: mov edx, dword ptr [ebp - 0x14] */
L_10078975:
    /* test esi, esi */ /* 0x10078975: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100789A3; /* 0x10078977: jne 0x100789a3 */
L_10078979:
    PUSH32(esp, 1); /* 0x10078979: push 1 */
    eax = ebp + (-0x14); /* 0x1007897B: lea eax, [ebp - 0x14] */
    MEM32(ebp + (-0x14)) = 0x1002C7ECu; /* 0x1007897E: mov dword ptr [ebp - 0x14], 0x1002c7ec */
    PUSH32(esp, eax); /* 0x10078985: push eax */
    ecx = ebp + (-0x2C); /* 0x10078986: lea ecx, [ebp - 0x2c] */
    RECOMP_CALL(sub_10033A4A); /* 0x10078989: call 0x10033a4a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1002C7FCu); /* 0x1007898E: push 0x1002c7fc */
    eax = ebp + (-0x2C); /* 0x10078993: lea eax, [ebp - 0x2c] */
    MEM32(ebp + (-0x2C)) = 0x1002D1CCu; /* 0x10078996: mov dword ptr [ebp - 0x2c], 0x1002d1cc */
    PUSH32(esp, eax); /* 0x1007899D: push eax */
    RECOMP_CALL(sub_100192EB); /* 0x1007899E: call 0x100192eb */
    RECOMP_FLAGS_IN();
L_100789A3:
    eax = MEM32(edx + 0x64); /* 0x100789A3: mov eax, dword ptr [edx + 0x64] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100789A6: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x18)) = MEM32(ebp + (-0x18)) & 0; /* 0x100789A8: and dword ptr [ebp - 0x18], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x3Cu; /* 0x100789AC: add eax, 0x3c */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100789AF: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x1C)) = esi; /* 0x100789B0: mov dword ptr [ebp - 0x1c], esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x100789B3: inc edi */
    _flag_k = FK_INC;
    MEM32(esi) = eax; /* 0x100789B4: mov dword ptr [esi], eax */
    /* cmp edi, ecx */ /* 0x100789B6: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_100789C8; /* 0x100789B8: jle 0x100789c8 */
L_100789BA:
    eax = ebx + 0x3C; /* 0x100789BA: lea eax, [ebx + 0x3c] */
    MEM32(esi + ecx * 4) = eax; /* 0x100789BD: mov dword ptr [esi + ecx*4], eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100789C0: inc ecx */
    _flag_k = FK_INC;
    ebx = MEM32(ebx + 0x68); /* 0x100789C1: mov ebx, dword ptr [ebx + 0x68] */
    /* cmp ecx, edi */ /* 0x100789C4: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_100789BA; /* 0x100789C6: jl 0x100789ba */
L_100789C8:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x100789C8: push -1 */
    PUSH32(esp, 1); /* 0x100789CA: push 1 */
    PUSH32(esp, edi); /* 0x100789CC: push edi */
    PUSH32(esp, esi); /* 0x100789CD: push esi */
    RECOMP_CALL(sub_1006BA5F); /* 0x100789CE: call 0x1006ba5f */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x100789D3: push esi */
    RECOMP_CALL(sub_10012BD5); /* 0x100789D4: call 0x10012bd5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100789D9: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_100789E8; /* 0x100789DC: jmp 0x100789e8 */
L_100789DE:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x100789DE: push -1 */
    ecx = edx + 0x3C; /* 0x100789E0: lea ecx, [edx + 0x3c] */
    RECOMP_CALL(sub_1006B7A0); /* 0x100789E3: call 0x1006b7a0 */
    RECOMP_FLAGS_IN();
L_100789E8:
    esp = ebp + (-0x3C); /* 0x100789E8: lea esp, [ebp - 0x3c] */
    RECOMP_CALL(sub_10025C1A); /* 0x100789EB: call 0x10025c1a */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x100789F0: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_100789F3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100789F3u);

L_100789F3:
    PUSH32(esp, 0x14u); /* 0x100789F3: push 0x14 */
    eax = 0x100DC0E0u; /* 0x100789F5: mov eax, 0x100dc0e0 */
    RECOMP_CALL(sub_1001FB2C); /* 0x100789FA: call 0x1001fb2c */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x100789FF: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10078A02: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi + 0x8), ebx */ /* 0x10078A04: cmp dword ptr [edi + 8], ebx */
    _flag_a = (uint32_t)(MEM32(edi + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10078A26; /* 0x10078A07: je 0x10078a26 */
L_10078A09:
    ecx = ebp + (-0x20); /* 0x10078A09: lea ecx, [ebp - 0x20] */
    RECOMP_CALL(sub_1009DD55); /* 0x10078A0C: call 0x1009dd55 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x100DD0DCu); /* 0x10078A11: push 0x100dd0dc */
    eax = ebp + (-0x20); /* 0x10078A16: lea eax, [ebp - 0x20] */
    MEM32(ebp + (-0x20)) = 0x100675B4u; /* 0x10078A19: mov dword ptr [ebp - 0x20], 0x100675b4 */
    PUSH32(esp, eax); /* 0x10078A20: push eax */
    RECOMP_CALL(sub_100192EB); /* 0x10078A21: call 0x100192eb */
    RECOMP_FLAGS_IN();
L_10078A26:
    MEM32(ebp + (-0x4)) = ebx; /* 0x10078A26: mov dword ptr [ebp - 4], ebx */
    RECOMP_CALL(sub_100787CF); /* 0x10078A29: call 0x100787cf */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x10078A2E: mov esi, eax */
    MEM32(edi + 0xC) = 0x10069529u; /* 0x10078A30: mov dword ptr [edi + 0xc], 0x10069529 */
    MEM32(edi + 0x8) = esi; /* 0x10078A37: mov dword ptr [edi + 8], esi */
    ecx = MEM32(esi + 0x84); /* 0x10078A3A: mov ecx, dword ptr [esi + 0x84] */
    MEM32(ebp + (-0x14)) = ecx; /* 0x10078A40: mov dword ptr [ebp - 0x14], ecx */
    eax = ecx + 0x1; /* 0x10078A43: lea eax, [ecx + 1] */
    MEM32(esi + 0x84) = eax; /* 0x10078A46: mov dword ptr [esi + 0x84], eax */
    /* cmp ecx, 2 */ /* 0x10078A4C: cmp ecx, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_10078AAB; /* 0x10078A4F: jb 0x10078aab */
L_10078A51:
    edi = MEM32(esi + 0x6C); /* 0x10078A51: mov edi, dword ptr [esi + 0x6c] */
    /* test edi, edi */ /* 0x10078A54: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10078A78; /* 0x10078A56: jne 0x10078a78 */
L_10078A58:
    PUSH32(esp, 0x10u); /* 0x10078A58: push 0x10 */
    RECOMP_CALL(sub_1000EE11); /* 0x10078A5A: call 0x1000ee11 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x10078A5F: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x10078A61: pop ecx */
    /* test edi, edi */ /* 0x10078A62: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10078A73; /* 0x10078A64: je 0x10078a73 */
L_10078A66:
    MEM32(edi) = ebx; /* 0x10078A66: mov dword ptr [edi], ebx */
    MEM32(edi + 0x4) = ebx; /* 0x10078A68: mov dword ptr [edi + 4], ebx */
    MEM32(edi + 0x8) = ebx; /* 0x10078A6B: mov dword ptr [edi + 8], ebx */
    MEM8(edi + 0xC) = (uint8_t)(LO8(ebx)); /* 0x10078A6E: mov byte ptr [edi + 0xc], bl */
    goto L_10078A75; /* 0x10078A71: jmp 0x10078a75 */
L_10078A73:
    edi = ebx; /* 0x10078A73: mov edi, ebx */
L_10078A75:
    MEM32(esi + 0x6C) = edi; /* 0x10078A75: mov dword ptr [esi + 0x6c], edi */
L_10078A78:
    ecx = esi; /* 0x10078A78: mov ecx, esi */
    RECOMP_CALL(sub_1007887D); /* 0x10078A7A: call 0x1007887d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10078A7F: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10078A82: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10023AF4); /* 0x10078A85: call 0x10023af4 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x10078A8A: mov ecx, eax */
    RECOMP_CALL(sub_10069E5E); /* 0x10078A8C: call 0x10069e5e */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x10078A91: push eax */
    ecx = edi; /* 0x10078A92: mov ecx, edi */
    RECOMP_CALL(sub_10077C67); /* 0x10078A94: call 0x10077c67 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x10078A99: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10078AA3; /* 0x10078A9B: jne 0x10078aa3 */
L_10078A9D:
    _flag_a = (uint32_t)(MEM32(esi + 0x84)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x84) = MEM32(esi + 0x84) - 1; /* 0x10078A9D: dec dword ptr [esi + 0x84] */
    _flag_k = FK_DEC;
L_10078AA3:
    RECOMP_CALL(sub_100149D7); /* 0x10078AA3: call 0x100149d7 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x10078AA8: ret 8 */
L_10078AAB:
    ecx = esi; /* 0x10078AAB: mov ecx, esi */
    RECOMP_CALL(sub_1007887D); /* 0x10078AAD: call 0x1007887d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10078AB2: push dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x10078AB5: push edi */
    RECOMP_CALL(sub_10023AF4); /* 0x10078AB6: call 0x10023af4 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x10078ABB: mov ecx, eax */
    RECOMP_CALL(sub_10069E5E); /* 0x10078ABD: call 0x10069e5e */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x10078AC2: mov ecx, eax */
    eax = MEM32(ebp + (-0x14)); /* 0x10078AC4: mov eax, dword ptr [ebp - 0x14] */
    MEM32(esi + eax * 4 + 0x70) = ecx; /* 0x10078AC7: mov dword ptr [esi + eax*4 + 0x70], ecx */
    RECOMP_BACKEDGE();
    goto L_10078AA3; /* 0x10078ACB: jmp 0x10078aa3 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10078AE6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10078AE6u);

L_10078AE6:
    PUSH32(esp, 0x14u); /* 0x10078AE6: push 0x14 */
    eax = 0x100DC120u; /* 0x10078AE8: mov eax, 0x100dc120 */
    RECOMP_CALL(sub_1001FB2C); /* 0x10078AED: call 0x1001fb2c */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x10078AF2: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10078AF5: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi + 0x8), ebx */ /* 0x10078AF7: cmp dword ptr [edi + 8], ebx */
    _flag_a = (uint32_t)(MEM32(edi + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10078B19; /* 0x10078AFA: je 0x10078b19 */
L_10078AFC:
    ecx = ebp + (-0x20); /* 0x10078AFC: lea ecx, [ebp - 0x20] */
    RECOMP_CALL(sub_1009DD55); /* 0x10078AFF: call 0x1009dd55 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x100DD0DCu); /* 0x10078B04: push 0x100dd0dc */
    eax = ebp + (-0x20); /* 0x10078B09: lea eax, [ebp - 0x20] */
    MEM32(ebp + (-0x20)) = 0x100675B4u; /* 0x10078B0C: mov dword ptr [ebp - 0x20], 0x100675b4 */
    PUSH32(esp, eax); /* 0x10078B13: push eax */
    RECOMP_CALL(sub_100192EB); /* 0x10078B14: call 0x100192eb */
    RECOMP_FLAGS_IN();
L_10078B19:
    MEM32(ebp + (-0x4)) = ebx; /* 0x10078B19: mov dword ptr [ebp - 4], ebx */
    RECOMP_CALL(sub_100787CF); /* 0x10078B1C: call 0x100787cf */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x10078B21: mov esi, eax */
    MEM32(edi + 0xC) = 0x10069529u; /* 0x10078B23: mov dword ptr [edi + 0xc], 0x10069529 */
    MEM32(edi + 0x8) = esi; /* 0x10078B2A: mov dword ptr [edi + 8], esi */
    ecx = MEM32(esi + 0x84); /* 0x10078B2D: mov ecx, dword ptr [esi + 0x84] */
    MEM32(ebp + (-0x14)) = ecx; /* 0x10078B33: mov dword ptr [ebp - 0x14], ecx */
    eax = ecx + 0x1; /* 0x10078B36: lea eax, [ecx + 1] */
    MEM32(esi + 0x84) = eax; /* 0x10078B39: mov dword ptr [esi + 0x84], eax */
    /* cmp ecx, 2 */ /* 0x10078B3F: cmp ecx, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_10078B9B; /* 0x10078B42: jb 0x10078b9b */
L_10078B44:
    edi = MEM32(esi + 0x6C); /* 0x10078B44: mov edi, dword ptr [esi + 0x6c] */
    /* test edi, edi */ /* 0x10078B47: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10078B6B; /* 0x10078B49: jne 0x10078b6b */
L_10078B4B:
    PUSH32(esp, 0x10u); /* 0x10078B4B: push 0x10 */
    RECOMP_CALL(sub_1000EE11); /* 0x10078B4D: call 0x1000ee11 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x10078B52: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x10078B54: pop ecx */
    /* test edi, edi */ /* 0x10078B55: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10078B66; /* 0x10078B57: je 0x10078b66 */
L_10078B59:
    MEM32(edi) = ebx; /* 0x10078B59: mov dword ptr [edi], ebx */
    MEM32(edi + 0x4) = ebx; /* 0x10078B5B: mov dword ptr [edi + 4], ebx */
    MEM32(edi + 0x8) = ebx; /* 0x10078B5E: mov dword ptr [edi + 8], ebx */
    MEM8(edi + 0xC) = (uint8_t)(LO8(ebx)); /* 0x10078B61: mov byte ptr [edi + 0xc], bl */
    goto L_10078B68; /* 0x10078B64: jmp 0x10078b68 */
L_10078B66:
    edi = ebx; /* 0x10078B66: mov edi, ebx */
L_10078B68:
    MEM32(esi + 0x6C) = edi; /* 0x10078B68: mov dword ptr [esi + 0x6c], edi */
L_10078B6B:
    ecx = esi; /* 0x10078B6B: mov ecx, esi */
    RECOMP_CALL(sub_1007887D); /* 0x10078B6D: call 0x1007887d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10078B72: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10023AF4); /* 0x10078B75: call 0x10023af4 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x10078B7A: mov ecx, eax */
    RECOMP_CALL(sub_10069FA4); /* 0x10078B7C: call 0x10069fa4 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x10078B81: push eax */
    ecx = edi; /* 0x10078B82: mov ecx, edi */
    RECOMP_CALL(sub_10077C67); /* 0x10078B84: call 0x10077c67 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x10078B89: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10078B93; /* 0x10078B8B: jne 0x10078b93 */
L_10078B8D:
    _flag_a = (uint32_t)(MEM32(esi + 0x84)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x84) = MEM32(esi + 0x84) - 1; /* 0x10078B8D: dec dword ptr [esi + 0x84] */
    _flag_k = FK_DEC;
L_10078B93:
    RECOMP_CALL(sub_100149D7); /* 0x10078B93: call 0x100149d7 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10078B98: ret 4 */
L_10078B9B:
    ecx = esi; /* 0x10078B9B: mov ecx, esi */
    RECOMP_CALL(sub_1007887D); /* 0x10078B9D: call 0x1007887d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x10078BA2: push edi */
    RECOMP_CALL(sub_10023AF4); /* 0x10078BA3: call 0x10023af4 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x10078BA8: mov ecx, eax */
    RECOMP_CALL(sub_10069FA4); /* 0x10078BAA: call 0x10069fa4 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x10078BAF: mov ecx, eax */
    eax = MEM32(ebp + (-0x14)); /* 0x10078BB1: mov eax, dword ptr [ebp - 0x14] */
    MEM32(esi + eax * 4 + 0x70) = ecx; /* 0x10078BB4: mov dword ptr [esi + eax*4 + 0x70], ecx */
    RECOMP_BACKEDGE();
    goto L_10078B93; /* 0x10078BB8: jmp 0x10078b93 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10078BD3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10078BD3u);

L_10078BD3:
    PUSH32(esp, ebp); /* 0x10078BD3: push ebp */
    ebp = esp; /* 0x10078BD4: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x10078BD6: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2Cu; /* 0x10078BD9: sub esp, 0x2c */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x10078BDC: push ebx */
    PUSH32(esp, esi); /* 0x10078BDD: push esi */
    PUSH32(esp, edi); /* 0x10078BDE: push edi */
    edi = MEM32(ebp + 0x8); /* 0x10078BDF: mov edi, dword ptr [ebp + 8] */
    esi = ecx; /* 0x10078BE2: mov esi, ecx */
L_10078BE4:
    RECOMP_CALL(sub_10023AF4); /* 0x10078BE4: call 0x10023af4 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0xC); /* 0x10078BE9: mov ecx, dword ptr [esi + 0xc] */
    ebx = esi + 0x38; /* 0x10078BEC: lea ebx, [esi + 0x38] */
    MEM32(esp + 0x10) = eax; /* 0x10078BEF: mov dword ptr [esp + 0x10], eax */
    MEM32(esp + 0x14) = ecx; /* 0x10078BF3: mov dword ptr [esp + 0x14], ecx */
L_10078BF7:
    edx = MEM32(ebx); /* 0x10078BF7: mov edx, dword ptr [ebx] */
L_10078BF9:
    /* cmp edx, 9 */ /* 0x10078BF9: cmp edx, 9 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10078C27; /* 0x10078BFC: jne 0x10078c27 */
L_10078BFE:
    _flag_a = (uint32_t)(MEM32(esp + 0x20)); _flag_b = (uint32_t)(0);
    MEM32(esp + 0x20) = MEM32(esp + 0x20) & 0; /* 0x10078BFE: and dword ptr [esp + 0x20], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x24) = 0x1007A46Cu; /* 0x10078C03: mov dword ptr [esp + 0x24], 0x1007a46c */
    /* cmp MEM32(ebx), edx */ /* 0x10078C0B: cmp dword ptr [ebx], edx */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10078BF7; /* 0x10078C0D: jne 0x10078bf7 */
L_10078C0F:
    ecx = esp + 0x18; /* 0x10078C0F: lea ecx, [esp + 0x18] */
    RECOMP_CALL(sub_10068D76); /* 0x10078C13: call 0x10068d76 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebx), 9 */ /* 0x10078C18: cmp dword ptr [ebx], 9 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10078C0F; /* 0x10078C1B: je 0x10078c0f */
L_10078C1D:
    eax = MEM32(esp + 0x10); /* 0x10078C1D: mov eax, dword ptr [esp + 0x10] */
    ecx = MEM32(esp + 0x14); /* 0x10078C21: mov ecx, dword ptr [esp + 0x14] */
    RECOMP_BACKEDGE();
    goto L_10078BF7; /* 0x10078C25: jmp 0x10078bf7 */
L_10078C27:
    /* cmp eax, ecx */ /* 0x10078C27: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10078C72; /* 0x10078C29: jne 0x10078c72 */
L_10078C2B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10078C2B: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edx; /* 0x10078C2D: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(ebx); if (eax == _d) { MEM32(ebx) = ecx; } else { eax = _d; } } /* 0x10078C2F: lock cmpxchg dword ptr [ebx], ecx */
    _flag_k = FK_CMP;
    /* cmp eax, edx */ /* 0x10078C33: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10078C80; /* 0x10078C35: jne 0x10078c80 */
L_10078C37:
    /* cmp eax, 4 */ /* 0x10078C37: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10078C4F; /* 0x10078C3A: jne 0x10078c4f */
L_10078C3C:
    eax = MEM32(esi + 0x4); /* 0x10078C3C: mov eax, dword ptr [esi + 4] */
    ecx = MEM32(esp + 0x10); /* 0x10078C3F: mov ecx, dword ptr [esp + 0x10] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x10078C43: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x10078C43: shl eax, 4 */
    if (4u) _cf = (((eax) >> 3) & 1u); /* 0x10078C46: sar eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 4u);
    PUSH32(esp, eax); /* 0x10078C49: push eax */
    RECOMP_CALL(sub_1006A3E2); /* 0x10078C4A: call 0x1006a3e2 */
    RECOMP_FLAGS_IN();
L_10078C4F:
    _flag_a = (uint32_t)((MEM32(esi + 0x4) | 0x0FFFFFFFu)); _flag_b = (uint32_t)((MEM32(esi + 0x4) | 0x0FFFFFFFu));
    MEM32(esi + 0x4) = MEM32(esi + 0x4) | 0x0FFFFFFFu; /* 0x10078C4F: or dword ptr [esi + 4], 0xfffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_10078C56:
    /* cmp MEM32(esi + 0x64), esi */ /* 0x10078C56: cmp dword ptr [esi + 0x64], esi */
    _flag_a = (uint32_t)(MEM32(esi + 0x64)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10078CA4; /* 0x10078C59: je 0x10078ca4 */
L_10078C5B:
    ecx = esi; /* 0x10078C5B: mov ecx, esi */
    RECOMP_CALL(sub_1007886A); /* 0x10078C5D: call 0x1007886a */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x10078C62: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10078CD7; /* 0x10078C64: je 0x10078cd7 */
L_10078C66:
    /* test edi, edi */ /* 0x10078C66: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10078CD7; /* 0x10078C68: je 0x10078cd7 */
L_10078C6A:
    esi = MEM32(esi + 0x64); /* 0x10078C6A: mov esi, dword ptr [esi + 0x64] */
    RECOMP_BACKEDGE();
    goto L_10078BE4; /* 0x10078C6D: jmp 0x10078be4 */
L_10078C72:
    PUSH32(esp, 3); /* 0x10078C72: push 3 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10078C74: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = POP32_VAL(esp); /* 0x10078C76: pop eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(ebx); if (eax == _d) { MEM32(ebx) = ecx; } else { eax = _d; } } /* 0x10078C77: lock cmpxchg dword ptr [ebx], ecx */
    _flag_k = FK_CMP;
    /* cmp eax, 9 */ /* 0x10078C7B: cmp eax, 9 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10078C56; /* 0x10078C7E: jne 0x10078c56 */
L_10078C80:
    ecx = MEM32(esp + 0x14); /* 0x10078C80: mov ecx, dword ptr [esp + 0x14] */
    edx = eax; /* 0x10078C84: mov edx, eax */
    eax = MEM32(esp + 0x10); /* 0x10078C86: mov eax, dword ptr [esp + 0x10] */
    RECOMP_BACKEDGE();
    goto L_10078BF9; /* 0x10078C8A: jmp 0x10078bf9 */
L_10078C8F:
    eax = MEM32(edi + 0x78); /* 0x10078C8F: mov eax, dword ptr [edi + 0x78] */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x10078C92: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x10078C92: shr eax, 1 */
    /* test LO8(eax), 1 */ /* 0x10078C94: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10078CA1; /* 0x10078C96: jne 0x10078ca1 */
L_10078C98:
    PUSH32(esp, 0); /* 0x10078C98: push 0 */
    ecx = edi; /* 0x10078C9A: mov ecx, edi */
    RECOMP_CALL(sub_10078BD3); /* 0x10078C9C: call 0x10078bd3 */
    RECOMP_FLAGS_IN();
L_10078CA1:
    edi = MEM32(edi + 0x68); /* 0x10078CA1: mov edi, dword ptr [edi + 0x68] */
L_10078CA4:
    /* test edi, edi */ /* 0x10078CA4: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10078C8F; /* 0x10078CA6: jne 0x10078c8f */
L_10078CA8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10078CA8: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi + 0x34; /* 0x10078CAA: lea eax, [esi + 0x34] */
    { uint32_t _tmp = MEM32(eax); /* 0x10078CAD: xchg dword ptr [eax], ecx */
      MEM32(eax) = ecx;
      ecx = _tmp; }
    /* test ecx, ecx */ /* 0x10078CAF: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_10078CD7; /* 0x10078CB1: jns 0x10078cd7 */
L_10078CB3:
    _flag_a = (uint32_t)(MEM32(esp + 0x30)); _flag_b = (uint32_t)(edi);
    MEM32(esp + 0x30) = MEM32(esp + 0x30) & edi; /* 0x10078CB3: and dword ptr [esp + 0x30], edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x34) = 0x1007A46Cu; /* 0x10078CB7: mov dword ptr [esp + 0x34], 0x1007a46c */
    goto L_10078CCA; /* 0x10078CBF: jmp 0x10078cca */
L_10078CC1:
    ecx = esp + 0x28; /* 0x10078CC1: lea ecx, [esp + 0x28] */
    RECOMP_CALL(sub_10068D76); /* 0x10078CC5: call 0x10068d76 */
    RECOMP_FLAGS_IN();
L_10078CCA:
    /* cmp MEM32(esi + 0x18), 8 */ /* 0x10078CCA: cmp dword ptr [esi + 0x18], 8 */
    _flag_a = (uint32_t)(MEM32(esi + 0x18)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10078CC1; /* 0x10078CCE: je 0x10078cc1 */
L_10078CD0:
    ecx = esi; /* 0x10078CD0: mov ecx, esi */
    RECOMP_CALL(sub_10079747); /* 0x10078CD2: call 0x10079747 */
    RECOMP_FLAGS_IN();
L_10078CD7:
    edi = POP32_VAL(esp); /* 0x10078CD7: pop edi */
    esi = POP32_VAL(esp); /* 0x10078CD8: pop esi */
    ebx = POP32_VAL(esp); /* 0x10078CD9: pop ebx */
    esp = ebp; /* 0x10078CDA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10078CDC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10078CDD: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_10078CE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10078CE0u);

L_10078CE0:
    PUSH32(esp, ebp); /* 0x10078CE0: push ebp */
    ebp = esp; /* 0x10078CE1: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x10078CE3: mov ecx, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x10078CE6: pop ebp */
    goto L_10079261; /* 0x10078CE7: jmp 0x10079261 */
L_10079261:
    PUSH32(esp, MEM32(ecx + 0x68)); /* 0x10079261: push dword ptr [ecx + 0x68] */
    PUSH32(esp, ecx); /* 0x10079264: push ecx */
    ecx = MEM32(ecx + 0x64); /* 0x10079265: mov ecx, dword ptr [ecx + 0x64] */
    RECOMP_CALL(sub_1007930F); /* 0x10079268: call 0x1007930f */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007926D: ret  */
    RECOMP_REGS_OUT();
}

void sub_10078CEC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10078CECu);

L_10078CEC:
    PUSH32(esp, 0x74u); /* 0x10078CEC: push 0x74 */
    eax = 0x100DC160u; /* 0x10078CEE: mov eax, 0x100dc160 */
    RECOMP_CALL(sub_1001FB2C); /* 0x10078CF3: call 0x1001fb2c */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x10078CF8: mov ecx, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100787CF); /* 0x10078CFB: call 0x100787cf */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x10078D00: mov esi, eax */
    MEM32(ebp + (-0x18)) = esi; /* 0x10078D02: mov dword ptr [ebp - 0x18], esi */
    RECOMP_CALL(sub_10023AF4); /* 0x10078D05: call 0x10023af4 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x10078D0A: mov ecx, dword ptr [ebp + 8] */
    edi = eax; /* 0x10078D0D: mov edi, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10078D0F: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x24)) = edi; /* 0x10078D11: mov dword ptr [ebp - 0x24], edi */
    MEM8(ebp + (-0x11)) = (uint8_t)(LO8(ebx)); /* 0x10078D14: mov byte ptr [ebp - 0x11], bl */
    edx = MEM32(edi + 0x34); /* 0x10078D17: mov edx, dword ptr [edi + 0x34] */
    eax = MEM32(ecx + 0x68); /* 0x10078D1A: mov eax, dword ptr [ecx + 0x68] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x10078D1D: mov dword ptr [ebp - 0x1c], eax */
    MEM32(esi) = edx; /* 0x10078D20: mov dword ptr [esi], edx */
    /* test edx, edx */ /* 0x10078D22: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10078D32; /* 0x10078D24: je 0x10078d32 */
L_10078D26:
    edx = MEM32(edx + 0x4); /* 0x10078D26: mov edx, dword ptr [edx + 4] */
    if (4u) _cf = (((edx) >> 28) & 1u); /* 0x10078D29: shl edx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((edx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 4u; /* 0x10078D29: shl edx, 4 */
    if (4u) _cf = (((edx) >> 3) & 1u); /* 0x10078D2C: sar edx, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 4u);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x10078D2F: inc edx */
    _flag_k = FK_INC;
    goto L_10078D34; /* 0x10078D30: jmp 0x10078d34 */
L_10078D32:
    edx = ebx; /* 0x10078D32: mov edx, ebx */
L_10078D34:
    eax = MEM32(esi + 0x4); /* 0x10078D34: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)((eax ^ edx)); _flag_b = (uint32_t)((eax ^ edx));
    eax = eax ^ edx; /* 0x10078D37: xor eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x20)) = ebx; /* 0x10078D39: mov dword ptr [ebp - 0x20], ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x0FFFFFFFu);
    eax = eax & 0x0FFFFFFFu; /* 0x10078D3C: and eax, 0xfffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(esi + 0x4) ^ eax)); _flag_b = (uint32_t)((MEM32(esi + 0x4) ^ eax));
    MEM32(esi + 0x4) = MEM32(esi + 0x4) ^ eax; /* 0x10078D41: xor dword ptr [esi + 4], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x34) = esi; /* 0x10078D44: mov dword ptr [edi + 0x34], esi */
    eax = MEM32(ecx + 0x8); /* 0x10078D47: mov eax, dword ptr [ecx + 8] */
    /* test eax, eax */ /* 0x10078D4A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10078D7E; /* 0x10078D4C: je 0x10078d7e */
L_10078D4E:
    /* cmp eax, 2 */ /* 0x10078D4E: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10078D6C; /* 0x10078D51: je 0x10078d6c */
L_10078D53:
    /* cmp eax, MEM32(edi + 0x38) */ /* 0x10078D53: cmp eax, dword ptr [edi + 0x38] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x38));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10078D6C; /* 0x10078D56: je 0x10078d6c */
L_10078D58:
    PUSH32(esp, ecx); /* 0x10078D58: push ecx */
    PUSH32(esp, ecx); /* 0x10078D59: push ecx */
    PUSH32(esp, 0x10078CE0u); /* 0x10078D5A: push 0x10078ce0 */
    ecx = eax; /* 0x10078D5F: mov ecx, eax */
    RECOMP_CALL(sub_10069015); /* 0x10078D61: call 0x10069015 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x10078D66: mov ecx, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x20)) = eax; /* 0x10078D69: mov dword ptr [ebp - 0x20], eax */
L_10078D6C:
    edx = MEM32(esi + 0x4); /* 0x10078D6C: mov edx, dword ptr [esi + 4] */
    ecx = MEM32(ecx + 0x8); /* 0x10078D6F: mov ecx, dword ptr [ecx + 8] */
    if (4u) _cf = (((edx) >> 28) & 1u); /* 0x10078D72: shl edx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((edx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 4u; /* 0x10078D72: shl edx, 4 */
    if (4u) _cf = (((edx) >> 3) & 1u); /* 0x10078D75: sar edx, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 4u);
    MEM32(edi + 0x38) = ecx; /* 0x10078D78: mov dword ptr [edi + 0x38], ecx */
    MEM32(edi + 0x3C) = edx; /* 0x10078D7B: mov dword ptr [edi + 0x3c], edx */
L_10078D7E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x10078D7E: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x10078D80: mov dword ptr [ebp - 4], ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x10078D83: inc edx */
    _flag_k = FK_INC;
    ecx = esi + 0x38; /* 0x10078D84: lea ecx, [esi + 0x38] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10078D87: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(ecx); if (eax == _d) { MEM32(ecx) = edx; } else { eax = _d; } } /* 0x10078D89: lock cmpxchg dword ptr [ecx], edx */
    _flag_k = FK_CMP;
    /* cmp eax, 3 */ /* 0x10078D8D: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10078DBC; /* 0x10078D90: jne 0x10078dbc */
L_10078D92:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x10078D92: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10078D9F; /* 0x10078D96: je 0x10078d9f */
L_10078D98:
    ecx = esi; /* 0x10078D98: mov ecx, esi */
    RECOMP_CALL(sub_1007887D); /* 0x10078D9A: call 0x1007887d */
    RECOMP_FLAGS_IN();
L_10078D9F:
    ecx = ebp + (-0x34); /* 0x10078D9F: lea ecx, [ebp - 0x34] */
    RECOMP_CALL(sub_1009DD55); /* 0x10078DA2: call 0x1009dd55 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x34)) = 0x10067484u; /* 0x10078DA7: mov dword ptr [ebp - 0x34], 0x10067484 */
    eax = ebp + (-0x34); /* 0x10078DAE: lea eax, [ebp - 0x34] */
    PUSH32(esp, 0x100DCEB0u); /* 0x10078DB1: push 0x100dceb0 */
L_10078DB6:
    PUSH32(esp, eax); /* 0x10078DB6: push eax */
    RECOMP_CALL(sub_100192EB); /* 0x10078DB7: call 0x100192eb */
    RECOMP_FLAGS_IN();
L_10078DBC:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x10078DBC: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10078E08; /* 0x10078DC0: je 0x10078e08 */
L_10078DC2:
    ecx = esi; /* 0x10078DC2: mov ecx, esi */
    RECOMP_CALL(sub_1007887D); /* 0x10078DC4: call 0x1007887d */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x10078DC9: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x64); /* 0x10078DCC: mov eax, dword ptr [eax + 0x64] */
    /* cmp MEM32(eax + 0x34), ebx */ /* 0x10078DCF: cmp dword ptr [eax + 0x34], ebx */
    _flag_a = (uint32_t)(MEM32(eax + 0x34)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10078E5A; /* 0x10078DD2: jne 0x10078e5a */
L_10078DD8:
    eax = MEM32(edi + 0x78); /* 0x10078DD8: mov eax, dword ptr [edi + 0x78] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x70));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(edi + 0x70); /* 0x10078DDB: add eax, dword ptr [edi + 0x70] */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10078DDE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10078DEF; /* 0x10078DE0: jle 0x10078def */
L_10078DE2:
    PUSH32(esp, ebx); /* 0x10078DE2: push ebx */
    PUSH32(esp, esi); /* 0x10078DE3: push esi */
    ecx = edi; /* 0x10078DE4: mov ecx, edi */
    RECOMP_CALL(sub_1006A520); /* 0x10078DE6: call 0x1006a520 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x10078DEB: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10078E5A; /* 0x10078DED: jne 0x10078e5a */
L_10078DEF:
    eax = MEM32(ebp + 0xC); /* 0x10078DEF: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x10078DF2: push eax */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x10078DF3: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x10078DF6: mov eax, dword ptr [ebp + 0xc] */
L_10078DF9:
    ecx = POP32_VAL(esp); /* 0x10078DF9: pop ecx */
    PUSH32(esp, eax); /* 0x10078DFA: push eax */
    ecx = esi; /* 0x10078DFB: mov ecx, esi */
    MEM32(eax + 0x8) = ebx; /* 0x10078DFD: mov dword ptr [eax + 8], ebx */
    RECOMP_CALL(sub_100788A3); /* 0x10078E00: call 0x100788a3 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + 0xC) = ebx; /* 0x10078E05: mov dword ptr [ebp + 0xc], ebx */
L_10078E08:
    eax = MEM32(ebp + 0x8); /* 0x10078E08: mov eax, dword ptr [ebp + 8] */
L_10078E0B:
    /* cmp MEM32(esi + 0x84), ebx */ /* 0x10078E0B: cmp dword ptr [esi + 0x84], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x84)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_10078EA7; /* 0x10078E11: jle 0x10078ea7 */
L_10078E17:
    eax = MEM32(eax + 0x64); /* 0x10078E17: mov eax, dword ptr [eax + 0x64] */
    /* cmp MEM32(eax + 0x34), ebx */ /* 0x10078E1A: cmp dword ptr [eax + 0x34], ebx */
    _flag_a = (uint32_t)(MEM32(eax + 0x34)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10078F21; /* 0x10078E1D: jne 0x10078f21 */
L_10078E23:
    eax = MEM32(edi + 0x78); /* 0x10078E23: mov eax, dword ptr [edi + 0x78] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x70));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(edi + 0x70); /* 0x10078E26: add eax, dword ptr [edi + 0x70] */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10078E29: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10078E3E; /* 0x10078E2B: jle 0x10078e3e */
L_10078E2D:
    PUSH32(esp, ebx); /* 0x10078E2D: push ebx */
    PUSH32(esp, esi); /* 0x10078E2E: push esi */
    ecx = edi; /* 0x10078E2F: mov ecx, edi */
    RECOMP_CALL(sub_1006A520); /* 0x10078E31: call 0x1006a520 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x10078E36: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10078F21; /* 0x10078E38: jne 0x10078f21 */
L_10078E3E:
    ecx = MEM32(esi + 0x84); /* 0x10078E3E: mov ecx, dword ptr [esi + 0x84] */
    /* cmp ecx, 2 */ /* 0x10078E44: cmp ecx, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10078E76; /* 0x10078E47: jbe 0x10078e76 */
L_10078E49:
    eax = MEM32(esi + 0x6C); /* 0x10078E49: mov eax, dword ptr [esi + 0x6c] */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) - 1; /* 0x10078E4C: dec dword ptr [eax + 4] */
    _flag_k = FK_DEC;
    ecx = MEM32(eax + 0x4); /* 0x10078E4F: mov ecx, dword ptr [eax + 4] */
    eax = MEM32(eax + 0x8); /* 0x10078E52: mov eax, dword ptr [eax + 8] */
    eax = MEM32(eax + ecx * 4); /* 0x10078E55: mov eax, dword ptr [eax + ecx*4] */
    goto L_10078E7D; /* 0x10078E58: jmp 0x10078e7d */
L_10078E5A:
    ecx = ebp + (-0x40); /* 0x10078E5A: lea ecx, [ebp - 0x40] */
    RECOMP_CALL(sub_1009DD55); /* 0x10078E5D: call 0x1009dd55 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x40)) = 0x10067484u; /* 0x10078E62: mov dword ptr [ebp - 0x40], 0x10067484 */
    eax = ebp + (-0x40); /* 0x10078E69: lea eax, [ebp - 0x40] */
    PUSH32(esp, 0x100DCEB0u); /* 0x10078E6C: push 0x100dceb0 */
    RECOMP_BACKEDGE();
    goto L_10078DB6; /* 0x10078E71: jmp 0x10078db6 */
L_10078E76:
    eax = MEM32(ebp + 0x8); /* 0x10078E76: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + ecx * 4 + 0x6C); /* 0x10078E79: mov eax, dword ptr [eax + ecx*4 + 0x6c] */
L_10078E7D:
    _flag_a = (uint32_t)(MEM32(esi + 0x84)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x84) = MEM32(esi + 0x84) - 1; /* 0x10078E7D: dec dword ptr [esi + 0x84] */
    _flag_k = FK_DEC;
    ecx = edi; /* 0x10078E83: mov ecx, edi */
    PUSH32(esp, eax); /* 0x10078E85: push eax */
    RECOMP_CALL(sub_1006A090); /* 0x10078E86: call 0x1006a090 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x10078E8B: mov ecx, eax */
    MEM32(ebp + (-0x28)) = ecx; /* 0x10078E8D: mov dword ptr [ebp - 0x28], ecx */
    MEM32(ebp + 0xC) = ecx; /* 0x10078E90: mov dword ptr [ebp + 0xc], ecx */
    /* test ecx, ecx */ /* 0x10078E93: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10078EF4; /* 0x10078E95: jne 0x10078ef4 */
L_10078E97:
    eax = MEM32(esi + 0x6C); /* 0x10078E97: mov eax, dword ptr [esi + 0x6c] */
    /* test eax, eax */ /* 0x10078E9A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10078EA1; /* 0x10078E9C: je 0x10078ea1 */
L_10078E9E:
    MEM32(eax + 0x4) = ebx; /* 0x10078E9E: mov dword ptr [eax + 4], ebx */
L_10078EA1:
    MEM32(esi + 0x84) = ebx; /* 0x10078EA1: mov dword ptr [esi + 0x84], ebx */
L_10078EA7:
    eax = MEM32(esi + 0x6C); /* 0x10078EA7: mov eax, dword ptr [esi + 0x6c] */
    /* test eax, eax */ /* 0x10078EAA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10078F3D; /* 0x10078EAC: je 0x10078f3d */
L_10078EB2:
    SET_LO8(eax, MEM8(eax + 0xC)); /* 0x10078EB2: mov al, byte ptr [eax + 0xc] */
    /* test LO8(eax), LO8(eax) */ /* 0x10078EB5: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10078F3D; /* 0x10078EB7: je 0x10078f3d */
L_10078EBD:
    PUSH32(esp, 5); /* 0x10078EBD: push 5 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10078EBF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ebp + (-0x11)) = (uint8_t)(1); /* 0x10078EC1: mov byte ptr [ebp - 0x11], 1 */
    edx = POP32_VAL(esp); /* 0x10078EC5: pop edx */
    ecx = esi + 0x38; /* 0x10078EC6: lea ecx, [esi + 0x38] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10078EC9: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(ecx); if (eax == _d) { MEM32(ecx) = edx; } else { eax = _d; } } /* 0x10078ECA: lock cmpxchg dword ptr [ecx], edx */
    _flag_k = FK_CMP;
    /* cmp eax, 4 */ /* 0x10078ECE: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10078ED8; /* 0x10078ED1: je 0x10078ed8 */
L_10078ED3:
    /* cmp eax, 9 */ /* 0x10078ED3: cmp eax, 9 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10078F3D; /* 0x10078ED6: jne 0x10078f3d */
L_10078ED8:
    ecx = ebp + (-0x58); /* 0x10078ED8: lea ecx, [ebp - 0x58] */
    RECOMP_CALL(sub_1009DD55); /* 0x10078EDB: call 0x1009dd55 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x58)) = 0x10067484u; /* 0x10078EE0: mov dword ptr [ebp - 0x58], 0x10067484 */
    eax = ebp + (-0x58); /* 0x10078EE7: lea eax, [ebp - 0x58] */
    PUSH32(esp, 0x100DCEB0u); /* 0x10078EEA: push 0x100dceb0 */
    RECOMP_BACKEDGE();
    goto L_10078DB6; /* 0x10078EEF: jmp 0x10078db6 */
L_10078EF4:
    eax = MEM32(ebp + 0x8); /* 0x10078EF4: mov eax, dword ptr [ebp + 8] */
    /* cmp ecx, 1 */ /* 0x10078EF7: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10078E0B; /* 0x10078EFA: je 0x10078e0b */
L_10078F00:
    SET_LO8(eax, MEM8(edi + 0x4C)); /* 0x10078F00: mov al, byte ptr [edi + 0x4c] */
    /* test LO8(eax), LO8(eax) */ /* 0x10078F03: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = MEM32(edi + 0x9C); /* 0x10078F05: mov eax, dword ptr [edi + 0x9c] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_10078F12; /* 0x10078F0B: je 0x10078f12 */
L_10078F0D:
    _flag_a = (uint32_t)(MEM32(eax + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0xC) = MEM32(eax + 0xC) + 1; /* 0x10078F0D: inc dword ptr [eax + 0xc] */
    _flag_k = FK_INC;
    goto L_10078F15; /* 0x10078F10: jmp 0x10078f15 */
L_10078F12:
    _flag_a = (uint32_t)(MEM32(eax + 0x6C)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x6C) = MEM32(eax + 0x6C) + 1; /* 0x10078F12: inc dword ptr [eax + 0x6c] */
    _flag_k = FK_INC;
L_10078F15:
    PUSH32(esp, ecx); /* 0x10078F15: push ecx */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x10078F16: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x28)); /* 0x10078F19: mov eax, dword ptr [ebp - 0x28] */
    RECOMP_BACKEDGE();
    goto L_10078DF9; /* 0x10078F1C: jmp 0x10078df9 */
L_10078F21:
    ecx = ebp + (-0x4C); /* 0x10078F21: lea ecx, [ebp - 0x4c] */
    RECOMP_CALL(sub_1009DD55); /* 0x10078F24: call 0x1009dd55 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4C)) = 0x10067484u; /* 0x10078F29: mov dword ptr [ebp - 0x4c], 0x10067484 */
    eax = ebp + (-0x4C); /* 0x10078F30: lea eax, [ebp - 0x4c] */
    PUSH32(esp, 0x100DCEB0u); /* 0x10078F33: push 0x100dceb0 */
    RECOMP_BACKEDGE();
    goto L_10078DB6; /* 0x10078F38: jmp 0x10078db6 */
L_10078F3D:
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x10078F3D: push dword ptr [ebp - 0x1c] */
    ecx = MEM32(ebp + 0x8); /* 0x10078F40: mov ecx, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100788EB); /* 0x10078F43: call 0x100788eb */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(ebp + (-0x11)), 0 */ /* 0x10078F48: cmp byte ptr [ebp - 0x11], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x11))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10078F7D; /* 0x10078F4C: je 0x10078f7d */
L_10078F4E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x10078F4E: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi + 0x38; /* 0x10078F50: lea ecx, [esi + 0x38] */
    PUSH32(esp, 5); /* 0x10078F53: push 5 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x10078F55: inc edx */
    _flag_k = FK_INC;
    eax = POP32_VAL(esp); /* 0x10078F56: pop eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(ecx); if (eax == _d) { MEM32(ecx) = edx; } else { eax = _d; } } /* 0x10078F57: lock cmpxchg dword ptr [ecx], edx */
    _flag_k = FK_CMP;
    /* cmp eax, 9 */ /* 0x10078F5B: cmp eax, 9 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10078F7D; /* 0x10078F5E: jne 0x10078f7d */
L_10078F60:
    MEM32(ebp + (-0x78)) = ebx; /* 0x10078F60: mov dword ptr [ebp - 0x78], ebx */
    MEM32(ebp + (-0x74)) = 0x1007A46Cu; /* 0x10078F63: mov dword ptr [ebp - 0x74], 0x1007a46c */
L_10078F6A:
    eax = MEM32(ebp + 0x8); /* 0x10078F6A: mov eax, dword ptr [ebp + 8] */
    /* cmp MEM32(eax + 0x38), 9 */ /* 0x10078F6D: cmp dword ptr [eax + 0x38], 9 */
    _flag_a = (uint32_t)(MEM32(eax + 0x38)); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10078F80; /* 0x10078F71: jne 0x10078f80 */
L_10078F73:
    ecx = ebp + (-0x80); /* 0x10078F73: lea ecx, [ebp - 0x80] */
    RECOMP_CALL(sub_10068D76); /* 0x10078F76: call 0x10068d76 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_10078F6A; /* 0x10078F7B: jmp 0x10078f6a */
L_10078F7D:
    eax = MEM32(ebp + 0x8); /* 0x10078F7D: mov eax, dword ptr [ebp + 8] */
L_10078F80:
    ecx = MEM32(ebp + (-0x1C)); /* 0x10078F80: mov ecx, dword ptr [ebp - 0x1c] */
    /* cmp ecx, MEM32(eax + 0x68) */ /* 0x10078F83: cmp ecx, dword ptr [eax + 0x68] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x68));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10078F8E; /* 0x10078F86: jne 0x10078f8e */
L_10078F88:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x10078F88: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10078FE7; /* 0x10078F8C: jmp 0x10078fe7 */
L_10078F8E:
    ecx = MEM32(eax + 0x68); /* 0x10078F8E: mov ecx, dword ptr [eax + 0x68] */
    MEM32(ebp + (-0x1C)) = ecx; /* 0x10078F91: mov dword ptr [ebp - 0x1c], ecx */
    RECOMP_BACKEDGE();
    goto L_10078E0B; /* 0x10078F94: jmp 0x10078e0b */
L_10078FE7:
    /* cmp MEM32(eax + 0x8), ebx */ /* 0x10078FE7: cmp dword ptr [eax + 8], ebx */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007900F; /* 0x10078FEA: je 0x1007900f */
L_10078FEC:
    PUSH32(esp, ecx); /* 0x10078FEC: push ecx */
    ecx = edi; /* 0x10078FED: mov ecx, edi */
    RECOMP_CALL(sub_1006A275); /* 0x10078FEF: call 0x1006a275 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x20)); /* 0x10078FF4: mov eax, dword ptr [ebp - 0x20] */
    /* test eax, eax */ /* 0x10078FF7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007900F; /* 0x10078FF9: je 0x1007900f */
L_10078FFB:
    PUSH32(esp, eax); /* 0x10078FFB: push eax */
    eax = MEM32(ebp + 0x8); /* 0x10078FFC: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax + 0x8); /* 0x10078FFF: mov ecx, dword ptr [eax + 8] */
    RECOMP_CALL(sub_100690DC); /* 0x10079002: call 0x100690dc */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x20)); /* 0x10079007: mov ecx, dword ptr [ebp - 0x20] */
    RECOMP_CALL(sub_10068B23); /* 0x1007900A: call 0x10068b23 */
    RECOMP_FLAGS_IN();
L_1007900F:
    eax = MEM32(esi); /* 0x1007900F: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x10079011: mov ecx, esi */
    MEM32(edi + 0x34) = eax; /* 0x10079013: mov dword ptr [edi + 0x34], eax */
    eax = MEM32(ebp + 0x8); /* 0x10079016: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x64); /* 0x10079019: mov eax, dword ptr [eax + 0x64] */
    /* cmp MEM32(eax + 0x34), ebx */ /* 0x1007901C: cmp dword ptr [eax + 0x34], ebx */
    _flag_a = (uint32_t)(MEM32(eax + 0x34)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10079098; /* 0x1007901F: je 0x10079098 */
L_10079021:
    PUSH32(esp, ebx); /* 0x10079021: push ebx */
    RECOMP_CALL(sub_1007913B); /* 0x10079022: call 0x1007913b */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x78); /* 0x10079027: mov eax, dword ptr [edi + 0x78] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x70));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(edi + 0x70); /* 0x1007902A: add eax, dword ptr [edi + 0x70] */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1007902D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10079093; /* 0x1007902F: jle 0x10079093 */
L_10079031:
    eax = MEM32(ebp + 0x8); /* 0x10079031: mov eax, dword ptr [ebp + 8] */
    ecx = edi; /* 0x10079034: mov ecx, edi */
    /* cmp MEM32(eax + 0x8), ebx */ /* 0x10079036: cmp dword ptr [eax + 8], ebx */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x10079039: setne al */
    eax = (uint32_t)LO8(eax); /* 0x1007903C: movzx eax, al */
    PUSH32(esp, eax); /* 0x1007903F: push eax */
    PUSH32(esp, esi); /* 0x10079040: push esi */
    RECOMP_CALL(sub_1006A520); /* 0x10079041: call 0x1006a520 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x10079046: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10079093; /* 0x10079048: je 0x10079093 */
L_1007904A:
    ecx = ebp + (-0x64); /* 0x1007904A: lea ecx, [ebp - 0x64] */
    RECOMP_CALL(sub_1009DD55); /* 0x1007904D: call 0x1009dd55 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x64)) = 0x10067484u; /* 0x10079052: mov dword ptr [ebp - 0x64], 0x10067484 */
    eax = ebp + (-0x64); /* 0x10079059: lea eax, [ebp - 0x64] */
    PUSH32(esp, 0x100DCEB0u); /* 0x1007905C: push 0x100dceb0 */
    RECOMP_BACKEDGE();
    goto L_10078DB6; /* 0x10079061: jmp 0x10078db6 */
L_10079093:
    PUSH32(esp, 2); /* 0x10079093: push 2 */
    eax = POP32_VAL(esp); /* 0x10079095: pop eax */
    goto L_100790E2; /* 0x10079096: jmp 0x100790e2 */
L_10079098:
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x10079098: push dword ptr [ebp - 0x1c] */
    RECOMP_CALL(sub_10078BD3); /* 0x1007909B: call 0x10078bd3 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x78); /* 0x100790A0: mov eax, dword ptr [edi + 0x78] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x70));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(edi + 0x70); /* 0x100790A3: add eax, dword ptr [edi + 0x70] */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100790A6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100790DF; /* 0x100790A8: jle 0x100790df */
L_100790AA:
    eax = MEM32(ebp + 0x8); /* 0x100790AA: mov eax, dword ptr [ebp + 8] */
    ecx = edi; /* 0x100790AD: mov ecx, edi */
    /* cmp MEM32(eax + 0x8), ebx */ /* 0x100790AF: cmp dword ptr [eax + 8], ebx */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x100790B2: setne al */
    eax = (uint32_t)LO8(eax); /* 0x100790B5: movzx eax, al */
    PUSH32(esp, eax); /* 0x100790B8: push eax */
    PUSH32(esp, esi); /* 0x100790B9: push esi */
    RECOMP_CALL(sub_1006A520); /* 0x100790BA: call 0x1006a520 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x100790BF: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100790DF; /* 0x100790C1: je 0x100790df */
L_100790C3:
    ecx = ebp + (-0x70); /* 0x100790C3: lea ecx, [ebp - 0x70] */
    RECOMP_CALL(sub_1009DD55); /* 0x100790C6: call 0x1009dd55 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x70)) = 0x10067484u; /* 0x100790CB: mov dword ptr [ebp - 0x70], 0x10067484 */
    eax = ebp + (-0x70); /* 0x100790D2: lea eax, [ebp - 0x70] */
    PUSH32(esp, 0x100DCEB0u); /* 0x100790D5: push 0x100dceb0 */
    RECOMP_BACKEDGE();
    goto L_10078DB6; /* 0x100790DA: jmp 0x10078db6 */
L_100790DF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100790DF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100790E1: inc eax */
    _flag_k = FK_INC;
L_100790E2:
    RECOMP_CALL(sub_100149D7); /* 0x100790E2: call 0x100149d7 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x100790E7: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_100790EA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100790EAu);

L_100790EA:
    PUSH32(esp, ebp); /* 0x100790EA: push ebp */
    ebp = esp; /* 0x100790EB: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x100790ED: push ecx */
    PUSH32(esp, ecx); /* 0x100790EE: push ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x100790EF: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x8); /* 0x100790F3: lea eax, [ebp - 8] */
    PUSH32(esp, esi); /* 0x100790F6: push esi */
    PUSH32(esp, ecx); /* 0x100790F7: push ecx */
    PUSH32(esp, eax); /* 0x100790F8: push eax */
    eax = MEM32(ebp + 0x8); /* 0x100790F9: mov eax, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x8)) = ecx; /* 0x100790FC: mov dword ptr [ebp - 8], ecx */
    PUSH32(esp, ecx); /* 0x100790FF: push ecx */
    ecx = MEM32(eax + 0x20); /* 0x10079100: mov ecx, dword ptr [eax + 0x20] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x4Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x4Cu; /* 0x10079103: add ecx, 0x4c */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1007B29D); /* 0x10079106: call 0x1007b29d */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x4)); /* 0x1007910B: mov esi, dword ptr [ebp - 4] */
    /* test esi, esi */ /* 0x1007910E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10079134; /* 0x10079110: je 0x10079134 */
L_10079112:
    RECOMP_CALL(sub_10023AF4); /* 0x10079112: call 0x10023af4 */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(eax + 0x4C), 0 */ /* 0x10079117: cmp byte ptr [eax + 0x4c], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0x4C)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10079128; /* 0x1007911B: je 0x10079128 */
L_1007911D:
    eax = MEM32(eax + 0x9C); /* 0x1007911D: mov eax, dword ptr [eax + 0x9c] */
    _flag_a = (uint32_t)(MEM32(eax + 0xC)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax + 0xC) = MEM32(eax + 0xC) + esi; /* 0x10079123: add dword ptr [eax + 0xc], esi */
    _flag_k = FK_ADD;
    goto L_10079134; /* 0x10079126: jmp 0x10079134 */
L_10079128:
    ecx = MEM32(eax + 0x9C); /* 0x10079128: mov ecx, dword ptr [eax + 0x9c] */
    eax = MEM32(ebp + (-0x4)); /* 0x1007912E: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x6C)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx + 0x6C) = MEM32(ecx + 0x6C) + eax; /* 0x10079131: add dword ptr [ecx + 0x6c], eax */
    _flag_k = FK_ADD;
L_10079134:
    esi = POP32_VAL(esp); /* 0x10079134: pop esi */
    esp = ebp; /* 0x10079135: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10079137: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10079138: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1007913B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007913Bu);

L_1007913B:
    PUSH32(esp, ebp); /* 0x1007913B: push ebp */
    ebp = esp; /* 0x1007913C: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1007913E: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x10079141: push ebx */
    PUSH32(esp, esi); /* 0x10079142: push esi */
    PUSH32(esp, edi); /* 0x10079143: push edi */
    esi = ecx; /* 0x10079144: mov esi, ecx */
    RECOMP_CALL(sub_10023AF4); /* 0x10079146: call 0x10023af4 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(esi + 0x6C); /* 0x1007914B: mov ebx, dword ptr [esi + 0x6c] */
    ecx = esi; /* 0x1007914E: mov ecx, esi */
    edx = eax; /* 0x10079150: mov edx, eax */
    MEM32(ebp + (-0xC)) = ebx; /* 0x10079152: mov dword ptr [ebp - 0xc], ebx */
    RECOMP_CALL(sub_10078857); /* 0x10079155: call 0x10078857 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1007915A: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10079162; /* 0x1007915C: je 0x10079162 */
L_1007915E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1007915E: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10079168; /* 0x10079160: jmp 0x10079168 */
L_10079162:
    eax = MEM32(esi + 0x64); /* 0x10079162: mov eax, dword ptr [esi + 0x64] */
    edi = MEM32(eax + 0x68); /* 0x10079165: mov edi, dword ptr [eax + 0x68] */
L_10079168:
    MEM32(ebp + (-0x4)) = edi; /* 0x10079168: mov dword ptr [ebp - 4], edi */
    /* test ebx, ebx */ /* 0x1007916B: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10079182; /* 0x1007916D: je 0x10079182 */
L_1007916F:
    SET_LO8(eax, MEM8(ebx + 0xC)); /* 0x1007916F: mov al, byte ptr [ebx + 0xc] */
    /* test LO8(eax), LO8(eax) */ /* 0x10079172: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10079182; /* 0x10079174: je 0x10079182 */
L_10079176:
    PUSH32(esp, edx); /* 0x10079176: push edx */
    RECOMP_CALL(sub_100790EA); /* 0x10079177: call 0x100790ea */
    RECOMP_FLAGS_IN();
    MEM8(ebx + 0xC) = (uint8_t)(0); /* 0x1007917C: mov byte ptr [ebx + 0xc], 0 */
    goto L_100791EF; /* 0x10079180: jmp 0x100791ef */
L_10079182:
    /* cmp MEM32(esi + 0x84), 0 */ /* 0x10079182: cmp dword ptr [esi + 0x84], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x84)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_100791EF; /* 0x10079189: jle 0x100791ef */
L_1007918B:
    edi = edx; /* 0x1007918B: mov edi, edx */
L_1007918D:
    eax = MEM32(esi + 0x84); /* 0x1007918D: mov eax, dword ptr [esi + 0x84] */
    /* cmp eax, 2 */ /* 0x10079193: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_100791A6; /* 0x10079196: jbe 0x100791a6 */
L_10079198:
    _flag_a = (uint32_t)(MEM32(ebx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0x4) = MEM32(ebx + 0x4) - 1; /* 0x10079198: dec dword ptr [ebx + 4] */
    _flag_k = FK_DEC;
    ecx = MEM32(ebx + 0x4); /* 0x1007919B: mov ecx, dword ptr [ebx + 4] */
    eax = MEM32(ebx + 0x8); /* 0x1007919E: mov eax, dword ptr [ebx + 8] */
    eax = MEM32(eax + ecx * 4); /* 0x100791A1: mov eax, dword ptr [eax + ecx*4] */
    goto L_100791AA; /* 0x100791A4: jmp 0x100791aa */
L_100791A6:
    eax = MEM32(esi + eax * 4 + 0x6C); /* 0x100791A6: mov eax, dword ptr [esi + eax*4 + 0x6c] */
L_100791AA:
    _flag_a = (uint32_t)(MEM32(esi + 0x84)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x84) = MEM32(esi + 0x84) - 1; /* 0x100791AA: dec dword ptr [esi + 0x84] */
    _flag_k = FK_DEC;
    ecx = edi; /* 0x100791B0: mov ecx, edi */
    PUSH32(esp, eax); /* 0x100791B2: push eax */
    RECOMP_CALL(sub_1006A090); /* 0x100791B3: call 0x1006a090 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x100791B8: mov ecx, eax */
    /* test ecx, ecx */ /* 0x100791BA: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100791EC; /* 0x100791BC: je 0x100791ec */
L_100791BE:
    /* cmp ecx, 1 */ /* 0x100791BE: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100791E3; /* 0x100791C1: je 0x100791e3 */
L_100791C3:
    /* cmp MEM8(edi + 0x4C), 0 */ /* 0x100791C3: cmp byte ptr [edi + 0x4c], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x4C)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = MEM32(edi + 0x9C); /* 0x100791C7: mov eax, dword ptr [edi + 0x9c] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100791D4; /* 0x100791CD: je 0x100791d4 */
L_100791CF:
    _flag_a = (uint32_t)(MEM32(eax + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0xC) = MEM32(eax + 0xC) + 1; /* 0x100791CF: inc dword ptr [eax + 0xc] */
    _flag_k = FK_INC;
    goto L_100791D7; /* 0x100791D2: jmp 0x100791d7 */
L_100791D4:
    _flag_a = (uint32_t)(MEM32(eax + 0x6C)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x6C) = MEM32(eax + 0x6C) + 1; /* 0x100791D4: inc dword ptr [eax + 0x6c] */
    _flag_k = FK_INC;
L_100791D7:
    _flag_a = (uint32_t)(MEM32(ecx + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(ecx + 0x8) = MEM32(ecx + 0x8) & 0; /* 0x100791D7: and dword ptr [ecx + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x100791DB: push ecx */
    ecx = esi; /* 0x100791DC: mov ecx, esi */
    RECOMP_CALL(sub_100788A3); /* 0x100791DE: call 0x100788a3 */
    RECOMP_FLAGS_IN();
L_100791E3:
    /* cmp MEM32(esi + 0x84), 0 */ /* 0x100791E3: cmp dword ptr [esi + 0x84], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x84)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_1007918D; /* 0x100791EA: jg 0x1007918d */
L_100791EC:
    edi = MEM32(ebp + (-0x4)); /* 0x100791EC: mov edi, dword ptr [ebp - 4] */
L_100791EF:
    SET_LO8(ebx, MEM8(ebp + 0x8)); /* 0x100791EF: mov bl, byte ptr [ebp + 8] */
L_100791F2:
    /* test LO8(ebx), LO8(ebx) */ /* 0x100791F2: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007920B; /* 0x100791F4: jne 0x1007920b */
L_100791F6:
    /* cmp MEM32(esi + 0x10), 0 */ /* 0x100791F6: cmp dword ptr [esi + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1007920B; /* 0x100791FA: jg 0x1007920b */
L_100791FC:
    ecx = esi; /* 0x100791FC: mov ecx, esi */
    RECOMP_CALL(sub_1007886A); /* 0x100791FE: call 0x1007886a */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x10079203: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007920B; /* 0x10079205: jne 0x1007920b */
L_10079207:
    /* test edi, edi */ /* 0x10079207: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10079215; /* 0x10079209: je 0x10079215 */
L_1007920B:
    PUSH32(esp, edi); /* 0x1007920B: push edi */
    PUSH32(esp, ecx); /* 0x1007920C: push ecx */
    ecx = MEM32(esi + 0x64); /* 0x1007920D: mov ecx, dword ptr [esi + 0x64] */
    RECOMP_CALL(sub_1007930F); /* 0x10079210: call 0x1007930f */
    RECOMP_FLAGS_IN();
L_10079215:
    PUSH32(esp, edi); /* 0x10079215: push edi */
    ecx = esi; /* 0x10079216: mov ecx, esi */
    RECOMP_CALL(sub_100788EB); /* 0x10079218: call 0x100788eb */
    RECOMP_FLAGS_IN();
    ecx = esi; /* 0x1007921D: mov ecx, esi */
    RECOMP_CALL(sub_10078857); /* 0x1007921F: call 0x10078857 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x10079224: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007922C; /* 0x10079226: je 0x1007922c */
L_10079228:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10079228: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10079232; /* 0x1007922A: jmp 0x10079232 */
L_1007922C:
    eax = MEM32(esi + 0x64); /* 0x1007922C: mov eax, dword ptr [esi + 0x64] */
    eax = MEM32(eax + 0x68); /* 0x1007922F: mov eax, dword ptr [eax + 0x68] */
L_10079232:
    /* cmp edi, eax */ /* 0x10079232: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007923A; /* 0x10079234: je 0x1007923a */
L_10079236:
    edi = eax; /* 0x10079236: mov edi, eax */
    RECOMP_BACKEDGE();
    goto L_100791F2; /* 0x10079238: jmp 0x100791f2 */
L_1007923A:
    _flag_a = (uint32_t)(MEM32(esi + 0x84)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x84) = MEM32(esi + 0x84) & 0; /* 0x1007923A: and dword ptr [esi + 0x84], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = MEM32(ebp + (-0xC)); /* 0x10079241: mov ebx, dword ptr [ebp - 0xc] */
    /* test ebx, ebx */ /* 0x10079244: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007924C; /* 0x10079246: je 0x1007924c */
L_10079248:
    _flag_a = (uint32_t)(MEM32(ebx + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(ebx + 0x4) = MEM32(ebx + 0x4) & 0; /* 0x10079248: and dword ptr [ebx + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1007924C:
    /* cmp MEM8(ebp + 0x8), 0 */ /* 0x1007924C: cmp byte ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10079258; /* 0x10079250: jne 0x10079258 */
L_10079252:
    PUSH32(esp, edi); /* 0x10079252: push edi */
    RECOMP_CALL(sub_10078BD3); /* 0x10079253: call 0x10078bd3 */
    RECOMP_FLAGS_IN();
L_10079258:
    edi = POP32_VAL(esp); /* 0x10079258: pop edi */
    esi = POP32_VAL(esp); /* 0x10079259: pop esi */
    ebx = POP32_VAL(esp); /* 0x1007925A: pop ebx */
    esp = ebp; /* 0x1007925B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007925D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1007925E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_10079261(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10079261u);

L_10079261:
    PUSH32(esp, MEM32(ecx + 0x68)); /* 0x10079261: push dword ptr [ecx + 0x68] */
    PUSH32(esp, ecx); /* 0x10079264: push ecx */
    ecx = MEM32(ecx + 0x64); /* 0x10079265: mov ecx, dword ptr [ecx + 0x64] */
    RECOMP_CALL(sub_1007930F); /* 0x10079268: call 0x1007930f */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007926D: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007926E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007926Eu);

L_1007926E:
    PUSH32(esp, ebp); /* 0x1007926E: push ebp */
    ebp = esp; /* 0x1007926F: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x10079271: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x10079274: push ebx */
    PUSH32(esp, esi); /* 0x10079275: push esi */
    PUSH32(esp, edi); /* 0x10079276: push edi */
    eax = ecx + 0x38; /* 0x10079277: lea eax, [ecx + 0x38] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x1007927A: mov dword ptr [ebp - 4], ecx */
    esi = MEM32(eax); /* 0x1007927D: mov esi, dword ptr [eax] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1007927F: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x10079281: push 4 */
    MEM32(ebp + (-0xC)) = eax; /* 0x10079283: mov dword ptr [ebp - 0xc], eax */
    edx = ebx; /* 0x10079286: mov edx, ebx */
    edi = POP32_VAL(esp); /* 0x10079288: pop edi */
L_10079289:
    eax = esi; /* 0x10079289: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x1007928B: sub eax, ebx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1007929B; /* 0x1007928D: je 0x1007929b */
L_1007928F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1007928F: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_10079296; /* 0x10079290: je 0x10079296 */
L_10079292:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x10079292: sub eax, edi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1007929E; /* 0x10079294: jne 0x1007929e */
L_10079296:
    PUSH32(esp, 9); /* 0x10079296: push 9 */
    edx = POP32_VAL(esp); /* 0x10079298: pop edx */
    goto L_100792A2; /* 0x10079299: jmp 0x100792a2 */
L_1007929B:
    PUSH32(esp, 3); /* 0x1007929B: push 3 */
    edx = POP32_VAL(esp); /* 0x1007929D: pop edx */
L_1007929E:
    /* test edx, edx */ /* 0x1007929E: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10079306; /* 0x100792A0: je 0x10079306 */
L_100792A2:
    ecx = MEM32(ebp + (-0xC)); /* 0x100792A2: mov ecx, dword ptr [ebp - 0xc] */
    eax = esi; /* 0x100792A5: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(ecx); if (eax == _d) { MEM32(ecx) = edx; } else { eax = _d; } } /* 0x100792A7: lock cmpxchg dword ptr [ecx], edx */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0x4)); /* 0x100792AB: mov ecx, dword ptr [ebp - 4] */
    edx = eax; /* 0x100792AE: mov edx, eax */
    /* cmp edx, esi */ /* 0x100792B0: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100792B8; /* 0x100792B2: je 0x100792b8 */
L_100792B4:
    esi = edx; /* 0x100792B4: mov esi, edx */
    RECOMP_BACKEDGE();
    goto L_10079289; /* 0x100792B6: jmp 0x10079289 */
L_100792B8:
    MEM8(ebp + (-0x8)) = (uint8_t)(LO8(ebx)); /* 0x100792B8: mov byte ptr [ebp - 8], bl */
    /* cmp esi, 1 */ /* 0x100792BB: cmp esi, 1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100792C5; /* 0x100792BE: je 0x100792c5 */
L_100792C0:
    /* cmp esi, 5 */ /* 0x100792C0: cmp esi, 5 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100792F4; /* 0x100792C3: jne 0x100792f4 */
L_100792C5:
    eax = MEM32(ecx + 0x4); /* 0x100792C5: mov eax, dword ptr [ecx + 4] */
    SET_LO8(ebx, 1); /* 0x100792C8: mov bl, 1 */
    edx = MEM32(ecx + 0xC); /* 0x100792CA: mov edx, dword ptr [ecx + 0xc] */
    ecx = edx; /* 0x100792CD: mov ecx, edx */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x100792CF: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x100792CF: shl eax, 4 */
    if (4u) _cf = (((eax) >> 3) & 1u); /* 0x100792D2: sar eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 4u);
    PUSH32(esp, eax); /* 0x100792D5: push eax */
    MEM8(ebp + (-0x8)) = (uint8_t)(LO8(ebx)); /* 0x100792D6: mov byte ptr [ebp - 8], bl */
    MEM32(ebp + (-0x10)) = edx; /* 0x100792D9: mov dword ptr [ebp - 0x10], edx */
    RECOMP_CALL(sub_1006A2EE); /* 0x100792DC: call 0x1006a2ee */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x100792E1: mov ecx, dword ptr [ebp - 4] */
    /* cmp esi, 5 */ /* 0x100792E4: cmp esi, 5 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100792F4; /* 0x100792E7: jne 0x100792f4 */
L_100792E9:
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x100792E9: push dword ptr [ebp - 0x10] */
    RECOMP_CALL(sub_100790EA); /* 0x100792EC: call 0x100790ea */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x100792F1: mov ecx, dword ptr [ebp - 4] */
L_100792F4:
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x100792F4: push dword ptr [ebp - 8] */
    PUSH32(esp, ecx); /* 0x100792F7: push ecx */
    RECOMP_CALL(sub_100794B1); /* 0x100792F8: call 0x100794b1 */
    RECOMP_FLAGS_IN();
    /* test LO8(ebx), LO8(ebx) */ /* 0x100792FD: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10079306; /* 0x100792FF: je 0x10079306 */
L_10079301:
    eax = MEM32(ebp + (-0xC)); /* 0x10079301: mov eax, dword ptr [ebp - 0xc] */
    { uint32_t _tmp = MEM32(eax); /* 0x10079304: xchg dword ptr [eax], edi */
      MEM32(eax) = edi;
      edi = _tmp; }
L_10079306:
    edi = POP32_VAL(esp); /* 0x10079306: pop edi */
    esi = POP32_VAL(esp); /* 0x10079307: pop esi */
    ebx = POP32_VAL(esp); /* 0x10079308: pop ebx */
    esp = ebp; /* 0x10079309: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007930B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1007930C: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1007930F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007930Fu);

L_1007930F:
    PUSH32(esp, ebp); /* 0x1007930F: push ebp */
    ebp = esp; /* 0x10079310: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x10079312: push ecx */
    PUSH32(esp, ebx); /* 0x10079313: push ebx */
    PUSH32(esp, esi); /* 0x10079314: push esi */
    PUSH32(esp, edi); /* 0x10079315: push edi */
    esi = ecx; /* 0x10079316: mov esi, ecx */
    RECOMP_CALL(sub_100787CF); /* 0x10079318: call 0x100787cf */
    RECOMP_FLAGS_IN();
    ebx = esi + 0x34; /* 0x1007931D: lea ebx, [esi + 0x34] */
    edi = eax; /* 0x10079320: mov edi, eax */
    edx = MEM32(ebx); /* 0x10079322: mov edx, dword ptr [ebx] */
    /* test edx, 0x3FFFFFFFu */ /* 0x10079324: test edx, 0x3fffffff */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x3FFFFFFFu);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100793D2; /* 0x1007932A: jne 0x100793d2 */
L_10079330:
    ecx = edx; /* 0x10079330: mov ecx, edx */
    eax = edx; /* 0x10079332: mov eax, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xC0000001u);
    ecx = ecx & 0xC0000001u; /* 0x10079334: and ecx, 0xc0000001 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | 1)); _flag_b = (uint32_t)((ecx | 1));
    ecx = ecx | 1; /* 0x1007933A: or ecx, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(ebx); if (eax == _d) { MEM32(ebx) = ecx; } else { eax = _d; } } /* 0x1007933D: lock cmpxchg dword ptr [ebx], ecx */
    _flag_k = FK_CMP;
    /* cmp eax, edx */ /* 0x10079341: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10079354; /* 0x10079343: je 0x10079354 */
L_10079345:
    edx = eax; /* 0x10079345: mov edx, eax */
    /* test eax, 0x3FFFFFFFu */ /* 0x10079347: test eax, 0x3fffffff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3FFFFFFFu);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100793D2; /* 0x1007934C: jne 0x100793d2 */
L_10079352:
    RECOMP_BACKEDGE();
    goto L_10079330; /* 0x10079352: jmp 0x10079330 */
L_10079354:
    ecx = edi; /* 0x10079354: mov ecx, edi */
    RECOMP_CALL(sub_10078857); /* 0x10079356: call 0x10078857 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1007935B: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007936D; /* 0x1007935D: jne 0x1007936d */
L_1007935F:
    /* cmp edi, esi */ /* 0x1007935F: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007936D; /* 0x10079361: je 0x1007936d */
L_10079363:
    PUSH32(esp, ecx); /* 0x10079363: push ecx */
    ecx = esi; /* 0x10079364: mov ecx, esi */
    RECOMP_CALL(sub_1007926E); /* 0x10079366: call 0x1007926e */
    RECOMP_FLAGS_IN();
    goto L_10079393; /* 0x1007936B: jmp 0x10079393 */
L_1007936D:
    ebx = esi + 0x38; /* 0x1007936D: lea ebx, [esi + 0x38] */
L_10079370:
    edi = MEM32(ebx); /* 0x10079370: mov edi, dword ptr [ebx] */
    /* cmp edi, 1 */ /* 0x10079372: cmp edi, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10079398; /* 0x10079375: je 0x10079398 */
L_10079377:
    /* cmp edi, 5 */ /* 0x10079377: cmp edi, 5 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10079398; /* 0x1007937A: je 0x10079398 */
L_1007937C:
    PUSH32(esp, 3); /* 0x1007937C: push 3 */
    ecx = POP32_VAL(esp); /* 0x1007937E: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007937F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(ebx); if (eax == _d) { MEM32(ebx) = ecx; } else { eax = _d; } } /* 0x10079381: lock cmpxchg dword ptr [ebx], ecx */
    _flag_k = FK_CMP;
    /* cmp eax, edi */ /* 0x10079385: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10079370; /* 0x10079387: jne 0x10079370 */
L_10079389:
    PUSH32(esp, 1); /* 0x10079389: push 1 */
    PUSH32(esp, ecx); /* 0x1007938B: push ecx */
    ecx = esi; /* 0x1007938C: mov ecx, esi */
    RECOMP_CALL(sub_100794B1); /* 0x1007938E: call 0x100794b1 */
    RECOMP_FLAGS_IN();
L_10079393:
    esi = MEM32(ebp + 0xC); /* 0x10079393: mov esi, dword ptr [ebp + 0xc] */
    goto L_100793CE; /* 0x10079396: jmp 0x100793ce */
L_10079398:
    eax = MEM32(esi + 0x4); /* 0x10079398: mov eax, dword ptr [esi + 4] */
    ecx = MEM32(esi + 0xC); /* 0x1007939B: mov ecx, dword ptr [esi + 0xc] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x1007939E: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x1007939E: shl eax, 4 */
    if (4u) _cf = (((eax) >> 3) & 1u); /* 0x100793A1: sar eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 4u);
    PUSH32(esp, eax); /* 0x100793A4: push eax */
    MEM32(ebp + (-0x4)) = ecx; /* 0x100793A5: mov dword ptr [ebp - 4], ecx */
    RECOMP_CALL(sub_1006A2EE); /* 0x100793A8: call 0x1006a2ee */
    RECOMP_FLAGS_IN();
    /* cmp edi, 5 */ /* 0x100793AD: cmp edi, 5 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100793BC; /* 0x100793B0: jne 0x100793bc */
L_100793B2:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x100793B2: push dword ptr [ebp - 4] */
    ecx = esi; /* 0x100793B5: mov ecx, esi */
    RECOMP_CALL(sub_100790EA); /* 0x100793B7: call 0x100790ea */
    RECOMP_FLAGS_IN();
L_100793BC:
    PUSH32(esp, 4); /* 0x100793BC: push 4 */
    eax = POP32_VAL(esp); /* 0x100793BE: pop eax */
    { uint32_t _tmp = MEM32(ebx); /* 0x100793BF: xchg dword ptr [ebx], eax */
      MEM32(ebx) = eax;
      eax = _tmp; }
    RECOMP_BACKEDGE();
    goto L_10079370; /* 0x100793C1: jmp 0x10079370 */
L_100793C3:
    PUSH32(esp, ecx); /* 0x100793C3: push ecx */
    ecx = esi; /* 0x100793C4: mov ecx, esi */
    RECOMP_CALL(sub_1007926E); /* 0x100793C6: call 0x1007926e */
    RECOMP_FLAGS_IN();
    esi = MEM32(esi + 0x68); /* 0x100793CB: mov esi, dword ptr [esi + 0x68] */
L_100793CE:
    /* test esi, esi */ /* 0x100793CE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100793C3; /* 0x100793D0: jne 0x100793c3 */
L_100793D2:
    edi = POP32_VAL(esp); /* 0x100793D2: pop edi */
    esi = POP32_VAL(esp); /* 0x100793D3: pop esi */
    ebx = POP32_VAL(esp); /* 0x100793D4: pop ebx */
    esp = ebp; /* 0x100793D5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100793D7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x100793D8: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_100793F6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100793F6u);

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

void sub_10079498(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10079498u);

L_10079498:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10079498: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx + 0x30) = eax; /* 0x1007949A: mov dword ptr [ecx + 0x30], eax */
    MEM32(ecx + 0x34) = eax; /* 0x1007949D: mov dword ptr [ecx + 0x34], eax */
    MEM32(ecx + 0x7C) = eax; /* 0x100794A0: mov dword ptr [ecx + 0x7c], eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x1Cu; /* 0x100794A3: add ecx, 0x1c */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_100794B0; /* 0x100794A6: je 0x100794b0 */
L_100794A8:
    MEM32(ecx) = eax; /* 0x100794A8: mov dword ptr [ecx], eax */
    MEM32(ecx + 0x4) = eax; /* 0x100794AA: mov dword ptr [ecx + 4], eax */
    MEM32(ecx + 0x8) = eax; /* 0x100794AD: mov dword ptr [ecx + 8], eax */
L_100794B0:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100794B0: ret  */
    RECOMP_REGS_OUT();
}

void sub_100794B1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100794B1u);

L_100794B1:
    PUSH32(esp, 8); /* 0x100794B1: push 8 */
    eax = 0x100DC1B4u; /* 0x100794B3: mov eax, 0x100dc1b4 */
    RECOMP_CALL(sub_100149A4); /* 0x100794B8: call 0x100149a4 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x100794BD: mov esi, ecx */
    ebx = esi + 0x1C; /* 0x100794BF: lea ebx, [esi + 0x1c] */
    eax = ebx + 0x4; /* 0x100794C2: lea eax, [ebx + 4] */
    MEM32(ebp + (-0x14)) = ebx; /* 0x100794C5: mov dword ptr [ebp - 0x14], ebx */
    ecx = eax; /* 0x100794C8: mov ecx, eax */
    MEM32(ebp + (-0x10)) = eax; /* 0x100794CA: mov dword ptr [ebp - 0x10], eax */
    RECOMP_CALL(sub_1006F11B); /* 0x100794CD: call 0x1006f11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x100794D2: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(ebp + 0xC), 0 */ /* 0x100794D6: cmp byte ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100794E8; /* 0x100794DA: jne 0x100794e8 */
L_100794DC:
    /* cmp MEM32(esi + 0x30), 0 */ /* 0x100794DC: cmp dword ptr [esi + 0x30], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x30)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_100794F1; /* 0x100794E0: jle 0x100794f1 */
L_100794E2:
    edi = MEM32(ebx); /* 0x100794E2: mov edi, dword ptr [ebx] */
    /* test edi, edi */ /* 0x100794E4: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007951A; /* 0x100794E6: jne 0x1007951a */
L_100794E8:
    ecx = MEM32(esi + 0xC); /* 0x100794E8: mov ecx, dword ptr [esi + 0xc] */
    PUSH32(esp, esi); /* 0x100794EB: push esi */
    RECOMP_CALL(sub_10069B8E); /* 0x100794EC: call 0x10069b8e */
    RECOMP_FLAGS_IN();
L_100794F1:
    edi = MEM32(ebx); /* 0x100794F1: mov edi, dword ptr [ebx] */
    /* test edi, edi */ /* 0x100794F3: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10079518; /* 0x100794F5: jmp 0x10079518 */
L_100794F7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100794F7: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edi + 0x18; /* 0x100794F9: lea eax, [edi + 0x18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100794FC: inc ecx */
    _flag_k = FK_INC;
    { uint32_t _tmp = MEM32(eax); /* 0x100794FD: xchg dword ptr [eax], ecx */
      MEM32(eax) = ecx;
      ecx = _tmp; }
    PUSH32(esp, 0xFFFFFC19u); /* 0x100794FF: push 0xfffffc19 */
    ecx = edi + (-0x5C); /* 0x10079504: lea ecx, [edi - 0x5c] */
    RECOMP_CALL(sub_1006A2EE); /* 0x10079507: call 0x1006a2ee */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x1007950C: push 0 */
    ecx = edi + (-0x5C); /* 0x1007950E: lea ecx, [edi - 0x5c] */
    RECOMP_CALL(sub_10069B8E); /* 0x10079511: call 0x10069b8e */
    RECOMP_FLAGS_IN();
    /* cmp edi, MEM32(ebx) */ /* 0x10079516: cmp edi, dword ptr [ebx] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_10079518:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1007951F; /* 0x10079518: je 0x1007951f */
L_1007951A:
    edi = MEM32(edi + 0x4); /* 0x1007951A: mov edi, dword ptr [edi + 4] */
    goto L_10079521; /* 0x1007951D: jmp 0x10079521 */
L_1007951F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1007951F: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_10079521:
    /* test edi, edi */ /* 0x10079521: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100794F7; /* 0x10079523: jne 0x100794f7 */
L_10079525:
    ecx = MEM32(ebp + (-0x10)); /* 0x10079525: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10079528: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(ecx), _sum = MEM32(ecx) + eax; eax = _old; MEM32(ecx) = _sum; } /* 0x1007952B: lock xadd dword ptr [ecx], eax */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_100149D7); /* 0x1007952F: call 0x100149d7 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x10079534: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_10079537(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10079537u);

L_10079537:
    PUSH32(esp, 4); /* 0x10079537: push 4 */
    eax = 0x100DC206u; /* 0x10079539: mov eax, 0x100dc206 */
    RECOMP_CALL(sub_100149A4); /* 0x1007953E: call 0x100149a4 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x98u); /* 0x10079543: push 0x98 */
    RECOMP_CALL(sub_1000EE11); /* 0x10079548: call 0x1000ee11 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1007954D: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x1007954F: pop ecx */
    MEM32(ebp + (-0x10)) = edi; /* 0x10079550: mov dword ptr [ebp - 0x10], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x10079553: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x10079557: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007958F; /* 0x10079559: je 0x1007958f */
L_1007955B:
    MEM32(edi) = 0x10067C18u; /* 0x1007955B: mov dword ptr [edi], 0x10067c18 */
    MEM32(edi + 0x4) = 1; /* 0x10079561: mov dword ptr [edi + 4], 1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10079568: push dword ptr [ebp + 8] */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1007956B: mov byte ptr [ebp - 4], 1 */
    ecx = edi + 0x8; /* 0x1007956F: lea ecx, [edi + 8] */
    MEM32(edi) = 0x100795A0u; /* 0x10079572: mov dword ptr [edi], 0x100795a0 */
    RECOMP_CALL(sub_100784C9); /* 0x10079578: call 0x100784c9 */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x90) = 0x100795E2u; /* 0x1007957D: mov dword ptr [edi + 0x90], 0x100795e2 */
    MEM32(edi + 0x94) = edi; /* 0x10079587: mov dword ptr [edi + 0x94], edi */
    goto L_10079591; /* 0x1007958D: jmp 0x10079591 */
L_1007958F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1007958F: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_10079591:
    eax = edi; /* 0x10079591: mov eax, edi */
    RECOMP_CALL(sub_100149D7); /* 0x10079593: call 0x100149d7 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10079598: ret  */
    RECOMP_REGS_OUT();
}

void sub_100795A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100795A0u);

L_100795A0:
    /* test LO8(eax), 0x95u */ /* 0x100795A0: test al, 0x95 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x95u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _seg_es = POP32_VAL(esp); /* 0x100795A2: pop es */
    { uint32_t _aa = MEM8(esi + (-0x71)), _ab = HI8(ebx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100795A3: adc byte ptr [esi - 0x71], bh */
      MEM8(esi + (-0x71)) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, _seg_es); /* 0x100795A6: push es */
    { uint32_t _aa = MEM8(edx + 0x4), _ab = HI8(ecx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100795A7: adc byte ptr [edx + 4], ch */
      MEM8(edx + 0x4) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = 0x100DC258u; /* 0x100795AA: mov eax, 0x100dc258 */
    RECOMP_CALL(sub_100149A4); /* 0x100795AF: call 0x100149a4 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x100795B4: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x100795B6: mov dword ptr [ebp - 0x10], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x100795B9: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi + 0x8; /* 0x100795BD: lea ecx, [esi + 8] */
    RECOMP_CALL(sub_100785DA); /* 0x100795C0: call 0x100785da */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x100795C5: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(esi) = 0x10067C18u; /* 0x100795C9: mov dword ptr [esi], 0x10067c18 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_100795D8; /* 0x100795CF: je 0x100795d8 */
L_100795D1:
    PUSH32(esp, esi); /* 0x100795D1: push esi */
    RECOMP_CALL(sub_1000ECE0); /* 0x100795D2: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100795D7: pop ecx */
L_100795D8:
    eax = esi; /* 0x100795D8: mov eax, esi */
    RECOMP_CALL(sub_100149D7); /* 0x100795DA: call 0x100149d7 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x100795DF: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_100795E2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100795E2u);

L_100795E2:
    PUSH32(esp, ebp); /* 0x100795E2: push ebp */
    ebp = esp; /* 0x100795E3: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x100795E5: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)((edx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edx | 0xFFFFFFFFu));
    edx = edx | 0xFFFFFFFFu; /* 0x100795E8: or edx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx + 0x4; /* 0x100795EB: lea eax, [ecx + 4] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + edx; edx = _old; MEM32(eax) = _sum; } /* 0x100795EE: lock xadd dword ptr [eax], edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x100795F2: dec edx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_100795FB; /* 0x100795F3: jne 0x100795fb */
L_100795F5:
    eax = MEM32(ecx); /* 0x100795F5: mov eax, dword ptr [ecx] */
    ebp = POP32_VAL(esp); /* 0x100795F7: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(eax + 0x4)); goto _ljump; }
L_100795FB:
    ebp = POP32_VAL(esp); /* 0x100795FB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100795FC: ret  */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_100795FD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100795FDu);

L_100795FD:
    ecx = MEM32(0x100E4504); /* 0x100795FD: mov ecx, dword ptr [0x100e4504] */
    /* test ecx, ecx */ /* 0x10079603: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10079610; /* 0x10079605: je 0x10079610 */
L_10079607:
    eax = MEM32(0x100E0330); /* 0x10079607: mov eax, dword ptr [0x100e0330] */
    _flag_a = (uint32_t)((eax ^ ecx)); _flag_b = (uint32_t)((eax ^ ecx));
    eax = eax ^ ecx; /* 0x1007960C: xor eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ICALL(eax); /* 0x1007960E: call eax */
    RECOMP_FLAGS_IN();
L_10079610:
    PUSH32(esp, 0x17u); /* 0x10079610: push 0x17 */
    RECOMP_ICALL(MEM32(0x100E5054)); /* 0x10079612: call dword ptr [0x100e5054] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10079618: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10079621; /* 0x1007961A: je 0x10079621 */
L_1007961C:
    PUSH32(esp, 5); /* 0x1007961C: push 5 */
    ecx = POP32_VAL(esp); /* 0x1007961E: pop ecx */
    void_lift_trap(0x1007961Fu, "int 0x29");
L_10079621:
    PUSH32(esp, esi); /* 0x10079621: push esi */
    PUSH32(esp, 1); /* 0x10079622: push 1 */
    esi = 0x40000015u; /* 0x10079624: mov esi, 0x40000015 */
    PUSH32(esp, esi); /* 0x10079629: push esi */
    PUSH32(esp, 3); /* 0x1007962A: push 3 */
    RECOMP_CALL(sub_100A4519); /* 0x1007962C: call 0x100a4519 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x10079631: push esi */
    RECOMP_CALL(sub_100A47F7); /* 0x10079632: call 0x100a47f7 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10079637: add esp, 0x10 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x1007963A: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007963B: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007963C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007963Cu);

L_1007963C:
    PUSH32(esp, ebp); /* 0x1007963C: push ebp */
    ebp = esp; /* 0x1007963D: mov ebp, esp */
    eax = MEM32(0x100E0330); /* 0x1007963F: mov eax, dword ptr [0x100e0330] */
    _flag_a = (uint32_t)((eax ^ MEM32(ebp + 0x8))); _flag_b = (uint32_t)((eax ^ MEM32(ebp + 0x8)));
    eax = eax ^ MEM32(ebp + 0x8); /* 0x10079644: xor eax, dword ptr [ebp + 8] */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x100E4504) = eax; /* 0x10079647: mov dword ptr [0x100e4504], eax */
    ebp = POP32_VAL(esp); /* 0x1007964C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007964D: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007965E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007965Eu);

L_1007965E:
    PUSH32(esp, ebp); /* 0x1007965E: push ebp */
    ebp = esp; /* 0x1007965F: mov ebp, esp */
    PUSH32(esp, esi); /* 0x10079661: push esi */
    esi = ecx; /* 0x10079662: mov esi, ecx */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x10079664: push dword ptr [esi + 4] */
    MEM32(esi) = 0x10067BFCu; /* 0x10079667: mov dword ptr [esi], 0x10067bfc */
    RECOMP_CALL(sub_10012BD5); /* 0x1007966D: call 0x10012bd5 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x10079672: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ecx = POP32_VAL(esp); /* 0x10079676: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_10079680; /* 0x10079677: je 0x10079680 */
L_10079679:
    PUSH32(esp, esi); /* 0x10079679: push esi */
    RECOMP_CALL(sub_1000ECE0); /* 0x1007967A: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007967F: pop ecx */
L_10079680:
    eax = esi; /* 0x10079680: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x10079682: pop esi */
    ebp = POP32_VAL(esp); /* 0x10079683: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10079684: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_10079687(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10079687u);

L_10079687:
    PUSH32(esp, 8); /* 0x10079687: push 8 */
    eax = 0x100DC2B8u; /* 0x10079689: mov eax, 0x100dc2b8 */
    RECOMP_CALL(sub_100149A4); /* 0x1007968E: call 0x100149a4 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x10079693: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x10079695: mov dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x10079698: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0; /* 0x1007969C: and dword ptr [ebp - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x100796A0: push esi */
    RECOMP_CALL(sub_1007B94B); /* 0x100796A1: call 0x1007b94b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x100796A6: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x100796AA: push esi */
    MEM32(ebp + (-0x10)) = 1; /* 0x100796AB: mov dword ptr [ebp - 0x10], 1 */
    RECOMP_CALL(sub_1007B95E); /* 0x100796B2: call 0x1007b95e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100796B7: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100796B8: pop ecx */
    eax = esi; /* 0x100796B9: mov eax, esi */
    RECOMP_CALL(sub_100149D7); /* 0x100796BB: call 0x100149d7 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100796C0: ret  */
    RECOMP_REGS_OUT();
}

void sub_100796C1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100796C1u);

L_100796C1:
    PUSH32(esp, ebp); /* 0x100796C1: push ebp */
    ebp = esp; /* 0x100796C2: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x100796C4: push ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x100796C5: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x100796C9: push esi */
    esi = ecx; /* 0x100796CA: mov esi, ecx */
    RECOMP_CALL(sub_10079687); /* 0x100796CC: call 0x10079687 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x100796D1: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x100796D3: pop esi */
    esp = ebp; /* 0x100796D4: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100796D6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100796D7: ret  */
    RECOMP_REGS_OUT();
}

void sub_10079747(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10079747u);

L_10079747:
    PUSH32(esp, 0x14u); /* 0x10079747: push 0x14 */
    eax = 0x100DC308u; /* 0x10079749: mov eax, 0x100dc308 */
    RECOMP_CALL(sub_100149A4); /* 0x1007974E: call 0x100149a4 */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x10079753: mov edi, ecx */
    esi = MEM32(edi + 0x18); /* 0x10079755: mov esi, dword ptr [edi + 0x18] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFCu);
    esi = esi & 0xFFFFFFFCu; /* 0x10079758: and esi, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100797C4; /* 0x1007975B: je 0x100797c4 */
L_1007975D:
    /* cmp esi, 0xCu */ /* 0x1007975D: cmp esi, 0xc */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100797C4; /* 0x10079760: je 0x100797c4 */
L_10079762:
    eax = ebp + (-0x20); /* 0x10079762: lea eax, [ebp - 0x20] */
    PUSH32(esp, esi); /* 0x10079765: push esi */
    PUSH32(esp, eax); /* 0x10079766: push eax */
    RECOMP_CALL(sub_1007B8F9); /* 0x10079767: call 0x1007b8f9 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1007976C: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x10079770: push esi */
    RECOMP_CALL(sub_1007B99C); /* 0x10079771: call 0x1007b99c */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x10079776: push esi */
    RECOMP_CALL(sub_1000ECE0); /* 0x10079777: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(edi + 0x18)); _flag_b = (uint32_t)(0);
    MEM32(edi + 0x18) = MEM32(edi + 0x18) & 0; /* 0x1007977C: and dword ptr [edi + 0x18], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10079780: add esp, 0x10 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_10013576); /* 0x10079783: call 0x10013576 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x10079788: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100797B6; /* 0x1007978A: jne 0x100797b6 */
L_1007978C:
    eax = ebp + (-0x20); /* 0x1007978C: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x1007978F: push eax */
    eax = ebp + (-0x18); /* 0x10079790: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x10079793: push eax */
    RECOMP_CALL(sub_1007B8F9); /* 0x10079794: call 0x1007b8f9 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x18); /* 0x10079799: lea eax, [ebp - 0x18] */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1007979C: mov byte ptr [ebp - 4], 1 */
    PUSH32(esp, eax); /* 0x100797A0: push eax */
    RECOMP_CALL(sub_1007B9AB); /* 0x100797A1: call 0x1007b9ab */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x18); /* 0x100797A6: lea eax, [ebp - 0x18] */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x100797A9: mov byte ptr [ebp - 4], 0 */
    PUSH32(esp, eax); /* 0x100797AD: push eax */
    RECOMP_CALL(sub_1007B99C); /* 0x100797AE: call 0x1007b99c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100797B3: add esp, 0x10 */
    _flag_k = FK_ADD;
L_100797B6:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x100797B6: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x20); /* 0x100797BA: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x100797BD: push eax */
    RECOMP_CALL(sub_1007B99C); /* 0x100797BE: call 0x1007b99c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100797C3: pop ecx */
L_100797C4:
    RECOMP_CALL(sub_100149D7); /* 0x100797C4: call 0x100149d7 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100797C9: ret  */
    RECOMP_REGS_OUT();
}

void sub_100797CA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100797CAu);

L_100797CA:
    PUSH32(esp, ebp); /* 0x100797CA: push ebp */
    ebp = esp; /* 0x100797CB: mov ebp, esp */
    PUSH32(esp, esi); /* 0x100797CD: push esi */
    esi = ecx + 0x18; /* 0x100797CE: lea esi, [ecx + 0x18] */
    edx = MEM32(esi); /* 0x100797D1: mov edx, dword ptr [esi] */
    ecx = edx; /* 0x100797D3: mov ecx, edx */
    eax = edx; /* 0x100797D5: mov eax, edx */
    goto L_100797DD; /* 0x100797D7: jmp 0x100797dd */
L_100797D9:
    edx = eax; /* 0x100797D9: mov edx, eax */
    ecx = eax; /* 0x100797DB: mov ecx, eax */
L_100797DD:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFCu);
    ecx = ecx & 0xFFFFFFFCu; /* 0x100797DD: and ecx, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | MEM32(ebp + 0x8))); _flag_b = (uint32_t)((ecx | MEM32(ebp + 0x8)));
    ecx = ecx | MEM32(ebp + 0x8); /* 0x100797E0: or ecx, dword ptr [ebp + 8] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(esi); if (eax == _d) { MEM32(esi) = ecx; } else { eax = _d; } } /* 0x100797E3: lock cmpxchg dword ptr [esi], ecx */
    _flag_k = FK_CMP;
    /* cmp eax, edx */ /* 0x100797E7: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_100797D9; /* 0x100797E9: jne 0x100797d9 */
L_100797EB:
    esi = POP32_VAL(esp); /* 0x100797EB: pop esi */
    ebp = POP32_VAL(esp); /* 0x100797EC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x100797ED: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1007981B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007981Bu);

L_1007981B:
    eax = MEM32(ecx + 0x4); /* 0x1007981B: mov eax, dword ptr [ecx + 4] */
    PUSH32(esp, ebx); /* 0x1007981E: push ebx */
    ebx = 0x0FFFFFFFu; /* 0x1007981F: mov ebx, 0xfffffff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    eax = eax & ebx; /* 0x10079824: and eax, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x10079826: push esi */
    /* cmp eax, ebx */ /* 0x10079827: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007982F; /* 0x10079829: je 0x1007982f */
L_1007982B:
    esi = MEM32(ecx); /* 0x1007982B: mov esi, dword ptr [ecx] */
    goto L_10079831; /* 0x1007982D: jmp 0x10079831 */
L_1007982F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1007982F: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_10079831:
    PUSH32(esp, 0); /* 0x10079831: push 0 */
    RECOMP_CALL(sub_10079895); /* 0x10079833: call 0x10079895 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x10079838: mov ecx, eax */
    goto L_10079877; /* 0x1007983A: jmp 0x10079877 */
L_1007983C:
    /* test ecx, ecx */ /* 0x1007983C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10079884; /* 0x1007983E: jne 0x10079884 */
L_10079840:
    eax = MEM32(esi + 0x4); /* 0x10079840: mov eax, dword ptr [esi + 4] */
    if (28u) _cf = (((eax) >> 27) & 1u); /* 0x10079843: sar eax, 0x1c */
    if (28u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 28u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 28u);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(eax, LO8(eax) & 1); /* 0x10079846: and al, 1 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10079850; /* 0x10079848: je 0x10079850 */
L_1007984A:
    /* test MEM8(esi + 0x18), 3 */ /* 0x1007984A: test byte ptr [esi + 0x18], 3 */
    _flag_a = (uint32_t)(MEM8(esi + 0x18)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10079880; /* 0x1007984E: jne 0x10079880 */
L_10079850:
    /* test LO8(eax), LO8(eax) */ /* 0x10079850: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007985D; /* 0x10079852: jne 0x1007985d */
L_10079854:
    eax = MEM32(esi + 0x64); /* 0x10079854: mov eax, dword ptr [esi + 0x64] */
    /* cmp MEM32(eax + 0x34), 0 */ /* 0x10079857: cmp dword ptr [eax + 0x34], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x34)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10079880; /* 0x1007985B: jne 0x10079880 */
L_1007985D:
    PUSH32(esp, 0); /* 0x1007985D: push 0 */
    ecx = esi; /* 0x1007985F: mov ecx, esi */
    RECOMP_CALL(sub_10079895); /* 0x10079861: call 0x10079895 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x10079866: mov ecx, eax */
    eax = MEM32(esi + 0x4); /* 0x10079868: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    eax = eax & ebx; /* 0x1007986B: and eax, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ebx */ /* 0x1007986D: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10079875; /* 0x1007986F: je 0x10079875 */
L_10079871:
    esi = MEM32(esi); /* 0x10079871: mov esi, dword ptr [esi] */
    goto L_10079877; /* 0x10079873: jmp 0x10079877 */
L_10079875:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x10079875: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_10079877:
    /* test esi, esi */ /* 0x10079877: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007983C; /* 0x10079879: jne 0x1007983c */
L_1007987B:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x1007987B: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_1007987D:
    esi = POP32_VAL(esp); /* 0x1007987D: pop esi */
    ebx = POP32_VAL(esp); /* 0x1007987E: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007987F: ret  */
L_10079880:
    SET_LO8(eax, 1); /* 0x10079880: mov al, 1 */
    RECOMP_BACKEDGE();
    goto L_1007987D; /* 0x10079882: jmp 0x1007987d */
L_10079884:
    /* cmp ecx, 2 */ /* 0x10079884: cmp ecx, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007987B; /* 0x10079887: je 0x1007987b */
L_10079889:
    ecx = MEM32(ecx + 0x8); /* 0x10079889: mov ecx, dword ptr [ecx + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007988C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x1007988E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x10079890: setne al */
    RECOMP_BACKEDGE();
    goto L_1007987D; /* 0x10079893: jmp 0x1007987d */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10079895(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10079895u);

L_10079895:
    PUSH32(esp, ebp); /* 0x10079895: push ebp */
    ebp = esp; /* 0x10079896: mov ebp, esp */
    eax = MEM32(ecx + 0x8); /* 0x10079898: mov eax, dword ptr [ecx + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1007989B: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test LO8(eax), 1 */ /* 0x1007989D: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100798B0; /* 0x1007989F: je 0x100798b0 */
L_100798A1:
    ecx = eax; /* 0x100798A1: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    ecx = ecx & 0xFFFFFFFEu; /* 0x100798A3: and ecx, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100798AD; /* 0x100798A6: je 0x100798ad */
L_100798A8:
    eax = MEM32(ecx + 0x10); /* 0x100798A8: mov eax, dword ptr [ecx + 0x10] */
    goto L_100798B0; /* 0x100798AB: jmp 0x100798b0 */
L_100798AD:
    PUSH32(esp, 2); /* 0x100798AD: push 2 */
    eax = POP32_VAL(esp); /* 0x100798AF: pop eax */
L_100798B0:
    edx = MEM32(ebp + 0x8); /* 0x100798B0: mov edx, dword ptr [ebp + 8] */
    /* test edx, edx */ /* 0x100798B3: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100798B9; /* 0x100798B5: je 0x100798b9 */
L_100798B7:
    MEM32(edx) = ecx; /* 0x100798B7: mov dword ptr [edx], ecx */
L_100798B9:
    ebp = POP32_VAL(esp); /* 0x100798B9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x100798BA: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_10079ACA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10079ACAu);

L_10079ACA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10079ACA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x10079ACC: push esi */
    esi = ecx + 0x20; /* 0x10079ACD: lea esi, [ecx + 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10079AD0: inc eax */
    _flag_k = FK_INC;
    { uint32_t _tmp = MEM32(esi); /* 0x10079AD1: xchg dword ptr [esi], eax */
      MEM32(esi) = eax;
      eax = _tmp; }
    PUSH32(esp, 0); /* 0x10079AD3: push 0 */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x10079AD5: push -1 */
    PUSH32(esp, MEM32(ecx + 0xC)); /* 0x10079AD7: push dword ptr [ecx + 0xc] */
    RECOMP_ICALL(MEM32(0x100E5144)); /* 0x10079ADA: call dword ptr [0x100e5144] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10079AE0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _tmp = MEM32(esi); /* 0x10079AE2: xchg dword ptr [esi], eax */
      MEM32(esi) = eax;
      eax = _tmp; }
    esi = POP32_VAL(esp); /* 0x10079AE4: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10079AE5: ret  */
    RECOMP_REGS_OUT();
}

void sub_10079AE6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10079AE6u);

L_10079AE6:
    PUSH32(esp, ebp); /* 0x10079AE6: push ebp */
    ebp = esp; /* 0x10079AE7: mov ebp, esp */
    PUSH32(esp, esi); /* 0x10079AE9: push esi */
    esi = MEM32(ebp + 0x8); /* 0x10079AEA: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, 0); /* 0x10079AED: push 0 */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x10079AEF: push -1 */
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x10079AF1: push dword ptr [esi + 0xc] */
    RECOMP_ICALL(MEM32(0x100E5144)); /* 0x10079AF4: call dword ptr [0x100e5144] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x10079AFA: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi + 0x20; /* 0x10079AFC: lea eax, [esi + 0x20] */
    { uint32_t _tmp = MEM32(eax); /* 0x10079AFF: xchg dword ptr [eax], edx */
      MEM32(eax) = edx;
      edx = _tmp; }
    eax = MEM32(esi); /* 0x10079B01: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x10079B03: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x10079B05: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x10079B08: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x10079B0A: mov ecx, esi */
    PUSH32(esp, 1); /* 0x10079B0C: push 1 */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x10079B0E: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_1007A591); /* 0x10079B11: call 0x1007a591 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10079B16: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x10079B18: pop esi */
    ebp = POP32_VAL(esp); /* 0x10079B19: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10079B1A: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_10079C69(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10079C69u);

L_10079C69:
    PUSH32(esp, ebp); /* 0x10079C69: push ebp */
    ebp = esp; /* 0x10079C6A: mov ebp, esp */
    PUSH32(esp, esi); /* 0x10079C6C: push esi */
    esi = MEM32(ebp + 0x8); /* 0x10079C6D: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x10079C70: push edi */
    edi = ecx; /* 0x10079C71: mov edi, ecx */
    /* cmp MEM8(edi + 0x2C), 0 */ /* 0x10079C73: cmp byte ptr [edi + 0x2c], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x2C)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10079CE8; /* 0x10079C77: jne 0x10079ce8 */
L_10079C79:
    ecx = MEM32(esi + 0x14); /* 0x10079C79: mov ecx, dword ptr [esi + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10079C7C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_10079C7E:
    /* cmp ecx, MEM32(eax * 4 + 0x10067C70) */ /* 0x10079C7E: cmp ecx, dword ptr [eax*4 + 0x10067c70] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax * 4 + 0x10067C70));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10079C8F; /* 0x10079C85: je 0x10079c8f */
L_10079C87:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10079C87: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, 4 */ /* 0x10079C88: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_10079CE8; /* 0x10079C8B: jge 0x10079ce8 */
L_10079C8D:
    RECOMP_BACKEDGE();
    goto L_10079C7E; /* 0x10079C8D: jmp 0x10079c7e */
L_10079C8F:
    PUSH32(esp, ebx); /* 0x10079C8F: push ebx */
    ebx = edi + 0x8; /* 0x10079C90: lea ebx, [edi + 8] */
    ebx = ebx + eax * 8; /* 0x10079C93: lea ebx, [ebx + eax*8] */
    PUSH32(esp, ebx); /* 0x10079C96: push ebx */
    RECOMP_ICALL(MEM32(0x100E5134)); /* 0x10079C97: call dword ptr [0x100e5134] */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO16(eax); /* 0x10079C9D: movzx eax, ax */
    /* cmp eax, MEM32(0x100E4524) */ /* 0x10079CA0: cmp eax, dword ptr [0x100e4524] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x100E4524));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_10079CE7; /* 0x10079CA6: jge 0x10079ce7 */
L_10079CA8:
    eax = esi + 0x3C; /* 0x10079CA8: lea eax, [esi + 0x3c] */
    PUSH32(esp, eax); /* 0x10079CAB: push eax */
    PUSH32(esp, ebx); /* 0x10079CAC: push ebx */
    RECOMP_ICALL(MEM32(0x100E5138)); /* 0x10079CAD: call dword ptr [0x100e5138] */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(edi + 0x2C), 0 */ /* 0x10079CB3: cmp byte ptr [edi + 0x2c], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x2C)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10079CE5; /* 0x10079CB7: je 0x10079ce5 */
L_10079CB9:
    PUSH32(esp, ebx); /* 0x10079CB9: push ebx */
    RECOMP_ICALL(MEM32(0x100E5130)); /* 0x10079CBA: call dword ptr [0x100e5130] */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x10079CC0: mov edx, eax */
    ecx = edx + (-0x3C); /* 0x10079CC2: lea ecx, [edx - 0x3c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edx);
    _cf = (edx) != 0;
    edx = (uint32_t)(-(int32_t)edx); /* 0x10079CC5: neg edx */
    _flag_k = FK_CMP;
    { uint32_t _sa = edx, _sb = edx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x10079CC7: sbb edx, edx */
      edx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    edx = edx & ecx; /* 0x10079CC9: and edx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10079CE5; /* 0x10079CCB: je 0x10079ce5 */
L_10079CCD:
    eax = MEM32(edi); /* 0x10079CCD: mov eax, dword ptr [edi] */
    ecx = edi; /* 0x10079CCF: mov ecx, edi */
    esi = MEM32(edx + 0x3C); /* 0x10079CD1: mov esi, dword ptr [edx + 0x3c] */
    PUSH32(esp, edx); /* 0x10079CD4: push edx */
    RECOMP_ICALL(MEM32(eax + 0x20)); /* 0x10079CD5: call dword ptr [eax + 0x20] */
    RECOMP_FLAGS_IN();
    edx = esi; /* 0x10079CD8: mov edx, esi */
    eax = esi + (-0x3C); /* 0x10079CDA: lea eax, [esi - 0x3c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edx);
    _cf = (edx) != 0;
    edx = (uint32_t)(-(int32_t)edx); /* 0x10079CDD: neg edx */
    _flag_k = FK_CMP;
    { uint32_t _sa = edx, _sb = edx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x10079CDF: sbb edx, edx */
      edx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    edx = edx & eax; /* 0x10079CE1: and edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10079CCD; /* 0x10079CE3: jne 0x10079ccd */
L_10079CE5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x10079CE5: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_10079CE7:
    ebx = POP32_VAL(esp); /* 0x10079CE7: pop ebx */
L_10079CE8:
    /* test esi, esi */ /* 0x10079CE8: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10079CF4; /* 0x10079CEA: je 0x10079cf4 */
L_10079CEC:
    eax = MEM32(edi); /* 0x10079CEC: mov eax, dword ptr [edi] */
    ecx = edi; /* 0x10079CEE: mov ecx, edi */
    PUSH32(esp, esi); /* 0x10079CF0: push esi */
    RECOMP_ICALL(MEM32(eax + 0x20)); /* 0x10079CF1: call dword ptr [eax + 0x20] */
    RECOMP_FLAGS_IN();
L_10079CF4:
    edi = POP32_VAL(esp); /* 0x10079CF4: pop edi */
    esi = POP32_VAL(esp); /* 0x10079CF5: pop esi */
    ebp = POP32_VAL(esp); /* 0x10079CF6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10079CF7: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_10079DC3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10079DC3u);

L_10079DC3:
    PUSH32(esp, 4); /* 0x10079DC3: push 4 */
    eax = 0x100DC3B0u; /* 0x10079DC5: mov eax, 0x100dc3b0 */
    RECOMP_CALL(sub_100149A4); /* 0x10079DCA: call 0x100149a4 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x10079DCF: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x10079DD1: mov dword ptr [ebp - 0x10], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x10079DD4: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(esi); /* 0x10079DD8: mov ecx, dword ptr [esi] */
    /* test ecx, ecx */ /* 0x10079DDA: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10079DE3; /* 0x10079DDC: je 0x10079de3 */
L_10079DDE:
    eax = MEM32(ecx); /* 0x10079DDE: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x10079DE0: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
L_10079DE3:
    ecx = MEM32(esi + 0x4); /* 0x10079DE3: mov ecx, dword ptr [esi + 4] */
    /* test ecx, ecx */ /* 0x10079DE6: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10079DEF; /* 0x10079DE8: je 0x10079def */
L_10079DEA:
    eax = MEM32(ecx); /* 0x10079DEA: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x10079DEC: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
L_10079DEF:
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x10079DEF: push dword ptr [esi + 8] */
    RECOMP_ICALL(MEM32(0x100E5188)); /* 0x10079DF2: call dword ptr [0x100e5188] */
    RECOMP_FLAGS_IN();
    eax = esi + 0xC; /* 0x10079DF8: lea eax, [esi + 0xc] */
    PUSH32(esp, eax); /* 0x10079DFB: push eax */
    RECOMP_ICALL(MEM32(0x100E5040)); /* 0x10079DFC: call dword ptr [0x100e5040] */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_100149D7); /* 0x10079E02: call 0x100149d7 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10079E07: ret  */
    RECOMP_REGS_OUT();
}

void sub_10079E08(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10079E08u);

L_10079E08:
    PUSH32(esp, ebp); /* 0x10079E08: push ebp */
    ebp = esp; /* 0x10079E09: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x10079E0B: push ecx */
    PUSH32(esp, ebx); /* 0x10079E0C: push ebx */
    PUSH32(esp, esi); /* 0x10079E0D: push esi */
    PUSH32(esp, edi); /* 0x10079E0E: push edi */
    edi = ecx; /* 0x10079E0F: mov edi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x10079E11: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x8); /* 0x10079E13: mov ecx, dword ptr [ebp + 8] */
    ebx = 0x10067C70u; /* 0x10079E16: mov ebx, 0x10067c70 */
    eax = edi + 0x8; /* 0x10079E1B: lea eax, [edi + 8] */
    MEM32(ebp + (-0x4)) = eax; /* 0x10079E1E: mov dword ptr [ebp - 4], eax */
L_10079E21:
    /* cmp ecx, MEM32(ebx) */ /* 0x10079E21: cmp ecx, dword ptr [ebx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_10079E3F; /* 0x10079E23: ja 0x10079e3f */
L_10079E25:
    PUSH32(esp, eax); /* 0x10079E25: push eax */
    RECOMP_ICALL(MEM32(0x100E512C)); /* 0x10079E26: call dword ptr [0x100e512c] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x10079E2C: mov esi, eax */
    eax = esi + (-0x3C); /* 0x10079E2E: lea eax, [esi - 0x3c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(esi);
    _cf = (esi) != 0;
    esi = (uint32_t)(-(int32_t)esi); /* 0x10079E31: neg esi */
    _flag_k = FK_CMP;
    { uint32_t _sa = esi, _sb = esi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x10079E33: sbb esi, esi */
      esi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    esi = esi & eax; /* 0x10079E35: and esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10079E62; /* 0x10079E37: jne 0x10079e62 */
L_10079E39:
    eax = MEM32(ebp + (-0x4)); /* 0x10079E39: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(ebp + 0x8); /* 0x10079E3C: mov ecx, dword ptr [ebp + 8] */
L_10079E3F:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 4; /* 0x10079E3F: add ebx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x10079E42: add eax, 8 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x10079E45: mov dword ptr [ebp - 4], eax */
    /* cmp ebx, 0x10067C80u */ /* 0x10079E48: cmp ebx, 0x10067c80 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x10067C80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_10079E21; /* 0x10079E4E: jl 0x10079e21 */
L_10079E50:
    /* test esi, esi */ /* 0x10079E50: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10079E62; /* 0x10079E52: jne 0x10079e62 */
L_10079E54:
    eax = MEM32(edi); /* 0x10079E54: mov eax, dword ptr [edi] */
    PUSH32(esp, ecx); /* 0x10079E56: push ecx */
    ecx = edi; /* 0x10079E57: mov ecx, edi */
    RECOMP_ICALL(MEM32(eax + 0x1C)); /* 0x10079E59: call dword ptr [eax + 0x1c] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x10079E5C: mov esi, eax */
    /* test esi, esi */ /* 0x10079E5E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10079E6D; /* 0x10079E60: je 0x10079e6d */
L_10079E62:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10079E62: push dword ptr [ebp + 0xc] */
    edx = MEM32(edi); /* 0x10079E65: mov edx, dword ptr [edi] */
    ecx = edi; /* 0x10079E67: mov ecx, edi */
    PUSH32(esp, esi); /* 0x10079E69: push esi */
    RECOMP_ICALL(MEM32(edx + 0x24)); /* 0x10079E6A: call dword ptr [edx + 0x24] */
    RECOMP_FLAGS_IN();
L_10079E6D:
    edi = POP32_VAL(esp); /* 0x10079E6D: pop edi */
    eax = esi; /* 0x10079E6E: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x10079E70: pop esi */
    ebx = POP32_VAL(esp); /* 0x10079E71: pop ebx */
    esp = ebp; /* 0x10079E72: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10079E74: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x10079E75: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_10079ED5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10079ED5u);

L_10079ED5:
    PUSH32(esp, ebp); /* 0x10079ED5: push ebp */
    ebp = esp; /* 0x10079ED6: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x10079ED8: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0xC); /* 0x10079EDB: mov ecx, dword ptr [ebp + 0xc] */
    /* cmp MEM32(eax + 0x18), ecx */ /* 0x10079EDE: cmp dword ptr [eax + 0x18], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x18)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10079EF9; /* 0x10079EE1: je 0x10079ef9 */
L_10079EE3:
    PUSH32(esp, ecx); /* 0x10079EE3: push ecx */
    PUSH32(esp, MEM32(eax + 0x8)); /* 0x10079EE4: push dword ptr [eax + 8] */
    MEM32(eax + 0x18) = ecx; /* 0x10079EE7: mov dword ptr [eax + 0x18], ecx */
    RECOMP_ICALL(MEM32(0x100E5158)); /* 0x10079EEA: call dword ptr [0x100e5158] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10079EF0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10079EF9; /* 0x10079EF2: jne 0x10079ef9 */
L_10079EF4:
    RECOMP_CALL(sub_1006EE8E); /* 0x10079EF4: call 0x1006ee8e */
    RECOMP_FLAGS_IN();
L_10079EF9:
    ebp = POP32_VAL(esp); /* 0x10079EF9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x10079EFA: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_10079F6C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10079F6Cu);

L_10079F6C:
    PUSH32(esp, ebp); /* 0x10079F6C: push ebp */
    ebp = esp; /* 0x10079F6D: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x10079F6F: mov ecx, dword ptr [ebp + 0xc] */
    eax = MEM32(ecx); /* 0x10079F72: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x10079F74: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x10079F77: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x10079F78: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_10079F7B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10079F7Bu);

L_10079F7B:
    PUSH32(esp, ebp); /* 0x10079F7B: push ebp */
    ebp = esp; /* 0x10079F7C: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x10079F7E: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx); /* 0x10079F81: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x10079F83: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x10079F86: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x10079F87: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_10079F8A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10079F8Au);

L_10079F8A:
    PUSH32(esp, ebp); /* 0x10079F8A: push ebp */
    ebp = esp; /* 0x10079F8B: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x10079F8D: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) & 0; /* 0x10079F90: and dword ptr [ecx + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx + 0x8) = eax; /* 0x10079F94: mov dword ptr [ecx + 8], eax */
    SET_LO8(eax, MEM8(ebp + 0xC)); /* 0x10079F97: mov al, byte ptr [ebp + 0xc] */
    MEM8(ecx + 0xC) = (uint8_t)(LO8(eax)); /* 0x10079F9A: mov byte ptr [ecx + 0xc], al */
    eax = ecx; /* 0x10079F9D: mov eax, ecx */
    MEM32(ecx) = 0x10067CB4u; /* 0x10079F9F: mov dword ptr [ecx], 0x10067cb4 */
    ebp = POP32_VAL(esp); /* 0x10079FA5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x10079FA6: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_10079FA9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10079FA9u);

L_10079FA9:
    PUSH32(esp, ebp); /* 0x10079FA9: push ebp */
    ebp = esp; /* 0x10079FAA: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x10079FAC: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x10079FAF: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x10079FB2: push ebx */
    PUSH32(esp, esi); /* 0x10079FB3: push esi */
    PUSH32(esp, edi); /* 0x10079FB4: push edi */
    edi = ecx; /* 0x10079FB5: mov edi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10079FB7: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi + 0x4), ebx */ /* 0x10079FB9: cmp dword ptr [edi + 4], ebx */
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007A05B; /* 0x10079FBC: jne 0x1007a05b */
L_10079FC2:
    RECOMP_CALL(sub_10023E7E); /* 0x10079FC2: call 0x10023e7e */
    RECOMP_FLAGS_IN();
    /* cmp eax, 3 */ /* 0x10079FC7: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1007A007; /* 0x10079FCA: jl 0x1007a007 */
L_10079FCC:
    SET_LO8(eax, MEM8(edi + 0xC)); /* 0x10079FCC: mov al, byte ptr [edi + 0xc] */
    PUSH32(esp, ebx); /* 0x10079FCF: push ebx */
    MEM8(esp + 0x13) = (uint8_t)(LO8(eax)); /* 0x10079FD0: mov byte ptr [esp + 0x13], al */
    eax = MEM32(edi + 0x8); /* 0x10079FD4: mov eax, dword ptr [edi + 8] */
    PUSH32(esp, edi); /* 0x10079FD7: push edi */
    PUSH32(esp, 0x10079F6Cu); /* 0x10079FD8: push 0x10079f6c */
    MEM32(esp + 0x1C) = eax; /* 0x10079FDD: mov dword ptr [esp + 0x1c], eax */
    RECOMP_CALL(sub_100244BF); /* 0x10079FE1: call 0x100244bf */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10079FE6: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10079FE9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10079FFE; /* 0x10079FEB: je 0x10079ffe */
L_10079FED:
    SET_LO8(edx, MEM8(esp + 0xF)); /* 0x10079FED: mov dl, byte ptr [esp + 0xf] */
    ecx = MEM32(esp + 0x10); /* 0x10079FF1: mov ecx, dword ptr [esp + 0x10] */
    PUSH32(esp, eax); /* 0x10079FF5: push eax */
    RECOMP_CALL(sub_10026FED); /* 0x10079FF6: call 0x10026fed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10079FFB: pop ecx */
    ebx = eax; /* 0x10079FFC: mov ebx, eax */
L_10079FFE:
    MEM32(edi + 0x4) = ebx; /* 0x10079FFE: mov dword ptr [edi + 4], ebx */
    /* test ebx, ebx */ /* 0x1007A001: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007A062; /* 0x1007A003: je 0x1007a062 */
L_1007A005:
    goto L_1007A05B; /* 0x1007A005: jmp 0x1007a05b */
L_1007A007:
    /* cmp MEM8(edi + 0xC), LO8(ebx) */ /* 0x1007A007: cmp byte ptr [edi + 0xc], bl */
    _flag_a = (uint32_t)(MEM8(edi + 0xC)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007A00F; /* 0x1007A00A: je 0x1007a00f */
L_1007A00C:
    ebx = MEM32(edi + 0x8); /* 0x1007A00C: mov ebx, dword ptr [edi + 8] */
L_1007A00F:
    esi = MEM32(edi + 0x8); /* 0x1007A00F: mov esi, dword ptr [edi + 8] */
    RECOMP_CALL(sub_1006B168); /* 0x1007A012: call 0x1006b168 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x20u); /* 0x1007A017: push 0x20 */
    PUSH32(esp, ebx); /* 0x1007A019: push ebx */
    PUSH32(esp, esi); /* 0x1007A01A: push esi */
    PUSH32(esp, edi); /* 0x1007A01B: push edi */
    PUSH32(esp, 0x10079F7Bu); /* 0x1007A01C: push 0x10079f7b */
    PUSH32(esp, eax); /* 0x1007A021: push eax */
    eax = edi + 0x4; /* 0x1007A022: lea eax, [edi + 4] */
    PUSH32(esp, eax); /* 0x1007A025: push eax */
    RECOMP_ICALL(MEM32(0x100E5160)); /* 0x1007A026: call dword ptr [0x100e5160] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1007A02C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007A05B; /* 0x1007A02E: jne 0x1007a05b */
L_1007A030:
    PUSH32(esp, 1); /* 0x1007A030: push 1 */
    eax = esp + 0x14; /* 0x1007A032: lea eax, [esp + 0x14] */
    MEM32(esp + 0x14) = 0x1002C7ECu; /* 0x1007A036: mov dword ptr [esp + 0x14], 0x1002c7ec */
    PUSH32(esp, eax); /* 0x1007A03E: push eax */
    ecx = esp + 0x1C; /* 0x1007A03F: lea ecx, [esp + 0x1c] */
    RECOMP_CALL(sub_10033A4A); /* 0x1007A043: call 0x10033a4a */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x14) = 0x1002D1CCu; /* 0x1007A048: mov dword ptr [esp + 0x14], 0x1002d1cc */
    eax = esp + 0x14; /* 0x1007A050: lea eax, [esp + 0x14] */
    PUSH32(esp, 0x1002C7FCu); /* 0x1007A054: push 0x1002c7fc */
    goto L_1007A08B; /* 0x1007A059: jmp 0x1007a08b */
L_1007A05B:
    edi = POP32_VAL(esp); /* 0x1007A05B: pop edi */
    esi = POP32_VAL(esp); /* 0x1007A05C: pop esi */
    ebx = POP32_VAL(esp); /* 0x1007A05D: pop ebx */
    esp = ebp; /* 0x1007A05E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007A060: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007A061: ret  */
L_1007A062:
    PUSH32(esp, 1); /* 0x1007A062: push 1 */
    eax = esp + 0x14; /* 0x1007A064: lea eax, [esp + 0x14] */
    MEM32(esp + 0x14) = 0x1002C7ECu; /* 0x1007A068: mov dword ptr [esp + 0x14], 0x1002c7ec */
    PUSH32(esp, eax); /* 0x1007A070: push eax */
    ecx = esp + 0x1C; /* 0x1007A071: lea ecx, [esp + 0x1c] */
    RECOMP_CALL(sub_10033A4A); /* 0x1007A075: call 0x10033a4a */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x14) = 0x1002D1CCu; /* 0x1007A07A: mov dword ptr [esp + 0x14], 0x1002d1cc */
    eax = esp + 0x14; /* 0x1007A082: lea eax, [esp + 0x14] */
    PUSH32(esp, 0x1002C7FCu); /* 0x1007A086: push 0x1002c7fc */
L_1007A08B:
    PUSH32(esp, eax); /* 0x1007A08B: push eax */
    RECOMP_CALL(sub_100192EB); /* 0x1007A08C: call 0x100192eb */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1007A091u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1007A092(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007A092u);

L_1007A092:
    /* cmp MEM32(ecx + 0x4), 0 */ /* 0x1007A092: cmp dword ptr [ecx + 4], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ecx) = 0x10067CB4u; /* 0x1007A096: mov dword ptr [ecx], 0x10067cb4 */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007A09F; /* 0x1007A09C: jne 0x1007a09f */
L_1007A09E:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007A09E: ret  */
L_1007A09F:
    PUSH32(esp, esi); /* 0x1007A09F: push esi */
    esi = ecx; /* 0x1007A0A0: mov esi, ecx */
    RECOMP_CALL(sub_10023E7E); /* 0x1007A0A2: call 0x10023e7e */
    RECOMP_FLAGS_IN();
    /* cmp eax, 3 */ /* 0x1007A0A7: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1007A0B6; /* 0x1007A0AA: jl 0x1007a0b6 */
L_1007A0AC:
    ecx = MEM32(esi + 0x4); /* 0x1007A0AC: mov ecx, dword ptr [esi + 4] */
    RECOMP_CALL(sub_1007A5B7); /* 0x1007A0AF: call 0x1007a5b7 */
    RECOMP_FLAGS_IN();
    goto L_1007A0C8; /* 0x1007A0B4: jmp 0x1007a0c8 */
L_1007A0B6:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1007A0B6: push -1 */
    RECOMP_CALL(sub_1006B168); /* 0x1007A0B8: call 0x1006b168 */
    RECOMP_FLAGS_IN();
    edx = MEM32(esi + 0x4); /* 0x1007A0BD: mov edx, dword ptr [esi + 4] */
    ecx = eax; /* 0x1007A0C0: mov ecx, eax */
    RECOMP_CALL(sub_1006EF60); /* 0x1007A0C2: call 0x1006ef60 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007A0C7: pop ecx */
L_1007A0C8:
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x1007A0C8: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1007A0CC: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007A0CD: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007A09F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007A09Fu);

L_1007A09F:
    PUSH32(esp, esi); /* 0x1007A09F: push esi */
    esi = ecx; /* 0x1007A0A0: mov esi, ecx */
    RECOMP_CALL(sub_10023E7E); /* 0x1007A0A2: call 0x10023e7e */
    RECOMP_FLAGS_IN();
    /* cmp eax, 3 */ /* 0x1007A0A7: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1007A0B6; /* 0x1007A0AA: jl 0x1007a0b6 */
L_1007A0AC:
    ecx = MEM32(esi + 0x4); /* 0x1007A0AC: mov ecx, dword ptr [esi + 4] */
    RECOMP_CALL(sub_1007A5B7); /* 0x1007A0AF: call 0x1007a5b7 */
    RECOMP_FLAGS_IN();
    goto L_1007A0C8; /* 0x1007A0B4: jmp 0x1007a0c8 */
L_1007A0B6:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1007A0B6: push -1 */
    RECOMP_CALL(sub_1006B168); /* 0x1007A0B8: call 0x1006b168 */
    RECOMP_FLAGS_IN();
    edx = MEM32(esi + 0x4); /* 0x1007A0BD: mov edx, dword ptr [esi + 4] */
    ecx = eax; /* 0x1007A0C0: mov ecx, eax */
    RECOMP_CALL(sub_1006EF60); /* 0x1007A0C2: call 0x1006ef60 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007A0C7: pop ecx */
L_1007A0C8:
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x1007A0C8: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1007A0CC: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007A0CD: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007A0CE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007A0CEu);

L_1007A0CE:
    PUSH32(esp, 0x14u); /* 0x1007A0CE: push 0x14 */
    eax = 0x100DC400u; /* 0x1007A0D0: mov eax, 0x100dc400 */
    RECOMP_CALL(sub_100149A4); /* 0x1007A0D5: call 0x100149a4 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1007A0DA: mov eax, dword ptr [ebp + 8] */
    /* cmp eax, 1 */ /* 0x1007A0DD: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1007A0E9; /* 0x1007A0E0: jae 0x1007a0e9 */
L_1007A0E2:
    RECOMP_CALL(sub_100698E6); /* 0x1007A0E2: call 0x100698e6 */
    RECOMP_FLAGS_IN();
    goto L_1007A11F; /* 0x1007A0E7: jmp 0x1007a11f */
L_1007A0E9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1007A0E9: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x18)) = eax; /* 0x1007A0EB: mov dword ptr [ebp - 0x18], eax */
    MEM32(ebp + (-0x1C)) = ecx; /* 0x1007A0EE: mov dword ptr [ebp - 0x1c], ecx */
    MEM8(ebp + (-0x14)) = (uint8_t)(LO8(ecx)); /* 0x1007A0F1: mov byte ptr [ebp - 0x14], cl */
    MEM32(ebp + (-0x4)) = ecx; /* 0x1007A0F4: mov dword ptr [ebp - 4], ecx */
    MEM32(ebp + (-0x20)) = 0x1007A12Cu; /* 0x1007A0F7: mov dword ptr [ebp - 0x20], 0x1007a12c */
    RECOMP_CALL(sub_10014872); /* 0x1007A0FE: call 0x10014872 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x20); /* 0x1007A103: lea ecx, [ebp - 0x20] */
    MEM32(ebp + (-0x10)) = eax; /* 0x1007A106: mov dword ptr [ebp - 0x10], eax */
    RECOMP_CALL(sub_10079FA9); /* 0x1007A109: call 0x10079fa9 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_100698DA); /* 0x1007A10E: call 0x100698da */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1007A113: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x20); /* 0x1007A117: lea ecx, [ebp - 0x20] */
    RECOMP_CALL(sub_1007A092); /* 0x1007A11A: call 0x1007a092 */
    RECOMP_FLAGS_IN();
L_1007A11F:
    RECOMP_CALL(sub_100149D7); /* 0x1007A11F: call 0x100149d7 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007A124: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007A12C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007A12Cu);

L_1007A12C:
    /* cmp LO8(eax), 0xA1u */ /* 0x1007A12C: cmp al, 0xa1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xA1u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    _seg_es = POP32_VAL(esp); /* 0x1007A12E: pop es */
    { uint32_t _aa = MEM8(ecx), _ab = HI8(edx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1007A12F: adc byte ptr [ecx], dh */
      MEM8(ecx) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _seg_es = POP32_VAL(esp); /* 0x1007A132: pop es */
    { uint32_t _aa = MEM8(ebx + 0x18B1049), _ab = LO8(ecx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1007A133: adc byte ptr [ebx + 0x18b1049], cl */
      MEM8(ebx + 0x18B1049) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { _itail_tgt = (uint32_t)(MEM32(eax + 0xC)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1007A15B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007A15Bu);

L_1007A15B:
    PUSH32(esp, ebp); /* 0x1007A15B: push ebp */
    ebp = esp; /* 0x1007A15C: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1007A15E: push ecx */
    eax = MEM32(0x100E0AD8); /* 0x1007A15F: mov eax, dword ptr [0x100e0ad8] */
    PUSH32(esp, ebx); /* 0x1007A164: push ebx */
    ebx = MEM32(0x100E4514); /* 0x1007A165: mov ebx, dword ptr [0x100e4514] */
    PUSH32(esp, esi); /* 0x1007A16B: push esi */
    esi = MEM32(eax + 0x8); /* 0x1007A16C: mov esi, dword ptr [eax + 8] */
    PUSH32(esp, edi); /* 0x1007A16F: push edi */
    edi = MEM32(0x100E4510); /* 0x1007A170: mov edi, dword ptr [0x100e4510] */
    PUSH32(esp, 0); /* 0x1007A176: push 0 */
    RECOMP_ICALL(MEM32(0x100E5000)); /* 0x1007A178: call dword ptr [0x100e5000] */
    RECOMP_FLAGS_IN();
    /* cmp esi, eax */ /* 0x1007A17E: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007A191; /* 0x1007A180: je 0x1007a191 */
L_1007A182:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1007A182: push dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)((esi ^ MEM32(0x100E0330))); _flag_b = (uint32_t)((esi ^ MEM32(0x100E0330)));
    esi = esi ^ MEM32(0x100E0330); /* 0x1007A185: xor esi, dword ptr [0x100e0330] */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1007A18B: push ebx */
    PUSH32(esp, edi); /* 0x1007A18C: push edi */
    RECOMP_ICALL(esi); /* 0x1007A18D: call esi */
    RECOMP_FLAGS_IN();
    goto L_1007A194; /* 0x1007A18F: jmp 0x1007a194 */
L_1007A191:
    PUSH32(esp, 0x7Fu); /* 0x1007A191: push 0x7f */
    eax = POP32_VAL(esp); /* 0x1007A193: pop eax */
L_1007A194:
    edi = POP32_VAL(esp); /* 0x1007A194: pop edi */
    esi = POP32_VAL(esp); /* 0x1007A195: pop esi */
    ebx = POP32_VAL(esp); /* 0x1007A196: pop ebx */
    esp = ebp; /* 0x1007A197: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007A199: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1007A19A: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1007A19D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007A19Du);

L_1007A19D:
    PUSH32(esp, ebp); /* 0x1007A19D: push ebp */
    ebp = esp; /* 0x1007A19E: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1007A1A0: push ecx */
    eax = MEM32(ebp + 0x8); /* 0x1007A1A1: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x1007A1A4: push ebx */
    PUSH32(esp, esi); /* 0x1007A1A5: push esi */
    PUSH32(esp, edi); /* 0x1007A1A6: push edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 4; /* 0x1007A1A7: sub eax, 4 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1007A1D6; /* 0x1007A1AA: je 0x1007a1d6 */
L_1007A1AC:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1007A1AC: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1007A1B7; /* 0x1007A1AD: je 0x1007a1b7 */
L_1007A1AF:
    PUSH32(esp, 0x57u); /* 0x1007A1AF: push 0x57 */
    eax = POP32_VAL(esp); /* 0x1007A1B1: pop eax */
    goto L_1007A2D3; /* 0x1007A1B2: jmp 0x1007a2d3 */
L_1007A1B7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1007A1B7: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(0x100E03F0) = (uint8_t)(LO8(ebx)); /* 0x1007A1B9: mov byte ptr [0x100e03f0], bl */
    MEM32(0x100E03EC) = ebx; /* 0x1007A1BF: mov dword ptr [0x100e03ec], ebx */
    MEM32(0x100E4510) = ebx; /* 0x1007A1C5: mov dword ptr [0x100e4510], ebx */
    MEM32(0x100E4514) = ebx; /* 0x1007A1CB: mov dword ptr [0x100e4514], ebx */
    goto L_1007A2D1; /* 0x1007A1D1: jmp 0x1007a2d1 */
L_1007A1D6:
    eax = MEM32(0x100E0AD8); /* 0x1007A1D6: mov eax, dword ptr [0x100e0ad8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1007A1DB: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1007A1DD: push ebx */
    edi = MEM32(eax + 0xC); /* 0x1007A1DE: mov edi, dword ptr [eax + 0xc] */
    RECOMP_ICALL(MEM32(0x100E5000)); /* 0x1007A1E1: call dword ptr [0x100e5000] */
    RECOMP_FLAGS_IN();
    esi = MEM32(0x100E5048); /* 0x1007A1E7: mov esi, dword ptr [0x100e5048] */
    /* cmp edi, eax */ /* 0x1007A1ED: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007A1FE; /* 0x1007A1EF: je 0x1007a1fe */
L_1007A1F1:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1007A1F1: push dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)((edi ^ MEM32(0x100E0330))); _flag_b = (uint32_t)((edi ^ MEM32(0x100E0330)));
    edi = edi ^ MEM32(0x100E0330); /* 0x1007A1F4: xor edi, dword ptr [0x100e0330] */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ICALL(edi); /* 0x1007A1FA: call edi */
    RECOMP_FLAGS_IN();
    goto L_1007A207; /* 0x1007A1FC: jmp 0x1007a207 */
L_1007A1FE:
    PUSH32(esp, 0x7Fu); /* 0x1007A1FE: push 0x7f */
    RECOMP_ICALL(esi); /* 0x1007A200: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1007A202: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = ebx; /* 0x1007A205: mov edx, ebx */
L_1007A207:
    MEM32(0x100E4510) = eax; /* 0x1007A207: mov dword ptr [0x100e4510], eax */
    MEM32(0x100E4514) = edx; /* 0x1007A20C: mov dword ptr [0x100e4514], edx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1007A212: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007A222; /* 0x1007A215: jne 0x1007a222 */
L_1007A217:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x1007A217: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    goto L_1007A2D3; /* 0x1007A21D: jmp 0x1007a2d3 */
L_1007A222:
    PUSH32(esp, ebx); /* 0x1007A222: push ebx */
    RECOMP_ICALL(esi); /* 0x1007A223: call esi */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x100E4510); /* 0x1007A225: mov eax, dword ptr [0x100e4510] */
    MEM32(ebp + 0x14) = eax; /* 0x1007A22A: mov dword ptr [ebp + 0x14], eax */
    eax = MEM32(0x100E4514); /* 0x1007A22D: mov eax, dword ptr [0x100e4514] */
    MEM32(ebp + 0x8) = eax; /* 0x1007A232: mov dword ptr [ebp + 8], eax */
    eax = MEM32(0x100E0AD8); /* 0x1007A235: mov eax, dword ptr [0x100e0ad8] */
    PUSH32(esp, ebx); /* 0x1007A23A: push ebx */
    edi = MEM32(eax + 0x10); /* 0x1007A23B: mov edi, dword ptr [eax + 0x10] */
    RECOMP_ICALL(MEM32(0x100E5000)); /* 0x1007A23E: call dword ptr [0x100e5000] */
    RECOMP_FLAGS_IN();
    /* cmp edi, eax */ /* 0x1007A244: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007A258; /* 0x1007A246: je 0x1007a258 */
L_1007A248:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1007A248: push dword ptr [ebp + 8] */
    _flag_a = (uint32_t)((edi ^ MEM32(0x100E0330))); _flag_b = (uint32_t)((edi ^ MEM32(0x100E0330)));
    edi = edi ^ MEM32(0x100E0330); /* 0x1007A24B: xor edi, dword ptr [0x100e0330] */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1007A251: push dword ptr [ebp + 0x14] */
    RECOMP_ICALL(edi); /* 0x1007A254: call edi */
    RECOMP_FLAGS_IN();
    goto L_1007A25E; /* 0x1007A256: jmp 0x1007a25e */
L_1007A258:
    PUSH32(esp, 0x7Fu); /* 0x1007A258: push 0x7f */
    RECOMP_ICALL(esi); /* 0x1007A25A: call esi */
    RECOMP_FLAGS_IN();
    SET_LO8(eax, LO8(ebx)); /* 0x1007A25C: mov al, bl */
L_1007A25E:
    eax = (uint32_t)LO8(eax); /* 0x1007A25E: movzx eax, al */
    MEM32(ebp + 0x8) = eax; /* 0x1007A261: mov dword ptr [ebp + 8], eax */
    /* test eax, eax */ /* 0x1007A264: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007A279; /* 0x1007A266: jne 0x1007a279 */
L_1007A268:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x1007A268: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1007A26E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007A2D3; /* 0x1007A270: jne 0x1007a2d3 */
L_1007A272:
    MEM32(ebp + 0x8) = 4; /* 0x1007A272: mov dword ptr [ebp + 8], 4 */
L_1007A279:
    eax = MEM32(0x100E4510); /* 0x1007A279: mov eax, dword ptr [0x100e4510] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1007A27E: mov dword ptr [ebp - 4], eax */
    eax = MEM32(0x100E4514); /* 0x1007A281: mov eax, dword ptr [0x100e4514] */
    MEM32(ebp + 0x14) = eax; /* 0x1007A286: mov dword ptr [ebp + 0x14], eax */
    eax = MEM32(0x100E0AD8); /* 0x1007A289: mov eax, dword ptr [0x100e0ad8] */
    PUSH32(esp, ebx); /* 0x1007A28E: push ebx */
    edi = MEM32(eax + 0x14); /* 0x1007A28F: mov edi, dword ptr [eax + 0x14] */
    RECOMP_ICALL(MEM32(0x100E5000)); /* 0x1007A292: call dword ptr [0x100e5000] */
    RECOMP_FLAGS_IN();
    /* cmp edi, eax */ /* 0x1007A298: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007A2AE; /* 0x1007A29A: je 0x1007a2ae */
L_1007A29C:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1007A29C: push dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)((edi ^ MEM32(0x100E0330))); _flag_b = (uint32_t)((edi ^ MEM32(0x100E0330)));
    edi = edi ^ MEM32(0x100E0330); /* 0x1007A29F: xor edi, dword ptr [0x100e0330] */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1007A2A5: push dword ptr [ebp - 4] */
    RECOMP_ICALL(edi); /* 0x1007A2A8: call edi */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1007A2AA: mov ebx, eax */
    goto L_1007A2B2; /* 0x1007A2AC: jmp 0x1007a2b2 */
L_1007A2AE:
    PUSH32(esp, 0x7Fu); /* 0x1007A2AE: push 0x7f */
    RECOMP_ICALL(esi); /* 0x1007A2B0: call esi */
    RECOMP_FLAGS_IN();
L_1007A2B2:
    /* test ebx, ebx */ /* 0x1007A2B2: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007A2C3; /* 0x1007A2B4: jne 0x1007a2c3 */
L_1007A2B6:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x1007A2B6: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1007A2BC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007A2D3; /* 0x1007A2BE: jne 0x1007a2d3 */
L_1007A2C0:
    _flag_a = (uint32_t)((ebx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ebx | 0xFFFFFFFFu));
    ebx = ebx | 0xFFFFFFFFu; /* 0x1007A2C0: or ebx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1007A2C3:
    eax = MEM32(ebp + 0x8); /* 0x1007A2C3: mov eax, dword ptr [ebp + 8] */
    MEM32(0x100E03EC) = ebx; /* 0x1007A2C6: mov dword ptr [0x100e03ec], ebx */
    MEM8(0x100E03F0) = (uint8_t)(LO8(eax)); /* 0x1007A2CC: mov byte ptr [0x100e03f0], al */
L_1007A2D1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007A2D1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1007A2D3:
    edi = POP32_VAL(esp); /* 0x1007A2D3: pop edi */
    esi = POP32_VAL(esp); /* 0x1007A2D4: pop esi */
    ebx = POP32_VAL(esp); /* 0x1007A2D5: pop ebx */
    esp = ebp; /* 0x1007A2D6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007A2D8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1007A2D9: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1007A2DC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007A2DCu);

L_1007A2DC:
    PUSH32(esp, ebp); /* 0x1007A2DC: push ebp */
    ebp = esp; /* 0x1007A2DD: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x1007A2DF: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x44u; /* 0x1007A2E2: sub esp, 0x44 */
    _flag_k = FK_CMP;
    /* cmp MEM32(0x100E0AD8), 0 */ /* 0x1007A2E5: cmp dword ptr [0x100e0ad8], 0 */
    _flag_a = (uint32_t)(MEM32(0x100E0AD8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1007A2EC: push ebx */
    PUSH32(esp, esi); /* 0x1007A2ED: push esi */
    PUSH32(esp, edi); /* 0x1007A2EE: push edi */
    ebx = edx; /* 0x1007A2EF: mov ebx, edx */
    esi = ecx; /* 0x1007A2F1: mov esi, ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007A335; /* 0x1007A2F3: je 0x1007a335 */
L_1007A2F5:
    PUSH32(esp, 0x3Eu); /* 0x1007A2F5: push 0x3e */
    eax = esp + 0x16; /* 0x1007A2F7: lea eax, [esp + 0x16] */
    PUSH32(esp, 0); /* 0x1007A2FB: push 0 */
    PUSH32(esp, eax); /* 0x1007A2FD: push eax */
    RECOMP_CALL(sub_10011533); /* 0x1007A2FE: call 0x10011533 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1007A303: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(esp + 0x3C) = 0x00020000u; /* 0x1007A306: mov dword ptr [esp + 0x3c], 0x20000 */
    edi = esp + 0x28; /* 0x1007A30E: lea edi, [esp + 0x28] */
    PUSH32(esp, 0x40u); /* 0x1007A312: push 0x40 */
    eax = POP32_VAL(esp); /* 0x1007A314: pop eax */
    MEM16(esp + 0x10) = (uint16_t)(LO16(eax)); /* 0x1007A315: mov word ptr [esp + 0x10], ax */
    eax = MEM32(ebp + 0x8); /* 0x1007A31A: mov eax, dword ptr [ebp + 8] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1007A31D: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1007A31E: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1007A31F: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1007A320: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM8(esp + 0x15) = (uint8_t)(LO8(eax)); /* 0x1007A321: mov byte ptr [esp + 0x15], al */
    eax = esp + 0x10; /* 0x1007A325: lea eax, [esp + 0x10] */
    PUSH32(esp, eax); /* 0x1007A329: push eax */
    PUSH32(esp, ecx); /* 0x1007A32A: push ecx */
    PUSH32(esp, ecx); /* 0x1007A32B: push ecx */
    MEM8(esp + 0x20) = (uint8_t)(LO8(ebx)); /* 0x1007A32C: mov byte ptr [esp + 0x20], bl */
    RECOMP_CALL(sub_1007A15B); /* 0x1007A330: call 0x1007a15b */
    RECOMP_FLAGS_IN();
L_1007A335:
    edi = POP32_VAL(esp); /* 0x1007A335: pop edi */
    esi = POP32_VAL(esp); /* 0x1007A336: pop esi */
    ebx = POP32_VAL(esp); /* 0x1007A337: pop ebx */
    esp = ebp; /* 0x1007A338: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007A33A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007A33B: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007A33C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007A33Cu);

L_1007A33C:
    PUSH32(esp, ecx); /* 0x1007A33C: push ecx */
    /* cmp MEM32(0x100E0AD8), 0 */ /* 0x1007A33D: cmp dword ptr [0x100e0ad8], 0 */
    _flag_a = (uint32_t)(MEM32(0x100E0AD8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007A34B; /* 0x1007A344: jne 0x1007a34b */
L_1007A346:
    RECOMP_CALL(sub_10026E58); /* 0x1007A346: call 0x10026e58 */
    RECOMP_FLAGS_IN();
L_1007A34B:
    eax = 0x100E03ECu; /* 0x1007A34B: mov eax, 0x100e03ec */
    ecx = POP32_VAL(esp); /* 0x1007A350: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007A351: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007A352(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007A352u);

L_1007A352:
    PUSH32(esp, ebp); /* 0x1007A352: push ebp */
    ebp = esp; /* 0x1007A353: mov ebp, esp */
    RECOMP_CALL(sub_1007A33C); /* 0x1007A355: call 0x1007a33c */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0xC); /* 0x1007A35A: mov ecx, dword ptr [ebp + 0xc] */
    /* cmp LO8(ecx), MEM8(eax + 0x4) */ /* 0x1007A35D: cmp cl, byte ptr [eax + 4] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(eax + 0x4)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_A(_flag_a, _flag_b)) goto L_1007A375; /* 0x1007A360: ja 0x1007a375 */
L_1007A362:
    eax = MEM32(eax); /* 0x1007A362: mov eax, dword ptr [eax] */
    /* test LO8(eax), 0x10u */ /* 0x1007A364: test al, 0x10 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007A375; /* 0x1007A366: je 0x1007a375 */
L_1007A368:
    edx = MEM32(ebp + 0x10); /* 0x1007A368: mov edx, dword ptr [ebp + 0x10] */
    PUSH32(esp, ecx); /* 0x1007A36B: push ecx */
    ecx = MEM32(ebp + 0x8); /* 0x1007A36C: mov ecx, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1007A2DC); /* 0x1007A36F: call 0x1007a2dc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007A374: pop ecx */
L_1007A375:
    ebp = POP32_VAL(esp); /* 0x1007A375: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007A376: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007A377(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007A377u);

L_1007A377:
    PUSH32(esp, ebp); /* 0x1007A377: push ebp */
    ebp = esp; /* 0x1007A378: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x1007A37A: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x80u; /* 0x1007A37D: sub esp, 0x80 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x1007A383: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x1007A388: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x7C) = eax; /* 0x1007A38A: mov dword ptr [esp + 0x7c], eax */
    PUSH32(esp, esi); /* 0x1007A38E: push esi */
    PUSH32(esp, edi); /* 0x1007A38F: push edi */
    RECOMP_CALL(sub_1007A33C); /* 0x1007A390: call 0x1007a33c */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(eax + 0x4), 4 */ /* 0x1007A395: cmp byte ptr [eax + 4], 4 */
    _flag_a = (uint32_t)(MEM8(eax + 0x4)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_B(_flag_a, _flag_b)) goto L_1007A448; /* 0x1007A399: jb 0x1007a448 */
L_1007A39F:
    eax = MEM32(eax); /* 0x1007A39F: mov eax, dword ptr [eax] */
    /* test LO8(eax), 0x20u */ /* 0x1007A3A1: test al, 0x20 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007A448; /* 0x1007A3A3: je 0x1007a448 */
L_1007A3A9:
    PUSH32(esp, 0x76u); /* 0x1007A3A9: push 0x76 */
    eax = esp + 0xE; /* 0x1007A3AB: lea eax, [esp + 0xe] */
    PUSH32(esp, 0); /* 0x1007A3AF: push 0 */
    PUSH32(esp, eax); /* 0x1007A3B1: push eax */
    RECOMP_CALL(sub_10011533); /* 0x1007A3B2: call 0x10011533 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x1007A3B7: mov ecx, dword ptr [ebp + 8] */
    edi = esp + 0x2C; /* 0x1007A3BA: lea edi, [esp + 0x2c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1007A3BE: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(esp + 0x34) = 0x00020000u; /* 0x1007A3C1: mov dword ptr [esp + 0x34], 0x20000 */
    esi = 0x1007A45Cu; /* 0x1007A3C9: mov esi, 0x1007a45c */
    PUSH32(esp, 0x78u); /* 0x1007A3CE: push 0x78 */
    eax = POP32_VAL(esp); /* 0x1007A3D0: pop eax */
    MEM16(esp + 0x8) = (uint16_t)(LO16(eax)); /* 0x1007A3D1: mov word ptr [esp + 8], ax */
    eax = MEM32(ebp + 0xC); /* 0x1007A3D6: mov eax, dword ptr [ebp + 0xc] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1007A3D9: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1007A3DA: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1007A3DB: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1007A3DC: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(esp + 0x38) = eax; /* 0x1007A3DD: mov dword ptr [esp + 0x38], eax */
    eax = MEM32(ebp + 0x10); /* 0x1007A3E1: mov eax, dword ptr [ebp + 0x10] */
    MEM8(esp + 0xC) = (uint8_t)(LO8(ecx)); /* 0x1007A3E4: mov byte ptr [esp + 0xc], cl */
    MEM8(esp + 0xD) = (uint8_t)(4); /* 0x1007A3E8: mov byte ptr [esp + 0xd], 4 */
    MEM32(esp + 0x3C) = eax; /* 0x1007A3ED: mov dword ptr [esp + 0x3c], eax */
    /* test ecx, ecx */ /* 0x1007A3F1: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007A42E; /* 0x1007A3F3: je 0x1007a42e */
L_1007A3F5:
    /* cmp ecx, 2 */ /* 0x1007A3F5: cmp ecx, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007A425; /* 0x1007A3F8: je 0x1007a425 */
L_1007A3FA:
    /* cmp ecx, 4 */ /* 0x1007A3FA: cmp ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1007A43C; /* 0x1007A3FD: jle 0x1007a43c */
L_1007A3FF:
    /* cmp ecx, 6 */ /* 0x1007A3FF: cmp ecx, 6 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1007A42E; /* 0x1007A402: jle 0x1007a42e */
L_1007A404:
    /* cmp ecx, 7 */ /* 0x1007A404: cmp ecx, 7 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007A43C; /* 0x1007A407: jne 0x1007a43c */
L_1007A409:
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x1007A409: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007A43C; /* 0x1007A40D: je 0x1007a43c */
L_1007A40F:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1007A40F: push -1 */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1007A411: push dword ptr [ebp + 0x14] */
    eax = esp + 0x48; /* 0x1007A414: lea eax, [esp + 0x48] */
    PUSH32(esp, 0x20u); /* 0x1007A418: push 0x20 */
    PUSH32(esp, eax); /* 0x1007A41A: push eax */
    RECOMP_CALL(sub_1001218A); /* 0x1007A41B: call 0x1001218a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1007A420: add esp, 0x10 */
    _flag_k = FK_ADD;
    goto L_1007A43C; /* 0x1007A423: jmp 0x1007a43c */
L_1007A425:
    eax = MEM32(ebp + 0x14); /* 0x1007A425: mov eax, dword ptr [ebp + 0x14] */
    MEM32(esp + 0x40) = eax; /* 0x1007A428: mov dword ptr [esp + 0x40], eax */
    goto L_1007A43C; /* 0x1007A42C: jmp 0x1007a43c */
L_1007A42E:
    eax = MEM32(ebp + 0x14); /* 0x1007A42E: mov eax, dword ptr [ebp + 0x14] */
    MEM32(esp + 0x40) = eax; /* 0x1007A431: mov dword ptr [esp + 0x40], eax */
    eax = MEM32(ebp + 0x18); /* 0x1007A435: mov eax, dword ptr [ebp + 0x18] */
    MEM32(esp + 0x44) = eax; /* 0x1007A438: mov dword ptr [esp + 0x44], eax */
L_1007A43C:
    eax = esp + 0x8; /* 0x1007A43C: lea eax, [esp + 8] */
    PUSH32(esp, eax); /* 0x1007A440: push eax */
    PUSH32(esp, ecx); /* 0x1007A441: push ecx */
    PUSH32(esp, ecx); /* 0x1007A442: push ecx */
    RECOMP_CALL(sub_1007A15B); /* 0x1007A443: call 0x1007a15b */
    RECOMP_FLAGS_IN();
L_1007A448:
    ecx = MEM32(esp + 0x84); /* 0x1007A448: mov ecx, dword ptr [esp + 0x84] */
    edi = POP32_VAL(esp); /* 0x1007A44F: pop edi */
    esi = POP32_VAL(esp); /* 0x1007A450: pop esi */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x1007A451: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F7C6); /* 0x1007A453: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1007A458: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007A45A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007A45B: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007A46C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007A46Cu);

L_1007A46C:
    RECOMP_CALL(sub_10073608); /* 0x1007A46C: call 0x10073608 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1007A471: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007A47C; /* 0x1007A473: je 0x1007a47c */
L_1007A475:
    edx = MEM32(eax); /* 0x1007A475: mov edx, dword ptr [eax] */
    ecx = eax; /* 0x1007A477: mov ecx, eax */
    { _itail_tgt = (uint32_t)(MEM32(edx + 0x20)); goto _ljump; }
L_1007A47C:
    { _itail_tgt = (uint32_t)(MEM32(0x100E518C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1007A482(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007A482u);

    goto L_1007A482;
L_100258A8:
    ecx = 0x100E032Cu; /* 0x100258A8: mov ecx, 0x100e032c */
    MEM32(ebp + (-0x10)) = ecx; /* 0x100258AD: mov dword ptr [ebp - 0x10], ecx */
    RECOMP_CALL(sub_10023D1E); /* 0x100258B0: call 0x10023d1e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x100258B5: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(0x100E0AC0); /* 0x100258B9: mov eax, dword ptr [0x100e0ac0] */
    /* test eax, eax */ /* 0x100258BE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100258CE; /* 0x100258C0: jne 0x100258ce */
L_100258C2:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ecx, 0); /* 0x100258C2: xor cl, cl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_CALL(sub_10025760); /* 0x100258C4: call 0x10025760 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x100E0AC0); /* 0x100258C9: mov eax, dword ptr [0x100e0ac0] */
L_100258CE:
    MEM32(0x100E032C) = 0; /* 0x100258CE: mov dword ptr [0x100e032c], 0 */
    goto L_100258EF; /* 0x100258D8: jmp 0x100258ef */
L_100258DA:
    PUSH32(esp, 4); /* 0x100258DA: push 4 */
    eax = 0x100DB404u; /* 0x100258DC: mov eax, 0x100db404 */
    RECOMP_CALL(sub_100149A4); /* 0x100258E1: call 0x100149a4 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x100E0AC0); /* 0x100258E6: mov eax, dword ptr [0x100e0ac0] */
    /* test eax, eax */ /* 0x100258EB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100258A8; /* 0x100258ED: je 0x100258a8 */
L_100258EF:
    RECOMP_CALL(sub_100149D7); /* 0x100258EF: call 0x100149d7 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100258F4: ret  */
L_1007A482:
    RECOMP_BACKEDGE();
    goto L_100258DA; /* 0x1007A482: jmp 0x100258da */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1007A487(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007A487u);

L_1007A487:
    PUSH32(esp, 0); /* 0x1007A487: push 0 */
    RECOMP_ICALL(MEM32(0x100E50A0)); /* 0x1007A489: call dword ptr [0x100e50a0] */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007A48F: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007A490(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007A490u);

L_1007A490:
    void_lift_trap(0x1007A490u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1007A492(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007A492u);

L_1007A492:
    PUSH32(esp, ebp); /* 0x1007A492: push ebp */
    ebp = esp; /* 0x1007A493: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x808u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x808u; /* 0x1007A495: sub esp, 0x808 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x1007A49B: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1007A4A0: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1007A4A2: mov dword ptr [ebp - 4], eax */
    eax = MEM32(0x100E4508); /* 0x1007A4A5: mov eax, dword ptr [0x100e4508] */
    /* test MEM32(ebp + 0x8), eax */ /* 0x1007A4AA: test dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007A52C; /* 0x1007A4AD: je 0x1007a52c */
L_1007A4AF:
    edx = MEM32(ebp + 0xC); /* 0x1007A4AF: mov edx, dword ptr [ebp + 0xc] */
    eax = ebp + 0x10; /* 0x1007A4B2: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x1007A4B5: push eax */
    ecx = ebp + (-0x808); /* 0x1007A4B6: lea ecx, [ebp - 0x808] */
    RECOMP_CALL(sub_1007A621); /* 0x1007A4BC: call 0x1007a621 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007A4C1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ebp + (-0x8)) = (uint16_t)(LO16(eax)); /* 0x1007A4C3: mov word ptr [ebp - 8], ax */
    eax = MEM32(0x100E0EF8); /* 0x1007A4C7: mov eax, dword ptr [0x100e0ef8] */
    ecx = POP32_VAL(esp); /* 0x1007A4CC: pop ecx */
    /* test eax, eax */ /* 0x1007A4CD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007A51F; /* 0x1007A4CF: je 0x1007a51f */
L_1007A4D1:
    PUSH32(esp, esi); /* 0x1007A4D1: push esi */
    PUSH32(esp, edi); /* 0x1007A4D2: push edi */
    ecx = ebp + (-0x808); /* 0x1007A4D3: lea ecx, [ebp - 0x808] */
    PUSH32(esp, ecx); /* 0x1007A4D9: push ecx */
    PUSH32(esp, eax); /* 0x1007A4DA: push eax */
    RECOMP_CALL(sub_10082828); /* 0x1007A4DB: call 0x10082828 */
    RECOMP_FLAGS_IN();
    edi = MEM32(0x100E451C); /* 0x1007A4E0: mov edi, dword ptr [0x100e451c] */
    esi = MEM32(0x100E4518); /* 0x1007A4E6: mov esi, dword ptr [0x100e4518] */
    ecx = POP32_VAL(esp); /* 0x1007A4EC: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1007A4ED: pop ecx */
    PUSH32(esp, 0); /* 0x1007A4EE: push 0 */
    PUSH32(esp, 0x32u); /* 0x1007A4F0: push 0x32 */
    PUSH32(esp, edi); /* 0x1007A4F2: push edi */
    PUSH32(esp, esi); /* 0x1007A4F3: push esi */
    RECOMP_CALL(sub_10034F20); /* 0x1007A4F4: call 0x10034f20 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 1; /* 0x1007A4F9: add esi, 1 */
    _flag_k = FK_ADD;
    MEM32(0x100E4518) = esi; /* 0x1007A4FC: mov dword ptr [0x100e4518], esi */
    { uint32_t _aa = edi, _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1007A502: adc edi, 0 */
      edi = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x1007A505: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x100E451C) = edi; /* 0x1007A507: mov dword ptr [0x100e451c], edi */
    edi = POP32_VAL(esp); /* 0x1007A50D: pop edi */
    esi = POP32_VAL(esp); /* 0x1007A50E: pop esi */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007A52C; /* 0x1007A50F: jne 0x1007a52c */
L_1007A511:
    PUSH32(esp, MEM32(0x100E0EF8)); /* 0x1007A511: push dword ptr [0x100e0ef8] */
    RECOMP_CALL(sub_10020A94); /* 0x1007A517: call 0x10020a94 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007A51C: pop ecx */
    goto L_1007A52C; /* 0x1007A51D: jmp 0x1007a52c */
L_1007A51F:
    eax = ebp + (-0x808); /* 0x1007A51F: lea eax, [ebp - 0x808] */
    PUSH32(esp, eax); /* 0x1007A525: push eax */
    RECOMP_ICALL(MEM32(0x100E51B8)); /* 0x1007A526: call dword ptr [0x100e51b8] */
    RECOMP_FLAGS_IN();
L_1007A52C:
    ecx = MEM32(ebp + (-0x4)); /* 0x1007A52C: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1007A52F: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F7C6); /* 0x1007A531: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1007A536: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007A538: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007A539: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007A53A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007A53Au);

L_1007A53A:
    PUSH32(esp, ebp); /* 0x1007A53A: push ebp */
    ebp = esp; /* 0x1007A53B: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1007A53D: push ecx */
    { uint32_t _v = MEM32(ebp + 0x8), _i; if (_v) { for (_i = 31; !((_v >> _i) & 1u); _i--) ; eax = _i; } _flag_a = _flag_b = _v; } _cf = 0; /* 0x1007A53E: bsr eax, dword ptr [ebp + 8] */
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1007A542: mov dword ptr [ebp - 4], eax */
    esp = ebp; /* 0x1007A545: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007A547: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007A548: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007A549(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007A549u);

L_1007A549:
    PUSH32(esp, ebp); /* 0x1007A549: push ebp */
    ebp = esp; /* 0x1007A54A: mov ebp, esp */
    PUSH32(esp, edi); /* 0x1007A54C: push edi */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1007A54D: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1007A550: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1007A553: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1007A556: push dword ptr [ebp + 8] */
    PUSH32(esp, edx); /* 0x1007A559: push edx */
    PUSH32(esp, 0); /* 0x1007A55A: push 0 */
    RECOMP_ICALL(MEM32(0x100E5078)); /* 0x1007A55C: call dword ptr [0x100e5078] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1007A562: mov edi, eax */
    /* test edi, edi */ /* 0x1007A564: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007A58C; /* 0x1007A566: je 0x1007a58c */
L_1007A568:
    PUSH32(esp, esi); /* 0x1007A568: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1007A569: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 0x100E4520u; /* 0x1007A56B: mov eax, 0x100e4520 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1007A570: inc esi */
    _flag_k = FK_INC;
    ecx = esi; /* 0x1007A571: mov ecx, esi */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + ecx; ecx = _old; MEM32(eax) = _sum; } /* 0x1007A573: lock xadd dword ptr [eax], ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1007A577: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, esi */ /* 0x1007A578: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007A58B; /* 0x1007A57A: jne 0x1007a58b */
L_1007A57C:
    RECOMP_CALL(sub_10023A83); /* 0x1007A57C: call 0x10023a83 */
    RECOMP_FLAGS_IN();
    eax = 0x100DFDDCu; /* 0x1007A581: mov eax, 0x100dfddc */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + esi; esi = _old; MEM32(eax) = _sum; } /* 0x1007A586: lock xadd dword ptr [eax], esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1007A58A: inc esi */
    _flag_k = FK_INC;
L_1007A58B:
    esi = POP32_VAL(esp); /* 0x1007A58B: pop esi */
L_1007A58C:
    eax = edi; /* 0x1007A58C: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1007A58E: pop edi */
    ebp = POP32_VAL(esp); /* 0x1007A58F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007A590: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007A591(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007A591u);

L_1007A591:
    ecx = 0x100E4520u; /* 0x1007A591: mov ecx, 0x100e4520 */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1007A596: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(ecx), _sum = MEM32(ecx) + eax; eax = _old; MEM32(ecx) = _sum; } /* 0x1007A599: lock xadd dword ptr [ecx], eax */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_1007A5B6; /* 0x1007A59D: jne 0x1007a5b6 */
L_1007A59F:
    RECOMP_CALL(sub_10033D98); /* 0x1007A59F: call 0x10033d98 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x100E03F4); /* 0x1007A5A4: mov eax, dword ptr [0x100e03f4] */
    /* test eax, eax */ /* 0x1007A5A9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007A5B6; /* 0x1007A5AB: je 0x1007a5b6 */
L_1007A5AD:
    PUSH32(esp, 0); /* 0x1007A5AD: push 0 */
    PUSH32(esp, eax); /* 0x1007A5AF: push eax */
    RECOMP_ICALL(MEM32(0x100E51BC)); /* 0x1007A5B0: call dword ptr [0x100e51bc] */
    RECOMP_FLAGS_IN();
L_1007A5B6:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007A5B6: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007A5B7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007A5B7u);

L_1007A5B7:
    PUSH32(esp, esi); /* 0x1007A5B7: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007A5B8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = ecx; /* 0x1007A5BA: mov esi, ecx */
    PUSH32(esp, eax); /* 0x1007A5BC: push eax */
    PUSH32(esp, eax); /* 0x1007A5BD: push eax */
    PUSH32(esp, eax); /* 0x1007A5BE: push eax */
    PUSH32(esp, esi); /* 0x1007A5BF: push esi */
    RECOMP_CALL(sub_10026FC9); /* 0x1007A5C0: call 0x10026fc9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x1007A5C5: push 1 */
    PUSH32(esp, esi); /* 0x1007A5C7: push esi */
    RECOMP_CALL(sub_100A4822); /* 0x1007A5C8: call 0x100a4822 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1007A5CD: push esi */
    RECOMP_CALL(sub_100A46F5); /* 0x1007A5CE: call 0x100a46f5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x1007A5D3: add esp, 0x1c */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_10033D98); /* 0x1007A5D6: call 0x10033d98 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x100E03F4); /* 0x1007A5DB: mov eax, dword ptr [0x100e03f4] */
    esi = POP32_VAL(esp); /* 0x1007A5E0: pop esi */
    /* test eax, eax */ /* 0x1007A5E1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007A5EC; /* 0x1007A5E3: je 0x1007a5ec */
L_1007A5E5:
    PUSH32(esp, eax); /* 0x1007A5E5: push eax */
    RECOMP_ICALL(MEM32(0x100E50F0)); /* 0x1007A5E6: call dword ptr [0x100e50f0] */
    RECOMP_FLAGS_IN();
L_1007A5EC:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007A5EC: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007A5ED(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007A5EDu);

L_1007A5ED:
    PUSH32(esp, esi); /* 0x1007A5ED: push esi */
    PUSH32(esp, edi); /* 0x1007A5EE: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007A5EF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = edx; /* 0x1007A5F1: mov esi, edx */
    PUSH32(esp, eax); /* 0x1007A5F3: push eax */
    PUSH32(esp, eax); /* 0x1007A5F4: push eax */
    PUSH32(esp, eax); /* 0x1007A5F5: push eax */
    PUSH32(esp, esi); /* 0x1007A5F6: push esi */
    edi = ecx; /* 0x1007A5F7: mov edi, ecx */
    RECOMP_CALL(sub_10026FC9); /* 0x1007A5F9: call 0x10026fc9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1007A5FE: push esi */
    RECOMP_CALL(sub_100A46F5); /* 0x1007A5FF: call 0x100a46f5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1007A604: add esp, 0x14 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_10033D98); /* 0x1007A607: call 0x10033d98 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x100E03F4); /* 0x1007A60C: mov eax, dword ptr [0x100e03f4] */
    /* test eax, eax */ /* 0x1007A611: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007A61E; /* 0x1007A613: je 0x1007a61e */
L_1007A615:
    PUSH32(esp, eax); /* 0x1007A615: push eax */
    PUSH32(esp, edi); /* 0x1007A616: push edi */
    RECOMP_CALL(sub_1003534F); /* 0x1007A617: call 0x1003534f */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007A61C: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1007A61D: pop ecx */
L_1007A61E:
    edi = POP32_VAL(esp); /* 0x1007A61E: pop edi */
    esi = POP32_VAL(esp); /* 0x1007A61F: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007A620: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007A621(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007A621u);

L_1007A621:
    PUSH32(esp, ebp); /* 0x1007A621: push ebp */
    ebp = esp; /* 0x1007A622: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1007A624: push ecx */
    PUSH32(esp, ebx); /* 0x1007A625: push ebx */
    PUSH32(esp, esi); /* 0x1007A626: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007A627: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = edx; /* 0x1007A629: mov dword ptr [ebp - 4], edx */
    PUSH32(esp, edi); /* 0x1007A62C: push edi */
    esi = ecx; /* 0x1007A62D: mov esi, ecx */
    ebx = eax; /* 0x1007A62F: mov ebx, eax */
    RECOMP_CALL(sub_10073608); /* 0x1007A631: call 0x10073608 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1007A636: mov edi, eax */
    eax = 0x401u; /* 0x1007A638: mov eax, 0x401 */
    /* test edi, edi */ /* 0x1007A63D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007A69E; /* 0x1007A63F: je 0x1007a69e */
L_1007A641:
    /* cmp MEM32(edi + 0x1C), ebx */ /* 0x1007A641: cmp dword ptr [edi + 0x1c], ebx */
    _flag_a = (uint32_t)(MEM32(edi + 0x1C)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007A69E; /* 0x1007A644: je 0x1007a69e */
L_1007A646:
    eax = MEM32(edi + 0x18); /* 0x1007A646: mov eax, dword ptr [edi + 0x18] */
    /* test eax, eax */ /* 0x1007A649: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007A658; /* 0x1007A64B: je 0x1007a658 */
L_1007A64D:
    eax = MEM32(eax + 0x100); /* 0x1007A64D: mov eax, dword ptr [eax + 0x100] */
    ebx = MEM32(eax + 0x14); /* 0x1007A653: mov ebx, dword ptr [eax + 0x14] */
    goto L_1007A65B; /* 0x1007A656: jmp 0x1007a65b */
L_1007A658:
    _flag_a = (uint32_t)((ebx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ebx | 0xFFFFFFFFu));
    ebx = ebx | 0xFFFFFFFFu; /* 0x1007A658: or ebx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1007A65B:
    RECOMP_ICALL(MEM32(0x100E5034)); /* 0x1007A65B: call dword ptr [0x100e5034] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1007A661: push eax */
    eax = MEM32(edi); /* 0x1007A662: mov eax, dword ptr [edi] */
    ecx = edi; /* 0x1007A664: mov ecx, edi */
    PUSH32(esp, ebx); /* 0x1007A666: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1007A667: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1007A66A: push eax */
    eax = MEM32(edi); /* 0x1007A66B: mov eax, dword ptr [edi] */
    ecx = edi; /* 0x1007A66D: mov ecx, edi */
    RECOMP_ICALL(MEM32(eax)); /* 0x1007A66F: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1007A671: push eax */
    eax = MEM32(edi); /* 0x1007A672: mov eax, dword ptr [edi] */
    ecx = edi; /* 0x1007A674: mov ecx, edi */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1007A676: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1007A679: push eax */
    PUSH32(esp, 0x1007A6F8u); /* 0x1007A67A: push 0x1007a6f8 */
    PUSH32(esp, 0x401u); /* 0x1007A67F: push 0x401 */
    PUSH32(esp, esi); /* 0x1007A684: push esi */
    RECOMP_CALL(sub_100335E9); /* 0x1007A685: call 0x100335e9 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1007A68A: mov ebx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x1007A68C: add esp, 0x20 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1007A68F: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 0x401u; /* 0x1007A691: mov eax, 0x401 */
    /* test ebx, ebx */ /* 0x1007A696: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1007A6A0; /* 0x1007A698: jns 0x1007a6a0 */
L_1007A69A:
    ebx = edi; /* 0x1007A69A: mov ebx, edi */
    goto L_1007A6A0; /* 0x1007A69C: jmp 0x1007a6a0 */
L_1007A69E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1007A69E: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1007A6A0:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1007A6A0: push dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x1007A6A3: sub eax, ebx */
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1007A6A5: push dword ptr [ebp - 4] */
    PUSH32(esp, eax); /* 0x1007A6A8: push eax */
    eax = esi + ebx * 2; /* 0x1007A6A9: lea eax, [esi + ebx*2] */
    PUSH32(esp, eax); /* 0x1007A6AC: push eax */
    RECOMP_CALL(sub_1001E108); /* 0x1007A6AD: call 0x1001e108 */
    RECOMP_FLAGS_IN();
    ecx = esi; /* 0x1007A6B2: mov ecx, esi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1007A6B4: add esp, 0x10 */
    _flag_k = FK_ADD;
    edx = ecx + 0x2; /* 0x1007A6B7: lea edx, [ecx + 2] */
L_1007A6BA:
    SET_LO16(eax, MEM16(ecx)); /* 0x1007A6BA: mov ax, word ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1007A6BD: add ecx, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), LO16(edi) */ /* 0x1007A6C0: cmp ax, di */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007A6BA; /* 0x1007A6C3: jne 0x1007a6ba */
L_1007A6C5:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1007A6C5: sub ecx, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x1007A6C7: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    /* test ecx, ecx */ /* 0x1007A6C9: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1007A6F1; /* 0x1007A6CB: jle 0x1007a6f1 */
L_1007A6CD:
    PUSH32(esp, 0xAu); /* 0x1007A6CD: push 0xa */
    eax = POP32_VAL(esp); /* 0x1007A6CF: pop eax */
    /* cmp MEM16(esi + ecx * 2 + (-0x2)), LO16(eax) */ /* 0x1007A6D0: cmp word ptr [esi + ecx*2 - 2], ax */
    _flag_a = (uint32_t)(MEM16(esi + ecx * 2 + (-0x2))) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007A6F1; /* 0x1007A6D5: je 0x1007a6f1 */
L_1007A6D7:
    /* cmp ecx, 0x400u */ /* 0x1007A6D7: cmp ecx, 0x400 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x400u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1007A6EC; /* 0x1007A6DD: jae 0x1007a6ec */
L_1007A6DF:
    MEM16(esi + ecx * 2) = (uint16_t)(LO16(eax)); /* 0x1007A6DF: mov word ptr [esi + ecx*2], ax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007A6E3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esi + ecx * 2 + 0x2) = (uint16_t)(LO16(eax)); /* 0x1007A6E5: mov word ptr [esi + ecx*2 + 2], ax */
    goto L_1007A6F1; /* 0x1007A6EA: jmp 0x1007a6f1 */
L_1007A6EC:
    MEM16(esi + ecx * 2 + (-0x2)) = (uint16_t)(LO16(eax)); /* 0x1007A6EC: mov word ptr [esi + ecx*2 - 2], ax */
L_1007A6F1:
    edi = POP32_VAL(esp); /* 0x1007A6F1: pop edi */
    esi = POP32_VAL(esp); /* 0x1007A6F2: pop esi */
    ebx = POP32_VAL(esp); /* 0x1007A6F3: pop ebx */
    esp = ebp; /* 0x1007A6F4: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007A6F6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007A6F7: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007A6F8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007A6F8u);

L_1007A6F8:
    ebx = POP32_VAL(esp); /* 0x1007A6F8: pop ebx */
    _flag_a = (uint32_t)(MEM8(0x3A006400)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(0x3A006400) = (uint8_t)(MEM8(0x3A006400) + HI8(eax)); /* 0x1007A6F9: add byte ptr [0x3a006400], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(0x3A006400)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(0x3A006400) = (uint8_t)(MEM8(0x3A006400) + HI8(eax)); /* 0x1007A6FF: add byte ptr [0x3a006400], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(0x3A006400)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(0x3A006400) = (uint8_t)(MEM8(0x3A006400) + HI8(eax)); /* 0x1007A705: add byte ptr [0x3a006400], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(0x28006400)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(0x28006400) = (uint8_t)(MEM8(0x28006400) + HI8(eax)); /* 0x1007A70B: add byte ptr [0x28006400], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(0x29006400)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(0x29006400) = (uint8_t)(MEM8(0x29006400) + HI8(eax)); /* 0x1007A711: add byte ptr [0x29006400], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + LO8(ebx)); /* 0x1007A717: add byte ptr [ebp], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x1007A71A: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1007A71C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, ebp); /* 0x1007A71E: push ebp */
    ebp = esp; /* 0x1007A71F: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1007A721: push esi */
    esi = ecx; /* 0x1007A722: mov esi, ecx */
    RECOMP_CALL(sub_1007A73D); /* 0x1007A724: call 0x1007a73d */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1007A729: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007A736; /* 0x1007A72D: je 0x1007a736 */
L_1007A72F:
    PUSH32(esp, esi); /* 0x1007A72F: push esi */
    RECOMP_CALL(sub_1000ECE0); /* 0x1007A730: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007A735: pop ecx */
L_1007A736:
    eax = esi; /* 0x1007A736: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1007A738: pop esi */
    ebp = POP32_VAL(esp); /* 0x1007A739: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1007A73A: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1007A73D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007A73Du);

L_1007A73D:
    PUSH32(esp, 4); /* 0x1007A73D: push 4 */
    eax = 0x100DC459u; /* 0x1007A73F: mov eax, 0x100dc459 */
    RECOMP_CALL(sub_100149A4); /* 0x1007A744: call 0x100149a4 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1007A749: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x1007A74B: mov dword ptr [ebp - 0x10], esi */
    MEM32(esi) = 0x1001E394u; /* 0x1007A74E: mov dword ptr [esi], 0x1001e394 */
    MEM32(ebp + (-0x4)) = 1; /* 0x1007A754: mov dword ptr [ebp - 4], 1 */
    ecx = MEM32(esi + 0x5C); /* 0x1007A75B: mov ecx, dword ptr [esi + 0x5c] */
    /* test ecx, ecx */ /* 0x1007A75E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007A76B; /* 0x1007A760: je 0x1007a76b */
L_1007A762:
    RECOMP_CALL(sub_10074A30); /* 0x1007A762: call 0x10074a30 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x5C)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x5C) = MEM32(esi + 0x5C) & 0; /* 0x1007A767: and dword ptr [esi + 0x5c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1007A76B:
    PUSH32(esp, MEM32(esi + 0xA8)); /* 0x1007A76B: push dword ptr [esi + 0xa8] */
    RECOMP_CALL(sub_1000ECE0); /* 0x1007A771: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x1C)); /* 0x1007A776: push dword ptr [esi + 0x1c] */
    RECOMP_CALL(sub_1000ECE0); /* 0x1007A779: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x20)); /* 0x1007A77E: push dword ptr [esi + 0x20] */
    RECOMP_CALL(sub_1000ECE0); /* 0x1007A781: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1007A786: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_100149D7); /* 0x1007A789: call 0x100149d7 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007A78E: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007A78F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007A78Fu);

L_1007A78F:
    PUSH32(esp, ebp); /* 0x1007A78F: push ebp */
    ebp = esp; /* 0x1007A790: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1007A792: push ecx */
    PUSH32(esp, esi); /* 0x1007A793: push esi */
    esi = ecx; /* 0x1007A794: mov esi, ecx */
    PUSH32(esp, edi); /* 0x1007A796: push edi */
    eax = MEM32(esi + 0x50); /* 0x1007A797: mov eax, dword ptr [esi + 0x50] */
    edi = MEM32(eax); /* 0x1007A79A: mov edi, dword ptr [eax] */
    eax = MEM32(ebp + 0x8); /* 0x1007A79C: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1007A79F: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1007A7B9; /* 0x1007A7A0: je 0x1007a7b9 */
L_1007A7A2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 3; /* 0x1007A7A2: sub eax, 3 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1007A7B9; /* 0x1007A7A5: je 0x1007a7b9 */
L_1007A7A7:
    ecx = MEM32(esi + 0x58); /* 0x1007A7A7: mov ecx, dword ptr [esi + 0x58] */
    PUSH32(esp, MEM32(esi + 0x80)); /* 0x1007A7AA: push dword ptr [esi + 0x80] */
    eax = MEM32(ecx); /* 0x1007A7B0: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x1007A7B2: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    SET_LO8(eax, 1); /* 0x1007A7B5: mov al, 1 */
    goto L_1007A804; /* 0x1007A7B7: jmp 0x1007a804 */
L_1007A7B9:
    PUSH32(esp, 1); /* 0x1007A7B9: push 1 */
    ecx = edi; /* 0x1007A7BB: mov ecx, edi */
    RECOMP_CALL(sub_1007433B); /* 0x1007A7BD: call 0x1007433b */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1007A7C2: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007A7E8; /* 0x1007A7C4: jne 0x1007a7e8 */
L_1007A7C6:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x1007A7C6: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007A7D8; /* 0x1007A7CA: je 0x1007a7d8 */
L_1007A7CC:
    PUSH32(esp, 1); /* 0x1007A7CC: push 1 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1007A7CE: push dword ptr [ebp + 0x10] */
    ecx = edi; /* 0x1007A7D1: mov ecx, edi */
    RECOMP_CALL(sub_10073D0A); /* 0x1007A7D3: call 0x10073d0a */
    RECOMP_FLAGS_IN();
L_1007A7D8:
    PUSH32(esp, 0); /* 0x1007A7D8: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1007A7DA: push dword ptr [ebp + 8] */
    ecx = esi; /* 0x1007A7DD: mov ecx, esi */
    RECOMP_CALL(sub_100247D7); /* 0x1007A7DF: call 0x100247d7 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x1007A7E4: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_1007A804; /* 0x1007A7E6: jmp 0x1007a804 */
L_1007A7E8:
    ecx = MEM32(ebp + 0xC); /* 0x1007A7E8: mov ecx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x1007A7EB: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007A7F9; /* 0x1007A7ED: jne 0x1007a7f9 */
L_1007A7EF:
    ecx = edi; /* 0x1007A7EF: mov ecx, edi */
    RECOMP_CALL(sub_10024106); /* 0x1007A7F1: call 0x10024106 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(eax + 0x8); /* 0x1007A7F6: mov ecx, dword ptr [eax + 8] */
L_1007A7F9:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1007A7F9: push dword ptr [ebp + 0x10] */
    eax = MEM32(esi); /* 0x1007A7FC: mov eax, dword ptr [esi] */
    PUSH32(esp, ecx); /* 0x1007A7FE: push ecx */
    ecx = esi; /* 0x1007A7FF: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0x1C)); /* 0x1007A801: call dword ptr [eax + 0x1c] */
    RECOMP_FLAGS_IN();
L_1007A804:
    edi = POP32_VAL(esp); /* 0x1007A804: pop edi */
    esi = POP32_VAL(esp); /* 0x1007A805: pop esi */
    ecx = POP32_VAL(esp); /* 0x1007A806: pop ecx */
    ebp = POP32_VAL(esp); /* 0x1007A807: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1007A808: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1007A8D9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007A8D9u);

L_1007A8D9:
    PUSH32(esp, ebp); /* 0x1007A8D9: push ebp */
    ebp = esp; /* 0x1007A8DA: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x1007A8DC: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1007A8DF: sub esp, 0xc */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(esp + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esp + 0x4) = MEM32(esp + 0x4) & 0; /* 0x1007A8E2: and dword ptr [esp + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esp + 0x4; /* 0x1007A8E7: lea eax, [esp + 4] */
    PUSH32(esp, esi); /* 0x1007A8EB: push esi */
    PUSH32(esp, ecx); /* 0x1007A8EC: push ecx */
    PUSH32(esp, 0xFu); /* 0x1007A8ED: push 0xf */
    PUSH32(esp, eax); /* 0x1007A8EF: push eax */
    esi = ecx; /* 0x1007A8F0: mov esi, ecx */
    RECOMP_CALL(sub_1007A938); /* 0x1007A8F2: call 0x1007a938 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1007A8F7: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007A92C; /* 0x1007A8F9: je 0x1007a92c */
L_1007A8FB:
    /* cmp MEM32(esp + 0x8), 2 */ /* 0x1007A8FB: cmp dword ptr [esp + 8], 2 */
    _flag_a = (uint32_t)(MEM32(esp + 0x8)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007A912; /* 0x1007A900: je 0x1007a912 */
L_1007A902:
    /* cmp MEM32(esp + 0x8), 8 */ /* 0x1007A902: cmp dword ptr [esp + 8], 8 */
    _flag_a = (uint32_t)(MEM32(esp + 0x8)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007A912; /* 0x1007A907: je 0x1007a912 */
L_1007A909:
    eax = MEM32(esi); /* 0x1007A909: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x1007A90B: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x1007A90D: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    goto L_1007A933; /* 0x1007A910: jmp 0x1007a933 */
L_1007A912:
    ecx = MEM32(esp + 0xC); /* 0x1007A912: mov ecx, dword ptr [esp + 0xc] */
    PUSH32(esp, 0); /* 0x1007A916: push 0 */
    PUSH32(esp, 0); /* 0x1007A918: push 0 */
    PUSH32(esp, MEM32(esp + 0x10)); /* 0x1007A91A: push dword ptr [esp + 0x10] */
    MEM8(esi + 0xAD) = (uint8_t)(1); /* 0x1007A91E: mov byte ptr [esi + 0xad], 1 */
    RECOMP_CALL(sub_1007A78F); /* 0x1007A925: call 0x1007a78f */
    RECOMP_FLAGS_IN();
    goto L_1007A933; /* 0x1007A92A: jmp 0x1007a933 */
L_1007A92C:
    MEM8(esi + 0xAD) = (uint8_t)(1); /* 0x1007A92C: mov byte ptr [esi + 0xad], 1 */
L_1007A933:
    esi = POP32_VAL(esp); /* 0x1007A933: pop esi */
    esp = ebp; /* 0x1007A934: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007A936: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007A937: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007A938(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007A938u);

L_1007A938:
    PUSH32(esp, ebp); /* 0x1007A938: push ebp */
    ebp = esp; /* 0x1007A939: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1007A93B: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x1007A93C: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1007A93F: push esi */
    esi = ecx; /* 0x1007A940: mov esi, ecx */
    PUSH32(esp, edi); /* 0x1007A942: push edi */
    eax = esi + 0x8; /* 0x1007A943: lea eax, [esi + 8] */
    edi = MEM32(eax); /* 0x1007A946: mov edi, dword ptr [eax] */
    /* test ebx, edi */ /* 0x1007A948: test ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007A973; /* 0x1007A94A: je 0x1007a973 */
L_1007A94C:
    /* cmp ebx, 0xFu */ /* 0x1007A94C: cmp ebx, 0xf */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007A95C; /* 0x1007A94F: jne 0x1007a95c */
L_1007A951:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1007A951: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _tmp = MEM32(eax); /* 0x1007A953: xchg dword ptr [eax], edx */
      MEM32(eax) = edx;
      edx = _tmp; }
    /* test edx, edx */ /* 0x1007A955: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1007A957: setne al */
    goto L_1007A97E; /* 0x1007A95A: jmp 0x1007a97e */
L_1007A95C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1007A95C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = esi + 0x8; /* 0x1007A95E: lea edx, [esi + 8] */
    eax = edi; /* 0x1007A961: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(edx); if (eax == _d) { MEM32(edx) = ecx; } else { eax = _d; } } /* 0x1007A963: lock cmpxchg dword ptr [edx], ecx */
    _flag_k = FK_CMP;
    edx = eax; /* 0x1007A967: mov edx, eax */
    /* cmp edx, edi */ /* 0x1007A969: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007A97C; /* 0x1007A96B: je 0x1007a97c */
L_1007A96D:
    edi = edx; /* 0x1007A96D: mov edi, edx */
    /* test ebx, edx */ /* 0x1007A96F: test ebx, edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007A95C; /* 0x1007A971: jne 0x1007a95c */
L_1007A973:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x1007A973: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_1007A975:
    edi = POP32_VAL(esp); /* 0x1007A975: pop edi */
    esi = POP32_VAL(esp); /* 0x1007A976: pop esi */
    ebx = POP32_VAL(esp); /* 0x1007A977: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1007A978: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1007A979: ret 0xc */
L_1007A97C:
    SET_LO8(eax, 1); /* 0x1007A97C: mov al, 1 */
L_1007A97E:
    /* test LO8(eax), LO8(eax) */ /* 0x1007A97E: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007A973; /* 0x1007A980: je 0x1007a973 */
L_1007A982:
    eax = MEM32(esi + 0x50); /* 0x1007A982: mov eax, dword ptr [esi + 0x50] */
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x1007A985: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(eax); /* 0x1007A988: mov ecx, dword ptr [eax] */
    eax = edi; /* 0x1007A98A: mov eax, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1B4u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x1B4u; /* 0x1007A98C: add ecx, 0x1b4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(ecx), _sum = MEM32(ecx) + eax; eax = _old; MEM32(ecx) = _sum; } /* 0x1007A992: lock xadd dword ptr [ecx], eax */
    _flag_k = FK_ADD;
    ecx = MEM32(esi + 0x50); /* 0x1007A996: mov ecx, dword ptr [esi + 0x50] */
    eax = edi; /* 0x1007A999: mov eax, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x1Cu; /* 0x1007A99B: add ecx, 0x1c */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(ecx), _sum = MEM32(ecx) + eax; eax = _old; MEM32(ecx) = _sum; } /* 0x1007A99E: lock xadd dword ptr [ecx], eax */
    _flag_k = FK_ADD;
    /* cmp edx, 4 */ /* 0x1007A9A2: cmp edx, 4 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007A9AC; /* 0x1007A9A5: je 0x1007a9ac */
L_1007A9A7:
    /* cmp edx, 8 */ /* 0x1007A9A7: cmp edx, 8 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007A9C8; /* 0x1007A9AA: jne 0x1007a9c8 */
L_1007A9AC:
    eax = MEM32(esi + 0x50); /* 0x1007A9AC: mov eax, dword ptr [esi + 0x50] */
    ecx = MEM32(eax); /* 0x1007A9AF: mov ecx, dword ptr [eax] */
    eax = edi; /* 0x1007A9B1: mov eax, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1B8u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x1B8u; /* 0x1007A9B3: add ecx, 0x1b8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(ecx), _sum = MEM32(ecx) + eax; eax = _old; MEM32(ecx) = _sum; } /* 0x1007A9B9: lock xadd dword ptr [ecx], eax */
    _flag_k = FK_ADD;
    ecx = MEM32(esi + 0x50); /* 0x1007A9BD: mov ecx, dword ptr [esi + 0x50] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x20u; /* 0x1007A9C0: add ecx, 0x20 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(ecx), _sum = MEM32(ecx) + edi; edi = _old; MEM32(ecx) = _sum; } /* 0x1007A9C3: lock xadd dword ptr [ecx], edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1007A9C7: dec edi */
    _flag_k = FK_DEC;
L_1007A9C8:
    ecx = MEM32(ebp + 0x8); /* 0x1007A9C8: mov ecx, dword ptr [ebp + 8] */
    SET_LO8(eax, 1); /* 0x1007A9CB: mov al, 1 */
    MEM32(ecx) = edx; /* 0x1007A9CD: mov dword ptr [ecx], edx */
    MEM32(ecx + 0x4) = esi; /* 0x1007A9CF: mov dword ptr [ecx + 4], esi */
    MEM32(esi + 0xC) = edx; /* 0x1007A9D2: mov dword ptr [esi + 0xc], edx */
    RECOMP_BACKEDGE();
    goto L_1007A975; /* 0x1007A9D5: jmp 0x1007a975 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1007A9FA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007A9FAu);

L_1007A9FA:
    PUSH32(esp, ebp); /* 0x1007A9FA: push ebp */
    ebp = esp; /* 0x1007A9FB: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1007A9FD: push ecx */
    PUSH32(esp, ecx); /* 0x1007A9FE: push ecx */
    PUSH32(esp, ebx); /* 0x1007A9FF: push ebx */
    PUSH32(esp, esi); /* 0x1007AA00: push esi */
    PUSH32(esp, edi); /* 0x1007AA01: push edi */
    edi = ecx; /* 0x1007AA02: mov edi, ecx */
    MEM32(ebp + (-0x8)) = edi; /* 0x1007AA04: mov dword ptr [ebp - 8], edi */
    ecx = MEM32(edi + 0x50); /* 0x1007AA07: mov ecx, dword ptr [edi + 0x50] */
    eax = edi + 0xD4; /* 0x1007AA0A: lea eax, [edi + 0xd4] */
    PUSH32(esp, eax); /* 0x1007AA10: push eax */
    ecx = MEM32(ecx); /* 0x1007AA11: mov ecx, dword ptr [ecx] */
    RECOMP_CALL(sub_10074F76); /* 0x1007AA13: call 0x10074f76 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x50); /* 0x1007AA18: mov eax, dword ptr [edi + 0x50] */
    PUSH32(esp, MEM32(edi + 0x90)); /* 0x1007AA1B: push dword ptr [edi + 0x90] */
    ecx = MEM32(eax); /* 0x1007AA21: mov ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x30u; /* 0x1007AA23: add ecx, 0x30 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1006D487); /* 0x1007AA26: call 0x1006d487 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi + 0x50); /* 0x1007AA2B: mov ecx, dword ptr [edi + 0x50] */
    _flag_a = (uint32_t)((edx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edx | 0xFFFFFFFFu));
    edx = edx | 0xFFFFFFFFu; /* 0x1007AA2E: or edx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x24u; /* 0x1007AA31: add ecx, 0x24 */
    _flag_k = FK_ADD;
    eax = edx; /* 0x1007AA34: mov eax, edx */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(ecx), _sum = MEM32(ecx) + eax; eax = _old; MEM32(ecx) = _sum; } /* 0x1007AA36: lock xadd dword ptr [ecx], eax */
    _flag_k = FK_ADD;
    /* cmp MEM8(edi + 0xAC), 0 */ /* 0x1007AA3A: cmp byte ptr [edi + 0xac], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0xAC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007AA50; /* 0x1007AA41: jne 0x1007aa50 */
L_1007AA43:
    eax = MEM32(edi + 0x50); /* 0x1007AA43: mov eax, dword ptr [edi + 0x50] */
    eax = MEM32(eax); /* 0x1007AA46: mov eax, dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x14u; /* 0x1007AA48: add eax, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + edx; edx = _old; MEM32(eax) = _sum; } /* 0x1007AA4B: lock xadd dword ptr [eax], edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1007AA4F: dec edx */
    _flag_k = FK_DEC;
L_1007AA50:
    eax = MEM32(edi + 0x50); /* 0x1007AA50: mov eax, dword ptr [edi + 0x50] */
    edx = MEM32(eax); /* 0x1007AA53: mov edx, dword ptr [eax] */
    eax = MEM32(edi + 0x68); /* 0x1007AA55: mov eax, dword ptr [edi + 0x68] */
    ecx = eax; /* 0x1007AA58: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0x70));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(edi + 0x70); /* 0x1007AA5A: sub ecx, dword ptr [edi + 0x70] */
    _flag_k = FK_CMP;
    MEM32(edi + 0x70) = eax; /* 0x1007AA5D: mov dword ptr [edi + 0x70], eax */
    eax = edx + 0x1BC; /* 0x1007AA60: lea eax, [edx + 0x1bc] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + ecx; ecx = _old; MEM32(eax) = _sum; } /* 0x1007AA66: lock xadd dword ptr [eax], ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edi + 0x6C); /* 0x1007AA6A: mov eax, dword ptr [edi + 0x6c] */
    ecx = eax; /* 0x1007AA6D: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0x74));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(edi + 0x74); /* 0x1007AA6F: sub ecx, dword ptr [edi + 0x74] */
    _flag_k = FK_CMP;
    MEM32(edi + 0x74) = eax; /* 0x1007AA72: mov dword ptr [edi + 0x74], eax */
    eax = edx + 0x1C0; /* 0x1007AA75: lea eax, [edx + 0x1c0] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + ecx; ecx = _old; MEM32(eax) = _sum; } /* 0x1007AA7B: lock xadd dword ptr [eax], ecx */
    _flag_k = FK_ADD;
    /* cmp MEM8(edi + 0x60), 0 */ /* 0x1007AA7F: cmp byte ptr [edi + 0x60], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x60)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007AA98; /* 0x1007AA83: jne 0x1007aa98 */
L_1007AA85:
    eax = MEM32(edi + 0x50); /* 0x1007AA85: mov eax, dword ptr [edi + 0x50] */
    PUSH32(esp, MEM32(edi + 0x90)); /* 0x1007AA88: push dword ptr [edi + 0x90] */
    ecx = MEM32(eax); /* 0x1007AA8E: mov ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x48u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x48u; /* 0x1007AA90: add ecx, 0x48 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1006D487); /* 0x1007AA93: call 0x1006d487 */
    RECOMP_FLAGS_IN();
L_1007AA98:
    ecx = edi + 0x10; /* 0x1007AA98: lea ecx, [edi + 0x10] */
    MEM32(edi + 0x7C) = 0; /* 0x1007AA9B: mov dword ptr [edi + 0x7c], 0 */
    eax = MEM32(ecx + 0x4); /* 0x1007AAA2: mov eax, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ecx); /* 0x1007AAA5: sub eax, dword ptr [ecx] */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = ecx; /* 0x1007AAA7: mov dword ptr [ebp - 4], ecx */
    /* test eax, eax */ /* 0x1007AAAA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1007AAB7; /* 0x1007AAAC: jle 0x1007aab7 */
L_1007AAAE:
    RECOMP_CALL(sub_1007794C); /* 0x1007AAAE: call 0x1007794c */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1007AAB3: mov ebx, eax */
    goto L_1007AAB9; /* 0x1007AAB5: jmp 0x1007aab9 */
L_1007AAB7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1007AAB7: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1007AAB9:
    /* test ebx, ebx */ /* 0x1007AAB9: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007AB29; /* 0x1007AABB: je 0x1007ab29 */
L_1007AABD:
    edi = MEM32(ebp + (-0x4)); /* 0x1007AABD: mov edi, dword ptr [ebp - 4] */
L_1007AAC0:
    esi = MEM32(ebx + 0x1C); /* 0x1007AAC0: mov esi, dword ptr [ebx + 0x1c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1007AAC3: sub esp, 0x10 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x1007AAC6: mov ecx, esp */
    eax = esi + 0xC; /* 0x1007AAC8: lea eax, [esi + 0xc] */
    PUSH32(esp, eax); /* 0x1007AACB: push eax */
    RECOMP_CALL(sub_1002762F); /* 0x1007AACC: call 0x1002762f */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x1007AAD1: push ebx */
    ecx = esi; /* 0x1007AAD2: mov ecx, esi */
    RECOMP_CALL(sub_10072695); /* 0x1007AAD4: call 0x10072695 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x4); /* 0x1007AAD9: mov eax, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1007AADC: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(edi); /* 0x1007AADE: sub eax, dword ptr [edi] */
    _flag_k = FK_CMP;
    /* test eax, eax */ /* 0x1007AAE0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1007AB22; /* 0x1007AAE2: jle 0x1007ab22 */
L_1007AAE4:
    edx = MEM32(edi + 0x4); /* 0x1007AAE4: mov edx, dword ptr [edi + 4] */
    ecx = MEM32(edi + 0x8); /* 0x1007AAE7: mov ecx, dword ptr [edi + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1007AAEA: dec edx */
    _flag_k = FK_DEC;
    eax = MEM32(edi + 0xC); /* 0x1007AAEB: mov eax, dword ptr [edi + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    ecx = ecx & edx; /* 0x1007AAEE: and ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x4) = edx; /* 0x1007AAF0: mov dword ptr [edi + 4], edx */
    eax = eax + ecx * 4; /* 0x1007AAF3: lea eax, [eax + ecx*4] */
    { uint32_t _tmp = MEM32(eax); /* 0x1007AAF6: xchg dword ptr [eax], ebx */
      MEM32(eax) = ebx;
      ebx = _tmp; }
    /* test ebx, ebx */ /* 0x1007AAF8: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007AB02; /* 0x1007AAFA: jne 0x1007ab02 */
L_1007AAFC:
    eax = edx + 0x1; /* 0x1007AAFC: lea eax, [edx + 1] */
    MEM32(edi + 0x4) = eax; /* 0x1007AAFF: mov dword ptr [edi + 4], eax */
L_1007AB02:
    /* test LO8(ebx), 1 */ /* 0x1007AB02: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007AB22; /* 0x1007AB05: je 0x1007ab22 */
L_1007AB07:
    eax = MEM32(edi + 0x10); /* 0x1007AB07: mov eax, dword ptr [edi + 0x10] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    ebx = ebx & 0xFFFFFFFEu; /* 0x1007AB0A: and ebx, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1007AB0D: push ecx */
    ecx = MEM32(edi + 0x8); /* 0x1007AB0E: mov ecx, dword ptr [edi + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    ecx = ecx & edx; /* 0x1007AB11: and ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = eax + ecx * 8; /* 0x1007AB13: lea ecx, [eax + ecx*8] */
    RECOMP_CALL(sub_10076265); /* 0x1007AB16: call 0x10076265 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1007AB1B: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007AB22; /* 0x1007AB1D: jne 0x1007ab22 */
L_1007AB1F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1007AB1F: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1007AB21: inc ebx */
    _flag_k = FK_INC;
L_1007AB22:
    /* test ebx, ebx */ /* 0x1007AB22: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007AAC0; /* 0x1007AB24: jne 0x1007aac0 */
L_1007AB26:
    edi = MEM32(ebp + (-0x8)); /* 0x1007AB26: mov edi, dword ptr [ebp - 8] */
L_1007AB29:
    eax = MEM32(edi + 0x50); /* 0x1007AB29: mov eax, dword ptr [edi + 0x50] */
    ecx = MEM32(eax); /* 0x1007AB2C: mov ecx, dword ptr [eax] */
    eax = MEM32(edi + 0x58); /* 0x1007AB2E: mov eax, dword ptr [edi + 0x58] */
    esi = MEM32(eax); /* 0x1007AB31: mov esi, dword ptr [eax] */
    eax = MEM32(ecx); /* 0x1007AB33: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x34)); /* 0x1007AB35: call dword ptr [eax + 0x34] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi + 0x58); /* 0x1007AB38: mov ecx, dword ptr [edi + 0x58] */
    PUSH32(esp, eax); /* 0x1007AB3B: push eax */
    RECOMP_ICALL(MEM32(esi + 0x8)); /* 0x1007AB3C: call dword ptr [esi + 8] */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x50); /* 0x1007AB3F: mov eax, dword ptr [edi + 0x50] */
    _flag_a = (uint32_t)(MEM32(edi + 0x58)); _flag_b = (uint32_t)(0);
    MEM32(edi + 0x58) = MEM32(edi + 0x58) & 0; /* 0x1007AB42: and dword ptr [edi + 0x58], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(edi + 0x88); /* 0x1007AB46: mov esi, dword ptr [edi + 0x88] */
    ecx = MEM32(eax); /* 0x1007AB4C: mov ecx, dword ptr [eax] */
    eax = MEM32(ecx); /* 0x1007AB4E: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1007AB50: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(0x100E03F0), 4 */ /* 0x1007AB53: cmp byte ptr [0x100e03f0], 4 */
    _flag_a = (uint32_t)(MEM8(0x100E03F0)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_B(_flag_a, _flag_b)) goto L_1007AB73; /* 0x1007AB5A: jb 0x1007ab73 */
L_1007AB5C:
    ecx = MEM32(0x100E03EC); /* 0x1007AB5C: mov ecx, dword ptr [0x100e03ec] */
    /* test LO8(ecx), 4 */ /* 0x1007AB62: test cl, 4 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007AB73; /* 0x1007AB65: je 0x1007ab73 */
L_1007AB67:
    PUSH32(esp, esi); /* 0x1007AB67: push esi */
    PUSH32(esp, eax); /* 0x1007AB68: push eax */
    PUSH32(esp, 2); /* 0x1007AB69: push 2 */
    ecx = POP32_VAL(esp); /* 0x1007AB6B: pop ecx */
    RECOMP_CALL(sub_1007AC29); /* 0x1007AB6C: call 0x1007ac29 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007AB71: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1007AB72: pop ecx */
L_1007AB73:
    ecx = MEM32(edi + 0x5C); /* 0x1007AB73: mov ecx, dword ptr [edi + 0x5c] */
    /* test ecx, ecx */ /* 0x1007AB76: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007AB83; /* 0x1007AB78: je 0x1007ab83 */
L_1007AB7A:
    RECOMP_CALL(sub_10074A30); /* 0x1007AB7A: call 0x10074a30 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(edi + 0x5C)); _flag_b = (uint32_t)(0);
    MEM32(edi + 0x5C) = MEM32(edi + 0x5C) & 0; /* 0x1007AB7F: and dword ptr [edi + 0x5c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1007AB83:
    PUSH32(esp, ecx); /* 0x1007AB83: push ecx */
    PUSH32(esp, MEM32(edi + 0x64)); /* 0x1007AB84: push dword ptr [edi + 0x64] */
    ecx = MEM32(edi + 0x50); /* 0x1007AB87: mov ecx, dword ptr [edi + 0x50] */
    PUSH32(esp, edi); /* 0x1007AB8A: push edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x38u; /* 0x1007AB8B: add ecx, 0x38 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1007ACDD); /* 0x1007AB8E: call 0x1007acdd */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x1007AB93: pop edi */
    esi = POP32_VAL(esp); /* 0x1007AB94: pop esi */
    ebx = POP32_VAL(esp); /* 0x1007AB95: pop ebx */
    esp = ebp; /* 0x1007AB96: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007AB98: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007AB99: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007AB9A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007AB9Au);

L_1007AB9A:
    PUSH32(esp, ebp); /* 0x1007AB9A: push ebp */
    ebp = esp; /* 0x1007AB9B: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1007AB9D: push ebx */
    SET_LO8(ebx, MEM8(ebp + 0x8)); /* 0x1007AB9E: mov bl, byte ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1007ABA1: push esi */
    esi = ecx; /* 0x1007ABA2: mov esi, ecx */
    /* cmp MEM8(esi + 0x60), 0 */ /* 0x1007ABA4: cmp byte ptr [esi + 0x60], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x60)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = MEM32(esi + 0x50); /* 0x1007ABA8: mov eax, dword ptr [esi + 0x50] */
    ecx = MEM32(eax); /* 0x1007ABAB: mov ecx, dword ptr [eax] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007ABC4; /* 0x1007ABAD: je 0x1007abc4 */
L_1007ABAF:
    /* test LO8(ebx), LO8(ebx) */ /* 0x1007ABAF: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007ABD6; /* 0x1007ABB1: jne 0x1007abd6 */
L_1007ABB3:
    PUSH32(esp, MEM32(esi + 0x90)); /* 0x1007ABB3: push dword ptr [esi + 0x90] */
    MEM8(esi + 0x62) = (uint8_t)(1); /* 0x1007ABB9: mov byte ptr [esi + 0x62], 1 */
    RECOMP_CALL(sub_1002686F); /* 0x1007ABBD: call 0x1002686f */
    RECOMP_FLAGS_IN();
    goto L_1007ABD6; /* 0x1007ABC2: jmp 0x1007abd6 */
L_1007ABC4:
    /* test LO8(ebx), LO8(ebx) */ /* 0x1007ABC4: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007ABD6; /* 0x1007ABC6: je 0x1007abd6 */
L_1007ABC8:
    PUSH32(esp, MEM32(esi + 0x90)); /* 0x1007ABC8: push dword ptr [esi + 0x90] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x48u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x48u; /* 0x1007ABCE: add ecx, 0x48 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1006D487); /* 0x1007ABD1: call 0x1006d487 */
    RECOMP_FLAGS_IN();
L_1007ABD6:
    SET_LO8(eax, MEM8(ebp + 0xC)); /* 0x1007ABD6: mov al, byte ptr [ebp + 0xc] */
    MEM8(esi + 0x60) = (uint8_t)(LO8(ebx)); /* 0x1007ABD9: mov byte ptr [esi + 0x60], bl */
    MEM8(esi + 0x61) = (uint8_t)(LO8(eax)); /* 0x1007ABDC: mov byte ptr [esi + 0x61], al */
    esi = POP32_VAL(esp); /* 0x1007ABDF: pop esi */
    ebx = POP32_VAL(esp); /* 0x1007ABE0: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1007ABE1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1007ABE2: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1007ABE5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007ABE5u);

L_1007ABE5:
    /* cmp MEM8(ecx + 0x62), 0 */ /* 0x1007ABE5: cmp byte ptr [ecx + 0x62], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x62)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007ABF2; /* 0x1007ABE9: je 0x1007abf2 */
L_1007ABEB:
    MEM8(ecx + 0x62) = (uint8_t)(0); /* 0x1007ABEB: mov byte ptr [ecx + 0x62], 0 */
    SET_LO8(eax, 1); /* 0x1007ABEF: mov al, 1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007ABF1: ret  */
L_1007ABF2:
    eax = MEM32(ecx + 0x50); /* 0x1007ABF2: mov eax, dword ptr [ecx + 0x50] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1007ABF5: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ecx + 0x90); /* 0x1007ABF7: mov ecx, dword ptr [ecx + 0x90] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1007ABFD: inc edx */
    _flag_k = FK_INC;
    PUSH32(esp, esi); /* 0x1007ABFE: push esi */
    PUSH32(esp, edi); /* 0x1007ABFF: push edi */
    esi = MEM32(eax); /* 0x1007AC00: mov esi, dword ptr [eax] */
    edi = ecx; /* 0x1007AC02: mov edi, ecx */
    if (5u) _cf = (((edi) >> 4) & 1u); /* 0x1007AC04: shr edi, 5 */
    if (5u) { _flag_a = recomp_flags_pack((edi >> 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 5u; /* 0x1007AC04: shr edi, 5 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x1007AC07: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (2u) _cf = (((edi) >> 30) & 1u); /* 0x1007AC0A: shl edi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 2u; /* 0x1007AC0A: shl edi, 2 */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x1007AC0D: shl edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << ((LO8(ecx)) & 31); /* 0x1007AC0D: shl edx, cl */
    eax = MEM32(esi + 0x58); /* 0x1007AC0F: mov eax, dword ptr [esi + 0x58] */
    /* test MEM32(edi + eax), edx */ /* 0x1007AC12: test dword ptr [edi + eax], edx */
    _flag_a = (uint32_t)(MEM32(edi + eax)); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1007AC15: setne al */
    /* test LO8(eax), LO8(eax) */ /* 0x1007AC18: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007AC26; /* 0x1007AC1A: je 0x1007ac26 */
L_1007AC1C:
    ecx = MEM32(esi + 0x58); /* 0x1007AC1C: mov ecx, dword ptr [esi + 0x58] */
    edx = ~edx; /* 0x1007AC1F: not edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x1007AC21: add ecx, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(edx);
    MEM32(ecx) = MEM32(ecx) & edx; /* 0x1007AC23: lock and dword ptr [ecx], edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1007AC26:
    edi = POP32_VAL(esp); /* 0x1007AC26: pop edi */
    esi = POP32_VAL(esp); /* 0x1007AC27: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007AC28: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007AC29(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007AC29u);

L_1007AC29:
    PUSH32(esp, ebp); /* 0x1007AC29: push ebp */
    ebp = esp; /* 0x1007AC2A: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x1007AC2C: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x44u; /* 0x1007AC2F: sub esp, 0x44 */
    _flag_k = FK_CMP;
    /* cmp MEM32(0x100E0AD8), 0 */ /* 0x1007AC32: cmp dword ptr [0x100e0ad8], 0 */
    _flag_a = (uint32_t)(MEM32(0x100E0AD8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1007AC39: push ebx */
    PUSH32(esp, esi); /* 0x1007AC3A: push esi */
    PUSH32(esp, edi); /* 0x1007AC3B: push edi */
    ebx = ecx; /* 0x1007AC3C: mov ebx, ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007AC91; /* 0x1007AC3E: je 0x1007ac91 */
L_1007AC40:
    PUSH32(esp, 0x3Eu); /* 0x1007AC40: push 0x3e */
    eax = esp + 0x16; /* 0x1007AC42: lea eax, [esp + 0x16] */
    PUSH32(esp, 0); /* 0x1007AC46: push 0 */
    PUSH32(esp, eax); /* 0x1007AC48: push eax */
    RECOMP_CALL(sub_10011533); /* 0x1007AC49: call 0x10011533 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1007AC4E: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(esp + 0x3C) = 0x00020000u; /* 0x1007AC51: mov dword ptr [esp + 0x3c], 0x20000 */
    MEM8(esp + 0x14) = (uint8_t)(LO8(ebx)); /* 0x1007AC59: mov byte ptr [esp + 0x14], bl */
    edi = esp + 0x28; /* 0x1007AC5D: lea edi, [esp + 0x28] */
    MEM8(esp + 0x15) = (uint8_t)(4); /* 0x1007AC61: mov byte ptr [esp + 0x15], 4 */
    esi = 0x1007AC98u; /* 0x1007AC66: mov esi, 0x1007ac98 */
    PUSH32(esp, 0x40u); /* 0x1007AC6B: push 0x40 */
    eax = POP32_VAL(esp); /* 0x1007AC6D: pop eax */
    MEM16(esp + 0x10) = (uint16_t)(LO16(eax)); /* 0x1007AC6E: mov word ptr [esp + 0x10], ax */
    eax = MEM32(ebp + 0x8); /* 0x1007AC73: mov eax, dword ptr [ebp + 8] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1007AC76: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1007AC77: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1007AC78: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1007AC79: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(esp + 0x44) = eax; /* 0x1007AC7A: mov dword ptr [esp + 0x44], eax */
    eax = MEM32(ebp + 0xC); /* 0x1007AC7E: mov eax, dword ptr [ebp + 0xc] */
    MEM32(esp + 0x40) = eax; /* 0x1007AC81: mov dword ptr [esp + 0x40], eax */
    eax = esp + 0x10; /* 0x1007AC85: lea eax, [esp + 0x10] */
    PUSH32(esp, eax); /* 0x1007AC89: push eax */
    PUSH32(esp, ecx); /* 0x1007AC8A: push ecx */
    PUSH32(esp, ecx); /* 0x1007AC8B: push ecx */
    RECOMP_CALL(sub_1007A15B); /* 0x1007AC8C: call 0x1007a15b */
    RECOMP_FLAGS_IN();
L_1007AC91:
    edi = POP32_VAL(esp); /* 0x1007AC91: pop edi */
    esi = POP32_VAL(esp); /* 0x1007AC92: pop esi */
    ebx = POP32_VAL(esp); /* 0x1007AC93: pop ebx */
    esp = ebp; /* 0x1007AC94: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007AC96: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007AC97: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007AC98(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007AC98u);

L_1007AC98:
    edi = POP32_VAL(esp); /* 0x1007AC98: pop edi */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0x2Fu) << 24;
    MEM8(edi) = (uint8_t)(MEM8(edi) & 0x2Fu); /* 0x1007AC99: and byte ptr [edi], 0x2f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007ACB4; /* 0x1007AC9C: jbe 0x1007acb4 */
L_1007AC9E:
    void_lift_trap(0x1007AC9Eu, "int3 ");
L_1007ACB4:
    /* in: no port I/O under Win32 */ /* 0x1007ACB4: in al, dx */
    PUSH32(esp, esi); /* 0x1007ACB5: push esi */
    esi = ecx; /* 0x1007ACB6: mov esi, ecx */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x1007ACB8: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    /* cmp MEM32(esi), 0 */ /* 0x1007ACBA: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007ACD8; /* 0x1007ACBD: je 0x1007acd8 */
L_1007ACBF:
    ecx = MEM32(esi + 0x4); /* 0x1007ACBF: mov ecx, dword ptr [esi + 4] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1007ACC2: push dword ptr [ebp + 8] */
    eax = MEM32(ecx + 0x50); /* 0x1007ACC5: mov eax, dword ptr [ecx + 0x50] */
    eax = MEM32(eax + 0x4); /* 0x1007ACC8: mov eax, dword ptr [eax + 4] */
    PUSH32(esp, MEM32(eax + 0x8)); /* 0x1007ACCB: push dword ptr [eax + 8] */
    PUSH32(esp, MEM32(esi)); /* 0x1007ACCE: push dword ptr [esi] */
    RECOMP_CALL(sub_1007A78F); /* 0x1007ACD0: call 0x1007a78f */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x1007ACD5: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1007ACD8:
    esi = POP32_VAL(esp); /* 0x1007ACD8: pop esi */
    ebp = POP32_VAL(esp); /* 0x1007ACD9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1007ACDA: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1007ACB2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007ACB2u);

L_1007ACB2:
    PUSH32(esp, ebp); /* 0x1007ACB2: push ebp */
    ebp = esp; /* 0x1007ACB3: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1007ACB5: push esi */
    esi = ecx; /* 0x1007ACB6: mov esi, ecx */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x1007ACB8: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    /* cmp MEM32(esi), 0 */ /* 0x1007ACBA: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007ACD8; /* 0x1007ACBD: je 0x1007acd8 */
L_1007ACBF:
    ecx = MEM32(esi + 0x4); /* 0x1007ACBF: mov ecx, dword ptr [esi + 4] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1007ACC2: push dword ptr [ebp + 8] */
    eax = MEM32(ecx + 0x50); /* 0x1007ACC5: mov eax, dword ptr [ecx + 0x50] */
    eax = MEM32(eax + 0x4); /* 0x1007ACC8: mov eax, dword ptr [eax + 4] */
    PUSH32(esp, MEM32(eax + 0x8)); /* 0x1007ACCB: push dword ptr [eax + 8] */
    PUSH32(esp, MEM32(esi)); /* 0x1007ACCE: push dword ptr [esi] */
    RECOMP_CALL(sub_1007A78F); /* 0x1007ACD0: call 0x1007a78f */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x1007ACD5: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1007ACD8:
    esi = POP32_VAL(esp); /* 0x1007ACD8: pop esi */
    ebp = POP32_VAL(esp); /* 0x1007ACD9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1007ACDA: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1007ACDD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007ACDDu);

L_1007ACDD:
    PUSH32(esp, ebp); /* 0x1007ACDD: push ebp */
    ebp = esp; /* 0x1007ACDE: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1007ACE0: push ecx */
    edx = MEM32(ebp + 0xC); /* 0x1007ACE1: mov edx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1007ACE4: push esi */
    esi = ecx; /* 0x1007ACE5: mov esi, ecx */
    PUSH32(esp, edi); /* 0x1007ACE7: push edi */
    ecx = MEM32(esi + 0x2C); /* 0x1007ACE8: mov ecx, dword ptr [esi + 0x2c] */
    edi = MEM32(esi + 0x28); /* 0x1007ACEB: mov edi, dword ptr [esi + 0x28] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : (((edx) >> 31) & 1u)); /* 0x1007ACEE: sar edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> ((LO8(ecx)) & 31))), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> ((LO8(ecx)) & 31));
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1007ACF0: dec edi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    edi = edi & MEM32(ebp + 0xC); /* 0x1007ACF1: and edi, dword ptr [ebp + 0xc] */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, MEM32(esi + 0x3C) */ /* 0x1007ACF4: cmp edx, dword ptr [esi + 0x3c] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0x3C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1007AD00; /* 0x1007ACF7: jl 0x1007ad00 */
L_1007ACF9:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x1007ACF9: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_1007ADD4; /* 0x1007ACFB: jmp 0x1007add4 */
L_1007AD00:
    ecx = MEM32(esi + 0x38); /* 0x1007AD00: mov ecx, dword ptr [esi + 0x38] */
    eax = MEM32(esi + 0x34); /* 0x1007AD03: mov eax, dword ptr [esi + 0x34] */
    PUSH32(esp, ebx); /* 0x1007AD06: push ebx */
    /* cmp edx, ecx */ /* 0x1007AD07: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1007AD1C; /* 0x1007AD09: jl 0x1007ad1c */
L_1007AD0B:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x1007AD0B: sub edx, ecx */
    _flag_k = FK_CMP;
    ebx = MEM32(eax + ecx * 4 + (-0x4)); /* 0x1007AD0D: mov ebx, dword ptr [eax + ecx*4 - 4] */
    if (/* sub result */ CMP_S(_flag_a, _flag_b)) goto L_1007AD1F; /* 0x1007AD11: js 0x1007ad1f */
L_1007AD13:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1007AD13: inc edx */
    _flag_k = FK_INC;
L_1007AD14:
    ebx = MEM32(ebx + 0x4); /* 0x1007AD14: mov ebx, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1007AD17: dec edx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1007AD1F; /* 0x1007AD18: je 0x1007ad1f */
L_1007AD1A:
    RECOMP_BACKEDGE();
    goto L_1007AD14; /* 0x1007AD1A: jmp 0x1007ad14 */
L_1007AD1C:
    ebx = MEM32(eax + edx * 4); /* 0x1007AD1C: mov ebx, dword ptr [eax + edx*4] */
L_1007AD1F:
    eax = MEM32(ebx); /* 0x1007AD1F: mov eax, dword ptr [ebx] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1007AD21: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x8); /* 0x1007AD23: mov ecx, dword ptr [ebp + 8] */
    MEM32(ebp + 0xC) = ecx; /* 0x1007AD26: mov dword ptr [ebp + 0xc], ecx */
    ecx = eax + edi * 4; /* 0x1007AD29: lea ecx, [eax + edi*4] */
    eax = MEM32(ebp + 0xC); /* 0x1007AD2C: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(ecx); if (eax == _d) { MEM32(ecx) = edx; } else { eax = _d; } } /* 0x1007AD2F: lock cmpxchg dword ptr [ecx], edx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = eax; /* 0x1007AD33: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + (-0x4)); /* 0x1007AD36: mov eax, dword ptr [ebp - 4] */
    /* cmp eax, MEM32(ebp + 0xC) */ /* 0x1007AD39: cmp eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007ADD1; /* 0x1007AD3C: jne 0x1007add1 */
L_1007AD42:
    PUSH32(esp, 0xFFFFFFFEu); /* 0x1007AD42: push -2 */
    ecx = ebx + 0x8; /* 0x1007AD44: lea ecx, [ebx + 8] */
    eax = POP32_VAL(esp); /* 0x1007AD47: pop eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(ecx); if (eax == _d) { MEM32(ecx) = edi; } else { eax = _d; } } /* 0x1007AD48: lock cmpxchg dword ptr [ecx], edi */
    _flag_k = FK_CMP;
    ebx = MEM32(0x100E5134); /* 0x1007AD4C: mov ebx, dword ptr [0x100e5134] */
    PUSH32(esp, esi); /* 0x1007AD52: push esi */
    RECOMP_ICALL(ebx); /* 0x1007AD53: call ebx */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO16(eax); /* 0x1007AD55: movzx eax, ax */
    /* cmp eax, MEM32(esi + 0x44) */ /* 0x1007AD58: cmp eax, dword ptr [esi + 0x44] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x44));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1007ADBC; /* 0x1007AD5B: jle 0x1007adbc */
L_1007AD5D:
    eax = MEM32(ebp + 0x8); /* 0x1007AD5D: mov eax, dword ptr [ebp + 8] */
    edi = esi + 0x8; /* 0x1007AD60: lea edi, [esi + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xBCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xBCu; /* 0x1007AD63: add eax, 0xbc */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1007AD68: push eax */
    PUSH32(esp, edi); /* 0x1007AD69: push edi */
    RECOMP_ICALL(MEM32(0x100E5138)); /* 0x1007AD6A: call dword ptr [0x100e5138] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x1007AD70: push edi */
    RECOMP_ICALL(ebx); /* 0x1007AD71: call ebx */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO16(eax); /* 0x1007AD73: movzx eax, ax */
    /* cmp eax, MEM32(esi + 0x44) */ /* 0x1007AD76: cmp eax, dword ptr [esi + 0x44] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x44));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1007ADCD; /* 0x1007AD79: jle 0x1007adcd */
L_1007AD7B:
    eax = MEM32(esi + 0x24); /* 0x1007AD7B: mov eax, dword ptr [esi + 0x24] */
    ecx = 0xA0000000u; /* 0x1007AD7E: mov ecx, 0xa0000000 */
    eax = MEM32(eax + 0x194); /* 0x1007AD83: mov eax, dword ptr [eax + 0x194] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x1007AD89: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ecx */ /* 0x1007AD8B: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007ADCD; /* 0x1007AD8D: je 0x1007adcd */
L_1007AD8F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1007AD8F: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi + 0x48; /* 0x1007AD91: lea ecx, [esi + 0x48] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1007AD94: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007AD95: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(ecx); if (eax == _d) { MEM32(ecx) = edx; } else { eax = _d; } } /* 0x1007AD97: lock cmpxchg dword ptr [ecx], edx */
    _flag_k = FK_CMP;
    /* test eax, eax */ /* 0x1007AD9B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007ADCD; /* 0x1007AD9D: jne 0x1007adcd */
L_1007AD9F:
    PUSH32(esp, edi); /* 0x1007AD9F: push edi */
    RECOMP_ICALL(MEM32(0x100E5130)); /* 0x1007ADA0: call dword ptr [0x100e5130] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x24)); /* 0x1007ADA6: push dword ptr [esi + 0x24] */
    ecx = esi + 0x14; /* 0x1007ADA9: lea ecx, [esi + 0x14] */
    MEM32(esi + 0x10) = eax; /* 0x1007ADAC: mov dword ptr [esi + 0x10], eax */
    PUSH32(esp, esi); /* 0x1007ADAF: push esi */
    PUSH32(esp, 0x1007ADDCu); /* 0x1007ADB0: push 0x1007addc */
    RECOMP_CALL(sub_10074CBB); /* 0x1007ADB5: call 0x10074cbb */
    RECOMP_FLAGS_IN();
    goto L_1007ADCD; /* 0x1007ADBA: jmp 0x1007adcd */
L_1007ADBC:
    ecx = MEM32(ebp + 0x8); /* 0x1007ADBC: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xBCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xBCu; /* 0x1007ADBF: add ecx, 0xbc */
    _flag_k = FK_ADD;
    PUSH32(esp, ecx); /* 0x1007ADC5: push ecx */
    PUSH32(esp, esi); /* 0x1007ADC6: push esi */
    RECOMP_ICALL(MEM32(0x100E5138)); /* 0x1007ADC7: call dword ptr [0x100e5138] */
    RECOMP_FLAGS_IN();
L_1007ADCD:
    SET_LO8(eax, 1); /* 0x1007ADCD: mov al, 1 */
    goto L_1007ADD3; /* 0x1007ADCF: jmp 0x1007add3 */
L_1007ADD1:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x1007ADD1: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_1007ADD3:
    ebx = POP32_VAL(esp); /* 0x1007ADD3: pop ebx */
L_1007ADD4:
    edi = POP32_VAL(esp); /* 0x1007ADD4: pop edi */
    esi = POP32_VAL(esp); /* 0x1007ADD5: pop esi */
    esp = ebp; /* 0x1007ADD6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007ADD8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1007ADD9: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1007ADDC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007ADDCu);

L_1007ADDC:
    PUSH32(esp, ebp); /* 0x1007ADDC: push ebp */
    ebp = esp; /* 0x1007ADDD: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1007ADDF: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1007ADE0: mov esi, dword ptr [ebp + 8] */
    ecx = 0xA0000000u; /* 0x1007ADE3: mov ecx, 0xa0000000 */
    eax = MEM32(esi + 0x24); /* 0x1007ADE8: mov eax, dword ptr [esi + 0x24] */
    eax = MEM32(eax + 0x194); /* 0x1007ADEB: mov eax, dword ptr [eax + 0x194] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x1007ADF1: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ecx */ /* 0x1007ADF3: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007AE0A; /* 0x1007ADF5: je 0x1007ae0a */
L_1007ADF7:
    PUSH32(esp, MEM32(esi + 0x10)); /* 0x1007ADF7: push dword ptr [esi + 0x10] */
    RECOMP_CALL(sub_10076241); /* 0x1007ADFA: call 0x10076241 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0; /* 0x1007ADFF: and dword ptr [esi + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi + 0x48; /* 0x1007AE03: lea eax, [esi + 0x48] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1007AE06: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _tmp = MEM32(eax); /* 0x1007AE08: xchg dword ptr [eax], ecx */
      MEM32(eax) = ecx;
      ecx = _tmp; }
L_1007AE0A:
    esi = POP32_VAL(esp); /* 0x1007AE0A: pop esi */
    ebp = POP32_VAL(esp); /* 0x1007AE0B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007AE0C: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007AE0D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007AE0Du);

L_1007AE0D:
    PUSH32(esp, ebp); /* 0x1007AE0D: push ebp */
    ebp = esp; /* 0x1007AE0E: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1007AE10: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1007AE13: push esi */
    esi = ecx; /* 0x1007AE14: mov esi, ecx */
    ecx = MEM32(ebp + 0x8); /* 0x1007AE16: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x1007AE19: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007AE52; /* 0x1007AE1B: je 0x1007ae52 */
L_1007AE1D:
    eax = MEM32(esi + 0x1C); /* 0x1007AE1D: mov eax, dword ptr [esi + 0x1c] */
    /* cmp MEM32(eax + 0x8), ecx */ /* 0x1007AE20: cmp dword ptr [eax + 8], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007AE3B; /* 0x1007AE23: je 0x1007ae3b */
L_1007AE25:
    ecx = ebp + (-0xC); /* 0x1007AE25: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1009DD55); /* 0x1007AE28: call 0x1009dd55 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0xC)) = 0x10067694u; /* 0x1007AE2D: mov dword ptr [ebp - 0xc], 0x10067694 */
    PUSH32(esp, 0x100DCF08u); /* 0x1007AE34: push 0x100dcf08 */
    goto L_1007AE71; /* 0x1007AE39: jmp 0x1007ae71 */
L_1007AE3B:
    ecx = esi; /* 0x1007AE3B: mov ecx, esi */
    RECOMP_CALL(sub_1007AE7B); /* 0x1007AE3D: call 0x1007ae7b */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x1C); /* 0x1007AE42: mov ecx, dword ptr [esi + 0x1c] */
    PUSH32(esp, esi); /* 0x1007AE45: push esi */
    RECOMP_CALL(sub_10075BFC); /* 0x1007AE46: call 0x10075bfc */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x1007AE4B: pop esi */
    esp = ebp; /* 0x1007AE4C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007AE4E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1007AE4F: ret 4 */
L_1007AE52:
    eax = ebp + 0x8; /* 0x1007AE52: lea eax, [ebp + 8] */
    MEM32(ebp + 0x8) = 0x10067870u; /* 0x1007AE55: mov dword ptr [ebp + 8], 0x10067870 */
    PUSH32(esp, eax); /* 0x1007AE5C: push eax */
    ecx = ebp + (-0xC); /* 0x1007AE5D: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1009DD30); /* 0x1007AE60: call 0x1009dd30 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0xC)) = 0x1006754Cu; /* 0x1007AE65: mov dword ptr [ebp - 0xc], 0x1006754c */
    PUSH32(esp, 0x100DCEE8u); /* 0x1007AE6C: push 0x100dcee8 */
L_1007AE71:
    eax = ebp + (-0xC); /* 0x1007AE71: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1007AE74: push eax */
    RECOMP_CALL(sub_100192EB); /* 0x1007AE75: call 0x100192eb */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1007AE7Au, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1007AE7B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007AE7Bu);

L_1007AE7B:
    PUSH32(esp, ebp); /* 0x1007AE7B: push ebp */
    ebp = esp; /* 0x1007AE7C: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1007AE7E: push ecx */
    eax = ecx + 0x4C; /* 0x1007AE7F: lea eax, [ecx + 0x4c] */
    _flag_a = (uint32_t)((edx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edx | 0xFFFFFFFFu));
    edx = edx | 0xFFFFFFFFu; /* 0x1007AE82: or edx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + edx; edx = _old; MEM32(eax) = _sum; } /* 0x1007AE85: lock xadd dword ptr [eax], edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1007AE89: dec edx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1007AE98; /* 0x1007AE8A: jne 0x1007ae98 */
L_1007AE8C:
    eax = ecx + 0x8; /* 0x1007AE8C: lea eax, [ecx + 8] */
    ecx = MEM32(ecx + 0x1C); /* 0x1007AE8F: mov ecx, dword ptr [ecx + 0x1c] */
    PUSH32(esp, eax); /* 0x1007AE92: push eax */
    RECOMP_CALL(sub_10075D49); /* 0x1007AE93: call 0x10075d49 */
    RECOMP_FLAGS_IN();
L_1007AE98:
    esp = ebp; /* 0x1007AE98: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007AE9A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007AE9B: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007AE9C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007AE9Cu);

L_1007AE9C:
    PUSH32(esp, 4); /* 0x1007AE9C: push 4 */
    eax = 0x100DC4A8u; /* 0x1007AE9E: mov eax, 0x100dc4a8 */
    RECOMP_CALL(sub_100149A4); /* 0x1007AEA3: call 0x100149a4 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1007AEA8: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x1007AEAA: mov dword ptr [ebp - 0x10], esi */
    PUSH32(esp, 0x3Fu); /* 0x1007AEAD: push 0x3f */
    edi = POP32_VAL(esp); /* 0x1007AEAF: pop edi */
    MEM32(esi) = 0; /* 0x1007AEB0: mov dword ptr [esi], 0 */
    ebx = esi + 0x70; /* 0x1007AEB6: lea ebx, [esi + 0x70] */
    PUSH32(esp, 0x100u); /* 0x1007AEB9: push 0x100 */
    MEM32(esi + 0x4) = 0; /* 0x1007AEBE: mov dword ptr [esi + 4], 0 */
    MEM32(esi + 0x14) = ebx; /* 0x1007AEC5: mov dword ptr [esi + 0x14], ebx */
    MEM32(esi + 0x8) = edi; /* 0x1007AEC8: mov dword ptr [esi + 8], edi */
    RECOMP_CALL(sub_10011683); /* 0x1007AECB: call 0x10011683 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0xC) = eax; /* 0x1007AED0: mov dword ptr [esi + 0xc], eax */
    MEM32(esp) = 0x200u; /* 0x1007AED3: mov dword ptr [esp], 0x200 */
    RECOMP_CALL(sub_10011683); /* 0x1007AEDA: call 0x10011683 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007AEDF: pop ecx */
    /* test eax, eax */ /* 0x1007AEE0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007AEF7; /* 0x1007AEE2: je 0x1007aef7 */
L_1007AEE4:
    ecx = eax; /* 0x1007AEE4: mov ecx, eax */
    edx = edi; /* 0x1007AEE6: mov edx, edi */
L_1007AEE8:
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0);
    MEM32(ecx) = MEM32(ecx) & 0; /* 0x1007AEE8: and dword ptr [ecx], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ecx + 0x8; /* 0x1007AEEB: lea ecx, [ecx + 8] */
    _flag_a = (uint32_t)(MEM32(ecx + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ecx + (-0x4)) = MEM32(ecx + (-0x4)) & 0; /* 0x1007AEEE: and dword ptr [ecx - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1007AEF2: dec edx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_1007AEF9; /* 0x1007AEF3: js 0x1007aef9 */
L_1007AEF5:
    RECOMP_BACKEDGE();
    goto L_1007AEE8; /* 0x1007AEF5: jmp 0x1007aee8 */
L_1007AEF7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007AEF7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1007AEF9:
    PUSH32(esp, 0x100u); /* 0x1007AEF9: push 0x100 */
    PUSH32(esp, 0); /* 0x1007AEFE: push 0 */
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x1007AF00: push dword ptr [esi + 0xc] */
    MEM32(esi + 0x10) = eax; /* 0x1007AF03: mov dword ptr [esi + 0x10], eax */
    RECOMP_CALL(sub_10011533); /* 0x1007AF06: call 0x10011533 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007AF0B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1007AF0D: mov dword ptr [ebp - 4], eax */
    MEM32(esi + 0x38) = eax; /* 0x1007AF10: mov dword ptr [esi + 0x38], eax */
    MEM32(esi + 0x48) = eax; /* 0x1007AF13: mov dword ptr [esi + 0x48], eax */
    MEM32(esi + 0x5C) = ebx; /* 0x1007AF16: mov dword ptr [esi + 0x5c], ebx */
    MEM32(esi + 0x4C) = eax; /* 0x1007AF19: mov dword ptr [esi + 0x4c], eax */
    PUSH32(esp, 0x100u); /* 0x1007AF1C: push 0x100 */
    MEM32(esi + 0x50) = eax; /* 0x1007AF21: mov dword ptr [esi + 0x50], eax */
    MEM32(esi + 0x64) = eax; /* 0x1007AF24: mov dword ptr [esi + 0x64], eax */
    MEM8(esi + 0x60) = (uint8_t)(LO8(eax)); /* 0x1007AF27: mov byte ptr [esi + 0x60], al */
    MEM32(esi + 0x58) = eax; /* 0x1007AF2A: mov dword ptr [esi + 0x58], eax */
    MEM32(esi + 0x54) = edi; /* 0x1007AF2D: mov dword ptr [esi + 0x54], edi */
    RECOMP_CALL(sub_10011683); /* 0x1007AF30: call 0x10011683 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x200u); /* 0x1007AF35: push 0x200 */
    MEM32(esi + 0x68) = eax; /* 0x1007AF3A: mov dword ptr [esi + 0x68], eax */
    RECOMP_CALL(sub_10011683); /* 0x1007AF3D: call 0x10011683 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1007AF42: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1007AF45: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007AF5A; /* 0x1007AF47: je 0x1007af5a */
L_1007AF49:
    ecx = eax; /* 0x1007AF49: mov ecx, eax */
L_1007AF4B:
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0);
    MEM32(ecx) = MEM32(ecx) & 0; /* 0x1007AF4B: and dword ptr [ecx], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ecx + 0x8; /* 0x1007AF4E: lea ecx, [ecx + 8] */
    _flag_a = (uint32_t)(MEM32(ecx + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ecx + (-0x4)) = MEM32(ecx + (-0x4)) & 0; /* 0x1007AF51: and dword ptr [ecx - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1007AF55: dec edi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_1007AF5C; /* 0x1007AF56: js 0x1007af5c */
L_1007AF58:
    RECOMP_BACKEDGE();
    goto L_1007AF4B; /* 0x1007AF58: jmp 0x1007af4b */
L_1007AF5A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007AF5A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1007AF5C:
    MEM32(esi + 0x6C) = eax; /* 0x1007AF5C: mov dword ptr [esi + 0x6c], eax */
    ecx = 0x100E44FCu; /* 0x1007AF5F: mov ecx, 0x100e44fc */
    MEM32(ebx) = 0; /* 0x1007AF64: mov dword ptr [ebx], 0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007AF6A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(esi + 0x2C)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x2C) = MEM32(esi + 0x2C) & 0; /* 0x1007AF6C: and dword ptr [esi + 0x2c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1007AF70: inc eax */
    _flag_k = FK_INC;
    MEM32(esi + 0x34) = esi; /* 0x1007AF71: mov dword ptr [esi + 0x34], esi */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(ecx), _sum = MEM32(ecx) + eax; eax = _old; MEM32(ecx) = _sum; } /* 0x1007AF74: lock xadd dword ptr [ecx], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1007AF78: inc eax */
    _flag_k = FK_INC;
    MEM32(esi + 0x40) = eax; /* 0x1007AF79: mov dword ptr [esi + 0x40], eax */
    eax = esi; /* 0x1007AF7C: mov eax, esi */
    RECOMP_CALL(sub_100149D7); /* 0x1007AF7E: call 0x100149d7 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007AF83: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007AF84(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007AF84u);

L_1007AF84:
    PUSH32(esp, ebp); /* 0x1007AF84: push ebp */
    ebp = esp; /* 0x1007AF85: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1007AF87: push esi */
    esi = ecx; /* 0x1007AF88: mov esi, ecx */
    eax = MEM32(esi + 0x4); /* 0x1007AF8A: mov eax, dword ptr [esi + 4] */
    /* cmp eax, MEM32(esi) */ /* 0x1007AF8D: cmp eax, dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1007AFA0; /* 0x1007AF8F: jg 0x1007afa0 */
L_1007AF91:
    eax = MEM32(esi + 0x50); /* 0x1007AF91: mov eax, dword ptr [esi + 0x50] */
    /* cmp eax, MEM32(esi + 0x4C) */ /* 0x1007AF94: cmp eax, dword ptr [esi + 0x4c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x4C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1007AFA0; /* 0x1007AF97: jg 0x1007afa0 */
L_1007AF99:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007AF99: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1007B02D; /* 0x1007AF9B: jmp 0x1007b02d */
L_1007AFA0:
    ecx = MEM32(esi + 0x48); /* 0x1007AFA0: mov ecx, dword ptr [esi + 0x48] */
    PUSH32(esp, ebx); /* 0x1007AFA3: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1007AFA4: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1007AFA6: push edi */
    edi = ebx; /* 0x1007AFA7: mov edi, ebx */
    /* test ecx, ecx */ /* 0x1007AFA9: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007AFE7; /* 0x1007AFAB: je 0x1007afe7 */
L_1007AFAD:
    /* cmp MEM32(ecx + 0x70), ebx */ /* 0x1007AFAD: cmp dword ptr [ecx + 0x70], ebx */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1007AFE7; /* 0x1007AFB0: jle 0x1007afe7 */
L_1007AFB2:
    eax = MEM32(ecx); /* 0x1007AFB2: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x1007AFB4: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1007AFB7: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007AFE7; /* 0x1007AFB9: jne 0x1007afe7 */
L_1007AFBB:
    /* cmp MEM8(esi + 0x60), LO8(ebx) */ /* 0x1007AFBB: cmp byte ptr [esi + 0x60], bl */
    _flag_a = (uint32_t)(MEM8(esi + 0x60)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007AFD2; /* 0x1007AFBE: je 0x1007afd2 */
L_1007AFC0:
    PUSH32(esp, ecx); /* 0x1007AFC0: push ecx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1007AFC1: push dword ptr [ebp + 8] */
    ecx = esi + 0x4C; /* 0x1007AFC4: lea ecx, [esi + 0x4c] */
    RECOMP_CALL(sub_1007B20F); /* 0x1007AFC7: call 0x1007b20f */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1007AFCC: mov edi, eax */
    /* test edi, edi */ /* 0x1007AFCE: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007B025; /* 0x1007AFD0: jne 0x1007b025 */
L_1007AFD2:
    RECOMP_CALL(sub_10023AF4); /* 0x1007AFD2: call 0x10023af4 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1007AFD7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007AFDE; /* 0x1007AFD9: je 0x1007afde */
L_1007AFDB:
    ebx = eax + (-0x4); /* 0x1007AFDB: lea ebx, [eax - 4] */
L_1007AFDE:
    _flag_a = (uint32_t)((MEM8(ebx + 0xB3) | 2)) << 24; _flag_b = (uint32_t)((MEM8(ebx + 0xB3) | 2)) << 24;
    MEM8(ebx + 0xB3) = (uint8_t)(MEM8(ebx + 0xB3) | 2); /* 0x1007AFDE: or byte ptr [ebx + 0xb3], 2 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_1007B029; /* 0x1007AFE5: jmp 0x1007b029 */
L_1007AFE7:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1007AFE7: push dword ptr [ebp + 8] */
    ecx = esi; /* 0x1007AFEA: mov ecx, esi */
    RECOMP_CALL(sub_1007B191); /* 0x1007AFEC: call 0x1007b191 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1007AFF1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007B02B; /* 0x1007AFF3: jne 0x1007b02b */
L_1007AFF5:
    PUSH32(esp, ecx); /* 0x1007AFF5: push ecx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1007AFF6: push dword ptr [ebp + 8] */
    ecx = esi + 0x4C; /* 0x1007AFF9: lea ecx, [esi + 0x4c] */
    RECOMP_CALL(sub_1007B20F); /* 0x1007AFFC: call 0x1007b20f */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1007B001: mov edi, eax */
    /* test edi, edi */ /* 0x1007B003: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007B029; /* 0x1007B005: je 0x1007b029 */
L_1007B007:
    ecx = MEM32(esi + 0x48); /* 0x1007B007: mov ecx, dword ptr [esi + 0x48] */
    /* test ecx, ecx */ /* 0x1007B00A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007B025; /* 0x1007B00C: je 0x1007b025 */
L_1007B00E:
    eax = MEM32(edi + 0x8); /* 0x1007B00E: mov eax, dword ptr [edi + 8] */
    /* cmp MEM32(eax + 0xC), ecx */ /* 0x1007B011: cmp dword ptr [eax + 0xc], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0xC)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007B025; /* 0x1007B014: jne 0x1007b025 */
L_1007B016:
    eax = ecx + 0x64; /* 0x1007B016: lea eax, [ecx + 0x64] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1007B019: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1007B01B: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + ecx; ecx = _old; MEM32(eax) = _sum; } /* 0x1007B01C: lock xadd dword ptr [eax], ecx */
    _flag_k = FK_ADD;
    MEM8(edi + 0x11) = (uint8_t)(LO8(ebx)); /* 0x1007B020: mov byte ptr [edi + 0x11], bl */
    goto L_1007B029; /* 0x1007B023: jmp 0x1007b029 */
L_1007B025:
    MEM8(edi + 0x11) = (uint8_t)(1); /* 0x1007B025: mov byte ptr [edi + 0x11], 1 */
L_1007B029:
    eax = edi; /* 0x1007B029: mov eax, edi */
L_1007B02B:
    edi = POP32_VAL(esp); /* 0x1007B02B: pop edi */
    ebx = POP32_VAL(esp); /* 0x1007B02C: pop ebx */
L_1007B02D:
    esi = POP32_VAL(esp); /* 0x1007B02D: pop esi */
    ebp = POP32_VAL(esp); /* 0x1007B02E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1007B02F: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1007B032(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007B032u);

L_1007B032:
    PUSH32(esp, 0x10u); /* 0x1007B032: push 0x10 */
    PUSH32(esp, 0x1007B0A8u); /* 0x1007B034: push 0x1007b0a8 */
    RECOMP_CALL(sub_1000ED7E); /* 0x1007B039: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1007B03E: mov esi, ecx */
    MEM32(ebp + (-0x20)) = esi; /* 0x1007B040: mov dword ptr [ebp - 0x20], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & 0; /* 0x1007B043: and dword ptr [ebp - 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_10023AF4); /* 0x1007B047: call 0x10023af4 */
    RECOMP_FLAGS_IN();
    ecx = esi + 0x70; /* 0x1007B04C: lea ecx, [esi + 0x70] */
    /* cmp MEM32(ecx), 0 */ /* 0x1007B04F: cmp dword ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007B091; /* 0x1007B052: jne 0x1007b091 */
L_1007B054:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007B054: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1007B056: inc eax */
    _flag_k = FK_INC;
    { uint32_t _tmp = MEM32(ecx); /* 0x1007B057: xchg dword ptr [ecx], eax */
      MEM32(ecx) = eax;
      eax = _tmp; }
    /* test eax, eax */ /* 0x1007B059: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007B091; /* 0x1007B05B: jne 0x1007b091 */
L_1007B05D:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(eax);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & eax; /* 0x1007B05D: and dword ptr [ebp - 4], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1007B060: push dword ptr [ebp + 8] */
    ecx = esi; /* 0x1007B063: mov ecx, esi */
    RECOMP_CALL(sub_1007AF84); /* 0x1007B065: call 0x1007af84 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x1C)) = eax; /* 0x1007B06A: mov dword ptr [ebp - 0x1c], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1007B06D: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1007B084); /* 0x1007B074: call 0x1007b084 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x1007B079: mov eax, dword ptr [ebp + 0xc] */
    MEM8(eax) = (uint8_t)(1); /* 0x1007B07C: mov byte ptr [eax], 1 */
    goto L_1007B09C; /* 0x1007B07F: jmp 0x1007b09c */
L_1007B091:
    RECOMP_CALL(sub_10023AF4); /* 0x1007B091: call 0x10023af4 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x1007B096: mov eax, dword ptr [ebp + 0xc] */
    MEM8(eax) = (uint8_t)(0); /* 0x1007B099: mov byte ptr [eax], 0 */
L_1007B09C:
    eax = MEM32(ebp + (-0x1C)); /* 0x1007B09C: mov eax, dword ptr [ebp - 0x1c] */
    RECOMP_CALL(sub_1000EDC3); /* 0x1007B09F: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1007B0A4: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1007B084(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007B084u);

L_1007B084:
    MEM32(esi + 0x70) = 0; /* 0x1007B084: mov dword ptr [esi + 0x70], 0 */
    RECOMP_CALL(sub_10023AF4); /* 0x1007B08B: call 0x10023af4 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007B090: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007B0C4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007B0C4u);

L_1007B0C4:
    PUSH32(esp, 8); /* 0x1007B0C4: push 8 */
    eax = 0x100DC4F8u; /* 0x1007B0C6: mov eax, 0x100dc4f8 */
    RECOMP_CALL(sub_100149A4); /* 0x1007B0CB: call 0x100149a4 */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x1007B0D0: mov edi, ecx */
    esi = edi + 0x70; /* 0x1007B0D2: lea esi, [edi + 0x70] */
    MEM32(ebp + (-0x10)) = esi; /* 0x1007B0D5: mov dword ptr [ebp - 0x10], esi */
    RECOMP_CALL(sub_10023AF4); /* 0x1007B0D8: call 0x10023af4 */
    RECOMP_FLAGS_IN();
    ecx = esi; /* 0x1007B0DD: mov ecx, esi */
    RECOMP_CALL(sub_10023D1E); /* 0x1007B0DF: call 0x10023d1e */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1007B0E4: push dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1007B0E7: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edi; /* 0x1007B0EB: mov ecx, edi */
    RECOMP_CALL(sub_1007AF84); /* 0x1007B0ED: call 0x1007af84 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1007B0F2: mov edi, eax */
    MEM32(esi) = 0; /* 0x1007B0F4: mov dword ptr [esi], 0 */
    RECOMP_CALL(sub_10023AF4); /* 0x1007B0FA: call 0x10023af4 */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x1007B0FF: mov eax, edi */
    RECOMP_CALL(sub_100149D7); /* 0x1007B101: call 0x100149d7 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1007B106: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1007B109(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007B109u);

    goto L_1007B109;
L_1006D563:
    PUSH32(esp, esi); /* 0x1006D563: push esi */
    esi = ecx; /* 0x1006D564: mov esi, ecx */
    /* test MEM8(esi + 0x30), 4 */ /* 0x1006D566: test byte ptr [esi + 0x30], 4 */
    _flag_a = (uint32_t)(MEM8(esi + 0x30)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006D594; /* 0x1006D56A: jne 0x1006d594 */
L_1006D56C:
    PUSH32(esp, edi); /* 0x1006D56C: push edi */
    eax = esi + 0x14; /* 0x1006D56D: lea eax, [esi + 0x14] */
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x1006D570: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + edi; edi = _old; MEM32(eax) = _sum; } /* 0x1006D573: lock xadd dword ptr [eax], edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1006D577: dec edi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1006D58F; /* 0x1006D578: jne 0x1006d58f */
L_1006D57A:
    eax = MEM32(esi); /* 0x1006D57A: mov eax, dword ptr [esi] */
    RECOMP_ICALL(MEM32(eax + 0x1C)); /* 0x1006D57C: call dword ptr [eax + 0x1c] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x4); /* 0x1006D57F: mov ecx, dword ptr [esi + 4] */
    PUSH32(esp, ecx); /* 0x1006D582: push ecx */
    PUSH32(esp, MEM32(esi + 0x18)); /* 0x1006D583: push dword ptr [esi + 0x18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x60u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x60u; /* 0x1006D586: add ecx, 0x60 */
    _flag_k = FK_ADD;
    PUSH32(esp, esi); /* 0x1006D589: push esi */
    RECOMP_CALL(sub_10075165); /* 0x1006D58A: call 0x10075165 */
    RECOMP_FLAGS_IN();
L_1006D58F:
    eax = edi; /* 0x1006D58F: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1006D591: pop edi */
    esi = POP32_VAL(esp); /* 0x1006D592: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006D593: ret  */
L_1006D594:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1006D594: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1006D596: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006D597: ret  */
L_1007B109:
    PUSH32(esp, ebp); /* 0x1007B109: push ebp */
    ebp = esp; /* 0x1007B10A: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1007B10C: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1007B10F: push esi */
    PUSH32(esp, ecx); /* 0x1007B110: push ecx */
    esi = MEM32(eax + 0x3C); /* 0x1007B111: mov esi, dword ptr [eax + 0x3c] */
    PUSH32(esp, MEM32(eax + 0x44)); /* 0x1007B114: push dword ptr [eax + 0x44] */
    PUSH32(esp, eax); /* 0x1007B117: push eax */
    ecx = esi + 0x58; /* 0x1007B118: lea ecx, [esi + 0x58] */
    RECOMP_CALL(sub_1006AD3B); /* 0x1007B11B: call 0x1006ad3b */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x100); /* 0x1007B120: mov ecx, dword ptr [esi + 0x100] */
    esi = POP32_VAL(esp); /* 0x1007B126: pop esi */
    ebp = POP32_VAL(esp); /* 0x1007B127: pop ebp */
    RECOMP_BACKEDGE();
    goto L_1006D563; /* 0x1007B128: jmp 0x1006d563 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}
