#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_1006CCF4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006CCF4u);

L_1006CCF4:
    PUSH32(esp, ebp); /* 0x1006CCF4: push ebp */
    ebp = esp; /* 0x1006CCF5: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1006CCF7: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1006CCF8: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x1006CCFB: mov esi, ecx */
    RECOMP_CALL(sub_1002D16D); /* 0x1006CCFD: call 0x1002d16d */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x10067854u; /* 0x1006CD02: mov dword ptr [esi], 0x10067854 */
    eax = esi; /* 0x1006CD08: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1006CD0A: pop esi */
    ebp = POP32_VAL(esp); /* 0x1006CD0B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1006CD0C: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1006CE41(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006CE41u);

L_1006CE41:
    PUSH32(esp, ebp); /* 0x1006CE41: push ebp */
    ebp = esp; /* 0x1006CE42: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x1006CE44: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x1006CE47: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1006CE4A: push ebx */
    PUSH32(esp, esi); /* 0x1006CE4B: push esi */
    esi = ecx; /* 0x1006CE4C: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1006CE4E: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1006CE50: push edi */
    MEM32(esp + 0x10) = ebx; /* 0x1006CE51: mov dword ptr [esp + 0x10], ebx */
    MEM32(esp + 0x18) = ebx; /* 0x1006CE55: mov dword ptr [esp + 0x18], ebx */
    /* test MEM8(esi + 0x30), 4 */ /* 0x1006CE59: test byte ptr [esi + 0x30], 4 */
    _flag_a = (uint32_t)(MEM8(esi + 0x30)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(esp + 0x1C) = ebx; /* 0x1006CE5D: mov dword ptr [esp + 0x1c], ebx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006CE72; /* 0x1006CE61: je 0x1006ce72 */
L_1006CE63:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1006CE63: push dword ptr [ebp + 0xc] */
    eax = esp + 0x14; /* 0x1006CE66: lea eax, [esp + 0x14] */
    PUSH32(esp, eax); /* 0x1006CE6A: push eax */
    RECOMP_CALL(sub_10072502); /* 0x1006CE6B: call 0x10072502 */
    RECOMP_FLAGS_IN();
    goto L_1006CEA8; /* 0x1006CE70: jmp 0x1006cea8 */
L_1006CE72:
    eax = MEM32(esi + 0x38); /* 0x1006CE72: mov eax, dword ptr [esi + 0x38] */
    /* cmp MEM8(ebp + 0xC), LO8(ebx) */ /* 0x1006CE75: cmp byte ptr [ebp + 0xc], bl */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006CEA8; /* 0x1006CE78: je 0x1006cea8 */
L_1006CE7A:
    /* test eax, eax */ /* 0x1006CE7A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006CEA8; /* 0x1006CE7C: jne 0x1006cea8 */
L_1006CE7E:
    ecx = esi + 0x8; /* 0x1006CE7E: lea ecx, [esi + 8] */
    RECOMP_CALL(sub_10023D1E); /* 0x1006CE81: call 0x10023d1e */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x38); /* 0x1006CE86: mov eax, dword ptr [esi + 0x38] */
    /* test eax, eax */ /* 0x1006CE89: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006CEA5; /* 0x1006CE8B: jne 0x1006cea5 */
L_1006CE8D:
    ecx = MEM32(esi + 0x4); /* 0x1006CE8D: mov ecx, dword ptr [esi + 4] */
    RECOMP_CALL(sub_10024106); /* 0x1006CE90: call 0x10024106 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1006CE95: push eax */
    eax = esp + 0x14; /* 0x1006CE96: lea eax, [esp + 0x14] */
    ecx = esi; /* 0x1006CE9A: mov ecx, esi */
    PUSH32(esp, eax); /* 0x1006CE9C: push eax */
    RECOMP_CALL(sub_10027388); /* 0x1006CE9D: call 0x10027388 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x38) = eax; /* 0x1006CEA2: mov dword ptr [esi + 0x38], eax */
L_1006CEA5:
    MEM32(esi + 0x8) = ebx; /* 0x1006CEA5: mov dword ptr [esi + 8], ebx */
L_1006CEA8:
    edi = POP32_VAL(esp); /* 0x1006CEA8: pop edi */
    esi = POP32_VAL(esp); /* 0x1006CEA9: pop esi */
    ebx = POP32_VAL(esp); /* 0x1006CEAA: pop ebx */
    esp = ebp; /* 0x1006CEAB: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1006CEAD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1006CEAE: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1006CEE7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006CEE7u);

L_1006CEE7:
    PUSH32(esp, ebp); /* 0x1006CEE7: push ebp */
    ebp = esp; /* 0x1006CEE8: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1006CEEA: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1006CEED: push esi */
    PUSH32(esp, edi); /* 0x1006CEEE: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1006CEEF: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 0x1007A487u; /* 0x1006CEF1: mov dword ptr [ebp - 4], 0x1007a487 */
    esi = ecx; /* 0x1006CEF8: mov esi, ecx */
    MEM32(ebp + (-0x8)) = edi; /* 0x1006CEFA: mov dword ptr [ebp - 8], edi */
    goto L_1006CF07; /* 0x1006CEFD: jmp 0x1006cf07 */
L_1006CEFF:
    ecx = ebp + (-0x10); /* 0x1006CEFF: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_10068D76); /* 0x1006CF02: call 0x10068d76 */
    RECOMP_FLAGS_IN();
L_1006CF07:
    /* cmp MEM32(esi + 0x4), edi */ /* 0x1006CF07: cmp dword ptr [esi + 4], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006CEFF; /* 0x1006CF0A: je 0x1006ceff */
L_1006CF0C:
    eax = MEM32(esi + 0x4); /* 0x1006CF0C: mov eax, dword ptr [esi + 4] */
    MEM32(esi + 0x4) = edi; /* 0x1006CF0F: mov dword ptr [esi + 4], edi */
    edi = POP32_VAL(esp); /* 0x1006CF12: pop edi */
    esi = POP32_VAL(esp); /* 0x1006CF13: pop esi */
    esp = ebp; /* 0x1006CF14: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1006CF16: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006CF17: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006CF18(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006CF18u);

L_1006CF18:
    PUSH32(esp, ebp); /* 0x1006CF18: push ebp */
    ebp = esp; /* 0x1006CF19: mov ebp, esp */
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1006CF1B: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, esi); /* 0x1006CF1F: push esi */
    esi = ecx; /* 0x1006CF20: mov esi, ecx */
    MEM32(esi) = 0x10026534u; /* 0x1006CF22: mov dword ptr [esi], 0x10026534 */
    MEM32(esi + 0x8) = 0x10027EFCu; /* 0x1006CF28: mov dword ptr [esi + 8], 0x10027efc */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006CF38; /* 0x1006CF2F: je 0x1006cf38 */
L_1006CF31:
    PUSH32(esp, esi); /* 0x1006CF31: push esi */
    RECOMP_CALL(sub_1000ECE0); /* 0x1006CF32: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1006CF37: pop ecx */
L_1006CF38:
    eax = esi; /* 0x1006CF38: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1006CF3A: pop esi */
    ebp = POP32_VAL(esp); /* 0x1006CF3B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1006CF3C: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1006CFA5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006CFA5u);

L_1006CFA5:
    PUSH32(esp, ebp); /* 0x1006CFA5: push ebp */
    ebp = esp; /* 0x1006CFA6: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1006CFA8: push ecx */
    PUSH32(esp, esi); /* 0x1006CFA9: push esi */
    esi = ecx; /* 0x1006CFAA: mov esi, ecx */
    _flag_a = (uint32_t)((ecx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ecx | 0xFFFFFFFFu));
    ecx = ecx | 0xFFFFFFFFu; /* 0x1006CFAC: or ecx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1006CFAF: push edi */
    edi = MEM32(esi + 0x50); /* 0x1006CFB0: mov edi, dword ptr [esi + 0x50] */
    eax = esi + 0x4C; /* 0x1006CFB3: lea eax, [esi + 0x4c] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + ecx; ecx = _old; MEM32(eax) = _sum; } /* 0x1006CFB6: lock xadd dword ptr [eax], ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1006CFBA: dec ecx */
    _flag_k = FK_DEC;
    /* test ecx, ecx */ /* 0x1006CFBB: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1006CFE3; /* 0x1006CFBD: jg 0x1006cfe3 */
L_1006CFBF:
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006CFCD; /* 0x1006CFBF: jne 0x1006cfcd */
L_1006CFC1:
    ecx = MEM32(esi + 0x1C); /* 0x1006CFC1: mov ecx, dword ptr [esi + 0x1c] */
    eax = esi + 0x8; /* 0x1006CFC4: lea eax, [esi + 8] */
    PUSH32(esp, eax); /* 0x1006CFC7: push eax */
    RECOMP_CALL(sub_10075D49); /* 0x1006CFC8: call 0x10075d49 */
    RECOMP_FLAGS_IN();
L_1006CFCD:
    /* cmp MEM32(ebp + 0x8), 1 */ /* 0x1006CFCD: cmp dword ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi + 0x50) = 0; /* 0x1006CFD1: mov dword ptr [esi + 0x50], 0 */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1006D002; /* 0x1006CFD8: jne 0x1006d002 */
L_1006CFDA:
    ecx = edi; /* 0x1006CFDA: mov ecx, edi */
    RECOMP_CALL(sub_10079ACA); /* 0x1006CFDC: call 0x10079aca */
    RECOMP_FLAGS_IN();
    goto L_1006D002; /* 0x1006CFE1: jmp 0x1006d002 */
L_1006CFE3:
    ecx = esi; /* 0x1006CFE3: mov ecx, esi */
    RECOMP_CALL(sub_1006CEE7); /* 0x1006CFE5: call 0x1006cee7 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1006CFEA: mov esi, eax */
    ecx = esi; /* 0x1006CFEC: mov ecx, esi */
    edx = MEM32(esi); /* 0x1006CFEE: mov edx, dword ptr [esi] */
    RECOMP_ICALL(MEM32(edx + 0x8)); /* 0x1006CFF0: call dword ptr [edx + 8] */
    RECOMP_FLAGS_IN();
    /* cmp edi, eax */ /* 0x1006CFF3: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006D002; /* 0x1006CFF5: je 0x1006d002 */
L_1006CFF7:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1006CFF7: push dword ptr [ebp + 8] */
    edx = MEM32(edi); /* 0x1006CFFA: mov edx, dword ptr [edi] */
    ecx = edi; /* 0x1006CFFC: mov ecx, edi */
    PUSH32(esp, esi); /* 0x1006CFFE: push esi */
    RECOMP_ICALL(MEM32(edx + 0x4)); /* 0x1006CFFF: call dword ptr [edx + 4] */
    RECOMP_FLAGS_IN();
L_1006D002:
    edi = POP32_VAL(esp); /* 0x1006D002: pop edi */
    esi = POP32_VAL(esp); /* 0x1006D003: pop esi */
    ecx = POP32_VAL(esp); /* 0x1006D004: pop ecx */
    ebp = POP32_VAL(esp); /* 0x1006D005: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1006D006: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1006D0E3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006D0E3u);

L_1006D0E3:
    PUSH32(esp, ebp); /* 0x1006D0E3: push ebp */
    ebp = esp; /* 0x1006D0E4: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x24u; /* 0x1006D0E6: sub esp, 0x24 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1006D0E9: push esi */
    esi = ecx; /* 0x1006D0EA: mov esi, ecx */
    ecx = MEM32(ebp + 0x8); /* 0x1006D0EC: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1006D0EF: push edi */
    /* test ecx, ecx */ /* 0x1006D0F0: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006D17A; /* 0x1006D0F2: je 0x1006d17a */
L_1006D0F8:
    /* cmp MEM32(esi + 0x50), 0 */ /* 0x1006D0F8: cmp dword ptr [esi + 0x50], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x50)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1006D11A; /* 0x1006D0FC: jne 0x1006d11a */
L_1006D0FE:
    ecx = ebp + (-0x18); /* 0x1006D0FE: lea ecx, [ebp - 0x18] */
    RECOMP_CALL(sub_1009DD55); /* 0x1006D101: call 0x1009dd55 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x18)) = 0x10067694u; /* 0x1006D106: mov dword ptr [ebp - 0x18], 0x10067694 */
    eax = ebp + (-0x18); /* 0x1006D10D: lea eax, [ebp - 0x18] */
    PUSH32(esp, 0x100DCF08u); /* 0x1006D110: push 0x100dcf08 */
    goto L_1006D19C; /* 0x1006D115: jmp 0x1006d19c */
L_1006D11A:
    eax = MEM32(ecx); /* 0x1006D11A: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1006D11C: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1006D11F: mov edi, eax */
    /* cmp MEM32(esi + 0x50), edi */ /* 0x1006D121: cmp dword ptr [esi + 0x50], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x50)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006D13F; /* 0x1006D124: je 0x1006d13f */
L_1006D126:
    ecx = ebp + (-0x24); /* 0x1006D126: lea ecx, [ebp - 0x24] */
    RECOMP_CALL(sub_1009DD55); /* 0x1006D129: call 0x1009dd55 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x24)) = 0x10067694u; /* 0x1006D12E: mov dword ptr [ebp - 0x24], 0x10067694 */
    eax = ebp + (-0x24); /* 0x1006D135: lea eax, [ebp - 0x24] */
    PUSH32(esp, 0x100DCF08u); /* 0x1006D138: push 0x100dcf08 */
    goto L_1006D19C; /* 0x1006D13D: jmp 0x1006d19c */
L_1006D13F:
    eax = esi + 0x4C; /* 0x1006D13F: lea eax, [esi + 0x4c] */
    _flag_a = (uint32_t)((ecx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ecx | 0xFFFFFFFFu));
    ecx = ecx | 0xFFFFFFFFu; /* 0x1006D142: or ecx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + ecx; ecx = _old; MEM32(eax) = _sum; } /* 0x1006D145: lock xadd dword ptr [eax], ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1006D149: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1006D169; /* 0x1006D14A: jne 0x1006d169 */
L_1006D14C:
    ecx = MEM32(esi + 0x50); /* 0x1006D14C: mov ecx, dword ptr [esi + 0x50] */
    eax = esi + 0x54; /* 0x1006D14F: lea eax, [esi + 0x54] */
    { uint32_t _tmp = MEM32(eax); /* 0x1006D152: xchg dword ptr [eax], ecx */
      MEM32(eax) = ecx;
      ecx = _tmp; }
    ecx = MEM32(esi + 0x1C); /* 0x1006D154: mov ecx, dword ptr [esi + 0x1c] */
    eax = esi + 0x8; /* 0x1006D157: lea eax, [esi + 8] */
    PUSH32(esp, eax); /* 0x1006D15A: push eax */
    RECOMP_CALL(sub_10075D49); /* 0x1006D15B: call 0x10075d49 */
    RECOMP_FLAGS_IN();
    ecx = edi; /* 0x1006D160: mov ecx, edi */
    RECOMP_CALL(sub_10079ACA); /* 0x1006D162: call 0x10079aca */
    RECOMP_FLAGS_IN();
    goto L_1006D170; /* 0x1006D167: jmp 0x1006d170 */
L_1006D169:
    ecx = esi; /* 0x1006D169: mov ecx, esi */
    RECOMP_CALL(sub_1006CEE7); /* 0x1006D16B: call 0x1006cee7 */
    RECOMP_FLAGS_IN();
L_1006D170:
    edi = POP32_VAL(esp); /* 0x1006D170: pop edi */
    SET_LO8(eax, 1); /* 0x1006D171: mov al, 1 */
    esi = POP32_VAL(esp); /* 0x1006D173: pop esi */
    esp = ebp; /* 0x1006D174: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1006D176: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1006D177: ret 4 */
L_1006D17A:
    eax = ebp + 0x8; /* 0x1006D17A: lea eax, [ebp + 8] */
    MEM32(ebp + 0x8) = 0x1006787Cu; /* 0x1006D17D: mov dword ptr [ebp + 8], 0x1006787c */
    PUSH32(esp, eax); /* 0x1006D184: push eax */
    ecx = ebp + (-0xC); /* 0x1006D185: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1009DD30); /* 0x1006D188: call 0x1009dd30 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0xC)) = 0x1006754Cu; /* 0x1006D18D: mov dword ptr [ebp - 0xc], 0x1006754c */
    eax = ebp + (-0xC); /* 0x1006D194: lea eax, [ebp - 0xc] */
    PUSH32(esp, 0x100DCEE8u); /* 0x1006D197: push 0x100dcee8 */
L_1006D19C:
    PUSH32(esp, eax); /* 0x1006D19C: push eax */
    RECOMP_CALL(sub_100192EB); /* 0x1006D19D: call 0x100192eb */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1006D1A2u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1006D1A3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006D1A3u);

L_1006D1A3:
    PUSH32(esp, ebp); /* 0x1006D1A3: push ebp */
    ebp = esp; /* 0x1006D1A4: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x1006D1A6: sub esp, 0x28 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1006D1A9: push esi */
    esi = ecx; /* 0x1006D1AA: mov esi, ecx */
    ecx = MEM32(ebp + 0x8); /* 0x1006D1AC: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x1006D1AF: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006D22C; /* 0x1006D1B1: je 0x1006d22c */
L_1006D1B3:
    /* cmp MEM32(esi + 0x50), 0 */ /* 0x1006D1B3: cmp dword ptr [esi + 0x50], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x50)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1006D1D2; /* 0x1006D1B7: jne 0x1006d1d2 */
L_1006D1B9:
    ecx = ebp + (-0x1C); /* 0x1006D1B9: lea ecx, [ebp - 0x1c] */
    RECOMP_CALL(sub_1009DD55); /* 0x1006D1BC: call 0x1009dd55 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x1C)) = 0x10067694u; /* 0x1006D1C1: mov dword ptr [ebp - 0x1c], 0x10067694 */
    eax = ebp + (-0x1C); /* 0x1006D1C8: lea eax, [ebp - 0x1c] */
    PUSH32(esp, 0x100DCF08u); /* 0x1006D1CB: push 0x100dcf08 */
    goto L_1006D24E; /* 0x1006D1D0: jmp 0x1006d24e */
L_1006D1D2:
    eax = MEM32(ecx); /* 0x1006D1D2: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1006D1D4: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esi + 0x50), eax */ /* 0x1006D1D7: cmp dword ptr [esi + 0x50], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x50)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006D1F5; /* 0x1006D1DA: je 0x1006d1f5 */
L_1006D1DC:
    ecx = ebp + (-0x28); /* 0x1006D1DC: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_1009DD55); /* 0x1006D1DF: call 0x1009dd55 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x28)) = 0x10067694u; /* 0x1006D1E4: mov dword ptr [ebp - 0x28], 0x10067694 */
    eax = ebp + (-0x28); /* 0x1006D1EB: lea eax, [ebp - 0x28] */
    PUSH32(esp, 0x100DCF08u); /* 0x1006D1EE: push 0x100dcf08 */
    goto L_1006D24E; /* 0x1006D1F3: jmp 0x1006d24e */
L_1006D1F5:
    /* cmp MEM32(0x100E03E4), 3 */ /* 0x1006D1F5: cmp dword ptr [0x100e03e4], 3 */
    _flag_a = (uint32_t)(MEM32(0x100E03E4)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(esi + 0x1C); /* 0x1006D1FC: mov eax, dword ptr [esi + 0x1c] */
    esi = POP32_VAL(esp); /* 0x1006D1FF: pop esi */
    eax = MEM32(eax + 0xC); /* 0x1006D200: mov eax, dword ptr [eax + 0xc] */
    if (CMP_L(_flag_a, _flag_b)) goto L_1006D20C; /* 0x1006D203: jl 0x1006d20c */
L_1006D205:
    RECOMP_CALL(sub_100A4754); /* 0x1006D205: call 0x100a4754 */
    RECOMP_FLAGS_IN();
    goto L_1006D226; /* 0x1006D20A: jmp 0x1006d226 */
L_1006D20C:
    eax = MEM32(eax + 0x8C); /* 0x1006D20C: mov eax, dword ptr [eax + 0x8c] */
    /* cmp MEM8(eax), 1 */ /* 0x1006D212: cmp byte ptr [eax], 1 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1006D226; /* 0x1006D215: jne 0x1006d226 */
L_1006D217:
    ecx = ebp + (-0x4); /* 0x1006D217: lea ecx, [ebp - 4] */
    PUSH32(esp, ecx); /* 0x1006D21A: push ecx */
    PUSH32(esp, 2); /* 0x1006D21B: push 2 */
    PUSH32(esp, 1); /* 0x1006D21D: push 1 */
    PUSH32(esp, eax); /* 0x1006D21F: push eax */
    RECOMP_ICALL(MEM32(0x100E51A4)); /* 0x1006D220: call dword ptr [0x100e51a4] */
    RECOMP_FLAGS_IN();
L_1006D226:
    esp = ebp; /* 0x1006D226: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1006D228: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1006D229: ret 4 */
L_1006D22C:
    eax = ebp + 0x8; /* 0x1006D22C: lea eax, [ebp + 8] */
    MEM32(ebp + 0x8) = 0x1006787Cu; /* 0x1006D22F: mov dword ptr [ebp + 8], 0x1006787c */
    PUSH32(esp, eax); /* 0x1006D236: push eax */
    ecx = ebp + (-0x10); /* 0x1006D237: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1009DD30); /* 0x1006D23A: call 0x1009dd30 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x10)) = 0x1006754Cu; /* 0x1006D23F: mov dword ptr [ebp - 0x10], 0x1006754c */
    eax = ebp + (-0x10); /* 0x1006D246: lea eax, [ebp - 0x10] */
    PUSH32(esp, 0x100DCEE8u); /* 0x1006D249: push 0x100dcee8 */
L_1006D24E:
    PUSH32(esp, eax); /* 0x1006D24E: push eax */
    RECOMP_CALL(sub_100192EB); /* 0x1006D24F: call 0x100192eb */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1006D254u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1006D255(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006D255u);

L_1006D255:
    PUSH32(esp, ebp); /* 0x1006D255: push ebp */
    ebp = esp; /* 0x1006D256: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x1006D258: sub esp, 0x28 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1006D25B: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1006D25C: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1006D25F: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1006D260: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1006D262: push edi */
    edi = ecx; /* 0x1006D263: mov edi, ecx */
    /* cmp MEM32(ebx + 0x20), esi */ /* 0x1006D265: cmp dword ptr [ebx + 0x20], esi */
    _flag_a = (uint32_t)(MEM32(ebx + 0x20)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1006D281; /* 0x1006D268: jne 0x1006d281 */
L_1006D26A:
    MEM32(ebp + (-0x20)) = esi; /* 0x1006D26A: mov dword ptr [ebp - 0x20], esi */
    MEM32(ebp + (-0x1C)) = 0x1007A487u; /* 0x1006D26D: mov dword ptr [ebp - 0x1c], 0x1007a487 */
L_1006D274:
    ecx = ebp + (-0x28); /* 0x1006D274: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_10068D76); /* 0x1006D277: call 0x10068d76 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebx + 0x20), esi */ /* 0x1006D27C: cmp dword ptr [ebx + 0x20], esi */
    _flag_a = (uint32_t)(MEM32(ebx + 0x20)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006D274; /* 0x1006D27F: je 0x1006d274 */
L_1006D281:
    MEM32(edi + 0x50) = ebx; /* 0x1006D281: mov dword ptr [edi + 0x50], ebx */
    ecx = edi; /* 0x1006D284: mov ecx, edi */
    MEM32(ebx + 0x10) = edi; /* 0x1006D286: mov dword ptr [ebx + 0x10], edi */
    eax = MEM32(edi); /* 0x1006D289: mov eax, dword ptr [edi] */
    esi = MEM32(edi + 0x1C); /* 0x1006D28B: mov esi, dword ptr [edi + 0x1c] */
    RECOMP_ICALL(MEM32(eax)); /* 0x1006D28E: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1006D290: mov ecx, eax */
    edi = ebp + (-0xC); /* 0x1006D292: lea edi, [ebp - 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1006D295: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x34u); /* 0x1006D297: imul ecx, ecx, 0x34 */
    MEM32(edi) = eax; edi += _df * 4; /* 0x1006D29A: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x1006D29B: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x1006D29C: stosd dword ptr es:[edi], eax */
    eax = MEM32(esi + 0x10); /* 0x1006D29D: mov eax, dword ptr [esi + 0x10] */
    edi = ebp + (-0x18); /* 0x1006D2A0: lea edi, [ebp - 0x18] */
    esi = ebp + (-0xC); /* 0x1006D2A3: lea esi, [ebp - 0xc] */
    SET_LO16(edx, MEM16(ecx + eax + 0xC)); /* 0x1006D2A6: mov dx, word ptr [ecx + eax + 0xc] */
    eax = MEM32(ecx + eax); /* 0x1006D2AB: mov eax, dword ptr [ecx + eax] */
    MEM16(ebp + (-0x8)) = (uint16_t)(LO16(edx)); /* 0x1006D2AE: mov word ptr [ebp - 8], dx */
    MEM32(ebp + (-0xC)) = eax; /* 0x1006D2B2: mov dword ptr [ebp - 0xc], eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1006D2B5: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1006D2B6: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1006D2B7: movsd dword ptr es:[edi], dword ptr [esi] */
    /* cmp LO16(edx), MEM16(ebx + 0x34) */ /* 0x1006D2B8: cmp dx, word ptr [ebx + 0x34] */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(MEM16(ebx + 0x34)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1006D2C3; /* 0x1006D2BC: jne 0x1006d2c3 */
L_1006D2BE:
    /* cmp eax, MEM32(ebx + 0x30) */ /* 0x1006D2BE: cmp eax, dword ptr [ebx + 0x30] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x30));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006D2CE; /* 0x1006D2C1: je 0x1006d2ce */
L_1006D2C3:
    PUSH32(esp, MEM32(ebx + 0x8)); /* 0x1006D2C3: push dword ptr [ebx + 8] */
    ecx = ebp + (-0x18); /* 0x1006D2C6: lea ecx, [ebp - 0x18] */
    RECOMP_CALL(sub_1006F904); /* 0x1006D2C9: call 0x1006f904 */
    RECOMP_FLAGS_IN();
L_1006D2CE:
    SET_LO16(eax, MEM16(ebp + (-0x14))); /* 0x1006D2CE: mov ax, word ptr [ebp - 0x14] */
    edi = POP32_VAL(esp); /* 0x1006D2D2: pop edi */
    MEM16(ebx + 0x34) = (uint16_t)(LO16(eax)); /* 0x1006D2D3: mov word ptr [ebx + 0x34], ax */
    eax = MEM32(ebp + (-0x18)); /* 0x1006D2D7: mov eax, dword ptr [ebp - 0x18] */
    esi = POP32_VAL(esp); /* 0x1006D2DA: pop esi */
    MEM32(ebx + 0x30) = eax; /* 0x1006D2DB: mov dword ptr [ebx + 0x30], eax */
    ebx = POP32_VAL(esp); /* 0x1006D2DE: pop ebx */
    esp = ebp; /* 0x1006D2DF: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1006D2E1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1006D2E2: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1006D38B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006D38Bu);

L_1006D38B:
    PUSH32(esp, ebp); /* 0x1006D38B: push ebp */
    ebp = esp; /* 0x1006D38C: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1006D38E: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1006D391: sub esp, 0xc */
    _flag_k = FK_CMP;
    /* test eax, eax */ /* 0x1006D394: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006D3C6; /* 0x1006D396: je 0x1006d3c6 */
L_1006D398:
    edx = MEM32(ecx + 0x10); /* 0x1006D398: mov edx, dword ptr [ecx + 0x10] */
    /* test edx, edx */ /* 0x1006D39B: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006D3A8; /* 0x1006D39D: jne 0x1006d3a8 */
L_1006D39F:
    /* cmp eax, 1 */ /* 0x1006D39F: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1006D3C6; /* 0x1006D3A2: jne 0x1006d3c6 */
L_1006D3A4:
    /* test edx, edx */ /* 0x1006D3A4: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006D3BF; /* 0x1006D3A6: je 0x1006d3bf */
L_1006D3A8:
    /* cmp eax, 2 */ /* 0x1006D3A8: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1006D3B1; /* 0x1006D3AB: jne 0x1006d3b1 */
L_1006D3AD:
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(ecx + 0x10) = MEM32(ecx + 0x10) & 0; /* 0x1006D3AD: and dword ptr [ecx + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1006D3B1:
    PUSH32(esp, eax); /* 0x1006D3B1: push eax */
    ecx = edx; /* 0x1006D3B2: mov ecx, edx */
    RECOMP_CALL(sub_1006CFA5); /* 0x1006D3B4: call 0x1006cfa5 */
    RECOMP_FLAGS_IN();
L_1006D3B9:
    esp = ebp; /* 0x1006D3B9: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1006D3BB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1006D3BC: ret 4 */
L_1006D3BF:
    RECOMP_CALL(sub_10079ACA); /* 0x1006D3BF: call 0x10079aca */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1006D3B9; /* 0x1006D3C4: jmp 0x1006d3b9 */
L_1006D3C6:
    eax = ebp + 0x8; /* 0x1006D3C6: lea eax, [ebp + 8] */
    MEM32(ebp + 0x8) = 0x1006D3F0u; /* 0x1006D3C9: mov dword ptr [ebp + 8], 0x1006d3f0 */
    PUSH32(esp, eax); /* 0x1006D3D0: push eax */
    ecx = ebp + (-0xC); /* 0x1006D3D1: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1009DD30); /* 0x1006D3D4: call 0x1009dd30 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x100DCEE8u); /* 0x1006D3D9: push 0x100dcee8 */
    eax = ebp + (-0xC); /* 0x1006D3DE: lea eax, [ebp - 0xc] */
    MEM32(ebp + (-0xC)) = 0x1006754Cu; /* 0x1006D3E1: mov dword ptr [ebp - 0xc], 0x1006754c */
    PUSH32(esp, eax); /* 0x1006D3E8: push eax */
    RECOMP_CALL(sub_100192EB); /* 0x1006D3E9: call 0x100192eb */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1006D3EEu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1006D3F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006D3F0u);

L_1006D3F0:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_AE, _cf)) goto L_1006D469; /* 0x1006D3F0: jae 0x1006d469 */
L_1006D3F2:
    esi = (uint32_t)((int32_t)MEM32(ebx + 0x68) * (int32_t)0x74617453u); /* 0x1006D3F2: imul esi, dword ptr [ebx + 0x68], 0x74617453 */
    _flag_a = (uint32_t)(MEM8(GS_BASE + (ebp + (-0x75)))) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (ebp + (-0x75))) = (uint8_t)(MEM8(GS_BASE + (ebp + (-0x75))) + LO8(edx)); /* 0x1006D3FA: add byte ptr gs:[ebp - 0x75], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* in: no port I/O under Win32 */ /* 0x1006D3FE: in al, dx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x1006D3FF: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1006D402: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1006D405: push ebx */
    PUSH32(esp, esi); /* 0x1006D406: push esi */
    esi = ecx; /* 0x1006D407: mov esi, ecx */
    MEM32(esp + 0xC) = 8; /* 0x1006D409: mov dword ptr [esp + 0xc], 8 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1006D411: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1006D413: push edi */
    MEM32(esp + 0x14) = ebx; /* 0x1006D414: mov dword ptr [esp + 0x14], ebx */
    /* cmp MEM32(esi + 0x24), ebx */ /* 0x1006D418: cmp dword ptr [esi + 0x24], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x24)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1006D480; /* 0x1006D41B: jne 0x1006d480 */
L_1006D41D:
    ecx = MEM32(esi + 0x4); /* 0x1006D41D: mov ecx, dword ptr [esi + 4] */
    eax = MEM32(ecx); /* 0x1006D420: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x1006D422: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    ecx = esi; /* 0x1006D425: mov ecx, esi */
    _flag_a = (uint32_t)((ecx | 1)); _flag_b = (uint32_t)((ecx | 1));
    ecx = ecx | 1; /* 0x1006D427: or ecx, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1006D42A: push ecx */
    PUSH32(esp, eax); /* 0x1006D42B: push eax */
    RECOMP_ICALL(MEM32(0x100E5154)); /* 0x1006D42C: call dword ptr [0x100e5154] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1006D432: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006D47B; /* 0x1006D434: jne 0x1006d47b */
L_1006D436:
    RECOMP_CALL(sub_1006EE8E); /* 0x1006D436: call 0x1006ee8e */
    RECOMP_FLAGS_IN();
    goto L_1006D47B; /* 0x1006D43B: jmp 0x1006d47b */
L_1006D43D:
    ecx = MEM32(esi + 0x40); /* 0x1006D43D: mov ecx, dword ptr [esi + 0x40] */
    PUSH32(esp, esi); /* 0x1006D440: push esi */
    eax = MEM32(ecx); /* 0x1006D441: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x1006D443: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x40); /* 0x1006D446: mov ecx, dword ptr [esi + 0x40] */
    edx = esp + 0x10; /* 0x1006D449: lea edx, [esp + 0x10] */
    PUSH32(esp, edx); /* 0x1006D44D: push edx */
    eax = MEM32(ecx); /* 0x1006D44E: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x1006D450: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x4); /* 0x1006D453: mov ecx, dword ptr [esi + 4] */
    edi = MEM32(esi + 0x10); /* 0x1006D456: mov edi, dword ptr [esi + 0x10] */
    MEM32(esi + 0x10) = ebx; /* 0x1006D459: mov dword ptr [esi + 0x10], ebx */
    MEM32(esi + 0x40) = ebx; /* 0x1006D45C: mov dword ptr [esi + 0x40], ebx */
    eax = MEM32(ecx); /* 0x1006D45F: mov eax, dword ptr [ecx] */
    PUSH32(esp, esi); /* 0x1006D461: push esi */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1006D462: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    /* test edi, edi */ /* 0x1006D465: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006D474; /* 0x1006D467: je 0x1006d474 */
L_1006D469:
    PUSH32(esp, 1); /* 0x1006D469: push 1 */
    ecx = edi; /* 0x1006D46B: mov ecx, edi */
    RECOMP_CALL(sub_1006CFA5); /* 0x1006D46D: call 0x1006cfa5 */
    RECOMP_FLAGS_IN();
    goto L_1006D47B; /* 0x1006D472: jmp 0x1006d47b */
L_1006D474:
    ecx = esi; /* 0x1006D474: mov ecx, esi */
    RECOMP_CALL(sub_10079ACA); /* 0x1006D476: call 0x10079aca */
    RECOMP_FLAGS_IN();
L_1006D47B:
    /* cmp MEM32(esi + 0x24), ebx */ /* 0x1006D47B: cmp dword ptr [esi + 0x24], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x24)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006D43D; /* 0x1006D47E: je 0x1006d43d */
L_1006D480:
    edi = POP32_VAL(esp); /* 0x1006D480: pop edi */
    esi = POP32_VAL(esp); /* 0x1006D481: pop esi */
    ebx = POP32_VAL(esp); /* 0x1006D482: pop ebx */
    esp = ebp; /* 0x1006D483: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1006D485: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006D486: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006D487(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006D487u);

L_1006D487:
    PUSH32(esp, ebp); /* 0x1006D487: push ebp */
    ebp = esp; /* 0x1006D488: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x1006D48A: sub esp, 0x18 */
    _flag_k = FK_CMP;
    edx = ecx; /* 0x1006D48D: mov edx, ecx */
    ecx = MEM32(ebp + 0x8); /* 0x1006D48F: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x1006D492: push ebx */
    PUSH32(esp, esi); /* 0x1006D493: push esi */
    PUSH32(esp, edi); /* 0x1006D494: push edi */
    eax = MEM32(edx + 0x8); /* 0x1006D495: mov eax, dword ptr [edx + 8] */
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x1006D498: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = edx; /* 0x1006D49B: mov dword ptr [ebp - 8], edx */
    eax = eax + ecx * 4; /* 0x1006D49E: lea eax, [eax + ecx*4] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + edi; edi = _old; MEM32(eax) = _sum; } /* 0x1006D4A1: lock xadd dword ptr [eax], edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1006D4A5: dec edi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1006D4F3; /* 0x1006D4A6: jne 0x1006d4f3 */
L_1006D4A8:
    ebx = MEM32(edx + 0x4); /* 0x1006D4A8: mov ebx, dword ptr [edx + 4] */
    eax = ecx; /* 0x1006D4AB: mov eax, ecx */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x1006D4AD: shr eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack((eax >> 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 5u; /* 0x1006D4AD: shr eax, 5 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1006D4B0: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1006D4B2: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1006D4B2: shl eax, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x1006D4B5: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x1006D4B8: add ebx, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = eax; /* 0x1006D4BA: mov dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1006D4BD: inc esi */
    _flag_k = FK_INC;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((esi) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x1006D4BE: shl esi, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((esi << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << ((LO8(ecx)) & 31); /* 0x1006D4BE: shl esi, cl */
    eax = MEM32(ebx); /* 0x1006D4C0: mov eax, dword ptr [ebx] */
    /* test esi, eax */ /* 0x1006D4C2: test esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006D4E8; /* 0x1006D4C4: jne 0x1006d4e8 */
L_1006D4C6:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0; /* 0x1006D4C6: and dword ptr [ebp - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebx); /* 0x1006D4CA: mov eax, dword ptr [ebx] */
    MEM32(ebp + (-0xC)) = 0x1007A487u; /* 0x1006D4CC: mov dword ptr [ebp - 0xc], 0x1007a487 */
    /* test esi, eax */ /* 0x1006D4D3: test esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006D4E8; /* 0x1006D4D5: jne 0x1006d4e8 */
L_1006D4D7:
    ecx = ebp + (-0x18); /* 0x1006D4D7: lea ecx, [ebp - 0x18] */
    RECOMP_CALL(sub_10068D76); /* 0x1006D4DA: call 0x10068d76 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx); /* 0x1006D4DF: mov eax, dword ptr [ebx] */
    /* test esi, eax */ /* 0x1006D4E1: test esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006D4D7; /* 0x1006D4E3: je 0x1006d4d7 */
L_1006D4E5:
    edx = MEM32(ebp + (-0x8)); /* 0x1006D4E5: mov edx, dword ptr [ebp - 8] */
L_1006D4E8:
    ecx = MEM32(edx + 0x4); /* 0x1006D4E8: mov ecx, dword ptr [edx + 4] */
    esi = ~esi; /* 0x1006D4EB: not esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + 0x8); /* 0x1006D4ED: add ecx, dword ptr [ebp + 8] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(esi);
    MEM32(ecx) = MEM32(ecx) & esi; /* 0x1006D4F0: lock and dword ptr [ecx], esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1006D4F3:
    eax = edi; /* 0x1006D4F3: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1006D4F5: pop edi */
    esi = POP32_VAL(esp); /* 0x1006D4F6: pop esi */
    ebx = POP32_VAL(esp); /* 0x1006D4F7: pop ebx */
    esp = ebp; /* 0x1006D4F8: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1006D4FA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1006D4FB: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1006D54C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006D54Cu);

L_1006D54C:
    PUSH32(esp, ebp); /* 0x1006D54C: push ebp */
    ebp = esp; /* 0x1006D54D: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1006D54F: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1006D552: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx + 0xA0) = eax; /* 0x1006D554: mov dword ptr [ecx + 0xa0], eax */
    eax = ecx + 0x2C; /* 0x1006D55A: lea eax, [ecx + 0x2c] */
    { uint32_t _tmp = MEM32(eax); /* 0x1006D55D: xchg dword ptr [eax], edx */
      MEM32(eax) = edx;
      edx = _tmp; }
    ebp = POP32_VAL(esp); /* 0x1006D55F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1006D560: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1006D563(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006D563u);

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
    RECOMP_REGS_OUT();
}

void sub_1006D598(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006D598u);

L_1006D598:
    PUSH32(esp, ebp); /* 0x1006D598: push ebp */
    ebp = esp; /* 0x1006D599: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1006D59B: push ebx */
    PUSH32(esp, esi); /* 0x1006D59C: push esi */
    PUSH32(esp, edi); /* 0x1006D59D: push edi */
    edi = ecx; /* 0x1006D59E: mov edi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1006D5A0: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1006D5A2: push ebx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1006D5A3: push dword ptr [ebp + 8] */
    ecx = edi + 0x4; /* 0x1006D5A6: lea ecx, [edi + 4] */
    MEM32(edi) = 0x1006D610u; /* 0x1006D5A9: mov dword ptr [edi], 0x1006d610 */
    RECOMP_CALL(sub_10023F7C); /* 0x1006D5AF: call 0x10023f7c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM8(edi + 0xB3)) << 24; _flag_b = (uint32_t)(0xFCu) << 24;
    MEM8(edi + 0xB3) = (uint8_t)(MEM8(edi + 0xB3) & 0xFCu); /* 0x1006D5B4: and byte ptr [edi + 0xb3], 0xfc */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = edi; /* 0x1006D5BB: mov eax, edi */
    MEM32(edi) = 0x10032584u; /* 0x1006D5BD: mov dword ptr [edi], 0x10032584 */
    MEM32(edi + 0x4) = 0x1006788Cu; /* 0x1006D5C3: mov dword ptr [edi + 4], 0x1006788c */
    MEM32(edi + 0x9C) = ebx; /* 0x1006D5CA: mov dword ptr [edi + 0x9c], ebx */
    MEM32(edi + 0xA0) = ebx; /* 0x1006D5D0: mov dword ptr [edi + 0xa0], ebx */
    MEM32(edi + 0xA4) = ebx; /* 0x1006D5D6: mov dword ptr [edi + 0xa4], ebx */
    MEM32(edi + 0xA8) = ebx; /* 0x1006D5DC: mov dword ptr [edi + 0xa8], ebx */
    MEM32(edi + 0xAC) = ebx; /* 0x1006D5E2: mov dword ptr [edi + 0xac], ebx */
    MEM8(edi + 0xB0) = (uint8_t)(LO8(ebx)); /* 0x1006D5E8: mov byte ptr [edi + 0xb0], bl */
    MEM8(edi + 0xB2) = (uint8_t)(LO8(ebx)); /* 0x1006D5EE: mov byte ptr [edi + 0xb2], bl */
    MEM32(edi + 0xE4) = ebx; /* 0x1006D5F4: mov dword ptr [edi + 0xe4], ebx */
    MEM32(edi + 0x1C) = ebx; /* 0x1006D5FA: mov dword ptr [edi + 0x1c], ebx */
    MEM8(edi + 0xEC) = (uint8_t)(1); /* 0x1006D5FD: mov byte ptr [edi + 0xec], 1 */
    edi = POP32_VAL(esp); /* 0x1006D604: pop edi */
    esi = POP32_VAL(esp); /* 0x1006D605: pop esi */
    ebx = POP32_VAL(esp); /* 0x1006D606: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1006D607: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1006D608: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1006D610(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006D610u);

L_1006D610:
    { uint32_t _rv = (MEM32(esi + 0xA)) & 0xFFFFFFFFu, _rn = ((LO8(ecx)) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } MEM32(esi + 0xA) = _rv; } /* 0x1006D610: rol dword ptr [esi + 0xa], cl */
    { uint32_t _aa = LO8(ebx), _ab = LO8(edx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1006D613: adc bl, dl */
      SET_LO8(ebx, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1006D615: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)((LO8(edx) | MEM8(eax))) << 24; _flag_b = (uint32_t)((LO8(edx) | MEM8(eax))) << 24;
    SET_LO8(edx, LO8(edx) | MEM8(eax)); /* 0x1006D616: or dl, byte ptr [eax] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { uint32_t _rv = (MEM32(esi + 0xA)) & 0xFFFFFFFFu, _rn = ((LO8(ecx)) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } MEM32(esi + 0xA) = _rv; } /* 0x1006D618: rol dword ptr [esi + 0xa], cl */
    { uint32_t _aa = LO8(ebx), _ab = LO8(edx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1006D61B: adc bl, dl */
      SET_LO8(ebx, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1006D61D: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)((LO8(edx) | MEM8(eax))) << 24; _flag_b = (uint32_t)((LO8(edx) | MEM8(eax))) << 24;
    SET_LO8(edx, LO8(edx) | MEM8(eax)); /* 0x1006D61E: or dl, byte ptr [eax] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { uint32_t _rv = (MEM32(esi + 0xA)) & 0xFFFFFFFFu, _rn = ((LO8(ecx)) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } MEM32(esi + 0xA) = _rv; } /* 0x1006D620: rol dword ptr [esi + 0xa], cl */
    { uint32_t _aa = MEM8(ebp + (-0x75)), _ab = LO8(edx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1006D623: adc byte ptr [ebp - 0x75], dl */
      MEM8(ebp + (-0x75)) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    /* in: no port I/O under Win32 */ /* 0x1006D626: in al, dx */
    PUSH32(esp, esi); /* 0x1006D627: push esi */
    esi = ecx; /* 0x1006D628: mov esi, ecx */
    RECOMP_CALL(sub_1006E510); /* 0x1006D62A: call 0x1006e510 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1006D62F: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006D63C; /* 0x1006D633: je 0x1006d63c */
L_1006D635:
    PUSH32(esp, esi); /* 0x1006D635: push esi */
    RECOMP_CALL(sub_1000ECE0); /* 0x1006D636: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1006D63B: pop ecx */
L_1006D63C:
    eax = esi; /* 0x1006D63C: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1006D63E: pop esi */
    ebp = POP32_VAL(esp); /* 0x1006D63F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1006D640: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1006D643(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006D643u);

L_1006D643:
    PUSH32(esp, ebp); /* 0x1006D643: push ebp */
    ebp = esp; /* 0x1006D644: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1006D646: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1006D649: push ebx */
    PUSH32(esp, esi); /* 0x1006D64A: push esi */
    PUSH32(esp, edi); /* 0x1006D64B: push edi */
    edi = ecx; /* 0x1006D64C: mov edi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1006D64E: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x19u); /* 0x1006D650: push 0x19 */
    PUSH32(esp, ecx); /* 0x1006D652: push ecx */
    MEM32(ebp + (-0xC)) = ecx; /* 0x1006D653: mov dword ptr [ebp - 0xc], ecx */
    eax = MEM32(edi + 0xA0); /* 0x1006D656: mov eax, dword ptr [edi + 0xa0] */
    edx = MEM32(edi + 0x1C); /* 0x1006D65C: mov edx, dword ptr [edi + 0x1c] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x1006D65F: mov dword ptr [ebp - 4], ecx */
    ecx = ebp + (-0xC); /* 0x1006D662: lea ecx, [ebp - 0xc] */
    PUSH32(esp, edx); /* 0x1006D665: push edx */
    PUSH32(esp, ecx); /* 0x1006D666: push ecx */
    ecx = eax + 0x28; /* 0x1006D667: lea ecx, [eax + 0x28] */
    RECOMP_ICALL(MEM32(eax + 0x48)); /* 0x1006D66A: call dword ptr [eax + 0x48] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1006D66D: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006D713; /* 0x1006D66F: je 0x1006d713 */
L_1006D675:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1006D675: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1006D677: inc ebx */
    _flag_k = FK_INC;
    /* cmp MEM32(ebp + (-0xC)), ebx */ /* 0x1006D678: cmp dword ptr [ebp - 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006D70E; /* 0x1006D67B: je 0x1006d70e */
L_1006D681:
    ecx = MEM32(edi + 0x20); /* 0x1006D681: mov ecx, dword ptr [edi + 0x20] */
    PUSH32(esp, ebx); /* 0x1006D684: push ebx */
    RECOMP_CALL(sub_10073BC9); /* 0x1006D685: call 0x10073bc9 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1006D68A: mov esi, eax */
    /* test esi, esi */ /* 0x1006D68C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006D6E7; /* 0x1006D68E: je 0x1006d6e7 */
L_1006D690:
    ecx = ebp + (-0xC); /* 0x1006D690: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_100765E3); /* 0x1006D693: call 0x100765e3 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1006D698: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006D6B3; /* 0x1006D69A: je 0x1006d6b3 */
L_1006D69C:
    /* cmp MEM32(ebp + (-0xC)), 4 */ /* 0x1006D69C: cmp dword ptr [ebp - 0xc], 4 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0xC); /* 0x1006D6A0: mov eax, dword ptr [ebp + 0xc] */
    SET_LO8(ecx, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1006D6A3: sete cl */
    PUSH32(esp, esi); /* 0x1006D6A6: push esi */
    MEM8(eax) = (uint8_t)(LO8(ecx)); /* 0x1006D6A7: mov byte ptr [eax], cl */
    ecx = ebp + (-0xC); /* 0x1006D6A9: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1007669C); /* 0x1006D6AC: call 0x1007669c */
    RECOMP_FLAGS_IN();
    goto L_1006D729; /* 0x1006D6B1: jmp 0x1006d729 */
L_1006D6B3:
    ecx = MEM32(edi + 0x1C); /* 0x1006D6B3: mov ecx, dword ptr [edi + 0x1c] */
    eax = MEM32(edi + 0xA0); /* 0x1006D6B6: mov eax, dword ptr [edi + 0xa0] */
    PUSH32(esp, 7); /* 0x1006D6BC: push 7 */
    PUSH32(esp, 0); /* 0x1006D6BE: push 0 */
    PUSH32(esp, ecx); /* 0x1006D6C0: push ecx */
    ecx = ebp + (-0xC); /* 0x1006D6C1: lea ecx, [ebp - 0xc] */
    PUSH32(esp, ecx); /* 0x1006D6C4: push ecx */
    ecx = eax + 0x28; /* 0x1006D6C5: lea ecx, [eax + 0x28] */
    RECOMP_ICALL(MEM32(eax + 0x48)); /* 0x1006D6C8: call dword ptr [eax + 0x48] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1006D6CB: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006D6E0; /* 0x1006D6CD: je 0x1006d6e0 */
L_1006D6CF:
    /* cmp MEM32(ebp + (-0xC)), ebx */ /* 0x1006D6CF: cmp dword ptr [ebp - 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1006D69C; /* 0x1006D6D2: jne 0x1006d69c */
L_1006D6D4:
    ecx = MEM32(edi + 0x20); /* 0x1006D6D4: mov ecx, dword ptr [edi + 0x20] */
    PUSH32(esp, ebx); /* 0x1006D6D7: push ebx */
    PUSH32(esp, esi); /* 0x1006D6D8: push esi */
    RECOMP_CALL(sub_10073D0A); /* 0x1006D6D9: call 0x10073d0a */
    RECOMP_FLAGS_IN();
    goto L_1006D702; /* 0x1006D6DE: jmp 0x1006d702 */
L_1006D6E0:
    eax = MEM32(ebp + 0x8); /* 0x1006D6E0: mov eax, dword ptr [ebp + 8] */
    MEM8(eax) = (uint8_t)(LO8(ebx)); /* 0x1006D6E3: mov byte ptr [eax], bl */
    goto L_1006D729; /* 0x1006D6E5: jmp 0x1006d729 */
L_1006D6E7:
    ecx = MEM32(edi + 0x1C); /* 0x1006D6E7: mov ecx, dword ptr [edi + 0x1c] */
    eax = MEM32(edi + 0xA0); /* 0x1006D6EA: mov eax, dword ptr [edi + 0xa0] */
    PUSH32(esp, ebx); /* 0x1006D6F0: push ebx */
    PUSH32(esp, 0); /* 0x1006D6F1: push 0 */
    PUSH32(esp, ecx); /* 0x1006D6F3: push ecx */
    ecx = ebp + (-0xC); /* 0x1006D6F4: lea ecx, [ebp - 0xc] */
    PUSH32(esp, ecx); /* 0x1006D6F7: push ecx */
    ecx = eax + 0x28; /* 0x1006D6F8: lea ecx, [eax + 0x28] */
    RECOMP_ICALL(MEM32(eax + 0x48)); /* 0x1006D6FB: call dword ptr [eax + 0x48] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1006D6FE: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006D729; /* 0x1006D700: je 0x1006d729 */
L_1006D702:
    ecx = ebp + (-0xC); /* 0x1006D702: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_10076653); /* 0x1006D705: call 0x10076653 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1006D70A: mov esi, eax */
    goto L_1006D729; /* 0x1006D70C: jmp 0x1006d729 */
L_1006D70E:
    esi = MEM32(ebp + (-0x4)); /* 0x1006D70E: mov esi, dword ptr [ebp - 4] */
    goto L_1006D729; /* 0x1006D711: jmp 0x1006d729 */
L_1006D713:
    ecx = MEM32(edi + 0x20); /* 0x1006D713: mov ecx, dword ptr [edi + 0x20] */
    PUSH32(esp, 1); /* 0x1006D716: push 1 */
    RECOMP_CALL(sub_10073BC9); /* 0x1006D718: call 0x10073bc9 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1006D71D: mov esi, eax */
    eax = MEM32(ebp + 0x8); /* 0x1006D71F: mov eax, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x1006D722: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(ecx, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1006D724: setne cl */
    MEM8(eax) = (uint8_t)(LO8(ecx)); /* 0x1006D727: mov byte ptr [eax], cl */
L_1006D729:
    edi = POP32_VAL(esp); /* 0x1006D729: pop edi */
    eax = esi; /* 0x1006D72A: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1006D72C: pop esi */
    ebx = POP32_VAL(esp); /* 0x1006D72D: pop ebx */
    esp = ebp; /* 0x1006D72E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1006D730: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1006D731: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1006D846(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006D846u);

L_1006D846:
    PUSH32(esp, ebp); /* 0x1006D846: push ebp */
    ebp = esp; /* 0x1006D847: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x1006D849: sub esp, 0x1c */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1006D84C: push ebx */
    PUSH32(esp, esi); /* 0x1006D84D: push esi */
    PUSH32(esp, edi); /* 0x1006D84E: push edi */
    edi = ecx; /* 0x1006D84F: mov edi, ecx */
    esi = edi + (-0x4); /* 0x1006D851: lea esi, [edi - 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(esi);
    _cf = (esi) != 0;
    esi = (uint32_t)(-(int32_t)esi); /* 0x1006D854: neg esi */
    _flag_k = FK_CMP;
    { uint32_t _sa = esi, _sb = esi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1006D856: sbb esi, esi */
      esi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    esi = esi & edi; /* 0x1006D858: and esi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_10023AF4); /* 0x1006D85A: call 0x10023af4 */
    RECOMP_FLAGS_IN();
    /* cmp esi, eax */ /* 0x1006D85F: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006D8C0; /* 0x1006D861: je 0x1006d8c0 */
L_1006D863:
    ebx = edi + 0x2C; /* 0x1006D863: lea ebx, [edi + 0x2c] */
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x1006D866: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(ebx), _sum = MEM32(ebx) + esi; esi = _old; MEM32(ebx) = _sum; } /* 0x1006D869: lock xadd dword ptr [ebx], esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1006D86D: dec esi */
    _flag_k = FK_DEC;
    ecx = MEM32(edi + 0x1C); /* 0x1006D86E: mov ecx, dword ptr [edi + 0x1c] */
    PUSH32(esp, MEM32(edi + 0x8)); /* 0x1006D871: push dword ptr [edi + 8] */
    eax = MEM32(ecx); /* 0x1006D874: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1006D876: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1006D879: push eax */
    PUSH32(esp, ecx); /* 0x1006D87A: push ecx */
    PUSH32(esp, 4); /* 0x1006D87B: push 4 */
    RECOMP_CALL(sub_10023B01); /* 0x1006D87D: call 0x10023b01 */
    RECOMP_FLAGS_IN();
    /* cmp esi, 1 */ /* 0x1006D882: cmp esi, 1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1006D8B6; /* 0x1006D885: jne 0x1006d8b6 */
L_1006D887:
    esi = edi + (-0x4); /* 0x1006D887: lea esi, [edi - 4] */
    MEM32(ebx) = 0; /* 0x1006D88A: mov dword ptr [ebx], 0 */
    ecx = esi; /* 0x1006D890: mov ecx, esi */
    RECOMP_CALL(sub_1006DCC4); /* 0x1006D892: call 0x1006dcc4 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x18); /* 0x1006D897: mov eax, dword ptr [edi + 0x18] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1006D89A: sub esp, 0x10 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x1006D89D: add eax, 0xc */
    _flag_k = FK_ADD;
    ecx = esp; /* 0x1006D8A0: mov ecx, esp */
    PUSH32(esp, eax); /* 0x1006D8A2: push eax */
    RECOMP_CALL(sub_1002762F); /* 0x1006D8A3: call 0x1002762f */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x1006D8A8: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x1006D8AA: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x1006D8AC: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
L_1006D8AF:
    edi = POP32_VAL(esp); /* 0x1006D8AF: pop edi */
    esi = POP32_VAL(esp); /* 0x1006D8B0: pop esi */
    ebx = POP32_VAL(esp); /* 0x1006D8B1: pop ebx */
    esp = ebp; /* 0x1006D8B2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1006D8B4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006D8B5: ret  */
L_1006D8B6:
    eax = esi + 0x1; /* 0x1006D8B6: lea eax, [esi + 1] */
    /* cmp eax, 1 */ /* 0x1006D8B9: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1006D8D9; /* 0x1006D8BC: ja 0x1006d8d9 */
L_1006D8BE:
    RECOMP_BACKEDGE();
    goto L_1006D8AF; /* 0x1006D8BE: jmp 0x1006d8af */
L_1006D8C0:
    ecx = ebp + (-0x1C); /* 0x1006D8C0: lea ecx, [ebp - 0x1c] */
    RECOMP_CALL(sub_1009DD55); /* 0x1006D8C3: call 0x1009dd55 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x1C)) = 0x10067774u; /* 0x1006D8C8: mov dword ptr [ebp - 0x1c], 0x10067774 */
    eax = ebp + (-0x1C); /* 0x1006D8CF: lea eax, [ebp - 0x1c] */
    PUSH32(esp, 0x100DCF5Cu); /* 0x1006D8D2: push 0x100dcf5c */
    goto L_1006D8F0; /* 0x1006D8D7: jmp 0x1006d8f0 */
L_1006D8D9:
    ecx = ebp + (-0x10); /* 0x1006D8D9: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1009DD55); /* 0x1006D8DC: call 0x1009dd55 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x10)) = 0x100675F4u; /* 0x1006D8E1: mov dword ptr [ebp - 0x10], 0x100675f4 */
    eax = ebp + (-0x10); /* 0x1006D8E8: lea eax, [ebp - 0x10] */
    PUSH32(esp, 0x100DCF78u); /* 0x1006D8EB: push 0x100dcf78 */
L_1006D8F0:
    PUSH32(esp, eax); /* 0x1006D8F0: push eax */
    RECOMP_CALL(sub_100192EB); /* 0x1006D8F1: call 0x100192eb */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1006D8F6u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1006D8F7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006D8F7u);

L_1006D8F7:
    PUSH32(esp, ebp); /* 0x1006D8F7: push ebp */
    ebp = esp; /* 0x1006D8F8: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1006D8FA: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x1006D8FD: push edi */
    edi = ecx; /* 0x1006D8FE: mov edi, ecx */
    ecx = MEM32(edi + 0x1C); /* 0x1006D900: mov ecx, dword ptr [edi + 0x1c] */
    PUSH32(esp, MEM32(edi + 0x8)); /* 0x1006D903: push dword ptr [edi + 8] */
    eax = MEM32(ecx); /* 0x1006D906: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1006D908: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1006D90B: push eax */
    PUSH32(esp, ecx); /* 0x1006D90C: push ecx */
    PUSH32(esp, 5); /* 0x1006D90D: push 5 */
    RECOMP_CALL(sub_10023B01); /* 0x1006D90F: call 0x10023b01 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x9C); /* 0x1006D914: mov eax, dword ptr [edi + 0x9c] */
    SET_LO8(eax, MEM8(eax + 0xAD)); /* 0x1006D91A: mov al, byte ptr [eax + 0xad] */
    /* test LO8(eax), LO8(eax) */ /* 0x1006D920: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006D933; /* 0x1006D922: je 0x1006d933 */
L_1006D924:
    PUSH32(esp, 2); /* 0x1006D924: push 2 */
    ecx = edi + (-0x4); /* 0x1006D926: lea ecx, [edi - 4] */
    RECOMP_CALL(sub_1006DE3B); /* 0x1006D929: call 0x1006de3b */
    RECOMP_FLAGS_IN();
    goto L_1006DA0B; /* 0x1006D92E: jmp 0x1006da0b */
L_1006D933:
    ecx = MEM32(edi + 0x18); /* 0x1006D933: mov ecx, dword ptr [edi + 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1006D936: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(edi + 0x9C); /* 0x1006D938: mov eax, dword ptr [edi + 0x9c] */
    PUSH32(esp, ebx); /* 0x1006D93E: push ebx */
    PUSH32(esp, esi); /* 0x1006D93F: push esi */
    PUSH32(esp, 9); /* 0x1006D940: push 9 */
    PUSH32(esp, edx); /* 0x1006D942: push edx */
    PUSH32(esp, ecx); /* 0x1006D943: push ecx */
    ecx = ebp + (-0xC); /* 0x1006D944: lea ecx, [ebp - 0xc] */
    MEM32(ebp + (-0xC)) = edx; /* 0x1006D947: mov dword ptr [ebp - 0xc], edx */
    PUSH32(esp, ecx); /* 0x1006D94A: push ecx */
    ecx = eax + 0x28; /* 0x1006D94B: lea ecx, [eax + 0x28] */
    MEM32(ebp + (-0x4)) = edx; /* 0x1006D94E: mov dword ptr [ebp - 4], edx */
    RECOMP_ICALL(MEM32(eax + 0x4C)); /* 0x1006D951: call dword ptr [eax + 0x4c] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1006D954: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006D9FE; /* 0x1006D956: je 0x1006d9fe */
L_1006D95C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1006D95C: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1006D95E: inc ebx */
    _flag_k = FK_INC;
    /* cmp MEM32(ebp + (-0xC)), ebx */ /* 0x1006D95F: cmp dword ptr [ebp - 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006D9B5; /* 0x1006D962: je 0x1006d9b5 */
L_1006D964:
    ecx = MEM32(edi + 0x1C); /* 0x1006D964: mov ecx, dword ptr [edi + 0x1c] */
    PUSH32(esp, ebx); /* 0x1006D967: push ebx */
    RECOMP_CALL(sub_10073BC9); /* 0x1006D968: call 0x10073bc9 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1006D96D: mov esi, eax */
    /* test esi, esi */ /* 0x1006D96F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006D9D7; /* 0x1006D971: je 0x1006d9d7 */
L_1006D973:
    ecx = ebp + (-0xC); /* 0x1006D973: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_100765E3); /* 0x1006D976: call 0x100765e3 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1006D97B: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006D98A; /* 0x1006D97D: je 0x1006d98a */
L_1006D97F:
    PUSH32(esp, esi); /* 0x1006D97F: push esi */
    ecx = ebp + (-0xC); /* 0x1006D980: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1007669C); /* 0x1006D983: call 0x1007669c */
    RECOMP_FLAGS_IN();
    goto L_1006D9B8; /* 0x1006D988: jmp 0x1006d9b8 */
L_1006D98A:
    ecx = MEM32(edi + 0x18); /* 0x1006D98A: mov ecx, dword ptr [edi + 0x18] */
    eax = MEM32(edi + 0x9C); /* 0x1006D98D: mov eax, dword ptr [edi + 0x9c] */
    PUSH32(esp, 3); /* 0x1006D993: push 3 */
    PUSH32(esp, 0); /* 0x1006D995: push 0 */
    PUSH32(esp, ecx); /* 0x1006D997: push ecx */
    ecx = ebp + (-0xC); /* 0x1006D998: lea ecx, [ebp - 0xc] */
    PUSH32(esp, ecx); /* 0x1006D99B: push ecx */
    ecx = eax + 0x28; /* 0x1006D99C: lea ecx, [eax + 0x28] */
    RECOMP_ICALL(MEM32(eax + 0x4C)); /* 0x1006D99F: call dword ptr [eax + 0x4c] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1006D9A2: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006D9C9; /* 0x1006D9A4: je 0x1006d9c9 */
L_1006D9A6:
    /* cmp MEM32(ebp + (-0xC)), ebx */ /* 0x1006D9A6: cmp dword ptr [ebp - 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1006D97F; /* 0x1006D9A9: jne 0x1006d97f */
L_1006D9AB:
    ecx = MEM32(edi + 0x1C); /* 0x1006D9AB: mov ecx, dword ptr [edi + 0x1c] */
    PUSH32(esp, ebx); /* 0x1006D9AE: push ebx */
    PUSH32(esp, esi); /* 0x1006D9AF: push esi */
    RECOMP_CALL(sub_10073D0A); /* 0x1006D9B0: call 0x10073d0a */
    RECOMP_FLAGS_IN();
L_1006D9B5:
    esi = MEM32(ebp + (-0x4)); /* 0x1006D9B5: mov esi, dword ptr [ebp - 4] */
L_1006D9B8:
    /* test esi, esi */ /* 0x1006D9B8: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006D9FE; /* 0x1006D9BA: je 0x1006d9fe */
L_1006D9BC:
    PUSH32(esp, 2); /* 0x1006D9BC: push 2 */
    PUSH32(esp, esi); /* 0x1006D9BE: push esi */
    ecx = edi + (-0x4); /* 0x1006D9BF: lea ecx, [edi - 4] */
    RECOMP_CALL(sub_1006DD5C); /* 0x1006D9C2: call 0x1006dd5c */
    RECOMP_FLAGS_IN();
    goto L_1006DA09; /* 0x1006D9C7: jmp 0x1006da09 */
L_1006D9C9:
    ecx = MEM32(edi + 0x1C); /* 0x1006D9C9: mov ecx, dword ptr [edi + 0x1c] */
    PUSH32(esp, ebx); /* 0x1006D9CC: push ebx */
    PUSH32(esp, esi); /* 0x1006D9CD: push esi */
    RECOMP_CALL(sub_10073D0A); /* 0x1006D9CE: call 0x10073d0a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1006D9D3: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1006D9B8; /* 0x1006D9D5: jmp 0x1006d9b8 */
L_1006D9D7:
    ecx = MEM32(edi + 0x18); /* 0x1006D9D7: mov ecx, dword ptr [edi + 0x18] */
    eax = MEM32(edi + 0x9C); /* 0x1006D9DA: mov eax, dword ptr [edi + 0x9c] */
    PUSH32(esp, ebx); /* 0x1006D9E0: push ebx */
    PUSH32(esp, 0); /* 0x1006D9E1: push 0 */
    PUSH32(esp, ecx); /* 0x1006D9E3: push ecx */
    ecx = ebp + (-0xC); /* 0x1006D9E4: lea ecx, [ebp - 0xc] */
    PUSH32(esp, ecx); /* 0x1006D9E7: push ecx */
    ecx = eax + 0x28; /* 0x1006D9E8: lea ecx, [eax + 0x28] */
    RECOMP_ICALL(MEM32(eax + 0x4C)); /* 0x1006D9EB: call dword ptr [eax + 0x4c] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1006D9EE: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006D9FE; /* 0x1006D9F0: je 0x1006d9fe */
L_1006D9F2:
    ecx = ebp + (-0xC); /* 0x1006D9F2: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_10076653); /* 0x1006D9F5: call 0x10076653 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1006D9FA: mov esi, eax */
    RECOMP_BACKEDGE();
    goto L_1006D9B8; /* 0x1006D9FC: jmp 0x1006d9b8 */
L_1006D9FE:
    ecx = MEM32(edi + 0x98); /* 0x1006D9FE: mov ecx, dword ptr [edi + 0x98] */
    eax = MEM32(ecx); /* 0x1006DA04: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x1006DA06: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
L_1006DA09:
    esi = POP32_VAL(esp); /* 0x1006DA09: pop esi */
    ebx = POP32_VAL(esp); /* 0x1006DA0A: pop ebx */
L_1006DA0B:
    edi = POP32_VAL(esp); /* 0x1006DA0B: pop edi */
    esp = ebp; /* 0x1006DA0C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1006DA0E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006DA0F: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006DA10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006DA10u);

L_1006DA10:
    PUSH32(esp, ebp); /* 0x1006DA10: push ebp */
    ebp = esp; /* 0x1006DA11: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1006DA13: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1006DA16: push esi */
    esi = ecx; /* 0x1006DA17: mov esi, ecx */
    ecx = MEM32(esi + 0x1C); /* 0x1006DA19: mov ecx, dword ptr [esi + 0x1c] */
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x1006DA1C: push dword ptr [esi + 8] */
    eax = MEM32(ecx); /* 0x1006DA1F: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1006DA21: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1006DA24: push eax */
    PUSH32(esp, ecx); /* 0x1006DA25: push ecx */
    PUSH32(esp, 5); /* 0x1006DA26: push 5 */
    RECOMP_CALL(sub_10023B01); /* 0x1006DA28: call 0x10023b01 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x9C); /* 0x1006DA2D: mov eax, dword ptr [esi + 0x9c] */
    SET_LO8(eax, MEM8(eax + 0xAD)); /* 0x1006DA33: mov al, byte ptr [eax + 0xad] */
    /* test LO8(eax), LO8(eax) */ /* 0x1006DA39: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006DA49; /* 0x1006DA3B: je 0x1006da49 */
L_1006DA3D:
    PUSH32(esp, 2); /* 0x1006DA3D: push 2 */
    ecx = esi + (-0x4); /* 0x1006DA3F: lea ecx, [esi - 4] */
    RECOMP_CALL(sub_1006DE3B); /* 0x1006DA42: call 0x1006de3b */
    RECOMP_FLAGS_IN();
    goto L_1006DA86; /* 0x1006DA47: jmp 0x1006da86 */
L_1006DA49:
    ecx = MEM32(esi + 0x18); /* 0x1006DA49: mov ecx, dword ptr [esi + 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1006DA4C: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(esi + 0x9C); /* 0x1006DA4E: mov eax, dword ptr [esi + 0x9c] */
    PUSH32(esp, 1); /* 0x1006DA54: push 1 */
    PUSH32(esp, edx); /* 0x1006DA56: push edx */
    PUSH32(esp, ecx); /* 0x1006DA57: push ecx */
    ecx = ebp + (-0xC); /* 0x1006DA58: lea ecx, [ebp - 0xc] */
    MEM32(ebp + (-0xC)) = edx; /* 0x1006DA5B: mov dword ptr [ebp - 0xc], edx */
    PUSH32(esp, ecx); /* 0x1006DA5E: push ecx */
    ecx = eax + 0x28; /* 0x1006DA5F: lea ecx, [eax + 0x28] */
    MEM32(ebp + (-0x4)) = edx; /* 0x1006DA62: mov dword ptr [ebp - 4], edx */
    RECOMP_ICALL(MEM32(eax + 0x48)); /* 0x1006DA65: call dword ptr [eax + 0x48] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1006DA68: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006DA7B; /* 0x1006DA6A: je 0x1006da7b */
L_1006DA6C:
    PUSH32(esp, 2); /* 0x1006DA6C: push 2 */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1006DA6E: push dword ptr [ebp - 4] */
    ecx = esi + (-0x4); /* 0x1006DA71: lea ecx, [esi - 4] */
    RECOMP_CALL(sub_1006DD5C); /* 0x1006DA74: call 0x1006dd5c */
    RECOMP_FLAGS_IN();
    goto L_1006DA86; /* 0x1006DA79: jmp 0x1006da86 */
L_1006DA7B:
    ecx = MEM32(esi + 0x98); /* 0x1006DA7B: mov ecx, dword ptr [esi + 0x98] */
    eax = MEM32(ecx); /* 0x1006DA81: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x1006DA83: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
L_1006DA86:
    esi = POP32_VAL(esp); /* 0x1006DA86: pop esi */
    esp = ebp; /* 0x1006DA87: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1006DA89: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006DA8A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006DA8B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006DA8Bu);

L_1006DA8B:
    PUSH32(esp, ebp); /* 0x1006DA8B: push ebp */
    ebp = esp; /* 0x1006DA8C: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1006DA8E: sub esp, 0xc */
    _flag_k = FK_CMP;
    /* cmp MEM8(ebp + 0x8), 0 */ /* 0x1006DA91: cmp byte ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006DAAD; /* 0x1006DA95: je 0x1006daad */
L_1006DA97:
    _flag_a = (uint32_t)(MEM32(ecx + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x14) = MEM32(ecx + 0x14) + 1; /* 0x1006DA97: inc dword ptr [ecx + 0x14] */
    _flag_k = FK_INC;
    /* cmp MEM32(ecx + 0x14), 1 */ /* 0x1006DA9A: cmp dword ptr [ecx + 0x14], 1 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x14)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1006DAD4; /* 0x1006DA9E: jne 0x1006dad4 */
L_1006DAA0:
    ecx = MEM32(ecx + 0x9C); /* 0x1006DAA0: mov ecx, dword ptr [ecx + 0x9c] */
    eax = MEM32(ecx); /* 0x1006DAA6: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x20)); /* 0x1006DAA8: call dword ptr [eax + 0x20] */
    RECOMP_FLAGS_IN();
    goto L_1006DAD4; /* 0x1006DAAB: jmp 0x1006dad4 */
L_1006DAAD:
    eax = MEM32(ecx + 0x14); /* 0x1006DAAD: mov eax, dword ptr [ecx + 0x14] */
    /* test eax, eax */ /* 0x1006DAB0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006DADA; /* 0x1006DAB2: je 0x1006dada */
L_1006DAB4:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1006DAB4: dec eax */
    _flag_k = FK_DEC;
    MEM32(ecx + 0x14) = eax; /* 0x1006DAB5: mov dword ptr [ecx + 0x14], eax */
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1006DAD4; /* 0x1006DAB8: jne 0x1006dad4 */
L_1006DABA:
    eax = MEM32(ecx + 0xA0); /* 0x1006DABA: mov eax, dword ptr [ecx + 0xa0] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xFFFFFFFCu; /* 0x1006DAC0: add ecx, -4 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1006DAC3: push eax */
    RECOMP_CALL(sub_1006DAF8); /* 0x1006DAC4: call 0x1006daf8 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1006DAC9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006DAD4; /* 0x1006DACB: je 0x1006dad4 */
L_1006DACD:
    ecx = eax; /* 0x1006DACD: mov ecx, eax */
    RECOMP_CALL(sub_1007A8D9); /* 0x1006DACF: call 0x1007a8d9 */
    RECOMP_FLAGS_IN();
L_1006DAD4:
    esp = ebp; /* 0x1006DAD4: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1006DAD6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1006DAD7: ret 4 */
L_1006DADA:
    ecx = ebp + (-0xC); /* 0x1006DADA: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1009DD55); /* 0x1006DADD: call 0x1009dd55 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x100DCF24u); /* 0x1006DAE2: push 0x100dcf24 */
    eax = ebp + (-0xC); /* 0x1006DAE7: lea eax, [ebp - 0xc] */
    MEM32(ebp + (-0xC)) = 0x10067854u; /* 0x1006DAEA: mov dword ptr [ebp - 0xc], 0x10067854 */
    PUSH32(esp, eax); /* 0x1006DAF1: push eax */
    RECOMP_CALL(sub_100192EB); /* 0x1006DAF2: call 0x100192eb */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1006DAF7u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1006DAF8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006DAF8u);

L_1006DAF8:
    PUSH32(esp, ebp); /* 0x1006DAF8: push ebp */
    ebp = esp; /* 0x1006DAF9: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x1006DAFB: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1006DAFE: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1006DAFF: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edx, edx */ /* 0x1006DB01: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006DB1F; /* 0x1006DB03: je 0x1006db1f */
L_1006DB05:
    PUSH32(esp, edi); /* 0x1006DB05: push edi */
    edi = ecx + 0xA4; /* 0x1006DB06: lea edi, [ecx + 0xa4] */
    /* cmp edx, MEM32(edi) */ /* 0x1006DB0C: cmp edx, dword ptr [edi] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1006DB1E; /* 0x1006DB0E: jne 0x1006db1e */
L_1006DB10:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1006DB10: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edx; /* 0x1006DB12: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(edi); if (eax == _d) { MEM32(edi) = ecx; } else { eax = _d; } } /* 0x1006DB14: lock cmpxchg dword ptr [edi], ecx */
    _flag_k = FK_CMP;
    /* cmp eax, edx */ /* 0x1006DB18: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1006DB1E; /* 0x1006DB1A: jne 0x1006db1e */
L_1006DB1C:
    esi = edx; /* 0x1006DB1C: mov esi, edx */
L_1006DB1E:
    edi = POP32_VAL(esp); /* 0x1006DB1E: pop edi */
L_1006DB1F:
    eax = esi; /* 0x1006DB1F: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1006DB21: pop esi */
    ebp = POP32_VAL(esp); /* 0x1006DB22: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1006DB23: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1006DB40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006DB40u);

L_1006DB40:
    PUSH32(esp, ebp); /* 0x1006DB40: push ebp */
    ebp = esp; /* 0x1006DB41: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x1006DB43: sub esp, 0x1c */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1006DB46: push ebx */
    PUSH32(esp, esi); /* 0x1006DB47: push esi */
    PUSH32(esp, edi); /* 0x1006DB48: push edi */
    edi = ecx; /* 0x1006DB49: mov edi, ecx */
    RECOMP_CALL(sub_10023AF4); /* 0x1006DB4B: call 0x10023af4 */
    RECOMP_FLAGS_IN();
    edx = MEM32(edi + 0x20); /* 0x1006DB50: mov edx, dword ptr [edi + 0x20] */
    ebx = eax; /* 0x1006DB53: mov ebx, eax */
    /* cmp MEM32(edx + 0x1B8), 0 */ /* 0x1006DB55: cmp dword ptr [edx + 0x1b8], 0 */
    _flag_a = (uint32_t)(MEM32(edx + 0x1B8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1006DB7D; /* 0x1006DB5C: jle 0x1006db7d */
L_1006DB5E:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1006DB5E: sub esp, 0x10 */
    _flag_k = FK_CMP;
    eax = ebp + 0x8; /* 0x1006DB61: lea eax, [ebp + 8] */
    ecx = esp; /* 0x1006DB64: mov ecx, esp */
    PUSH32(esp, eax); /* 0x1006DB66: push eax */
    RECOMP_CALL(sub_1002762F); /* 0x1006DB67: call 0x1002762f */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi + 0x20); /* 0x1006DB6C: mov ecx, dword ptr [edi + 0x20] */
    PUSH32(esp, edi); /* 0x1006DB6F: push edi */
    eax = MEM32(ecx); /* 0x1006DB70: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x3C)); /* 0x1006DB72: call dword ptr [eax + 0x3c] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1006DB75: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006DCBB; /* 0x1006DB77: jne 0x1006dcbb */
L_1006DB7D:
    /* test ebx, ebx */ /* 0x1006DB7D: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006DCA4; /* 0x1006DB7F: je 0x1006dca4 */
L_1006DB85:
    /* cmp MEM8(ebx + 0x4C), 0 */ /* 0x1006DB85: cmp byte ptr [ebx + 0x4c], 0 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x4C)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1006DCA4; /* 0x1006DB89: jne 0x1006dca4 */
L_1006DB8F:
    eax = MEM32(edi + 0x20); /* 0x1006DB8F: mov eax, dword ptr [edi + 0x20] */
    /* cmp eax, MEM32(ebx + 0x1C) */ /* 0x1006DB92: cmp eax, dword ptr [ebx + 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1006DCA4; /* 0x1006DB95: jne 0x1006dca4 */
L_1006DB9B:
    eax = MEM32(edi + 0x1C); /* 0x1006DB9B: mov eax, dword ptr [edi + 0x1c] */
    eax = MEM32(eax + 0x100); /* 0x1006DB9E: mov eax, dword ptr [eax + 0x100] */
    /* test MEM8(eax + 0x30), 2 */ /* 0x1006DBA4: test byte ptr [eax + 0x30], 2 */
    _flag_a = (uint32_t)(MEM8(eax + 0x30)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006DCA4; /* 0x1006DBA8: jne 0x1006dca4 */
L_1006DBAE:
    eax = MEM32(ebx + 0x9C); /* 0x1006DBAE: mov eax, dword ptr [ebx + 0x9c] */
    ecx = MEM32(eax + 0x90); /* 0x1006DBB4: mov ecx, dword ptr [eax + 0x90] */
    esi = ecx; /* 0x1006DBBA: mov esi, ecx */
    eax = MEM32(edi + 0x1C); /* 0x1006DBBC: mov eax, dword ptr [edi + 0x1c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x1006DBBF: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (5u) _cf = (((esi) >> 4) & 1u); /* 0x1006DBC2: shr esi, 5 */
    if (5u) { _flag_a = recomp_flags_pack((esi >> 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 5u; /* 0x1006DBC2: shr esi, 5 */
    edx = MEM32(eax + 0x20); /* 0x1006DBC5: mov edx, dword ptr [eax + 0x20] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1006DBC8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1006DBCA: inc eax */
    _flag_k = FK_INC;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x1006DBCB: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x1006DBCB: shl eax, cl */
    /* test MEM32(edx + esi * 4), eax */ /* 0x1006DBCD: test dword ptr [edx + esi*4], eax */
    _flag_a = (uint32_t)(MEM32(edx + esi * 4)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006DCA4; /* 0x1006DBD0: je 0x1006dca4 */
L_1006DBD6:
    eax = MEM32(ebx + 0x9C); /* 0x1006DBD6: mov eax, dword ptr [ebx + 0x9c] */
    ecx = MEM32(eax + 0x14); /* 0x1006DBDC: mov ecx, dword ptr [eax + 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(eax + 0x10); /* 0x1006DBDF: sub ecx, dword ptr [eax + 0x10] */
    _flag_k = FK_CMP;
    eax = MEM32(edi + 0x20); /* 0x1006DBE2: mov eax, dword ptr [edi + 0x20] */
    eax = (uint32_t)MEM16(eax + 0x10); /* 0x1006DBE5: movzx eax, word ptr [eax + 0x10] */
    /* cmp ecx, eax */ /* 0x1006DBE9: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1006DCA4; /* 0x1006DBEB: jge 0x1006dca4 */
L_1006DBF1:
    edx = MEM32(edi + 0x1C); /* 0x1006DBF1: mov edx, dword ptr [edi + 0x1c] */
    eax = ebx; /* 0x1006DBF4: mov eax, ebx */
    ecx = ebx; /* 0x1006DBF6: mov ecx, ebx */
    MEM32(ebp + (-0x4)) = edx; /* 0x1006DBF8: mov dword ptr [ebp - 4], edx */
    MEM32(ebp + (-0x8)) = eax; /* 0x1006DBFB: mov dword ptr [ebp - 8], eax */
    RECOMP_CALL(sub_1006A223); /* 0x1006DBFE: call 0x1006a223 */
    RECOMP_FLAGS_IN();
    /* cmp eax, MEM32(edx + 0x100) */ /* 0x1006DC03: cmp eax, dword ptr [edx + 0x100] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x100));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006DC15; /* 0x1006DC09: je 0x1006dc15 */
L_1006DC0B:
    MEM32(edi + 0xE4) = 1; /* 0x1006DC0B: mov dword ptr [edi + 0xe4], 1 */
L_1006DC15:
    ecx = MEM32(ebx + 0x9C); /* 0x1006DC15: mov ecx, dword ptr [ebx + 0x9c] */
    esi = MEM32(ecx + 0x14); /* 0x1006DC1B: mov esi, dword ptr [ecx + 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x10u; /* 0x1006DC1E: add ecx, 0x10 */
    _flag_k = FK_ADD;
    eax = MEM32(ecx); /* 0x1006DC21: mov eax, dword ptr [ecx] */
    edx = MEM32(ecx + 0x8); /* 0x1006DC23: mov edx, dword ptr [ecx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1006DC26: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp esi, eax */ /* 0x1006DC28: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1006DC3C; /* 0x1006DC2A: jge 0x1006dc3c */
L_1006DC2C:
    eax = MEM32(ecx + 0xC); /* 0x1006DC2C: mov eax, dword ptr [ecx + 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    edx = edx & esi; /* 0x1006DC2F: and edx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + edx * 4) = edi; /* 0x1006DC31: mov dword ptr [eax + edx*4], edi */
    eax = esi + 0x1; /* 0x1006DC34: lea eax, [esi + 1] */
    MEM32(ecx + 0x4) = eax; /* 0x1006DC37: mov dword ptr [ecx + 4], eax */
    goto L_1006DC4D; /* 0x1006DC3A: jmp 0x1006dc4d */
L_1006DC3C:
    PUSH32(esp, ecx); /* 0x1006DC3C: push ecx */
    PUSH32(esp, ecx); /* 0x1006DC3D: push ecx */
    eax = esp; /* 0x1006DC3E: mov eax, esp */
    PUSH32(esp, edi); /* 0x1006DC40: push edi */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x1006DC41: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) & 0; /* 0x1006DC44: and dword ptr [eax + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1006E670); /* 0x1006DC48: call 0x1006e670 */
    RECOMP_FLAGS_IN();
L_1006DC4D:
    eax = MEM32(edi + 0x20); /* 0x1006DC4D: mov eax, dword ptr [edi + 0x20] */
    /* cmp MEM32(eax + 0x1B4), 0 */ /* 0x1006DC50: cmp dword ptr [eax + 0x1b4], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x1B4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1006DC85; /* 0x1006DC57: jle 0x1006dc85 */
L_1006DC59:
    eax = ebp + 0x8; /* 0x1006DC59: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x1006DC5C: push eax */
    ecx = ebp + (-0x1C); /* 0x1006DC5D: lea ecx, [ebp - 0x1c] */
    RECOMP_CALL(sub_1002762F); /* 0x1006DC60: call 0x1002762f */
    RECOMP_FLAGS_IN();
    esi = MEM32(edi + 0x20); /* 0x1006DC65: mov esi, dword ptr [edi + 0x20] */
    eax = ebp + (-0x1C); /* 0x1006DC68: lea eax, [ebp - 0x1c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1006DC6B: sub esp, 0x10 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x1006DC6E: mov ecx, esp */
    PUSH32(esp, eax); /* 0x1006DC70: push eax */
    RECOMP_CALL(sub_1002762F); /* 0x1006DC71: call 0x1002762f */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0x4)); /* 0x1006DC76: mov ebx, dword ptr [ebp - 4] */
    ecx = esi; /* 0x1006DC79: mov ecx, esi */
    PUSH32(esp, 0xBu); /* 0x1006DC7B: push 0xb */
    PUSH32(esp, ebx); /* 0x1006DC7D: push ebx */
    RECOMP_CALL(sub_1007370B); /* 0x1006DC7E: call 0x1007370b */
    RECOMP_FLAGS_IN();
    goto L_1006DC88; /* 0x1006DC83: jmp 0x1006dc88 */
L_1006DC85:
    ebx = MEM32(ebp + (-0x4)); /* 0x1006DC85: mov ebx, dword ptr [ebp - 4] */
L_1006DC88:
    ecx = MEM32(ebp + (-0x8)); /* 0x1006DC88: mov ecx, dword ptr [ebp - 8] */
    RECOMP_CALL(sub_1006A223); /* 0x1006DC8B: call 0x1006a223 */
    RECOMP_FLAGS_IN();
    /* cmp eax, MEM32(ebx + 0x100) */ /* 0x1006DC90: cmp eax, dword ptr [ebx + 0x100] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x100));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006DCBB; /* 0x1006DC96: je 0x1006dcbb */
L_1006DC98:
    MEM32(edi + 0xE4) = 0; /* 0x1006DC98: mov dword ptr [edi + 0xe4], 0 */
    goto L_1006DCBB; /* 0x1006DCA2: jmp 0x1006dcbb */
L_1006DCA4:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1006DCA4: sub esp, 0x10 */
    _flag_k = FK_CMP;
    eax = ebp + 0x8; /* 0x1006DCA7: lea eax, [ebp + 8] */
    ecx = esp; /* 0x1006DCAA: mov ecx, esp */
    PUSH32(esp, eax); /* 0x1006DCAC: push eax */
    RECOMP_CALL(sub_1002762F); /* 0x1006DCAD: call 0x1002762f */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi + 0x1C); /* 0x1006DCB2: mov ecx, dword ptr [edi + 0x1c] */
    PUSH32(esp, edi); /* 0x1006DCB5: push edi */
    RECOMP_CALL(sub_10072695); /* 0x1006DCB6: call 0x10072695 */
    RECOMP_FLAGS_IN();
L_1006DCBB:
    edi = POP32_VAL(esp); /* 0x1006DCBB: pop edi */
    esi = POP32_VAL(esp); /* 0x1006DCBC: pop esi */
    ebx = POP32_VAL(esp); /* 0x1006DCBD: pop ebx */
    esp = ebp; /* 0x1006DCBE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1006DCC0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1006DCC1: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1006DCC4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006DCC4u);

L_1006DCC4:
    PUSH32(esp, ebp); /* 0x1006DCC4: push ebp */
    ebp = esp; /* 0x1006DCC5: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x1006DCC7: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1006DCCA: push esi */
    esi = ecx; /* 0x1006DCCB: mov esi, ecx */
    /* cmp MEM32(esi + 0x2C), 0 */ /* 0x1006DCCD: cmp dword ptr [esi + 0x2c], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x2C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1006DCEC; /* 0x1006DCD1: jne 0x1006dcec */
L_1006DCD3:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x1006DCD3: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 0x1007A487u; /* 0x1006DCD7: mov dword ptr [ebp - 4], 0x1007a487 */
L_1006DCDE:
    ecx = ebp + (-0x10); /* 0x1006DCDE: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_10068D76); /* 0x1006DCE1: call 0x10068d76 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esi + 0x2C), 0 */ /* 0x1006DCE6: cmp dword ptr [esi + 0x2c], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x2C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006DCDE; /* 0x1006DCEA: je 0x1006dcde */
L_1006DCEC:
    esi = POP32_VAL(esp); /* 0x1006DCEC: pop esi */
    esp = ebp; /* 0x1006DCED: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1006DCEF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006DCF0: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006DCF1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006DCF1u);

L_1006DCF1:
    PUSH32(esp, ebp); /* 0x1006DCF1: push ebp */
    ebp = esp; /* 0x1006DCF2: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1006DCF4: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1006DCF7: push esi */
    esi = ecx; /* 0x1006DCF8: mov esi, ecx */
    PUSH32(esp, edi); /* 0x1006DCFA: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1006DCFB: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x1C), edi */ /* 0x1006DCFD: cmp dword ptr [esi + 0x1c], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006DD54; /* 0x1006DD00: je 0x1006dd54 */
L_1006DD02:
    /* cmp MEM32(esi + 0xE4), edi */ /* 0x1006DD02: cmp dword ptr [esi + 0xe4], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0xE4)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006DD24; /* 0x1006DD08: je 0x1006dd24 */
L_1006DD0A:
    MEM32(ebp + (-0x8)) = edi; /* 0x1006DD0A: mov dword ptr [ebp - 8], edi */
    MEM32(ebp + (-0x4)) = 0x1007A487u; /* 0x1006DD0D: mov dword ptr [ebp - 4], 0x1007a487 */
L_1006DD14:
    ecx = ebp + (-0x10); /* 0x1006DD14: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_10068D76); /* 0x1006DD17: call 0x10068d76 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esi + 0xE4), edi */ /* 0x1006DD1C: cmp dword ptr [esi + 0xe4], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0xE4)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1006DD14; /* 0x1006DD22: jne 0x1006dd14 */
L_1006DD24:
    ecx = MEM32(esi + 0x1C); /* 0x1006DD24: mov ecx, dword ptr [esi + 0x1c] */
    ecx = MEM32(ecx + 0x100); /* 0x1006DD27: mov ecx, dword ptr [ecx + 0x100] */
    RECOMP_CALL(sub_1006D563); /* 0x1006DD2D: call 0x1006d563 */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(ebp + 0xC), 0 */ /* 0x1006DD32: cmp byte ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    edx = MEM32(ebp + 0x8); /* 0x1006DD36: mov edx, dword ptr [ebp + 8] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006DD51; /* 0x1006DD39: je 0x1006dd51 */
L_1006DD3B:
    eax = MEM32(edx + 0x100); /* 0x1006DD3B: mov eax, dword ptr [edx + 0x100] */
    /* test MEM8(eax + 0x30), 4 */ /* 0x1006DD41: test byte ptr [eax + 0x30], 4 */
    _flag_a = (uint32_t)(MEM8(eax + 0x30)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006DD51; /* 0x1006DD45: jne 0x1006dd51 */
L_1006DD47:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1006DD47: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x14u; /* 0x1006DD49: add eax, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1006DD4C: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + ecx; ecx = _old; MEM32(eax) = _sum; } /* 0x1006DD4D: lock xadd dword ptr [eax], ecx */
    _flag_k = FK_ADD;
L_1006DD51:
    MEM32(esi + 0x1C) = edx; /* 0x1006DD51: mov dword ptr [esi + 0x1c], edx */
L_1006DD54:
    edi = POP32_VAL(esp); /* 0x1006DD54: pop edi */
    esi = POP32_VAL(esp); /* 0x1006DD55: pop esi */
    esp = ebp; /* 0x1006DD56: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1006DD58: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1006DD59: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1006DD5C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006DD5Cu);

L_1006DD5C:
    PUSH32(esp, ebp); /* 0x1006DD5C: push ebp */
    ebp = esp; /* 0x1006DD5D: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x1006DD5F: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1006DD62: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1006DD65: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1006DD66: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1006DD68: push esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1006DD69: inc ebx */
    _flag_k = FK_INC;
    esi = ecx; /* 0x1006DD6A: mov esi, ecx */
    PUSH32(esp, edi); /* 0x1006DD6C: push edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x1006DD6D: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1006DD9C; /* 0x1006DD70: je 0x1006dd9c */
L_1006DD72:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1006DD72: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1006DDBB; /* 0x1006DD73: je 0x1006ddbb */
L_1006DD75:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1006DD75: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1006DD80; /* 0x1006DD76: je 0x1006dd80 */
L_1006DD78:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1006DD78: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1006DDBB; /* 0x1006DD79: jne 0x1006ddbb */
L_1006DD7B:
    PUSH32(esp, 2); /* 0x1006DD7B: push 2 */
    ebx = POP32_VAL(esp); /* 0x1006DD7D: pop ebx */
    goto L_1006DDBB; /* 0x1006DD7E: jmp 0x1006ddbb */
L_1006DD80:
    eax = MEM32(esi + 0x1C); /* 0x1006DD80: mov eax, dword ptr [esi + 0x1c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1006DD83: sub esp, 0x10 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x1006DD86: add eax, 0xc */
    _flag_k = FK_ADD;
    ecx = esp; /* 0x1006DD89: mov ecx, esp */
    PUSH32(esp, eax); /* 0x1006DD8B: push eax */
    RECOMP_CALL(sub_1002762F); /* 0x1006DD8C: call 0x1002762f */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x1C); /* 0x1006DD91: mov ecx, dword ptr [esi + 0x1c] */
    PUSH32(esp, esi); /* 0x1006DD94: push esi */
    RECOMP_CALL(sub_10072695); /* 0x1006DD95: call 0x10072695 */
    RECOMP_FLAGS_IN();
    goto L_1006DDBB; /* 0x1006DD9A: jmp 0x1006ddbb */
L_1006DD9C:
    ecx = MEM32(esi + 0x20); /* 0x1006DD9C: mov ecx, dword ptr [esi + 0x20] */
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x1006DD9F: push dword ptr [esi + 0xc] */
    eax = MEM32(ecx); /* 0x1006DDA2: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1006DDA4: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1006DDA7: push eax */
    PUSH32(esp, ecx); /* 0x1006DDA8: push ecx */
    PUSH32(esp, 6); /* 0x1006DDA9: push 6 */
    RECOMP_CALL(sub_10023B01); /* 0x1006DDAB: call 0x10023b01 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x1C); /* 0x1006DDB0: mov ecx, dword ptr [esi + 0x1c] */
    PUSH32(esp, esi); /* 0x1006DDB3: push esi */
    RECOMP_CALL(sub_10072C24); /* 0x1006DDB4: call 0x10072c24 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1006DDB9: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1006DDBB:
    eax = MEM32(esi + 0xA0); /* 0x1006DDBB: mov eax, dword ptr [esi + 0xa0] */
    ecx = MEM32(esi + 0x20); /* 0x1006DDC1: mov ecx, dword ptr [esi + 0x20] */
    MEM32(ebp + (-0xC)) = ecx; /* 0x1006DDC4: mov dword ptr [ebp - 0xc], ecx */
    ecx = MEM32(ebp + 0x8); /* 0x1006DDC7: mov ecx, dword ptr [ebp + 8] */
    MEM32(esi + 0xA0) = 0; /* 0x1006DDCA: mov dword ptr [esi + 0xa0], 0 */
    edi = MEM32(esi + 0x9C); /* 0x1006DDD4: mov edi, dword ptr [esi + 0x9c] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1006DDDA: mov dword ptr [ebp - 4], eax */
    MEM32(ebp + (-0x8)) = ecx; /* 0x1006DDDD: mov dword ptr [ebp - 8], ecx */
    /* test ecx, ecx */ /* 0x1006DDE0: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006DDF2; /* 0x1006DDE2: jne 0x1006ddf2 */
L_1006DDE4:
    eax = MEM32(eax); /* 0x1006DDE4: mov eax, dword ptr [eax] */
    ecx = MEM32(ebp + (-0x4)); /* 0x1006DDE6: mov ecx, dword ptr [ebp - 4] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1006DDE9: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x8)) = eax; /* 0x1006DDEC: mov dword ptr [ebp - 8], eax */
    eax = MEM32(ebp + (-0x4)); /* 0x1006DDEF: mov eax, dword ptr [ebp - 4] */
L_1006DDF2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1006DDF2: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi + 0x2C; /* 0x1006DDF4: lea ecx, [esi + 0x2c] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1006DDF7: inc edx */
    _flag_k = FK_INC;
    { uint32_t _tmp = MEM32(ecx); /* 0x1006DDF8: xchg dword ptr [ecx], edx */
      MEM32(ecx) = edx;
      edx = _tmp; }
    edx = MEM32(eax); /* 0x1006DDFA: mov edx, dword ptr [eax] */
    ecx = eax; /* 0x1006DDFC: mov ecx, eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1006DDFE: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(edx + 0x10)); /* 0x1006DE01: call dword ptr [edx + 0x10] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x8)); /* 0x1006DE04: mov ecx, dword ptr [ebp - 8] */
    /* test ecx, ecx */ /* 0x1006DE07: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006DE29; /* 0x1006DE09: jne 0x1006de29 */
L_1006DE0B:
    ecx = MEM32(ebp + (-0x4)); /* 0x1006DE0B: mov ecx, dword ptr [ebp - 4] */
    PUSH32(esp, 1); /* 0x1006DE0E: push 1 */
    PUSH32(esp, 4); /* 0x1006DE10: push 4 */
    RECOMP_CALL(sub_100247D7); /* 0x1006DE12: call 0x100247d7 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC)); /* 0x1006DE17: mov ecx, dword ptr [ebp - 0xc] */
    RECOMP_CALL(sub_10073948); /* 0x1006DE1A: call 0x10073948 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi); /* 0x1006DE1F: mov eax, dword ptr [edi] */
    ecx = edi; /* 0x1006DE21: mov ecx, edi */
    PUSH32(esp, ebx); /* 0x1006DE23: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1006DE24: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    goto L_1006DE32; /* 0x1006DE27: jmp 0x1006de32 */
L_1006DE29:
    eax = MEM32(edi); /* 0x1006DE29: mov eax, dword ptr [edi] */
    PUSH32(esp, ebx); /* 0x1006DE2B: push ebx */
    PUSH32(esp, ecx); /* 0x1006DE2C: push ecx */
    ecx = edi; /* 0x1006DE2D: mov ecx, edi */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1006DE2F: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_1006DE32:
    edi = POP32_VAL(esp); /* 0x1006DE32: pop edi */
    esi = POP32_VAL(esp); /* 0x1006DE33: pop esi */
    ebx = POP32_VAL(esp); /* 0x1006DE34: pop ebx */
    esp = ebp; /* 0x1006DE35: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1006DE37: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1006DE38: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1006DE3B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006DE3Bu);

L_1006DE3B:
    PUSH32(esp, ebp); /* 0x1006DE3B: push ebp */
    ebp = esp; /* 0x1006DE3C: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1006DE3E: push ecx */
    PUSH32(esp, ecx); /* 0x1006DE3F: push ecx */
    PUSH32(esp, ebx); /* 0x1006DE40: push ebx */
    ebx = ecx; /* 0x1006DE41: mov ebx, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1006DE43: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1006DE45: push esi */
    PUSH32(esp, edi); /* 0x1006DE46: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1006DE47: mov edi, dword ptr [ebp + 8] */
    esi = MEM32(ebx + 0x9C); /* 0x1006DE4A: mov esi, dword ptr [ebx + 0x9c] */
    MEM32(ebp + (-0x4)) = esi; /* 0x1006DE50: mov dword ptr [ebp - 4], esi */
    MEM32(ebp + (-0x8)) = eax; /* 0x1006DE53: mov dword ptr [ebp - 8], eax */
    /* cmp MEM32(ebx + 0xA0), eax */ /* 0x1006DE56: cmp dword ptr [ebx + 0xa0], eax */
    _flag_a = (uint32_t)(MEM32(ebx + 0xA0)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006DF16; /* 0x1006DE5C: je 0x1006df16 */
L_1006DE62:
    RECOMP_CALL(sub_1006E42F); /* 0x1006DE62: call 0x1006e42f */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebx + 0xA0); /* 0x1006DE67: mov esi, dword ptr [ebx + 0xa0] */
    ecx = MEM32(ebx + 0xA0); /* 0x1006DE6D: mov ecx, dword ptr [ebx + 0xa0] */
    esi = MEM32(esi + 0xC0); /* 0x1006DE73: mov esi, dword ptr [esi + 0xc0] */
    eax = MEM32(ecx); /* 0x1006DE79: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x1006DE7B: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    MEM32(ebx + 0xA0) = 0; /* 0x1006DE7E: mov dword ptr [ebx + 0xa0], 0 */
    /* test edi, edi */ /* 0x1006DE88: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006DE96; /* 0x1006DE8A: je 0x1006de96 */
L_1006DE8C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1006DE8C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebx + 0x2C; /* 0x1006DE8E: lea eax, [ebx + 0x2c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1006DE91: inc ecx */
    _flag_k = FK_INC;
    { uint32_t _tmp = MEM32(eax); /* 0x1006DE92: xchg dword ptr [eax], ecx */
      MEM32(eax) = ecx;
      ecx = _tmp; }
    goto L_1006DEB3; /* 0x1006DE94: jmp 0x1006deb3 */
L_1006DE96:
    ecx = MEM32(ebx + 0x20); /* 0x1006DE96: mov ecx, dword ptr [ebx + 0x20] */
    PUSH32(esp, MEM32(ebx + 0xC)); /* 0x1006DE99: push dword ptr [ebx + 0xc] */
    eax = MEM32(ecx); /* 0x1006DE9C: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1006DE9E: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1006DEA1: push eax */
    PUSH32(esp, ecx); /* 0x1006DEA2: push ecx */
    PUSH32(esp, 6); /* 0x1006DEA3: push 6 */
    RECOMP_CALL(sub_10023B01); /* 0x1006DEA5: call 0x10023b01 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx + 0x1C); /* 0x1006DEAA: mov ecx, dword ptr [ebx + 0x1c] */
    PUSH32(esp, ebx); /* 0x1006DEAD: push ebx */
    RECOMP_CALL(sub_10072C24); /* 0x1006DEAE: call 0x10072c24 */
    RECOMP_FLAGS_IN();
L_1006DEB3:
    edi = MEM32(ebx + 0x20); /* 0x1006DEB3: mov edi, dword ptr [ebx + 0x20] */
    RECOMP_CALL(sub_10023AF4); /* 0x1006DEB6: call 0x10023af4 */
    RECOMP_FLAGS_IN();
    eax = edi + 0x144; /* 0x1006DEBB: lea eax, [edi + 0x144] */
    ecx = eax; /* 0x1006DEC1: mov ecx, eax */
    MEM32(ebp + (-0x8)) = eax; /* 0x1006DEC3: mov dword ptr [ebp - 8], eax */
    RECOMP_CALL(sub_10023D1E); /* 0x1006DEC6: call 0x10023d1e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x150u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x150u; /* 0x1006DECB: add edi, 0x150 */
    _flag_k = FK_ADD;
    /* cmp esi, MEM32(edi) */ /* 0x1006DED1: cmp esi, dword ptr [edi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006DEE6; /* 0x1006DED3: je 0x1006dee6 */
L_1006DED5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1006DED5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1006DED7: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(edi), _sum = MEM32(edi) + eax; eax = _old; MEM32(edi) = _sum; } /* 0x1006DED8: lock xadd dword ptr [edi], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1006DEDC: inc eax */
    _flag_k = FK_INC;
    /* test eax, eax */ /* 0x1006DEDD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006DED5; /* 0x1006DEDF: je 0x1006ded5 */
L_1006DEE1:
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1006DEE1: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006DED5; /* 0x1006DEE4: je 0x1006ded5 */
L_1006DEE6:
    eax = MEM32(ebp + (-0x8)); /* 0x1006DEE6: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1006DEE9: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = esi; /* 0x1006DEEB: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_10023AF4); /* 0x1006DEED: call 0x10023af4 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx + 0x20); /* 0x1006DEF2: mov ecx, dword ptr [ebx + 0x20] */
    PUSH32(esp, esi); /* 0x1006DEF5: push esi */
    RECOMP_CALL(sub_1007433B); /* 0x1006DEF6: call 0x1007433b */
    RECOMP_FLAGS_IN();
    SET_LO8(eax, MEM8(ebx + 0xB0)); /* 0x1006DEFB: mov al, byte ptr [ebx + 0xb0] */
    edi = MEM32(ebp + 0x8); /* 0x1006DF01: mov edi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x8)) = eax; /* 0x1006DF04: mov dword ptr [ebp - 8], eax */
    /* test edi, edi */ /* 0x1006DF07: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006DF13; /* 0x1006DF09: jne 0x1006df13 */
L_1006DF0B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1006DF0B: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebx + 0x2C; /* 0x1006DF0D: lea eax, [ebx + 0x2c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1006DF10: inc ecx */
    _flag_k = FK_INC;
    { uint32_t _tmp = MEM32(eax); /* 0x1006DF11: xchg dword ptr [eax], ecx */
      MEM32(eax) = ecx;
      ecx = _tmp; }
L_1006DF13:
    esi = MEM32(ebp + (-0x4)); /* 0x1006DF13: mov esi, dword ptr [ebp - 4] */
L_1006DF16:
    /* cmp edi, 2 */ /* 0x1006DF16: cmp edi, 2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006DF20; /* 0x1006DF19: je 0x1006df20 */
L_1006DF1B:
    /* cmp edi, 3 */ /* 0x1006DF1B: cmp edi, 3 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1006DF3A; /* 0x1006DF1E: jne 0x1006df3a */
L_1006DF20:
    eax = MEM32(ebx + 0x1C); /* 0x1006DF20: mov eax, dword ptr [ebx + 0x1c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1006DF23: sub esp, 0x10 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x1006DF26: add eax, 0xc */
    _flag_k = FK_ADD;
    ecx = esp; /* 0x1006DF29: mov ecx, esp */
    PUSH32(esp, eax); /* 0x1006DF2B: push eax */
    RECOMP_CALL(sub_1002762F); /* 0x1006DF2C: call 0x1002762f */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx + 0x1C); /* 0x1006DF31: mov ecx, dword ptr [ebx + 0x1c] */
    PUSH32(esp, ebx); /* 0x1006DF34: push ebx */
    RECOMP_CALL(sub_10072695); /* 0x1006DF35: call 0x10072695 */
    RECOMP_FLAGS_IN();
L_1006DF3A:
    /* test edi, edi */ /* 0x1006DF3A: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006DF47; /* 0x1006DF3C: je 0x1006df47 */
L_1006DF3E:
    edx = MEM32(esi); /* 0x1006DF3E: mov edx, dword ptr [esi] */
    ecx = esi; /* 0x1006DF40: mov ecx, esi */
    PUSH32(esp, 1); /* 0x1006DF42: push 1 */
    RECOMP_ICALL(MEM32(edx + 0x8)); /* 0x1006DF44: call dword ptr [edx + 8] */
    RECOMP_FLAGS_IN();
L_1006DF47:
    SET_LO8(eax, MEM8(ebp + (-0x8))); /* 0x1006DF47: mov al, byte ptr [ebp - 8] */
    edi = POP32_VAL(esp); /* 0x1006DF4A: pop edi */
    esi = POP32_VAL(esp); /* 0x1006DF4B: pop esi */
    ebx = POP32_VAL(esp); /* 0x1006DF4C: pop ebx */
    esp = ebp; /* 0x1006DF4D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1006DF4F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1006DF50: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1006DF53(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006DF53u);

L_1006DF53:
    PUSH32(esp, ebp); /* 0x1006DF53: push ebp */
    ebp = esp; /* 0x1006DF54: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x1006DF56: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1006DF59: push ebx */
    PUSH32(esp, esi); /* 0x1006DF5A: push esi */
    PUSH32(esp, edi); /* 0x1006DF5B: push edi */
    eax = ebp + (-0x2); /* 0x1006DF5C: lea eax, [ebp - 2] */
    MEM8(ebp + (-0x1)) = (uint8_t)(0); /* 0x1006DF5F: mov byte ptr [ebp - 1], 0 */
    PUSH32(esp, eax); /* 0x1006DF63: push eax */
    eax = ebp + (-0x1); /* 0x1006DF64: lea eax, [ebp - 1] */
    MEM8(ebp + (-0x2)) = (uint8_t)(0); /* 0x1006DF67: mov byte ptr [ebp - 2], 0 */
    PUSH32(esp, eax); /* 0x1006DF6B: push eax */
    esi = ecx; /* 0x1006DF6C: mov esi, ecx */
    RECOMP_CALL(sub_1006D643); /* 0x1006DF6E: call 0x1006d643 */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(ebp + (-0x1)), 0 */ /* 0x1006DF73: cmp byte ptr [ebp - 1], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x1))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ebx = eax; /* 0x1006DF77: mov ebx, eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006DF89; /* 0x1006DF79: je 0x1006df89 */
L_1006DF7B:
    PUSH32(esp, 0); /* 0x1006DF7B: push 0 */
    PUSH32(esp, 0); /* 0x1006DF7D: push 0 */
    PUSH32(esp, MEM32(esi + 0x1C)); /* 0x1006DF7F: push dword ptr [esi + 0x1c] */
    ecx = ebx; /* 0x1006DF82: mov ecx, ebx */
    RECOMP_CALL(sub_1006E544); /* 0x1006DF84: call 0x1006e544 */
    RECOMP_FLAGS_IN();
L_1006DF89:
    eax = MEM32(esi + 0xA0); /* 0x1006DF89: mov eax, dword ptr [esi + 0xa0] */
    ecx = MEM32(esi + 0x20); /* 0x1006DF8F: mov ecx, dword ptr [esi + 0x20] */
    MEM32(esi + 0xA0) = 0; /* 0x1006DF92: mov dword ptr [esi + 0xa0], 0 */
    edi = MEM32(esi + 0x9C); /* 0x1006DF9C: mov edi, dword ptr [esi + 0x9c] */
    MEM32(ebp + (-0x8)) = eax; /* 0x1006DFA2: mov dword ptr [ebp - 8], eax */
    MEM32(ebp + (-0x10)) = ecx; /* 0x1006DFA5: mov dword ptr [ebp - 0x10], ecx */
    MEM32(ebp + (-0xC)) = ebx; /* 0x1006DFA8: mov dword ptr [ebp - 0xc], ebx */
    /* test ebx, ebx */ /* 0x1006DFAB: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006DFBD; /* 0x1006DFAD: jne 0x1006dfbd */
L_1006DFAF:
    eax = MEM32(eax); /* 0x1006DFAF: mov eax, dword ptr [eax] */
    ecx = MEM32(ebp + (-0x8)); /* 0x1006DFB1: mov ecx, dword ptr [ebp - 8] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1006DFB4: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0xC)) = eax; /* 0x1006DFB7: mov dword ptr [ebp - 0xc], eax */
    eax = MEM32(ebp + (-0x8)); /* 0x1006DFBA: mov eax, dword ptr [ebp - 8] */
L_1006DFBD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1006DFBD: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi + 0x2C; /* 0x1006DFBF: lea ecx, [esi + 0x2c] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1006DFC2: inc edx */
    _flag_k = FK_INC;
    { uint32_t _tmp = MEM32(ecx); /* 0x1006DFC3: xchg dword ptr [ecx], edx */
      MEM32(ecx) = edx;
      edx = _tmp; }
    edx = MEM32(eax); /* 0x1006DFC5: mov edx, dword ptr [eax] */
    ecx = eax; /* 0x1006DFC7: mov ecx, eax */
    PUSH32(esp, ebx); /* 0x1006DFC9: push ebx */
    RECOMP_ICALL(MEM32(edx + 0x10)); /* 0x1006DFCA: call dword ptr [edx + 0x10] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC)); /* 0x1006DFCD: mov ecx, dword ptr [ebp - 0xc] */
    /* test ecx, ecx */ /* 0x1006DFD0: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006DFF3; /* 0x1006DFD2: jne 0x1006dff3 */
L_1006DFD4:
    ecx = MEM32(ebp + (-0x8)); /* 0x1006DFD4: mov ecx, dword ptr [ebp - 8] */
    PUSH32(esp, 1); /* 0x1006DFD7: push 1 */
    PUSH32(esp, 4); /* 0x1006DFD9: push 4 */
    RECOMP_CALL(sub_100247D7); /* 0x1006DFDB: call 0x100247d7 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x10)); /* 0x1006DFE0: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_CALL(sub_10073948); /* 0x1006DFE3: call 0x10073948 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi); /* 0x1006DFE8: mov eax, dword ptr [edi] */
    ecx = edi; /* 0x1006DFEA: mov ecx, edi */
    PUSH32(esp, 2); /* 0x1006DFEC: push 2 */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1006DFEE: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    goto L_1006DFFD; /* 0x1006DFF1: jmp 0x1006dffd */
L_1006DFF3:
    eax = MEM32(edi); /* 0x1006DFF3: mov eax, dword ptr [edi] */
    PUSH32(esp, 2); /* 0x1006DFF5: push 2 */
    PUSH32(esp, ecx); /* 0x1006DFF7: push ecx */
    ecx = edi; /* 0x1006DFF8: mov ecx, edi */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1006DFFA: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_1006DFFD:
    edi = POP32_VAL(esp); /* 0x1006DFFD: pop edi */
    esi = POP32_VAL(esp); /* 0x1006DFFE: pop esi */
    ebx = POP32_VAL(esp); /* 0x1006DFFF: pop ebx */
    esp = ebp; /* 0x1006E000: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1006E002: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006E003: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006E152(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006E152u);

L_1006E152:
    PUSH32(esp, ebp); /* 0x1006E152: push ebp */
    ebp = esp; /* 0x1006E153: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1006E155: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1006E156: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1006E159: push edi */
    edi = ecx; /* 0x1006E15A: mov edi, ecx */
    /* cmp MEM32(esi), 2 */ /* 0x1006E15C: cmp dword ptr [esi], 2 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(esi + 0x4); /* 0x1006E15F: mov ecx, dword ptr [esi + 4] */
    eax = MEM32(edi + 0x1C); /* 0x1006E162: mov eax, dword ptr [edi + 0x1c] */
    eax = MEM32(eax + 0x100); /* 0x1006E165: mov eax, dword ptr [eax + 0x100] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1006E182; /* 0x1006E16B: jne 0x1006e182 */
L_1006E16D:
    /* cmp eax, MEM32(ecx + 0x100) */ /* 0x1006E16D: cmp eax, dword ptr [ecx + 0x100] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x100));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006E179; /* 0x1006E173: je 0x1006e179 */
L_1006E175:
    PUSH32(esp, 0); /* 0x1006E175: push 0 */
    goto L_1006E18C; /* 0x1006E177: jmp 0x1006e18c */
L_1006E179:
    ecx = eax; /* 0x1006E179: mov ecx, eax */
    RECOMP_CALL(sub_1006D563); /* 0x1006E17B: call 0x1006d563 */
    RECOMP_FLAGS_IN();
    goto L_1006E194; /* 0x1006E180: jmp 0x1006e194 */
L_1006E182:
    /* cmp eax, MEM32(ecx + 0x100) */ /* 0x1006E182: cmp eax, dword ptr [ecx + 0x100] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x100));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006E194; /* 0x1006E188: je 0x1006e194 */
L_1006E18A:
    PUSH32(esp, 1); /* 0x1006E18A: push 1 */
L_1006E18C:
    PUSH32(esp, ecx); /* 0x1006E18C: push ecx */
    ecx = edi; /* 0x1006E18D: mov ecx, edi */
    RECOMP_CALL(sub_1006DCF1); /* 0x1006E18F: call 0x1006dcf1 */
    RECOMP_FLAGS_IN();
L_1006E194:
    eax = MEM32(edi + 0xA0); /* 0x1006E194: mov eax, dword ptr [edi + 0xa0] */
    _flag_a = (uint32_t)(MEM32(eax + 0x6C)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x6C) = MEM32(eax + 0x6C) + 1; /* 0x1006E19A: inc dword ptr [eax + 0x6c] */
    _flag_k = FK_INC;
    eax = MEM32(esi); /* 0x1006E19D: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1006E19F: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1006E1A0: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1006E1B1; /* 0x1006E1A1: je 0x1006e1b1 */
L_1006E1A3:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1006E1A3: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1006E1A4: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1006E1CD; /* 0x1006E1A5: jne 0x1006e1cd */
L_1006E1A7:
    eax = MEM32(esi + 0x8); /* 0x1006E1A7: mov eax, dword ptr [esi + 8] */
    PUSH32(esp, eax); /* 0x1006E1AA: push eax */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x1006E1AB: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1006E1AE: pop ecx */
    goto L_1006E1CD; /* 0x1006E1AF: jmp 0x1006e1cd */
L_1006E1B1:
    ecx = MEM32(esi + 0x8); /* 0x1006E1B1: mov ecx, dword ptr [esi + 8] */
    RECOMP_CALL(sub_1006F802); /* 0x1006E1B4: call 0x1006f802 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x4); /* 0x1006E1B9: mov eax, dword ptr [esi + 4] */
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x1006E1BC: push dword ptr [esi + 8] */
    ecx = MEM32(eax + 0x100); /* 0x1006E1BF: mov ecx, dword ptr [eax + 0x100] */
    ecx = MEM32(ecx + 0x4); /* 0x1006E1C5: mov ecx, dword ptr [ecx + 4] */
    RECOMP_CALL(sub_10073DAC); /* 0x1006E1C8: call 0x10073dac */
    RECOMP_FLAGS_IN();
L_1006E1CD:
    ecx = edi + 0x4; /* 0x1006E1CD: lea ecx, [edi + 4] */
    RECOMP_CALL(sub_10033D38); /* 0x1006E1D0: call 0x10033d38 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x1006E1D5: pop edi */
    esi = POP32_VAL(esp); /* 0x1006E1D6: pop esi */
    ebp = POP32_VAL(esp); /* 0x1006E1D7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1006E1D8: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1006E42F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006E42Fu);

L_1006E42F:
    PUSH32(esp, ebp); /* 0x1006E42F: push ebp */
    ebp = esp; /* 0x1006E430: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1006E432: push ecx */
    PUSH32(esp, ecx); /* 0x1006E433: push ecx */
    PUSH32(esp, esi); /* 0x1006E434: push esi */
    esi = ecx; /* 0x1006E435: mov esi, ecx */
    /* cmp MEM8(esi + 0xB2), 0 */ /* 0x1006E437: cmp byte ptr [esi + 0xb2], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xB2)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006E479; /* 0x1006E43E: je 0x1006e479 */
L_1006E440:
    PUSH32(esp, ecx); /* 0x1006E440: push ecx */
    ecx = MEM32(esi + 0xA0); /* 0x1006E441: mov ecx, dword ptr [esi + 0xa0] */
    eax = ebp + (-0x8); /* 0x1006E447: lea eax, [ebp - 8] */
    PUSH32(esp, 0xFu); /* 0x1006E44A: push 0xf */
    PUSH32(esp, eax); /* 0x1006E44C: push eax */
    RECOMP_CALL(sub_1007A938); /* 0x1006E44D: call 0x1007a938 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1006E452: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006E45F; /* 0x1006E454: je 0x1006e45f */
L_1006E456:
    goto L_1006E472; /* 0x1006E456: jmp 0x1006e472 */
L_1006E458:
    eax = MEM32(esi); /* 0x1006E458: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x1006E45A: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0x20)); /* 0x1006E45C: call dword ptr [eax + 0x20] */
    RECOMP_FLAGS_IN();
L_1006E45F:
    eax = MEM32(esi + 0xA0); /* 0x1006E45F: mov eax, dword ptr [esi + 0xa0] */
    PUSH32(esp, esi); /* 0x1006E465: push esi */
    ecx = MEM32(eax + 0x58); /* 0x1006E466: mov ecx, dword ptr [eax + 0x58] */
    eax = MEM32(ecx); /* 0x1006E469: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x1006E46B: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1006E46E: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006E458; /* 0x1006E470: je 0x1006e458 */
L_1006E472:
    MEM8(esi + 0xB2) = (uint8_t)(0); /* 0x1006E472: mov byte ptr [esi + 0xb2], 0 */
L_1006E479:
    esi = POP32_VAL(esp); /* 0x1006E479: pop esi */
    esp = ebp; /* 0x1006E47A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1006E47C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006E47D: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006E47E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006E47Eu);

L_1006E47E:
    PUSH32(esp, esi); /* 0x1006E47E: push esi */
    esi = ecx; /* 0x1006E47F: mov esi, ecx */
    ecx = esi + 0x4; /* 0x1006E481: lea ecx, [esi + 4] */
    RECOMP_CALL(sub_10069C5F); /* 0x1006E484: call 0x10069c5f */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x1006E489: push 0 */
    PUSH32(esp, 0); /* 0x1006E48B: push 0 */
    ecx = esi; /* 0x1006E48D: mov ecx, esi */
    RECOMP_CALL(sub_1006DCF1); /* 0x1006E48F: call 0x1006dcf1 */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x1006E494: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006E495: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006E496(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006E496u);

L_1006E496:
    PUSH32(esp, ebp); /* 0x1006E496: push ebp */
    ebp = esp; /* 0x1006E497: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x1006E499: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1006E49C: push ecx */
    PUSH32(esp, ecx); /* 0x1006E49D: push ecx */
    PUSH32(esp, esi); /* 0x1006E49E: push esi */
    PUSH32(esp, edi); /* 0x1006E49F: push edi */
    edi = ecx; /* 0x1006E4A0: mov edi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1006E4A2: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi + 0xA0), esi */ /* 0x1006E4A4: cmp dword ptr [edi + 0xa0], esi */
    _flag_a = (uint32_t)(MEM32(edi + 0xA0)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006E4DF; /* 0x1006E4AA: je 0x1006e4df */
L_1006E4AC:
    PUSH32(esp, ecx); /* 0x1006E4AC: push ecx */
    PUSH32(esp, 0xFu); /* 0x1006E4AD: push 0xf */
    eax = esp + 0x10; /* 0x1006E4AF: lea eax, [esp + 0x10] */
    MEM8(edi + 0xB0) = (uint8_t)(1); /* 0x1006E4B3: mov byte ptr [edi + 0xb0], 1 */
    ecx = MEM32(edi + 0xA0); /* 0x1006E4BA: mov ecx, dword ptr [edi + 0xa0] */
    PUSH32(esp, eax); /* 0x1006E4C0: push eax */
    MEM32(esp + 0x14) = esi; /* 0x1006E4C1: mov dword ptr [esp + 0x14], esi */
    RECOMP_CALL(sub_1007A938); /* 0x1006E4C5: call 0x1007a938 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1006E4CA: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006E50A; /* 0x1006E4CC: je 0x1006e50a */
L_1006E4CE:
    ecx = MEM32(esp + 0xC); /* 0x1006E4CE: mov ecx, dword ptr [esp + 0xc] */
    PUSH32(esp, esi); /* 0x1006E4D2: push esi */
    PUSH32(esp, esi); /* 0x1006E4D3: push esi */
    PUSH32(esp, MEM32(esp + 0x10)); /* 0x1006E4D4: push dword ptr [esp + 0x10] */
    RECOMP_CALL(sub_1007A78F); /* 0x1006E4D8: call 0x1007a78f */
    RECOMP_FLAGS_IN();
    goto L_1006E50A; /* 0x1006E4DD: jmp 0x1006e50a */
L_1006E4DF:
    esi = edi + 0x4; /* 0x1006E4DF: lea esi, [edi + 4] */
    RECOMP_CALL(sub_10023AF4); /* 0x1006E4E2: call 0x10023af4 */
    RECOMP_FLAGS_IN();
    /* cmp eax, esi */ /* 0x1006E4E7: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1006E4F4; /* 0x1006E4E9: jne 0x1006e4f4 */
L_1006E4EB:
    MEM8(edi + 0xB0) = (uint8_t)(1); /* 0x1006E4EB: mov byte ptr [edi + 0xb0], 1 */
    goto L_1006E50A; /* 0x1006E4F2: jmp 0x1006e50a */
L_1006E4F4:
    ecx = edi; /* 0x1006E4F4: mov ecx, edi */
    RECOMP_CALL(sub_1006DCC4); /* 0x1006E4F6: call 0x1006dcc4 */
    RECOMP_FLAGS_IN();
    ecx = edi; /* 0x1006E4FB: mov ecx, edi */
    RECOMP_CALL(sub_1006E47E); /* 0x1006E4FD: call 0x1006e47e */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi + 0x20); /* 0x1006E502: mov ecx, dword ptr [edi + 0x20] */
    RECOMP_CALL(sub_10074683); /* 0x1006E505: call 0x10074683 */
    RECOMP_FLAGS_IN();
L_1006E50A:
    edi = POP32_VAL(esp); /* 0x1006E50A: pop edi */
    esi = POP32_VAL(esp); /* 0x1006E50B: pop esi */
    esp = ebp; /* 0x1006E50C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1006E50E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006E50F: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006E510(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006E510u);

L_1006E510:
    PUSH32(esp, 4); /* 0x1006E510: push 4 */
    eax = 0x100DB258u; /* 0x1006E512: mov eax, 0x100db258 */
    RECOMP_CALL(sub_100149A4); /* 0x1006E517: call 0x100149a4 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x10)) = ecx; /* 0x1006E51C: mov dword ptr [ebp - 0x10], ecx */
    esi = ecx + 0x4; /* 0x1006E51F: lea esi, [ecx + 4] */
    MEM32(ecx) = 0x10032584u; /* 0x1006E522: mov dword ptr [ecx], 0x10032584 */
    MEM32(esi) = 0x1006788Cu; /* 0x1006E528: mov dword ptr [esi], 0x1006788c */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1006E52E: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1006E47E); /* 0x1006E532: call 0x1006e47e */
    RECOMP_FLAGS_IN();
    ecx = esi; /* 0x1006E537: mov ecx, esi */
    RECOMP_CALL(sub_10069B4A); /* 0x1006E539: call 0x10069b4a */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_100149D7); /* 0x1006E53E: call 0x100149d7 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006E543: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006E544(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006E544u);

L_1006E544:
    PUSH32(esp, ebp); /* 0x1006E544: push ebp */
    ebp = esp; /* 0x1006E545: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1006E547: mov eax, dword ptr [ebp + 8] */
    edx = ecx; /* 0x1006E54A: mov edx, ecx */
    PUSH32(esp, esi); /* 0x1006E54C: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1006E54D: mov esi, dword ptr [ebp + 0xc] */
    MEM8(edx + 0xEC) = (uint8_t)(0); /* 0x1006E550: mov byte ptr [edx + 0xec], 0 */
    MEM32(edx + 0x1C) = eax; /* 0x1006E557: mov dword ptr [edx + 0x1c], eax */
    /* test esi, esi */ /* 0x1006E55A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006E576; /* 0x1006E55C: jne 0x1006e576 */
L_1006E55E:
    eax = MEM32(eax + 0x100); /* 0x1006E55E: mov eax, dword ptr [eax + 0x100] */
    /* test MEM8(eax + 0x30), 4 */ /* 0x1006E564: test byte ptr [eax + 0x30], 4 */
    _flag_a = (uint32_t)(MEM8(eax + 0x30)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006E5A8; /* 0x1006E568: jne 0x1006e5a8 */
L_1006E56A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1006E56A: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x14u; /* 0x1006E56C: add eax, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1006E56F: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + ecx; ecx = _old; MEM32(eax) = _sum; } /* 0x1006E570: lock xadd dword ptr [eax], ecx */
    _flag_k = FK_ADD;
    goto L_1006E5A8; /* 0x1006E574: jmp 0x1006e5a8 */
L_1006E576:
    /* cmp MEM8(ebp + 0x10), 0 */ /* 0x1006E576: cmp byte ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006E59B; /* 0x1006E57A: je 0x1006e59b */
L_1006E57C:
    eax = MEM32(eax + 0x100); /* 0x1006E57C: mov eax, dword ptr [eax + 0x100] */
    /* test MEM8(eax + 0x30), 4 */ /* 0x1006E582: test byte ptr [eax + 0x30], 4 */
    _flag_a = (uint32_t)(MEM8(eax + 0x30)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006E592; /* 0x1006E586: jne 0x1006e592 */
L_1006E588:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1006E588: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x14u; /* 0x1006E58A: add eax, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1006E58D: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + ecx; ecx = _old; MEM32(eax) = _sum; } /* 0x1006E58E: lock xadd dword ptr [eax], ecx */
    _flag_k = FK_ADD;
L_1006E592:
    MEM8(edx + 0xB1) = (uint8_t)(1); /* 0x1006E592: mov byte ptr [edx + 0xb1], 1 */
    goto L_1006E5A2; /* 0x1006E599: jmp 0x1006e5a2 */
L_1006E59B:
    MEM8(edx + 0xB1) = (uint8_t)(0); /* 0x1006E59B: mov byte ptr [edx + 0xb1], 0 */
L_1006E5A2:
    MEM32(edx + 0xA8) = esi; /* 0x1006E5A2: mov dword ptr [edx + 0xa8], esi */
L_1006E5A8:
    esi = POP32_VAL(esp); /* 0x1006E5A8: pop esi */
    ebp = POP32_VAL(esp); /* 0x1006E5A9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1006E5AA: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1006E5BC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006E5BCu);

L_1006E5BC:
    PUSH32(esp, ebp); /* 0x1006E5BC: push ebp */
    ebp = esp; /* 0x1006E5BD: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1006E5BF: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1006E5C2: sub esp, 0xc */
    _flag_k = FK_CMP;
    /* test eax, eax */ /* 0x1006E5C5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006E5D5; /* 0x1006E5C7: je 0x1006e5d5 */
L_1006E5C9:
    MEM32(ecx + 0x9C) = eax; /* 0x1006E5C9: mov dword ptr [ecx + 0x9c], eax */
    esp = ebp; /* 0x1006E5CF: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1006E5D1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1006E5D2: ret 4 */
L_1006E5D5:
    eax = ebp + 0x8; /* 0x1006E5D5: lea eax, [ebp + 8] */
    MEM32(ebp + 0x8) = 0x1006E600u; /* 0x1006E5D8: mov dword ptr [ebp + 8], 0x1006e600 */
    PUSH32(esp, eax); /* 0x1006E5DF: push eax */
    ecx = ebp + (-0xC); /* 0x1006E5E0: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1009DD30); /* 0x1006E5E3: call 0x1009dd30 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x100DCEE8u); /* 0x1006E5E8: push 0x100dcee8 */
    eax = ebp + (-0xC); /* 0x1006E5ED: lea eax, [ebp - 0xc] */
    MEM32(ebp + (-0xC)) = 0x1006754Cu; /* 0x1006E5F0: mov dword ptr [ebp - 0xc], 0x1006754c */
    PUSH32(esp, eax); /* 0x1006E5F7: push eax */
    RECOMP_CALL(sub_100192EB); /* 0x1006E5F8: call 0x100192eb */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1006E5FDu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1006E600(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006E600u);

L_1006E600:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) goto L_1006E656; /* 0x1006E600: jo 0x1006e656 */
L_1006E602:
    PUSH32(esp, 0x64616572u); /* 0x1006E602: push 0x64616572 */
    PUSH32(esp, eax); /* 0x1006E607: push eax */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_B, _cf)) goto L_1006E679; /* 0x1006E608: jb 0x1006e679 */
L_1006E60A:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_S, _cf)) goto L_1006E685; /* 0x1006E60A: js 0x1006e685 */
L_1006E60C:
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + HI8(ecx)); /* 0x1006E60C: add byte ptr [edx], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    eax = 0x100DB2A8u; /* 0x1006E60F: mov eax, 0x100db2a8 */
    RECOMP_CALL(sub_100149A4); /* 0x1006E614: call 0x100149a4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1006E619: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ecx + 0x9C); /* 0x1006E61D: mov esi, dword ptr [ecx + 0x9c] */
    /* cmp MEM32(esi + 0x5C), 0 */ /* 0x1006E623: cmp dword ptr [esi + 0x5c], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x5C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1006E633; /* 0x1006E627: jne 0x1006e633 */
L_1006E629:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ecx, 0); /* 0x1006E629: xor cl, cl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_CALL(sub_100749B0); /* 0x1006E62B: call 0x100749b0 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x5C) = eax; /* 0x1006E630: mov dword ptr [esi + 0x5c], eax */
L_1006E633:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1006E633: push dword ptr [ebp + 8] */
    ecx = MEM32(esi + 0x5C); /* 0x1006E636: mov ecx, dword ptr [esi + 0x5c] */
    RECOMP_CALL(sub_10077A4C); /* 0x1006E639: call 0x10077a4c */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_100149D7); /* 0x1006E63E: call 0x100149d7 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1006E643: ret 4 */
L_1006E656:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ecx, 0); /* 0x1006E656: xor cl, cl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_CALL(sub_100749B0); /* 0x1006E658: call 0x100749b0 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x5C) = eax; /* 0x1006E65D: mov dword ptr [esi + 0x5c], eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1006E660: push dword ptr [ebp + 8] */
    ecx = MEM32(esi + 0x5C); /* 0x1006E663: mov ecx, dword ptr [esi + 0x5c] */
    RECOMP_CALL(sub_10077AA6); /* 0x1006E666: call 0x10077aa6 */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x1006E66B: pop esi */
    ebp = POP32_VAL(esp); /* 0x1006E66C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1006E66D: ret 4 */
L_1006E679:
    edi = ecx; /* 0x1006E679: mov edi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1006E67B: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x1006E67D: push 4 */
    edx = POP32_VAL(esp); /* 0x1006E67F: pop edx */
    eax = MEM32(edi + 0x8); /* 0x1006E680: mov eax, dword ptr [edi + 8] */
    ebx = eax * 2 + 0x2; /* 0x1006E683: lea ebx, [eax*2 + 2] */
    goto L_1006E68A; /* falls through past a gap */
L_1006E685:
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(1);
    ebp = ebp + 1; /* 0x1006E685: inc ebp */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + MEM8(eax)); /* 0x1006E686: add al, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1006E688: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_1006E68A:
    eax = ebx; /* 0x1006E68A: mov eax, ebx */
    MEM32(ebp + (-0x18)) = ebx; /* 0x1006E68C: mov dword ptr [ebp - 0x18], ebx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x1006E68F: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1006E691: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1006E694: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1006E696: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1006E698: push ecx */
    RECOMP_CALL(sub_10011683); /* 0x1006E699: call 0x10011683 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x10)) = eax; /* 0x1006E69E: mov dword ptr [ebp - 0x10], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1006E6A1: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(edi + 0xC); /* 0x1006E6A3: mov eax, dword ptr [edi + 0xc] */
    MEM32(ebp + (-0x20)) = eax; /* 0x1006E6A6: mov dword ptr [ebp - 0x20], eax */
    eax = ebx; /* 0x1006E6A9: mov eax, ebx */
    PUSH32(esp, 8); /* 0x1006E6AB: push 8 */
    esi = POP32_VAL(esp); /* 0x1006E6AD: pop esi */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(esi); /* 0x1006E6AE: mul esi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1006E6B0: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1006E6B3: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1006E6B5: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1006E6B7: push ecx */
    RECOMP_CALL(sub_10011683); /* 0x1006E6B8: call 0x10011683 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x14)) = eax; /* 0x1006E6BD: mov dword ptr [ebp - 0x14], eax */
    ecx = POP32_VAL(esp); /* 0x1006E6C0: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1006E6C1: pop ecx */
    /* test eax, eax */ /* 0x1006E6C2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006E6DD; /* 0x1006E6C4: je 0x1006e6dd */
L_1006E6C6:
    edx = ebx + (-0x1); /* 0x1006E6C6: lea edx, [ebx - 1] */
    ecx = eax; /* 0x1006E6C9: mov ecx, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1006E6CB: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edx, edx */ /* 0x1006E6CD: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1006E6E2; /* 0x1006E6CF: js 0x1006e6e2 */
L_1006E6D1:
    MEM32(ecx) = ebx; /* 0x1006E6D1: mov dword ptr [ecx], ebx */
    MEM32(ecx + 0x4) = ebx; /* 0x1006E6D3: mov dword ptr [ecx + 4], ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1006E6D6: add ecx, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1006E6D8: dec edx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_1006E6E2; /* 0x1006E6D9: js 0x1006e6e2 */
L_1006E6DB:
    RECOMP_BACKEDGE();
    goto L_1006E6D1; /* 0x1006E6DB: jmp 0x1006e6d1 */
L_1006E6DD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1006E6DD: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = ebx; /* 0x1006E6DF: mov dword ptr [ebp - 0x14], ebx */
L_1006E6E2:
    eax = MEM32(edi + 0x10); /* 0x1006E6E2: mov eax, dword ptr [edi + 0x10] */
    esi = MEM32(edi + 0x14); /* 0x1006E6E5: mov esi, dword ptr [edi + 0x14] */
    MEM32(ebp + (-0x24)) = eax; /* 0x1006E6E8: mov dword ptr [ebp - 0x24], eax */
    MEM32(ebp + (-0x1C)) = esi; /* 0x1006E6EB: mov dword ptr [ebp - 0x1c], esi */
    RECOMP_CALL(sub_10023AF4); /* 0x1006E6EE: call 0x10023af4 */
    RECOMP_FLAGS_IN();
    ecx = esi; /* 0x1006E6F3: mov ecx, esi */
    RECOMP_CALL(sub_10023D1E); /* 0x1006E6F5: call 0x10023d1e */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x4); /* 0x1006E6FA: mov eax, dword ptr [edi + 4] */
    edx = ebx; /* 0x1006E6FD: mov edx, ebx */
    eax = MEM32(edi); /* 0x1006E6FF: mov eax, dword ptr [edi] */
    ecx = MEM32(edi + 0x4); /* 0x1006E701: mov ecx, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(edi); /* 0x1006E704: sub ecx, dword ptr [edi] */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xC)) = eax; /* 0x1006E706: mov dword ptr [ebp - 0xc], eax */
    MEM32(ebp + (-0x4)) = ecx; /* 0x1006E709: mov dword ptr [ebp - 4], ecx */
    MEM32(ebp + (-0x8)) = edx; /* 0x1006E70C: mov dword ptr [ebp - 8], edx */
    /* test ecx, ecx */ /* 0x1006E70F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1006E758; /* 0x1006E711: jle 0x1006e758 */
L_1006E713:
    ebx = MEM32(ebp + (-0x14)); /* 0x1006E713: mov ebx, dword ptr [ebp - 0x14] */
L_1006E716:
    esi = MEM32(ebp + (-0x8)); /* 0x1006E716: mov esi, dword ptr [ebp - 8] */
    ecx = eax; /* 0x1006E719: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0x8));
    ecx = ecx & MEM32(edi + 0x8); /* 0x1006E71B: and ecx, dword ptr [edi + 8] */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(edi + 0xC); /* 0x1006E71E: mov eax, dword ptr [edi + 0xc] */
    eax = MEM32(eax + ecx * 4); /* 0x1006E721: mov eax, dword ptr [eax + ecx*4] */
    ecx = MEM32(ebp + (-0x10)); /* 0x1006E724: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(ecx + edx * 4) = eax; /* 0x1006E727: mov dword ptr [ecx + edx*4], eax */
    edx = MEM32(ebp + (-0xC)); /* 0x1006E72A: mov edx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(edi + 0x8));
    edx = edx & MEM32(edi + 0x8); /* 0x1006E72D: and edx, dword ptr [edi + 8] */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(edi + 0x10); /* 0x1006E730: mov ecx, dword ptr [edi + 0x10] */
    eax = MEM32(ecx + edx * 8); /* 0x1006E733: mov eax, dword ptr [ecx + edx*8] */
    MEM32(ebx + esi * 8) = eax; /* 0x1006E736: mov dword ptr [ebx + esi*8], eax */
    eax = MEM32(ecx + edx * 8 + 0x4); /* 0x1006E739: mov eax, dword ptr [ecx + edx*8 + 4] */
    edx = esi; /* 0x1006E73D: mov edx, esi */
    MEM32(ebx + edx * 8 + 0x4) = eax; /* 0x1006E73F: mov dword ptr [ebx + edx*8 + 4], eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1006E743: inc edx */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0xC)); /* 0x1006E744: mov eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1006E747: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x8)) = edx; /* 0x1006E748: mov dword ptr [ebp - 8], edx */
    MEM32(ebp + (-0xC)) = eax; /* 0x1006E74B: mov dword ptr [ebp - 0xc], eax */
    /* cmp edx, MEM32(ebp + (-0x4)) */ /* 0x1006E74E: cmp edx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1006E716; /* 0x1006E751: jl 0x1006e716 */
L_1006E753:
    ecx = MEM32(ebp + (-0x4)); /* 0x1006E753: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1006E756: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1006E758:
    esi = MEM32(ebp + (-0x18)); /* 0x1006E758: mov esi, dword ptr [ebp - 0x18] */
    eax = esi; /* 0x1006E75B: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1006E75D: sub eax, ecx */
    _flag_k = FK_CMP;
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1006E75F: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1006E75F: shl eax, 2 */
    PUSH32(esp, eax); /* 0x1006E762: push eax */
    eax = MEM32(ebp + (-0x10)); /* 0x1006E763: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, ebx); /* 0x1006E766: push ebx */
    eax = eax + ecx * 4; /* 0x1006E767: lea eax, [eax + ecx*4] */
    PUSH32(esp, eax); /* 0x1006E76A: push eax */
    RECOMP_CALL(sub_10011533); /* 0x1006E76B: call 0x10011533 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x10)); /* 0x1006E770: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1006E773: add esp, 0xc */
    _flag_k = FK_ADD;
    edx = MEM32(ebp + (-0x4)); /* 0x1006E776: mov edx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1006E779: dec esi */
    _flag_k = FK_DEC;
    MEM32(edi + 0xC) = eax; /* 0x1006E77A: mov dword ptr [edi + 0xc], eax */
    eax = MEM32(ebp + (-0x14)); /* 0x1006E77D: mov eax, dword ptr [ebp - 0x14] */
    MEM32(edi + 0x10) = eax; /* 0x1006E780: mov dword ptr [edi + 0x10], eax */
    eax = MEM32(ebp + 0xC); /* 0x1006E783: mov eax, dword ptr [ebp + 0xc] */
    MEM32(edi) = ebx; /* 0x1006E786: mov dword ptr [edi], ebx */
    MEM32(edi + 0x8) = esi; /* 0x1006E788: mov dword ptr [edi + 8], esi */
    /* test eax, eax */ /* 0x1006E78B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006E7A4; /* 0x1006E78D: je 0x1006e7a4 */
L_1006E78F:
    ecx = MEM32(edi + 0x10); /* 0x1006E78F: mov ecx, dword ptr [edi + 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    esi = esi & edx; /* 0x1006E792: and esi, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ebp + 0x8) | 1)); _flag_b = (uint32_t)((MEM32(ebp + 0x8) | 1));
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) | 1; /* 0x1006E794: or dword ptr [ebp + 8], 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx + esi * 8) = eax; /* 0x1006E798: mov dword ptr [ecx + esi*8], eax */
    eax = MEM32(ebp + 0x10); /* 0x1006E79B: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ecx + esi * 8 + 0x4) = eax; /* 0x1006E79E: mov dword ptr [ecx + esi*8 + 4], eax */
    goto L_1006E7AA; /* 0x1006E7A2: jmp 0x1006e7aa */
L_1006E7A4:
    eax = MEM32(ebp + 0x8); /* 0x1006E7A4: mov eax, dword ptr [ebp + 8] */
    MEM32(ebp + 0x8) = eax; /* 0x1006E7A7: mov dword ptr [ebp + 8], eax */
L_1006E7AA:
    eax = MEM32(edi + 0xC); /* 0x1006E7AA: mov eax, dword ptr [edi + 0xc] */
    ecx = edx; /* 0x1006E7AD: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0x8));
    ecx = ecx & MEM32(edi + 0x8); /* 0x1006E7AF: and ecx, dword ptr [edi + 8] */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ebp + 0x8); /* 0x1006E7B2: mov esi, dword ptr [ebp + 8] */
    MEM32(eax + ecx * 4) = esi; /* 0x1006E7B5: mov dword ptr [eax + ecx*4], esi */
    eax = edx + 0x1; /* 0x1006E7B8: lea eax, [edx + 1] */
    esi = MEM32(ebp + (-0x1C)); /* 0x1006E7BB: mov esi, dword ptr [ebp - 0x1c] */
    MEM32(edi + 0x4) = eax; /* 0x1006E7BE: mov dword ptr [edi + 4], eax */
    MEM32(esi) = ebx; /* 0x1006E7C1: mov dword ptr [esi], ebx */
    RECOMP_CALL(sub_10023AF4); /* 0x1006E7C3: call 0x10023af4 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x1006E7C8: push dword ptr [ebp - 0x20] */
    RECOMP_CALL(sub_1000ECE0); /* 0x1006E7CB: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x1006E7D0: push dword ptr [ebp - 0x24] */
    RECOMP_CALL(sub_1000ECE0); /* 0x1006E7D3: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1006E7D8: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1006E7D9: pop ecx */
    edi = POP32_VAL(esp); /* 0x1006E7DA: pop edi */
    esi = POP32_VAL(esp); /* 0x1006E7DB: pop esi */
    ebx = POP32_VAL(esp); /* 0x1006E7DC: pop ebx */
    esp = ebp; /* 0x1006E7DD: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1006E7DF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1006E7E0: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1006E670(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006E670u);

L_1006E670:
    PUSH32(esp, ebp); /* 0x1006E670: push ebp */
    ebp = esp; /* 0x1006E671: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x24u; /* 0x1006E673: sub esp, 0x24 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1006E676: push ebx */
    PUSH32(esp, esi); /* 0x1006E677: push esi */
    PUSH32(esp, edi); /* 0x1006E678: push edi */
    edi = ecx; /* 0x1006E679: mov edi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1006E67B: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x1006E67D: push 4 */
    edx = POP32_VAL(esp); /* 0x1006E67F: pop edx */
    eax = MEM32(edi + 0x8); /* 0x1006E680: mov eax, dword ptr [edi + 8] */
    ebx = eax * 2 + 0x2; /* 0x1006E683: lea ebx, [eax*2 + 2] */
    eax = ebx; /* 0x1006E68A: mov eax, ebx */
    MEM32(ebp + (-0x18)) = ebx; /* 0x1006E68C: mov dword ptr [ebp - 0x18], ebx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x1006E68F: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1006E691: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1006E694: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1006E696: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1006E698: push ecx */
    RECOMP_CALL(sub_10011683); /* 0x1006E699: call 0x10011683 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x10)) = eax; /* 0x1006E69E: mov dword ptr [ebp - 0x10], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1006E6A1: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(edi + 0xC); /* 0x1006E6A3: mov eax, dword ptr [edi + 0xc] */
    MEM32(ebp + (-0x20)) = eax; /* 0x1006E6A6: mov dword ptr [ebp - 0x20], eax */
    eax = ebx; /* 0x1006E6A9: mov eax, ebx */
    PUSH32(esp, 8); /* 0x1006E6AB: push 8 */
    esi = POP32_VAL(esp); /* 0x1006E6AD: pop esi */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(esi); /* 0x1006E6AE: mul esi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1006E6B0: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1006E6B3: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1006E6B5: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1006E6B7: push ecx */
    RECOMP_CALL(sub_10011683); /* 0x1006E6B8: call 0x10011683 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x14)) = eax; /* 0x1006E6BD: mov dword ptr [ebp - 0x14], eax */
    ecx = POP32_VAL(esp); /* 0x1006E6C0: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1006E6C1: pop ecx */
    /* test eax, eax */ /* 0x1006E6C2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006E6DD; /* 0x1006E6C4: je 0x1006e6dd */
L_1006E6C6:
    edx = ebx + (-0x1); /* 0x1006E6C6: lea edx, [ebx - 1] */
    ecx = eax; /* 0x1006E6C9: mov ecx, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1006E6CB: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edx, edx */ /* 0x1006E6CD: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1006E6E2; /* 0x1006E6CF: js 0x1006e6e2 */
L_1006E6D1:
    MEM32(ecx) = ebx; /* 0x1006E6D1: mov dword ptr [ecx], ebx */
    MEM32(ecx + 0x4) = ebx; /* 0x1006E6D3: mov dword ptr [ecx + 4], ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1006E6D6: add ecx, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1006E6D8: dec edx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_1006E6E2; /* 0x1006E6D9: js 0x1006e6e2 */
L_1006E6DB:
    RECOMP_BACKEDGE();
    goto L_1006E6D1; /* 0x1006E6DB: jmp 0x1006e6d1 */
L_1006E6DD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1006E6DD: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = ebx; /* 0x1006E6DF: mov dword ptr [ebp - 0x14], ebx */
L_1006E6E2:
    eax = MEM32(edi + 0x10); /* 0x1006E6E2: mov eax, dword ptr [edi + 0x10] */
    esi = MEM32(edi + 0x14); /* 0x1006E6E5: mov esi, dword ptr [edi + 0x14] */
    MEM32(ebp + (-0x24)) = eax; /* 0x1006E6E8: mov dword ptr [ebp - 0x24], eax */
    MEM32(ebp + (-0x1C)) = esi; /* 0x1006E6EB: mov dword ptr [ebp - 0x1c], esi */
    RECOMP_CALL(sub_10023AF4); /* 0x1006E6EE: call 0x10023af4 */
    RECOMP_FLAGS_IN();
    ecx = esi; /* 0x1006E6F3: mov ecx, esi */
    RECOMP_CALL(sub_10023D1E); /* 0x1006E6F5: call 0x10023d1e */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x4); /* 0x1006E6FA: mov eax, dword ptr [edi + 4] */
    edx = ebx; /* 0x1006E6FD: mov edx, ebx */
    eax = MEM32(edi); /* 0x1006E6FF: mov eax, dword ptr [edi] */
    ecx = MEM32(edi + 0x4); /* 0x1006E701: mov ecx, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(edi); /* 0x1006E704: sub ecx, dword ptr [edi] */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xC)) = eax; /* 0x1006E706: mov dword ptr [ebp - 0xc], eax */
    MEM32(ebp + (-0x4)) = ecx; /* 0x1006E709: mov dword ptr [ebp - 4], ecx */
    MEM32(ebp + (-0x8)) = edx; /* 0x1006E70C: mov dword ptr [ebp - 8], edx */
    /* test ecx, ecx */ /* 0x1006E70F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1006E758; /* 0x1006E711: jle 0x1006e758 */
L_1006E713:
    ebx = MEM32(ebp + (-0x14)); /* 0x1006E713: mov ebx, dword ptr [ebp - 0x14] */
L_1006E716:
    esi = MEM32(ebp + (-0x8)); /* 0x1006E716: mov esi, dword ptr [ebp - 8] */
    ecx = eax; /* 0x1006E719: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0x8));
    ecx = ecx & MEM32(edi + 0x8); /* 0x1006E71B: and ecx, dword ptr [edi + 8] */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(edi + 0xC); /* 0x1006E71E: mov eax, dword ptr [edi + 0xc] */
    eax = MEM32(eax + ecx * 4); /* 0x1006E721: mov eax, dword ptr [eax + ecx*4] */
    ecx = MEM32(ebp + (-0x10)); /* 0x1006E724: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(ecx + edx * 4) = eax; /* 0x1006E727: mov dword ptr [ecx + edx*4], eax */
    edx = MEM32(ebp + (-0xC)); /* 0x1006E72A: mov edx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(edi + 0x8));
    edx = edx & MEM32(edi + 0x8); /* 0x1006E72D: and edx, dword ptr [edi + 8] */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(edi + 0x10); /* 0x1006E730: mov ecx, dword ptr [edi + 0x10] */
    eax = MEM32(ecx + edx * 8); /* 0x1006E733: mov eax, dword ptr [ecx + edx*8] */
    MEM32(ebx + esi * 8) = eax; /* 0x1006E736: mov dword ptr [ebx + esi*8], eax */
    eax = MEM32(ecx + edx * 8 + 0x4); /* 0x1006E739: mov eax, dword ptr [ecx + edx*8 + 4] */
    edx = esi; /* 0x1006E73D: mov edx, esi */
    MEM32(ebx + edx * 8 + 0x4) = eax; /* 0x1006E73F: mov dword ptr [ebx + edx*8 + 4], eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1006E743: inc edx */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0xC)); /* 0x1006E744: mov eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1006E747: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x8)) = edx; /* 0x1006E748: mov dword ptr [ebp - 8], edx */
    MEM32(ebp + (-0xC)) = eax; /* 0x1006E74B: mov dword ptr [ebp - 0xc], eax */
    /* cmp edx, MEM32(ebp + (-0x4)) */ /* 0x1006E74E: cmp edx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1006E716; /* 0x1006E751: jl 0x1006e716 */
L_1006E753:
    ecx = MEM32(ebp + (-0x4)); /* 0x1006E753: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1006E756: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1006E758:
    esi = MEM32(ebp + (-0x18)); /* 0x1006E758: mov esi, dword ptr [ebp - 0x18] */
    eax = esi; /* 0x1006E75B: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1006E75D: sub eax, ecx */
    _flag_k = FK_CMP;
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1006E75F: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1006E75F: shl eax, 2 */
    PUSH32(esp, eax); /* 0x1006E762: push eax */
    eax = MEM32(ebp + (-0x10)); /* 0x1006E763: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, ebx); /* 0x1006E766: push ebx */
    eax = eax + ecx * 4; /* 0x1006E767: lea eax, [eax + ecx*4] */
    PUSH32(esp, eax); /* 0x1006E76A: push eax */
    RECOMP_CALL(sub_10011533); /* 0x1006E76B: call 0x10011533 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x10)); /* 0x1006E770: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1006E773: add esp, 0xc */
    _flag_k = FK_ADD;
    edx = MEM32(ebp + (-0x4)); /* 0x1006E776: mov edx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1006E779: dec esi */
    _flag_k = FK_DEC;
    MEM32(edi + 0xC) = eax; /* 0x1006E77A: mov dword ptr [edi + 0xc], eax */
    eax = MEM32(ebp + (-0x14)); /* 0x1006E77D: mov eax, dword ptr [ebp - 0x14] */
    MEM32(edi + 0x10) = eax; /* 0x1006E780: mov dword ptr [edi + 0x10], eax */
    eax = MEM32(ebp + 0xC); /* 0x1006E783: mov eax, dword ptr [ebp + 0xc] */
    MEM32(edi) = ebx; /* 0x1006E786: mov dword ptr [edi], ebx */
    MEM32(edi + 0x8) = esi; /* 0x1006E788: mov dword ptr [edi + 8], esi */
    /* test eax, eax */ /* 0x1006E78B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006E7A4; /* 0x1006E78D: je 0x1006e7a4 */
L_1006E78F:
    ecx = MEM32(edi + 0x10); /* 0x1006E78F: mov ecx, dword ptr [edi + 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    esi = esi & edx; /* 0x1006E792: and esi, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ebp + 0x8) | 1)); _flag_b = (uint32_t)((MEM32(ebp + 0x8) | 1));
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) | 1; /* 0x1006E794: or dword ptr [ebp + 8], 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx + esi * 8) = eax; /* 0x1006E798: mov dword ptr [ecx + esi*8], eax */
    eax = MEM32(ebp + 0x10); /* 0x1006E79B: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ecx + esi * 8 + 0x4) = eax; /* 0x1006E79E: mov dword ptr [ecx + esi*8 + 4], eax */
    goto L_1006E7AA; /* 0x1006E7A2: jmp 0x1006e7aa */
L_1006E7A4:
    eax = MEM32(ebp + 0x8); /* 0x1006E7A4: mov eax, dword ptr [ebp + 8] */
    MEM32(ebp + 0x8) = eax; /* 0x1006E7A7: mov dword ptr [ebp + 8], eax */
L_1006E7AA:
    eax = MEM32(edi + 0xC); /* 0x1006E7AA: mov eax, dword ptr [edi + 0xc] */
    ecx = edx; /* 0x1006E7AD: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0x8));
    ecx = ecx & MEM32(edi + 0x8); /* 0x1006E7AF: and ecx, dword ptr [edi + 8] */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ebp + 0x8); /* 0x1006E7B2: mov esi, dword ptr [ebp + 8] */
    MEM32(eax + ecx * 4) = esi; /* 0x1006E7B5: mov dword ptr [eax + ecx*4], esi */
    eax = edx + 0x1; /* 0x1006E7B8: lea eax, [edx + 1] */
    esi = MEM32(ebp + (-0x1C)); /* 0x1006E7BB: mov esi, dword ptr [ebp - 0x1c] */
    MEM32(edi + 0x4) = eax; /* 0x1006E7BE: mov dword ptr [edi + 4], eax */
    MEM32(esi) = ebx; /* 0x1006E7C1: mov dword ptr [esi], ebx */
    RECOMP_CALL(sub_10023AF4); /* 0x1006E7C3: call 0x10023af4 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x1006E7C8: push dword ptr [ebp - 0x20] */
    RECOMP_CALL(sub_1000ECE0); /* 0x1006E7CB: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x1006E7D0: push dword ptr [ebp - 0x24] */
    RECOMP_CALL(sub_1000ECE0); /* 0x1006E7D3: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1006E7D8: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1006E7D9: pop ecx */
    edi = POP32_VAL(esp); /* 0x1006E7DA: pop edi */
    esi = POP32_VAL(esp); /* 0x1006E7DB: pop esi */
    ebx = POP32_VAL(esp); /* 0x1006E7DC: pop ebx */
    esp = ebp; /* 0x1006E7DD: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1006E7DF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1006E7E0: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1006E7F3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006E7F3u);

L_1006E7F3:
    PUSH32(esp, ebp); /* 0x1006E7F3: push ebp */
    ebp = esp; /* 0x1006E7F4: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x1006E7F6: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1006E7F9: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1006E7FC: push esi */
    esi = (uint32_t)LO16(eax); /* 0x1006E7FD: movzx esi, ax */
    RECOMP_CALL(sub_100244FF); /* 0x1006E800: call 0x100244ff */
    RECOMP_FLAGS_IN();
    /* cmp esi, eax */ /* 0x1006E805: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1006E822; /* 0x1006E807: ja 0x1006e822 */
L_1006E809:
    eax = MEM32(ebp + 0x8); /* 0x1006E809: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) & 0; /* 0x1006E80C: and dword ptr [eax + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(eax + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(eax + 0xC) = MEM32(eax + 0xC) & 0; /* 0x1006E810: and dword ptr [eax + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + 0x8) = esi; /* 0x1006E814: mov dword ptr [eax + 8], esi */
    MEM32(eax) = 1; /* 0x1006E817: mov dword ptr [eax], 1 */
    esi = POP32_VAL(esp); /* 0x1006E81D: pop esi */
    esp = ebp; /* 0x1006E81E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1006E820: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006E821: ret  */
L_1006E822:
    ecx = ebp + (-0xC); /* 0x1006E822: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1009DD55); /* 0x1006E825: call 0x1009dd55 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x100DCF08u); /* 0x1006E82A: push 0x100dcf08 */
    eax = ebp + (-0xC); /* 0x1006E82F: lea eax, [ebp - 0xc] */
    MEM32(ebp + (-0xC)) = 0x10067694u; /* 0x1006E832: mov dword ptr [ebp - 0xc], 0x10067694 */
    PUSH32(esp, eax); /* 0x1006E839: push eax */
    RECOMP_CALL(sub_100192EB); /* 0x1006E83A: call 0x100192eb */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1006E83Fu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1006E840(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006E840u);

L_1006E840:
    PUSH32(esp, ebp); /* 0x1006E840: push ebp */
    ebp = esp; /* 0x1006E841: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x1006E843: mov edx, dword ptr [ebp + 8] */
    eax = MEM32(edx); /* 0x1006E846: mov eax, dword ptr [edx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x0FFFFFFFu);
    eax = eax & 0x0FFFFFFFu; /* 0x1006E848: and eax, 0xfffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x1006E84D: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1006E882; /* 0x1006E850: je 0x1006e882 */
L_1006E852:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1006E852: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1006E877; /* 0x1006E853: je 0x1006e877 */
L_1006E855:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1006E855: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1006E86C; /* 0x1006E856: je 0x1006e86c */
L_1006E858:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1006E858: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1006E85F; /* 0x1006E859: je 0x1006e85f */
L_1006E85B:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x1006E85B: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_1006E884; /* 0x1006E85D: jmp 0x1006e884 */
L_1006E85F:
    eax = MEM32(ecx + 0x8); /* 0x1006E85F: mov eax, dword ptr [ecx + 8] */
L_1006E862:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(edx + 0x8); /* 0x1006E862: sub eax, dword ptr [edx + 8] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1006E865: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1006E867: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1006E869: inc eax */
    _flag_k = FK_INC;
    goto L_1006E884; /* 0x1006E86A: jmp 0x1006e884 */
L_1006E86C:
    eax = MEM32(ecx + 0xC); /* 0x1006E86C: mov eax, dword ptr [ecx + 0xc] */
    eax = MEM32(eax + 0x50); /* 0x1006E86F: mov eax, dword ptr [eax + 0x50] */
    eax = MEM32(eax + 0x30); /* 0x1006E872: mov eax, dword ptr [eax + 0x30] */
    RECOMP_BACKEDGE();
    goto L_1006E862; /* 0x1006E875: jmp 0x1006e862 */
L_1006E877:
    eax = MEM32(ecx + 0xC); /* 0x1006E877: mov eax, dword ptr [ecx + 0xc] */
    eax = MEM32(eax + 0x50); /* 0x1006E87A: mov eax, dword ptr [eax + 0x50] */
    eax = MEM32(eax + 0x2C); /* 0x1006E87D: mov eax, dword ptr [eax + 0x2c] */
    RECOMP_BACKEDGE();
    goto L_1006E862; /* 0x1006E880: jmp 0x1006e862 */
L_1006E882:
    SET_LO8(eax, 1); /* 0x1006E882: mov al, 1 */
L_1006E884:
    ebp = POP32_VAL(esp); /* 0x1006E884: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1006E885: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1006E888(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006E888u);

L_1006E888:
    PUSH32(esp, ebp); /* 0x1006E888: push ebp */
    ebp = esp; /* 0x1006E889: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1006E88B: sub esp, 0x10 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1006E88E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1006E890: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1006E891: mov ebx, dword ptr [ebp + 8] */
    MEM32(ebx) = eax; /* 0x1006E894: mov dword ptr [ebx], eax */
    MEM32(ebx + 0x8) = eax; /* 0x1006E896: mov dword ptr [ebx + 8], eax */
    MEM32(ebx + 0xC) = eax; /* 0x1006E899: mov dword ptr [ebx + 0xc], eax */
    RECOMP_CALL(sub_10023AF4); /* 0x1006E89C: call 0x10023af4 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1006E8A1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006E8E0; /* 0x1006E8A3: je 0x1006e8e0 */
L_1006E8A5:
    /* cmp MEM8(eax + 0x4C), 0 */ /* 0x1006E8A5: cmp byte ptr [eax + 0x4c], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0x4C)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1006E8E0; /* 0x1006E8A9: jne 0x1006e8e0 */
L_1006E8AB:
    PUSH32(esp, esi); /* 0x1006E8AB: push esi */
    PUSH32(esp, edi); /* 0x1006E8AC: push edi */
    edi = MEM32(eax + 0x9C); /* 0x1006E8AD: mov edi, dword ptr [eax + 0x9c] */
    MEM32(ebp + (-0x10)) = 3; /* 0x1006E8B3: mov dword ptr [ebp - 0x10], 3 */
    eax = MEM32(edi + 0x50); /* 0x1006E8BA: mov eax, dword ptr [edi + 0x50] */
    esi = MEM32(edi + 0x8C); /* 0x1006E8BD: mov esi, dword ptr [edi + 0x8c] */
    ecx = MEM32(eax); /* 0x1006E8C3: mov ecx, dword ptr [eax] */
    eax = MEM32(ecx); /* 0x1006E8C5: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1006E8C7: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0xC)) = eax; /* 0x1006E8CA: mov dword ptr [ebp - 0xc], eax */
    ecx = ebx; /* 0x1006E8CD: mov ecx, ebx */
    eax = ebp + (-0x10); /* 0x1006E8CF: lea eax, [ebp - 0x10] */
    MEM32(ebp + (-0x4)) = edi; /* 0x1006E8D2: mov dword ptr [ebp - 4], edi */
    PUSH32(esp, eax); /* 0x1006E8D5: push eax */
    MEM32(ebp + (-0x8)) = esi; /* 0x1006E8D6: mov dword ptr [ebp - 8], esi */
    RECOMP_CALL(sub_1002762F); /* 0x1006E8D9: call 0x1002762f */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x1006E8DE: pop edi */
    esi = POP32_VAL(esp); /* 0x1006E8DF: pop esi */
L_1006E8E0:
    eax = ebx; /* 0x1006E8E0: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x1006E8E2: pop ebx */
    esp = ebp; /* 0x1006E8E3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1006E8E5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006E8E6: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006E8E7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006E8E7u);

L_1006E8E7:
    PUSH32(esp, ebp); /* 0x1006E8E7: push ebp */
    ebp = esp; /* 0x1006E8E8: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1006E8EA: sub esp, 0x10 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1006E8ED: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1006E8EF: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1006E8F0: mov ebx, dword ptr [ebp + 8] */
    MEM32(ebx) = eax; /* 0x1006E8F3: mov dword ptr [ebx], eax */
    MEM32(ebx + 0x8) = eax; /* 0x1006E8F5: mov dword ptr [ebx + 8], eax */
    MEM32(ebx + 0xC) = eax; /* 0x1006E8F8: mov dword ptr [ebx + 0xc], eax */
    RECOMP_CALL(sub_10023AF4); /* 0x1006E8FB: call 0x10023af4 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1006E900: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006E93C; /* 0x1006E902: je 0x1006e93c */
L_1006E904:
    /* cmp MEM8(eax + 0x4C), 0 */ /* 0x1006E904: cmp byte ptr [eax + 0x4c], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0x4C)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1006E93C; /* 0x1006E908: jne 0x1006e93c */
L_1006E90A:
    eax = MEM32(eax + 0x9C); /* 0x1006E90A: mov eax, dword ptr [eax + 0x9c] */
    PUSH32(esp, esi); /* 0x1006E910: push esi */
    PUSH32(esp, edi); /* 0x1006E911: push edi */
    MEM32(ebp + (-0x10)) = 2; /* 0x1006E912: mov dword ptr [ebp - 0x10], 2 */
    edi = MEM32(eax + 0x50); /* 0x1006E919: mov edi, dword ptr [eax + 0x50] */
    ecx = MEM32(edi); /* 0x1006E91C: mov ecx, dword ptr [edi] */
    esi = MEM32(edi + 0x30); /* 0x1006E91E: mov esi, dword ptr [edi + 0x30] */
    eax = MEM32(ecx); /* 0x1006E921: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1006E923: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0xC)) = eax; /* 0x1006E926: mov dword ptr [ebp - 0xc], eax */
    ecx = ebx; /* 0x1006E929: mov ecx, ebx */
    eax = ebp + (-0x10); /* 0x1006E92B: lea eax, [ebp - 0x10] */
    MEM32(ebp + (-0x4)) = edi; /* 0x1006E92E: mov dword ptr [ebp - 4], edi */
    PUSH32(esp, eax); /* 0x1006E931: push eax */
    MEM32(ebp + (-0x8)) = esi; /* 0x1006E932: mov dword ptr [ebp - 8], esi */
    RECOMP_CALL(sub_1002762F); /* 0x1006E935: call 0x1002762f */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x1006E93A: pop edi */
    esi = POP32_VAL(esp); /* 0x1006E93B: pop esi */
L_1006E93C:
    eax = ebx; /* 0x1006E93C: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x1006E93E: pop ebx */
    esp = ebp; /* 0x1006E93F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1006E941: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006E942: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006E943(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006E943u);

L_1006E943:
    PUSH32(esp, ebp); /* 0x1006E943: push ebp */
    ebp = esp; /* 0x1006E944: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1006E946: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1006E949: push ebx */
    PUSH32(esp, esi); /* 0x1006E94A: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1006E94B: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1006E94E: push edi */
    edi = ecx; /* 0x1006E94F: mov edi, ecx */
    /* test esi, esi */ /* 0x1006E951: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006E95C; /* 0x1006E953: jne 0x1006e95c */
L_1006E955:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1006E955: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1006EB5C; /* 0x1006E957: jmp 0x1006eb5c */
L_1006E95C:
    _flag_a = (uint32_t)(MEM32(edi + 0x824)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x824) = MEM32(edi + 0x824) + 1; /* 0x1006E95C: inc dword ptr [edi + 0x824] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1006E962: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(edi + 0x814); /* 0x1006E964: mov eax, dword ptr [edi + 0x814] */
    /* cmp esi, eax */ /* 0x1006E96A: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006E995; /* 0x1006E96C: je 0x1006e995 */
L_1006E96E:
    PUSH32(esp, esi); /* 0x1006E96E: push esi */
    MEM32(edi + 0x818) = eax; /* 0x1006E96F: mov dword ptr [edi + 0x818], eax */
    MEM32(edi + 0x814) = esi; /* 0x1006E975: mov dword ptr [edi + 0x814], esi */
    RECOMP_CALL(sub_1006EDB4); /* 0x1006E97B: call 0x1006edb4 */
    RECOMP_FLAGS_IN();
    fp_push(0.0); /* 0x1006E980: fldz  */
    *(double*)ADDR(eax) = _st[0]; /* 0x1006E982: fst qword ptr [eax] */
    { double _v = fp_pop(); *(double*)ADDR(eax + 0x8) = _v; } /* 0x1006E984: fstp qword ptr [eax + 8] */
    MEM32(eax + 0x10) = ebx; /* 0x1006E987: mov dword ptr [eax + 0x10], ebx */
    MEM32(eax + 0x14) = ebx; /* 0x1006E98A: mov dword ptr [eax + 0x14], ebx */
    MEM32(eax + 0x18) = ebx; /* 0x1006E98D: mov dword ptr [eax + 0x18], ebx */
    RECOMP_CALL(sub_1006ED70); /* 0x1006E990: call 0x1006ed70 */
    RECOMP_FLAGS_IN();
L_1006E995:
    ebx = MEM32(edi + 0x828); /* 0x1006E995: mov ebx, dword ptr [edi + 0x828] */
    edx = MEM32(ebp + 0xC); /* 0x1006E99B: mov edx, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x10); /* 0x1006E99E: mov ecx, dword ptr [ebp + 0x10] */
    /* test ebx, ebx */ /* 0x1006E9A1: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006E9B1; /* 0x1006E9A3: je 0x1006e9b1 */
L_1006E9A5:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(edi + 0x82C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(edi + 0x82C); /* 0x1006E9A5: add edx, dword ptr [edi + 0x82c] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0x830));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(edi + 0x830); /* 0x1006E9AB: add ecx, dword ptr [edi + 0x830] */
    _flag_k = FK_ADD;
L_1006E9B1:
    /* cmp edx, esi */ /* 0x1006E9B1: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1006E9C2; /* 0x1006E9B3: jae 0x1006e9c2 */
L_1006E9B5:
    /* cmp edx, MEM32(ebp + 0x14) */ /* 0x1006E9B5: cmp edx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1006E9C2; /* 0x1006E9B8: jae 0x1006e9c2 */
L_1006E9BA:
    eax = esi; /* 0x1006E9BA: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x1006E9BC: sub eax, edx */
    _flag_k = FK_CMP;
    edx = esi; /* 0x1006E9BE: mov edx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x1006E9C0: add ecx, eax */
    _flag_k = FK_ADD;
L_1006E9C2:
    esi = MEM32(edi + 0x820); /* 0x1006E9C2: mov esi, dword ptr [edi + 0x820] */
    /* cmp esi, 1 */ /* 0x1006E9C8: cmp esi, 1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1006EA12; /* 0x1006E9CB: jb 0x1006ea12 */
L_1006E9CD:
    /* cmp edx, 1 */ /* 0x1006E9CD: cmp edx, 1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1006EA12; /* 0x1006E9D0: jae 0x1006ea12 */
L_1006E9D2:
    /* cmp ecx, 1 */ /* 0x1006E9D2: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1006EA12; /* 0x1006E9D5: jae 0x1006ea12 */
L_1006E9D7:
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x1006E9D7: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1006EA12; /* 0x1006E9DB: jne 0x1006ea12 */
L_1006E9DD:
    eax = ebx + 0x1; /* 0x1006E9DD: lea eax, [ebx + 1] */
    MEM32(edi + 0x82C) = edx; /* 0x1006E9E0: mov dword ptr [edi + 0x82c], edx */
    MEM32(edi + 0x828) = eax; /* 0x1006E9E6: mov dword ptr [edi + 0x828], eax */
    MEM32(edi + 0x830) = ecx; /* 0x1006E9EC: mov dword ptr [edi + 0x830], ecx */
    /* cmp eax, 3 */ /* 0x1006E9F2: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1006EA02; /* 0x1006E9F5: jae 0x1006ea02 */
L_1006E9F7:
    eax = MEM32(edi + 0x814); /* 0x1006E9F7: mov eax, dword ptr [edi + 0x814] */
    goto L_1006EB5C; /* 0x1006E9FD: jmp 0x1006eb5c */
L_1006EA02:
    ecx = MEM32(edi + 0x800); /* 0x1006EA02: mov ecx, dword ptr [edi + 0x800] */
    RECOMP_CALL(sub_1002472C); /* 0x1006EA08: call 0x1002472c */
    RECOMP_FLAGS_IN();
    goto L_1006EB5C; /* 0x1006EA0D: jmp 0x1006eb5c */
L_1006EA12:
    ecx = esi + 0x1; /* 0x1006EA12: lea ecx, [esi + 1] */
    MEM32(ebp + 0x10) = edx; /* 0x1006EA15: mov dword ptr [ebp + 0x10], edx */
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x1006EA18: fild dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1006EA1B: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x820) = ecx; /* 0x1006EA1D: mov dword ptr [edi + 0x820], ecx */
    MEM32(edi + 0x82C) = esi; /* 0x1006EA23: mov dword ptr [edi + 0x82c], esi */
    eax = ebx + 0x1; /* 0x1006EA29: lea eax, [ebx + 1] */
    ebx = MEM32(edi + 0x814); /* 0x1006EA2C: mov ebx, dword ptr [edi + 0x814] */
    MEM32(edi + 0x830) = esi; /* 0x1006EA32: mov dword ptr [edi + 0x830], esi */
    MEM32(edi + 0x828) = esi; /* 0x1006EA38: mov dword ptr [edi + 0x828], esi */
    /* test edx, edx */ /* 0x1006EA3E: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1006EA48; /* 0x1006EA40: jns 0x1006ea48 */
L_1006EA42:
    _st[0] += *(double*)ADDR(0x10067CE0); /* 0x1006EA42: fadd qword ptr [0x10067ce0] */
L_1006EA48:
    MEM32(ebp + 0x10) = eax; /* 0x1006EA48: mov dword ptr [ebp + 0x10], eax */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x1006EA4B: fstp qword ptr [ebp - 8] */
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x1006EA4E: fld qword ptr [ebp - 8] */
    _st[0] *= *(double*)ADDR(0x1006EB68); /* 0x1006EA51: fmul qword ptr [0x1006eb68] */
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x1006EA57: fild dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x1006EA5A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1006EA64; /* 0x1006EA5C: jns 0x1006ea64 */
L_1006EA5E:
    _st[0] += *(double*)ADDR(0x10067CE0); /* 0x1006EA5E: fadd qword ptr [0x10067ce0] */
L_1006EA64:
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x1006EA64: fstp qword ptr [ebp - 8] */
    _st[0] /= *(double*)ADDR(ebp + (-0x8)); /* 0x1006EA67: fdiv qword ptr [ebp - 8] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x1006EA6A: fstp qword ptr [ebp - 8] */
    /* cmp ecx, 1 */ /* 0x1006EA6D: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1006EA7D; /* 0x1006EA70: ja 0x1006ea7d */
L_1006EA72:
    MEM32(edi + 0x818) = ebx; /* 0x1006EA72: mov dword ptr [edi + 0x818], ebx */
    goto L_1006EB5A; /* 0x1006EA78: jmp 0x1006eb5a */
L_1006EA7D:
    PUSH32(esp, ebx); /* 0x1006EA7D: push ebx */
    ecx = edi; /* 0x1006EA7E: mov ecx, edi */
    RECOMP_CALL(sub_1006EDB4); /* 0x1006EA80: call 0x1006edb4 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(edi + 0x818)); /* 0x1006EA85: push dword ptr [edi + 0x818] */
    esi = eax; /* 0x1006EA8B: mov esi, eax */
    RECOMP_CALL(sub_1006EDB4); /* 0x1006EA8D: call 0x1006edb4 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(esi)); /* 0x1006EA92: fld qword ptr [esi] */
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x1006EA94: fld qword ptr [ebp - 8] */
    ecx = MEM32(edi + 0x824); /* 0x1006EA97: mov ecx, dword ptr [edi + 0x824] */
    _st[1] += _st[0]; /* 0x1006EA9D: fadd st(1), st(0) */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x10) = MEM32(esi + 0x10) + 1; /* 0x1006EA9F: inc dword ptr [esi + 0x10] */
    _flag_k = FK_INC;
    fp_xch(1); /* 0x1006EAA2: fxch st(1) */
    MEM32(esi + 0x18) = ecx; /* 0x1006EAA4: mov dword ptr [esi + 0x18], ecx */
    { double _v = fp_pop(); *(double*)ADDR(esi) = _v; } /* 0x1006EAA7: fstp qword ptr [esi] */
    _st[0] *= _st[0]; /* 0x1006EAA9: fmul st(0), st(0) */
    _st[0] += *(double*)ADDR(esi + 0x8); /* 0x1006EAAB: fadd qword ptr [esi + 8] */
    { double _v = fp_pop(); *(double*)ADDR(esi + 0x8) = _v; } /* 0x1006EAAE: fstp qword ptr [esi + 8] */
    /* cmp MEM32(eax + 0x10), 0 */ /* 0x1006EAB1: cmp dword ptr [eax + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006EB26; /* 0x1006EAB5: je 0x1006eb26 */
L_1006EAB7:
    /* cmp esi, eax */ /* 0x1006EAB7: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006EB26; /* 0x1006EAB9: je 0x1006eb26 */
L_1006EABB:
    PUSH32(esp, esi); /* 0x1006EABB: push esi */
    RECOMP_CALL(sub_1006ED00); /* 0x1006EABC: call 0x1006ed00 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1006EAC1: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006EB5A; /* 0x1006EAC3: je 0x1006eb5a */
L_1006EAC9:
    PUSH32(esp, MEM32(edi + 0x814)); /* 0x1006EAC9: push dword ptr [edi + 0x814] */
    ecx = edi; /* 0x1006EACF: mov ecx, edi */
    PUSH32(esp, MEM32(edi + 0x818)); /* 0x1006EAD1: push dword ptr [edi + 0x818] */
    RECOMP_CALL(sub_1006EC43); /* 0x1006EAD7: call 0x1006ec43 */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(edi + 0x808); /* 0x1006EADC: fmul qword ptr [edi + 0x808] */
    esi = MEM32(edi + 0x814); /* 0x1006EAE2: mov esi, dword ptr [edi + 0x814] */
    fp_push((double)(int32_t)MEM32(edi + 0x814)); /* 0x1006EAE8: fild dword ptr [edi + 0x814] */
    /* test esi, esi */ /* 0x1006EAEE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1006EAF8; /* 0x1006EAF0: jns 0x1006eaf8 */
L_1006EAF2:
    _st[0] += *(double*)ADDR(0x10067CE0); /* 0x1006EAF2: fadd qword ptr [0x10067ce0] */
L_1006EAF8:
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x1006EAF8: fstp qword ptr [ebp - 8] */
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x1006EAFB: fld qword ptr [ebp - 8] */
    *(double*)ADDR(ebp + (-0x8)) = _st[0]; /* 0x1006EAFE: fst qword ptr [ebp - 8] */
    _st[0] += _st[1]; /* 0x1006EB01: fadd st(1) */
    RECOMP_CALL(sub_10051B5C); /* 0x1006EB03: call 0x10051b5c */
    RECOMP_FLAGS_IN();
    /* cmp eax, esi */ /* 0x1006EB08: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1006EB22; /* 0x1006EB0A: jne 0x1006eb22 */
L_1006EB0C:
    PUSH32(esp, ecx); /* 0x1006EB0C: push ecx */
    PUSH32(esp, ecx); /* 0x1006EB0D: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x1006EB0E: fstp qword ptr [esp] */
    RECOMP_CALL(sub_1006EE58); /* 0x1006EB11: call 0x1006ee58 */
    RECOMP_FLAGS_IN();
    _st[0] += *(double*)ADDR(ebp + (-0x8)); /* 0x1006EB16: fadd qword ptr [ebp - 8] */
    ecx = POP32_VAL(esp); /* 0x1006EB19: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1006EB1A: pop ecx */
    RECOMP_CALL(sub_10051B5C); /* 0x1006EB1B: call 0x10051b5c */
    RECOMP_FLAGS_IN();
    goto L_1006EB50; /* 0x1006EB20: jmp 0x1006eb50 */
L_1006EB22:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1006EB22: fstp st(0) */
    goto L_1006EB50; /* 0x1006EB24: jmp 0x1006eb50 */
L_1006EB26:
    PUSH32(esp, esi); /* 0x1006EB26: push esi */
    RECOMP_CALL(sub_1006ED00); /* 0x1006EB27: call 0x1006ed00 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1006EB2C: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006EB5A; /* 0x1006EB2E: je 0x1006eb5a */
L_1006EB30:
    SET_LO8(eax, MEM8(edi + 0x834)); /* 0x1006EB30: mov al, byte ptr [edi + 0x834] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1006EB36: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test LO8(eax), LO8(eax) */ /* 0x1006EB38: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    SET_LO8(ecx, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1006EB3A: setne cl */
    /* test LO8(eax), LO8(eax) */ /* 0x1006EB3D: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    SET_LO8(eax, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x1006EB3F: sete al */
    MEM8(edi + 0x834) = (uint8_t)(LO8(eax)); /* 0x1006EB42: mov byte ptr [edi + 0x834], al */
    eax = MEM32(edi + 0x814); /* 0x1006EB48: mov eax, dword ptr [edi + 0x814] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1006EB4E: add eax, ecx */
    _flag_k = FK_ADD;
L_1006EB50:
    PUSH32(esp, eax); /* 0x1006EB50: push eax */
    ecx = edi; /* 0x1006EB51: mov ecx, edi */
    RECOMP_CALL(sub_1006EB70); /* 0x1006EB53: call 0x1006eb70 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1006EB58: mov ebx, eax */
L_1006EB5A:
    eax = ebx; /* 0x1006EB5A: mov eax, ebx */
L_1006EB5C:
    edi = POP32_VAL(esp); /* 0x1006EB5C: pop edi */
    esi = POP32_VAL(esp); /* 0x1006EB5D: pop esi */
    ebx = POP32_VAL(esp); /* 0x1006EB5E: pop ebx */
    esp = ebp; /* 0x1006EB5F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1006EB61: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1006EB62: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1006EB70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006EB70u);

L_1006EB70:
    PUSH32(esp, ebp); /* 0x1006EB70: push ebp */
    ebp = esp; /* 0x1006EB71: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1006EB73: push ecx */
    PUSH32(esp, ecx); /* 0x1006EB74: push ecx */
    PUSH32(esp, ebx); /* 0x1006EB75: push ebx */
    PUSH32(esp, esi); /* 0x1006EB76: push esi */
    PUSH32(esp, edi); /* 0x1006EB77: push edi */
    edi = ecx; /* 0x1006EB78: mov edi, ecx */
    MEM32(ebp + (-0x4)) = edi; /* 0x1006EB7A: mov dword ptr [ebp - 4], edi */
    esi = MEM32(edi + 0x800); /* 0x1006EB7D: mov esi, dword ptr [edi + 0x800] */
    ecx = esi; /* 0x1006EB83: mov ecx, esi */
    RECOMP_CALL(sub_1002472C); /* 0x1006EB85: call 0x1002472c */
    RECOMP_FLAGS_IN();
    ecx = esi; /* 0x1006EB8A: mov ecx, esi */
    ebx = eax; /* 0x1006EB8C: mov ebx, eax */
    RECOMP_CALL(sub_10027A0B); /* 0x1006EB8E: call 0x10027a0b */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x1006EB93: mov ecx, dword ptr [ebp - 4] */
    edx = eax; /* 0x1006EB96: mov edx, eax */
    edi = MEM32(edi + 0x814); /* 0x1006EB98: mov edi, dword ptr [edi + 0x814] */
    esi = MEM32(ebp + 0x8); /* 0x1006EB9E: mov esi, dword ptr [ebp + 8] */
    ecx = MEM32(ecx + 0x810); /* 0x1006EBA1: mov ecx, dword ptr [ecx + 0x810] */
    eax = ecx + edi; /* 0x1006EBA7: lea eax, [ecx + edi] */
    /* cmp eax, esi */ /* 0x1006EBAA: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1006EBB0; /* 0x1006EBAC: jae 0x1006ebb0 */
L_1006EBAE:
    esi = eax; /* 0x1006EBAE: mov esi, eax */
L_1006EBB0:
    /* cmp edi, ecx */ /* 0x1006EBB0: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1006EBBE; /* 0x1006EBB2: jbe 0x1006ebbe */
L_1006EBB4:
    eax = edi; /* 0x1006EBB4: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1006EBB6: sub eax, ecx */
    _flag_k = FK_CMP;
    /* cmp eax, esi */ /* 0x1006EBB8: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1006EBBE; /* 0x1006EBBA: jbe 0x1006ebbe */
L_1006EBBC:
    esi = eax; /* 0x1006EBBC: mov esi, eax */
L_1006EBBE:
    /* cmp esi, edi */ /* 0x1006EBBE: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1006EBCA; /* 0x1006EBC0: jne 0x1006ebca */
L_1006EBC2:
    /* cmp esi, ebx */ /* 0x1006EBC2: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1006EBC9; /* 0x1006EBC4: jbe 0x1006ebc9 */
L_1006EBC6:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1006EBC6: dec esi */
    _flag_k = FK_DEC;
    goto L_1006EBCA; /* 0x1006EBC7: jmp 0x1006ebca */
L_1006EBC9:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1006EBC9: inc esi */
    _flag_k = FK_INC;
L_1006EBCA:
    /* cmp ebx, esi */ /* 0x1006EBCA: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1006EBD0; /* 0x1006EBCC: jbe 0x1006ebd0 */
L_1006EBCE:
    esi = ebx; /* 0x1006EBCE: mov esi, ebx */
L_1006EBD0:
    /* cmp edx, esi */ /* 0x1006EBD0: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1006EBD6; /* 0x1006EBD2: jae 0x1006ebd6 */
L_1006EBD4:
    esi = edx; /* 0x1006EBD4: mov esi, edx */
L_1006EBD6:
    /* cmp esi, edi */ /* 0x1006EBD6: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006EC38; /* 0x1006EBD8: je 0x1006ec38 */
L_1006EBDA:
    eax = esi; /* 0x1006EBDA: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x1006EBDC: sub eax, edi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1006EC38; /* 0x1006EBDE: je 0x1006ec38 */
L_1006EBE0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1006EBE0: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, eax */ /* 0x1006EBE2: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1006EBE4: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    eax = eax & 2; /* 0x1006EBE6: and eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1006EBE9: dec eax */
    _flag_k = FK_DEC;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1006EBEA: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1006EC38; /* 0x1006EBED: jne 0x1006ec38 */
L_1006EBEF:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1006EBEF: dec edi */
    _flag_k = FK_DEC;
    /* cmp edi, esi */ /* 0x1006EBF0: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006EC09; /* 0x1006EBF2: je 0x1006ec09 */
L_1006EBF4:
    eax = esi; /* 0x1006EBF4: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x1006EBF6: sub eax, edi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1006EC38; /* 0x1006EBF8: je 0x1006ec38 */
L_1006EBFA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1006EBFA: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, eax */ /* 0x1006EBFC: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1006EBFE: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    eax = eax & 2; /* 0x1006EC00: and eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1006EC03: dec eax */
    _flag_k = FK_DEC;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1006EC04: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1006EC38; /* 0x1006EC07: jne 0x1006ec38 */
L_1006EC09:
    ecx = MEM32(ebp + (-0x4)); /* 0x1006EC09: mov ecx, dword ptr [ebp - 4] */
    PUSH32(esp, edi); /* 0x1006EC0C: push edi */
    RECOMP_CALL(sub_1006EDB4); /* 0x1006EC0D: call 0x1006edb4 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(eax + 0x10), 0 */ /* 0x1006EC12: cmp dword ptr [eax + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_LE(_flag_a, _flag_b)) goto L_1006EBEF; /* 0x1006EC16: jle 0x1006ebef */
L_1006EC18:
    PUSH32(esp, edi); /* 0x1006EC18: push edi */
    PUSH32(esp, MEM32(ecx + 0x814)); /* 0x1006EC19: push dword ptr [ecx + 0x814] */
    RECOMP_CALL(sub_1006EC43); /* 0x1006EC1F: call 0x1006ec43 */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(0x10067CE8); /* 0x1006EC24: fmul qword ptr [0x10067ce8] */
    fp_push(0.0); /* 0x1006EC2A: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1006EC2C: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1006EC2E: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x1006EC30: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006EBEF; /* 0x1006EC33: jne 0x1006ebef */
L_1006EC35:
    esi = edi + 0x1; /* 0x1006EC35: lea esi, [edi + 1] */
L_1006EC38:
    edi = POP32_VAL(esp); /* 0x1006EC38: pop edi */
    eax = esi; /* 0x1006EC39: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1006EC3B: pop esi */
    ebx = POP32_VAL(esp); /* 0x1006EC3C: pop ebx */
    esp = ebp; /* 0x1006EC3D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1006EC3F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1006EC40: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1006EC43(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006EC43u);

L_1006EC43:
    PUSH32(esp, ebp); /* 0x1006EC43: push ebp */
    ebp = esp; /* 0x1006EC44: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x1006EC46: sub esp, 0x20 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1006EC49: push esi */
    PUSH32(esp, edi); /* 0x1006EC4A: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1006EC4B: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1006EDB4); /* 0x1006EC4E: call 0x1006edb4 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0xC); /* 0x1006EC53: mov edi, dword ptr [ebp + 0xc] */
    esi = eax; /* 0x1006EC56: mov esi, eax */
    PUSH32(esp, edi); /* 0x1006EC58: push edi */
    RECOMP_CALL(sub_1006EDB4); /* 0x1006EC59: call 0x1006edb4 */
    RECOMP_FLAGS_IN();
    ecx = esi; /* 0x1006EC5E: mov ecx, esi */
    edx = eax; /* 0x1006EC60: mov edx, eax */
    RECOMP_CALL(sub_1006EDDF); /* 0x1006EC62: call 0x1006eddf */
    RECOMP_FLAGS_IN();
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x1006EC67: fstp qword ptr [ebp - 8] */
    ecx = edx; /* 0x1006EC6A: mov ecx, edx */
    RECOMP_CALL(sub_1006EDDF); /* 0x1006EC6C: call 0x1006eddf */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x1006EC71: fld qword ptr [ebp - 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - MEM32(ebp + 0x8); /* 0x1006EC74: sub edi, dword ptr [ebp + 8] */
    _flag_k = FK_CMP;
    _st[1] -= _st[0]; /* 0x1006EC77: fsub st(1), st(0) */
    fp_xch(1); /* 0x1006EC79: fxch st(1) */
    MEM32(ebp + 0xC) = edi; /* 0x1006EC7B: mov dword ptr [ebp + 0xc], edi */
    *(double*)ADDR(ebp + (-0x18)) = _st[0]; /* 0x1006EC7E: fst qword ptr [ebp - 0x18] */
    fp_push(_st[0]); /* 0x1006EC81: fld st(0) */
    { double _v = fp_pop(); _st[1] = _st[1] == 0.0 ? _v : _v / _st[1]; } /* 0x1006EC83: fdivrp st(2) */
    fp_push((double)(int32_t)MEM32(ebp + 0xC)); /* 0x1006EC85: fild dword ptr [ebp + 0xc] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x1006EC88: fstp qword ptr [ebp - 8] */
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x1006EC8B: fld qword ptr [ebp - 8] */
    fp_push((double)(int32_t)MEM32(ebp + 0x8)); /* 0x1006EC8E: fild dword ptr [ebp + 8] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x1006EC91: fstp qword ptr [ebp - 8] */
    _st[0] /= *(double*)ADDR(ebp + (-0x8)); /* 0x1006EC94: fdiv qword ptr [ebp - 8] */
    { double _v = fp_pop(); _st[1] = _v == 0.0 ? _st[1] : _st[1] / _v; } /* 0x1006EC97: fdivp st(2) */
    fp_xch(1); /* 0x1006EC99: fxch st(1) */
    _st[0] -= *(double*)ADDR(0x1006ECF8); /* 0x1006EC9B: fsub qword ptr [0x1006ecf8] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x20)) = _v; } /* 0x1006ECA1: fstp qword ptr [ebp - 0x20] */
    _st[0] = fabs(_st[0]); /* 0x1006ECA4: fabs  */
    fp_push(0.0); /* 0x1006ECA6: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1006ECA8: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1006ECAA: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1006ECAC: fstp st(1) */
    /* test HI8(eax), 5 */ /* 0x1006ECAE: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1006ECE1; /* 0x1006ECB1: jp 0x1006ece1 */
L_1006ECB3:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1006ECB3: fstp st(0) */
    fp_push((double)(int32_t)MEM32(edx + 0x10)); /* 0x1006ECB5: fild dword ptr [edx + 0x10] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x1006ECB8: fstp qword ptr [ebp - 8] */
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x1006ECBB: fld qword ptr [ebp - 8] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x1006ECBE: fstp qword ptr [ebp - 8] */
    RECOMP_CALL(sub_1006EE01); /* 0x1006ECC1: call 0x1006ee01 */
    RECOMP_FLAGS_IN();
    _st[0] /= *(double*)ADDR(ebp + (-0x8)); /* 0x1006ECC6: fdiv qword ptr [ebp - 8] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x10)) = _v; } /* 0x1006ECC9: fstp qword ptr [ebp - 0x10] */
    RECOMP_CALL(sub_1006EE01); /* 0x1006ECCC: call 0x1006ee01 */
    RECOMP_FLAGS_IN();
    _st[0] /= *(double*)ADDR(ebp + (-0x8)); /* 0x1006ECD1: fdiv qword ptr [ebp - 8] */
    _st[0] += *(double*)ADDR(ebp + (-0x10)); /* 0x1006ECD4: fadd qword ptr [ebp - 0x10] */
    RECOMP_CALL(sub_10036DF7); /* 0x1006ECD7: call 0x10036df7 */
    RECOMP_FLAGS_IN();
    _st[0] /= *(double*)ADDR(ebp + (-0x18)); /* 0x1006ECDC: fdiv qword ptr [ebp - 0x18] */
    _st[0] = fabs(_st[0]); /* 0x1006ECDF: fabs  */
L_1006ECE1:
    _st[0] = -_st[0]; /* 0x1006ECE1: fchs  */
    RECOMP_CALL(sub_10036736); /* 0x1006ECE3: call 0x10036736 */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(ebp + (-0x20)); /* 0x1006ECE8: fmul qword ptr [ebp - 0x20] */
    edi = POP32_VAL(esp); /* 0x1006ECEB: pop edi */
    esi = POP32_VAL(esp); /* 0x1006ECEC: pop esi */
    esp = ebp; /* 0x1006ECED: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1006ECEF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1006ECF0: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1006ED00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006ED00u);

L_1006ED00:
    PUSH32(esp, ebp); /* 0x1006ED00: push ebp */
    ebp = esp; /* 0x1006ED01: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x1006ED03: sub esp, 0x18 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1006ED06: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1006ED07: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi + 0x10); /* 0x1006ED0A: mov eax, dword ptr [esi + 0x10] */
    MEM32(ebp + 0x8) = eax; /* 0x1006ED0D: mov dword ptr [ebp + 8], eax */
    /* cmp eax, 5 */ /* 0x1006ED10: cmp eax, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1006ED5A; /* 0x1006ED13: ja 0x1006ed5a */
L_1006ED15:
    /* cmp eax, 3 */ /* 0x1006ED15: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1006ED1E; /* 0x1006ED18: jae 0x1006ed1e */
L_1006ED1A:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x1006ED1A: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_1006ED5C; /* 0x1006ED1C: jmp 0x1006ed5c */
L_1006ED1E:
    ecx = esi; /* 0x1006ED1E: mov ecx, esi */
    RECOMP_CALL(sub_1006EE01); /* 0x1006ED20: call 0x1006ee01 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_10036DF7); /* 0x1006ED25: call 0x10036df7 */
    RECOMP_FLAGS_IN();
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x14)) = _v; } /* 0x1006ED2A: fstp qword ptr [ebp - 0x14] */
    fp_push((double)(int32_t)MEM32(ebp + 0x8)); /* 0x1006ED2D: fild dword ptr [ebp + 8] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0xC)) = _v; } /* 0x1006ED30: fstp qword ptr [ebp - 0xc] */
    fp_push(*(double*)ADDR(ebp + (-0xC))); /* 0x1006ED33: fld qword ptr [ebp - 0xc] */
    RECOMP_CALL(sub_10036DF7); /* 0x1006ED36: call 0x10036df7 */
    RECOMP_FLAGS_IN();
    _st[0] = *(double*)ADDR(ebp + (-0x14)) / _st[0]; /* 0x1006ED3B: fdivr qword ptr [ebp - 0x14] */
    ecx = esi; /* 0x1006ED3E: mov ecx, esi */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x14)) = _v; } /* 0x1006ED40: fstp qword ptr [ebp - 0x14] */
    RECOMP_CALL(sub_1006EDDF); /* 0x1006ED43: call 0x1006eddf */
    RECOMP_FLAGS_IN();
    _st[0] = *(double*)ADDR(ebp + (-0x14)) / _st[0]; /* 0x1006ED48: fdivr qword ptr [ebp - 0x14] */
    _st[0] = fabs(_st[0]); /* 0x1006ED4B: fabs  */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x1006ED68)); /* 0x1006ED4D: fcomp qword ptr [0x1006ed68] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1006ED53: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1006ED55: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006ED1A; /* 0x1006ED58: je 0x1006ed1a */
L_1006ED5A:
    SET_LO8(eax, 1); /* 0x1006ED5A: mov al, 1 */
L_1006ED5C:
    esi = POP32_VAL(esp); /* 0x1006ED5C: pop esi */
    esp = ebp; /* 0x1006ED5D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1006ED5F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1006ED60: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1006ED70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006ED70u);

L_1006ED70:
    fp_push(0.0); /* 0x1006ED70: fldz  */
    edx = ecx + 0x14; /* 0x1006ED72: lea edx, [ecx + 0x14] */
    PUSH32(esp, esi); /* 0x1006ED75: push esi */
    PUSH32(esp, 0x40u); /* 0x1006ED76: push 0x40 */
    esi = POP32_VAL(esp); /* 0x1006ED78: pop esi */
L_1006ED79:
    eax = MEM32(edx); /* 0x1006ED79: mov eax, dword ptr [edx] */
    /* cmp eax, MEM32(ecx + 0x814) */ /* 0x1006ED7B: cmp eax, dword ptr [ecx + 0x814] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x814));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006EDAA; /* 0x1006ED81: je 0x1006edaa */
L_1006ED83:
    /* cmp eax, MEM32(ecx + 0x818) */ /* 0x1006ED83: cmp eax, dword ptr [ecx + 0x818] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x818));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006EDAA; /* 0x1006ED89: je 0x1006edaa */
L_1006ED8B:
    eax = MEM32(ecx + 0x824); /* 0x1006ED8B: mov eax, dword ptr [ecx + 0x824] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(edx + 0x4); /* 0x1006ED91: sub eax, dword ptr [edx + 4] */
    _flag_k = FK_CMP;
    /* cmp eax, 0x32u */ /* 0x1006ED94: cmp eax, 0x32 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x32u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1006EDAA; /* 0x1006ED97: jbe 0x1006edaa */
L_1006ED99:
    _flag_a = (uint32_t)(MEM32(edx + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(edx + (-0x4)) = MEM32(edx + (-0x4)) & 0; /* 0x1006ED99: and dword ptr [edx - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(0);
    MEM32(edx) = MEM32(edx) & 0; /* 0x1006ED9D: and dword ptr [edx], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(edx + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(edx + 0x4) = MEM32(edx + 0x4) & 0; /* 0x1006EDA0: and dword ptr [edx + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    *(double*)ADDR(edx + (-0x14)) = _st[0]; /* 0x1006EDA4: fst qword ptr [edx - 0x14] */
    *(double*)ADDR(edx + (-0xC)) = _st[0]; /* 0x1006EDA7: fst qword ptr [edx - 0xc] */
L_1006EDAA:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x20u; /* 0x1006EDAA: add edx, 0x20 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1006EDAD: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1006ED79; /* 0x1006EDAE: jne 0x1006ed79 */
L_1006EDB0:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1006EDB0: fstp st(0) */
    esi = POP32_VAL(esp); /* 0x1006EDB2: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006EDB3: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006EDB4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006EDB4u);

L_1006EDB4:
    PUSH32(esp, ebp); /* 0x1006EDB4: push ebp */
    ebp = esp; /* 0x1006EDB5: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x1006EDB7: mov edx, dword ptr [ebp + 8] */
    eax = edx; /* 0x1006EDBA: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3Fu);
    eax = eax & 0x3Fu; /* 0x1006EDBC: and eax, 0x3f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (5u) _cf = (((eax) >> 27) & 1u); /* 0x1006EDBF: shl eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack((eax << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 5u; /* 0x1006EDBF: shl eax, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1006EDC2: add eax, ecx */
    _flag_k = FK_ADD;
    /* cmp MEM32(eax + 0x14), edx */ /* 0x1006EDC4: cmp dword ptr [eax + 0x14], edx */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006EDDB; /* 0x1006EDC7: je 0x1006eddb */
L_1006EDC9:
    fp_push(0.0); /* 0x1006EDC9: fldz  */
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(eax + 0x10) = MEM32(eax + 0x10) & 0; /* 0x1006EDCB: and dword ptr [eax + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(eax + 0x18)); _flag_b = (uint32_t)(0);
    MEM32(eax + 0x18) = MEM32(eax + 0x18) & 0; /* 0x1006EDCF: and dword ptr [eax + 0x18], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    *(double*)ADDR(eax) = _st[0]; /* 0x1006EDD3: fst qword ptr [eax] */
    { double _v = fp_pop(); *(double*)ADDR(eax + 0x8) = _v; } /* 0x1006EDD5: fstp qword ptr [eax + 8] */
    MEM32(eax + 0x14) = edx; /* 0x1006EDD8: mov dword ptr [eax + 0x14], edx */
L_1006EDDB:
    ebp = POP32_VAL(esp); /* 0x1006EDDB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1006EDDC: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1006EDDF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006EDDFu);

L_1006EDDF:
    PUSH32(esp, ebp); /* 0x1006EDDF: push ebp */
    ebp = esp; /* 0x1006EDE0: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1006EDE2: push ecx */
    PUSH32(esp, ecx); /* 0x1006EDE3: push ecx */
    eax = MEM32(ecx + 0x10); /* 0x1006EDE4: mov eax, dword ptr [ecx + 0x10] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1006EDE7: mov dword ptr [ebp - 4], eax */
    /* test eax, eax */ /* 0x1006EDEA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006EDF2; /* 0x1006EDEC: jne 0x1006edf2 */
L_1006EDEE:
    fp_push(0.0); /* 0x1006EDEE: fldz  */
    goto L_1006EDFD; /* 0x1006EDF0: jmp 0x1006edfd */
L_1006EDF2:
    fp_push((double)(int32_t)MEM32(ebp + (-0x4))); /* 0x1006EDF2: fild dword ptr [ebp - 4] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x1006EDF5: fstp qword ptr [ebp - 8] */
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x1006EDF8: fld qword ptr [ebp - 8] */
    _st[0] = *(double*)ADDR(ecx) / _st[0]; /* 0x1006EDFB: fdivr qword ptr [ecx] */
L_1006EDFD:
    esp = ebp; /* 0x1006EDFD: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1006EDFF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006EE00: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006EE01(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006EE01u);

L_1006EE01:
    PUSH32(esp, ebp); /* 0x1006EE01: push ebp */
    ebp = esp; /* 0x1006EE02: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1006EE04: push ecx */
    PUSH32(esp, ecx); /* 0x1006EE05: push ecx */
    eax = MEM32(ecx + 0x10); /* 0x1006EE06: mov eax, dword ptr [ecx + 0x10] */
    fp_push(0.0); /* 0x1006EE09: fldz  */
    MEM32(ebp + (-0x4)) = eax; /* 0x1006EE0B: mov dword ptr [ebp - 4], eax */
    fp_push(_st[0]); /* 0x1006EE0E: fld st(0) */
    /* cmp eax, 2 */ /* 0x1006EE10: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1006EE34; /* 0x1006EE13: jl 0x1006ee34 */
L_1006EE15:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1006EE15: fstp st(0) */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1006EE17: dec eax */
    _flag_k = FK_DEC;
    fp_push(*(double*)ADDR(ecx)); /* 0x1006EE18: fld qword ptr [ecx] */
    _st[0] *= _st[0]; /* 0x1006EE1A: fmul st(0), st(0) */
    fp_push((double)(int32_t)MEM32(ebp + (-0x4))); /* 0x1006EE1C: fild dword ptr [ebp - 4] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x1006EE1F: fstp qword ptr [ebp - 8] */
    _st[0] /= *(double*)ADDR(ebp + (-0x8)); /* 0x1006EE22: fdiv qword ptr [ebp - 8] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1006EE25: mov dword ptr [ebp - 4], eax */
    _st[0] = *(double*)ADDR(ecx + 0x8) - _st[0]; /* 0x1006EE28: fsubr qword ptr [ecx + 8] */
    fp_push((double)(int32_t)MEM32(ebp + (-0x4))); /* 0x1006EE2B: fild dword ptr [ebp - 4] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x1006EE2E: fstp qword ptr [ebp - 8] */
    _st[0] /= *(double*)ADDR(ebp + (-0x8)); /* 0x1006EE31: fdiv qword ptr [ebp - 8] */
L_1006EE34:
    fp_push(_st[0]); /* 0x1006EE34: fld st(0) */
    _st[0] = fabs(_st[0]); /* 0x1006EE36: fabs  */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x1006EE50)); /* 0x1006EE38: fcomp qword ptr [0x1006ee50] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1006EE3E: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1006EE40: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006EE49; /* 0x1006EE43: jne 0x1006ee49 */
L_1006EE45:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1006EE45: fstp st(1) */
    goto L_1006EE4B; /* 0x1006EE47: jmp 0x1006ee4b */
L_1006EE49:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1006EE49: fstp st(0) */
L_1006EE4B:
    esp = ebp; /* 0x1006EE4B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1006EE4D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006EE4E: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006EE58(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006EE58u);

L_1006EE58:
    PUSH32(esp, ebp); /* 0x1006EE58: push ebp */
    ebp = esp; /* 0x1006EE59: mov ebp, esp */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x1006EE5B: fld qword ptr [ebp + 8] */
    fp_push(0.0); /* 0x1006EE5E: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1006EE60: fucom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1006EE62: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x1006EE64: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1006EE6D; /* 0x1006EE67: jp 0x1006ee6d */
L_1006EE69:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1006EE69: fstp st(1) */
    ebp = POP32_VAL(esp); /* 0x1006EE6B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006EE6C: ret  */
L_1006EE6D:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1006EE6D: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1006EE6F: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1006EE71: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1006EE7F; /* 0x1006EE74: jp 0x1006ee7f */
L_1006EE76:
    MEM32(ebp + 0xC) = 1; /* 0x1006EE76: mov dword ptr [ebp + 0xc], 1 */
    goto L_1006EE83; /* 0x1006EE7D: jmp 0x1006ee83 */
L_1006EE7F:
    _flag_a = (uint32_t)((MEM32(ebp + 0xC) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + 0xC) | 0xFFFFFFFFu));
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) | 0xFFFFFFFFu; /* 0x1006EE7F: or dword ptr [ebp + 0xc], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1006EE83:
    fp_push((double)(int32_t)MEM32(ebp + 0xC)); /* 0x1006EE83: fild dword ptr [ebp + 0xc] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + 0x8) = _v; } /* 0x1006EE86: fstp qword ptr [ebp + 8] */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x1006EE89: fld qword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x1006EE8C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006EE8D: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006EE8E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006EE8Eu);

L_1006EE8E:
    PUSH32(esp, ebp); /* 0x1006EE8E: push ebp */
    ebp = esp; /* 0x1006EE8F: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1006EE91: sub esp, 0x10 */
    _flag_k = FK_CMP;
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x1006EE94: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1006EE9A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1006EEA6; /* 0x1006EE9C: jle 0x1006eea6 */
L_1006EE9E:
    eax = (uint32_t)LO16(eax); /* 0x1006EE9E: movzx eax, ax */
    _flag_a = (uint32_t)((eax | 0x80070000u)); _flag_b = (uint32_t)((eax | 0x80070000u));
    eax = eax | 0x80070000u; /* 0x1006EEA1: or eax, 0x80070000 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1006EEA6:
    PUSH32(esp, eax); /* 0x1006EEA6: push eax */
    ecx = ebp + (-0x10); /* 0x1006EEA7: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1006C31C); /* 0x1006EEAA: call 0x1006c31c */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x100DCF40u); /* 0x1006EEAF: push 0x100dcf40 */
    eax = ebp + (-0x10); /* 0x1006EEB4: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1006EEB7: push eax */
    RECOMP_CALL(sub_100192EB); /* 0x1006EEB8: call 0x100192eb */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1006EEBDu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1006EEBE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006EEBEu);

L_1006EEBE:
    PUSH32(esp, ebp); /* 0x1006EEBE: push ebp */
    ebp = esp; /* 0x1006EEBF: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x1006EEC1: sub esp, 0x18 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1006EEC4: push esi */
    PUSH32(esp, edi); /* 0x1006EEC5: push edi */
    PUSH32(esp, 0x100E0AA4u); /* 0x1006EEC6: push 0x100e0aa4 */
    PUSH32(esp, 0); /* 0x1006EECB: push 0 */
    RECOMP_ICALL(MEM32(0x100E516C)); /* 0x1006EECD: call dword ptr [0x100e516c] */
    RECOMP_FLAGS_IN();
    esi = MEM32(0x100E500C); /* 0x1006EED3: mov esi, dword ptr [0x100e500c] */
    RECOMP_ICALL(esi); /* 0x1006EED9: call esi */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0x7Au */ /* 0x1006EEDB: cmp eax, 0x7a */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7Au);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006EEE8; /* 0x1006EEDE: je 0x1006eee8 */
L_1006EEE0:
    RECOMP_ICALL(esi); /* 0x1006EEE0: call esi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1006EEE2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1006EF40; /* 0x1006EEE4: jg 0x1006ef40 */
L_1006EEE6:
    goto L_1006EF48; /* 0x1006EEE6: jmp 0x1006ef48 */
L_1006EEE8:
    PUSH32(esp, MEM32(0x100E0AA4)); /* 0x1006EEE8: push dword ptr [0x100e0aa4] */
    RECOMP_CALL(sub_1000ED30); /* 0x1006EEEE: call 0x1000ed30 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1006EEF3: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x1006EEF5: pop ecx */
    /* test edi, edi */ /* 0x1006EEF6: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006EF20; /* 0x1006EEF8: jne 0x1006ef20 */
L_1006EEFA:
    PUSH32(esp, 1); /* 0x1006EEFA: push 1 */
    eax = ebp + (-0x4); /* 0x1006EEFC: lea eax, [ebp - 4] */
    MEM32(ebp + (-0x4)) = 0x1002C7ECu; /* 0x1006EEFF: mov dword ptr [ebp - 4], 0x1002c7ec */
    PUSH32(esp, eax); /* 0x1006EF06: push eax */
    ecx = ebp + (-0x10); /* 0x1006EF07: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_10033A4A); /* 0x1006EF0A: call 0x10033a4a */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x10)) = 0x1002D1CCu; /* 0x1006EF0F: mov dword ptr [ebp - 0x10], 0x1002d1cc */
    eax = ebp + (-0x10); /* 0x1006EF16: lea eax, [ebp - 0x10] */
    PUSH32(esp, 0x1002C7FCu); /* 0x1006EF19: push 0x1002c7fc */
    goto L_1006EF59; /* 0x1006EF1E: jmp 0x1006ef59 */
L_1006EF20:
    PUSH32(esp, 0x100E0AA4u); /* 0x1006EF20: push 0x100e0aa4 */
    PUSH32(esp, edi); /* 0x1006EF25: push edi */
    RECOMP_ICALL(MEM32(0x100E516C)); /* 0x1006EF26: call dword ptr [0x100e516c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1006EF2C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006EF38; /* 0x1006EF2E: jne 0x1006ef38 */
L_1006EF30:
    RECOMP_ICALL(esi); /* 0x1006EF30: call esi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1006EF32: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1006EF40; /* 0x1006EF34: jg 0x1006ef40 */
L_1006EF36:
    goto L_1006EF48; /* 0x1006EF36: jmp 0x1006ef48 */
L_1006EF38:
    eax = edi; /* 0x1006EF38: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1006EF3A: pop edi */
    esi = POP32_VAL(esp); /* 0x1006EF3B: pop esi */
    esp = ebp; /* 0x1006EF3C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1006EF3E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006EF3F: ret  */
L_1006EF40:
    eax = (uint32_t)LO16(eax); /* 0x1006EF40: movzx eax, ax */
    _flag_a = (uint32_t)((eax | 0x80070000u)); _flag_b = (uint32_t)((eax | 0x80070000u));
    eax = eax | 0x80070000u; /* 0x1006EF43: or eax, 0x80070000 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1006EF48:
    PUSH32(esp, eax); /* 0x1006EF48: push eax */
    ecx = ebp + (-0x14); /* 0x1006EF49: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1006C31C); /* 0x1006EF4C: call 0x1006c31c */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x100DCF40u); /* 0x1006EF51: push 0x100dcf40 */
    eax = ebp + (-0x14); /* 0x1006EF56: lea eax, [ebp - 0x14] */
L_1006EF59:
    PUSH32(esp, eax); /* 0x1006EF59: push eax */
    RECOMP_CALL(sub_100192EB); /* 0x1006EF5A: call 0x100192eb */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1006EF5Fu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1006EF60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006EF60u);

L_1006EF60:
    PUSH32(esp, ebp); /* 0x1006EF60: push ebp */
    ebp = esp; /* 0x1006EF61: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1006EF63: push esi */
    PUSH32(esp, edi); /* 0x1006EF64: push edi */
    esi = edx; /* 0x1006EF65: mov esi, edx */
    edi = ecx; /* 0x1006EF67: mov edi, ecx */
    goto L_1006EF78; /* 0x1006EF69: jmp 0x1006ef78 */
L_1006EF6B:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x1006EF6B: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0x3E5u */ /* 0x1006EF71: cmp eax, 0x3e5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3E5u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006EF87; /* 0x1006EF76: je 0x1006ef87 */
L_1006EF78:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1006EF78: push dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1006EF7B: push esi */
    PUSH32(esp, edi); /* 0x1006EF7C: push edi */
    RECOMP_ICALL(MEM32(0x100E5184)); /* 0x1006EF7D: call dword ptr [0x100e5184] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1006EF83: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006EF6B; /* 0x1006EF85: je 0x1006ef6b */
L_1006EF87:
    edi = POP32_VAL(esp); /* 0x1006EF87: pop edi */
    esi = POP32_VAL(esp); /* 0x1006EF88: pop esi */
    ebp = POP32_VAL(esp); /* 0x1006EF89: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006EF8A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006EF8B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006EF8Bu);

L_1006EF8B:
    { _itail_tgt = (uint32_t)(MEM32(0x100E5034)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1006EF91(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006EF91u);

L_1006EF91:
    PUSH32(esp, ebp); /* 0x1006EF91: push ebp */
    ebp = esp; /* 0x1006EF92: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x1006EF94: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, 0); /* 0x1006EF97: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1006EF99: push dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1006EF9C: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1006EF9D: push dword ptr [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x1006EFA0: push eax */
    RECOMP_ICALL(MEM32(0x100E5170)); /* 0x1006EFA1: call dword ptr [0x100e5170] */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO16(eax); /* 0x1006EFA7: movzx eax, ax */
    ebp = POP32_VAL(esp); /* 0x1006EFAA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006EFAB: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006EFAC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006EFACu);

L_1006EFAC:
    eax = MEM32(0x100E066C); /* 0x1006EFAC: mov eax, dword ptr [0x100e066c] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006EFB1: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006EFB2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006EFB2u);

L_1006EFB2:
    PUSH32(esp, ecx); /* 0x1006EFB2: push ecx */
    RECOMP_ICALL(MEM32(0x100E5040)); /* 0x1006EFB3: call dword ptr [0x100e5040] */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006EFB9: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006EFBA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006EFBAu);

L_1006EFBA:
    PUSH32(esp, ecx); /* 0x1006EFBA: push ecx */
    RECOMP_ICALL(MEM32(0x100E5038)); /* 0x1006EFBB: call dword ptr [0x100e5038] */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006EFC1: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006EFC2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006EFC2u);

L_1006EFC2:
    PUSH32(esp, ecx); /* 0x1006EFC2: push ecx */
    RECOMP_ICALL(MEM32(0x100E5190)); /* 0x1006EFC3: call dword ptr [0x100e5190] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1006EFC9: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1006EFCB: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1006EFCD: neg eax */
    _flag_k = FK_CMP;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006EFCF: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006EFD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006EFD0u);

L_1006EFD0:
    PUSH32(esp, ecx); /* 0x1006EFD0: push ecx */
    RECOMP_ICALL(MEM32(0x100E503C)); /* 0x1006EFD1: call dword ptr [0x100e503c] */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006EFD7: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006EFD8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006EFD8u);

L_1006EFD8:
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0);
    MEM32(ecx) = MEM32(ecx) & 0; /* 0x1006EFD8: and dword ptr [ecx], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx; /* 0x1006EFDB: mov eax, ecx */
    MEM32(ecx + 0x4) = 0xFFFFFFFFu; /* 0x1006EFDD: mov dword ptr [ecx + 4], 0xffffffff */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006EFE4: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006EFE5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006EFE5u);

L_1006EFE5:
    PUSH32(esp, ebp); /* 0x1006EFE5: push ebp */
    ebp = esp; /* 0x1006EFE6: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1006EFE8: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1006EFEB: push ebx */
    PUSH32(esp, esi); /* 0x1006EFEC: push esi */
    PUSH32(esp, edi); /* 0x1006EFED: push edi */
    esi = ecx; /* 0x1006EFEE: mov esi, ecx */
    RECOMP_ICALL(MEM32(0x100E5034)); /* 0x1006EFF0: call dword ptr [0x100e5034] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x1006EFF6: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = esi + 0x4; /* 0x1006EFFA: lea ebx, [esi + 4] */
    edi = eax; /* 0x1006EFFD: mov edi, eax */
    MEM32(ebp + (-0x4)) = 0x1007A487u; /* 0x1006EFFF: mov dword ptr [ebp - 4], 0x1007a487 */
    edx = edi; /* 0x1006F006: mov edx, edi */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1006F008: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(ebx); if (eax == _d) { MEM32(ebx) = edx; } else { eax = _d; } } /* 0x1006F00B: lock cmpxchg dword ptr [ebx], edx */
    _flag_k = FK_CMP;
    goto L_1006F026; /* 0x1006F00F: jmp 0x1006f026 */
L_1006F011:
    /* cmp eax, edi */ /* 0x1006F011: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006F038; /* 0x1006F013: je 0x1006f038 */
L_1006F015:
    ecx = ebp + (-0x10); /* 0x1006F015: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_10068D76); /* 0x1006F018: call 0x10068d76 */
    RECOMP_FLAGS_IN();
    ecx = edi; /* 0x1006F01D: mov ecx, edi */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1006F01F: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(ebx); if (eax == _d) { MEM32(ebx) = ecx; } else { eax = _d; } } /* 0x1006F022: lock cmpxchg dword ptr [ebx], ecx */
    _flag_k = FK_CMP;
L_1006F026:
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1006F026: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1006F011; /* 0x1006F029: jne 0x1006f011 */
L_1006F02B:
    MEM32(esi) = 1; /* 0x1006F02B: mov dword ptr [esi], 1 */
L_1006F031:
    edi = POP32_VAL(esp); /* 0x1006F031: pop edi */
    esi = POP32_VAL(esp); /* 0x1006F032: pop esi */
    ebx = POP32_VAL(esp); /* 0x1006F033: pop ebx */
    esp = ebp; /* 0x1006F034: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1006F036: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006F037: ret  */
L_1006F038:
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(1);
    MEM32(esi) = MEM32(esi) + 1; /* 0x1006F038: inc dword ptr [esi] */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_1006F031; /* 0x1006F03A: jmp 0x1006f031 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1006F03C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006F03Cu);

L_1006F03C:
    PUSH32(esp, esi); /* 0x1006F03C: push esi */
    PUSH32(esp, edi); /* 0x1006F03D: push edi */
    edi = ecx; /* 0x1006F03E: mov edi, ecx */
    RECOMP_ICALL(MEM32(0x100E5034)); /* 0x1006F040: call dword ptr [0x100e5034] */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1006F046: mov ecx, eax */
    edx = edi + 0x4; /* 0x1006F048: lea edx, [edi + 4] */
    esi = ecx; /* 0x1006F04B: mov esi, ecx */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1006F04D: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(edx); if (eax == _d) { MEM32(edx) = esi; } else { eax = _d; } } /* 0x1006F050: lock cmpxchg dword ptr [edx], esi */
    _flag_k = FK_CMP;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1006F054: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006F061; /* 0x1006F057: je 0x1006f061 */
L_1006F059:
    /* cmp eax, ecx */ /* 0x1006F059: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006F061; /* 0x1006F05B: je 0x1006f061 */
L_1006F05D:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x1006F05D: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_1006F065; /* 0x1006F05F: jmp 0x1006f065 */
L_1006F061:
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(1);
    MEM32(edi) = MEM32(edi) + 1; /* 0x1006F061: inc dword ptr [edi] */
    _flag_k = FK_INC;
    SET_LO8(eax, 1); /* 0x1006F063: mov al, 1 */
L_1006F065:
    edi = POP32_VAL(esp); /* 0x1006F065: pop edi */
    esi = POP32_VAL(esp); /* 0x1006F066: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006F067: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006F068(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006F068u);

L_1006F068:
    PUSH32(esp, esi); /* 0x1006F068: push esi */
    esi = ecx; /* 0x1006F069: mov esi, ecx */
    RECOMP_ICALL(MEM32(0x100E5034)); /* 0x1006F06B: call dword ptr [0x100e5034] */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esi + 0x4), eax */ /* 0x1006F071: cmp dword ptr [esi + 4], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1006F089; /* 0x1006F074: jne 0x1006f089 */
L_1006F076:
    eax = MEM32(esi); /* 0x1006F076: mov eax, dword ptr [esi] */
    /* cmp eax, 1 */ /* 0x1006F078: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1006F089; /* 0x1006F07B: jl 0x1006f089 */
L_1006F07D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1006F07D: dec eax */
    _flag_k = FK_DEC;
    MEM32(esi) = eax; /* 0x1006F07E: mov dword ptr [esi], eax */
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1006F089; /* 0x1006F080: jne 0x1006f089 */
L_1006F082:
    MEM32(esi + 0x4) = 0xFFFFFFFFu; /* 0x1006F082: mov dword ptr [esi + 4], 0xffffffff */
L_1006F089:
    esi = POP32_VAL(esp); /* 0x1006F089: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006F08A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006F08B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006F08Bu);

L_1006F08B:
    PUSH32(esp, esi); /* 0x1006F08B: push esi */
    esi = ecx; /* 0x1006F08C: mov esi, ecx */
    RECOMP_CALL(sub_1002C0DD); /* 0x1006F08E: call 0x1002c0dd */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1006F093: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1006F095: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006F096: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006F097(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006F097u);

L_1006F097:
    PUSH32(esp, ebp); /* 0x1006F097: push ebp */
    ebp = esp; /* 0x1006F098: mov ebp, esp */
    PUSH32(esp, 1); /* 0x1006F09A: push 1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1006F09C: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1006F550); /* 0x1006F09F: call 0x1006f550 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1006F0A4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1006F0A5: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1006F0A8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006F0A8u);

L_1006F0A8:
    goto L_1006F4D7; /* 0x1006F0A8: jmp 0x1006f4d7 */
L_1006F4D7:
    PUSH32(esp, ebp); /* 0x1006F4D7: push ebp */
    ebp = esp; /* 0x1006F4D8: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x1006F4DA: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1006F4DD: push ecx */
    PUSH32(esp, ebx); /* 0x1006F4DE: push ebx */
    PUSH32(esp, esi); /* 0x1006F4DF: push esi */
    PUSH32(esp, edi); /* 0x1006F4E0: push edi */
    edi = ecx; /* 0x1006F4E1: mov edi, ecx */
    ecx = MEM32(edi + 0x18); /* 0x1006F4E3: mov ecx, dword ptr [edi + 0x18] */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    MEM32(edi) = MEM32(edi) & 0; /* 0x1006F4E6: and dword ptr [edi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ecx + 0x4); /* 0x1006F4E9: mov esi, dword ptr [ecx + 4] */
    MEM32(edi + 0x18) = esi; /* 0x1006F4EC: mov dword ptr [edi + 0x18], esi */
    /* test esi, esi */ /* 0x1006F4EF: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006F50C; /* 0x1006F4F1: jne 0x1006f50c */
L_1006F4F3:
    edx = edi + 0x1C; /* 0x1006F4F3: lea edx, [edi + 0x1c] */
    eax = ecx; /* 0x1006F4F6: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(edx); if (eax == _d) { MEM32(edx) = esi; } else { eax = _d; } } /* 0x1006F4F8: lock cmpxchg dword ptr [edx], esi */
    _flag_k = FK_CMP;
    /* cmp eax, ecx */ /* 0x1006F4FC: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006F549; /* 0x1006F4FE: je 0x1006f549 */
L_1006F500:
    RECOMP_CALL(sub_1006F291); /* 0x1006F500: call 0x1006f291 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1006F505: mov esi, eax */
    MEM32(edi + 0x18) = esi; /* 0x1006F507: mov dword ptr [edi + 0x18], esi */
    goto L_1006F545; /* 0x1006F50A: jmp 0x1006f545 */
L_1006F50C:
    ecx = esi; /* 0x1006F50C: mov ecx, esi */
    RECOMP_CALL(sub_1006F26E); /* 0x1006F50E: call 0x1006f26e */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1006F513: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006F549; /* 0x1006F515: jne 0x1006f549 */
L_1006F517:
    ebx = esi; /* 0x1006F517: mov ebx, esi */
    esi = MEM32(esi + 0x4); /* 0x1006F519: mov esi, dword ptr [esi + 4] */
    MEM32(edi + 0x18) = esi; /* 0x1006F51C: mov dword ptr [edi + 0x18], esi */
    /* test esi, esi */ /* 0x1006F51F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006F53E; /* 0x1006F521: jne 0x1006f53e */
L_1006F523:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1006F523: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edi + 0x1C; /* 0x1006F525: lea ecx, [edi + 0x1c] */
    eax = ebx; /* 0x1006F528: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(ecx); if (eax == _d) { MEM32(ecx) = edx; } else { eax = _d; } } /* 0x1006F52A: lock cmpxchg dword ptr [ecx], edx */
    _flag_k = FK_CMP;
    /* cmp eax, ebx */ /* 0x1006F52E: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006F53E; /* 0x1006F530: je 0x1006f53e */
L_1006F532:
    ecx = ebx; /* 0x1006F532: mov ecx, ebx */
    RECOMP_CALL(sub_1006F291); /* 0x1006F534: call 0x1006f291 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1006F539: mov esi, eax */
    MEM32(edi + 0x18) = esi; /* 0x1006F53B: mov dword ptr [edi + 0x18], esi */
L_1006F53E:
    ecx = ebx; /* 0x1006F53E: mov ecx, ebx */
    RECOMP_CALL(sub_1006F2BE); /* 0x1006F540: call 0x1006f2be */
    RECOMP_FLAGS_IN();
L_1006F545:
    /* test esi, esi */ /* 0x1006F545: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006F50C; /* 0x1006F547: jne 0x1006f50c */
L_1006F549:
    edi = POP32_VAL(esp); /* 0x1006F549: pop edi */
    esi = POP32_VAL(esp); /* 0x1006F54A: pop esi */
    ebx = POP32_VAL(esp); /* 0x1006F54B: pop ebx */
    esp = ebp; /* 0x1006F54C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1006F54E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006F54F: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006F0AD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006F0ADu);

L_1006F0AD:
    PUSH32(esp, esi); /* 0x1006F0AD: push esi */
    esi = ecx; /* 0x1006F0AE: mov esi, ecx */
    RECOMP_CALL(sub_1002C0DD); /* 0x1006F0B0: call 0x1002c0dd */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x20)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x20) = MEM32(esi + 0x20) & 0; /* 0x1006F0B5: and dword ptr [esi + 0x20], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi; /* 0x1006F0B9: mov eax, esi */
    MEM32(esi + 0x24) = 0xFFFFFFFFu; /* 0x1006F0BB: mov dword ptr [esi + 0x24], 0xffffffff */
    esi = POP32_VAL(esp); /* 0x1006F0C2: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006F0C3: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006F0C4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006F0C4u);

L_1006F0C4:
    PUSH32(esp, ebp); /* 0x1006F0C4: push ebp */
    ebp = esp; /* 0x1006F0C5: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1006F0C7: push esi */
    PUSH32(esp, edi); /* 0x1006F0C8: push edi */
    esi = ecx; /* 0x1006F0C9: mov esi, ecx */
    RECOMP_ICALL(MEM32(0x100E5034)); /* 0x1006F0CB: call dword ptr [0x100e5034] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1006F0D1: mov edi, eax */
    /* cmp MEM32(esi + 0x24), edi */ /* 0x1006F0D3: cmp dword ptr [esi + 0x24], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x24)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1006F0DD; /* 0x1006F0D6: jne 0x1006f0dd */
L_1006F0D8:
    _flag_a = (uint32_t)(MEM32(esi + 0x20)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x20) = MEM32(esi + 0x20) + 1; /* 0x1006F0D8: inc dword ptr [esi + 0x20] */
    _flag_k = FK_INC;
    goto L_1006F0F3; /* 0x1006F0DB: jmp 0x1006f0f3 */
L_1006F0DD:
    PUSH32(esp, 1); /* 0x1006F0DD: push 1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1006F0DF: push dword ptr [ebp + 8] */
    ecx = esi; /* 0x1006F0E2: mov ecx, esi */
    RECOMP_CALL(sub_1006F550); /* 0x1006F0E4: call 0x1006f550 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x24) = edi; /* 0x1006F0E9: mov dword ptr [esi + 0x24], edi */
    MEM32(esi + 0x20) = 1; /* 0x1006F0EC: mov dword ptr [esi + 0x20], 1 */
L_1006F0F3:
    edi = POP32_VAL(esp); /* 0x1006F0F3: pop edi */
    esi = POP32_VAL(esp); /* 0x1006F0F4: pop esi */
    ebp = POP32_VAL(esp); /* 0x1006F0F5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1006F0F6: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1006F0F9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006F0F9u);

L_1006F0F9:
    _flag_a = (uint32_t)(MEM32(ecx + 0x20)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x20) = MEM32(ecx + 0x20) - 1; /* 0x1006F0F9: dec dword ptr [ecx + 0x20] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1006F10A; /* 0x1006F0FC: jne 0x1006f10a */
L_1006F0FE:
    MEM32(ecx + 0x24) = 0xFFFFFFFFu; /* 0x1006F0FE: mov dword ptr [ecx + 0x24], 0xffffffff */
    goto L_1006F4D7; /* 0x1006F105: jmp 0x1006f4d7 */
L_1006F10A:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006F10A: ret  */
L_1006F4D7:
    PUSH32(esp, ebp); /* 0x1006F4D7: push ebp */
    ebp = esp; /* 0x1006F4D8: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x1006F4DA: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1006F4DD: push ecx */
    PUSH32(esp, ebx); /* 0x1006F4DE: push ebx */
    PUSH32(esp, esi); /* 0x1006F4DF: push esi */
    PUSH32(esp, edi); /* 0x1006F4E0: push edi */
    edi = ecx; /* 0x1006F4E1: mov edi, ecx */
    ecx = MEM32(edi + 0x18); /* 0x1006F4E3: mov ecx, dword ptr [edi + 0x18] */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    MEM32(edi) = MEM32(edi) & 0; /* 0x1006F4E6: and dword ptr [edi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ecx + 0x4); /* 0x1006F4E9: mov esi, dword ptr [ecx + 4] */
    MEM32(edi + 0x18) = esi; /* 0x1006F4EC: mov dword ptr [edi + 0x18], esi */
    /* test esi, esi */ /* 0x1006F4EF: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006F50C; /* 0x1006F4F1: jne 0x1006f50c */
L_1006F4F3:
    edx = edi + 0x1C; /* 0x1006F4F3: lea edx, [edi + 0x1c] */
    eax = ecx; /* 0x1006F4F6: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(edx); if (eax == _d) { MEM32(edx) = esi; } else { eax = _d; } } /* 0x1006F4F8: lock cmpxchg dword ptr [edx], esi */
    _flag_k = FK_CMP;
    /* cmp eax, ecx */ /* 0x1006F4FC: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006F549; /* 0x1006F4FE: je 0x1006f549 */
L_1006F500:
    RECOMP_CALL(sub_1006F291); /* 0x1006F500: call 0x1006f291 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1006F505: mov esi, eax */
    MEM32(edi + 0x18) = esi; /* 0x1006F507: mov dword ptr [edi + 0x18], esi */
    goto L_1006F545; /* 0x1006F50A: jmp 0x1006f545 */
L_1006F50C:
    ecx = esi; /* 0x1006F50C: mov ecx, esi */
    RECOMP_CALL(sub_1006F26E); /* 0x1006F50E: call 0x1006f26e */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1006F513: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006F549; /* 0x1006F515: jne 0x1006f549 */
L_1006F517:
    ebx = esi; /* 0x1006F517: mov ebx, esi */
    esi = MEM32(esi + 0x4); /* 0x1006F519: mov esi, dword ptr [esi + 4] */
    MEM32(edi + 0x18) = esi; /* 0x1006F51C: mov dword ptr [edi + 0x18], esi */
    /* test esi, esi */ /* 0x1006F51F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006F53E; /* 0x1006F521: jne 0x1006f53e */
L_1006F523:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1006F523: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edi + 0x1C; /* 0x1006F525: lea ecx, [edi + 0x1c] */
    eax = ebx; /* 0x1006F528: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(ecx); if (eax == _d) { MEM32(ecx) = edx; } else { eax = _d; } } /* 0x1006F52A: lock cmpxchg dword ptr [ecx], edx */
    _flag_k = FK_CMP;
    /* cmp eax, ebx */ /* 0x1006F52E: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006F53E; /* 0x1006F530: je 0x1006f53e */
L_1006F532:
    ecx = ebx; /* 0x1006F532: mov ecx, ebx */
    RECOMP_CALL(sub_1006F291); /* 0x1006F534: call 0x1006f291 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1006F539: mov esi, eax */
    MEM32(edi + 0x18) = esi; /* 0x1006F53B: mov dword ptr [edi + 0x18], esi */
L_1006F53E:
    ecx = ebx; /* 0x1006F53E: mov ecx, ebx */
    RECOMP_CALL(sub_1006F2BE); /* 0x1006F540: call 0x1006f2be */
    RECOMP_FLAGS_IN();
L_1006F545:
    /* test esi, esi */ /* 0x1006F545: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006F50C; /* 0x1006F547: jne 0x1006f50c */
L_1006F549:
    edi = POP32_VAL(esp); /* 0x1006F549: pop edi */
    esi = POP32_VAL(esp); /* 0x1006F54A: pop esi */
    ebx = POP32_VAL(esp); /* 0x1006F54B: pop ebx */
    esp = ebp; /* 0x1006F54C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1006F54E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006F54F: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006F10B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006F10Bu);

L_1006F10B:
    MEM32(ecx) = 0; /* 0x1006F10B: mov dword ptr [ecx], 0 */
    eax = ecx; /* 0x1006F111: mov eax, ecx */
    MEM32(ecx + 0x4) = 0; /* 0x1006F113: mov dword ptr [ecx + 4], 0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006F11A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006F11B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006F11Bu);

L_1006F11B:
    PUSH32(esp, esi); /* 0x1006F11B: push esi */
    PUSH32(esp, edi); /* 0x1006F11C: push edi */
    esi = ecx; /* 0x1006F11D: mov esi, ecx */
L_1006F11F:
    /* cmp MEM32(esi + 0x4), 0 */ /* 0x1006F11F: cmp dword ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1006F12F; /* 0x1006F123: jle 0x1006f12f */
L_1006F125:
    PUSH32(esp, ecx); /* 0x1006F125: push ecx */
    ecx = esi + 0x4; /* 0x1006F126: lea ecx, [esi + 4] */
    RECOMP_CALL(sub_1006F1AC); /* 0x1006F129: call 0x1006f1ac */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1006F12E: pop ecx */
L_1006F12F:
    edx = MEM32(esi); /* 0x1006F12F: mov edx, dword ptr [esi] */
    /* cmp edx, 0xFFFFFFFFu */ /* 0x1006F131: cmp edx, -1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006F11F; /* 0x1006F134: je 0x1006f11f */
L_1006F136:
    ecx = edx + 0x1; /* 0x1006F136: lea ecx, [edx + 1] */
    eax = edx; /* 0x1006F139: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(esi); if (eax == _d) { MEM32(esi) = ecx; } else { eax = _d; } } /* 0x1006F13B: lock cmpxchg dword ptr [esi], ecx */
    _flag_k = FK_CMP;
    /* cmp eax, edx */ /* 0x1006F13F: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1006F11F; /* 0x1006F141: jne 0x1006f11f */
L_1006F143:
    edi = POP32_VAL(esp); /* 0x1006F143: pop edi */
    esi = POP32_VAL(esp); /* 0x1006F144: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006F145: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006F146(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006F146u);

L_1006F146:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1006F146: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(ecx), _sum = MEM32(ecx) + eax; eax = _old; MEM32(ecx) = _sum; } /* 0x1006F149: lock xadd dword ptr [ecx], eax */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006F14D: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006F14E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006F14Eu);

L_1006F14E:
    PUSH32(esp, esi); /* 0x1006F14E: push esi */
    esi = ecx; /* 0x1006F14F: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1006F151: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1006F153: inc edx */
    _flag_k = FK_INC;
    eax = esi + 0x4; /* 0x1006F154: lea eax, [esi + 4] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + edx; edx = _old; MEM32(eax) = _sum; } /* 0x1006F157: lock xadd dword ptr [eax], edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((edx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edx | 0xFFFFFFFFu));
    edx = edx | 0xFFFFFFFFu; /* 0x1006F15B: or edx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1006F15E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(esi); if (eax == _d) { MEM32(esi) = edx; } else { eax = _d; } } /* 0x1006F160: lock cmpxchg dword ptr [esi], edx */
    _flag_k = FK_CMP;
    goto L_1006F178; /* 0x1006F164: jmp 0x1006f178 */
L_1006F166:
    PUSH32(esp, ecx); /* 0x1006F166: push ecx */
    ecx = esi; /* 0x1006F167: mov ecx, esi */
    RECOMP_CALL(sub_1006F1AC); /* 0x1006F169: call 0x1006f1ac */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1006F16E: pop ecx */
    _flag_a = (uint32_t)((ecx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ecx | 0xFFFFFFFFu));
    ecx = ecx | 0xFFFFFFFFu; /* 0x1006F16F: or ecx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1006F172: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(esi); if (eax == _d) { MEM32(esi) = ecx; } else { eax = _d; } } /* 0x1006F174: lock cmpxchg dword ptr [esi], ecx */
    _flag_k = FK_CMP;
L_1006F178:
    /* test eax, eax */ /* 0x1006F178: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006F166; /* 0x1006F17A: jne 0x1006f166 */
L_1006F17C:
    esi = POP32_VAL(esp); /* 0x1006F17C: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006F17D: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006F17E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006F17Eu);

L_1006F17E:
    MEM32(ecx) = 0; /* 0x1006F17E: mov dword ptr [ecx], 0 */
    eax = ecx + 0x4; /* 0x1006F184: lea eax, [ecx + 4] */
    _flag_a = (uint32_t)((ecx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ecx | 0xFFFFFFFFu));
    ecx = ecx | 0xFFFFFFFFu; /* 0x1006F187: or ecx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + ecx; ecx = _old; MEM32(eax) = _sum; } /* 0x1006F18A: lock xadd dword ptr [eax], ecx */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006F18E: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006F18F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006F18Fu);

L_1006F18F:
    _flag_a = (uint32_t)((edx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edx | 0xFFFFFFFFu));
    edx = edx | 0xFFFFFFFFu; /* 0x1006F18F: or edx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1006F192: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(ecx); if (eax == _d) { MEM32(ecx) = edx; } else { eax = _d; } } /* 0x1006F194: lock cmpxchg dword ptr [ecx], edx */
    _flag_k = FK_CMP;
    /* test eax, eax */ /* 0x1006F198: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006F1A9; /* 0x1006F19A: jne 0x1006f1a9 */
L_1006F19C:
    edx = ecx + 0x4; /* 0x1006F19C: lea edx, [ecx + 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1006F19F: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1006F1A1: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(edx), _sum = MEM32(edx) + ecx; ecx = _old; MEM32(edx) = _sum; } /* 0x1006F1A2: lock xadd dword ptr [edx], ecx */
    _flag_k = FK_ADD;
    SET_LO8(eax, 1); /* 0x1006F1A6: mov al, 1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006F1A8: ret  */
L_1006F1A9:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x1006F1A9: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006F1AB: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006F1AC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006F1ACu);

L_1006F1AC:
    PUSH32(esp, ebx); /* 0x1006F1AC: push ebx */
    ebx = ecx; /* 0x1006F1AD: mov ebx, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1006F1AF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1006F1B1: push esi */
    PUSH32(esp, 0xAu); /* 0x1006F1B2: push 0xa */
    esi = POP32_VAL(esp); /* 0x1006F1B4: pop esi */
    /* cmp MEM32(ebx), eax */ /* 0x1006F1B5: cmp dword ptr [ebx], eax */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006F1DC; /* 0x1006F1B7: je 0x1006f1dc */
L_1006F1B9:
    /* pause */ /* 0x1006F1B9: pause  */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1006F1BB: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, MEM32(0x100E066C) */ /* 0x1006F1BC: cmp eax, dword ptr [0x100e066c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x100E066C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1006F1D7; /* 0x1006F1C2: jb 0x1006f1d7 */
L_1006F1C4:
    /* test esi, esi */ /* 0x1006F1C4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1006F1CD; /* 0x1006F1C6: jle 0x1006f1cd */
L_1006F1C8:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1006F1C8: dec esi */
    _flag_k = FK_DEC;
    PUSH32(esp, 0); /* 0x1006F1C9: push 0 */
    goto L_1006F1CF; /* 0x1006F1CB: jmp 0x1006f1cf */
L_1006F1CD:
    PUSH32(esp, 1); /* 0x1006F1CD: push 1 */
L_1006F1CF:
    RECOMP_ICALL(MEM32(0x100E50A0)); /* 0x1006F1CF: call dword ptr [0x100e50a0] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1006F1D5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1006F1D7:
    /* cmp MEM32(ebx), 0 */ /* 0x1006F1D7: cmp dword ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1006F1B9; /* 0x1006F1DA: jne 0x1006f1b9 */
L_1006F1DC:
    esi = POP32_VAL(esp); /* 0x1006F1DC: pop esi */
    ebx = POP32_VAL(esp); /* 0x1006F1DD: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006F1DE: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006F1DF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006F1DFu);

L_1006F1DF:
    PUSH32(esp, ebp); /* 0x1006F1DF: push ebp */
    ebp = esp; /* 0x1006F1E0: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x1006F1E2: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1006F1E5: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1006F1E8: push esi */
    PUSH32(esp, edi); /* 0x1006F1E9: push edi */
    esi = ecx; /* 0x1006F1EA: mov esi, ecx */
    RECOMP_CALL(sub_100258DA); /* 0x1006F1EC: call 0x100258da */
    RECOMP_FLAGS_IN();
    edx = MEM32(esi + 0x8); /* 0x1006F1F1: mov edx, dword ptr [esi + 8] */
    edi = eax; /* 0x1006F1F4: mov edi, eax */
    if (2u) _cf = (((edx) >> 1) & 1u); /* 0x1006F1F6: shr edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 2u; /* 0x1006F1F6: shr edx, 2 */
    /* test LO8(edx), 1 */ /* 0x1006F1F9: test dl, 1 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006F261; /* 0x1006F1FC: jne 0x1006f261 */
L_1006F1FE:
    ecx = MEM32(esi + 0x8); /* 0x1006F1FE: mov ecx, dword ptr [esi + 8] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x1006F201: shr ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ecx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 1u; /* 0x1006F201: shr ecx, 1 */
    /* test LO8(ecx), 1 */ /* 0x1006F203: test cl, 1 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006F218; /* 0x1006F206: je 0x1006f218 */
L_1006F208:
    edx = MEM32(esi + 0x8); /* 0x1006F208: mov edx, dword ptr [esi + 8] */
    eax = MEM32(ebp + 0x8); /* 0x1006F20B: mov eax, dword ptr [ebp + 8] */
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x1006F20E: shr edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((edx >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 3u; /* 0x1006F20E: shr edx, 3 */
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x1006F211: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x1006F211: shr eax, 3 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x1006F214: sub edx, eax */
    _flag_k = FK_CMP;
    goto L_1006F21B; /* 0x1006F216: jmp 0x1006f21b */
L_1006F218:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1006F218: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1006F21A: inc edx */
    _flag_k = FK_INC;
L_1006F21B:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x1006F21B: add edi, 2 */
    _flag_k = FK_ADD;
    /* cmp edx, edi */ /* 0x1006F21E: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1006F261; /* 0x1006F220: ja 0x1006f261 */
L_1006F222:
    eax = edx + (-0x1); /* 0x1006F222: lea eax, [edx - 1] */
    _flag_a = (uint32_t)(MEM32(esp + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(esp + 0x10) = MEM32(esp + 0x10) & 0; /* 0x1006F225: and dword ptr [esp + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(0x100E066C)); /* 0x1006F22A: imul eax, dword ptr [0x100e066c] */
    ecx = esp + 0x8; /* 0x1006F231: lea ecx, [esp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1006F235: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x14) = 0x1007A46Cu; /* 0x1006F237: mov dword ptr [esp + 0x14], 0x1007a46c */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)edi; /* 0x1006F23F: div edi */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x100E066C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(0x100E066C); /* 0x1006F241: add eax, dword ptr [0x100e066c] */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1006F247: push eax */
    RECOMP_CALL(sub_1006AF24); /* 0x1006F248: call 0x1006af24 */
    RECOMP_FLAGS_IN();
L_1006F24D:
    eax = MEM32(esi + 0x8); /* 0x1006F24D: mov eax, dword ptr [esi + 8] */
    /* test LO8(eax), 1 */ /* 0x1006F250: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006F261; /* 0x1006F252: je 0x1006f261 */
L_1006F254:
    ecx = esp + 0x8; /* 0x1006F254: lea ecx, [esp + 8] */
    RECOMP_CALL(sub_1006A8DE); /* 0x1006F258: call 0x1006a8de */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1006F25D: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006F24D; /* 0x1006F25F: jne 0x1006f24d */
L_1006F261:
    RECOMP_CALL(sub_100698DA); /* 0x1006F261: call 0x100698da */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x1006F266: pop edi */
    esi = POP32_VAL(esp); /* 0x1006F267: pop esi */
    esp = ebp; /* 0x1006F268: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1006F26A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1006F26B: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1006F26E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006F26Eu);

L_1006F26E:
    PUSH32(esp, esi); /* 0x1006F26E: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1006F26F: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = ecx + 0x10; /* 0x1006F271: lea edx, [ecx + 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1006F274: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1006F275: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(edx); if (eax == _d) { MEM32(edx) = esi; } else { eax = _d; } } /* 0x1006F277: lock cmpxchg dword ptr [edx], esi */
    _flag_k = FK_CMP;
    esi = POP32_VAL(esp); /* 0x1006F27B: pop esi */
    /* test eax, eax */ /* 0x1006F27C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006F28E; /* 0x1006F27E: jne 0x1006f28e */
L_1006F280:
    _flag_a = (uint32_t)(MEM32(ecx + 0x8)); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(ecx + 0x8) = MEM32(ecx + 0x8) & 0xFFFFFFFEu; /* 0x1006F280: and dword ptr [ecx + 8], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ecx); /* 0x1006F284: mov ecx, dword ptr [ecx] */
    edx = MEM32(ecx); /* 0x1006F286: mov edx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(edx + 0xC)); /* 0x1006F288: call dword ptr [edx + 0xc] */
    RECOMP_FLAGS_IN();
    SET_LO8(eax, 1); /* 0x1006F28B: mov al, 1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006F28D: ret  */
L_1006F28E:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x1006F28E: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006F290: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006F291(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006F291u);

L_1006F291:
    PUSH32(esp, ebp); /* 0x1006F291: push ebp */
    ebp = esp; /* 0x1006F292: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x1006F294: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1006F297: push esi */
    esi = ecx; /* 0x1006F298: mov esi, ecx */
    eax = MEM32(esi + 0x4); /* 0x1006F29A: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x1006F29D: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 0x1007A46Cu; /* 0x1006F2A1: mov dword ptr [ebp - 4], 0x1007a46c */
    goto L_1006F2B5; /* 0x1006F2A8: jmp 0x1006f2b5 */
L_1006F2AA:
    ecx = ebp + (-0x10); /* 0x1006F2AA: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_10068D76); /* 0x1006F2AD: call 0x10068d76 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x4); /* 0x1006F2B2: mov eax, dword ptr [esi + 4] */
L_1006F2B5:
    /* test eax, eax */ /* 0x1006F2B5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006F2AA; /* 0x1006F2B7: je 0x1006f2aa */
L_1006F2B9:
    esi = POP32_VAL(esp); /* 0x1006F2B9: pop esi */
    esp = ebp; /* 0x1006F2BA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1006F2BC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006F2BD: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006F2BE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006F2BEu);

L_1006F2BE:
    /* cmp MEM32(ecx + 0xC), 0 */ /* 0x1006F2BE: cmp dword ptr [ecx + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006F2DB; /* 0x1006F2C2: je 0x1006f2db */
L_1006F2C4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1006F2C4: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx + 0x14; /* 0x1006F2C6: lea eax, [ecx + 0x14] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1006F2C9: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + edx; edx = _old; MEM32(eax) = _sum; } /* 0x1006F2CA: lock xadd dword ptr [eax], edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1006F2CE: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, 2 */ /* 0x1006F2CF: cmp edx, 2 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1006F2DB; /* 0x1006F2D2: jne 0x1006f2db */
L_1006F2D4:
    PUSH32(esp, ecx); /* 0x1006F2D4: push ecx */
    RECOMP_CALL(sub_1000ECE0); /* 0x1006F2D5: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1006F2DA: pop ecx */
L_1006F2DB:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006F2DB: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006F2DC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006F2DCu);

L_1006F2DC:
    PUSH32(esp, ebp); /* 0x1006F2DC: push ebp */
    ebp = esp; /* 0x1006F2DD: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1006F2DF: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1006F2E0: mov esi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1006F2E3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 2); /* 0x1006F2E5: push 2 */
    edx = POP32_VAL(esp); /* 0x1006F2E7: pop edx */
    ecx = esi + 0x10; /* 0x1006F2E8: lea ecx, [esi + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(ecx); if (eax == _d) { MEM32(ecx) = edx; } else { eax = _d; } } /* 0x1006F2EB: lock cmpxchg dword ptr [ecx], edx */
    _flag_k = FK_CMP;
    /* test eax, eax */ /* 0x1006F2EF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006F2FC; /* 0x1006F2F1: jne 0x1006f2fc */
L_1006F2F3:
    ecx = MEM32(esi); /* 0x1006F2F3: mov ecx, dword ptr [esi] */
    eax = MEM32(ecx); /* 0x1006F2F5: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x1006F2F7: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    goto L_1006F303; /* 0x1006F2FA: jmp 0x1006f303 */
L_1006F2FC:
    ecx = esi; /* 0x1006F2FC: mov ecx, esi */
    RECOMP_CALL(sub_1006F2BE); /* 0x1006F2FE: call 0x1006f2be */
    RECOMP_FLAGS_IN();
L_1006F303:
    edx = MEM32(ebp + 0x10); /* 0x1006F303: mov edx, dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + 0x8); /* 0x1006F306: mov ecx, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1007A5ED); /* 0x1006F309: call 0x1007a5ed */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x1006F30E: pop esi */
    ebp = POP32_VAL(esp); /* 0x1006F30F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1006F310: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1006F313(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006F313u);

L_1006F313:
    PUSH32(esp, ebp); /* 0x1006F313: push ebp */
    ebp = esp; /* 0x1006F314: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1006F316: push ecx */
    PUSH32(esp, esi); /* 0x1006F317: push esi */
    PUSH32(esp, 0); /* 0x1006F318: push 0 */
    PUSH32(esp, ecx); /* 0x1006F31A: push ecx */
    RECOMP_CALL(sub_1006B168); /* 0x1006F31B: call 0x1006b168 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x8); /* 0x1006F320: mov esi, dword ptr [ebp + 8] */
    ecx = POP32_VAL(esp); /* 0x1006F323: pop ecx */
    ecx = eax; /* 0x1006F324: mov ecx, eax */
    edx = MEM32(esi + 0xC); /* 0x1006F326: mov edx, dword ptr [esi + 0xc] */
    RECOMP_CALL(sub_1006EF60); /* 0x1006F329: call 0x1006ef60 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1006F32E: pop ecx */
    PUSH32(esp, 2); /* 0x1006F32F: push 2 */
    edx = POP32_VAL(esp); /* 0x1006F331: pop edx */
    ecx = esi + 0x10; /* 0x1006F332: lea ecx, [esi + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1006F335: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(ecx); if (eax == _d) { MEM32(ecx) = edx; } else { eax = _d; } } /* 0x1006F337: lock cmpxchg dword ptr [ecx], edx */
    _flag_k = FK_CMP;
    /* test eax, eax */ /* 0x1006F33B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006F348; /* 0x1006F33D: jne 0x1006f348 */
L_1006F33F:
    ecx = MEM32(esi); /* 0x1006F33F: mov ecx, dword ptr [esi] */
    eax = MEM32(ecx); /* 0x1006F341: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x1006F343: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    goto L_1006F34F; /* 0x1006F346: jmp 0x1006f34f */
L_1006F348:
    ecx = esi; /* 0x1006F348: mov ecx, esi */
    RECOMP_CALL(sub_1006F2BE); /* 0x1006F34A: call 0x1006f2be */
    RECOMP_FLAGS_IN();
L_1006F34F:
    esi = POP32_VAL(esp); /* 0x1006F34F: pop esi */
    ecx = POP32_VAL(esp); /* 0x1006F350: pop ecx */
    ebp = POP32_VAL(esp); /* 0x1006F351: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1006F352: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1006F355(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006F355u);

L_1006F355:
    PUSH32(esp, 4); /* 0x1006F355: push 4 */
    eax = 0x100DB304u; /* 0x1006F357: mov eax, 0x100db304 */
    RECOMP_CALL(sub_100149A4); /* 0x1006F35C: call 0x100149a4 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1006F361: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x1006F363: mov dword ptr [ebp - 0x10], esi */
    eax = MEM32(ebp + 0x8); /* 0x1006F366: mov eax, dword ptr [ebp + 8] */
    edi = esi + 0x4; /* 0x1006F369: lea edi, [esi + 4] */
    MEM32(esi) = eax; /* 0x1006F36C: mov dword ptr [esi], eax */
    MEM32(ebp + 0x8) = edi; /* 0x1006F36E: mov dword ptr [ebp + 8], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1006F371: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x1006F375: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006F382; /* 0x1006F377: je 0x1006f382 */
L_1006F379:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1006F379: push -1 */
    ecx = edi; /* 0x1006F37B: mov ecx, edi */
    RECOMP_CALL(sub_100148A0); /* 0x1006F37D: call 0x100148a0 */
    RECOMP_FLAGS_IN();
L_1006F382:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1006F382: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(esi); /* 0x1006F386: mov ecx, dword ptr [esi] */
    PUSH32(esp, 1); /* 0x1006F388: push 1 */
    PUSH32(esp, edi); /* 0x1006F38A: push edi */
    RECOMP_CALL(sub_1006F550); /* 0x1006F38B: call 0x1006f550 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1006F390: mov eax, esi */
    RECOMP_CALL(sub_100149D7); /* 0x1006F392: call 0x100149d7 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1006F397: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1006F39A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006F39Au);

L_1006F39A:
    ecx = MEM32(ecx); /* 0x1006F39A: mov ecx, dword ptr [ecx] */
    goto L_1006F4D7; /* 0x1006F39C: jmp 0x1006f4d7 */
L_1006F4D7:
    PUSH32(esp, ebp); /* 0x1006F4D7: push ebp */
    ebp = esp; /* 0x1006F4D8: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x1006F4DA: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1006F4DD: push ecx */
    PUSH32(esp, ebx); /* 0x1006F4DE: push ebx */
    PUSH32(esp, esi); /* 0x1006F4DF: push esi */
    PUSH32(esp, edi); /* 0x1006F4E0: push edi */
    edi = ecx; /* 0x1006F4E1: mov edi, ecx */
    ecx = MEM32(edi + 0x18); /* 0x1006F4E3: mov ecx, dword ptr [edi + 0x18] */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    MEM32(edi) = MEM32(edi) & 0; /* 0x1006F4E6: and dword ptr [edi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ecx + 0x4); /* 0x1006F4E9: mov esi, dword ptr [ecx + 4] */
    MEM32(edi + 0x18) = esi; /* 0x1006F4EC: mov dword ptr [edi + 0x18], esi */
    /* test esi, esi */ /* 0x1006F4EF: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006F50C; /* 0x1006F4F1: jne 0x1006f50c */
L_1006F4F3:
    edx = edi + 0x1C; /* 0x1006F4F3: lea edx, [edi + 0x1c] */
    eax = ecx; /* 0x1006F4F6: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(edx); if (eax == _d) { MEM32(edx) = esi; } else { eax = _d; } } /* 0x1006F4F8: lock cmpxchg dword ptr [edx], esi */
    _flag_k = FK_CMP;
    /* cmp eax, ecx */ /* 0x1006F4FC: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006F549; /* 0x1006F4FE: je 0x1006f549 */
L_1006F500:
    RECOMP_CALL(sub_1006F291); /* 0x1006F500: call 0x1006f291 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1006F505: mov esi, eax */
    MEM32(edi + 0x18) = esi; /* 0x1006F507: mov dword ptr [edi + 0x18], esi */
    goto L_1006F545; /* 0x1006F50A: jmp 0x1006f545 */
L_1006F50C:
    ecx = esi; /* 0x1006F50C: mov ecx, esi */
    RECOMP_CALL(sub_1006F26E); /* 0x1006F50E: call 0x1006f26e */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1006F513: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006F549; /* 0x1006F515: jne 0x1006f549 */
L_1006F517:
    ebx = esi; /* 0x1006F517: mov ebx, esi */
    esi = MEM32(esi + 0x4); /* 0x1006F519: mov esi, dword ptr [esi + 4] */
    MEM32(edi + 0x18) = esi; /* 0x1006F51C: mov dword ptr [edi + 0x18], esi */
    /* test esi, esi */ /* 0x1006F51F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006F53E; /* 0x1006F521: jne 0x1006f53e */
L_1006F523:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1006F523: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edi + 0x1C; /* 0x1006F525: lea ecx, [edi + 0x1c] */
    eax = ebx; /* 0x1006F528: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(ecx); if (eax == _d) { MEM32(ecx) = edx; } else { eax = _d; } } /* 0x1006F52A: lock cmpxchg dword ptr [ecx], edx */
    _flag_k = FK_CMP;
    /* cmp eax, ebx */ /* 0x1006F52E: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006F53E; /* 0x1006F530: je 0x1006f53e */
L_1006F532:
    ecx = ebx; /* 0x1006F532: mov ecx, ebx */
    RECOMP_CALL(sub_1006F291); /* 0x1006F534: call 0x1006f291 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1006F539: mov esi, eax */
    MEM32(edi + 0x18) = esi; /* 0x1006F53B: mov dword ptr [edi + 0x18], esi */
L_1006F53E:
    ecx = ebx; /* 0x1006F53E: mov ecx, ebx */
    RECOMP_CALL(sub_1006F2BE); /* 0x1006F540: call 0x1006f2be */
    RECOMP_FLAGS_IN();
L_1006F545:
    /* test esi, esi */ /* 0x1006F545: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006F50C; /* 0x1006F547: jne 0x1006f50c */
L_1006F549:
    edi = POP32_VAL(esp); /* 0x1006F549: pop edi */
    esi = POP32_VAL(esp); /* 0x1006F54A: pop esi */
    ebx = POP32_VAL(esp); /* 0x1006F54B: pop ebx */
    esp = ebp; /* 0x1006F54C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1006F54E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006F54F: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006F3A1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006F3A1u);

L_1006F3A1:
    PUSH32(esp, 4); /* 0x1006F3A1: push 4 */
    eax = 0x100DB304u; /* 0x1006F3A3: mov eax, 0x100db304 */
    RECOMP_CALL(sub_100149A4); /* 0x1006F3A8: call 0x100149a4 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1006F3AD: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x1006F3AF: mov dword ptr [ebp - 0x10], esi */
    eax = MEM32(ebp + 0x8); /* 0x1006F3B2: mov eax, dword ptr [ebp + 8] */
    edi = esi + 0x4; /* 0x1006F3B5: lea edi, [esi + 4] */
    MEM32(esi) = eax; /* 0x1006F3B8: mov dword ptr [esi], eax */
    MEM32(ebp + 0x8) = edi; /* 0x1006F3BA: mov dword ptr [ebp + 8], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1006F3BD: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x1006F3C1: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006F3CE; /* 0x1006F3C3: je 0x1006f3ce */
L_1006F3C5:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1006F3C5: push -1 */
    ecx = edi; /* 0x1006F3C7: mov ecx, edi */
    RECOMP_CALL(sub_100148A0); /* 0x1006F3C9: call 0x100148a0 */
    RECOMP_FLAGS_IN();
L_1006F3CE:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1006F3CE: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(esi); /* 0x1006F3D2: mov ecx, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x1006F3D4: push edi */
    RECOMP_CALL(sub_1006F0C4); /* 0x1006F3D5: call 0x1006f0c4 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1006F3DA: mov eax, esi */
    RECOMP_CALL(sub_100149D7); /* 0x1006F3DC: call 0x100149d7 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1006F3E1: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1006F3E4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006F3E4u);

    goto L_1006F3E4;
L_1006F0F9:
    _flag_a = (uint32_t)(MEM32(ecx + 0x20)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x20) = MEM32(ecx + 0x20) - 1; /* 0x1006F0F9: dec dword ptr [ecx + 0x20] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1006F10A; /* 0x1006F0FC: jne 0x1006f10a */
L_1006F0FE:
    MEM32(ecx + 0x24) = 0xFFFFFFFFu; /* 0x1006F0FE: mov dword ptr [ecx + 0x24], 0xffffffff */
    goto L_1006F4D7; /* 0x1006F105: jmp 0x1006f4d7 */
L_1006F10A:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006F10A: ret  */
L_1006F3E4:
    ecx = MEM32(ecx); /* 0x1006F3E4: mov ecx, dword ptr [ecx] */
    RECOMP_BACKEDGE();
    goto L_1006F0F9; /* 0x1006F3E6: jmp 0x1006f0f9 */
L_1006F4D7:
    PUSH32(esp, ebp); /* 0x1006F4D7: push ebp */
    ebp = esp; /* 0x1006F4D8: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x1006F4DA: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1006F4DD: push ecx */
    PUSH32(esp, ebx); /* 0x1006F4DE: push ebx */
    PUSH32(esp, esi); /* 0x1006F4DF: push esi */
    PUSH32(esp, edi); /* 0x1006F4E0: push edi */
    edi = ecx; /* 0x1006F4E1: mov edi, ecx */
    ecx = MEM32(edi + 0x18); /* 0x1006F4E3: mov ecx, dword ptr [edi + 0x18] */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    MEM32(edi) = MEM32(edi) & 0; /* 0x1006F4E6: and dword ptr [edi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ecx + 0x4); /* 0x1006F4E9: mov esi, dword ptr [ecx + 4] */
    MEM32(edi + 0x18) = esi; /* 0x1006F4EC: mov dword ptr [edi + 0x18], esi */
    /* test esi, esi */ /* 0x1006F4EF: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006F50C; /* 0x1006F4F1: jne 0x1006f50c */
L_1006F4F3:
    edx = edi + 0x1C; /* 0x1006F4F3: lea edx, [edi + 0x1c] */
    eax = ecx; /* 0x1006F4F6: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(edx); if (eax == _d) { MEM32(edx) = esi; } else { eax = _d; } } /* 0x1006F4F8: lock cmpxchg dword ptr [edx], esi */
    _flag_k = FK_CMP;
    /* cmp eax, ecx */ /* 0x1006F4FC: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006F549; /* 0x1006F4FE: je 0x1006f549 */
L_1006F500:
    RECOMP_CALL(sub_1006F291); /* 0x1006F500: call 0x1006f291 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1006F505: mov esi, eax */
    MEM32(edi + 0x18) = esi; /* 0x1006F507: mov dword ptr [edi + 0x18], esi */
    goto L_1006F545; /* 0x1006F50A: jmp 0x1006f545 */
L_1006F50C:
    ecx = esi; /* 0x1006F50C: mov ecx, esi */
    RECOMP_CALL(sub_1006F26E); /* 0x1006F50E: call 0x1006f26e */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1006F513: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006F549; /* 0x1006F515: jne 0x1006f549 */
L_1006F517:
    ebx = esi; /* 0x1006F517: mov ebx, esi */
    esi = MEM32(esi + 0x4); /* 0x1006F519: mov esi, dword ptr [esi + 4] */
    MEM32(edi + 0x18) = esi; /* 0x1006F51C: mov dword ptr [edi + 0x18], esi */
    /* test esi, esi */ /* 0x1006F51F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006F53E; /* 0x1006F521: jne 0x1006f53e */
L_1006F523:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1006F523: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edi + 0x1C; /* 0x1006F525: lea ecx, [edi + 0x1c] */
    eax = ebx; /* 0x1006F528: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(ecx); if (eax == _d) { MEM32(ecx) = edx; } else { eax = _d; } } /* 0x1006F52A: lock cmpxchg dword ptr [ecx], edx */
    _flag_k = FK_CMP;
    /* cmp eax, ebx */ /* 0x1006F52E: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006F53E; /* 0x1006F530: je 0x1006f53e */
L_1006F532:
    ecx = ebx; /* 0x1006F532: mov ecx, ebx */
    RECOMP_CALL(sub_1006F291); /* 0x1006F534: call 0x1006f291 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1006F539: mov esi, eax */
    MEM32(edi + 0x18) = esi; /* 0x1006F53B: mov dword ptr [edi + 0x18], esi */
L_1006F53E:
    ecx = ebx; /* 0x1006F53E: mov ecx, ebx */
    RECOMP_CALL(sub_1006F2BE); /* 0x1006F540: call 0x1006f2be */
    RECOMP_FLAGS_IN();
L_1006F545:
    /* test esi, esi */ /* 0x1006F545: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006F50C; /* 0x1006F547: jne 0x1006f50c */
L_1006F549:
    edi = POP32_VAL(esp); /* 0x1006F549: pop edi */
    esi = POP32_VAL(esp); /* 0x1006F54A: pop esi */
    ebx = POP32_VAL(esp); /* 0x1006F54B: pop ebx */
    esp = ebp; /* 0x1006F54C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1006F54E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006F54F: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006F3EB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006F3EBu);

L_1006F3EB:
    eax = ecx; /* 0x1006F3EB: mov eax, ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006F3ED: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006F3EE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006F3EEu);

L_1006F3EE:
    PUSH32(esp, ebp); /* 0x1006F3EE: push ebp */
    ebp = esp; /* 0x1006F3EF: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x1006F3F1: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x1006F3F4: sub esp, 0x1c */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1006F3F7: push esi */
    esi = ecx; /* 0x1006F3F8: mov esi, ecx */
    ecx = esp + 0x8; /* 0x1006F3FA: lea ecx, [esp + 8] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1006F3FE: push -1 */
    RECOMP_CALL(sub_100148A0); /* 0x1006F400: call 0x100148a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x1006F405: push 0 */
    eax = esp + 0xC; /* 0x1006F407: lea eax, [esp + 0xc] */
    ecx = esi; /* 0x1006F40B: mov ecx, esi */
    PUSH32(esp, eax); /* 0x1006F40D: push eax */
    RECOMP_CALL(sub_1006F550); /* 0x1006F40E: call 0x1006f550 */
    RECOMP_FLAGS_IN();
    eax = esp + 0x8; /* 0x1006F413: lea eax, [esp + 8] */
    ecx = esi; /* 0x1006F417: mov ecx, esi */
    PUSH32(esp, eax); /* 0x1006F419: push eax */
    RECOMP_CALL(sub_1006F650); /* 0x1006F41A: call 0x1006f650 */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x1006F41F: pop esi */
    esp = ebp; /* 0x1006F420: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1006F422: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006F423: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006F424(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006F424u);

L_1006F424:
    PUSH32(esp, ebp); /* 0x1006F424: push ebp */
    ebp = esp; /* 0x1006F425: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x1006F427: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x1006F42A: sub esp, 0x18 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1006F42D: push esi */
    PUSH32(esp, edi); /* 0x1006F42E: push edi */
    edi = ecx; /* 0x1006F42F: mov edi, ecx */
    ecx = esp + 0x8; /* 0x1006F431: lea ecx, [esp + 8] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1006F435: push -1 */
    RECOMP_CALL(sub_100148A0); /* 0x1006F437: call 0x100148a0 */
    RECOMP_FLAGS_IN();
    esi = esp + 0x8; /* 0x1006F43C: lea esi, [esp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1006F440: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = edi + 0x1C; /* 0x1006F442: lea edx, [edi + 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(edx); if (eax == _d) { MEM32(edx) = esi; } else { eax = _d; } } /* 0x1006F445: lock cmpxchg dword ptr [edx], esi */
    _flag_k = FK_CMP;
    /* test eax, eax */ /* 0x1006F449: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006F471; /* 0x1006F44B: jne 0x1006f471 */
L_1006F44D:
    eax = esp + 0x8; /* 0x1006F44D: lea eax, [esp + 8] */
    MEM32(edi + 0x18) = eax; /* 0x1006F451: mov dword ptr [edi + 0x18], eax */
    ecx = eax; /* 0x1006F454: mov ecx, eax */
    PUSH32(esp, edi); /* 0x1006F456: push edi */
    RECOMP_CALL(sub_100149EB); /* 0x1006F457: call 0x100149eb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esp + 0x10)); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(esp + 0x10) = MEM32(esp + 0x10) & 0xFFFFFFFEu; /* 0x1006F45C: and dword ptr [esp + 0x10], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esp + 0x8; /* 0x1006F461: lea eax, [esp + 8] */
    PUSH32(esp, eax); /* 0x1006F465: push eax */
    ecx = edi; /* 0x1006F466: mov ecx, edi */
    RECOMP_CALL(sub_1006F650); /* 0x1006F468: call 0x1006f650 */
    RECOMP_FLAGS_IN();
    SET_LO8(eax, 1); /* 0x1006F46D: mov al, 1 */
    goto L_1006F473; /* 0x1006F46F: jmp 0x1006f473 */
L_1006F471:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x1006F471: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_1006F473:
    edi = POP32_VAL(esp); /* 0x1006F473: pop edi */
    esi = POP32_VAL(esp); /* 0x1006F474: pop esi */
    esp = ebp; /* 0x1006F475: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1006F477: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006F478: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006F479(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006F479u);

L_1006F479:
    PUSH32(esp, 4); /* 0x1006F479: push 4 */
    eax = 0x100DADF8u; /* 0x1006F47B: mov eax, 0x100dadf8 */
    RECOMP_CALL(sub_100149A4); /* 0x1006F480: call 0x100149a4 */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x1006F485: mov edi, ecx */
    PUSH32(esp, 0x18u); /* 0x1006F487: push 0x18 */
    RECOMP_CALL(sub_1000EE11); /* 0x1006F489: call 0x1000ee11 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1006F48E: pop ecx */
    MEM32(ebp + (-0x10)) = eax; /* 0x1006F48F: mov dword ptr [ebp - 0x10], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1006F492: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1006F494: mov dword ptr [ebp - 4], ebx */
    /* test eax, eax */ /* 0x1006F497: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006F4A9; /* 0x1006F499: je 0x1006f4a9 */
L_1006F49B:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1006F49B: push dword ptr [ebp + 8] */
    ecx = eax; /* 0x1006F49E: mov ecx, eax */
    RECOMP_CALL(sub_100148A0); /* 0x1006F4A0: call 0x100148a0 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1006F4A5: mov esi, eax */
    goto L_1006F4AB; /* 0x1006F4A7: jmp 0x1006f4ab */
L_1006F4A9:
    esi = ebx; /* 0x1006F4A9: mov esi, ebx */
L_1006F4AB:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1006F4AB: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edi; /* 0x1006F4AF: mov ecx, edi */
    PUSH32(esp, ebx); /* 0x1006F4B1: push ebx */
    PUSH32(esp, esi); /* 0x1006F4B2: push esi */
    RECOMP_CALL(sub_1006F550); /* 0x1006F4B3: call 0x1006f550 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1006F4B8: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006F4C6; /* 0x1006F4BA: je 0x1006f4c6 */
L_1006F4BC:
    PUSH32(esp, esi); /* 0x1006F4BC: push esi */
    ecx = edi; /* 0x1006F4BD: mov ecx, edi */
    RECOMP_CALL(sub_1006F650); /* 0x1006F4BF: call 0x1006f650 */
    RECOMP_FLAGS_IN();
    SET_LO8(ebx, 1); /* 0x1006F4C4: mov bl, 1 */
L_1006F4C6:
    ecx = esi; /* 0x1006F4C6: mov ecx, esi */
    RECOMP_CALL(sub_1006F2BE); /* 0x1006F4C8: call 0x1006f2be */
    RECOMP_FLAGS_IN();
    SET_LO8(eax, LO8(ebx)); /* 0x1006F4CD: mov al, bl */
    RECOMP_CALL(sub_100149D7); /* 0x1006F4CF: call 0x100149d7 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1006F4D4: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1006F4D7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006F4D7u);

L_1006F4D7:
    PUSH32(esp, ebp); /* 0x1006F4D7: push ebp */
    ebp = esp; /* 0x1006F4D8: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x1006F4DA: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1006F4DD: push ecx */
    PUSH32(esp, ebx); /* 0x1006F4DE: push ebx */
    PUSH32(esp, esi); /* 0x1006F4DF: push esi */
    PUSH32(esp, edi); /* 0x1006F4E0: push edi */
    edi = ecx; /* 0x1006F4E1: mov edi, ecx */
    ecx = MEM32(edi + 0x18); /* 0x1006F4E3: mov ecx, dword ptr [edi + 0x18] */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    MEM32(edi) = MEM32(edi) & 0; /* 0x1006F4E6: and dword ptr [edi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ecx + 0x4); /* 0x1006F4E9: mov esi, dword ptr [ecx + 4] */
    MEM32(edi + 0x18) = esi; /* 0x1006F4EC: mov dword ptr [edi + 0x18], esi */
    /* test esi, esi */ /* 0x1006F4EF: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006F50C; /* 0x1006F4F1: jne 0x1006f50c */
L_1006F4F3:
    edx = edi + 0x1C; /* 0x1006F4F3: lea edx, [edi + 0x1c] */
    eax = ecx; /* 0x1006F4F6: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(edx); if (eax == _d) { MEM32(edx) = esi; } else { eax = _d; } } /* 0x1006F4F8: lock cmpxchg dword ptr [edx], esi */
    _flag_k = FK_CMP;
    /* cmp eax, ecx */ /* 0x1006F4FC: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006F549; /* 0x1006F4FE: je 0x1006f549 */
L_1006F500:
    RECOMP_CALL(sub_1006F291); /* 0x1006F500: call 0x1006f291 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1006F505: mov esi, eax */
    MEM32(edi + 0x18) = esi; /* 0x1006F507: mov dword ptr [edi + 0x18], esi */
    goto L_1006F545; /* 0x1006F50A: jmp 0x1006f545 */
L_1006F50C:
    ecx = esi; /* 0x1006F50C: mov ecx, esi */
    RECOMP_CALL(sub_1006F26E); /* 0x1006F50E: call 0x1006f26e */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1006F513: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006F549; /* 0x1006F515: jne 0x1006f549 */
L_1006F517:
    ebx = esi; /* 0x1006F517: mov ebx, esi */
    esi = MEM32(esi + 0x4); /* 0x1006F519: mov esi, dword ptr [esi + 4] */
    MEM32(edi + 0x18) = esi; /* 0x1006F51C: mov dword ptr [edi + 0x18], esi */
    /* test esi, esi */ /* 0x1006F51F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006F53E; /* 0x1006F521: jne 0x1006f53e */
L_1006F523:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1006F523: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edi + 0x1C; /* 0x1006F525: lea ecx, [edi + 0x1c] */
    eax = ebx; /* 0x1006F528: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(ecx); if (eax == _d) { MEM32(ecx) = edx; } else { eax = _d; } } /* 0x1006F52A: lock cmpxchg dword ptr [ecx], edx */
    _flag_k = FK_CMP;
    /* cmp eax, ebx */ /* 0x1006F52E: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006F53E; /* 0x1006F530: je 0x1006f53e */
L_1006F532:
    ecx = ebx; /* 0x1006F532: mov ecx, ebx */
    RECOMP_CALL(sub_1006F291); /* 0x1006F534: call 0x1006f291 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1006F539: mov esi, eax */
    MEM32(edi + 0x18) = esi; /* 0x1006F53B: mov dword ptr [edi + 0x18], esi */
L_1006F53E:
    ecx = ebx; /* 0x1006F53E: mov ecx, ebx */
    RECOMP_CALL(sub_1006F2BE); /* 0x1006F540: call 0x1006f2be */
    RECOMP_FLAGS_IN();
L_1006F545:
    /* test esi, esi */ /* 0x1006F545: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006F50C; /* 0x1006F547: jne 0x1006f50c */
L_1006F549:
    edi = POP32_VAL(esp); /* 0x1006F549: pop edi */
    esi = POP32_VAL(esp); /* 0x1006F54A: pop esi */
    ebx = POP32_VAL(esp); /* 0x1006F54B: pop ebx */
    esp = ebp; /* 0x1006F54C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1006F54E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006F54F: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006F550(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006F550u);

L_1006F550:
    PUSH32(esp, ebp); /* 0x1006F550: push ebp */
    ebp = esp; /* 0x1006F551: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1006F553: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1006F556: push ebx */
    PUSH32(esp, esi); /* 0x1006F557: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1006F558: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1006F55B: push edi */
    edi = ecx; /* 0x1006F55C: mov edi, ecx */
    eax = MEM32(esi); /* 0x1006F55E: mov eax, dword ptr [esi] */
    /* cmp eax, MEM32(edi) */ /* 0x1006F560: cmp eax, dword ptr [edi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006F5F0; /* 0x1006F562: je 0x1006f5f0 */
L_1006F568:
    ebx = esi; /* 0x1006F568: mov ebx, esi */
    eax = edi + 0x1C; /* 0x1006F56A: lea eax, [edi + 0x1c] */
    { uint32_t _tmp = MEM32(eax); /* 0x1006F56D: xchg dword ptr [eax], ebx */
      MEM32(eax) = ebx;
      ebx = _tmp; }
    ecx = esi; /* 0x1006F56F: mov ecx, esi */
    /* test ebx, ebx */ /* 0x1006F571: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006F5A2; /* 0x1006F573: jne 0x1006f5a2 */
L_1006F575:
    MEM32(edi + 0x18) = esi; /* 0x1006F575: mov dword ptr [edi + 0x18], esi */
    PUSH32(esp, edi); /* 0x1006F578: push edi */
    RECOMP_CALL(sub_100149EB); /* 0x1006F579: call 0x100149eb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) & 0xFFFFFFFEu; /* 0x1006F57E: and dword ptr [esi + 8], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0xC), ebx */ /* 0x1006F582: cmp dword ptr [esi + 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006F5C3; /* 0x1006F585: je 0x1006f5c3 */
L_1006F587:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1006F587: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi + 0x10; /* 0x1006F589: lea eax, [esi + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1006F58C: inc ecx */
    _flag_k = FK_INC;
    { uint32_t _tmp = MEM32(eax); /* 0x1006F58D: xchg dword ptr [eax], ecx */
      MEM32(eax) = ecx;
      ecx = _tmp; }
    /* cmp ecx, 2 */ /* 0x1006F58F: cmp ecx, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1006F5C3; /* 0x1006F592: jne 0x1006f5c3 */
L_1006F594:
    RECOMP_CALL(sub_100698DA); /* 0x1006F594: call 0x100698da */
    RECOMP_FLAGS_IN();
    ecx = esi; /* 0x1006F599: mov ecx, esi */
    RECOMP_CALL(sub_1006F2BE); /* 0x1006F59B: call 0x1006f2be */
    RECOMP_FLAGS_IN();
    goto L_1006F5C3; /* 0x1006F5A0: jmp 0x1006f5c3 */
L_1006F5A2:
    PUSH32(esp, ebx); /* 0x1006F5A2: push ebx */
    RECOMP_CALL(sub_100149EB); /* 0x1006F5A3: call 0x100149eb */
    RECOMP_FLAGS_IN();
    MEM32(ebx + 0x4) = esi; /* 0x1006F5A8: mov dword ptr [ebx + 4], esi */
    ecx = esi; /* 0x1006F5AB: mov ecx, esi */
    PUSH32(esp, MEM32(edi + 0x8)); /* 0x1006F5AD: push dword ptr [edi + 8] */
    RECOMP_CALL(sub_1006F1DF); /* 0x1006F5B0: call 0x1006f1df */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esi + 0x10), 2 */ /* 0x1006F5B5: cmp dword ptr [esi + 0x10], 2 */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006F5C3; /* 0x1006F5B9: je 0x1006f5c3 */
L_1006F5BB:
    PUSH32(esp, edi); /* 0x1006F5BB: push edi */
    ecx = esi; /* 0x1006F5BC: mov ecx, esi */
    RECOMP_CALL(sub_100149EB); /* 0x1006F5BE: call 0x100149eb */
    RECOMP_FLAGS_IN();
L_1006F5C3:
    /* cmp MEM8(ebp + 0xC), 0 */ /* 0x1006F5C3: cmp byte ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006F5DC; /* 0x1006F5C7: je 0x1006f5dc */
L_1006F5C9:
    eax = MEM32(esi + 0x8); /* 0x1006F5C9: mov eax, dword ptr [esi + 8] */
    MEM32(edi + 0x8) = eax; /* 0x1006F5CC: mov dword ptr [edi + 8], eax */
    eax = MEM32(esi + 0x4); /* 0x1006F5CF: mov eax, dword ptr [esi + 4] */
    MEM32(edi + 0x4) = eax; /* 0x1006F5D2: mov dword ptr [edi + 4], eax */
    eax = MEM32(esi); /* 0x1006F5D5: mov eax, dword ptr [esi] */
    MEM32(edi) = eax; /* 0x1006F5D7: mov dword ptr [edi], eax */
    MEM32(edi + 0x18) = esi; /* 0x1006F5D9: mov dword ptr [edi + 0x18], esi */
L_1006F5DC:
    ecx = MEM32(esi + 0x10); /* 0x1006F5DC: mov ecx, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1006F5DF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x1006F5E1: pop edi */
    /* cmp ecx, 2 */ /* 0x1006F5E2: cmp ecx, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = POP32_VAL(esp); /* 0x1006F5E5: pop esi */
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x1006F5E6: setne al */
    ebx = POP32_VAL(esp); /* 0x1006F5E9: pop ebx */
    esp = ebp; /* 0x1006F5EA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1006F5EC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1006F5ED: ret 8 */
L_1006F5F0:
    eax = ebp + 0x8; /* 0x1006F5F0: lea eax, [ebp + 8] */
    MEM32(ebp + 0x8) = 0x100678E8u; /* 0x1006F5F3: mov dword ptr [ebp + 8], 0x100678e8 */
    PUSH32(esp, eax); /* 0x1006F5FA: push eax */
    ecx = ebp + (-0xC); /* 0x1006F5FB: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1009DD30); /* 0x1006F5FE: call 0x1009dd30 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x100DCFBCu); /* 0x1006F603: push 0x100dcfbc */
    eax = ebp + (-0xC); /* 0x1006F608: lea eax, [ebp - 0xc] */
    MEM32(ebp + (-0xC)) = 0x100677D4u; /* 0x1006F60B: mov dword ptr [ebp - 0xc], 0x100677d4 */
    PUSH32(esp, eax); /* 0x1006F612: push eax */
    RECOMP_CALL(sub_100192EB); /* 0x1006F613: call 0x100192eb */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1006F618u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1006F619(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006F619u);

L_1006F619:
    PUSH32(esp, ebp); /* 0x1006F619: push ebp */
    ebp = esp; /* 0x1006F61A: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1006F61C: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1006F61D: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x1006F620: mov esi, ecx */
    RECOMP_CALL(sub_1002D16D); /* 0x1006F622: call 0x1002d16d */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x100677D4u; /* 0x1006F627: mov dword ptr [esi], 0x100677d4 */
    eax = esi; /* 0x1006F62D: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1006F62F: pop esi */
    ebp = POP32_VAL(esp); /* 0x1006F630: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1006F631: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1006F650(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006F650u);

L_1006F650:
    PUSH32(esp, ebp); /* 0x1006F650: push ebp */
    ebp = esp; /* 0x1006F651: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1006F653: push ecx */
    PUSH32(esp, esi); /* 0x1006F654: push esi */
    esi = ecx; /* 0x1006F655: mov esi, ecx */
    PUSH32(esp, edi); /* 0x1006F657: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1006F658: mov edi, dword ptr [ebp + 8] */
    eax = MEM32(edi + 0x8); /* 0x1006F65B: mov eax, dword ptr [edi + 8] */
    MEM32(esi + 0x8) = eax; /* 0x1006F65E: mov dword ptr [esi + 8], eax */
    eax = MEM32(edi + 0x4); /* 0x1006F661: mov eax, dword ptr [edi + 4] */
    MEM32(esi + 0x4) = eax; /* 0x1006F664: mov dword ptr [esi + 4], eax */
    /* cmp MEM32(esi + 0x4), 0 */ /* 0x1006F667: cmp dword ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(edi); /* 0x1006F66B: mov eax, dword ptr [edi] */
    MEM32(esi) = eax; /* 0x1006F66D: mov dword ptr [esi], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1006F697; /* 0x1006F66F: jne 0x1006f697 */
L_1006F671:
    edx = esi; /* 0x1006F671: mov edx, esi */
    ecx = esi + 0x1C; /* 0x1006F673: lea ecx, [esi + 0x1c] */
    eax = edi; /* 0x1006F676: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(ecx); if (eax == _d) { MEM32(ecx) = edx; } else { eax = _d; } } /* 0x1006F678: lock cmpxchg dword ptr [ecx], edx */
    _flag_k = FK_CMP;
    /* cmp eax, edi */ /* 0x1006F67C: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006F697; /* 0x1006F67E: je 0x1006f697 */
L_1006F680:
    ecx = edi; /* 0x1006F680: mov ecx, edi */
    RECOMP_CALL(sub_1006F291); /* 0x1006F682: call 0x1006f291 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x8); /* 0x1006F687: mov eax, dword ptr [edi + 8] */
    MEM32(esi + 0x8) = eax; /* 0x1006F68A: mov dword ptr [esi + 8], eax */
    eax = MEM32(edi + 0x4); /* 0x1006F68D: mov eax, dword ptr [edi + 4] */
    MEM32(esi + 0x4) = eax; /* 0x1006F690: mov dword ptr [esi + 4], eax */
    eax = MEM32(edi); /* 0x1006F693: mov eax, dword ptr [edi] */
    MEM32(esi) = eax; /* 0x1006F695: mov dword ptr [esi], eax */
L_1006F697:
    edi = POP32_VAL(esp); /* 0x1006F697: pop edi */
    MEM32(esi + 0x18) = esi; /* 0x1006F698: mov dword ptr [esi + 0x18], esi */
    esi = POP32_VAL(esp); /* 0x1006F69B: pop esi */
    ecx = POP32_VAL(esp); /* 0x1006F69C: pop ecx */
    ebp = POP32_VAL(esp); /* 0x1006F69D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1006F69E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1006F6A1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006F6A1u);

L_1006F6A1:
    PUSH32(esp, 8); /* 0x1006F6A1: push 8 */
    eax = 0x100DB35Cu; /* 0x1006F6A3: mov eax, 0x100db35c */
    RECOMP_CALL(sub_100149A4); /* 0x1006F6A8: call 0x100149a4 */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x1006F6AD: mov edi, ecx */
    eax = MEM32(ebp + 0x8); /* 0x1006F6AF: mov eax, dword ptr [ebp + 8] */
    esi = edi + 0x4; /* 0x1006F6B2: lea esi, [edi + 4] */
    MEM32(edi) = eax; /* 0x1006F6B5: mov dword ptr [edi], eax */
    MEM32(ebp + 0x8) = esi; /* 0x1006F6B7: mov dword ptr [ebp + 8], esi */
    MEM32(ebp + (-0x10)) = esi; /* 0x1006F6BA: mov dword ptr [ebp - 0x10], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1006F6BD: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x1006F6C1: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006F6CE; /* 0x1006F6C3: je 0x1006f6ce */
L_1006F6C5:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1006F6C5: push -1 */
    ecx = esi; /* 0x1006F6C7: mov ecx, esi */
    RECOMP_CALL(sub_100148A0); /* 0x1006F6C9: call 0x100148a0 */
    RECOMP_FLAGS_IN();
L_1006F6CE:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1006F6CE: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(edi); /* 0x1006F6D2: mov ecx, dword ptr [edi] */
    PUSH32(esp, 1); /* 0x1006F6D4: push 1 */
    PUSH32(esp, esi); /* 0x1006F6D6: push esi */
    RECOMP_CALL(sub_1006F550); /* 0x1006F6D7: call 0x1006f550 */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x1006F6DC: mov eax, edi */
    RECOMP_CALL(sub_100149D7); /* 0x1006F6DE: call 0x100149d7 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1006F6E3: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1006F6E6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006F6E6u);

L_1006F6E6:
    PUSH32(esp, ebp); /* 0x1006F6E6: push ebp */
    ebp = esp; /* 0x1006F6E7: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x1006F6E9: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x1006F6EC: sub esp, 0x1c */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1006F6EF: push esi */
    esi = ecx; /* 0x1006F6F0: mov esi, ecx */
    ecx = esp + 0x8; /* 0x1006F6F2: lea ecx, [esp + 8] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1006F6F6: push -1 */
    RECOMP_CALL(sub_100148A0); /* 0x1006F6F8: call 0x100148a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x1006F6FD: push 0 */
    eax = esp + 0xC; /* 0x1006F6FF: lea eax, [esp + 0xc] */
    ecx = esi; /* 0x1006F703: mov ecx, esi */
    PUSH32(esp, eax); /* 0x1006F705: push eax */
    RECOMP_CALL(sub_10014A24); /* 0x1006F706: call 0x10014a24 */
    RECOMP_FLAGS_IN();
    eax = esp + 0x8; /* 0x1006F70B: lea eax, [esp + 8] */
    ecx = esi; /* 0x1006F70F: mov ecx, esi */
    PUSH32(esp, eax); /* 0x1006F711: push eax */
    RECOMP_CALL(sub_1006F7B1); /* 0x1006F712: call 0x1006f7b1 */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x1006F717: pop esi */
    esp = ebp; /* 0x1006F718: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1006F71A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006F71B: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006F71C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006F71Cu);

L_1006F71C:
    PUSH32(esp, ebp); /* 0x1006F71C: push ebp */
    ebp = esp; /* 0x1006F71D: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x1006F71F: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x1006F722: sub esp, 0x18 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1006F725: push esi */
    PUSH32(esp, edi); /* 0x1006F726: push edi */
    edi = ecx; /* 0x1006F727: mov edi, ecx */
    ecx = esp + 0x8; /* 0x1006F729: lea ecx, [esp + 8] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1006F72D: push -1 */
    RECOMP_CALL(sub_100148A0); /* 0x1006F72F: call 0x100148a0 */
    RECOMP_FLAGS_IN();
    esi = esp + 0x8; /* 0x1006F734: lea esi, [esp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1006F738: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = edi + 0x20; /* 0x1006F73A: lea edx, [edi + 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(edx); if (eax == _d) { MEM32(edx) = esi; } else { eax = _d; } } /* 0x1006F73D: lock cmpxchg dword ptr [edx], esi */
    _flag_k = FK_CMP;
    /* test eax, eax */ /* 0x1006F741: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006F787; /* 0x1006F743: jne 0x1006f787 */
L_1006F745:
    eax = esp + 0x8; /* 0x1006F745: lea eax, [esp + 8] */
    PUSH32(esp, 3); /* 0x1006F749: push 3 */
    MEM32(edi + 0x1C) = eax; /* 0x1006F74B: mov dword ptr [edi + 0x1c], eax */
    ecx = edi + 0x24; /* 0x1006F74E: lea ecx, [edi + 0x24] */
    edx = POP32_VAL(esp); /* 0x1006F751: pop edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1006F752: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(ecx); if (eax == _d) { MEM32(ecx) = edx; } else { eax = _d; } } /* 0x1006F754: lock cmpxchg dword ptr [ecx], edx */
    _flag_k = FK_CMP;
    /* test eax, eax */ /* 0x1006F758: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006F77B; /* 0x1006F75A: jne 0x1006f77b */
L_1006F75C:
    PUSH32(esp, edi); /* 0x1006F75C: push edi */
    ecx = esp + 0xC; /* 0x1006F75D: lea ecx, [esp + 0xc] */
    RECOMP_CALL(sub_100149EB); /* 0x1006F761: call 0x100149eb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esp + 0x10)); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(esp + 0x10) = MEM32(esp + 0x10) & 0xFFFFFFFEu; /* 0x1006F766: and dword ptr [esp + 0x10], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esp + 0x8; /* 0x1006F76B: lea eax, [esp + 8] */
    PUSH32(esp, eax); /* 0x1006F76F: push eax */
    ecx = edi; /* 0x1006F770: mov ecx, edi */
    RECOMP_CALL(sub_1006F7B1); /* 0x1006F772: call 0x1006f7b1 */
    RECOMP_FLAGS_IN();
    SET_LO8(eax, 1); /* 0x1006F777: mov al, 1 */
    goto L_1006F789; /* 0x1006F779: jmp 0x1006f789 */
L_1006F77B:
    eax = esp + 0x8; /* 0x1006F77B: lea eax, [esp + 8] */
    ecx = edi; /* 0x1006F77F: mov ecx, edi */
    PUSH32(esp, eax); /* 0x1006F781: push eax */
    RECOMP_CALL(sub_10014B3B); /* 0x1006F782: call 0x10014b3b */
    RECOMP_FLAGS_IN();
L_1006F787:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x1006F787: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_1006F789:
    edi = POP32_VAL(esp); /* 0x1006F789: pop edi */
    esi = POP32_VAL(esp); /* 0x1006F78A: pop esi */
    esp = ebp; /* 0x1006F78B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1006F78D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006F78E: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006F78F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006F78Fu);

L_1006F78F:
    PUSH32(esp, esi); /* 0x1006F78F: push esi */
    esi = ecx + 0x24; /* 0x1006F790: lea esi, [ecx + 0x24] */
    goto L_1006F7A2; /* 0x1006F793: jmp 0x1006f7a2 */
L_1006F795:
    ecx = edx + 0x8; /* 0x1006F795: lea ecx, [edx + 8] */
    eax = edx; /* 0x1006F798: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(esi); if (eax == _d) { MEM32(esi) = ecx; } else { eax = _d; } } /* 0x1006F79A: lock cmpxchg dword ptr [esi], ecx */
    _flag_k = FK_CMP;
    /* cmp eax, edx */ /* 0x1006F79E: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006F7AD; /* 0x1006F7A0: je 0x1006f7ad */
L_1006F7A2:
    edx = MEM32(esi); /* 0x1006F7A2: mov edx, dword ptr [esi] */
    /* test LO8(edx), 3 */ /* 0x1006F7A4: test dl, 3 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006F795; /* 0x1006F7A7: je 0x1006f795 */
L_1006F7A9:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x1006F7A9: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    esi = POP32_VAL(esp); /* 0x1006F7AB: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006F7AC: ret  */
L_1006F7AD:
    SET_LO8(eax, 1); /* 0x1006F7AD: mov al, 1 */
    esi = POP32_VAL(esp); /* 0x1006F7AF: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006F7B0: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006F7B1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006F7B1u);

L_1006F7B1:
    PUSH32(esp, ebp); /* 0x1006F7B1: push ebp */
    ebp = esp; /* 0x1006F7B2: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1006F7B4: push ecx */
    PUSH32(esp, esi); /* 0x1006F7B5: push esi */
    esi = ecx; /* 0x1006F7B6: mov esi, ecx */
    PUSH32(esp, edi); /* 0x1006F7B8: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1006F7B9: mov edi, dword ptr [ebp + 8] */
    eax = MEM32(edi + 0x8); /* 0x1006F7BC: mov eax, dword ptr [edi + 8] */
    MEM32(esi + 0x8) = eax; /* 0x1006F7BF: mov dword ptr [esi + 8], eax */
    eax = MEM32(edi + 0x4); /* 0x1006F7C2: mov eax, dword ptr [edi + 4] */
    MEM32(esi + 0x4) = eax; /* 0x1006F7C5: mov dword ptr [esi + 4], eax */
    /* cmp MEM32(esi + 0x4), 0 */ /* 0x1006F7C8: cmp dword ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(edi); /* 0x1006F7CC: mov eax, dword ptr [edi] */
    MEM32(esi) = eax; /* 0x1006F7CE: mov dword ptr [esi], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1006F7F8; /* 0x1006F7D0: jne 0x1006f7f8 */
L_1006F7D2:
    edx = esi; /* 0x1006F7D2: mov edx, esi */
    ecx = esi + 0x20; /* 0x1006F7D4: lea ecx, [esi + 0x20] */
    eax = edi; /* 0x1006F7D7: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(ecx); if (eax == _d) { MEM32(ecx) = edx; } else { eax = _d; } } /* 0x1006F7D9: lock cmpxchg dword ptr [ecx], edx */
    _flag_k = FK_CMP;
    /* cmp eax, edi */ /* 0x1006F7DD: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006F7F8; /* 0x1006F7DF: je 0x1006f7f8 */
L_1006F7E1:
    ecx = edi; /* 0x1006F7E1: mov ecx, edi */
    RECOMP_CALL(sub_1006F291); /* 0x1006F7E3: call 0x1006f291 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x8); /* 0x1006F7E8: mov eax, dword ptr [edi + 8] */
    MEM32(esi + 0x8) = eax; /* 0x1006F7EB: mov dword ptr [esi + 8], eax */
    eax = MEM32(edi + 0x4); /* 0x1006F7EE: mov eax, dword ptr [edi + 4] */
    MEM32(esi + 0x4) = eax; /* 0x1006F7F1: mov dword ptr [esi + 4], eax */
    eax = MEM32(edi); /* 0x1006F7F4: mov eax, dword ptr [edi] */
    MEM32(esi) = eax; /* 0x1006F7F6: mov dword ptr [esi], eax */
L_1006F7F8:
    edi = POP32_VAL(esp); /* 0x1006F7F8: pop edi */
    MEM32(esi + 0x1C) = esi; /* 0x1006F7F9: mov dword ptr [esi + 0x1c], esi */
    esi = POP32_VAL(esp); /* 0x1006F7FC: pop esi */
    ecx = POP32_VAL(esp); /* 0x1006F7FD: pop ecx */
    ebp = POP32_VAL(esp); /* 0x1006F7FE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1006F7FF: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1006F802(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006F802u);

L_1006F802:
    PUSH32(esp, MEM32(ecx + 0x8)); /* 0x1006F802: push dword ptr [ecx + 8] */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x1006F805: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1006F808: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006F809: ret  */
    RECOMP_REGS_OUT();
}
